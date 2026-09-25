/*
 * PW_SMRv6.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "PW_SMRv6".
 *
 * Model version              : 1.29
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C++ source code generated on : Tue Sep 22 12:13:45 2026
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PW_SMRv6.h"
#include "rtwtypes.h"
#include "PW_SMRv6_cal.h"
#include <cstring>
#include <cmath>
#include <stddef.h>
#include "PW_SMRv6_private.h"

extern "C"
{

#include "rt_nonfinite.h"

}

/* Block signals (default storage) */
B_PW_SMRv6_T PW_SMRv6_B;

/* Block states (default storage) */
DW_PW_SMRv6_T PW_SMRv6_DW;

/* Real-time model */
RT_MODEL_PW_SMRv6_T PW_SMRv6_M_{ };

RT_MODEL_PW_SMRv6_T *const PW_SMRv6_M{ &PW_SMRv6_M_ };

real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  real_T yL_0d0;
  uint32_T iLeft;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    uint32_T bpIdx;
    uint32_T iRght;

    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  yL_0d0 = table[iLeft];
  return (table[iLeft + 1U] - yL_0d0) * frac + yL_0d0;
}

/* Model step function */
void PW_SMRv6_step(void)
{
  NeslSimulationData *simulationData;
  NeslSimulator *simulator;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  char *msg;
  real_T tmp_2[413];
  real_T tmp_4[413];
  real_T tmp_6[413];
  real_T tmp_0[12];
  real_T tmp_8[12];
  real_T minV;
  real_T time;
  real_T time_0;
  real_T time_1;
  real_T time_2;
  real_T time_3;
  real_T time_4;
  real_T time_5;
  real_T time_6;
  real_T time_7;
  real_T u1;
  real_T u2;
  int32_T isHit;
  int32_T isHit_0;
  int32_T isHit_1;
  int32_T isHit_2;
  int32_T k;
  int_T tmp_3[5];
  int_T tmp_5[5];
  int_T tmp_7[5];
  int_T tmp_1[4];
  int_T tmp_9[4];
  boolean_T tmp;

  /* DiscreteTransferFcn: '<S21>/Discrete Transfer Fcn' */
  minV = PW_SMRv6_cal->DiscreteTransferFcn_NumCoef *
    PW_SMRv6_DW.DiscreteTransferFcn_states;

  /* DiscreteTransferFcn: '<S21>/Discrete Transfer Fcn' */
  PW_SMRv6_B.DiscreteTransferFcn = minV;

  /* SimscapeInputBlock: '<S94>/INPUT_2_1_1' */
  PW_SMRv6_B.INPUT_2_1_1[0] = PW_SMRv6_B.DiscreteTransferFcn;
  PW_SMRv6_B.INPUT_2_1_1[1] = 0.0;
  PW_SMRv6_B.INPUT_2_1_1[2] = 0.0;
  PW_SMRv6_DW.INPUT_2_1_1_Discrete[0] = !(PW_SMRv6_B.INPUT_2_1_1[0] ==
    PW_SMRv6_DW.INPUT_2_1_1_Discrete[1]);
  PW_SMRv6_DW.INPUT_2_1_1_Discrete[1] = PW_SMRv6_B.INPUT_2_1_1[0];
  PW_SMRv6_B.INPUT_2_1_1[0] = PW_SMRv6_DW.INPUT_2_1_1_Discrete[1];
  PW_SMRv6_B.INPUT_2_1_1[3] = PW_SMRv6_DW.INPUT_2_1_1_Discrete[0];

  /* DiscreteTransferFcn: '<S19>/Discrete Transfer Fcn' */
  minV = PW_SMRv6_cal->DiscreteTransferFcn_NumCoef_f *
    PW_SMRv6_DW.DiscreteTransferFcn_states_o;

  /* DiscreteTransferFcn: '<S19>/Discrete Transfer Fcn' */
  PW_SMRv6_B.DiscreteTransferFcn_a = minV;

  /* Saturate: '<S19>/Saturation1' */
  minV = PW_SMRv6_B.DiscreteTransferFcn_a;
  u1 = PW_SMRv6_cal->Saturation1_LowerSat;
  u2 = PW_SMRv6_cal->Saturation1_UpperSat;
  if (minV > u2) {
    /* Saturate: '<S19>/Saturation1' */
    PW_SMRv6_B.Saturation1 = u2;
  } else if (minV < u1) {
    /* Saturate: '<S19>/Saturation1' */
    PW_SMRv6_B.Saturation1 = u1;
  } else {
    /* Saturate: '<S19>/Saturation1' */
    PW_SMRv6_B.Saturation1 = minV;
  }

  /* End of Saturate: '<S19>/Saturation1' */

  /* SimscapeInputBlock: '<S94>/INPUT_1_1_1' */
  PW_SMRv6_B.INPUT_1_1_1[0] = PW_SMRv6_B.Saturation1;
  PW_SMRv6_B.INPUT_1_1_1[1] = 0.0;
  PW_SMRv6_B.INPUT_1_1_1[2] = 0.0;
  PW_SMRv6_DW.INPUT_1_1_1_Discrete[0] = !(PW_SMRv6_B.INPUT_1_1_1[0] ==
    PW_SMRv6_DW.INPUT_1_1_1_Discrete[1]);
  PW_SMRv6_DW.INPUT_1_1_1_Discrete[1] = PW_SMRv6_B.INPUT_1_1_1[0];
  PW_SMRv6_B.INPUT_1_1_1[0] = PW_SMRv6_DW.INPUT_1_1_1_Discrete[1];
  PW_SMRv6_B.INPUT_1_1_1[3] = PW_SMRv6_DW.INPUT_1_1_1_Discrete[0];

  /* UnitDelay: '<S22>/Unit Delay' */
  PW_SMRv6_B.UnitDelay = PW_SMRv6_DW.UnitDelay_DSTATE;

  /* SimscapeInputBlock: '<S94>/INPUT_3_1_1' */
  PW_SMRv6_B.INPUT_3_1_1[0] = PW_SMRv6_B.UnitDelay;
  PW_SMRv6_B.INPUT_3_1_1[1] = 0.0;
  PW_SMRv6_B.INPUT_3_1_1[2] = 0.0;
  PW_SMRv6_DW.INPUT_3_1_1_Discrete[0] = !(PW_SMRv6_B.INPUT_3_1_1[0] ==
    PW_SMRv6_DW.INPUT_3_1_1_Discrete[1]);
  PW_SMRv6_DW.INPUT_3_1_1_Discrete[1] = PW_SMRv6_B.INPUT_3_1_1[0];
  PW_SMRv6_B.INPUT_3_1_1[0] = PW_SMRv6_DW.INPUT_3_1_1_Discrete[1];
  PW_SMRv6_B.INPUT_3_1_1[3] = PW_SMRv6_DW.INPUT_3_1_1_Discrete[0];

  /* SimscapeExecutionBlock: '<S94>/STATE_1' */
  simulationData = static_cast<NeslSimulationData *>(PW_SMRv6_DW.STATE_1_SimData);
  time = PW_SMRv6_M->Timing.taskTime0;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = nullptr;
  simulationData->mData->mDiscStates.mN = 246;
  simulationData->mData->mDiscStates.mX = &PW_SMRv6_DW.STATE_1_Discrete[0];
  simulationData->mData->mModeVector.mN = 163;
  simulationData->mData->mModeVector.mX = &PW_SMRv6_DW.STATE_1_Modes[0];
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mIsMajorTimeStep = true;
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = true;
  tmp_1[0] = 0;
  tmp_0[0] = PW_SMRv6_B.INPUT_2_1_1[0];
  tmp_0[1] = PW_SMRv6_B.INPUT_2_1_1[1];
  tmp_0[2] = PW_SMRv6_B.INPUT_2_1_1[2];
  tmp_0[3] = PW_SMRv6_B.INPUT_2_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = PW_SMRv6_B.INPUT_1_1_1[0];
  tmp_0[5] = PW_SMRv6_B.INPUT_1_1_1[1];
  tmp_0[6] = PW_SMRv6_B.INPUT_1_1_1[2];
  tmp_0[7] = PW_SMRv6_B.INPUT_1_1_1[3];
  tmp_1[2] = 8;
  tmp_0[8] = PW_SMRv6_B.INPUT_3_1_1[0];
  tmp_0[9] = PW_SMRv6_B.INPUT_3_1_1[1];
  tmp_0[10] = PW_SMRv6_B.INPUT_3_1_1[2];
  tmp_0[11] = PW_SMRv6_B.INPUT_3_1_1[3];
  tmp_1[3] = 12;
  simulationData->mData->mInputValues.mN = 12;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 4;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  simulationData->mData->mOutputs.mN = 401;
  simulationData->mData->mOutputs.mX = &PW_SMRv6_B.STATE_1[0];
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = nullptr;
  simulationData->mData->mCstateHasChanged = false;
  time_0 = PW_SMRv6_M->Timing.taskTime0;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_0;
  isHit = 0;
  simulationData->mData->mSampleHits.mN = 1;
  simulationData->mData->mSampleHits.mX = &isHit;
  simulationData->mData->mIsFundamentalSampleHit = true;
  simulator = static_cast<NeslSimulator *>(PW_SMRv6_DW.STATE_1_Simulator);
  diagnosticManager = static_cast<NeuDiagnosticManager *>
    (PW_SMRv6_DW.STATE_1_DiagMgr);
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  k = ne_simulator_method(simulator, NESL_SIM_OUTPUTS, simulationData,
    diagnosticManager);
  if (k != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(PW_SMRv6_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(PW_SMRv6_M, msg);
    }
  }

  /* End of SimscapeExecutionBlock: '<S94>/STATE_1' */

  /* SimscapeExecutionBlock: '<S94>/OUTPUT_1_1' */
  simulationData = static_cast<NeslSimulationData *>
    (PW_SMRv6_DW.OUTPUT_1_1_SimData);
  time_1 = PW_SMRv6_M->Timing.taskTime0;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_1;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = nullptr;
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &PW_SMRv6_DW.OUTPUT_1_1_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &PW_SMRv6_DW.OUTPUT_1_1_Modes;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mIsMajorTimeStep = true;
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = true;
  tmp_3[0] = 0;
  tmp_2[0] = PW_SMRv6_B.INPUT_2_1_1[0];
  tmp_2[1] = PW_SMRv6_B.INPUT_2_1_1[1];
  tmp_2[2] = PW_SMRv6_B.INPUT_2_1_1[2];
  tmp_2[3] = PW_SMRv6_B.INPUT_2_1_1[3];
  tmp_3[1] = 4;
  tmp_2[4] = PW_SMRv6_B.INPUT_1_1_1[0];
  tmp_2[5] = PW_SMRv6_B.INPUT_1_1_1[1];
  tmp_2[6] = PW_SMRv6_B.INPUT_1_1_1[2];
  tmp_2[7] = PW_SMRv6_B.INPUT_1_1_1[3];
  tmp_3[2] = 8;
  tmp_2[8] = PW_SMRv6_B.INPUT_3_1_1[0];
  tmp_2[9] = PW_SMRv6_B.INPUT_3_1_1[1];
  tmp_2[10] = PW_SMRv6_B.INPUT_3_1_1[2];
  tmp_2[11] = PW_SMRv6_B.INPUT_3_1_1[3];
  tmp_3[3] = 12;
  std::memcpy(&tmp_2[12], &PW_SMRv6_B.STATE_1[0], 401U * sizeof(real_T));
  tmp_3[4] = 413;
  simulationData->mData->mInputValues.mN = 413;
  simulationData->mData->mInputValues.mX = &tmp_2[0];
  simulationData->mData->mInputOffsets.mN = 5;
  simulationData->mData->mInputOffsets.mX = &tmp_3[0];
  simulationData->mData->mOutputs.mN = 18;
  simulationData->mData->mOutputs.mX = &PW_SMRv6_B.OUTPUT_1_1[0];
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = nullptr;
  simulationData->mData->mCstateHasChanged = false;
  time_2 = PW_SMRv6_M->Timing.taskTime0;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_2;
  isHit_0 = 0;
  simulationData->mData->mSampleHits.mN = 1;
  simulationData->mData->mSampleHits.mX = &isHit_0;
  simulationData->mData->mIsFundamentalSampleHit = true;
  simulator = static_cast<NeslSimulator *>(PW_SMRv6_DW.OUTPUT_1_1_Simulator);
  diagnosticManager = static_cast<NeuDiagnosticManager *>
    (PW_SMRv6_DW.OUTPUT_1_1_DiagMgr);
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  k = ne_simulator_method(simulator, NESL_SIM_OUTPUTS, simulationData,
    diagnosticManager);
  if (k != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(PW_SMRv6_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(PW_SMRv6_M, msg);
    }
  }

  /* End of SimscapeExecutionBlock: '<S94>/OUTPUT_1_1' */

  /* Reshape: '<S23>/RESHAPE' */
  PW_SMRv6_B.RESHAPE = PW_SMRv6_B.OUTPUT_1_1[7];

  /* Reshape: '<S34>/RESHAPE' */
  PW_SMRv6_B.RESHAPE_i = PW_SMRv6_B.OUTPUT_1_1[15];

  /* Lookup_n-D: '<S19>/1-D Lookup Table' incorporates:
   *  Reshape: '<S23>/RESHAPE'
   */
  PW_SMRv6_B.uDLookupTable = look1_binlxpw(PW_SMRv6_B.RESHAPE,
    PW_SMRv6_cal->uDLookupTable_bp01Data, PW_SMRv6_cal->uDLookupTable_tableData,
    9U);

  /* Sum: '<S19>/Subtract' */
  PW_SMRv6_B.Subtract = PW_SMRv6_B.uDLookupTable - PW_SMRv6_B.RESHAPE_i;

  /* Gain: '<S81>/Proportional Gain' */
  PW_SMRv6_B.ProportionalGain = PW_SMRv6_cal->DiscretePIDController_P *
    PW_SMRv6_B.Subtract;

  /* DiscreteIntegrator: '<S76>/Integrator' */
  PW_SMRv6_B.Integrator = PW_SMRv6_DW.Integrator_DSTATE;

  /* Sum: '<S85>/Sum' */
  PW_SMRv6_B.Sum = PW_SMRv6_B.ProportionalGain + PW_SMRv6_B.Integrator;

  /* DeadZone: '<S69>/DeadZone' */
  if (PW_SMRv6_B.Sum > PW_SMRv6_P.DiscretePIDController_UpperSatu) {
    /* DeadZone: '<S69>/DeadZone' */
    PW_SMRv6_B.DeadZone = PW_SMRv6_B.Sum -
      PW_SMRv6_P.DiscretePIDController_UpperSatu;
  } else if (PW_SMRv6_B.Sum >= PW_SMRv6_P.DiscretePIDController_LowerSatu) {
    /* DeadZone: '<S69>/DeadZone' */
    PW_SMRv6_B.DeadZone = 0.0;
  } else {
    /* DeadZone: '<S69>/DeadZone' */
    PW_SMRv6_B.DeadZone = PW_SMRv6_B.Sum -
      PW_SMRv6_P.DiscretePIDController_LowerSatu;
  }

  /* End of DeadZone: '<S69>/DeadZone' */

  /* RelationalOperator: '<S67>/Relational Operator' incorporates:
   *  Constant: '<S67>/Clamping_zero'
   */
  PW_SMRv6_B.RelationalOperator = (PW_SMRv6_cal->Clamping_zero_Value !=
    PW_SMRv6_B.DeadZone);

  /* RelationalOperator: '<S67>/fix for DT propagation issue' incorporates:
   *  Constant: '<S67>/Clamping_zero'
   */
  PW_SMRv6_B.fixforDTpropagationissue = (PW_SMRv6_B.DeadZone >
    PW_SMRv6_cal->Clamping_zero_Value);

  /* Switch: '<S67>/Switch1' */
  if (PW_SMRv6_B.fixforDTpropagationissue) {
    /* Switch: '<S67>/Switch1' incorporates:
     *  Constant: '<S67>/Constant'
     */
    PW_SMRv6_B.Switch1 = PW_SMRv6_cal->Constant_Value_b;
  } else {
    /* Switch: '<S67>/Switch1' incorporates:
     *  Constant: '<S67>/Constant2'
     */
    PW_SMRv6_B.Switch1 = PW_SMRv6_cal->Constant2_Value;
  }

  /* End of Switch: '<S67>/Switch1' */

  /* Gain: '<S73>/Integral Gain' */
  PW_SMRv6_B.IntegralGain = PW_SMRv6_cal->DiscretePIDController_I *
    PW_SMRv6_B.Subtract;

  /* RelationalOperator: '<S67>/fix for DT propagation issue1' incorporates:
   *  Constant: '<S67>/Clamping_zero'
   */
  PW_SMRv6_B.fixforDTpropagationissue1 = (PW_SMRv6_B.IntegralGain >
    PW_SMRv6_cal->Clamping_zero_Value);

  /* Switch: '<S67>/Switch2' */
  if (PW_SMRv6_B.fixforDTpropagationissue1) {
    /* Switch: '<S67>/Switch2' incorporates:
     *  Constant: '<S67>/Constant3'
     */
    PW_SMRv6_B.Switch2 = PW_SMRv6_cal->Constant3_Value;
  } else {
    /* Switch: '<S67>/Switch2' incorporates:
     *  Constant: '<S67>/Constant4'
     */
    PW_SMRv6_B.Switch2 = PW_SMRv6_cal->Constant4_Value;
  }

  /* End of Switch: '<S67>/Switch2' */

  /* RelationalOperator: '<S67>/Equal1' */
  PW_SMRv6_B.Equal1 = (PW_SMRv6_B.Switch1 == PW_SMRv6_B.Switch2);

  /* Logic: '<S67>/AND3' */
  PW_SMRv6_B.AND3 = (PW_SMRv6_B.RelationalOperator && PW_SMRv6_B.Equal1);

  /* Switch: '<S67>/Switch' */
  if (PW_SMRv6_B.AND3) {
    /* Switch: '<S67>/Switch' incorporates:
     *  Constant: '<S67>/Constant1'
     */
    PW_SMRv6_B.Switch = PW_SMRv6_cal->Constant1_Value;
  } else {
    /* Switch: '<S67>/Switch' */
    PW_SMRv6_B.Switch = PW_SMRv6_B.IntegralGain;
  }

  /* End of Switch: '<S67>/Switch' */

  /* Saturate: '<S83>/Saturation' */
  minV = PW_SMRv6_B.Sum;
  u1 = PW_SMRv6_P.DiscretePIDController_LowerSatu;
  u2 = PW_SMRv6_P.DiscretePIDController_UpperSatu;
  if (minV > u2) {
    /* Saturate: '<S83>/Saturation' */
    PW_SMRv6_B.Saturation = u2;
  } else if (minV < u1) {
    /* Saturate: '<S83>/Saturation' */
    PW_SMRv6_B.Saturation = u1;
  } else {
    /* Saturate: '<S83>/Saturation' */
    PW_SMRv6_B.Saturation = minV;
  }

  /* End of Saturate: '<S83>/Saturation' */

  /* Reshape: '<S24>/RESHAPE' */
  PW_SMRv6_B.RESHAPE_d = PW_SMRv6_B.OUTPUT_1_1[8];

  /* Lookup_n-D: '<S21>/1-D Lookup Table' incorporates:
   *  Reshape: '<S24>/RESHAPE'
   */
  PW_SMRv6_B.uDLookupTable_i = look1_binlxpw(PW_SMRv6_B.RESHAPE_d,
    PW_SMRv6_cal->uDLookupTable_bp01Data_l,
    PW_SMRv6_cal->uDLookupTable_tableData_i, 7U);

  /* Sum: '<S21>/Subtract' incorporates:
   *  Constant: '<S21>/Constant'
   */
  PW_SMRv6_B.Subtract_h = PW_SMRv6_cal->Constant_Value - PW_SMRv6_B.RESHAPE_d;

  /* Gain: '<S135>/Proportional Gain' */
  PW_SMRv6_B.ProportionalGain_b = PW_SMRv6_cal->DiscretePIDController_P_l *
    PW_SMRv6_B.Subtract_h;

  /* DiscreteIntegrator: '<S130>/Integrator' */
  PW_SMRv6_B.Integrator_b = PW_SMRv6_DW.Integrator_DSTATE_n;

  /* Gain: '<S124>/Derivative Gain' */
  PW_SMRv6_B.DerivativeGain = PW_SMRv6_cal->DiscretePIDController_D *
    PW_SMRv6_B.Subtract_h;

  /* DiscreteIntegrator: '<S125>/Filter' */
  PW_SMRv6_B.Filter = PW_SMRv6_DW.Filter_DSTATE;

  /* Sum: '<S125>/SumD' */
  PW_SMRv6_B.SumD = PW_SMRv6_B.DerivativeGain - PW_SMRv6_B.Filter;

  /* Gain: '<S133>/Filter Coefficient' */
  PW_SMRv6_B.FilterCoefficient = PW_SMRv6_cal->DiscretePIDController_N *
    PW_SMRv6_B.SumD;

  /* Sum: '<S139>/Sum' */
  PW_SMRv6_B.Sum_j = (PW_SMRv6_B.ProportionalGain_b + PW_SMRv6_B.Integrator_b) +
    PW_SMRv6_B.FilterCoefficient;

  /* DeadZone: '<S123>/DeadZone' */
  if (PW_SMRv6_B.Sum_j > PW_SMRv6_cal->DiscretePIDController_UpperSa_j) {
    /* DeadZone: '<S123>/DeadZone' */
    PW_SMRv6_B.DeadZone_a = PW_SMRv6_B.Sum_j -
      PW_SMRv6_cal->DiscretePIDController_UpperSa_j;
  } else if (PW_SMRv6_B.Sum_j >= PW_SMRv6_cal->DiscretePIDController_LowerSa_d)
  {
    /* DeadZone: '<S123>/DeadZone' */
    PW_SMRv6_B.DeadZone_a = 0.0;
  } else {
    /* DeadZone: '<S123>/DeadZone' */
    PW_SMRv6_B.DeadZone_a = PW_SMRv6_B.Sum_j -
      PW_SMRv6_cal->DiscretePIDController_LowerSa_d;
  }

  /* End of DeadZone: '<S123>/DeadZone' */

  /* RelationalOperator: '<S121>/Relational Operator' incorporates:
   *  Constant: '<S121>/Clamping_zero'
   */
  PW_SMRv6_B.RelationalOperator_i = (PW_SMRv6_cal->Clamping_zero_Value_l !=
    PW_SMRv6_B.DeadZone_a);

  /* RelationalOperator: '<S121>/fix for DT propagation issue' incorporates:
   *  Constant: '<S121>/Clamping_zero'
   */
  PW_SMRv6_B.fixforDTpropagationissue_i = (PW_SMRv6_B.DeadZone_a >
    PW_SMRv6_cal->Clamping_zero_Value_l);

  /* Switch: '<S121>/Switch1' */
  if (PW_SMRv6_B.fixforDTpropagationissue_i) {
    /* Switch: '<S121>/Switch1' incorporates:
     *  Constant: '<S121>/Constant'
     */
    PW_SMRv6_B.Switch1_i = PW_SMRv6_cal->Constant_Value_d;
  } else {
    /* Switch: '<S121>/Switch1' incorporates:
     *  Constant: '<S121>/Constant2'
     */
    PW_SMRv6_B.Switch1_i = PW_SMRv6_cal->Constant2_Value_h;
  }

  /* End of Switch: '<S121>/Switch1' */

  /* Gain: '<S127>/Integral Gain' */
  PW_SMRv6_B.IntegralGain_j = PW_SMRv6_cal->DiscretePIDController_I_p *
    PW_SMRv6_B.Subtract_h;

  /* RelationalOperator: '<S121>/fix for DT propagation issue1' incorporates:
   *  Constant: '<S121>/Clamping_zero'
   */
  PW_SMRv6_B.fixforDTpropagationissue1_a = (PW_SMRv6_B.IntegralGain_j >
    PW_SMRv6_cal->Clamping_zero_Value_l);

  /* Switch: '<S121>/Switch2' */
  if (PW_SMRv6_B.fixforDTpropagationissue1_a) {
    /* Switch: '<S121>/Switch2' incorporates:
     *  Constant: '<S121>/Constant3'
     */
    PW_SMRv6_B.Switch2_a = PW_SMRv6_cal->Constant3_Value_k;
  } else {
    /* Switch: '<S121>/Switch2' incorporates:
     *  Constant: '<S121>/Constant4'
     */
    PW_SMRv6_B.Switch2_a = PW_SMRv6_cal->Constant4_Value_p;
  }

  /* End of Switch: '<S121>/Switch2' */

  /* RelationalOperator: '<S121>/Equal1' */
  PW_SMRv6_B.Equal1_a = (PW_SMRv6_B.Switch1_i == PW_SMRv6_B.Switch2_a);

  /* Logic: '<S121>/AND3' */
  PW_SMRv6_B.AND3_b = (PW_SMRv6_B.RelationalOperator_i && PW_SMRv6_B.Equal1_a);

  /* Switch: '<S121>/Switch' */
  if (PW_SMRv6_B.AND3_b) {
    /* Switch: '<S121>/Switch' incorporates:
     *  Constant: '<S121>/Constant1'
     */
    PW_SMRv6_B.Switch_b = PW_SMRv6_cal->Constant1_Value_a;
  } else {
    /* Switch: '<S121>/Switch' */
    PW_SMRv6_B.Switch_b = PW_SMRv6_B.IntegralGain_j;
  }

  /* End of Switch: '<S121>/Switch' */

  /* Saturate: '<S137>/Saturation' */
  minV = PW_SMRv6_B.Sum_j;
  u1 = PW_SMRv6_cal->DiscretePIDController_LowerSa_d;
  u2 = PW_SMRv6_cal->DiscretePIDController_UpperSa_j;
  if (minV > u2) {
    /* Saturate: '<S137>/Saturation' */
    PW_SMRv6_B.Saturation_f = u2;
  } else if (minV < u1) {
    /* Saturate: '<S137>/Saturation' */
    PW_SMRv6_B.Saturation_f = u1;
  } else {
    /* Saturate: '<S137>/Saturation' */
    PW_SMRv6_B.Saturation_f = minV;
  }

  /* End of Saturate: '<S137>/Saturation' */

  /* MinMax: '<S21>/MinMax' */
  minV = std::fmin(PW_SMRv6_B.uDLookupTable_i, PW_SMRv6_B.Saturation_f);

  /* MinMax: '<S21>/MinMax' */
  PW_SMRv6_B.MinMax = minV;

  /* Saturate: '<S21>/Saturation' */
  minV = PW_SMRv6_B.MinMax;
  u1 = PW_SMRv6_cal->Saturation_LowerSat;
  u2 = PW_SMRv6_P.Saturation_UpperSat;
  if (minV > u2) {
    /* Saturate: '<S21>/Saturation' */
    PW_SMRv6_B.Saturation_f0 = u2;
  } else if (minV < u1) {
    /* Saturate: '<S21>/Saturation' */
    PW_SMRv6_B.Saturation_f0 = u1;
  } else {
    /* Saturate: '<S21>/Saturation' */
    PW_SMRv6_B.Saturation_f0 = minV;
  }

  /* End of Saturate: '<S21>/Saturation' */

  /* Reshape: '<S26>/RESHAPE' */
  PW_SMRv6_B.RESHAPE_n = PW_SMRv6_B.OUTPUT_1_1[3];

  /* Reshape: '<S27>/RESHAPE' */
  PW_SMRv6_B.RESHAPE_dd = PW_SMRv6_B.OUTPUT_1_1[4];

  /* Reshape: '<S31>/RESHAPE' */
  PW_SMRv6_B.RESHAPE_l = PW_SMRv6_B.OUTPUT_1_1[14];

  /* Reshape: '<S28>/RESHAPE' */
  PW_SMRv6_B.RESHAPE_e = PW_SMRv6_B.OUTPUT_1_1[17];

  /* Reshape: '<S29>/RESHAPE' */
  PW_SMRv6_B.RESHAPE_j = PW_SMRv6_B.OUTPUT_1_1[1];

  /* Reshape: '<S30>/RESHAPE' */
  PW_SMRv6_B.RESHAPE_b = PW_SMRv6_B.OUTPUT_1_1[5];

  /* Reshape: '<S36>/RESHAPE' */
  PW_SMRv6_B.RESHAPE_c = PW_SMRv6_B.OUTPUT_1_1[11];

  /* Relay: '<S22>/Relay' */
  minV = PW_SMRv6_B.RESHAPE_c;
  PW_SMRv6_DW.Relay_Mode = ((minV >= PW_SMRv6_cal->Relay_OnVal) || ((!(minV <=
    PW_SMRv6_cal->Relay_OffVal)) && PW_SMRv6_DW.Relay_Mode));
  if (PW_SMRv6_DW.Relay_Mode) {
    /* Relay: '<S22>/Relay' */
    PW_SMRv6_B.Relay = PW_SMRv6_cal->Relay_YOn;
  } else {
    /* Relay: '<S22>/Relay' */
    PW_SMRv6_B.Relay = PW_SMRv6_cal->Relay_YOff;
  }

  /* End of Relay: '<S22>/Relay' */

  /* SimscapeExecutionBlock: '<S94>/OUTPUT_1_2' */
  simulationData = static_cast<NeslSimulationData *>
    (PW_SMRv6_DW.OUTPUT_1_2_SimData);
  time_3 = PW_SMRv6_M->Timing.taskTime0;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_3;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = nullptr;
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &PW_SMRv6_DW.OUTPUT_1_2_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &PW_SMRv6_DW.OUTPUT_1_2_Modes;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mIsMajorTimeStep = true;
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = true;
  tmp_5[0] = 0;
  tmp_4[0] = PW_SMRv6_B.INPUT_2_1_1[0];
  tmp_4[1] = PW_SMRv6_B.INPUT_2_1_1[1];
  tmp_4[2] = PW_SMRv6_B.INPUT_2_1_1[2];
  tmp_4[3] = PW_SMRv6_B.INPUT_2_1_1[3];
  tmp_5[1] = 4;
  tmp_4[4] = PW_SMRv6_B.INPUT_1_1_1[0];
  tmp_4[5] = PW_SMRv6_B.INPUT_1_1_1[1];
  tmp_4[6] = PW_SMRv6_B.INPUT_1_1_1[2];
  tmp_4[7] = PW_SMRv6_B.INPUT_1_1_1[3];
  tmp_5[2] = 8;
  tmp_4[8] = PW_SMRv6_B.INPUT_3_1_1[0];
  tmp_4[9] = PW_SMRv6_B.INPUT_3_1_1[1];
  tmp_4[10] = PW_SMRv6_B.INPUT_3_1_1[2];
  tmp_4[11] = PW_SMRv6_B.INPUT_3_1_1[3];
  tmp_5[3] = 12;
  std::memcpy(&tmp_4[12], &PW_SMRv6_B.STATE_1[0], 401U * sizeof(real_T));
  tmp_5[4] = 413;
  simulationData->mData->mInputValues.mN = 413;
  simulationData->mData->mInputValues.mX = &tmp_4[0];
  simulationData->mData->mInputOffsets.mN = 5;
  simulationData->mData->mInputOffsets.mX = &tmp_5[0];
  simulationData->mData->mOutputs.mN = 2;
  simulationData->mData->mOutputs.mX = &PW_SMRv6_B.OUTPUT_1_2[0];
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = nullptr;
  simulationData->mData->mCstateHasChanged = false;
  time_4 = PW_SMRv6_M->Timing.taskTime0;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_4;
  isHit_1 = 0;
  simulationData->mData->mSampleHits.mN = 1;
  simulationData->mData->mSampleHits.mX = &isHit_1;
  simulationData->mData->mIsFundamentalSampleHit = true;
  simulator = static_cast<NeslSimulator *>(PW_SMRv6_DW.OUTPUT_1_2_Simulator);
  diagnosticManager = static_cast<NeuDiagnosticManager *>
    (PW_SMRv6_DW.OUTPUT_1_2_DiagMgr);
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  k = ne_simulator_method(simulator, NESL_SIM_OUTPUTS, simulationData,
    diagnosticManager);
  if (k != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(PW_SMRv6_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(PW_SMRv6_M, msg);
    }
  }

  /* End of SimscapeExecutionBlock: '<S94>/OUTPUT_1_2' */

  /* Reshape: '<S152>/RESHAPE' */
  PW_SMRv6_B.RESHAPE_m = PW_SMRv6_B.OUTPUT_1_2[0];

  /* Reshape: '<S153>/RESHAPE' */
  PW_SMRv6_B.RESHAPE_g = PW_SMRv6_B.OUTPUT_1_2[1];

  /* Reshape: '<S154>/RESHAPE' */
  PW_SMRv6_B.RESHAPE_dm = PW_SMRv6_B.OUTPUT_1_1[12];

  /* SimscapeExecutionBlock: '<S94>/OUTPUT_1_0' */
  simulationData = static_cast<NeslSimulationData *>
    (PW_SMRv6_DW.OUTPUT_1_0_SimData);
  time_5 = PW_SMRv6_M->Timing.taskTime0;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_5;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = nullptr;
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &PW_SMRv6_DW.OUTPUT_1_0_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &PW_SMRv6_DW.OUTPUT_1_0_Modes;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mIsMajorTimeStep = true;
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = true;
  tmp_7[0] = 0;
  tmp_6[0] = PW_SMRv6_B.INPUT_2_1_1[0];
  tmp_6[1] = PW_SMRv6_B.INPUT_2_1_1[1];
  tmp_6[2] = PW_SMRv6_B.INPUT_2_1_1[2];
  tmp_6[3] = PW_SMRv6_B.INPUT_2_1_1[3];
  tmp_7[1] = 4;
  tmp_6[4] = PW_SMRv6_B.INPUT_1_1_1[0];
  tmp_6[5] = PW_SMRv6_B.INPUT_1_1_1[1];
  tmp_6[6] = PW_SMRv6_B.INPUT_1_1_1[2];
  tmp_6[7] = PW_SMRv6_B.INPUT_1_1_1[3];
  tmp_7[2] = 8;
  tmp_6[8] = PW_SMRv6_B.INPUT_3_1_1[0];
  tmp_6[9] = PW_SMRv6_B.INPUT_3_1_1[1];
  tmp_6[10] = PW_SMRv6_B.INPUT_3_1_1[2];
  tmp_6[11] = PW_SMRv6_B.INPUT_3_1_1[3];
  tmp_7[3] = 12;
  std::memcpy(&tmp_6[12], &PW_SMRv6_B.STATE_1[0], 401U * sizeof(real_T));
  tmp_7[4] = 413;
  simulationData->mData->mInputValues.mN = 413;
  simulationData->mData->mInputValues.mX = &tmp_6[0];
  simulationData->mData->mInputOffsets.mN = 5;
  simulationData->mData->mInputOffsets.mX = &tmp_7[0];
  simulationData->mData->mOutputs.mN = 1;

  /* SimscapeExecutionBlock: '<S94>/OUTPUT_1_0' */
  simulationData->mData->mOutputs.mX = &PW_SMRv6_B.OUTPUT_1_0;

  /* SimscapeExecutionBlock: '<S94>/OUTPUT_1_0' */
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = nullptr;
  simulationData->mData->mCstateHasChanged = false;
  time_6 = PW_SMRv6_M->Timing.taskTime0;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_6;
  isHit_2 = 0;
  simulationData->mData->mSampleHits.mN = 1;
  simulationData->mData->mSampleHits.mX = &isHit_2;
  simulationData->mData->mIsFundamentalSampleHit = true;
  simulator = static_cast<NeslSimulator *>(PW_SMRv6_DW.OUTPUT_1_0_Simulator);
  diagnosticManager = static_cast<NeuDiagnosticManager *>
    (PW_SMRv6_DW.OUTPUT_1_0_DiagMgr);
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  k = ne_simulator_method(simulator, NESL_SIM_OUTPUTS, simulationData,
    diagnosticManager);
  if (k != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(PW_SMRv6_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(PW_SMRv6_M, msg);
    }
  }

  /* Reshape: '<S32>/RESHAPE' */
  PW_SMRv6_B.RESHAPE_f = PW_SMRv6_B.OUTPUT_1_0;

  /* Reshape: '<S33>/RESHAPE' */
  PW_SMRv6_B.RESHAPE_fr = PW_SMRv6_B.OUTPUT_1_1[6];

  /* Reshape: '<S38>/RESHAPE' */
  PW_SMRv6_B.RESHAPE_o = PW_SMRv6_B.OUTPUT_1_1[13];

  /* Reshape: '<S35>/RESHAPE' */
  PW_SMRv6_B.RESHAPE_fu = PW_SMRv6_B.OUTPUT_1_1[2];

  /* Reshape: '<S39>/RESHAPE' */
  PW_SMRv6_B.RESHAPE_jn = PW_SMRv6_B.OUTPUT_1_1[16];

  /* Reshape: '<S40>/RESHAPE' */
  PW_SMRv6_B.RESHAPE_b4 = PW_SMRv6_B.OUTPUT_1_1[10];

  /* Reshape: '<S37>/RESHAPE' */
  PW_SMRv6_B.RESHAPE_gx = PW_SMRv6_B.OUTPUT_1_1[0];

  /* Reshape: '<S25>/RESHAPE' */
  PW_SMRv6_B.RESHAPE_e0 = PW_SMRv6_B.OUTPUT_1_1[9];

  /* Update for DiscreteTransferFcn: '<S21>/Discrete Transfer Fcn' */
  minV = PW_SMRv6_B.Saturation_f0;
  minV -= PW_SMRv6_cal->DiscreteTransferFcn_DenCoef[1] *
    PW_SMRv6_DW.DiscreteTransferFcn_states;
  minV /= PW_SMRv6_cal->DiscreteTransferFcn_DenCoef[0];
  PW_SMRv6_DW.DiscreteTransferFcn_states = minV;

  /* Update for DiscreteTransferFcn: '<S19>/Discrete Transfer Fcn' */
  minV = PW_SMRv6_B.Saturation;
  minV -= PW_SMRv6_cal->DiscreteTransferFcn_DenCoef_h[1] *
    PW_SMRv6_DW.DiscreteTransferFcn_states_o;
  minV /= PW_SMRv6_cal->DiscreteTransferFcn_DenCoef_h[0];
  PW_SMRv6_DW.DiscreteTransferFcn_states_o = minV;

  /* Update for UnitDelay: '<S22>/Unit Delay' */
  PW_SMRv6_DW.UnitDelay_DSTATE = PW_SMRv6_B.Relay;

  /* Update for SimscapeExecutionBlock: '<S94>/STATE_1' */
  simulationData = static_cast<NeslSimulationData *>(PW_SMRv6_DW.STATE_1_SimData);
  time_7 = PW_SMRv6_M->Timing.taskTime0;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_7;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = nullptr;
  simulationData->mData->mDiscStates.mN = 246;
  simulationData->mData->mDiscStates.mX = &PW_SMRv6_DW.STATE_1_Discrete[0];
  simulationData->mData->mModeVector.mN = 163;
  simulationData->mData->mModeVector.mX = &PW_SMRv6_DW.STATE_1_Modes[0];
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mIsMajorTimeStep = true;
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = true;
  tmp_9[0] = 0;
  tmp_8[0] = PW_SMRv6_B.INPUT_2_1_1[0];
  tmp_8[1] = PW_SMRv6_B.INPUT_2_1_1[1];
  tmp_8[2] = PW_SMRv6_B.INPUT_2_1_1[2];
  tmp_8[3] = PW_SMRv6_B.INPUT_2_1_1[3];
  tmp_9[1] = 4;
  tmp_8[4] = PW_SMRv6_B.INPUT_1_1_1[0];
  tmp_8[5] = PW_SMRv6_B.INPUT_1_1_1[1];
  tmp_8[6] = PW_SMRv6_B.INPUT_1_1_1[2];
  tmp_8[7] = PW_SMRv6_B.INPUT_1_1_1[3];
  tmp_9[2] = 8;
  tmp_8[8] = PW_SMRv6_B.INPUT_3_1_1[0];
  tmp_8[9] = PW_SMRv6_B.INPUT_3_1_1[1];
  tmp_8[10] = PW_SMRv6_B.INPUT_3_1_1[2];
  tmp_8[11] = PW_SMRv6_B.INPUT_3_1_1[3];
  tmp_9[3] = 12;
  simulationData->mData->mInputValues.mN = 12;
  simulationData->mData->mInputValues.mX = &tmp_8[0];
  simulationData->mData->mInputOffsets.mN = 4;
  simulationData->mData->mInputOffsets.mX = &tmp_9[0];
  simulator = static_cast<NeslSimulator *>(PW_SMRv6_DW.STATE_1_Simulator);
  diagnosticManager = static_cast<NeuDiagnosticManager *>
    (PW_SMRv6_DW.STATE_1_DiagMgr);
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  k = ne_simulator_method(simulator, NESL_SIM_UPDATE, simulationData,
    diagnosticManager);
  if (k != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(PW_SMRv6_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(PW_SMRv6_M, msg);
    }
  }

  /* End of Update for SimscapeExecutionBlock: '<S94>/STATE_1' */

  /* Update for DiscreteIntegrator: '<S76>/Integrator' */
  PW_SMRv6_DW.Integrator_DSTATE += PW_SMRv6_cal->Integrator_gainval *
    PW_SMRv6_B.Switch;

  /* Update for DiscreteIntegrator: '<S130>/Integrator' */
  PW_SMRv6_DW.Integrator_DSTATE_n += PW_SMRv6_cal->Integrator_gainval_b *
    PW_SMRv6_B.Switch_b;

  /* Update for DiscreteIntegrator: '<S125>/Filter' */
  PW_SMRv6_DW.Filter_DSTATE += PW_SMRv6_cal->Filter_gainval *
    PW_SMRv6_B.FilterCoefficient;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++PW_SMRv6_M->Timing.clockTick0)) {
    ++PW_SMRv6_M->Timing.clockTickH0;
  }

  PW_SMRv6_M->Timing.taskTime0 = PW_SMRv6_M->Timing.clockTick0 *
    PW_SMRv6_M->Timing.stepSize0 + PW_SMRv6_M->Timing.clockTickH0 *
    PW_SMRv6_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void PW_SMRv6_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* non-finite (run-time) assignments */
  PW_SMRv6_P.DiscretePIDController_LowerSatu = rtMinusInf;
  PW_SMRv6_P.DiscretePIDController_UpperSatu = rtInf;
  PW_SMRv6_P.Saturation_UpperSat = rtInf;
  PW_SMRv6_M->Timing.stepSize0 = 0.01;

  /* block I/O */
  (void) std::memset((static_cast<void *>(&PW_SMRv6_B)), 0,
                     sizeof(B_PW_SMRv6_T));

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&PW_SMRv6_DW), 0,
                     sizeof(DW_PW_SMRv6_T));

  {
    NeModelParameters modelParameters;
    NeModelParameters modelParameters_0;
    NeModelParameters modelParameters_1;
    NeModelParameters modelParameters_2;
    NeslSimulationData *tmp;
    NeslSimulator *simulator;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    char *msg;
    real_T tmp_0;
    int32_T tmp_1;
    boolean_T zcDisabled;

    /* Start for SimscapeExecutionBlock: '<S94>/STATE_1' */
    simulator = nesl_lease_simulator("PW_SMRv6/Solver Configuration_1", 0, 0);
    PW_SMRv6_DW.STATE_1_Simulator = (void *)simulator;
    zcDisabled = pointer_is_null(PW_SMRv6_DW.STATE_1_Simulator);
    if (zcDisabled) {
      PW_SMRv6_eed91bea_1_gateway();
      simulator = nesl_lease_simulator("PW_SMRv6/Solver Configuration_1", 0, 0);
      PW_SMRv6_DW.STATE_1_Simulator = (void *)simulator;
    }

    tmp = nesl_create_simulation_data();
    PW_SMRv6_DW.STATE_1_SimData = (void *)tmp;
    diagnosticManager = rtw_create_diagnostics();
    PW_SMRv6_DW.STATE_1_DiagMgr = (void *)diagnosticManager;
    modelParameters.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters.mSolverAbsTol = 0.001;
    modelParameters.mSolverRelTol = 0.001;
    modelParameters.mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO;
    modelParameters.mStartTime = 0.0;
    modelParameters.mLoadInitialState = false;
    modelParameters.mUseSimState = false;
    modelParameters.mLinTrimCompile = false;
    modelParameters.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters.mRTWModifiedTimeStamp = 7.11994338E+8;
    tmp_0 = 0.001;
    modelParameters.mSolverTolerance = tmp_0;
    tmp_0 = 0.01;
    modelParameters.mFixedStepSize = tmp_0;
    zcDisabled = false;
    modelParameters.mVariableStepSolver = zcDisabled;
    zcDisabled = false;
    modelParameters.mIsUsingODEN = zcDisabled;
    modelParameters.mZcDisabled = true;
    simulator = static_cast<NeslSimulator *>(PW_SMRv6_DW.STATE_1_Simulator);
    diagnosticManager = static_cast<NeuDiagnosticManager *>
      (PW_SMRv6_DW.STATE_1_DiagMgr);
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_1 = nesl_initialize_simulator(simulator, &modelParameters,
      diagnosticManager);
    if (tmp_1 != 0) {
      zcDisabled = error_buffer_is_empty(rtmGetErrorStatus(PW_SMRv6_M));
      if (zcDisabled) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(PW_SMRv6_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S94>/STATE_1' */

    /* Start for SimscapeExecutionBlock: '<S94>/OUTPUT_1_1' */
    simulator = nesl_lease_simulator("PW_SMRv6/Solver Configuration_1", 1, 1);
    PW_SMRv6_DW.OUTPUT_1_1_Simulator = (void *)simulator;
    zcDisabled = pointer_is_null(PW_SMRv6_DW.OUTPUT_1_1_Simulator);
    if (zcDisabled) {
      PW_SMRv6_eed91bea_1_gateway();
      simulator = nesl_lease_simulator("PW_SMRv6/Solver Configuration_1", 1, 1);
      PW_SMRv6_DW.OUTPUT_1_1_Simulator = (void *)simulator;
    }

    tmp = nesl_create_simulation_data();
    PW_SMRv6_DW.OUTPUT_1_1_SimData = (void *)tmp;
    diagnosticManager = rtw_create_diagnostics();
    PW_SMRv6_DW.OUTPUT_1_1_DiagMgr = (void *)diagnosticManager;
    modelParameters_0.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_0.mSolverAbsTol = 0.001;
    modelParameters_0.mSolverRelTol = 0.001;
    modelParameters_0.mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO;
    modelParameters_0.mStartTime = 0.0;
    modelParameters_0.mLoadInitialState = false;
    modelParameters_0.mUseSimState = false;
    modelParameters_0.mLinTrimCompile = false;
    modelParameters_0.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters_0.mRTWModifiedTimeStamp = 7.11994338E+8;
    tmp_0 = 0.001;
    modelParameters_0.mSolverTolerance = tmp_0;
    tmp_0 = 0.01;
    modelParameters_0.mFixedStepSize = tmp_0;
    zcDisabled = false;
    modelParameters_0.mVariableStepSolver = zcDisabled;
    zcDisabled = false;
    modelParameters_0.mIsUsingODEN = zcDisabled;
    modelParameters_0.mZcDisabled = true;
    simulator = static_cast<NeslSimulator *>(PW_SMRv6_DW.OUTPUT_1_1_Simulator);
    diagnosticManager = static_cast<NeuDiagnosticManager *>
      (PW_SMRv6_DW.OUTPUT_1_1_DiagMgr);
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_1 = nesl_initialize_simulator(simulator, &modelParameters_0,
      diagnosticManager);
    if (tmp_1 != 0) {
      zcDisabled = error_buffer_is_empty(rtmGetErrorStatus(PW_SMRv6_M));
      if (zcDisabled) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(PW_SMRv6_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S94>/OUTPUT_1_1' */
    /* Start for SimscapeExecutionBlock: '<S94>/OUTPUT_1_2' */
    simulator = nesl_lease_simulator("PW_SMRv6/Solver Configuration_1", 1, 2);
    PW_SMRv6_DW.OUTPUT_1_2_Simulator = (void *)simulator;
    zcDisabled = pointer_is_null(PW_SMRv6_DW.OUTPUT_1_2_Simulator);
    if (zcDisabled) {
      PW_SMRv6_eed91bea_1_gateway();
      simulator = nesl_lease_simulator("PW_SMRv6/Solver Configuration_1", 1, 2);
      PW_SMRv6_DW.OUTPUT_1_2_Simulator = (void *)simulator;
    }

    tmp = nesl_create_simulation_data();
    PW_SMRv6_DW.OUTPUT_1_2_SimData = (void *)tmp;
    diagnosticManager = rtw_create_diagnostics();
    PW_SMRv6_DW.OUTPUT_1_2_DiagMgr = (void *)diagnosticManager;
    modelParameters_1.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_1.mSolverAbsTol = 0.001;
    modelParameters_1.mSolverRelTol = 0.001;
    modelParameters_1.mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO;
    modelParameters_1.mStartTime = 0.0;
    modelParameters_1.mLoadInitialState = false;
    modelParameters_1.mUseSimState = false;
    modelParameters_1.mLinTrimCompile = false;
    modelParameters_1.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters_1.mRTWModifiedTimeStamp = 7.11994338E+8;
    tmp_0 = 0.001;
    modelParameters_1.mSolverTolerance = tmp_0;
    tmp_0 = 0.01;
    modelParameters_1.mFixedStepSize = tmp_0;
    zcDisabled = false;
    modelParameters_1.mVariableStepSolver = zcDisabled;
    zcDisabled = false;
    modelParameters_1.mIsUsingODEN = zcDisabled;
    modelParameters_1.mZcDisabled = true;
    simulator = static_cast<NeslSimulator *>(PW_SMRv6_DW.OUTPUT_1_2_Simulator);
    diagnosticManager = static_cast<NeuDiagnosticManager *>
      (PW_SMRv6_DW.OUTPUT_1_2_DiagMgr);
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_1 = nesl_initialize_simulator(simulator, &modelParameters_1,
      diagnosticManager);
    if (tmp_1 != 0) {
      zcDisabled = error_buffer_is_empty(rtmGetErrorStatus(PW_SMRv6_M));
      if (zcDisabled) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(PW_SMRv6_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S94>/OUTPUT_1_2' */
    /* Start for SimscapeExecutionBlock: '<S94>/OUTPUT_1_0' */
    simulator = nesl_lease_simulator("PW_SMRv6/Solver Configuration_1", 1, 0);
    PW_SMRv6_DW.OUTPUT_1_0_Simulator = (void *)simulator;
    zcDisabled = pointer_is_null(PW_SMRv6_DW.OUTPUT_1_0_Simulator);
    if (zcDisabled) {
      PW_SMRv6_eed91bea_1_gateway();
      simulator = nesl_lease_simulator("PW_SMRv6/Solver Configuration_1", 1, 0);
      PW_SMRv6_DW.OUTPUT_1_0_Simulator = (void *)simulator;
    }

    tmp = nesl_create_simulation_data();
    PW_SMRv6_DW.OUTPUT_1_0_SimData = (void *)tmp;
    diagnosticManager = rtw_create_diagnostics();
    PW_SMRv6_DW.OUTPUT_1_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_2.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_2.mSolverAbsTol = 0.001;
    modelParameters_2.mSolverRelTol = 0.001;
    modelParameters_2.mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO;
    modelParameters_2.mStartTime = 0.0;
    modelParameters_2.mLoadInitialState = false;
    modelParameters_2.mUseSimState = false;
    modelParameters_2.mLinTrimCompile = false;
    modelParameters_2.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters_2.mRTWModifiedTimeStamp = 7.11994338E+8;
    tmp_0 = 0.001;
    modelParameters_2.mSolverTolerance = tmp_0;
    tmp_0 = 0.01;
    modelParameters_2.mFixedStepSize = tmp_0;
    zcDisabled = false;
    modelParameters_2.mVariableStepSolver = zcDisabled;
    zcDisabled = false;
    modelParameters_2.mIsUsingODEN = zcDisabled;
    modelParameters_2.mZcDisabled = true;
    simulator = static_cast<NeslSimulator *>(PW_SMRv6_DW.OUTPUT_1_0_Simulator);
    diagnosticManager = static_cast<NeuDiagnosticManager *>
      (PW_SMRv6_DW.OUTPUT_1_0_DiagMgr);
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_1 = nesl_initialize_simulator(simulator, &modelParameters_2,
      diagnosticManager);
    if (tmp_1 != 0) {
      zcDisabled = error_buffer_is_empty(rtmGetErrorStatus(PW_SMRv6_M));
      if (zcDisabled) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(PW_SMRv6_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S94>/OUTPUT_1_0' */
  }

  /* InitializeConditions for DiscreteTransferFcn: '<S21>/Discrete Transfer Fcn' */
  PW_SMRv6_DW.DiscreteTransferFcn_states =
    PW_SMRv6_cal->DiscreteTransferFcn_InitialStat;

  /* InitializeConditions for DiscreteTransferFcn: '<S19>/Discrete Transfer Fcn' */
  PW_SMRv6_DW.DiscreteTransferFcn_states_o =
    PW_SMRv6_cal->DiscreteTransferFcn_InitialSt_k;

  /* InitializeConditions for UnitDelay: '<S22>/Unit Delay' */
  PW_SMRv6_DW.UnitDelay_DSTATE = PW_SMRv6_cal->UnitDelay_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S76>/Integrator' */
  PW_SMRv6_DW.Integrator_DSTATE = PW_SMRv6_cal->DiscretePIDController_Initial_h;

  /* InitializeConditions for DiscreteIntegrator: '<S130>/Integrator' */
  PW_SMRv6_DW.Integrator_DSTATE_n =
    PW_SMRv6_cal->DiscretePIDController_Initial_o;

  /* InitializeConditions for DiscreteIntegrator: '<S125>/Filter' */
  PW_SMRv6_DW.Filter_DSTATE = PW_SMRv6_cal->DiscretePIDController_InitialCo;
}

/* Model terminate function */
void PW_SMRv6_terminate(void)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;

  /* Terminate for SimscapeExecutionBlock: '<S94>/STATE_1' */
  diagnosticManager = static_cast<NeuDiagnosticManager *>
    (PW_SMRv6_DW.STATE_1_DiagMgr);
  neu_destroy_diagnostic_manager(diagnosticManager);
  simulationData = static_cast<NeslSimulationData *>(PW_SMRv6_DW.STATE_1_SimData);
  nesl_destroy_simulation_data(simulationData);
  nesl_erase_simulator("PW_SMRv6/Solver Configuration_1");
  nesl_destroy_registry();

  /* Terminate for SimscapeExecutionBlock: '<S94>/OUTPUT_1_1' */
  diagnosticManager = static_cast<NeuDiagnosticManager *>
    (PW_SMRv6_DW.OUTPUT_1_1_DiagMgr);
  neu_destroy_diagnostic_manager(diagnosticManager);
  simulationData = static_cast<NeslSimulationData *>
    (PW_SMRv6_DW.OUTPUT_1_1_SimData);
  nesl_destroy_simulation_data(simulationData);
  nesl_erase_simulator("PW_SMRv6/Solver Configuration_1");
  nesl_destroy_registry();

  /* Terminate for SimscapeExecutionBlock: '<S94>/OUTPUT_1_2' */
  diagnosticManager = static_cast<NeuDiagnosticManager *>
    (PW_SMRv6_DW.OUTPUT_1_2_DiagMgr);
  neu_destroy_diagnostic_manager(diagnosticManager);
  simulationData = static_cast<NeslSimulationData *>
    (PW_SMRv6_DW.OUTPUT_1_2_SimData);
  nesl_destroy_simulation_data(simulationData);
  nesl_erase_simulator("PW_SMRv6/Solver Configuration_1");
  nesl_destroy_registry();

  /* Terminate for SimscapeExecutionBlock: '<S94>/OUTPUT_1_0' */
  diagnosticManager = static_cast<NeuDiagnosticManager *>
    (PW_SMRv6_DW.OUTPUT_1_0_DiagMgr);
  neu_destroy_diagnostic_manager(diagnosticManager);
  simulationData = static_cast<NeslSimulationData *>
    (PW_SMRv6_DW.OUTPUT_1_0_SimData);
  nesl_destroy_simulation_data(simulationData);
  nesl_erase_simulator("PW_SMRv6/Solver Configuration_1");
  nesl_destroy_registry();
}
