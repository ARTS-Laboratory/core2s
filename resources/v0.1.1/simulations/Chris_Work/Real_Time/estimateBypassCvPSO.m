function result = estimateBypassCvPSO(labDataFile, modelName, varargin)

if nargin < 1 || isempty(labDataFile)
    labDataFile = 'PrimaryLoopRun_15deg.mat';
end

if nargin < 2 || isempty(modelName)
    modelName = 'SMR_PrimaryDT_v2';
end

p = inputParser;

p.addParameter('ValveAngleDeg', 15, @(x) isnumeric(x) && isfinite(x) && x >= 0 && x < 90);
p.addParameter('PumpSpeedRadps', 252.831, ...
    @(x) isnumeric(x) && isscalar(x) && isfinite(x) && x > 0);
p.addParameter('CvScaleBounds', [0.1 3], @(x) isnumeric(x) && isvector(x) && numel(x) == 2 ...
    && all(isfinite(x)) && x(1) > 0 && x(2) > x(1));
p.addParameter('CvScaleVariable', 'bypassCvScale', @(x) ischar(x) || isstring(x));
p.addParameter('PumpSpeedVariable', 'pumpShaftSpeedRadps', ...
    @(x) ischar(x) || isstring(x));
p.addParameter('WindowSamples', 120, @(x) isnumeric(x) && isscalar(x) && x >= 2 && ...
    (isinf(x) || mod(x,1) == 0));
p.addParameter('WarmupTime', 0, ...
    @(x) isnumeric(x) && isscalar(x) && isfinite(x) && x >= 0);
p.addParameter('PressureScalePa', 1e4, ...
    @(x) isnumeric(x) && isscalar(x) && x > 0);

p.addParameter('SwarmSize', 10, ...
    @(x) isnumeric(x) && isscalar(x) && x >= 2 && mod(x,1) == 0);

p.addParameter('MaxIterations', 15, ...
    @(x) isnumeric(x) && isscalar(x) && x >= 1 && mod(x,1) == 0);

p.parse(varargin{:});
cfg = p.Results;

cfg.CvScaleVariable = char(cfg.CvScaleVariable);

raw = load(labDataFile);

required = {'time', 'P_upstream', 'P_downstream'};

for k = 1:numel(required)
    assert(isfield(raw, required{k}), ...
        'estimateBypassCvPSO:MissingData', ...
        'The file %s must contain %s.', labDataFile, required{k});
end

t = localVector(raw.time, 'time');
p2 = localVector(raw.P_upstream, 'P_upstream');
p3 = localVector(raw.P_downstream, 'P_downstream');

assert(numel(t) == numel(p2) && numel(t) == numel(p3), ...
    'time, P_upstream, and P_downstream must have equal lengths.');

valid = isfinite(t) & isfinite(p2) & isfinite(p3);

t = t(valid);
p2 = p2(valid);
p3 = p3(valid);

assert(numel(t) >= 2, ...
    'estimateBypassCvPSO:InsufficientData', ...
    'At least two finite pressure samples are required.');

[t, keep] = unique(t - t(1), 'stable');

p2 = p2(keep);
p3 = p3(keep);

if isinf(cfg.WindowSamples)
    firstIdx = 1;
else
    firstIdx = max(1, numel(t) - cfg.WindowSamples + 1);
end

sourceWindowStartTime = t(firstIdx);

measured.time = t(firstIdx:end) - sourceWindowStartTime;
measured.deltaP = p2(firstIdx:end) - p3(firstIdx:end);
measured.stopTime = measured.time(end);

assert(measured.stopTime > 0, ...
    'estimateBypassCvPSO:BadTime', ...
    'The selected window must span nonzero time.');

% Physical convention: 0 deg = open, 90 deg = closed.
fixedOpening = 1 - cfg.ValveAngleDeg / 90;

load_system(modelName);

options = optimoptions('particleswarm', ...
    'SwarmSize', cfg.SwarmSize, ...
    'MaxIterations', cfg.MaxIterations, ...
    'Display', 'iter', ...
    'UseVectorized', false);

