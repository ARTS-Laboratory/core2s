function result = estimatePumpBypassJointPSO(labDataFile, modelName, varargin)
%ESTIMATEPUMPBYPASSJOINTPSO Jointly estimate pump speed and bypass angle.
%
% Decision variables:
%   x(1) = pump shaft speed [rad/s]
%   x(2) = physical bypass angle [deg], where 0=open and 90=closed.
%
% Required PSO-ready MAT-file variables, all aligned and in SI units:
%   time [s], P2 [Pa], P3 [Pa], P4 [Pa], P5 [Pa], mainLoopFlow [m^3/s]
%
% Required scalar logged signals:
%   bypassDeltaP = P2-P3 [Pa]
%   pumpDeltaP   = P4-P5 [Pa]
%   mainLoopFlow             [m^3/s]
%
% Required model variables:
%   pumpShaftSpeedRadps and bypassOpeningEstimate
%
% Example:
% result = estimatePumpBypassJointPSO("JointPSOInput_15deg.mat", ...
%     "SMR_PrimaryDT_v3", "SpeedBoundsRadps",[120 238], ...
%     "AngleBoundsDeg",[0 30], "WindowSamples",500);

if nargin < 1 || isempty(labDataFile); labDataFile = "PSOInput_15deg_steady_state.mat"; end
if nargin < 2 || isempty(modelName); modelName = "SMR_PrimaryDT_v3"; end

p = inputParser;
p.addParameter('SpeedBoundsRadps',[120 238],@validBounds);
p.addParameter('AngleBoundsDeg',[0 90],@(x) validBounds(x) && x(1)>=0 && x(2)<=90);
p.addParameter('WindowSamples',101,@(x) isnumeric(x) && isscalar(x) && x>=2 && (isinf(x) || mod(x,1)==0));
p.addParameter('WarmupTime',0,@(x) isnumeric(x) && isscalar(x) && isfinite(x) && x>=0);
p.addParameter('PumpPressureWeight',0.45,@validWeight);
p.addParameter('BypassPressureWeight',0.35,@validWeight);
p.addParameter('MainFlowWeight',0.20,@validWeight);
p.addParameter('PumpPressureScalePa',1e4,@positiveScalar);
p.addParameter('BypassPressureScalePa',1e4,@positiveScalar);
p.addParameter('MainFlowScaleM3ps',1e-3,@positiveScalar);
p.addParameter('PumpSpeedVariable','pumpShaftSpeedRadps',@(x) ischar(x) || isstring(x));
p.addParameter('ValveOpeningVariable','bypassOpeningEstimate',@(x) ischar(x) || isstring(x));
p.addParameter('VariableWorkspace','base',@(x) ischar(x) || isstring(x));
p.addParameter('PumpPressureSignalName','pumpDeltaP',@(x) ischar(x) || isstring(x));
p.addParameter('BypassPressureSignalName','bypassDeltaP',@(x) ischar(x) || isstring(x));
p.addParameter('MainFlowSignalName','mainLoopFlow',@(x) ischar(x) || isstring(x));
p.addParameter('SwarmSize',10,@(x) isnumeric(x) && isscalar(x) && x>=2 && mod(x,1)==0);
p.addParameter('MaxIterations',10,@(x) isnumeric(x) && isscalar(x) && x>=1 && mod(x,1)==0);
p.parse(varargin{:});
cfg = p.Results;

assert(abs(cfg.PumpPressureWeight + cfg.BypassPressureWeight + cfg.MainFlowWeight - 1) < 1e-12, ...
    'PumpPressureWeight, BypassPressureWeight, and MainFlowWeight must sum to 1.');

modelName = char(modelName);
cfg.VariableWorkspace = char(cfg.VariableWorkspace);
cfg.PumpSpeedVariable = char(cfg.PumpSpeedVariable);
cfg.ValveOpeningVariable = char(cfg.ValveOpeningVariable);
cfg.PumpPressureSignalName = char(cfg.PumpPressureSignalName);
cfg.BypassPressureSignalName = char(cfg.BypassPressureSignalName);
cfg.MainFlowSignalName = char(cfg.MainFlowSignalName);
if ~bdIsLoaded(modelName); load_system(modelName); end

raw = load(labDataFile);
required = {'time','P2','P3','P4','P5','mainLoopFlow'};
for k = 1:numel(required)
    assert(isfield(raw,required{k}), ...
        'estimatePumpBypassJointPSO:MissingData', ...
        'MAT file must contain the SI variable "%s".',required{k});
end

t = asVector(raw.time,'time');
p2 = asVector(raw.P2,'P2'); p3 = asVector(raw.P3,'P3');
p4 = asVector(raw.P4,'P4'); p5 = asVector(raw.P5,'P5');
q = asVector(raw.mainLoopFlow,'mainLoopFlow');
n = numel(t);
assert(all([numel(p2),numel(p3),numel(p4),numel(p5),numel(q)] == n), ...
    'time, P2, P3, P4, P5, and mainLoopFlow must have equal lengths.');

good = isfinite(t) & isfinite(p2) & isfinite(p3) & isfinite(p4) & isfinite(p5) & isfinite(q);
t=t(good); p2=p2(good); p3=p3(good); p4=p4(good); p5=p5(good); q=q(good);
assert(numel(t)>=2,'estimatePumpBypassJointPSO:InsufficientData','Need at least two aligned finite samples.');

t = t-t(1);
[t,order] = sort(t);
p2=p2(order); p3=p3(order); p4=p4(order); p5=p5(order); q=q(order);
[t,idx] = unique(t,'last');
p2=p2(idx); p3=p3(idx); p4=p4(idx); p5=p5(idx); q=q(idx);

