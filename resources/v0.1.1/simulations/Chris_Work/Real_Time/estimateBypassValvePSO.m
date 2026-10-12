function result = estimateBypassValvePSO(labDataFile, modelName, varargin)
%ESTIMATEBYPASSVALVEPSO Estimate a 0--90 degree bypass-valve position.
%
% This function runs particle swarm optimization (PSO) against a Simscape
% primary-loop model.  It uses laboratory pressure and temperature data to
% estimate the bypass-valve angle that best reproduces the selected data
% window.
%
% REQUIRED INPUTS
%   labDataFile : MAT-file containing equally sampled vectors:
%       time, P_upstream, P_downstream, T_primary
%   modelName   : Simulink model name without the .slx extension, for
%                 example "SMR_PrimaryDT_v1".
%
% MODEL PREPARATION
%   1. Add a variable named bypassOpeningEstimate immediately before the
%      bypass-valve Simulink-PS Converter.  It must be the normalized
%      opening: 0 = 0 deg, 1 = 90 deg.
%   2. Enable signal logging and label these signals exactly as
%      "bypassDeltaP" and "primaryTemperature":
%         bypassDeltaP      = P_upstream - P_downstream
%         primaryTemperature = selected primary-loop temperature
%      Their units must match the laboratory vectors (normally Pa and K).
%
% EXAMPLE
%   result = estimateBypassValvePSO("PrimaryLoopRun_01.mat", ...
%       "SMR_PrimaryDT_v1", "WindowSamples", 100, ...
%       "PreviousAngleDeg", 35);
%
% The default search is deliberately local to the previous estimate.  This
% prevents noise from producing implausibly large angle jumps during later
% moving-window use.

parser = inputParser;
parser.addRequired('labDataFile', @(x) ischar(x) || isstring(x));
parser.addRequired('modelName', @(x) ischar(x) || isstring(x));
parser.addParameter('WindowSamples', 100, @(x) isnumeric(x) && isscalar(x) && x >= 2);
parser.addParameter('PreviousAngleDeg', 45, @(x) isnumeric(x) && isscalar(x));
parser.addParameter('MaxAngleStepDeg', 5, @(x) isnumeric(x) && isscalar(x) && x > 0);
parser.addParameter('PressureScale', 1.0e4, @(x) isnumeric(x) && isscalar(x) && x > 0);
parser.addParameter('TemperatureScale', 1.0, @(x) isnumeric(x) && isscalar(x) && x > 0);
parser.addParameter('PressureWeight', 0.85, @(x) isnumeric(x) && isscalar(x) && x >= 0);
parser.addParameter('TemperatureWeight', 0.15, @(x) isnumeric(x) && isscalar(x) && x >= 0);
parser.addParameter('SwarmSize', 10, @(x) isnumeric(x) && isscalar(x) && x >= 2);
parser.addParameter('MaxIterations', 15, @(x) isnumeric(x) && isscalar(x) && x >= 1);
parser.parse(labDataFile, modelName, varargin{:});
cfg = parser.Results;

if abs(cfg.PressureWeight + cfg.TemperatureWeight - 1) > 1e-12
    error('PressureWeight and TemperatureWeight must sum to 1.');
end

modelName = char(SMR_PrimaryDT_v1);
if ~bdIsLoaded(modelName)
    load_system(modelName);
end

raw = load(labDataFile);
requiredNames = {'time', 'P_upstream', 'P_downstream', 'T_primary'};
for k = 1:numel(requiredNames)
    if ~isfield(raw, requiredNames{k})
        error('The MAT-file must contain a variable named "%s".', requiredNames{k});
    end
end

t = localVector(raw.time, 'time');
pUp = localVector(raw.P_upstream, 'P_upstream');
pDown = localVector(raw.P_downstream, 'P_downstream');
tPrimary = localVector(raw.T_primary, 'T_primary');

n = numel(t);
if any([numel(pUp), numel(pDown), numel(tPrimary)] ~= n)
    error('time, P_upstream, P_downstream, and T_primary must have equal lengths.');
end

first = max(1, n - cfg.WindowSamples + 1);
measured.time = t(first:end) - t(first);
measured.dP = pUp(first:end) - pDown(first:end);
measured.T = tPrimary(first:end);
measured.stopTime = measured.time(end);

lowerBound = max(0, cfg.PreviousAngleDeg - cfg.MaxAngleStepDeg);
upperBound = min(90, cfg.PreviousAngleDeg + cfg.MaxAngleStepDeg);

options = optimoptions('particleswarm', ...
    'SwarmSize', cfg.SwarmSize, ...
    'MaxIterations', cfg.MaxIterations, ...
    'Display', 'iter');

objective = @(thetaDeg) localObjective(thetaDeg, measured, modelName, cfg);
[thetaHat, cost, exitFlag, output] = particleswarm(objective, 1, ...
    lowerBound, upperBound, options);

result.angleDeg = thetaHat;
result.normalizedOpening = thetaHat / 90;
result.cost = cost;
result.exitFlag = exitFlag;
result.output = output;
result.searchBoundsDeg = [lowerBound, upperBound];
result.windowStartTime = t(first);
result.windowEndTime = t(end);

end

function J = localObjective(thetaDeg, measured, modelName, cfg)
% Map the mechanically meaningful 0--90 degree angle into the valve input.
opening = min(max(thetaDeg / 90, 0), 1);

in = Simulink.SimulationInput(modelName);
in = in.setVariable('bypassOpeningEstimate', opening);
in = in.setModelParameter('StopTime', num2str(measured.stopTime));

try
    out = sim(in);
    dPTwin = localLoggedSignal(out, 'bypassDeltaP');
    tTwin = localLoggedTime(out, 'bypassDeltaP');
    tTwinPrimary = localLoggedTime(out, 'primaryTemperature');
    tPrimaryTwin = localLoggedSignal(out, 'primaryTemperature');

    dPTwin = interp1(tTwin, dPTwin, measured.time, 'linear', 'extrap');
    tPrimaryTwin = interp1(tTwinPrimary, tPrimaryTwin, measured.time, 'linear', 'extrap');

    eP = (dPTwin - measured.dP) / cfg.PressureScale;
    eT = (tPrimaryTwin - measured.T) / cfg.TemperatureScale;
    J = cfg.PressureWeight * mean(eP.^2) + ...
        cfg.TemperatureWeight * mean(eT.^2);
catch simulationError
    % Invalid hydraulic states must be unattractive to PSO, not fatal to it.
    warning('PSO candidate %.3f deg failed: %s', thetaDeg, simulationError.message);
    J = 1e12;
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
if ~isnumeric(x) || ~isvector(x)
    error('"%s" must be a numeric vector or timeseries.', variableName);
end
x = x(:);
end

function data = localLoggedSignal(out, signalName)
signal = out.logsout.get(signalName);
if isempty(signal)
    error('Signal "%s" was not found in logsout.', signalName);
end
data = squeeze(signal.Values.Data);
data = data(:);
end

function time = localLoggedTime(out, signalName)
signal = out.logsout.get(signalName);
if isempty(signal)
    error('Signal "%s" was not found in logsout.', signalName);
end
time = signal.Values.Time(:);
end
