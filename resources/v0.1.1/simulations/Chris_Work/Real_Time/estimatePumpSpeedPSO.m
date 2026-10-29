function result = estimatePumpSpeedPSO(labDataFile, modelName, varargin)
%ESTIMATEPUMPSPEEDPSO Identify centrifugal-pump shaft speed from P4-P5.
%
% This routine is intended for a test with the bypass physically CLOSED:
%     physical valve angle = 90 deg
%     model normalized opening = 1 - 90/90 = 0
%
% Required lab MAT-file variables:
%   time         Time vector, seconds.
%   P_upstream   P5: pressure immediately upstream of the pump, Pa.
%   P_downstream P4: pressure immediately downstream of the pump, Pa.
%
% Required Simulink setup:
%   1. Log a scalar signal named pumpDeltaP in logsout, in Pa, defined as
%      pumpDeltaP = P4 - P5.  This is positive across a running pump.
%   2. Drive the centrifugal-pump shaft-speed input with a Constant block
%      whose value is the model-workspace variable pumpShaftSpeedRadps
%      (or the name supplied through PumpSpeedVariable).
%   3. The bypass-valve Constant block must use bypassOpeningEstimate.
%
% Example:
%   result = estimatePumpSpeedPSO('PumpClosedBypassRun.mat', ...
%              'SMR_PrimaryDT_v2', ...
%              'SpeedBoundsRadps',[250 420], ...
%              'WindowSamples',600);
%
% The result includes shaftSpeedRadps and shaftSpeedRPM.  The returned
% speed is a calibrated model parameter; it is not necessarily the motor's
% electrical synchronous speed.

if nargin < 1 || isempty(labDataFile)
    labDataFile = 'PumpClosedBypassRun.mat';
end
if nargin < 2 || isempty(modelName)
    modelName = 'SMR_PrimaryDT_v3';
end

p = inputParser;
p.addParameter('SpeedBoundsRadps', [185 385], @(x) isnumeric(x) && ...
    isvector(x) && numel(x) == 2 && all(isfinite(x)) && x(1) > 0 && x(2) > x(1));
p.addParameter('ValveAngleDeg', 90, @(x) isnumeric(x) && isscalar(x) && ...
    isfinite(x) && x >= 0 && x <= 90);
p.addParameter('PumpSpeedVariable', 'pumpShaftSpeedRadps', @(x) ischar(x) || isstring(x));
p.addParameter('WindowSamples', 500, @(x) isnumeric(x) && isscalar(x) && x >= 2);
p.addParameter('WarmupTime', 0, @(x) isnumeric(x) && isscalar(x) && isfinite(x) && x >= 0);
p.addParameter('PressureScalePa', 1e4, @(x) isnumeric(x) && isscalar(x) && x > 0);
p.addParameter('SwarmSize', 4, @(x) isnumeric(x) && isscalar(x) && x >= 2 && mod(x,1) == 0);
p.addParameter('MaxIterations', 5, @(x) isnumeric(x) && isscalar(x) && x >= 1 && mod(x,1) == 0);
p.parse(varargin{:});
cfg = p.Results;
cfg.PumpSpeedVariable = char(cfg.PumpSpeedVariable);

raw = load(labDataFile);
required = {'time','P_upstream','P_downstream'};
for k = 1:numel(required)
    assert(isfield(raw, required{k}), ...
        'estimatePumpSpeedPSO:MissingData', ...
        'The file %s must contain %s.', labDataFile, required{k});
end

t = raw.time(:);
p5 = raw.P_upstream(:);
p4 = raw.P_downstream(:);
valid = isfinite(t) & isfinite(p5) & isfinite(p4);
t = t(valid);
p5 = p5(valid);
p4 = p4(valid);
assert(numel(t) >= 2, 'estimatePumpSpeedPSO:InsufficientData', ...
    'At least two finite P4/P5 samples are required.');

% The native lab time stamp may be absolute.  Rebase it for Simulink.
t = t - t(1);
[t, uniqueIdx] = unique(t, 'stable');
p5 = p5(uniqueIdx);
p4 = p4(uniqueIdx);

if isinf(cfg.WindowSamples)
    firstIdx = 1;
else
    firstIdx = max(1, numel(t) - cfg.WindowSamples + 1);
end

