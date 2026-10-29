function result = estimateBypassValvePSO(labDataFile, modelName, varargin)
%ESTIMATEBYPASSVALVEPSO Estimate a 0--90 degree bypass-valve position.
%
% This function runs particle swarm optimization (PSO) against a Simscape
% primary-loop model.  It uses laboratory pressure, temperature, rod power,
% main-loop flow, and secondary HX-flow data to estimate the bypass-valve
% angle that best reproduces the selected data window.
%
% DEFAULT FILES
%   labDataFile : "PrimaryLoopRun_01.mat"
%   modelName   : "SMR_PrimaryDT_v2"
%
% The defaults assume this function, the MAT-file, and the SLX model are on
% the MATLAB path (normally the same working folder).  You may still supply
% alternative files as the first two inputs for a later experiment.
%
% MAT-FILE CONTENTS
%   The file may contain PSO-ready SI variables:
%       time, P2, P3, T2, rodPower, mainLoopFlow, secondaryHXFlow
%   or the raw merged-file channels:
%       P2 (psi), P3 (psi), T2 (deg C), Rod Power (W),
%       Main Loop Flow (GPM), Heat Exchanger Flow (GPM).
%   Raw merged-file channels are converted internally to Pa, K, W, and m^3/s.
%   modelName is the Simulink model name without the .slx extension.
%
% MODEL PREPARATION
%   1. Add a variable named bypassOpeningEstimate immediately before the
%      bypass-valve Simulink-PS Converter.  It must be the normalized
%      opening: 1 = fully open (0 deg), 0 = fully closed (90 deg).
%   2. Enable signal logging and label these signals exactly as
%      "bypassDeltaP", "primaryTemperature", "rodElectricalPower",
%      "mainLoopFlow", and "secondaryHXFlow":
%         bypassDeltaP       = P2 - P3
%         primaryTemperature = selected primary-loop temperature
%         rodElectricalPower = electrical power delivered to the rod [W]
%         mainLoopFlow        = primary/main-loop volumetric flow [m^3/s]
%         secondaryHXFlow     = secondary-side HX flow [m^3/s]
%
% EXAMPLE
%   result = estimateBypassValvePSO([], [], "WindowSamples", 100, ...
%       "PreviousAngleDeg", 35);
%
% The default search is deliberately local to the previous estimate.  This
% prevents noise from producing implausibly large angle jumps during later
% moving-window use.

if nargin < 1
    labDataFile = [];
end
if nargin < 2
    modelName = [];
end

parser = inputParser;
parser.addOptional('labDataFile', "PSOInput_15deg_steady_state.mat", ...
    @(x) isempty(x) || ischar(x) || isstring(x));
parser.addOptional('modelName', "SMR_PrimaryDT_v3", ...
    @(x) isempty(x) || ischar(x) || isstring(x));
parser.addParameter('WindowSamples', 101, @(x) isnumeric(x) && isscalar(x) && x >= 2);
parser.addParameter('PreviousAngleDeg', 30, @(x) isnumeric(x) && isscalar(x));
parser.addParameter('MaxAngleStepDeg', 30, @(x) isnumeric(x) && isscalar(x) && x > 0);
parser.addParameter('PressureScale', 1.0e4, @(x) isnumeric(x) && isscalar(x) && x > 0);
parser.addParameter('TemperatureScale', 1.0, @(x) isnumeric(x) && isscalar(x) && x > 0);
parser.addParameter('PowerScale', 500.0, @(x) isnumeric(x) && isscalar(x) && x > 0);
parser.addParameter('MainFlowScale', 1.0e-3, @(x) isnumeric(x) && isscalar(x) && x > 0);
parser.addParameter('SecondaryFlowScale', 1.0e-4, @(x) isnumeric(x) && isscalar(x) && x > 0);
parser.addParameter('PressureWeight', 0.50, @(x) isnumeric(x) && isscalar(x) && x >= 0);
parser.addParameter('TemperatureWeight', 0.15, @(x) isnumeric(x) && isscalar(x) && x >= 0);
parser.addParameter('PowerWeight', 0.05, @(x) isnumeric(x) && isscalar(x) && x >= 0);
parser.addParameter('MainFlowWeight', 0.20, @(x) isnumeric(x) && isscalar(x) && x >= 0);
parser.addParameter('SecondaryFlowWeight', 0.10, @(x) isnumeric(x) && isscalar(x) && x >= 0);
parser.addParameter('PowerSignalName', 'rodElectricalPower', @(x) ischar(x) || isstring(x));
parser.addParameter('MainFlowSignalName', 'mainLoopFlow', @(x) ischar(x) || isstring(x));
parser.addParameter('SecondaryFlowSignalName', 'secondaryHXFlow', @(x) ischar(x) || isstring(x));
parser.addParameter('SwarmSize', 6, @(x) isnumeric(x) && isscalar(x) && x >= 2);
parser.addParameter('MaxIterations', 5, @(x) isnumeric(x) && isscalar(x) && x >= 1);
parser.parse(labDataFile, modelName, varargin{:});
cfg = parser.Results;