if isinf(cfg.WindowSamples); first=1; else; first=max(1,numel(t)-cfg.WindowSamples+1); end
measured.time = t(first:end)-t(first);
measured.pumpDP = p4(first:end)-p5(first:end);
measured.bypassDP = p2(first:end)-p3(first:end);
measured.mainFlow = q(first:end);
measured.stopTime = measured.time(end);
assert(measured.stopTime>0,'estimatePumpBypassJointPSO:BadTime','Selected window has zero duration.');

options = optimoptions('particleswarm', ...
    'SwarmSize',cfg.SwarmSize,'MaxIterations',cfg.MaxIterations, ...
    'Display','iter','UseVectorized',false);
objective = @(x) objectiveFcn(x,measured,modelName,cfg);
lb = [cfg.SpeedBoundsRadps(1),cfg.AngleBoundsDeg(1)];
ub = [cfg.SpeedBoundsRadps(2),cfg.AngleBoundsDeg(2)];
[xhat,cost,exitFlag,output] = particleswarm(objective,2,lb,ub,options);

result.shaftSpeedRadps = xhat(1);
result.shaftSpeedRPM = xhat(1)*60/(2*pi);
result.angleDeg = xhat(2);
result.normalizedOpening = 1-xhat(2)/90;
result.cost = cost;
result.exitFlag = exitFlag;
result.output = output;
result.speedSearchBoundsRadps = cfg.SpeedBoundsRadps;
result.angleSearchBoundsDeg = cfg.AngleBoundsDeg;
result.windowStartTime = t(first);
result.windowEndTime = t(end);
result.warmupTime = cfg.WarmupTime;
result.measuredMeans = struct( ...
    'pumpDeltaP_Pa',mean(measured.pumpDP), ...
    'bypassDeltaP_Pa',mean(measured.bypassDP), ...
    'mainLoopFlow_m3ps',mean(measured.mainFlow));
end

function J = objectiveFcn(x,measured,modelName,cfg)
speed = x(1);
angle = x(2);
opening = min(max(1-angle/90,0),1);
try
    in = Simulink.SimulationInput(modelName);
    in = in.setVariable(cfg.PumpSpeedVariable,speed,'Workspace',cfg.VariableWorkspace);
    in = in.setVariable(cfg.ValveOpeningVariable,opening,'Workspace',cfg.VariableWorkspace);
    in = in.setModelParameter('StopTime',num2str(cfg.WarmupTime+measured.stopTime,'%.15g'));
    out = sim(in);

    compareTime = cfg.WarmupTime+measured.time;
    pumpTwin = getLogged(out,cfg.PumpPressureSignalName,compareTime);
    bypassTwin = getLogged(out,cfg.BypassPressureSignalName,compareTime);
    flowTwin = getLogged(out,cfg.MainFlowSignalName,compareTime);

    ePump = (pumpTwin-measured.pumpDP)/cfg.PumpPressureScalePa;
    eBypass = (bypassTwin-measured.bypassDP)/cfg.BypassPressureScalePa;
    eFlow = (flowTwin-measured.mainFlow)/cfg.MainFlowScaleM3ps;
    J = cfg.PumpPressureWeight*mean(ePump.^2,'omitnan') + ...
        cfg.BypassPressureWeight*mean(eBypass.^2,'omitnan') + ...
        cfg.MainFlowWeight*mean(eFlow.^2,'omitnan');
    if ~isfinite(J); J=1e12; end
catch ME
    warning('estimatePumpBypassJointPSO:CandidateFailed', ...
        'Candidate %.3f rad/s, %.3f deg failed: %s',speed,angle,ME.message);
    J = 1e12;
end
end

function y = getLogged(out,name,targetTime)
s = out.logsout.get(name);
if isempty(s); error('Signal "%s" was not found in logsout.',name); end
t = s.Values.Time(:);
y = squeeze(s.Values.Data); y=y(:);
assert(numel(t)==numel(y),'Logged signal "%s" must be scalar.',name);
good = isfinite(t) & isfinite(y);
t=t(good); y=y(good);
assert(numel(t)>=2,'Logged signal "%s" has too few valid samples.',name);
[t,idx] = unique(t,'last'); y=y(idx);
dt = diff(t); dt=dt(dt>0);
if isempty(dt); tol=1e-6; else; tol=max([1e-6,max(dt)]); end
if targetTime(1)<t(1)-tol || targetTime(end)>t(end)+tol
    error(['Logged %s covers [%.9g, %.9g] s, not requested window ' ...
        '[%.9g, %.9g] s.'],name,t(1),t(end),targetTime(1),targetTime(end));
end
targetTime = min(max(targetTime,t(1)),t(end));
y = interp1(t,y,targetTime,'linear');
end

function x = asVector(value,name)
if isa(value,'timeseries'); x=value.Data;
elseif istimetable(value); x=value.Variables;
else; x=value;
end
x=squeeze(x);
if ~isnumeric(x) || ~isvector(x)
    error('"%s" must be a numeric vector or timeseries.',name);
end
x=x(:);
end

function tf = validBounds(x)
tf = isnumeric(x) && isvector(x) && numel(x)==2 && all(isfinite(x)) && x(2)>x(1);
end

function tf = validWeight(x)
tf = isnumeric(x) && isscalar(x) && isfinite(x) && x>=0;
end

function tf = positiveScalar(x)
tf = isnumeric(x) && isscalar(x) && isfinite(x) && x>0;
end