sourceWindowStartTime = t(firstIdx);
measured.time = t(firstIdx:end) - sourceWindowStartTime;
measured.pumpHead = p4(firstIdx:end) - p5(firstIdx:end); % P4 - P5, Pa
measured.stopTime = measured.time(end);
assert(measured.stopTime > 0, 'estimatePumpSpeedPSO:BadTime', ...
    'The selected time window must span a nonzero duration.');

% Physical convention: 0 deg = fully open and 90 deg = fully closed.
fixedOpening = 1 - cfg.ValveAngleDeg/90;

load_system(modelName);
options = optimoptions('particleswarm', ...
    'SwarmSize', cfg.SwarmSize, ...
    'MaxIterations', cfg.MaxIterations, ...
    'Display', 'iter', ...
    'UseVectorized', false);

objective = @(speedRadps) localObjective(speedRadps, measured, modelName, ...
    fixedOpening, cfg);
[speedHat, cost, exitFlag, output] = particleswarm(objective, 1, ...
    cfg.SpeedBoundsRadps(1), cfg.SpeedBoundsRadps(2), options);

result = struct;
result.shaftSpeedRadps = speedHat;
result.shaftSpeedRPM = speedHat * 60/(2*pi);
result.cost = cost;
result.exitFlag = exitFlag;
result.output = output;
result.searchBoundsRadps = cfg.SpeedBoundsRadps;
result.fixedValveAngleDeg = cfg.ValveAngleDeg;
result.normalizedValveOpening = fixedOpening;
result.windowStartTime = sourceWindowStartTime;
result.windowEndTime = sourceWindowStartTime + measured.time(end);
result.warmupTime = cfg.WarmupTime;
end

function cost = localObjective(speedRadps, measured, modelName, fixedOpening, cfg)
try
    speedRadps = speedRadps(1);
    in = Simulink.SimulationInput(modelName);
    in = in.setVariable(cfg.PumpSpeedVariable, speedRadps, 'Workspace', modelName);
    in = in.setVariable('bypassOpeningEstimate', fixedOpening, 'Workspace', modelName);
    in = in.setModelParameter('StopTime', num2str(cfg.WarmupTime + measured.stopTime, '%.15g'));

    out = sim(in);
    signal = out.logsout.get('pumpDeltaP');
    simTime = signal.Values.Time(:);
    simDeltaP = signal.Values.Data(:);

    % Compare the requested lab interval after an optional model warmup.
    compareTime = cfg.WarmupTime + measured.time;
    assert(numel(simTime) == numel(simDeltaP), ...
        'pumpDeltaP must be one scalar sample per simulation time step.');
    valid = isfinite(simTime) & isfinite(simDeltaP);
    simTime = simTime(valid);
    simDeltaP = simDeltaP(valid);
    assert(numel(simTime) >= 2, 'No valid samples were logged for pumpDeltaP.');
    % Variable-step logs can end a few floating-point ticks either side of
    % StopTime.  Accept that insignificant difference, but do not conceal a
    % genuine early termination.
    logIntervals = diff(unique(simTime));
    logIntervals = logIntervals(logIntervals > 0 & isfinite(logIntervals));
    if isempty(logIntervals)
        logSampleTolerance = 0;
    else
        % A logged discrete signal has no value between its final sample and
        % StopTime.  Permit up to one sample interval and hold that last
        % sample during the small fractional tail.
        logSampleTolerance = max(logIntervals);
    end
    timeTolerance = max([1e-6, ...
        1e-8 * max([max(abs(compareTime)), max(abs(simTime))]), ...
        logSampleTolerance]);
    if compareTime(1) < simTime(1) - timeTolerance || ...
            compareTime(end) > simTime(end) + timeTolerance
        error('estimatePumpSpeedPSO:InsufficientCoverage', ...
            ['Simulation time coverage [%.9g, %.9g] s does not cover ', ...
             'requested comparison window [%.9g, %.9g] s.'], ...
            simTime(1), simTime(end), compareTime(1), compareTime(end));
    end
    compareTime = min(max(compareTime, simTime(1)), simTime(end));

    simulated = interp1(simTime, simDeltaP, compareTime, 'linear');
    residual = (simulated - measured.pumpHead) / cfg.PressureScalePa;
    cost = mean(residual.^2, 'omitnan');
    if ~isfinite(cost)
        cost = 1e12;
    end
catch ME
    warning('estimatePumpSpeedPSO:CandidateFailed', ...
        'Pump-speed candidate %.3f rad/s failed: %s', speedRadps(1), ME.message);
    cost = 1e12;
end
end