if isempty(cfg.labDataFile)
    labDataFile = "PSOInput_15deg_steady_state.mat";
else
    labDataFile = cfg.labDataFile;
end
if isempty(cfg.modelName)
    modelName = "SMR_PrimaryDT_v3";
else
    modelName = cfg.modelName;
end

weightSum = cfg.PressureWeight + cfg.TemperatureWeight + cfg.PowerWeight + ...
    cfg.MainFlowWeight + cfg.SecondaryFlowWeight;
if abs(weightSum - 1) > 1e-12
    error(['PressureWeight, TemperatureWeight, PowerWeight, MainFlowWeight, ' ...
        'and SecondaryFlowWeight must sum to 1.']);
end

modelName = char(modelName);
if ~bdIsLoaded(modelName)
    load_system(modelName);
end

raw = load(labDataFile);
if ~isfield(raw, 'time')
    error('The MAT-file must contain a variable named "time".');
end

t = localVector(raw.time, 'time');
[p2, p2Name] = localReadChannel(raw, {'P2', 'P2 (psi)'}, 'P2');
[p3, p3Name] = localReadChannel(raw, {'P3', 'P3 (psi)'}, 'P3');
[t2, t2Name] = localReadChannel(raw, {'T2', 'T2 (deg C)'}, 'T2');
[rodPower, ~] = localReadChannel(raw, {'rodPower', 'Rod Power (W)'}, 'rod power');
[mainFlow, mainFlowName] = localReadChannel(raw, ...
    {'mainLoopFlow', 'Main Loop Flow (GPM)'}, 'main-loop flow');
[secondaryFlow, secondaryFlowName] = localReadChannel(raw, ...
    {'secondaryHXFlow', 'Heat Exchanger Flow (GPM)'}, 'secondary HX flow');

% Descriptive raw merged-file channel names carry their laboratory units.
% Clean variable names are assumed to be in SI already.
if strcmp(p2Name, 'P2 (psi)'); p2 = p2 * 6894.757293168; end
if strcmp(p3Name, 'P3 (psi)'); p3 = p3 * 6894.757293168; end
if strcmp(t2Name, 'T2 (deg C)'); t2 = t2 + 273.15; end
if strcmp(mainFlowName, 'Main Loop Flow (GPM)')
    mainFlow = mainFlow * 6.30901964e-5;
end
if strcmp(secondaryFlowName, 'Heat Exchanger Flow (GPM)')
    secondaryFlow = secondaryFlow * 6.30901964e-5;
end

n = numel(t);
if any([numel(p2), numel(p3), numel(t2), numel(rodPower), ...
        numel(mainFlow), numel(secondaryFlow)] ~= n)
    error(['time, P2, P3, T2, rod power, main-loop flow, and secondary ' ...
        'HX flow must have equal lengths.']);
end

% Remove invalid rows together so all measured signals remain aligned.
valid = isfinite(t) & isfinite(p2) & isfinite(p3) & isfinite(t2) & ...
    isfinite(rodPower) & isfinite(mainFlow) & isfinite(secondaryFlow);
t = t(valid);
p2 = p2(valid);
p3 = p3(valid);
t2 = t2(valid);
rodPower = rodPower(valid);
mainFlow = mainFlow(valid);
secondaryFlow = secondaryFlow(valid);