objective = @(cvScale) localObjective(cvScale, measured, modelName, ...
    fixedOpening, cfg);

[cvScaleHat, cost, exitFlag, output] = particleswarm( ...
    objective, ...
    1, ...
    cfg.CvScaleBounds(1), ...
    cfg.CvScaleBounds(2), ...
    options);

result = struct;

result.CvScale = cvScaleHat;
result.cost = cost;
result.exitFlag = exitFlag;
result.output = output;
result.searchBounds = cfg.CvScaleBounds;

result.fixedValveAngleDeg = cfg.ValveAngleDeg;
result.normalizedValveOpening = fixedOpening;

result.fixedPumpSpeedRadps = cfg.PumpSpeedRadps;
result.fixedPumpSpeedRPM = cfg.PumpSpeedRadps * 60 / (2*pi);

result.windowStartTime = sourceWindowStartTime;
result.windowEndTime = sourceWindowStartTime + measured.time(end);
result.warmupTime = cfg.WarmupTime;

end


function cost = localObjective(cvScale, measured, modelName, fixedOpening, cfg)

try
    cvScale = cvScale(1);

    in = Simulink.SimulationInput(modelName);

    in = in.setVariable( ...
        cfg.CvScaleVariable, ...
        cvScale, ...
        'Workspace', modelName);

    in = in.setVariable( ...
        cfg.PumpSpeedVariable, ...
        cfg.PumpSpeedRadps, ...
        'Workspace', modelName);

    in = in.setVariable( ...
        'bypassOpeningEstimate', ...
        fixedOpening, ...
        'Workspace', modelName);

    in = in.setModelParameter( ...
        'StopTime', ...
        num2str(cfg.WarmupTime + measured.stopTime, '%.15g'));

    out = sim(in);

    signal = out.logsout.get('bypassDeltaP');

    simTime = signal.Values.Time(:);
    simDeltaP = signal.Values.Data(:);

    assert(numel(simTime) == numel(simDeltaP), ...
        'bypassDeltaP must be one scalar sample per simulation time step.');

    valid = isfinite(simTime) & isfinite(simDeltaP);

    simTime = simTime(valid);
    simDeltaP = simDeltaP(valid);

    assert(numel(simTime) >= 2, ...
        'No valid samples were logged for bypassDeltaP.');

    compareTime = cfg.WarmupTime + measured.time;

    logIntervals = diff(unique(simTime));
    logIntervals = logIntervals(logIntervals > 0 & isfinite(logIntervals));

    if isempty(logIntervals)
        logSampleTolerance = 0;
    else
        logSampleTolerance = max(logIntervals);
    end

    timeTolerance = max([ ...
        1e-6, ...
        1e-8 * max([max(abs(compareTime)), max(abs(simTime))]), ...
        logSampleTolerance]);

    if compareTime(1) < simTime(1) - timeTolerance || ...
            compareTime(end) > simTime(end) + timeTolerance

        error('estimateBypassCvPSO:InsufficientCoverage', ...
            ['Simulation time coverage [%.9g, %.9g] s does not cover ', ...
             'requested comparison window [%.9g, %.9g] s.'], ...
            simTime(1), simTime(end), ...
            compareTime(1), compareTime(end));
    end

    compareTime = min(max(compareTime, simTime(1)), simTime(end));

    simulated = interp1(simTime, simDeltaP, compareTime, 'linear');

    residual = (simulated - measured.deltaP) / cfg.PressureScalePa;

    cost = mean(residual.^2, 'omitnan');

    if ~isfinite(cost)
        cost = 1e12;
    end

catch ME

    warning('estimateBypassCvPSO:CandidateFailed', ...
        'Cv-scale candidate %.5g failed: %s', ...
        cvScale(1), ME.message);

    cost = 1e12;

end

end


function x = localVector(value, variableName)

if isa(value, 'timeseries')
    x = value.Data;

elseif istimetable(value)
    x = value.Variables;

else
    x = value;
end

x = squeeze(x);

assert(isnumeric(x) && isvector(x), ...
    'estimateBypassCvPSO:InvalidData', ...
    '%s must be a numeric vector.', variableName);

x = x(:);

end