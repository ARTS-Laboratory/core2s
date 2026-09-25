/*
 * PW_SMRv7.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "PW_SMRv7".
 *
 * Model version              : 1.12
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C++ source code generated on : Fri Sep 25 17:42:48 2026
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PW_SMRv7.h"
#include "rtwtypes.h"
#include "PW_SMRv7_cal.h"
#include <cstring>

extern "C"
{

#include "rt_nonfinite.h"

}

#include <stddef.h>
#include "PW_SMRv7_private.h"

/* Block signals (default storage) */
B_PW_SMRv7_T PW_SMRv7_B;

/* Block states (default storage) */
DW_PW_SMRv7_T PW_SMRv7_DW;

/* Real-time model */
RT_MODEL_PW_SMRv7_T PW_SMRv7_M_ = RT_MODEL_PW_SMRv7_T();
RT_MODEL_PW_SMRv7_T *const PW_SMRv7_M = &PW_SMRv7_M_;
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
void PW_SMRv7_step(void)
{
  NeslSimulationData *simulationData;
  NeslSimulator *simulator;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  char *msg;
  real_T tmp_2[328];
  real_T tmp_4[328];
  real_T tmp_6[328];
  real_T tmp_0[16];
  real_T tmp_8[16];
  real_T time;
  real_T time_0;
  real_T time_1;
  real_T time_2;
  real_T time_3;
  real_T time_4;
  real_T time_5;
  real_T time_6;
  real_T time_7;
  real_T u0;
  real_T u1;
  real_T u2;
  int32_T isHit;
  int32_T isHit_0;
  int32_T isHit_1;
  int32_T isHit_2;
  int32_T k;
  int_T tmp_3[6];
  int_T tmp_5[6];
  int_T tmp_7[6];
  int_T tmp_1[5];
  int_T tmp_9[5];
  boolean_T tmp;

  /* DiscreteTransferFcn: '<S46>/Discrete Transfer Fcn' */
  u1 = PW_SMRv7_cal->DiscreteTransferFcn_NumCoef *
    PW_SMRv7_DW.DiscreteTransferFcn_states;

  /* DiscreteTransferFcn: '<S46>/Discrete Transfer Fcn' */
  PW_SMRv7_B.DiscreteTransferFcn = u1;

  /* SimscapeInputBlock: '<S195>/INPUT_4_1_1' */
  PW_SMRv7_B.INPUT_4_1_1[0] = PW_SMRv7_B.DiscreteTransferFcn;
  PW_SMRv7_B.INPUT_4_1_1[1] = 0.0;
  PW_SMRv7_B.INPUT_4_1_1[2] = 0.0;
  PW_SMRv7_DW.INPUT_4_1_1_Discrete[0] = !(PW_SMRv7_B.INPUT_4_1_1[0] ==
    PW_SMRv7_DW.INPUT_4_1_1_Discrete[1]);
  PW_SMRv7_DW.INPUT_4_1_1_Discrete[1] = PW_SMRv7_B.INPUT_4_1_1[0];
  PW_SMRv7_B.INPUT_4_1_1[0] = PW_SMRv7_DW.INPUT_4_1_1_Discrete[1];
  PW_SMRv7_B.INPUT_4_1_1[3] = PW_SMRv7_DW.INPUT_4_1_1_Discrete[0];

  /* DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn' */
  u1 = PW_SMRv7_cal->DiscreteTransferFcn_NumCoef_e *
    PW_SMRv7_DW.DiscreteTransferFcn_states_m;

  /* DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn' */
  PW_SMRv7_B.DiscreteTransferFcn_a = u1;

  /* SimscapeInputBlock: '<S195>/INPUT_2_1_1' */
  PW_SMRv7_B.INPUT_2_1_1[0] = PW_SMRv7_B.DiscreteTransferFcn_a;
  PW_SMRv7_B.INPUT_2_1_1[1] = 0.0;
  PW_SMRv7_B.INPUT_2_1_1[2] = 0.0;
  PW_SMRv7_DW.INPUT_2_1_1_Discrete[0] = !(PW_SMRv7_B.INPUT_2_1_1[0] ==
    PW_SMRv7_DW.INPUT_2_1_1_Discrete[1]);
  PW_SMRv7_DW.INPUT_2_1_1_Discrete[1] = PW_SMRv7_B.INPUT_2_1_1[0];
  PW_SMRv7_B.INPUT_2_1_1[0] = PW_SMRv7_DW.INPUT_2_1_1_Discrete[1];
  PW_SMRv7_B.INPUT_2_1_1[3] = PW_SMRv7_DW.INPUT_2_1_1_Discrete[0];

  /* DiscreteTransferFcn: '<S42>/Discrete Transfer Fcn' */
  u1 = PW_SMRv7_cal->DiscreteTransferFcn_NumCoef_er *
    PW_SMRv7_DW.DiscreteTransferFcn_states_n;

  /* DiscreteTransferFcn: '<S42>/Discrete Transfer Fcn' */
  PW_SMRv7_B.DiscreteTransferFcn_o = u1;

  /* Saturate: '<S42>/Saturation1' */
  u0 = PW_SMRv7_B.DiscreteTransferFcn_o;
  u1 = PW_SMRv7_cal->Saturation1_LowerSat;
  u2 = PW_SMRv7_cal->Saturation1_UpperSat;
  if (u0 > u2) {
    /* Saturate: '<S42>/Saturation1' */
    PW_SMRv7_B.Saturation1 = u2;
  } else if (u0 < u1) {
    /* Saturate: '<S42>/Saturation1' */
    PW_SMRv7_B.Saturation1 = u1;
  } else {
    /* Saturate: '<S42>/Saturation1' */
    PW_SMRv7_B.Saturation1 = u0;
  }

  /* End of Saturate: '<S42>/Saturation1' */

  /* SimscapeInputBlock: '<S195>/INPUT_1_1_1' */
  PW_SMRv7_B.INPUT_1_1_1[0] = PW_SMRv7_B.Saturation1;
  PW_SMRv7_B.INPUT_1_1_1[1] = 0.0;
  PW_SMRv7_B.INPUT_1_1_1[2] = 0.0;
  PW_SMRv7_DW.INPUT_1_1_1_Discrete[0] = !(PW_SMRv7_B.INPUT_1_1_1[0] ==
    PW_SMRv7_DW.INPUT_1_1_1_Discrete[1]);
  PW_SMRv7_DW.INPUT_1_1_1_Discrete[1] = PW_SMRv7_B.INPUT_1_1_1[0];
  PW_SMRv7_B.INPUT_1_1_1[0] = PW_SMRv7_DW.INPUT_1_1_1_Discrete[1];
  PW_SMRv7_B.INPUT_1_1_1[3] = PW_SMRv7_DW.INPUT_1_1_1_Discrete[0];

  /* DiscreteTransferFcn: '<S45>/Discrete Transfer Fcn' */
  u1 = PW_SMRv7_cal->DiscreteTransferFcn_NumCoef_o *
    PW_SMRv7_DW.DiscreteTransferFcn_states_h;

  /* DiscreteTransferFcn: '<S45>/Discrete Transfer Fcn' */
  PW_SMRv7_B.DiscreteTransferFcn_n = u1;

  /* SimscapeInputBlock: '<S195>/INPUT_3_1_1' */
  PW_SMRv7_B.INPUT_3_1_1[0] = PW_SMRv7_B.DiscreteTransferFcn_n;
  PW_SMRv7_B.INPUT_3_1_1[1] = 0.0;
  PW_SMRv7_B.INPUT_3_1_1[2] = 0.0;
  PW_SMRv7_DW.INPUT_3_1_1_Discrete[0] = !(PW_SMRv7_B.INPUT_3_1_1[0] ==
    PW_SMRv7_DW.INPUT_3_1_1_Discrete[1]);
  PW_SMRv7_DW.INPUT_3_1_1_Discrete[1] = PW_SMRv7_B.INPUT_3_1_1[0];
  PW_SMRv7_B.INPUT_3_1_1[0] = PW_SMRv7_DW.INPUT_3_1_1_Discrete[1];
  PW_SMRv7_B.INPUT_3_1_1[3] = PW_SMRv7_DW.INPUT_3_1_1_Discrete[0];

  /* SimscapeExecutionBlock: '<S195>/STATE_1' */
  simulationData = static_cast<NeslSimulationData *>(PW_SMRv7_DW.STATE_1_SimData);
  time = PW_SMRv7_M->Timing.taskTime0;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 183;
  simulationData->mData->mDiscStates.mX = &PW_SMRv7_DW.STATE_1_Discrete[0];
  simulationData->mData->mModeVector.mN = 129;
  simulationData->mData->mModeVector.mX = &PW_SMRv7_DW.STATE_1_Modes[0];
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
  tmp_0[0] = PW_SMRv7_B.INPUT_4_1_1[0];
  tmp_0[1] = PW_SMRv7_B.INPUT_4_1_1[1];
  tmp_0[2] = PW_SMRv7_B.INPUT_4_1_1[2];
  tmp_0[3] = PW_SMRv7_B.INPUT_4_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = PW_SMRv7_B.INPUT_2_1_1[0];
  tmp_0[5] = PW_SMRv7_B.INPUT_2_1_1[1];
  tmp_0[6] = PW_SMRv7_B.INPUT_2_1_1[2];
  tmp_0[7] = PW_SMRv7_B.INPUT_2_1_1[3];
  tmp_1[2] = 8;
  tmp_0[8] = PW_SMRv7_B.INPUT_1_1_1[0];
  tmp_0[9] = PW_SMRv7_B.INPUT_1_1_1[1];
  tmp_0[10] = PW_SMRv7_B.INPUT_1_1_1[2];
  tmp_0[11] = PW_SMRv7_B.INPUT_1_1_1[3];
  tmp_1[3] = 12;
  tmp_0[12] = PW_SMRv7_B.INPUT_3_1_1[0];
  tmp_0[13] = PW_SMRv7_B.INPUT_3_1_1[1];
  tmp_0[14] = PW_SMRv7_B.INPUT_3_1_1[2];
  tmp_0[15] = PW_SMRv7_B.INPUT_3_1_1[3];
  tmp_1[4] = 16;
  simulationData->mData->mInputValues.mN = 16;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 5;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  simulationData->mData->mOutputs.mN = 312;
  simulationData->mData->mOutputs.mX = &PW_SMRv7_B.STATE_1[0];
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  simulationData->mData->mCstateHasChanged = false;
  time_0 = PW_SMRv7_M->Timing.taskTime0;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_0;
  isHit = 0;
  simulationData->mData->mSampleHits.mN = 1;
  simulationData->mData->mSampleHits.mX = &isHit;
  simulationData->mData->mIsFundamentalSampleHit = true;
  simulator = static_cast<NeslSimulator *>(PW_SMRv7_DW.STATE_1_Simulator);
  diagnosticManager = static_cast<NeuDiagnosticManager *>
    (PW_SMRv7_DW.STATE_1_DiagMgr);
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  k = ne_simulator_method(simulator, NESL_SIM_OUTPUTS, simulationData,
    diagnosticManager);
  if (k != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(PW_SMRv7_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(PW_SMRv7_M, msg);
    }
  }

  /* End of SimscapeExecutionBlock: '<S195>/STATE_1' */

  /* SimscapeExecutionBlock: '<S195>/OUTPUT_1_1' */
  simulationData = static_cast<NeslSimulationData *>
    (PW_SMRv7_DW.OUTPUT_1_1_SimData);
  time_1 = PW_SMRv7_M->Timing.taskTime0;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_1;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &PW_SMRv7_DW.OUTPUT_1_1_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &PW_SMRv7_DW.OUTPUT_1_1_Modes;
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
  tmp_2[0] = PW_SMRv7_B.INPUT_4_1_1[0];
  tmp_2[1] = PW_SMRv7_B.INPUT_4_1_1[1];
  tmp_2[2] = PW_SMRv7_B.INPUT_4_1_1[2];
  tmp_2[3] = PW_SMRv7_B.INPUT_4_1_1[3];
  tmp_3[1] = 4;
  tmp_2[4] = PW_SMRv7_B.INPUT_2_1_1[0];
  tmp_2[5] = PW_SMRv7_B.INPUT_2_1_1[1];
  tmp_2[6] = PW_SMRv7_B.INPUT_2_1_1[2];
  tmp_2[7] = PW_SMRv7_B.INPUT_2_1_1[3];
  tmp_3[2] = 8;
  tmp_2[8] = PW_SMRv7_B.INPUT_1_1_1[0];
  tmp_2[9] = PW_SMRv7_B.INPUT_1_1_1[1];
  tmp_2[10] = PW_SMRv7_B.INPUT_1_1_1[2];
  tmp_2[11] = PW_SMRv7_B.INPUT_1_1_1[3];
  tmp_3[3] = 12;
  tmp_2[12] = PW_SMRv7_B.INPUT_3_1_1[0];
  tmp_2[13] = PW_SMRv7_B.INPUT_3_1_1[1];
  tmp_2[14] = PW_SMRv7_B.INPUT_3_1_1[2];
  tmp_2[15] = PW_SMRv7_B.INPUT_3_1_1[3];
  tmp_3[4] = 16;
  std::memcpy(&tmp_2[16], &PW_SMRv7_B.STATE_1[0], 312U * sizeof(real_T));
  tmp_3[5] = 328;
  simulationData->mData->mInputValues.mN = 328;
  simulationData->mData->mInputValues.mX = &tmp_2[0];
  simulationData->mData->mInputOffsets.mN = 6;
  simulationData->mData->mInputOffsets.mX = &tmp_3[0];
  simulationData->mData->mOutputs.mN = 37;
  simulationData->mData->mOutputs.mX = &PW_SMRv7_B.OUTPUT_1_1[0];
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  simulationData->mData->mCstateHasChanged = false;
  time_2 = PW_SMRv7_M->Timing.taskTime0;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_2;
  isHit_0 = 0;
  simulationData->mData->mSampleHits.mN = 1;
  simulationData->mData->mSampleHits.mX = &isHit_0;
  simulationData->mData->mIsFundamentalSampleHit = true;
  simulator = static_cast<NeslSimulator *>(PW_SMRv7_DW.OUTPUT_1_1_Simulator);
  diagnosticManager = static_cast<NeuDiagnosticManager *>
    (PW_SMRv7_DW.OUTPUT_1_1_DiagMgr);
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  k = ne_simulator_method(simulator, NESL_SIM_OUTPUTS, simulationData,
    diagnosticManager);
  if (k != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(PW_SMRv7_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(PW_SMRv7_M, msg);
    }
  }

  /* End of SimscapeExecutionBlock: '<S195>/OUTPUT_1_1' */

  /* Reshape: '<S112>/RESHAPE' */
  PW_SMRv7_B.RESHAPE = PW_SMRv7_B.OUTPUT_1_1[12];

  /* Sum: '<Root>/Subtract' incorporates:
   *  Constant: '<Root>/Constant'
   */
  PW_SMRv7_B.Subtract = PW_SMRv7_cal->Constant_Value - PW_SMRv7_B.RESHAPE;

  /* Gain: '<S85>/Proportional Gain' */
  PW_SMRv7_B.ProportionalGain = PW_SMRv7_cal->DiscretePIDController_P *
    PW_SMRv7_B.Subtract;

  /* DiscreteIntegrator: '<S80>/Integrator' */
  PW_SMRv7_B.Integrator = PW_SMRv7_DW.Integrator_DSTATE;

  /* Sum: '<S89>/Sum' */
  PW_SMRv7_B.Sum = PW_SMRv7_B.ProportionalGain + PW_SMRv7_B.Integrator;

  /* DeadZone: '<S73>/DeadZone' */
  if (PW_SMRv7_B.Sum > PW_SMRv7_cal->DiscretePIDController_UpperSatu) {
    /* DeadZone: '<S73>/DeadZone' */
    PW_SMRv7_B.DeadZone = PW_SMRv7_B.Sum -
      PW_SMRv7_cal->DiscretePIDController_UpperSatu;
  } else if (PW_SMRv7_B.Sum >= PW_SMRv7_cal->DiscretePIDController_LowerSatu) {
    /* DeadZone: '<S73>/DeadZone' */
    PW_SMRv7_B.DeadZone = 0.0;
  } else {
    /* DeadZone: '<S73>/DeadZone' */
    PW_SMRv7_B.DeadZone = PW_SMRv7_B.Sum -
      PW_SMRv7_cal->DiscretePIDController_LowerSatu;
  }

  /* End of DeadZone: '<S73>/DeadZone' */

  /* RelationalOperator: '<S71>/Relational Operator' incorporates:
   *  Constant: '<S71>/Clamping_zero'
   */
  PW_SMRv7_B.RelationalOperator = (PW_SMRv7_cal->Clamping_zero_Value !=
    PW_SMRv7_B.DeadZone);

  /* RelationalOperator: '<S71>/fix for DT propagation issue' incorporates:
   *  Constant: '<S71>/Clamping_zero'
   */
  PW_SMRv7_B.fixforDTpropagationissue = (PW_SMRv7_B.DeadZone >
    PW_SMRv7_cal->Clamping_zero_Value);

  /* Switch: '<S71>/Switch1' */
  if (PW_SMRv7_B.fixforDTpropagationissue) {
    /* Switch: '<S71>/Switch1' incorporates:
     *  Constant: '<S71>/Constant'
     */
    PW_SMRv7_B.Switch1 = PW_SMRv7_cal->Constant_Value_k;
  } else {
    /* Switch: '<S71>/Switch1' incorporates:
     *  Constant: '<S71>/Constant2'
     */
    PW_SMRv7_B.Switch1 = PW_SMRv7_cal->Constant2_Value;
  }

  /* End of Switch: '<S71>/Switch1' */

  /* Gain: '<S77>/Integral Gain' */
  PW_SMRv7_B.IntegralGain = PW_SMRv7_cal->DiscretePIDController_I *
    PW_SMRv7_B.Subtract;

  /* RelationalOperator: '<S71>/fix for DT propagation issue1' incorporates:
   *  Constant: '<S71>/Clamping_zero'
   */
  PW_SMRv7_B.fixforDTpropagationissue1 = (PW_SMRv7_B.IntegralGain >
    PW_SMRv7_cal->Clamping_zero_Value);

  /* Switch: '<S71>/Switch2' */
  if (PW_SMRv7_B.fixforDTpropagationissue1) {
    /* Switch: '<S71>/Switch2' incorporates:
     *  Constant: '<S71>/Constant3'
     */
    PW_SMRv7_B.Switch2 = PW_SMRv7_cal->Constant3_Value;
  } else {
    /* Switch: '<S71>/Switch2' incorporates:
     *  Constant: '<S71>/Constant4'
     */
    PW_SMRv7_B.Switch2 = PW_SMRv7_cal->Constant4_Value;
  }

  /* End of Switch: '<S71>/Switch2' */

  /* RelationalOperator: '<S71>/Equal1' */
  PW_SMRv7_B.Equal1 = (PW_SMRv7_B.Switch1 == PW_SMRv7_B.Switch2);

  /* Logic: '<S71>/AND3' */
  PW_SMRv7_B.AND3 = (PW_SMRv7_B.RelationalOperator && PW_SMRv7_B.Equal1);

  /* Switch: '<S71>/Switch' */
  if (PW_SMRv7_B.AND3) {
    /* Switch: '<S71>/Switch' incorporates:
     *  Constant: '<S71>/Constant1'
     */
    PW_SMRv7_B.Switch = PW_SMRv7_cal->Constant1_Value;
  } else {
    /* Switch: '<S71>/Switch' */
    PW_SMRv7_B.Switch = PW_SMRv7_B.IntegralGain;
  }

  /* End of Switch: '<S71>/Switch' */

  /* Saturate: '<S87>/Saturation' */
  u0 = PW_SMRv7_B.Sum;
  u1 = PW_SMRv7_cal->DiscretePIDController_LowerSatu;
  u2 = PW_SMRv7_cal->DiscretePIDController_UpperSatu;
  if (u0 > u2) {
    /* Saturate: '<S87>/Saturation' */
    PW_SMRv7_B.Saturation = u2;
  } else if (u0 < u1) {
    /* Saturate: '<S87>/Saturation' */
    PW_SMRv7_B.Saturation = u1;
  } else {
    /* Saturate: '<S87>/Saturation' */
    PW_SMRv7_B.Saturation = u0;
  }

  /* End of Saturate: '<S87>/Saturation' */

  /* Saturate: '<Root>/Saturation' */
  u0 = PW_SMRv7_B.Saturation;
  u1 = PW_SMRv7_cal->Saturation_LowerSat;
  u2 = PW_SMRv7_cal->Saturation_UpperSat;
  if (u0 > u2) {
    /* Saturate: '<Root>/Saturation' */
    PW_SMRv7_B.Saturation_l = u2;
  } else if (u0 < u1) {
    /* Saturate: '<Root>/Saturation' */
    PW_SMRv7_B.Saturation_l = u1;
  } else {
    /* Saturate: '<Root>/Saturation' */
    PW_SMRv7_B.Saturation_l = u0;
  }

  /* End of Saturate: '<Root>/Saturation' */

  /* Reshape: '<S97>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_e = PW_SMRv7_B.OUTPUT_1_1[15];

  /* Reshape: '<S120>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_k = PW_SMRv7_B.OUTPUT_1_1[32];

  /* Lookup_n-D: '<S42>/1-D Lookup Table' incorporates:
   *  Reshape: '<S97>/RESHAPE'
   */
  PW_SMRv7_B.uDLookupTable = look1_binlxpw(PW_SMRv7_B.RESHAPE_e,
    PW_SMRv7_cal->uDLookupTable_bp01Data, PW_SMRv7_cal->uDLookupTable_tableData,
    9U);

  /* Sum: '<S42>/Subtract' */
  PW_SMRv7_B.Subtract_h = PW_SMRv7_B.uDLookupTable - PW_SMRv7_B.RESHAPE_k;

  /* Gain: '<S179>/Proportional Gain' */
  PW_SMRv7_B.ProportionalGain_d = PW_SMRv7_cal->DiscretePIDController_P_h *
    PW_SMRv7_B.Subtract_h;

  /* DiscreteIntegrator: '<S174>/Integrator' */
  PW_SMRv7_B.Integrator_f = PW_SMRv7_DW.Integrator_DSTATE_k;

  /* Sum: '<S183>/Sum' */
  PW_SMRv7_B.Sum_p = PW_SMRv7_B.ProportionalGain_d + PW_SMRv7_B.Integrator_f;

  /* DeadZone: '<S167>/DeadZone' */
  if (PW_SMRv7_B.Sum_p > PW_SMRv7_P.DiscretePIDController_UpperSa_o) {
    /* DeadZone: '<S167>/DeadZone' */
    PW_SMRv7_B.DeadZone_n = PW_SMRv7_B.Sum_p -
      PW_SMRv7_P.DiscretePIDController_UpperSa_o;
  } else if (PW_SMRv7_B.Sum_p >= PW_SMRv7_P.DiscretePIDController_LowerSa_f) {
    /* DeadZone: '<S167>/DeadZone' */
    PW_SMRv7_B.DeadZone_n = 0.0;
  } else {
    /* DeadZone: '<S167>/DeadZone' */
    PW_SMRv7_B.DeadZone_n = PW_SMRv7_B.Sum_p -
      PW_SMRv7_P.DiscretePIDController_LowerSa_f;
  }

  /* End of DeadZone: '<S167>/DeadZone' */

  /* RelationalOperator: '<S165>/Relational Operator' incorporates:
   *  Constant: '<S165>/Clamping_zero'
   */
  PW_SMRv7_B.RelationalOperator_a = (PW_SMRv7_cal->Clamping_zero_Value_e !=
    PW_SMRv7_B.DeadZone_n);

  /* RelationalOperator: '<S165>/fix for DT propagation issue' incorporates:
   *  Constant: '<S165>/Clamping_zero'
   */
  PW_SMRv7_B.fixforDTpropagationissue_f = (PW_SMRv7_B.DeadZone_n >
    PW_SMRv7_cal->Clamping_zero_Value_e);

  /* Switch: '<S165>/Switch1' */
  if (PW_SMRv7_B.fixforDTpropagationissue_f) {
    /* Switch: '<S165>/Switch1' incorporates:
     *  Constant: '<S165>/Constant'
     */
    PW_SMRv7_B.Switch1_n = PW_SMRv7_cal->Constant_Value_e;
  } else {
    /* Switch: '<S165>/Switch1' incorporates:
     *  Constant: '<S165>/Constant2'
     */
    PW_SMRv7_B.Switch1_n = PW_SMRv7_cal->Constant2_Value_f;
  }

  /* End of Switch: '<S165>/Switch1' */

  /* Gain: '<S171>/Integral Gain' */
  PW_SMRv7_B.IntegralGain_p = PW_SMRv7_cal->DiscretePIDController_I_o *
    PW_SMRv7_B.Subtract_h;

  /* RelationalOperator: '<S165>/fix for DT propagation issue1' incorporates:
   *  Constant: '<S165>/Clamping_zero'
   */
  PW_SMRv7_B.fixforDTpropagationissue1_c = (PW_SMRv7_B.IntegralGain_p >
    PW_SMRv7_cal->Clamping_zero_Value_e);

  /* Switch: '<S165>/Switch2' */
  if (PW_SMRv7_B.fixforDTpropagationissue1_c) {
    /* Switch: '<S165>/Switch2' incorporates:
     *  Constant: '<S165>/Constant3'
     */
    PW_SMRv7_B.Switch2_g = PW_SMRv7_cal->Constant3_Value_i;
  } else {
    /* Switch: '<S165>/Switch2' incorporates:
     *  Constant: '<S165>/Constant4'
     */
    PW_SMRv7_B.Switch2_g = PW_SMRv7_cal->Constant4_Value_i;
  }

  /* End of Switch: '<S165>/Switch2' */

  /* RelationalOperator: '<S165>/Equal1' */
  PW_SMRv7_B.Equal1_i = (PW_SMRv7_B.Switch1_n == PW_SMRv7_B.Switch2_g);

  /* Logic: '<S165>/AND3' */
  PW_SMRv7_B.AND3_g = (PW_SMRv7_B.RelationalOperator_a && PW_SMRv7_B.Equal1_i);

  /* Switch: '<S165>/Switch' */
  if (PW_SMRv7_B.AND3_g) {
    /* Switch: '<S165>/Switch' incorporates:
     *  Constant: '<S165>/Constant1'
     */
    PW_SMRv7_B.Switch_a = PW_SMRv7_cal->Constant1_Value_d;
  } else {
    /* Switch: '<S165>/Switch' */
    PW_SMRv7_B.Switch_a = PW_SMRv7_B.IntegralGain_p;
  }

  /* End of Switch: '<S165>/Switch' */

  /* Saturate: '<S181>/Saturation' */
  u0 = PW_SMRv7_B.Sum_p;
  u1 = PW_SMRv7_P.DiscretePIDController_LowerSa_f;
  u2 = PW_SMRv7_P.DiscretePIDController_UpperSa_o;
  if (u0 > u2) {
    /* Saturate: '<S181>/Saturation' */
    PW_SMRv7_B.Saturation_m = u2;
  } else if (u0 < u1) {
    /* Saturate: '<S181>/Saturation' */
    PW_SMRv7_B.Saturation_m = u1;
  } else {
    /* Saturate: '<S181>/Saturation' */
    PW_SMRv7_B.Saturation_m = u0;
  }

  /* End of Saturate: '<S181>/Saturation' */

  /* Reshape: '<S191>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_p = PW_SMRv7_B.OUTPUT_1_1[5];

  /* Reshape: '<S192>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_n = PW_SMRv7_B.OUTPUT_1_1[4];

  /* Reshape: '<S98>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_m = PW_SMRv7_B.OUTPUT_1_1[17];

  /* Lookup_n-D: '<S46>/1-D Lookup Table' incorporates:
   *  Reshape: '<S98>/RESHAPE'
   */
  PW_SMRv7_B.uDLookupTable_l = look1_binlxpw(PW_SMRv7_B.RESHAPE_m,
    PW_SMRv7_cal->uDLookupTable_bp01Data_p,
    PW_SMRv7_cal->uDLookupTable_tableData_j, 7U);

  /* Sum: '<S46>/Subtract' incorporates:
   *  Constant: '<S46>/Constant'
   */
  PW_SMRv7_B.Subtract_hm = PW_SMRv7_cal->Constant_Value_c - PW_SMRv7_B.RESHAPE_m;

  /* Gain: '<S289>/Proportional Gain' */
  PW_SMRv7_B.ProportionalGain_l = PW_SMRv7_cal->DiscretePIDController_P_l *
    PW_SMRv7_B.Subtract_hm;

  /* DiscreteIntegrator: '<S284>/Integrator' */
  PW_SMRv7_B.Integrator_n = PW_SMRv7_DW.Integrator_DSTATE_p;

  /* Gain: '<S278>/Derivative Gain' */
  PW_SMRv7_B.DerivativeGain = PW_SMRv7_cal->DiscretePIDController_D *
    PW_SMRv7_B.Subtract_hm;

  /* DiscreteIntegrator: '<S279>/Filter' */
  PW_SMRv7_B.Filter = PW_SMRv7_DW.Filter_DSTATE;

  /* Sum: '<S279>/SumD' */
  PW_SMRv7_B.SumD = PW_SMRv7_B.DerivativeGain - PW_SMRv7_B.Filter;

  /* Gain: '<S287>/Filter Coefficient' */
  PW_SMRv7_B.FilterCoefficient = PW_SMRv7_cal->DiscretePIDController_N *
    PW_SMRv7_B.SumD;

  /* Sum: '<S293>/Sum' */
  PW_SMRv7_B.Sum_f = (PW_SMRv7_B.ProportionalGain_l + PW_SMRv7_B.Integrator_n) +
    PW_SMRv7_B.FilterCoefficient;

  /* DeadZone: '<S277>/DeadZone' */
  if (PW_SMRv7_B.Sum_f > PW_SMRv7_cal->DiscretePIDController_UpperSa_n) {
    /* DeadZone: '<S277>/DeadZone' */
    PW_SMRv7_B.DeadZone_f = PW_SMRv7_B.Sum_f -
      PW_SMRv7_cal->DiscretePIDController_UpperSa_n;
  } else if (PW_SMRv7_B.Sum_f >= PW_SMRv7_cal->DiscretePIDController_LowerSa_a)
  {
    /* DeadZone: '<S277>/DeadZone' */
    PW_SMRv7_B.DeadZone_f = 0.0;
  } else {
    /* DeadZone: '<S277>/DeadZone' */
    PW_SMRv7_B.DeadZone_f = PW_SMRv7_B.Sum_f -
      PW_SMRv7_cal->DiscretePIDController_LowerSa_a;
  }

  /* End of DeadZone: '<S277>/DeadZone' */

  /* RelationalOperator: '<S275>/Relational Operator' incorporates:
   *  Constant: '<S275>/Clamping_zero'
   */
  PW_SMRv7_B.RelationalOperator_a4 = (PW_SMRv7_cal->Clamping_zero_Value_m !=
    PW_SMRv7_B.DeadZone_f);

  /* RelationalOperator: '<S275>/fix for DT propagation issue' incorporates:
   *  Constant: '<S275>/Clamping_zero'
   */
  PW_SMRv7_B.fixforDTpropagationissue_p = (PW_SMRv7_B.DeadZone_f >
    PW_SMRv7_cal->Clamping_zero_Value_m);

  /* Switch: '<S275>/Switch1' */
  if (PW_SMRv7_B.fixforDTpropagationissue_p) {
    /* Switch: '<S275>/Switch1' incorporates:
     *  Constant: '<S275>/Constant'
     */
    PW_SMRv7_B.Switch1_j = PW_SMRv7_cal->Constant_Value_f;
  } else {
    /* Switch: '<S275>/Switch1' incorporates:
     *  Constant: '<S275>/Constant2'
     */
    PW_SMRv7_B.Switch1_j = PW_SMRv7_cal->Constant2_Value_o;
  }

  /* End of Switch: '<S275>/Switch1' */

  /* Gain: '<S281>/Integral Gain' */
  PW_SMRv7_B.IntegralGain_c = PW_SMRv7_cal->DiscretePIDController_I_p *
    PW_SMRv7_B.Subtract_hm;

  /* RelationalOperator: '<S275>/fix for DT propagation issue1' incorporates:
   *  Constant: '<S275>/Clamping_zero'
   */
  PW_SMRv7_B.fixforDTpropagationissue1_h = (PW_SMRv7_B.IntegralGain_c >
    PW_SMRv7_cal->Clamping_zero_Value_m);

  /* Switch: '<S275>/Switch2' */
  if (PW_SMRv7_B.fixforDTpropagationissue1_h) {
    /* Switch: '<S275>/Switch2' incorporates:
     *  Constant: '<S275>/Constant3'
     */
    PW_SMRv7_B.Switch2_gt = PW_SMRv7_cal->Constant3_Value_m;
  } else {
    /* Switch: '<S275>/Switch2' incorporates:
     *  Constant: '<S275>/Constant4'
     */
    PW_SMRv7_B.Switch2_gt = PW_SMRv7_cal->Constant4_Value_o;
  }

  /* End of Switch: '<S275>/Switch2' */

  /* RelationalOperator: '<S275>/Equal1' */
  PW_SMRv7_B.Equal1_d = (PW_SMRv7_B.Switch1_j == PW_SMRv7_B.Switch2_gt);

  /* Logic: '<S275>/AND3' */
  PW_SMRv7_B.AND3_h = (PW_SMRv7_B.RelationalOperator_a4 && PW_SMRv7_B.Equal1_d);

  /* Switch: '<S275>/Switch' */
  if (PW_SMRv7_B.AND3_h) {
    /* Switch: '<S275>/Switch' incorporates:
     *  Constant: '<S275>/Constant1'
     */
    PW_SMRv7_B.Switch_f = PW_SMRv7_cal->Constant1_Value_i;
  } else {
    /* Switch: '<S275>/Switch' */
    PW_SMRv7_B.Switch_f = PW_SMRv7_B.IntegralGain_c;
  }

  /* End of Switch: '<S275>/Switch' */

  /* Saturate: '<S291>/Saturation' */
  u0 = PW_SMRv7_B.Sum_f;
  u1 = PW_SMRv7_cal->DiscretePIDController_LowerSa_a;
  u2 = PW_SMRv7_cal->DiscretePIDController_UpperSa_n;
  if (u0 > u2) {
    /* Saturate: '<S291>/Saturation' */
    PW_SMRv7_B.Saturation_f = u2;
  } else if (u0 < u1) {
    /* Saturate: '<S291>/Saturation' */
    PW_SMRv7_B.Saturation_f = u1;
  } else {
    /* Saturate: '<S291>/Saturation' */
    PW_SMRv7_B.Saturation_f = u0;
  }

  /* End of Saturate: '<S291>/Saturation' */

  /* MinMax: '<S46>/MinMax' */
  u0 = PW_SMRv7_B.uDLookupTable_l;
  u1 = PW_SMRv7_B.Saturation_f;
  if ((u0 <= u1) || rtIsNaN(u1)) {
    u1 = u0;
  }

  /* MinMax: '<S46>/MinMax' */
  PW_SMRv7_B.MinMax = u1;

  /* Saturate: '<S46>/Saturation' */
  u0 = PW_SMRv7_B.MinMax;
  u1 = PW_SMRv7_cal->Saturation_LowerSat_j;
  u2 = PW_SMRv7_P.Saturation_UpperSat_b;
  if (u0 > u2) {
    /* Saturate: '<S46>/Saturation' */
    PW_SMRv7_B.Saturation_d = u2;
  } else if (u0 < u1) {
    /* Saturate: '<S46>/Saturation' */
    PW_SMRv7_B.Saturation_d = u1;
  } else {
    /* Saturate: '<S46>/Saturation' */
    PW_SMRv7_B.Saturation_d = u0;
  }

  /* End of Saturate: '<S46>/Saturation' */

  /* Reshape: '<S100>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_j = PW_SMRv7_B.OUTPUT_1_1[34];

  /* SimscapeExecutionBlock: '<S195>/OUTPUT_1_2' */
  simulationData = static_cast<NeslSimulationData *>
    (PW_SMRv7_DW.OUTPUT_1_2_SimData);
  time_3 = PW_SMRv7_M->Timing.taskTime0;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_3;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &PW_SMRv7_DW.OUTPUT_1_2_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &PW_SMRv7_DW.OUTPUT_1_2_Modes;
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
  tmp_4[0] = PW_SMRv7_B.INPUT_4_1_1[0];
  tmp_4[1] = PW_SMRv7_B.INPUT_4_1_1[1];
  tmp_4[2] = PW_SMRv7_B.INPUT_4_1_1[2];
  tmp_4[3] = PW_SMRv7_B.INPUT_4_1_1[3];
  tmp_5[1] = 4;
  tmp_4[4] = PW_SMRv7_B.INPUT_2_1_1[0];
  tmp_4[5] = PW_SMRv7_B.INPUT_2_1_1[1];
  tmp_4[6] = PW_SMRv7_B.INPUT_2_1_1[2];
  tmp_4[7] = PW_SMRv7_B.INPUT_2_1_1[3];
  tmp_5[2] = 8;
  tmp_4[8] = PW_SMRv7_B.INPUT_1_1_1[0];
  tmp_4[9] = PW_SMRv7_B.INPUT_1_1_1[1];
  tmp_4[10] = PW_SMRv7_B.INPUT_1_1_1[2];
  tmp_4[11] = PW_SMRv7_B.INPUT_1_1_1[3];
  tmp_5[3] = 12;
  tmp_4[12] = PW_SMRv7_B.INPUT_3_1_1[0];
  tmp_4[13] = PW_SMRv7_B.INPUT_3_1_1[1];
  tmp_4[14] = PW_SMRv7_B.INPUT_3_1_1[2];
  tmp_4[15] = PW_SMRv7_B.INPUT_3_1_1[3];
  tmp_5[4] = 16;
  std::memcpy(&tmp_4[16], &PW_SMRv7_B.STATE_1[0], 312U * sizeof(real_T));
  tmp_5[5] = 328;
  simulationData->mData->mInputValues.mN = 328;
  simulationData->mData->mInputValues.mX = &tmp_4[0];
  simulationData->mData->mInputOffsets.mN = 6;
  simulationData->mData->mInputOffsets.mX = &tmp_5[0];
  simulationData->mData->mOutputs.mN = 4;
  simulationData->mData->mOutputs.mX = &PW_SMRv7_B.OUTPUT_1_2[0];
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  simulationData->mData->mCstateHasChanged = false;
  time_4 = PW_SMRv7_M->Timing.taskTime0;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_4;
  isHit_1 = 0;
  simulationData->mData->mSampleHits.mN = 1;
  simulationData->mData->mSampleHits.mX = &isHit_1;
  simulationData->mData->mIsFundamentalSampleHit = true;
  simulator = static_cast<NeslSimulator *>(PW_SMRv7_DW.OUTPUT_1_2_Simulator);
  diagnosticManager = static_cast<NeuDiagnosticManager *>
    (PW_SMRv7_DW.OUTPUT_1_2_DiagMgr);
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  k = ne_simulator_method(simulator, NESL_SIM_OUTPUTS, simulationData,
    diagnosticManager);
  if (k != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(PW_SMRv7_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(PW_SMRv7_M, msg);
    }
  }

  /* End of SimscapeExecutionBlock: '<S195>/OUTPUT_1_2' */

  /* Reshape: '<S102>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_ef = PW_SMRv7_B.OUTPUT_1_2[3];

  /* SimscapeExecutionBlock: '<S195>/OUTPUT_1_0' */
  simulationData = static_cast<NeslSimulationData *>
    (PW_SMRv7_DW.OUTPUT_1_0_SimData);
  time_5 = PW_SMRv7_M->Timing.taskTime0;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_5;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &PW_SMRv7_DW.OUTPUT_1_0_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &PW_SMRv7_DW.OUTPUT_1_0_Modes;
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
  tmp_6[0] = PW_SMRv7_B.INPUT_4_1_1[0];
  tmp_6[1] = PW_SMRv7_B.INPUT_4_1_1[1];
  tmp_6[2] = PW_SMRv7_B.INPUT_4_1_1[2];
  tmp_6[3] = PW_SMRv7_B.INPUT_4_1_1[3];
  tmp_7[1] = 4;
  tmp_6[4] = PW_SMRv7_B.INPUT_2_1_1[0];
  tmp_6[5] = PW_SMRv7_B.INPUT_2_1_1[1];
  tmp_6[6] = PW_SMRv7_B.INPUT_2_1_1[2];
  tmp_6[7] = PW_SMRv7_B.INPUT_2_1_1[3];
  tmp_7[2] = 8;
  tmp_6[8] = PW_SMRv7_B.INPUT_1_1_1[0];
  tmp_6[9] = PW_SMRv7_B.INPUT_1_1_1[1];
  tmp_6[10] = PW_SMRv7_B.INPUT_1_1_1[2];
  tmp_6[11] = PW_SMRv7_B.INPUT_1_1_1[3];
  tmp_7[3] = 12;
  tmp_6[12] = PW_SMRv7_B.INPUT_3_1_1[0];
  tmp_6[13] = PW_SMRv7_B.INPUT_3_1_1[1];
  tmp_6[14] = PW_SMRv7_B.INPUT_3_1_1[2];
  tmp_6[15] = PW_SMRv7_B.INPUT_3_1_1[3];
  tmp_7[4] = 16;
  std::memcpy(&tmp_6[16], &PW_SMRv7_B.STATE_1[0], 312U * sizeof(real_T));
  tmp_7[5] = 328;
  simulationData->mData->mInputValues.mN = 328;
  simulationData->mData->mInputValues.mX = &tmp_6[0];
  simulationData->mData->mInputOffsets.mN = 6;
  simulationData->mData->mInputOffsets.mX = &tmp_7[0];
  simulationData->mData->mOutputs.mN = 1;

  /* SimscapeExecutionBlock: '<S195>/OUTPUT_1_0' */
  simulationData->mData->mOutputs.mX = &PW_SMRv7_B.OUTPUT_1_0;

  /* SimscapeExecutionBlock: '<S195>/OUTPUT_1_0' */
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = NULL;
  simulationData->mData->mCstateHasChanged = false;
  time_6 = PW_SMRv7_M->Timing.taskTime0;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_6;
  isHit_2 = 0;
  simulationData->mData->mSampleHits.mN = 1;
  simulationData->mData->mSampleHits.mX = &isHit_2;
  simulationData->mData->mIsFundamentalSampleHit = true;
  simulator = static_cast<NeslSimulator *>(PW_SMRv7_DW.OUTPUT_1_0_Simulator);
  diagnosticManager = static_cast<NeuDiagnosticManager *>
    (PW_SMRv7_DW.OUTPUT_1_0_DiagMgr);
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  k = ne_simulator_method(simulator, NESL_SIM_OUTPUTS, simulationData,
    diagnosticManager);
  if (k != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(PW_SMRv7_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(PW_SMRv7_M, msg);
    }
  }

  /* Reshape: '<S99>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_ps = PW_SMRv7_B.OUTPUT_1_0;

  /* Gain: '<S45>/Gain' */
  PW_SMRv7_B.Gain = PW_SMRv7_cal->Gain_Gain * PW_SMRv7_B.RESHAPE_ps;

  /* Sum: '<S45>/Subtract' */
  PW_SMRv7_B.Subtract_m = PW_SMRv7_B.RESHAPE_ef - PW_SMRv7_B.Gain;

  /* Gain: '<S236>/Proportional Gain' */
  PW_SMRv7_B.ProportionalGain_c = PW_SMRv7_cal->DiscretePIDController_P_p *
    PW_SMRv7_B.Subtract_m;

  /* DiscreteIntegrator: '<S231>/Integrator' */
  PW_SMRv7_B.Integrator_c = PW_SMRv7_DW.Integrator_DSTATE_e;

  /* Sum: '<S240>/Sum' */
  PW_SMRv7_B.Sum_k = PW_SMRv7_B.ProportionalGain_c + PW_SMRv7_B.Integrator_c;

  /* DeadZone: '<S224>/DeadZone' */
  if (PW_SMRv7_B.Sum_k > PW_SMRv7_cal->DiscretePIDController_UpperSa_l) {
    /* DeadZone: '<S224>/DeadZone' */
    PW_SMRv7_B.DeadZone_m = PW_SMRv7_B.Sum_k -
      PW_SMRv7_cal->DiscretePIDController_UpperSa_l;
  } else if (PW_SMRv7_B.Sum_k >= PW_SMRv7_cal->DiscretePIDController_LowerSa_h)
  {
    /* DeadZone: '<S224>/DeadZone' */
    PW_SMRv7_B.DeadZone_m = 0.0;
  } else {
    /* DeadZone: '<S224>/DeadZone' */
    PW_SMRv7_B.DeadZone_m = PW_SMRv7_B.Sum_k -
      PW_SMRv7_cal->DiscretePIDController_LowerSa_h;
  }

  /* End of DeadZone: '<S224>/DeadZone' */

  /* RelationalOperator: '<S222>/Relational Operator' incorporates:
   *  Constant: '<S222>/Clamping_zero'
   */
  PW_SMRv7_B.RelationalOperator_o = (PW_SMRv7_cal->Clamping_zero_Value_f !=
    PW_SMRv7_B.DeadZone_m);

  /* RelationalOperator: '<S222>/fix for DT propagation issue' incorporates:
   *  Constant: '<S222>/Clamping_zero'
   */
  PW_SMRv7_B.fixforDTpropagationissue_m = (PW_SMRv7_B.DeadZone_m >
    PW_SMRv7_cal->Clamping_zero_Value_f);

  /* Switch: '<S222>/Switch1' */
  if (PW_SMRv7_B.fixforDTpropagationissue_m) {
    /* Switch: '<S222>/Switch1' incorporates:
     *  Constant: '<S222>/Constant'
     */
    PW_SMRv7_B.Switch1_nb = PW_SMRv7_cal->Constant_Value_l;
  } else {
    /* Switch: '<S222>/Switch1' incorporates:
     *  Constant: '<S222>/Constant2'
     */
    PW_SMRv7_B.Switch1_nb = PW_SMRv7_cal->Constant2_Value_m;
  }

  /* End of Switch: '<S222>/Switch1' */

  /* Gain: '<S228>/Integral Gain' */
  PW_SMRv7_B.IntegralGain_d = PW_SMRv7_cal->DiscretePIDController_I_n *
    PW_SMRv7_B.Subtract_m;

  /* RelationalOperator: '<S222>/fix for DT propagation issue1' incorporates:
   *  Constant: '<S222>/Clamping_zero'
   */
  PW_SMRv7_B.fixforDTpropagationissue1_b = (PW_SMRv7_B.IntegralGain_d >
    PW_SMRv7_cal->Clamping_zero_Value_f);

  /* Switch: '<S222>/Switch2' */
  if (PW_SMRv7_B.fixforDTpropagationissue1_b) {
    /* Switch: '<S222>/Switch2' incorporates:
     *  Constant: '<S222>/Constant3'
     */
    PW_SMRv7_B.Switch2_p = PW_SMRv7_cal->Constant3_Value_e;
  } else {
    /* Switch: '<S222>/Switch2' incorporates:
     *  Constant: '<S222>/Constant4'
     */
    PW_SMRv7_B.Switch2_p = PW_SMRv7_cal->Constant4_Value_j;
  }

  /* End of Switch: '<S222>/Switch2' */

  /* RelationalOperator: '<S222>/Equal1' */
  PW_SMRv7_B.Equal1_o = (PW_SMRv7_B.Switch1_nb == PW_SMRv7_B.Switch2_p);

  /* Logic: '<S222>/AND3' */
  PW_SMRv7_B.AND3_l = (PW_SMRv7_B.RelationalOperator_o && PW_SMRv7_B.Equal1_o);

  /* Switch: '<S222>/Switch' */
  if (PW_SMRv7_B.AND3_l) {
    /* Switch: '<S222>/Switch' incorporates:
     *  Constant: '<S222>/Constant1'
     */
    PW_SMRv7_B.Switch_m = PW_SMRv7_cal->Constant1_Value_n;
  } else {
    /* Switch: '<S222>/Switch' */
    PW_SMRv7_B.Switch_m = PW_SMRv7_B.IntegralGain_d;
  }

  /* End of Switch: '<S222>/Switch' */

  /* Saturate: '<S238>/Saturation' */
  u0 = PW_SMRv7_B.Sum_k;
  u1 = PW_SMRv7_cal->DiscretePIDController_LowerSa_h;
  u2 = PW_SMRv7_cal->DiscretePIDController_UpperSa_l;
  if (u0 > u2) {
    /* Saturate: '<S238>/Saturation' */
    PW_SMRv7_B.Saturation_i = u2;
  } else if (u0 < u1) {
    /* Saturate: '<S238>/Saturation' */
    PW_SMRv7_B.Saturation_i = u1;
  } else {
    /* Saturate: '<S238>/Saturation' */
    PW_SMRv7_B.Saturation_i = u0;
  }

  /* End of Saturate: '<S238>/Saturation' */
  /* Reshape: '<S101>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_a = PW_SMRv7_B.OUTPUT_1_2[1];

  /* Reshape: '<S103>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_l = PW_SMRv7_B.OUTPUT_1_1[13];

  /* Reshape: '<S104>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_p0 = PW_SMRv7_B.OUTPUT_1_1[14];

  /* Reshape: '<S105>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_av = PW_SMRv7_B.OUTPUT_1_1[26];

  /* Reshape: '<S132>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_ab = PW_SMRv7_B.OUTPUT_1_1[22];

  /* Reshape: '<S106>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_po = PW_SMRv7_B.OUTPUT_1_1[35];

  /* Reshape: '<S107>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_my = PW_SMRv7_B.OUTPUT_1_1[8];

  /* Reshape: '<S108>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_b = PW_SMRv7_B.OUTPUT_1_1[9];

  /* Reshape: '<S109>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_h = PW_SMRv7_B.OUTPUT_1_1[6];

  /* Reshape: '<S110>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_nj = PW_SMRv7_B.OUTPUT_1_1[10];

  /* Reshape: '<S111>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_o = PW_SMRv7_B.OUTPUT_1_1[11];

  /* Reshape: '<S113>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_bx = PW_SMRv7_B.OUTPUT_1_1[0];

  /* Reshape: '<S114>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_o4 = PW_SMRv7_B.OUTPUT_1_1[29];

  /* Reshape: '<S115>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_ou = PW_SMRv7_B.OUTPUT_1_1[27];

  /* Reshape: '<S116>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_j1 = PW_SMRv7_B.OUTPUT_1_1[24];

  /* Reshape: '<S117>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_c = PW_SMRv7_B.OUTPUT_1_1[31];

  /* Reshape: '<S118>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_m5 = PW_SMRv7_B.OUTPUT_1_1[30];

  /* Reshape: '<S119>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_k4 = PW_SMRv7_B.OUTPUT_1_1[1];

  /* Reshape: '<S121>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_li = PW_SMRv7_B.OUTPUT_1_1[28];

  /* Reshape: '<S122>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_eh = PW_SMRv7_B.OUTPUT_1_1[25];

  /* Reshape: '<S123>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_kh = PW_SMRv7_B.OUTPUT_1_1[36];

  /* Reshape: '<S124>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_e3 = PW_SMRv7_B.OUTPUT_1_1[19];

  /* Reshape: '<S125>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_cs = PW_SMRv7_B.OUTPUT_1_1[18];

  /* Reshape: '<S126>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_lj = PW_SMRv7_B.OUTPUT_1_1[20];

  /* Reshape: '<S127>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_ce = PW_SMRv7_B.OUTPUT_1_2[0];

  /* Reshape: '<S128>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_d = PW_SMRv7_B.OUTPUT_1_2[2];

  /* Reshape: '<S129>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_f = PW_SMRv7_B.OUTPUT_1_1[21];

  /* Reshape: '<S134>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_jf = PW_SMRv7_B.OUTPUT_1_1[23];

  /* Reshape: '<S130>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_e0 = PW_SMRv7_B.OUTPUT_1_1[16];

  /* Reshape: '<S131>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_c4 = PW_SMRv7_B.OUTPUT_1_1[3];

  /* Reshape: '<S135>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_g = PW_SMRv7_B.OUTPUT_1_1[33];

  /* Reshape: '<S133>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_i = PW_SMRv7_B.OUTPUT_1_1[7];

  /* Reshape: '<S136>/RESHAPE' */
  PW_SMRv7_B.RESHAPE_fp = PW_SMRv7_B.OUTPUT_1_1[2];

  /* Update for DiscreteTransferFcn: '<S46>/Discrete Transfer Fcn' */
  u1 = PW_SMRv7_B.Saturation_d;
  u1 -= PW_SMRv7_cal->DiscreteTransferFcn_DenCoef[1] *
    PW_SMRv7_DW.DiscreteTransferFcn_states;
  u1 /= PW_SMRv7_cal->DiscreteTransferFcn_DenCoef[0];
  PW_SMRv7_DW.DiscreteTransferFcn_states = u1;

  /* Update for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn' */
  u1 = PW_SMRv7_B.Saturation_l;
  u1 -= PW_SMRv7_cal->DiscreteTransferFcn_DenCoef_l[1] *
    PW_SMRv7_DW.DiscreteTransferFcn_states_m;
  u1 /= PW_SMRv7_cal->DiscreteTransferFcn_DenCoef_l[0];
  PW_SMRv7_DW.DiscreteTransferFcn_states_m = u1;

  /* Update for DiscreteTransferFcn: '<S42>/Discrete Transfer Fcn' */
  u1 = PW_SMRv7_B.Saturation_m;
  u1 -= PW_SMRv7_cal->DiscreteTransferFcn_DenCoef_b[1] *
    PW_SMRv7_DW.DiscreteTransferFcn_states_n;
  u1 /= PW_SMRv7_cal->DiscreteTransferFcn_DenCoef_b[0];
  PW_SMRv7_DW.DiscreteTransferFcn_states_n = u1;

  /* Update for DiscreteTransferFcn: '<S45>/Discrete Transfer Fcn' */
  u1 = PW_SMRv7_B.Saturation_i;
  u1 -= PW_SMRv7_cal->DiscreteTransferFcn_DenCoef_i[1] *
    PW_SMRv7_DW.DiscreteTransferFcn_states_h;
  u1 /= PW_SMRv7_cal->DiscreteTransferFcn_DenCoef_i[0];
  PW_SMRv7_DW.DiscreteTransferFcn_states_h = u1;

  /* Update for SimscapeExecutionBlock: '<S195>/STATE_1' */
  simulationData = static_cast<NeslSimulationData *>(PW_SMRv7_DW.STATE_1_SimData);
  time_7 = PW_SMRv7_M->Timing.taskTime0;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_7;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = NULL;
  simulationData->mData->mDiscStates.mN = 183;
  simulationData->mData->mDiscStates.mX = &PW_SMRv7_DW.STATE_1_Discrete[0];
  simulationData->mData->mModeVector.mN = 129;
  simulationData->mData->mModeVector.mX = &PW_SMRv7_DW.STATE_1_Modes[0];
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
  tmp_8[0] = PW_SMRv7_B.INPUT_4_1_1[0];
  tmp_8[1] = PW_SMRv7_B.INPUT_4_1_1[1];
  tmp_8[2] = PW_SMRv7_B.INPUT_4_1_1[2];
  tmp_8[3] = PW_SMRv7_B.INPUT_4_1_1[3];
  tmp_9[1] = 4;
  tmp_8[4] = PW_SMRv7_B.INPUT_2_1_1[0];
  tmp_8[5] = PW_SMRv7_B.INPUT_2_1_1[1];
  tmp_8[6] = PW_SMRv7_B.INPUT_2_1_1[2];
  tmp_8[7] = PW_SMRv7_B.INPUT_2_1_1[3];
  tmp_9[2] = 8;
  tmp_8[8] = PW_SMRv7_B.INPUT_1_1_1[0];
  tmp_8[9] = PW_SMRv7_B.INPUT_1_1_1[1];
  tmp_8[10] = PW_SMRv7_B.INPUT_1_1_1[2];
  tmp_8[11] = PW_SMRv7_B.INPUT_1_1_1[3];
  tmp_9[3] = 12;
  tmp_8[12] = PW_SMRv7_B.INPUT_3_1_1[0];
  tmp_8[13] = PW_SMRv7_B.INPUT_3_1_1[1];
  tmp_8[14] = PW_SMRv7_B.INPUT_3_1_1[2];
  tmp_8[15] = PW_SMRv7_B.INPUT_3_1_1[3];
  tmp_9[4] = 16;
  simulationData->mData->mInputValues.mN = 16;
  simulationData->mData->mInputValues.mX = &tmp_8[0];
  simulationData->mData->mInputOffsets.mN = 5;
  simulationData->mData->mInputOffsets.mX = &tmp_9[0];
  simulator = static_cast<NeslSimulator *>(PW_SMRv7_DW.STATE_1_Simulator);
  diagnosticManager = static_cast<NeuDiagnosticManager *>
    (PW_SMRv7_DW.STATE_1_DiagMgr);
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  k = ne_simulator_method(simulator, NESL_SIM_UPDATE, simulationData,
    diagnosticManager);
  if (k != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(PW_SMRv7_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(PW_SMRv7_M, msg);
    }
  }

  /* End of Update for SimscapeExecutionBlock: '<S195>/STATE_1' */

  /* Update for DiscreteIntegrator: '<S80>/Integrator' */
  PW_SMRv7_DW.Integrator_DSTATE += PW_SMRv7_cal->Integrator_gainval *
    PW_SMRv7_B.Switch;

  /* Update for DiscreteIntegrator: '<S174>/Integrator' */
  PW_SMRv7_DW.Integrator_DSTATE_k += PW_SMRv7_cal->Integrator_gainval_k *
    PW_SMRv7_B.Switch_a;

  /* Update for DiscreteIntegrator: '<S284>/Integrator' */
  PW_SMRv7_DW.Integrator_DSTATE_p += PW_SMRv7_cal->Integrator_gainval_a *
    PW_SMRv7_B.Switch_f;

  /* Update for DiscreteIntegrator: '<S279>/Filter' */
  PW_SMRv7_DW.Filter_DSTATE += PW_SMRv7_cal->Filter_gainval *
    PW_SMRv7_B.FilterCoefficient;

  /* Update for DiscreteIntegrator: '<S231>/Integrator' */
  PW_SMRv7_DW.Integrator_DSTATE_e += PW_SMRv7_cal->Integrator_gainval_b *
    PW_SMRv7_B.Switch_m;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++PW_SMRv7_M->Timing.clockTick0)) {
    ++PW_SMRv7_M->Timing.clockTickH0;
  }

  PW_SMRv7_M->Timing.taskTime0 = PW_SMRv7_M->Timing.clockTick0 *
    PW_SMRv7_M->Timing.stepSize0 + PW_SMRv7_M->Timing.clockTickH0 *
    PW_SMRv7_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void PW_SMRv7_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* non-finite (run-time) assignments */
  PW_SMRv7_P.DiscretePIDController_LowerSa_f = rtMinusInf;
  PW_SMRv7_P.DiscretePIDController_UpperSa_o = rtInf;
  PW_SMRv7_P.Saturation_UpperSat_b = rtInf;
  PW_SMRv7_M->Timing.stepSize0 = 0.01;

  /* block I/O */
  (void) std::memset((static_cast<void *>(&PW_SMRv7_B)), 0,
                     sizeof(B_PW_SMRv7_T));

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&PW_SMRv7_DW), 0,
                     sizeof(DW_PW_SMRv7_T));

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

    /* Start for SimscapeExecutionBlock: '<S195>/STATE_1' */
    simulator = nesl_lease_simulator("PW_SMRv7/Solver Configuration_1", 0, 0);
    PW_SMRv7_DW.STATE_1_Simulator = (void *)simulator;
    zcDisabled = pointer_is_null(PW_SMRv7_DW.STATE_1_Simulator);
    if (zcDisabled) {
      PW_SMRv7_d632b26e_1_gateway();
      simulator = nesl_lease_simulator("PW_SMRv7/Solver Configuration_1", 0, 0);
      PW_SMRv7_DW.STATE_1_Simulator = (void *)simulator;
    }

    tmp = nesl_create_simulation_data();
    PW_SMRv7_DW.STATE_1_SimData = (void *)tmp;
    diagnosticManager = rtw_create_diagnostics();
    PW_SMRv7_DW.STATE_1_DiagMgr = (void *)diagnosticManager;
    modelParameters.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters.mSolverAbsTol = 0.001;
    modelParameters.mSolverRelTol = 0.001;
    modelParameters.mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO;
    modelParameters.mStartTime = 0.0;
    modelParameters.mLoadInitialState = false;
    modelParameters.mUseSimState = false;
    modelParameters.mLinTrimCompile = false;
    modelParameters.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters.mRTWModifiedTimeStamp = 7.12273151E+8;
    tmp_0 = 0.001;
    modelParameters.mSolverTolerance = tmp_0;
    tmp_0 = 0.01;
    modelParameters.mFixedStepSize = tmp_0;
    zcDisabled = false;
    modelParameters.mVariableStepSolver = zcDisabled;
    zcDisabled = false;
    modelParameters.mIsUsingODEN = zcDisabled;
    modelParameters.mZcDisabled = true;
    simulator = static_cast<NeslSimulator *>(PW_SMRv7_DW.STATE_1_Simulator);
    diagnosticManager = static_cast<NeuDiagnosticManager *>
      (PW_SMRv7_DW.STATE_1_DiagMgr);
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_1 = nesl_initialize_simulator(simulator, &modelParameters,
      diagnosticManager);
    if (tmp_1 != 0) {
      zcDisabled = error_buffer_is_empty(rtmGetErrorStatus(PW_SMRv7_M));
      if (zcDisabled) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(PW_SMRv7_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S195>/STATE_1' */

    /* Start for SimscapeExecutionBlock: '<S195>/OUTPUT_1_1' */
    simulator = nesl_lease_simulator("PW_SMRv7/Solver Configuration_1", 1, 1);
    PW_SMRv7_DW.OUTPUT_1_1_Simulator = (void *)simulator;
    zcDisabled = pointer_is_null(PW_SMRv7_DW.OUTPUT_1_1_Simulator);
    if (zcDisabled) {
      PW_SMRv7_d632b26e_1_gateway();
      simulator = nesl_lease_simulator("PW_SMRv7/Solver Configuration_1", 1, 1);
      PW_SMRv7_DW.OUTPUT_1_1_Simulator = (void *)simulator;
    }

    tmp = nesl_create_simulation_data();
    PW_SMRv7_DW.OUTPUT_1_1_SimData = (void *)tmp;
    diagnosticManager = rtw_create_diagnostics();
    PW_SMRv7_DW.OUTPUT_1_1_DiagMgr = (void *)diagnosticManager;
    modelParameters_0.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_0.mSolverAbsTol = 0.001;
    modelParameters_0.mSolverRelTol = 0.001;
    modelParameters_0.mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO;
    modelParameters_0.mStartTime = 0.0;
    modelParameters_0.mLoadInitialState = false;
    modelParameters_0.mUseSimState = false;
    modelParameters_0.mLinTrimCompile = false;
    modelParameters_0.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters_0.mRTWModifiedTimeStamp = 7.12273151E+8;
    tmp_0 = 0.001;
    modelParameters_0.mSolverTolerance = tmp_0;
    tmp_0 = 0.01;
    modelParameters_0.mFixedStepSize = tmp_0;
    zcDisabled = false;
    modelParameters_0.mVariableStepSolver = zcDisabled;
    zcDisabled = false;
    modelParameters_0.mIsUsingODEN = zcDisabled;
    modelParameters_0.mZcDisabled = true;
    simulator = static_cast<NeslSimulator *>(PW_SMRv7_DW.OUTPUT_1_1_Simulator);
    diagnosticManager = static_cast<NeuDiagnosticManager *>
      (PW_SMRv7_DW.OUTPUT_1_1_DiagMgr);
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_1 = nesl_initialize_simulator(simulator, &modelParameters_0,
      diagnosticManager);
    if (tmp_1 != 0) {
      zcDisabled = error_buffer_is_empty(rtmGetErrorStatus(PW_SMRv7_M));
      if (zcDisabled) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(PW_SMRv7_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S195>/OUTPUT_1_1' */

    /* Start for SimscapeExecutionBlock: '<S195>/OUTPUT_1_2' */
    simulator = nesl_lease_simulator("PW_SMRv7/Solver Configuration_1", 1, 2);
    PW_SMRv7_DW.OUTPUT_1_2_Simulator = (void *)simulator;
    zcDisabled = pointer_is_null(PW_SMRv7_DW.OUTPUT_1_2_Simulator);
    if (zcDisabled) {
      PW_SMRv7_d632b26e_1_gateway();
      simulator = nesl_lease_simulator("PW_SMRv7/Solver Configuration_1", 1, 2);
      PW_SMRv7_DW.OUTPUT_1_2_Simulator = (void *)simulator;
    }

    tmp = nesl_create_simulation_data();
    PW_SMRv7_DW.OUTPUT_1_2_SimData = (void *)tmp;
    diagnosticManager = rtw_create_diagnostics();
    PW_SMRv7_DW.OUTPUT_1_2_DiagMgr = (void *)diagnosticManager;
    modelParameters_1.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_1.mSolverAbsTol = 0.001;
    modelParameters_1.mSolverRelTol = 0.001;
    modelParameters_1.mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO;
    modelParameters_1.mStartTime = 0.0;
    modelParameters_1.mLoadInitialState = false;
    modelParameters_1.mUseSimState = false;
    modelParameters_1.mLinTrimCompile = false;
    modelParameters_1.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters_1.mRTWModifiedTimeStamp = 7.12273151E+8;
    tmp_0 = 0.001;
    modelParameters_1.mSolverTolerance = tmp_0;
    tmp_0 = 0.01;
    modelParameters_1.mFixedStepSize = tmp_0;
    zcDisabled = false;
    modelParameters_1.mVariableStepSolver = zcDisabled;
    zcDisabled = false;
    modelParameters_1.mIsUsingODEN = zcDisabled;
    modelParameters_1.mZcDisabled = true;
    simulator = static_cast<NeslSimulator *>(PW_SMRv7_DW.OUTPUT_1_2_Simulator);
    diagnosticManager = static_cast<NeuDiagnosticManager *>
      (PW_SMRv7_DW.OUTPUT_1_2_DiagMgr);
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_1 = nesl_initialize_simulator(simulator, &modelParameters_1,
      diagnosticManager);
    if (tmp_1 != 0) {
      zcDisabled = error_buffer_is_empty(rtmGetErrorStatus(PW_SMRv7_M));
      if (zcDisabled) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(PW_SMRv7_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S195>/OUTPUT_1_2' */

    /* Start for SimscapeExecutionBlock: '<S195>/OUTPUT_1_0' */
    simulator = nesl_lease_simulator("PW_SMRv7/Solver Configuration_1", 1, 0);
    PW_SMRv7_DW.OUTPUT_1_0_Simulator = (void *)simulator;
    zcDisabled = pointer_is_null(PW_SMRv7_DW.OUTPUT_1_0_Simulator);
    if (zcDisabled) {
      PW_SMRv7_d632b26e_1_gateway();
      simulator = nesl_lease_simulator("PW_SMRv7/Solver Configuration_1", 1, 0);
      PW_SMRv7_DW.OUTPUT_1_0_Simulator = (void *)simulator;
    }

    tmp = nesl_create_simulation_data();
    PW_SMRv7_DW.OUTPUT_1_0_SimData = (void *)tmp;
    diagnosticManager = rtw_create_diagnostics();
    PW_SMRv7_DW.OUTPUT_1_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_2.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_2.mSolverAbsTol = 0.001;
    modelParameters_2.mSolverRelTol = 0.001;
    modelParameters_2.mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO;
    modelParameters_2.mStartTime = 0.0;
    modelParameters_2.mLoadInitialState = false;
    modelParameters_2.mUseSimState = false;
    modelParameters_2.mLinTrimCompile = false;
    modelParameters_2.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters_2.mRTWModifiedTimeStamp = 7.12273151E+8;
    tmp_0 = 0.001;
    modelParameters_2.mSolverTolerance = tmp_0;
    tmp_0 = 0.01;
    modelParameters_2.mFixedStepSize = tmp_0;
    zcDisabled = false;
    modelParameters_2.mVariableStepSolver = zcDisabled;
    zcDisabled = false;
    modelParameters_2.mIsUsingODEN = zcDisabled;
    modelParameters_2.mZcDisabled = true;
    simulator = static_cast<NeslSimulator *>(PW_SMRv7_DW.OUTPUT_1_0_Simulator);
    diagnosticManager = static_cast<NeuDiagnosticManager *>
      (PW_SMRv7_DW.OUTPUT_1_0_DiagMgr);
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_1 = nesl_initialize_simulator(simulator, &modelParameters_2,
      diagnosticManager);
    if (tmp_1 != 0) {
      zcDisabled = error_buffer_is_empty(rtmGetErrorStatus(PW_SMRv7_M));
      if (zcDisabled) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(PW_SMRv7_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S195>/OUTPUT_1_0' */
  }

  /* InitializeConditions for DiscreteTransferFcn: '<S46>/Discrete Transfer Fcn' */
  PW_SMRv7_DW.DiscreteTransferFcn_states =
    PW_SMRv7_cal->DiscreteTransferFcn_InitialStat;

  /* InitializeConditions for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn' */
  PW_SMRv7_DW.DiscreteTransferFcn_states_m =
    PW_SMRv7_cal->DiscreteTransferFcn_InitialSt_f;

  /* InitializeConditions for DiscreteTransferFcn: '<S42>/Discrete Transfer Fcn' */
  PW_SMRv7_DW.DiscreteTransferFcn_states_n =
    PW_SMRv7_cal->DiscreteTransferFcn_InitialSt_i;

  /* InitializeConditions for DiscreteTransferFcn: '<S45>/Discrete Transfer Fcn' */
  PW_SMRv7_DW.DiscreteTransferFcn_states_h =
    PW_SMRv7_cal->DiscreteTransferFcn_InitialSt_h;

  /* InitializeConditions for DiscreteIntegrator: '<S80>/Integrator' */
  PW_SMRv7_DW.Integrator_DSTATE = PW_SMRv7_cal->DiscretePIDController_Initial_f;

  /* InitializeConditions for DiscreteIntegrator: '<S174>/Integrator' */
  PW_SMRv7_DW.Integrator_DSTATE_k =
    PW_SMRv7_cal->DiscretePIDController_Initial_g;

  /* InitializeConditions for DiscreteIntegrator: '<S284>/Integrator' */
  PW_SMRv7_DW.Integrator_DSTATE_p =
    PW_SMRv7_cal->DiscretePIDController_Initial_m;

  /* InitializeConditions for DiscreteIntegrator: '<S279>/Filter' */
  PW_SMRv7_DW.Filter_DSTATE = PW_SMRv7_cal->DiscretePIDController_InitialCo;

  /* InitializeConditions for DiscreteIntegrator: '<S231>/Integrator' */
  PW_SMRv7_DW.Integrator_DSTATE_e =
    PW_SMRv7_cal->DiscretePIDController_Initia_gu;
}

/* Model terminate function */
void PW_SMRv7_terminate(void)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;

  /* Terminate for SimscapeExecutionBlock: '<S195>/STATE_1' */
  diagnosticManager = static_cast<NeuDiagnosticManager *>
    (PW_SMRv7_DW.STATE_1_DiagMgr);
  neu_destroy_diagnostic_manager(diagnosticManager);
  simulationData = static_cast<NeslSimulationData *>(PW_SMRv7_DW.STATE_1_SimData);
  nesl_destroy_simulation_data(simulationData);
  nesl_erase_simulator("PW_SMRv7/Solver Configuration_1");
  nesl_destroy_registry();

  /* Terminate for SimscapeExecutionBlock: '<S195>/OUTPUT_1_1' */
  diagnosticManager = static_cast<NeuDiagnosticManager *>
    (PW_SMRv7_DW.OUTPUT_1_1_DiagMgr);
  neu_destroy_diagnostic_manager(diagnosticManager);
  simulationData = static_cast<NeslSimulationData *>
    (PW_SMRv7_DW.OUTPUT_1_1_SimData);
  nesl_destroy_simulation_data(simulationData);
  nesl_erase_simulator("PW_SMRv7/Solver Configuration_1");
  nesl_destroy_registry();

  /* Terminate for SimscapeExecutionBlock: '<S195>/OUTPUT_1_2' */
  diagnosticManager = static_cast<NeuDiagnosticManager *>
    (PW_SMRv7_DW.OUTPUT_1_2_DiagMgr);
  neu_destroy_diagnostic_manager(diagnosticManager);
  simulationData = static_cast<NeslSimulationData *>
    (PW_SMRv7_DW.OUTPUT_1_2_SimData);
  nesl_destroy_simulation_data(simulationData);
  nesl_erase_simulator("PW_SMRv7/Solver Configuration_1");
  nesl_destroy_registry();

  /* Terminate for SimscapeExecutionBlock: '<S195>/OUTPUT_1_0' */
  diagnosticManager = static_cast<NeuDiagnosticManager *>
    (PW_SMRv7_DW.OUTPUT_1_0_DiagMgr);
  neu_destroy_diagnostic_manager(diagnosticManager);
  simulationData = static_cast<NeslSimulationData *>
    (PW_SMRv7_DW.OUTPUT_1_0_SimData);
  nesl_destroy_simulation_data(simulationData);
  nesl_erase_simulator("PW_SMRv7/Solver Configuration_1");
  nesl_destroy_registry();
}