if numel(t) < 2
    error('The MAT-file does not contain at least two finite, aligned samples.');
end

% Simulink interpolation requires monotonic time and no duplicate samples.
[t, order] = sort(t);
p2 = p2(order);
p3 = p3(order);
t2 = t2(order);
rodPower = rodPower(order);
mainFlow = mainFlow(order);
secondaryFlow = secondaryFlow(order);
[t, uniqueIndex] = unique(t, 'last');
p2 = p2(uniqueIndex);
p3 = p3(uniqueIndex);
t2 = t2(uniqueIndex);
rodPower = rodPower(uniqueIndex);
mainFlow = mainFlow(uniqueIndex);
secondaryFlow = secondaryFlow(uniqueIndex);

n = numel(t);
first = max(1, n - cfg.WindowSamples + 1);
measured.time = t(first:end) - t(first);
measured.P2 = p2(first:end);
measured.P3 = p3(first:end);
measured.T2 = t2(first:end);
measured.rodPower = rodPower(first:end);
measured.mainFlow = mainFlow(first:end);
measured.secondaryFlow = secondaryFlow(first:end);
measured.dP = measured.P2 - measured.P3;
measured.T = measured.T2;
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
result.normalizedOpening = 1-thetaHat / 90;
result.cost = cost;
result.exitFlag = exitFlag;
result.output = output;
result.searchBoundsDeg = [lowerBound, upperBound];
result.windowStartTime = t(first);
result.windowEndTime = t(end);
result.measuredMeans = struct( ...
    'bypassDeltaP_Pa', mean(measured.dP), ...
    'temperature_K', mean(measured.T), ...
    'rodPower_W', mean(measured.rodPower), ...
    'mainLoopFlow_m3ps', mean(measured.mainFlow), ...
    'secondaryHXFlow_m3ps', mean(measured.secondaryFlow));

end

function J = localObjective(thetaDeg, measured, modelName, cfg)
% Map the mechanically meaningful 0--90 degree angle into the valve input.
opening = 1- thetaDeg / 90;
opening = min(max(opening, 0), 1);

in = Simulink.SimulationInput(modelName);
in = in.setVariable('bypassOpeningEstimate', opening, ...
    'Workspace', modelName);
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

    if cfg.PowerWeight > 0
        powerTwin = localInterpolateLogged(out, cfg.PowerSignalName, measured.time);
        ePower = (powerTwin - measured.rodPower) / cfg.PowerScale;
        J = J + cfg.PowerWeight * mean(ePower.^2);
    end

    if cfg.MainFlowWeight > 0
        mainFlowTwin = localInterpolateLogged(out, cfg.MainFlowSignalName, measured.time);
        eMainFlow = (mainFlowTwin - measured.mainFlow) / cfg.MainFlowScale;
        J = J + cfg.MainFlowWeight * mean(eMainFlow.^2);
    end

    if cfg.SecondaryFlowWeight > 0
        secondaryFlowTwin = localInterpolateLogged(out, ...
            cfg.SecondaryFlowSignalName, measured.time);
        eSecondaryFlow = (secondaryFlowTwin - measured.secondaryFlow) / ...
            cfg.SecondaryFlowScale;
        J = J + cfg.SecondaryFlowWeight * mean(eSecondaryFlow.^2);
    end
catch simulationError
    % Invalid hydraulic states must be unattractive to PSO, not fatal to it.
    warning('PSO candidate %.3f deg failed: %s', thetaDeg, simulationError.message);
    J = 1e12;
end
end

function [x, fieldName] = localReadChannel(raw, candidateNames, description)
for k = 1:numel(candidateNames)
    fieldName = candidateNames{k};
    if isfield(raw, fieldName)
        x = localVector(raw.(fieldName), fieldName);
        return
    end
end
error('The MAT-file must contain a channel for %s.', description);
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

function data = localInterpolateLogged(out, signalName, targetTime)
signalName = char(signalName);
sourceTime = localLoggedTime(out, signalName);
sourceData = localLoggedSignal(out, signalName);
data = interp1(sourceTime, sourceData, targetTime, 'linear', 'extrap');
end
