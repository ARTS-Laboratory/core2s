/*
 * PW_SMRv9.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "PW_SMRv9".
 *
 * Model version              : 1.7
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C++ source code generated on : Fri Oct  9 13:12:22 2026
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PW_SMRv9.h"
#include "rtwtypes.h"
#include <cmath>

extern "C"
{

#include "rt_nonfinite.h"

}

#include "PW_SMRv9_private.h"
#include "PW_SMRv9_cal.h"
#include <cstring>
#include <stddef.h>

/* Block signals (default storage) */
B_PW_SMRv9_T PW_SMRv9_B;

/* Block states (default storage) */
DW_PW_SMRv9_T PW_SMRv9_DW;

/* Real-time model */
RT_MODEL_PW_SMRv9_T PW_SMRv9_M_ = RT_MODEL_PW_SMRv9_T();
RT_MODEL_PW_SMRv9_T *const PW_SMRv9_M = &PW_SMRv9_M_;
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

real_T rt_urand_Upu32_Yd_f_pw_snf(uint32_T *u)
{
  uint32_T hi;
  uint32_T lo;

  /* Uniform random number generator (random number between 0 and 1)

     #define IA      16807                      magic multiplier = 7^5
     #define IM      2147483647                 modulus = 2^31-1
     #define IQ      127773                     IM div IA
     #define IR      2836                       IM modulo IA
     #define S       4.656612875245797e-10      reciprocal of 2^31-1
     test = IA * (seed % IQ) - IR * (seed/IQ)
     seed = test < 0 ? (test + IM) : test
     return (seed*S)
   */
  lo = *u % 127773U * 16807U;
  hi = *u / 127773U * 2836U;
  if (lo < hi) {
    *u = 2147483647U - (hi - lo);
  } else {
    *u = lo - hi;
  }

  return static_cast<real_T>(*u) * 4.6566128752457969E-10;
}

real_T rt_nrand_Upu32_Yd_f_pw_snf(uint32_T *u)
{
  real_T si;
  real_T sr;
  real_T y;

  /* Normal (Gaussian) random number generator */
  do {
    sr = 2.0 * rt_urand_Upu32_Yd_f_pw_snf(u) - 1.0;
    si = 2.0 * rt_urand_Upu32_Yd_f_pw_snf(u) - 1.0;
    si = sr * sr + si * si;
  } while (si > 1.0);

  y = std::sqrt(-2.0 * std::log(si) / si) * sr;
  return y;
}

/* Model step function */
void PW_SMRv9_step(void)
{
  {
    NeslSimulationData *simulationData;
    NeslSimulator *simulator;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    char *msg;
    real_T tmp_2[455];
    real_T tmp_4[455];
    real_T tmp_6[455];
    real_T tmp_8[455];
    real_T tmp_a[455];
    real_T tmp_0[32];
    real_T time;
    real_T time_0;
    real_T time_1;
    real_T time_2;
    real_T time_3;
    real_T time_4;
    real_T time_5;
    real_T time_6;
    real_T time_7;
    real_T time_8;
    real_T time_9;
    real_T time_a;
    real_T u0;
    real_T u1;
    real_T u2;
    int32_T isHit;
    int32_T isHit_0;
    int32_T isHit_1;
    int32_T isHit_2;
    int32_T isHit_3;
    int32_T isHit_4;
    int32_T k;
    int_T tmp_3[10];
    int_T tmp_5[10];
    int_T tmp_7[10];
    int_T tmp_9[10];
    int_T tmp_b[10];
    int_T tmp_1[9];
    boolean_T tmp;

    /* DiscreteTransferFcn: '<S90>/Discrete Transfer Fcn' */
    u1 = PW_SMRv9_cal->DiscreteTransferFcn_NumCoef *
      PW_SMRv9_DW.DiscreteTransferFcn_states;

    /* DiscreteTransferFcn: '<S90>/Discrete Transfer Fcn' */
    PW_SMRv9_B.DiscreteTransferFcn = u1;

    /* SimscapeInputBlock: '<S287>/INPUT_6_1_1' */
    PW_SMRv9_B.INPUT_6_1_1[0] = PW_SMRv9_B.DiscreteTransferFcn;
    PW_SMRv9_B.INPUT_6_1_1[1] = 0.0;
    PW_SMRv9_B.INPUT_6_1_1[2] = 0.0;
    PW_SMRv9_DW.INPUT_6_1_1_Discrete[0] = !(PW_SMRv9_B.INPUT_6_1_1[0] ==
      PW_SMRv9_DW.INPUT_6_1_1_Discrete[1]);
    PW_SMRv9_DW.INPUT_6_1_1_Discrete[1] = PW_SMRv9_B.INPUT_6_1_1[0];
    PW_SMRv9_B.INPUT_6_1_1[0] = PW_SMRv9_DW.INPUT_6_1_1_Discrete[1];
    PW_SMRv9_B.INPUT_6_1_1[3] = PW_SMRv9_DW.INPUT_6_1_1_Discrete[0];

    /* DiscreteTransferFcn: '<S91>/Discrete Transfer Fcn3' */
    u1 = PW_SMRv9_cal->DiscreteTransferFcn3_NumCoef *
      PW_SMRv9_DW.DiscreteTransferFcn3_states;

    /* DiscreteTransferFcn: '<S91>/Discrete Transfer Fcn3' */
    PW_SMRv9_B.DiscreteTransferFcn3 = u1;

    /* SimscapeInputBlock: '<S287>/INPUT_7_1_1' */
    PW_SMRv9_B.INPUT_7_1_1[0] = PW_SMRv9_B.DiscreteTransferFcn3;
    PW_SMRv9_B.INPUT_7_1_1[1] = 0.0;
    PW_SMRv9_B.INPUT_7_1_1[2] = 0.0;
    PW_SMRv9_DW.INPUT_7_1_1_Discrete[0] = !(PW_SMRv9_B.INPUT_7_1_1[0] ==
      PW_SMRv9_DW.INPUT_7_1_1_Discrete[1]);
    PW_SMRv9_DW.INPUT_7_1_1_Discrete[1] = PW_SMRv9_B.INPUT_7_1_1[0];
    PW_SMRv9_B.INPUT_7_1_1[0] = PW_SMRv9_DW.INPUT_7_1_1_Discrete[1];
    PW_SMRv9_B.INPUT_7_1_1[3] = PW_SMRv9_DW.INPUT_7_1_1_Discrete[0];

    /* Clock: '<Root>/Clock' */
    PW_SMRv9_B.Clock = PW_SMRv9_M->Timing.t[0];

    /* Switch: '<Root>/Switch' */
    if (PW_SMRv9_B.Clock >= PW_SMRv9_cal->Switch_Threshold) {
      /* Switch: '<Root>/Switch' incorporates:
       *  Constant: '<Root>/Constant4'
       */
      PW_SMRv9_B.Switch = PW_SMRv9_cal->Constant4_Value;
    } else {
      /* Switch: '<Root>/Switch' incorporates:
       *  Constant: '<Root>/Constant5'
       */
      PW_SMRv9_B.Switch = PW_SMRv9_cal->Constant5_Value;
    }

    /* End of Switch: '<Root>/Switch' */

    /* SimscapeInputBlock: '<S287>/INPUT_4_1_1' */
    PW_SMRv9_B.INPUT_4_1_1[0] = PW_SMRv9_B.Switch;
    PW_SMRv9_B.INPUT_4_1_1[1] = 0.0;
    PW_SMRv9_B.INPUT_4_1_1[2] = 0.0;
    PW_SMRv9_B.INPUT_4_1_1[3] = 0.0;

    /* DiscreteTransferFcn: '<S92>/Discrete Transfer Fcn' */
    u1 = PW_SMRv9_cal->DiscreteTransferFcn_NumCoef_p *
      PW_SMRv9_DW.DiscreteTransferFcn_states_m;

    /* DiscreteTransferFcn: '<S92>/Discrete Transfer Fcn' */
    PW_SMRv9_B.DiscreteTransferFcn_n = u1;

    /* SimscapeInputBlock: '<S287>/INPUT_8_1_1' */
    PW_SMRv9_B.INPUT_8_1_1[0] = PW_SMRv9_B.DiscreteTransferFcn_n;
    PW_SMRv9_B.INPUT_8_1_1[1] = 0.0;
    PW_SMRv9_B.INPUT_8_1_1[2] = 0.0;
    PW_SMRv9_DW.INPUT_8_1_1_Discrete[0] = !(PW_SMRv9_B.INPUT_8_1_1[0] ==
      PW_SMRv9_DW.INPUT_8_1_1_Discrete[1]);
    PW_SMRv9_DW.INPUT_8_1_1_Discrete[1] = PW_SMRv9_B.INPUT_8_1_1[0];
    PW_SMRv9_B.INPUT_8_1_1[0] = PW_SMRv9_DW.INPUT_8_1_1_Discrete[1];
    PW_SMRv9_B.INPUT_8_1_1[3] = PW_SMRv9_DW.INPUT_8_1_1_Discrete[0];

    /* DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn' */
    u1 = PW_SMRv9_cal->DiscreteTransferFcn_NumCoef_c *
      PW_SMRv9_DW.DiscreteTransferFcn_states_g;

    /* DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn' */
    PW_SMRv9_B.DiscreteTransferFcn_m = u1;

    /* SimscapeInputBlock: '<S287>/INPUT_2_1_1' */
    PW_SMRv9_B.INPUT_2_1_1[0] = PW_SMRv9_B.DiscreteTransferFcn_m;
    PW_SMRv9_B.INPUT_2_1_1[1] = 0.0;
    PW_SMRv9_B.INPUT_2_1_1[2] = 0.0;
    PW_SMRv9_DW.INPUT_2_1_1_Discrete[0] = !(PW_SMRv9_B.INPUT_2_1_1[0] ==
      PW_SMRv9_DW.INPUT_2_1_1_Discrete[1]);
    PW_SMRv9_DW.INPUT_2_1_1_Discrete[1] = PW_SMRv9_B.INPUT_2_1_1[0];
    PW_SMRv9_B.INPUT_2_1_1[0] = PW_SMRv9_DW.INPUT_2_1_1_Discrete[1];
    PW_SMRv9_B.INPUT_2_1_1[3] = PW_SMRv9_DW.INPUT_2_1_1_Discrete[0];

    /* DiscreteTransferFcn: '<S84>/Discrete Transfer Fcn' */
    u1 = PW_SMRv9_cal->DiscreteTransferFcn_NumCoef_i *
      PW_SMRv9_DW.DiscreteTransferFcn_states_h;

    /* DiscreteTransferFcn: '<S84>/Discrete Transfer Fcn' */
    PW_SMRv9_B.DiscreteTransferFcn_nq = u1;

    /* Saturate: '<S84>/Saturation1' */
    u0 = PW_SMRv9_B.DiscreteTransferFcn_nq;
    u1 = PW_SMRv9_cal->Saturation1_LowerSat;
    u2 = PW_SMRv9_cal->Saturation1_UpperSat;
    if (u0 > u2) {
      /* Saturate: '<S84>/Saturation1' */
      PW_SMRv9_B.Saturation1 = u2;
    } else if (u0 < u1) {
      /* Saturate: '<S84>/Saturation1' */
      PW_SMRv9_B.Saturation1 = u1;
    } else {
      /* Saturate: '<S84>/Saturation1' */
      PW_SMRv9_B.Saturation1 = u0;
    }

    /* End of Saturate: '<S84>/Saturation1' */

    /* SimscapeInputBlock: '<S287>/INPUT_1_1_1' */
    PW_SMRv9_B.INPUT_1_1_1[0] = PW_SMRv9_B.Saturation1;
    PW_SMRv9_B.INPUT_1_1_1[1] = 0.0;
    PW_SMRv9_B.INPUT_1_1_1[2] = 0.0;
    PW_SMRv9_DW.INPUT_1_1_1_Discrete[0] = !(PW_SMRv9_B.INPUT_1_1_1[0] ==
      PW_SMRv9_DW.INPUT_1_1_1_Discrete[1]);
    PW_SMRv9_DW.INPUT_1_1_1_Discrete[1] = PW_SMRv9_B.INPUT_1_1_1[0];
    PW_SMRv9_B.INPUT_1_1_1[0] = PW_SMRv9_DW.INPUT_1_1_1_Discrete[1];
    PW_SMRv9_B.INPUT_1_1_1[3] = PW_SMRv9_DW.INPUT_1_1_1_Discrete[0];

    /* DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn3' */
    u1 = PW_SMRv9_cal->DiscreteTransferFcn3_NumCoef_l *
      PW_SMRv9_DW.DiscreteTransferFcn3_states_d;

    /* DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn3' */
    PW_SMRv9_B.DiscreteTransferFcn3_l = u1;

    /* SimscapeInputBlock: '<S287>/INPUT_5_1_1' */
    PW_SMRv9_B.INPUT_5_1_1[0] = PW_SMRv9_B.DiscreteTransferFcn3_l;
    PW_SMRv9_B.INPUT_5_1_1[1] = 0.0;
    PW_SMRv9_B.INPUT_5_1_1[2] = 0.0;
    PW_SMRv9_DW.INPUT_5_1_1_Discrete[0] = !(PW_SMRv9_B.INPUT_5_1_1[0] ==
      PW_SMRv9_DW.INPUT_5_1_1_Discrete[1]);
    PW_SMRv9_DW.INPUT_5_1_1_Discrete[1] = PW_SMRv9_B.INPUT_5_1_1[0];
    PW_SMRv9_B.INPUT_5_1_1[0] = PW_SMRv9_DW.INPUT_5_1_1_Discrete[1];
    PW_SMRv9_B.INPUT_5_1_1[3] = PW_SMRv9_DW.INPUT_5_1_1_Discrete[0];

    /* DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn1' */
    u1 = PW_SMRv9_cal->DiscreteTransferFcn1_NumCoef *
      PW_SMRv9_DW.DiscreteTransferFcn1_states;

    /* DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn1' */
    PW_SMRv9_B.DiscreteTransferFcn1 = u1;

    /* Saturate: '<Root>/Saturation1' */
    u0 = PW_SMRv9_B.DiscreteTransferFcn1;
    u1 = PW_SMRv9_cal->Saturation1_LowerSat_d;
    u2 = PW_SMRv9_cal->Saturation1_UpperSat_o;
    if (u0 > u2) {
      /* Saturate: '<Root>/Saturation1' */
      PW_SMRv9_B.Saturation1_o = u2;
    } else if (u0 < u1) {
      /* Saturate: '<Root>/Saturation1' */
      PW_SMRv9_B.Saturation1_o = u1;
    } else {
      /* Saturate: '<Root>/Saturation1' */
      PW_SMRv9_B.Saturation1_o = u0;
    }

    /* End of Saturate: '<Root>/Saturation1' */

    /* SimscapeInputBlock: '<S287>/INPUT_3_1_1' */
    PW_SMRv9_B.INPUT_3_1_1[0] = PW_SMRv9_B.Saturation1_o;
    PW_SMRv9_B.INPUT_3_1_1[1] = 0.0;
    PW_SMRv9_B.INPUT_3_1_1[2] = 0.0;
    PW_SMRv9_DW.INPUT_3_1_1_Discrete[0] = !(PW_SMRv9_B.INPUT_3_1_1[0] ==
      PW_SMRv9_DW.INPUT_3_1_1_Discrete[1]);
    PW_SMRv9_DW.INPUT_3_1_1_Discrete[1] = PW_SMRv9_B.INPUT_3_1_1[0];
    PW_SMRv9_B.INPUT_3_1_1[0] = PW_SMRv9_DW.INPUT_3_1_1_Discrete[1];
    PW_SMRv9_B.INPUT_3_1_1[3] = PW_SMRv9_DW.INPUT_3_1_1_Discrete[0];

    /* SimscapeExecutionBlock: '<S287>/STATE_1' */
    simulationData = static_cast<NeslSimulationData *>
      (PW_SMRv9_DW.STATE_1_SimData);
    time = PW_SMRv9_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 302;
    simulationData->mData->mDiscStates.mX = &PW_SMRv9_DW.STATE_1_Discrete[0];
    simulationData->mData->mModeVector.mN = 163;
    simulationData->mData->mModeVector.mX = &PW_SMRv9_DW.STATE_1_Modes[0];
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
    tmp_0[0] = PW_SMRv9_B.INPUT_7_1_1[0];
    tmp_0[1] = PW_SMRv9_B.INPUT_7_1_1[1];
    tmp_0[2] = PW_SMRv9_B.INPUT_7_1_1[2];
    tmp_0[3] = PW_SMRv9_B.INPUT_7_1_1[3];
    tmp_1[1] = 4;
    tmp_0[4] = PW_SMRv9_B.INPUT_4_1_1[0];
    tmp_0[5] = PW_SMRv9_B.INPUT_4_1_1[1];
    tmp_0[6] = PW_SMRv9_B.INPUT_4_1_1[2];
    tmp_0[7] = PW_SMRv9_B.INPUT_4_1_1[3];
    tmp_1[2] = 8;
    tmp_0[8] = PW_SMRv9_B.INPUT_8_1_1[0];
    tmp_0[9] = PW_SMRv9_B.INPUT_8_1_1[1];
    tmp_0[10] = PW_SMRv9_B.INPUT_8_1_1[2];
    tmp_0[11] = PW_SMRv9_B.INPUT_8_1_1[3];
    tmp_1[3] = 12;
    tmp_0[12] = PW_SMRv9_B.INPUT_2_1_1[0];
    tmp_0[13] = PW_SMRv9_B.INPUT_2_1_1[1];
    tmp_0[14] = PW_SMRv9_B.INPUT_2_1_1[2];
    tmp_0[15] = PW_SMRv9_B.INPUT_2_1_1[3];
    tmp_1[4] = 16;
    tmp_0[16] = PW_SMRv9_B.INPUT_1_1_1[0];
    tmp_0[17] = PW_SMRv9_B.INPUT_1_1_1[1];
    tmp_0[18] = PW_SMRv9_B.INPUT_1_1_1[2];
    tmp_0[19] = PW_SMRv9_B.INPUT_1_1_1[3];
    tmp_1[5] = 20;
    tmp_0[20] = PW_SMRv9_B.INPUT_6_1_1[0];
    tmp_0[21] = PW_SMRv9_B.INPUT_6_1_1[1];
    tmp_0[22] = PW_SMRv9_B.INPUT_6_1_1[2];
    tmp_0[23] = PW_SMRv9_B.INPUT_6_1_1[3];
    tmp_1[6] = 24;
    tmp_0[24] = PW_SMRv9_B.INPUT_5_1_1[0];
    tmp_0[25] = PW_SMRv9_B.INPUT_5_1_1[1];
    tmp_0[26] = PW_SMRv9_B.INPUT_5_1_1[2];
    tmp_0[27] = PW_SMRv9_B.INPUT_5_1_1[3];
    tmp_1[7] = 28;
    tmp_0[28] = PW_SMRv9_B.INPUT_3_1_1[0];
    tmp_0[29] = PW_SMRv9_B.INPUT_3_1_1[1];
    tmp_0[30] = PW_SMRv9_B.INPUT_3_1_1[2];
    tmp_0[31] = PW_SMRv9_B.INPUT_3_1_1[3];
    tmp_1[8] = 32;
    simulationData->mData->mInputValues.mN = 32;
    simulationData->mData->mInputValues.mX = &tmp_0[0];
    simulationData->mData->mInputOffsets.mN = 9;
    simulationData->mData->mInputOffsets.mX = &tmp_1[0];
    simulationData->mData->mOutputs.mN = 423;
    simulationData->mData->mOutputs.mX = &PW_SMRv9_B.STATE_1[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    time_0 = (((PW_SMRv9_M->Timing.clockTick1+PW_SMRv9_M->Timing.clockTickH1*
                4294967296.0)) * 0.01);
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_0;
    isHit = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulator = static_cast<NeslSimulator *>(PW_SMRv9_DW.STATE_1_Simulator);
    diagnosticManager = static_cast<NeuDiagnosticManager *>
      (PW_SMRv9_DW.STATE_1_DiagMgr);
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    k = ne_simulator_method(simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (k != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(PW_SMRv9_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(PW_SMRv9_M, msg);
      }
    }

    /* End of SimscapeExecutionBlock: '<S287>/STATE_1' */

    /* SimscapeExecutionBlock: '<S287>/OUTPUT_1_4' */
    simulationData = static_cast<NeslSimulationData *>
      (PW_SMRv9_DW.OUTPUT_1_4_SimData);
    time_1 = PW_SMRv9_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &PW_SMRv9_DW.OUTPUT_1_4_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &PW_SMRv9_DW.OUTPUT_1_4_Modes;
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
    tmp_2[0] = PW_SMRv9_B.INPUT_7_1_1[0];
    tmp_2[1] = PW_SMRv9_B.INPUT_7_1_1[1];
    tmp_2[2] = PW_SMRv9_B.INPUT_7_1_1[2];
    tmp_2[3] = PW_SMRv9_B.INPUT_7_1_1[3];
    tmp_3[1] = 4;
    tmp_2[4] = PW_SMRv9_B.INPUT_4_1_1[0];
    tmp_2[5] = PW_SMRv9_B.INPUT_4_1_1[1];
    tmp_2[6] = PW_SMRv9_B.INPUT_4_1_1[2];
    tmp_2[7] = PW_SMRv9_B.INPUT_4_1_1[3];
    tmp_3[2] = 8;
    tmp_2[8] = PW_SMRv9_B.INPUT_8_1_1[0];
    tmp_2[9] = PW_SMRv9_B.INPUT_8_1_1[1];
    tmp_2[10] = PW_SMRv9_B.INPUT_8_1_1[2];
    tmp_2[11] = PW_SMRv9_B.INPUT_8_1_1[3];
    tmp_3[3] = 12;
    tmp_2[12] = PW_SMRv9_B.INPUT_2_1_1[0];
    tmp_2[13] = PW_SMRv9_B.INPUT_2_1_1[1];
    tmp_2[14] = PW_SMRv9_B.INPUT_2_1_1[2];
    tmp_2[15] = PW_SMRv9_B.INPUT_2_1_1[3];
    tmp_3[4] = 16;
    tmp_2[16] = PW_SMRv9_B.INPUT_1_1_1[0];
    tmp_2[17] = PW_SMRv9_B.INPUT_1_1_1[1];
    tmp_2[18] = PW_SMRv9_B.INPUT_1_1_1[2];
    tmp_2[19] = PW_SMRv9_B.INPUT_1_1_1[3];
    tmp_3[5] = 20;
    tmp_2[20] = PW_SMRv9_B.INPUT_6_1_1[0];
    tmp_2[21] = PW_SMRv9_B.INPUT_6_1_1[1];
    tmp_2[22] = PW_SMRv9_B.INPUT_6_1_1[2];
    tmp_2[23] = PW_SMRv9_B.INPUT_6_1_1[3];
    tmp_3[6] = 24;
    tmp_2[24] = PW_SMRv9_B.INPUT_5_1_1[0];
    tmp_2[25] = PW_SMRv9_B.INPUT_5_1_1[1];
    tmp_2[26] = PW_SMRv9_B.INPUT_5_1_1[2];
    tmp_2[27] = PW_SMRv9_B.INPUT_5_1_1[3];
    tmp_3[7] = 28;
    tmp_2[28] = PW_SMRv9_B.INPUT_3_1_1[0];
    tmp_2[29] = PW_SMRv9_B.INPUT_3_1_1[1];
    tmp_2[30] = PW_SMRv9_B.INPUT_3_1_1[2];
    tmp_2[31] = PW_SMRv9_B.INPUT_3_1_1[3];
    tmp_3[8] = 32;
    std::memcpy(&tmp_2[32], &PW_SMRv9_B.STATE_1[0], 423U * sizeof(real_T));
    tmp_3[9] = 455;
    simulationData->mData->mInputValues.mN = 455;
    simulationData->mData->mInputValues.mX = &tmp_2[0];
    simulationData->mData->mInputOffsets.mN = 10;
    simulationData->mData->mInputOffsets.mX = &tmp_3[0];
    simulationData->mData->mOutputs.mN = 6;
    simulationData->mData->mOutputs.mX = &PW_SMRv9_B.OUTPUT_1_4[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    time_2 = (((PW_SMRv9_M->Timing.clockTick1+PW_SMRv9_M->Timing.clockTickH1*
                4294967296.0)) * 0.01);
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_2;
    isHit_0 = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_0;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulator = static_cast<NeslSimulator *>(PW_SMRv9_DW.OUTPUT_1_4_Simulator);
    diagnosticManager = static_cast<NeuDiagnosticManager *>
      (PW_SMRv9_DW.OUTPUT_1_4_DiagMgr);
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    k = ne_simulator_method(simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (k != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(PW_SMRv9_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(PW_SMRv9_M, msg);
      }
    }

    /* End of SimscapeExecutionBlock: '<S287>/OUTPUT_1_4' */

    /* Reshape: '<S148>/RESHAPE' */
    PW_SMRv9_B.RESHAPE = PW_SMRv9_B.OUTPUT_1_4[5];

    /* SimscapeExecutionBlock: '<S287>/OUTPUT_1_0' */
    simulationData = static_cast<NeslSimulationData *>
      (PW_SMRv9_DW.OUTPUT_1_0_SimData);
    time_3 = PW_SMRv9_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_3;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &PW_SMRv9_DW.OUTPUT_1_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &PW_SMRv9_DW.OUTPUT_1_0_Modes;
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
    tmp_4[0] = PW_SMRv9_B.INPUT_7_1_1[0];
    tmp_4[1] = PW_SMRv9_B.INPUT_7_1_1[1];
    tmp_4[2] = PW_SMRv9_B.INPUT_7_1_1[2];
    tmp_4[3] = PW_SMRv9_B.INPUT_7_1_1[3];
    tmp_5[1] = 4;
    tmp_4[4] = PW_SMRv9_B.INPUT_4_1_1[0];
    tmp_4[5] = PW_SMRv9_B.INPUT_4_1_1[1];
    tmp_4[6] = PW_SMRv9_B.INPUT_4_1_1[2];
    tmp_4[7] = PW_SMRv9_B.INPUT_4_1_1[3];
    tmp_5[2] = 8;
    tmp_4[8] = PW_SMRv9_B.INPUT_8_1_1[0];
    tmp_4[9] = PW_SMRv9_B.INPUT_8_1_1[1];
    tmp_4[10] = PW_SMRv9_B.INPUT_8_1_1[2];
    tmp_4[11] = PW_SMRv9_B.INPUT_8_1_1[3];
    tmp_5[3] = 12;
    tmp_4[12] = PW_SMRv9_B.INPUT_2_1_1[0];
    tmp_4[13] = PW_SMRv9_B.INPUT_2_1_1[1];
    tmp_4[14] = PW_SMRv9_B.INPUT_2_1_1[2];
    tmp_4[15] = PW_SMRv9_B.INPUT_2_1_1[3];
    tmp_5[4] = 16;
    tmp_4[16] = PW_SMRv9_B.INPUT_1_1_1[0];
    tmp_4[17] = PW_SMRv9_B.INPUT_1_1_1[1];
    tmp_4[18] = PW_SMRv9_B.INPUT_1_1_1[2];
    tmp_4[19] = PW_SMRv9_B.INPUT_1_1_1[3];
    tmp_5[5] = 20;
    tmp_4[20] = PW_SMRv9_B.INPUT_6_1_1[0];
    tmp_4[21] = PW_SMRv9_B.INPUT_6_1_1[1];
    tmp_4[22] = PW_SMRv9_B.INPUT_6_1_1[2];
    tmp_4[23] = PW_SMRv9_B.INPUT_6_1_1[3];
    tmp_5[6] = 24;
    tmp_4[24] = PW_SMRv9_B.INPUT_5_1_1[0];
    tmp_4[25] = PW_SMRv9_B.INPUT_5_1_1[1];
    tmp_4[26] = PW_SMRv9_B.INPUT_5_1_1[2];
    tmp_4[27] = PW_SMRv9_B.INPUT_5_1_1[3];
    tmp_5[7] = 28;
    tmp_4[28] = PW_SMRv9_B.INPUT_3_1_1[0];
    tmp_4[29] = PW_SMRv9_B.INPUT_3_1_1[1];
    tmp_4[30] = PW_SMRv9_B.INPUT_3_1_1[2];
    tmp_4[31] = PW_SMRv9_B.INPUT_3_1_1[3];
    tmp_5[8] = 32;
    std::memcpy(&tmp_4[32], &PW_SMRv9_B.STATE_1[0], 423U * sizeof(real_T));
    tmp_5[9] = 455;
    simulationData->mData->mInputValues.mN = 455;
    simulationData->mData->mInputValues.mX = &tmp_4[0];
    simulationData->mData->mInputOffsets.mN = 10;
    simulationData->mData->mInputOffsets.mX = &tmp_5[0];
    simulationData->mData->mOutputs.mN = 78;
    simulationData->mData->mOutputs.mX = &PW_SMRv9_B.OUTPUT_1_0[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    time_4 = (((PW_SMRv9_M->Timing.clockTick1+PW_SMRv9_M->Timing.clockTickH1*
                4294967296.0)) * 0.01);
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_4;
    isHit_1 = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_1;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulator = static_cast<NeslSimulator *>(PW_SMRv9_DW.OUTPUT_1_0_Simulator);
    diagnosticManager = static_cast<NeuDiagnosticManager *>
      (PW_SMRv9_DW.OUTPUT_1_0_DiagMgr);
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    k = ne_simulator_method(simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (k != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(PW_SMRv9_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(PW_SMRv9_M, msg);
      }
    }

    /* End of SimscapeExecutionBlock: '<S287>/OUTPUT_1_0' */

    /* Reshape: '<S165>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_b = PW_SMRv9_B.OUTPUT_1_0[13];

    /* Reshape: '<S185>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_d = PW_SMRv9_B.OUTPUT_1_0[61];

    /* Product: '<Root>/Product' */
    PW_SMRv9_B.Product = PW_SMRv9_B.RESHAPE_d * PW_SMRv9_B.RESHAPE;

    /* Abs: '<Root>/Abs' */
    PW_SMRv9_B.Abs = std::abs(PW_SMRv9_B.Product);

    /* Gain: '<Root>/Gain1' */
    PW_SMRv9_B.Gain1 = PW_SMRv9_cal->Gain1_Gain * PW_SMRv9_B.Abs;

    /* Reshape: '<S201>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_n = PW_SMRv9_B.OUTPUT_1_0[20];

    /* SimscapeExecutionBlock: '<S287>/OUTPUT_1_3' */
    simulationData = static_cast<NeslSimulationData *>
      (PW_SMRv9_DW.OUTPUT_1_3_SimData);
    time_5 = PW_SMRv9_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_5;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &PW_SMRv9_DW.OUTPUT_1_3_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &PW_SMRv9_DW.OUTPUT_1_3_Modes;
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
    tmp_6[0] = PW_SMRv9_B.INPUT_7_1_1[0];
    tmp_6[1] = PW_SMRv9_B.INPUT_7_1_1[1];
    tmp_6[2] = PW_SMRv9_B.INPUT_7_1_1[2];
    tmp_6[3] = PW_SMRv9_B.INPUT_7_1_1[3];
    tmp_7[1] = 4;
    tmp_6[4] = PW_SMRv9_B.INPUT_4_1_1[0];
    tmp_6[5] = PW_SMRv9_B.INPUT_4_1_1[1];
    tmp_6[6] = PW_SMRv9_B.INPUT_4_1_1[2];
    tmp_6[7] = PW_SMRv9_B.INPUT_4_1_1[3];
    tmp_7[2] = 8;
    tmp_6[8] = PW_SMRv9_B.INPUT_8_1_1[0];
    tmp_6[9] = PW_SMRv9_B.INPUT_8_1_1[1];
    tmp_6[10] = PW_SMRv9_B.INPUT_8_1_1[2];
    tmp_6[11] = PW_SMRv9_B.INPUT_8_1_1[3];
    tmp_7[3] = 12;
    tmp_6[12] = PW_SMRv9_B.INPUT_2_1_1[0];
    tmp_6[13] = PW_SMRv9_B.INPUT_2_1_1[1];
    tmp_6[14] = PW_SMRv9_B.INPUT_2_1_1[2];
    tmp_6[15] = PW_SMRv9_B.INPUT_2_1_1[3];
    tmp_7[4] = 16;
    tmp_6[16] = PW_SMRv9_B.INPUT_1_1_1[0];
    tmp_6[17] = PW_SMRv9_B.INPUT_1_1_1[1];
    tmp_6[18] = PW_SMRv9_B.INPUT_1_1_1[2];
    tmp_6[19] = PW_SMRv9_B.INPUT_1_1_1[3];
    tmp_7[5] = 20;
    tmp_6[20] = PW_SMRv9_B.INPUT_6_1_1[0];
    tmp_6[21] = PW_SMRv9_B.INPUT_6_1_1[1];
    tmp_6[22] = PW_SMRv9_B.INPUT_6_1_1[2];
    tmp_6[23] = PW_SMRv9_B.INPUT_6_1_1[3];
    tmp_7[6] = 24;
    tmp_6[24] = PW_SMRv9_B.INPUT_5_1_1[0];
    tmp_6[25] = PW_SMRv9_B.INPUT_5_1_1[1];
    tmp_6[26] = PW_SMRv9_B.INPUT_5_1_1[2];
    tmp_6[27] = PW_SMRv9_B.INPUT_5_1_1[3];
    tmp_7[7] = 28;
    tmp_6[28] = PW_SMRv9_B.INPUT_3_1_1[0];
    tmp_6[29] = PW_SMRv9_B.INPUT_3_1_1[1];
    tmp_6[30] = PW_SMRv9_B.INPUT_3_1_1[2];
    tmp_6[31] = PW_SMRv9_B.INPUT_3_1_1[3];
    tmp_7[8] = 32;
    std::memcpy(&tmp_6[32], &PW_SMRv9_B.STATE_1[0], 423U * sizeof(real_T));
    tmp_7[9] = 455;
    simulationData->mData->mInputValues.mN = 455;
    simulationData->mData->mInputValues.mX = &tmp_6[0];
    simulationData->mData->mInputOffsets.mN = 10;
    simulationData->mData->mInputOffsets.mX = &tmp_7[0];
    simulationData->mData->mOutputs.mN = 6;
    simulationData->mData->mOutputs.mX = &PW_SMRv9_B.OUTPUT_1_3[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    time_6 = (((PW_SMRv9_M->Timing.clockTick1+PW_SMRv9_M->Timing.clockTickH1*
                4294967296.0)) * 0.01);
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_6;
    isHit_2 = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_2;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulator = static_cast<NeslSimulator *>(PW_SMRv9_DW.OUTPUT_1_3_Simulator);
    diagnosticManager = static_cast<NeuDiagnosticManager *>
      (PW_SMRv9_DW.OUTPUT_1_3_DiagMgr);
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    k = ne_simulator_method(simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (k != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(PW_SMRv9_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(PW_SMRv9_M, msg);
      }
    }

    /* End of SimscapeExecutionBlock: '<S287>/OUTPUT_1_3' */

    /* Reshape: '<S206>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_a = PW_SMRv9_B.OUTPUT_1_3[5];

    /* Reshape: '<S219>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_j = PW_SMRv9_B.OUTPUT_1_0[53];

    /* Product: '<Root>/Product5' */
    PW_SMRv9_B.Product5 = PW_SMRv9_B.RESHAPE_j * PW_SMRv9_B.RESHAPE_a;

    /* Abs: '<Root>/Abs1' */
    PW_SMRv9_B.Abs1 = std::abs(PW_SMRv9_B.Product5);

    /* Gain: '<Root>/Gain2' */
    PW_SMRv9_B.Gain2 = PW_SMRv9_cal->Gain2_Gain * PW_SMRv9_B.Abs1;

    /* Sum: '<Root>/Add3' */
    PW_SMRv9_B.Add3 = PW_SMRv9_B.Gain1 + PW_SMRv9_B.Gain2;

    /* Sum: '<Root>/Subtract3' */
    PW_SMRv9_B.Subtract3 = PW_SMRv9_B.RESHAPE_b - PW_SMRv9_B.RESHAPE_n;

    /* Sum: '<Root>/Add2' */
    PW_SMRv9_B.Add2 = PW_SMRv9_B.Subtract3 + PW_SMRv9_B.Add3;

    /* Sum: '<Root>/Add' incorporates:
     *  Constant: '<Root>/Constant1'
     */
    PW_SMRv9_B.Add = PW_SMRv9_cal->Constant1_Value_e1;

    /* Switch: '<Root>/Switch1' */
    if (PW_SMRv9_B.Switch >= PW_SMRv9_cal->Switch1_Threshold) {
      /* Switch: '<Root>/Switch1' incorporates:
       *  Constant: '<Root>/Constant2'
       */
      PW_SMRv9_B.Switch1 = PW_SMRv9_cal->Constant2_Value;
    } else {
      /* Switch: '<Root>/Switch1' */
      PW_SMRv9_B.Switch1 = PW_SMRv9_B.Add;
    }

    /* End of Switch: '<Root>/Switch1' */

    /* Reshape: '<S188>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_c = PW_SMRv9_B.OUTPUT_1_0[62];

    /* Reshape: '<S196>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_k = PW_SMRv9_B.OUTPUT_1_0[45];

    /* Reshape: '<S195>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_h = PW_SMRv9_B.OUTPUT_1_0[44];

    /* Sum: '<Root>/Subtract1' incorporates:
     *  Constant: '<Root>/Constant6'
     */
    PW_SMRv9_B.Subtract1 = PW_SMRv9_cal->Constant6_Value - PW_SMRv9_B.RESHAPE_c;

    /* Product: '<Root>/Product1' incorporates:
     *  Constant: '<Root>/Constant3'
     */
    PW_SMRv9_B.Product1 = PW_SMRv9_B.Subtract1 * PW_SMRv9_cal->Constant3_Value;

    /* Product: '<Root>/Product3' */
    PW_SMRv9_B.Product3 = PW_SMRv9_B.RESHAPE_k * PW_SMRv9_B.Product1;

    /* Product: '<Root>/Product2' incorporates:
     *  Constant: '<Root>/Constant3'
     */
    PW_SMRv9_B.Product2 = PW_SMRv9_cal->Constant3_Value * PW_SMRv9_B.RESHAPE_c;

    /* Product: '<Root>/Product4' */
    PW_SMRv9_B.Product4 = PW_SMRv9_B.Product2 * PW_SMRv9_B.RESHAPE_h;

    /* Sum: '<Root>/Add1' */
    PW_SMRv9_B.Add1 = PW_SMRv9_B.Product3 + PW_SMRv9_B.Product4;

    /* RandomNumber: '<S1>/White Noise' */
    PW_SMRv9_B.WhiteNoise = PW_SMRv9_DW.NextOutput;

    /* Gain: '<S1>/Output' */
    u1 = PW_SMRv9_cal->BandLimitedWhiteNoise_Cov;
    u1 = std::sqrt(u1);
    u1 /= 0.1;

    /* Gain: '<S1>/Output' */
    PW_SMRv9_B.Output = u1 * PW_SMRv9_B.WhiteNoise;

    /* DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn2' */
    u1 = PW_SMRv9_cal->DiscreteTransferFcn2_NumCoef *
      PW_SMRv9_DW.DiscreteTransferFcn2_states;

    /* DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn2' */
    PW_SMRv9_B.DiscreteTransferFcn2 = u1;

    /* Gain: '<Root>/Gain' */
    PW_SMRv9_B.Gain = PW_SMRv9_cal->Gain_Gain * PW_SMRv9_B.Output;

    /* Reshape: '<S158>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_kr = PW_SMRv9_B.OUTPUT_1_0[36];

    /* Sum: '<Root>/Subtract' incorporates:
     *  Constant: '<Root>/Constant'
     */
    PW_SMRv9_B.Subtract = PW_SMRv9_cal->Constant_Value - PW_SMRv9_B.RESHAPE_kr;

    /* Gain: '<S131>/Proportional Gain' */
    PW_SMRv9_B.ProportionalGain = PW_SMRv9_cal->DiscretePIDController_P *
      PW_SMRv9_B.Subtract;

    /* DiscreteIntegrator: '<S126>/Integrator' */
    PW_SMRv9_B.Integrator = PW_SMRv9_DW.Integrator_DSTATE;

    /* Sum: '<S135>/Sum' */
    PW_SMRv9_B.Sum = PW_SMRv9_B.ProportionalGain + PW_SMRv9_B.Integrator;

    /* DeadZone: '<S119>/DeadZone' */
    if (PW_SMRv9_B.Sum > PW_SMRv9_cal->DiscretePIDController_UpperSatu) {
      /* DeadZone: '<S119>/DeadZone' */
      PW_SMRv9_B.DeadZone = PW_SMRv9_B.Sum -
        PW_SMRv9_cal->DiscretePIDController_UpperSatu;
    } else if (PW_SMRv9_B.Sum >= PW_SMRv9_cal->DiscretePIDController_LowerSatu)
    {
      /* DeadZone: '<S119>/DeadZone' */
      PW_SMRv9_B.DeadZone = 0.0;
    } else {
      /* DeadZone: '<S119>/DeadZone' */
      PW_SMRv9_B.DeadZone = PW_SMRv9_B.Sum -
        PW_SMRv9_cal->DiscretePIDController_LowerSatu;
    }

    /* End of DeadZone: '<S119>/DeadZone' */

    /* RelationalOperator: '<S117>/Relational Operator' incorporates:
     *  Constant: '<S117>/Clamping_zero'
     */
    PW_SMRv9_B.RelationalOperator = (PW_SMRv9_cal->Clamping_zero_Value !=
      PW_SMRv9_B.DeadZone);

    /* RelationalOperator: '<S117>/fix for DT propagation issue' incorporates:
     *  Constant: '<S117>/Clamping_zero'
     */
    PW_SMRv9_B.fixforDTpropagationissue = (PW_SMRv9_B.DeadZone >
      PW_SMRv9_cal->Clamping_zero_Value);

    /* Switch: '<S117>/Switch1' */
    if (PW_SMRv9_B.fixforDTpropagationissue) {
      /* Switch: '<S117>/Switch1' incorporates:
       *  Constant: '<S117>/Constant'
       */
      PW_SMRv9_B.Switch1_a = PW_SMRv9_cal->Constant_Value_i;
    } else {
      /* Switch: '<S117>/Switch1' incorporates:
       *  Constant: '<S117>/Constant2'
       */
      PW_SMRv9_B.Switch1_a = PW_SMRv9_cal->Constant2_Value_c;
    }

    /* End of Switch: '<S117>/Switch1' */

    /* Gain: '<S123>/Integral Gain' */
    PW_SMRv9_B.IntegralGain = PW_SMRv9_cal->DiscretePIDController_I *
      PW_SMRv9_B.Subtract;

    /* RelationalOperator: '<S117>/fix for DT propagation issue1' incorporates:
     *  Constant: '<S117>/Clamping_zero'
     */
    PW_SMRv9_B.fixforDTpropagationissue1 = (PW_SMRv9_B.IntegralGain >
      PW_SMRv9_cal->Clamping_zero_Value);

    /* Switch: '<S117>/Switch2' */
    if (PW_SMRv9_B.fixforDTpropagationissue1) {
      /* Switch: '<S117>/Switch2' incorporates:
       *  Constant: '<S117>/Constant3'
       */
      PW_SMRv9_B.Switch2 = PW_SMRv9_cal->Constant3_Value_k;
    } else {
      /* Switch: '<S117>/Switch2' incorporates:
       *  Constant: '<S117>/Constant4'
       */
      PW_SMRv9_B.Switch2 = PW_SMRv9_cal->Constant4_Value_f;
    }

    /* End of Switch: '<S117>/Switch2' */

    /* RelationalOperator: '<S117>/Equal1' */
    PW_SMRv9_B.Equal1 = (PW_SMRv9_B.Switch1_a == PW_SMRv9_B.Switch2);

    /* Logic: '<S117>/AND3' */
    PW_SMRv9_B.AND3 = (PW_SMRv9_B.RelationalOperator && PW_SMRv9_B.Equal1);

    /* Switch: '<S117>/Switch' */
    if (PW_SMRv9_B.AND3) {
      /* Switch: '<S117>/Switch' incorporates:
       *  Constant: '<S117>/Constant1'
       */
      PW_SMRv9_B.Switch_e = PW_SMRv9_cal->Constant1_Value;
    } else {
      /* Switch: '<S117>/Switch' */
      PW_SMRv9_B.Switch_e = PW_SMRv9_B.IntegralGain;
    }

    /* End of Switch: '<S117>/Switch' */

    /* Saturate: '<S133>/Saturation' */
    u0 = PW_SMRv9_B.Sum;
    u1 = PW_SMRv9_cal->DiscretePIDController_LowerSatu;
    u2 = PW_SMRv9_cal->DiscretePIDController_UpperSatu;
    if (u0 > u2) {
      /* Saturate: '<S133>/Saturation' */
      PW_SMRv9_B.Saturation = u2;
    } else if (u0 < u1) {
      /* Saturate: '<S133>/Saturation' */
      PW_SMRv9_B.Saturation = u1;
    } else {
      /* Saturate: '<S133>/Saturation' */
      PW_SMRv9_B.Saturation = u0;
    }

    /* End of Saturate: '<S133>/Saturation' */

    /* Saturate: '<Root>/Saturation' */
    u0 = PW_SMRv9_B.Saturation;
    u1 = PW_SMRv9_cal->Saturation_LowerSat;
    u2 = PW_SMRv9_cal->Saturation_UpperSat;
    if (u0 > u2) {
      /* Saturate: '<Root>/Saturation' */
      PW_SMRv9_B.Saturation_n = u2;
    } else if (u0 < u1) {
      /* Saturate: '<Root>/Saturation' */
      PW_SMRv9_B.Saturation_n = u1;
    } else {
      /* Saturate: '<Root>/Saturation' */
      PW_SMRv9_B.Saturation_n = u0;
    }

    /* End of Saturate: '<Root>/Saturation' */

    /* Reshape: '<S143>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_ab = PW_SMRv9_B.OUTPUT_1_0[39];

    /* Reshape: '<S166>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_o = PW_SMRv9_B.OUTPUT_1_0[73];

    /* Lookup_n-D: '<S84>/1-D Lookup Table' incorporates:
     *  Reshape: '<S143>/RESHAPE'
     */
    PW_SMRv9_B.uDLookupTable = look1_binlxpw(PW_SMRv9_B.RESHAPE_ab,
      PW_SMRv9_cal->uDLookupTable_bp01Data,
      PW_SMRv9_cal->uDLookupTable_tableData, 9U);

    /* Sum: '<S84>/Subtract' */
    PW_SMRv9_B.Subtract_d = PW_SMRv9_B.uDLookupTable - PW_SMRv9_B.RESHAPE_o;

    /* Gain: '<S267>/Proportional Gain' */
    PW_SMRv9_B.ProportionalGain_d = PW_SMRv9_cal->DiscretePIDController_P_e *
      PW_SMRv9_B.Subtract_d;

    /* DiscreteIntegrator: '<S262>/Integrator' */
    PW_SMRv9_B.Integrator_n = PW_SMRv9_DW.Integrator_DSTATE_h;

    /* Sum: '<S271>/Sum' */
    PW_SMRv9_B.Sum_g = PW_SMRv9_B.ProportionalGain_d + PW_SMRv9_B.Integrator_n;

    /* DeadZone: '<S255>/DeadZone' */
    if (PW_SMRv9_B.Sum_g > PW_SMRv9_P.DiscretePIDController_UpperSa_j) {
      /* DeadZone: '<S255>/DeadZone' */
      PW_SMRv9_B.DeadZone_a = PW_SMRv9_B.Sum_g -
        PW_SMRv9_P.DiscretePIDController_UpperSa_j;
    } else if (PW_SMRv9_B.Sum_g >= PW_SMRv9_P.DiscretePIDController_LowerSa_c) {
      /* DeadZone: '<S255>/DeadZone' */
      PW_SMRv9_B.DeadZone_a = 0.0;
    } else {
      /* DeadZone: '<S255>/DeadZone' */
      PW_SMRv9_B.DeadZone_a = PW_SMRv9_B.Sum_g -
        PW_SMRv9_P.DiscretePIDController_LowerSa_c;
    }

    /* End of DeadZone: '<S255>/DeadZone' */

    /* RelationalOperator: '<S253>/Relational Operator' incorporates:
     *  Constant: '<S253>/Clamping_zero'
     */
    PW_SMRv9_B.RelationalOperator_f = (PW_SMRv9_cal->Clamping_zero_Value_j !=
      PW_SMRv9_B.DeadZone_a);

    /* RelationalOperator: '<S253>/fix for DT propagation issue' incorporates:
     *  Constant: '<S253>/Clamping_zero'
     */
    PW_SMRv9_B.fixforDTpropagationissue_p = (PW_SMRv9_B.DeadZone_a >
      PW_SMRv9_cal->Clamping_zero_Value_j);

    /* Switch: '<S253>/Switch1' */
    if (PW_SMRv9_B.fixforDTpropagationissue_p) {
      /* Switch: '<S253>/Switch1' incorporates:
       *  Constant: '<S253>/Constant'
       */
      PW_SMRv9_B.Switch1_n = PW_SMRv9_cal->Constant_Value_m;
    } else {
      /* Switch: '<S253>/Switch1' incorporates:
       *  Constant: '<S253>/Constant2'
       */
      PW_SMRv9_B.Switch1_n = PW_SMRv9_cal->Constant2_Value_b;
    }

    /* End of Switch: '<S253>/Switch1' */

    /* Gain: '<S259>/Integral Gain' */
    PW_SMRv9_B.IntegralGain_m = PW_SMRv9_cal->DiscretePIDController_I_a *
      PW_SMRv9_B.Subtract_d;

    /* RelationalOperator: '<S253>/fix for DT propagation issue1' incorporates:
     *  Constant: '<S253>/Clamping_zero'
     */
    PW_SMRv9_B.fixforDTpropagationissue1_m = (PW_SMRv9_B.IntegralGain_m >
      PW_SMRv9_cal->Clamping_zero_Value_j);

    /* Switch: '<S253>/Switch2' */
    if (PW_SMRv9_B.fixforDTpropagationissue1_m) {
      /* Switch: '<S253>/Switch2' incorporates:
       *  Constant: '<S253>/Constant3'
       */
      PW_SMRv9_B.Switch2_a = PW_SMRv9_cal->Constant3_Value_m;
    } else {
      /* Switch: '<S253>/Switch2' incorporates:
       *  Constant: '<S253>/Constant4'
       */
      PW_SMRv9_B.Switch2_a = PW_SMRv9_cal->Constant4_Value_h;
    }

    /* End of Switch: '<S253>/Switch2' */

    /* RelationalOperator: '<S253>/Equal1' */
    PW_SMRv9_B.Equal1_e = (PW_SMRv9_B.Switch1_n == PW_SMRv9_B.Switch2_a);

    /* Logic: '<S253>/AND3' */
    PW_SMRv9_B.AND3_n = (PW_SMRv9_B.RelationalOperator_f && PW_SMRv9_B.Equal1_e);

    /* Switch: '<S253>/Switch' */
    if (PW_SMRv9_B.AND3_n) {
      /* Switch: '<S253>/Switch' incorporates:
       *  Constant: '<S253>/Constant1'
       */
      PW_SMRv9_B.Switch_j = PW_SMRv9_cal->Constant1_Value_n;
    } else {
      /* Switch: '<S253>/Switch' */
      PW_SMRv9_B.Switch_j = PW_SMRv9_B.IntegralGain_m;
    }

    /* End of Switch: '<S253>/Switch' */

    /* Saturate: '<S269>/Saturation' */
    u0 = PW_SMRv9_B.Sum_g;
    u1 = PW_SMRv9_P.DiscretePIDController_LowerSa_c;
    u2 = PW_SMRv9_P.DiscretePIDController_UpperSa_j;
    if (u0 > u2) {
      /* Saturate: '<S269>/Saturation' */
      PW_SMRv9_B.Saturation_h = u2;
    } else if (u0 < u1) {
      /* Saturate: '<S269>/Saturation' */
      PW_SMRv9_B.Saturation_h = u1;
    } else {
      /* Saturate: '<S269>/Saturation' */
      PW_SMRv9_B.Saturation_h = u0;
    }

    /* End of Saturate: '<S269>/Saturation' */

    /* SimscapeExecutionBlock: '<S287>/OUTPUT_1_2' */
    simulationData = static_cast<NeslSimulationData *>
      (PW_SMRv9_DW.OUTPUT_1_2_SimData);
    time_7 = PW_SMRv9_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_7;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &PW_SMRv9_DW.OUTPUT_1_2_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &PW_SMRv9_DW.OUTPUT_1_2_Modes;
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
    tmp_8[0] = PW_SMRv9_B.INPUT_7_1_1[0];
    tmp_8[1] = PW_SMRv9_B.INPUT_7_1_1[1];
    tmp_8[2] = PW_SMRv9_B.INPUT_7_1_1[2];
    tmp_8[3] = PW_SMRv9_B.INPUT_7_1_1[3];
    tmp_9[1] = 4;
    tmp_8[4] = PW_SMRv9_B.INPUT_4_1_1[0];
    tmp_8[5] = PW_SMRv9_B.INPUT_4_1_1[1];
    tmp_8[6] = PW_SMRv9_B.INPUT_4_1_1[2];
    tmp_8[7] = PW_SMRv9_B.INPUT_4_1_1[3];
    tmp_9[2] = 8;
    tmp_8[8] = PW_SMRv9_B.INPUT_8_1_1[0];
    tmp_8[9] = PW_SMRv9_B.INPUT_8_1_1[1];
    tmp_8[10] = PW_SMRv9_B.INPUT_8_1_1[2];
    tmp_8[11] = PW_SMRv9_B.INPUT_8_1_1[3];
    tmp_9[3] = 12;
    tmp_8[12] = PW_SMRv9_B.INPUT_2_1_1[0];
    tmp_8[13] = PW_SMRv9_B.INPUT_2_1_1[1];
    tmp_8[14] = PW_SMRv9_B.INPUT_2_1_1[2];
    tmp_8[15] = PW_SMRv9_B.INPUT_2_1_1[3];
    tmp_9[4] = 16;
    tmp_8[16] = PW_SMRv9_B.INPUT_1_1_1[0];
    tmp_8[17] = PW_SMRv9_B.INPUT_1_1_1[1];
    tmp_8[18] = PW_SMRv9_B.INPUT_1_1_1[2];
    tmp_8[19] = PW_SMRv9_B.INPUT_1_1_1[3];
    tmp_9[5] = 20;
    tmp_8[20] = PW_SMRv9_B.INPUT_6_1_1[0];
    tmp_8[21] = PW_SMRv9_B.INPUT_6_1_1[1];
    tmp_8[22] = PW_SMRv9_B.INPUT_6_1_1[2];
    tmp_8[23] = PW_SMRv9_B.INPUT_6_1_1[3];
    tmp_9[6] = 24;
    tmp_8[24] = PW_SMRv9_B.INPUT_5_1_1[0];
    tmp_8[25] = PW_SMRv9_B.INPUT_5_1_1[1];
    tmp_8[26] = PW_SMRv9_B.INPUT_5_1_1[2];
    tmp_8[27] = PW_SMRv9_B.INPUT_5_1_1[3];
    tmp_9[7] = 28;
    tmp_8[28] = PW_SMRv9_B.INPUT_3_1_1[0];
    tmp_8[29] = PW_SMRv9_B.INPUT_3_1_1[1];
    tmp_8[30] = PW_SMRv9_B.INPUT_3_1_1[2];
    tmp_8[31] = PW_SMRv9_B.INPUT_3_1_1[3];
    tmp_9[8] = 32;
    std::memcpy(&tmp_8[32], &PW_SMRv9_B.STATE_1[0], 423U * sizeof(real_T));
    tmp_9[9] = 455;
    simulationData->mData->mInputValues.mN = 455;
    simulationData->mData->mInputValues.mX = &tmp_8[0];
    simulationData->mData->mInputOffsets.mN = 10;
    simulationData->mData->mInputOffsets.mX = &tmp_9[0];
    simulationData->mData->mOutputs.mN = 1;

    /* SimscapeExecutionBlock: '<S287>/OUTPUT_1_2' */
    simulationData->mData->mOutputs.mX = &PW_SMRv9_B.OUTPUT_1_2;

    /* SimscapeExecutionBlock: '<S287>/OUTPUT_1_2' */
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    time_8 = (((PW_SMRv9_M->Timing.clockTick1+PW_SMRv9_M->Timing.clockTickH1*
                4294967296.0)) * 0.01);
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_8;
    isHit_3 = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_3;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulator = static_cast<NeslSimulator *>(PW_SMRv9_DW.OUTPUT_1_2_Simulator);
    diagnosticManager = static_cast<NeuDiagnosticManager *>
      (PW_SMRv9_DW.OUTPUT_1_2_DiagMgr);
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    k = ne_simulator_method(simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (k != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(PW_SMRv9_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(PW_SMRv9_M, msg);
      }
    }

    /* Reshape: '<S279>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_f = PW_SMRv9_B.OUTPUT_1_2;

    /* Reshape: '<S280>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_p = PW_SMRv9_B.OUTPUT_1_0[27];

    /* Reshape: '<S281>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_ak = PW_SMRv9_B.OUTPUT_1_0[26];

    /* Reshape: '<S144>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_jf = PW_SMRv9_B.OUTPUT_1_0[43];

    /* Lookup_n-D: '<S92>/1-D Lookup Table' incorporates:
     *  Reshape: '<S144>/RESHAPE'
     */
    PW_SMRv9_B.uDLookupTable_b = look1_binlxpw(PW_SMRv9_B.RESHAPE_jf,
      PW_SMRv9_cal->uDLookupTable_bp01Data_n,
      PW_SMRv9_cal->uDLookupTable_tableData_g, 7U);

    /* Sum: '<S92>/Subtract' incorporates:
     *  Constant: '<S92>/Constant'
     */
    PW_SMRv9_B.Subtract_p = PW_SMRv9_cal->Constant_Value_l -
      PW_SMRv9_B.RESHAPE_jf;

    /* Gain: '<S485>/Proportional Gain' */
    PW_SMRv9_B.ProportionalGain_e = PW_SMRv9_cal->DiscretePIDController_P_i *
      PW_SMRv9_B.Subtract_p;

    /* DiscreteIntegrator: '<S480>/Integrator' */
    PW_SMRv9_B.Integrator_p = PW_SMRv9_DW.Integrator_DSTATE_b;

    /* Gain: '<S474>/Derivative Gain' */
    PW_SMRv9_B.DerivativeGain = PW_SMRv9_cal->DiscretePIDController_D *
      PW_SMRv9_B.Subtract_p;

    /* DiscreteIntegrator: '<S475>/Filter' */
    PW_SMRv9_B.Filter = PW_SMRv9_DW.Filter_DSTATE;

    /* Sum: '<S475>/SumD' */
    PW_SMRv9_B.SumD = PW_SMRv9_B.DerivativeGain - PW_SMRv9_B.Filter;

    /* Gain: '<S483>/Filter Coefficient' */
    PW_SMRv9_B.FilterCoefficient = PW_SMRv9_cal->DiscretePIDController_N *
      PW_SMRv9_B.SumD;

    /* Sum: '<S489>/Sum' */
    PW_SMRv9_B.Sum_e = (PW_SMRv9_B.ProportionalGain_e + PW_SMRv9_B.Integrator_p)
      + PW_SMRv9_B.FilterCoefficient;

    /* DeadZone: '<S473>/DeadZone' */
    if (PW_SMRv9_B.Sum_e > PW_SMRv9_cal->DiscretePIDController_UpperS_jt) {
      /* DeadZone: '<S473>/DeadZone' */
      PW_SMRv9_B.DeadZone_e = PW_SMRv9_B.Sum_e -
        PW_SMRv9_cal->DiscretePIDController_UpperS_jt;
    } else if (PW_SMRv9_B.Sum_e >= PW_SMRv9_cal->DiscretePIDController_LowerSa_a)
    {
      /* DeadZone: '<S473>/DeadZone' */
      PW_SMRv9_B.DeadZone_e = 0.0;
    } else {
      /* DeadZone: '<S473>/DeadZone' */
      PW_SMRv9_B.DeadZone_e = PW_SMRv9_B.Sum_e -
        PW_SMRv9_cal->DiscretePIDController_LowerSa_a;
    }

    /* End of DeadZone: '<S473>/DeadZone' */

    /* RelationalOperator: '<S471>/Relational Operator' incorporates:
     *  Constant: '<S471>/Clamping_zero'
     */
    PW_SMRv9_B.RelationalOperator_fb = (PW_SMRv9_cal->Clamping_zero_Value_m !=
      PW_SMRv9_B.DeadZone_e);

    /* RelationalOperator: '<S471>/fix for DT propagation issue' incorporates:
     *  Constant: '<S471>/Clamping_zero'
     */
    PW_SMRv9_B.fixforDTpropagationissue_n = (PW_SMRv9_B.DeadZone_e >
      PW_SMRv9_cal->Clamping_zero_Value_m);

    /* Switch: '<S471>/Switch1' */
    if (PW_SMRv9_B.fixforDTpropagationissue_n) {
      /* Switch: '<S471>/Switch1' incorporates:
       *  Constant: '<S471>/Constant'
       */
      PW_SMRv9_B.Switch1_n2 = PW_SMRv9_cal->Constant_Value_d;
    } else {
      /* Switch: '<S471>/Switch1' incorporates:
       *  Constant: '<S471>/Constant2'
       */
      PW_SMRv9_B.Switch1_n2 = PW_SMRv9_cal->Constant2_Value_k;
    }

    /* End of Switch: '<S471>/Switch1' */

    /* Gain: '<S477>/Integral Gain' */
    PW_SMRv9_B.IntegralGain_n = PW_SMRv9_cal->DiscretePIDController_I_l *
      PW_SMRv9_B.Subtract_p;

    /* RelationalOperator: '<S471>/fix for DT propagation issue1' incorporates:
     *  Constant: '<S471>/Clamping_zero'
     */
    PW_SMRv9_B.fixforDTpropagationissue1_l = (PW_SMRv9_B.IntegralGain_n >
      PW_SMRv9_cal->Clamping_zero_Value_m);

    /* Switch: '<S471>/Switch2' */
    if (PW_SMRv9_B.fixforDTpropagationissue1_l) {
      /* Switch: '<S471>/Switch2' incorporates:
       *  Constant: '<S471>/Constant3'
       */
      PW_SMRv9_B.Switch2_j = PW_SMRv9_cal->Constant3_Value_h;
    } else {
      /* Switch: '<S471>/Switch2' incorporates:
       *  Constant: '<S471>/Constant4'
       */
      PW_SMRv9_B.Switch2_j = PW_SMRv9_cal->Constant4_Value_b;
    }

    /* End of Switch: '<S471>/Switch2' */

    /* RelationalOperator: '<S471>/Equal1' */
    PW_SMRv9_B.Equal1_j = (PW_SMRv9_B.Switch1_n2 == PW_SMRv9_B.Switch2_j);

    /* Logic: '<S471>/AND3' */
    PW_SMRv9_B.AND3_nv = (PW_SMRv9_B.RelationalOperator_fb &&
                          PW_SMRv9_B.Equal1_j);

    /* Switch: '<S471>/Switch' */
    if (PW_SMRv9_B.AND3_nv) {
      /* Switch: '<S471>/Switch' incorporates:
       *  Constant: '<S471>/Constant1'
       */
      PW_SMRv9_B.Switch_ed = PW_SMRv9_cal->Constant1_Value_k;
    } else {
      /* Switch: '<S471>/Switch' */
      PW_SMRv9_B.Switch_ed = PW_SMRv9_B.IntegralGain_n;
    }

    /* End of Switch: '<S471>/Switch' */

    /* Saturate: '<S487>/Saturation' */
    u0 = PW_SMRv9_B.Sum_e;
    u1 = PW_SMRv9_cal->DiscretePIDController_LowerSa_a;
    u2 = PW_SMRv9_cal->DiscretePIDController_UpperS_jt;
    if (u0 > u2) {
      /* Saturate: '<S487>/Saturation' */
      PW_SMRv9_B.Saturation_p = u2;
    } else if (u0 < u1) {
      /* Saturate: '<S487>/Saturation' */
      PW_SMRv9_B.Saturation_p = u1;
    } else {
      /* Saturate: '<S487>/Saturation' */
      PW_SMRv9_B.Saturation_p = u0;
    }

    /* End of Saturate: '<S487>/Saturation' */

    /* MinMax: '<S92>/MinMax' */
    u0 = PW_SMRv9_B.uDLookupTable_b;
    u1 = PW_SMRv9_B.Saturation_p;
    if ((u0 <= u1) || rtIsNaN(u1)) {
      u1 = u0;
    }

    /* MinMax: '<S92>/MinMax' */
    PW_SMRv9_B.MinMax = u1;

    /* Saturate: '<S92>/Saturation' */
    u0 = PW_SMRv9_B.MinMax;
    u1 = PW_SMRv9_cal->Saturation_LowerSat_b;
    u2 = PW_SMRv9_P.Saturation_UpperSat_d;
    if (u0 > u2) {
      /* Saturate: '<S92>/Saturation' */
      PW_SMRv9_B.Saturation_c = u2;
    } else if (u0 < u1) {
      /* Saturate: '<S92>/Saturation' */
      PW_SMRv9_B.Saturation_c = u1;
    } else {
      /* Saturate: '<S92>/Saturation' */
      PW_SMRv9_B.Saturation_c = u0;
    }

    /* End of Saturate: '<S92>/Saturation' */

    /* Reshape: '<S146>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_hr = PW_SMRv9_B.OUTPUT_1_0[75];

    /* Reshape: '<S147>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_kv = PW_SMRv9_B.OUTPUT_1_0[54];

    /* Reshape: '<S149>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_je = PW_SMRv9_B.OUTPUT_1_0[37];

    /* Reshape: '<S150>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_jv = PW_SMRv9_B.OUTPUT_1_0[38];

    /* Reshape: '<S151>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_g = PW_SMRv9_B.OUTPUT_1_0[67];

    /* Reshape: '<S152>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_i = PW_SMRv9_B.OUTPUT_1_0[76];

    /* Reshape: '<S153>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_ag = PW_SMRv9_B.OUTPUT_1_0[32];

    /* Reshape: '<S154>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_am = PW_SMRv9_B.OUTPUT_1_0[33];

    /* Reshape: '<S155>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_m = PW_SMRv9_B.OUTPUT_1_0[28];

    /* Reshape: '<S156>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_pj = PW_SMRv9_B.OUTPUT_1_0[34];

    /* Reshape: '<S186>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_aw = PW_SMRv9_B.OUTPUT_1_0[63];

    /* Abs: '<S90>/Abs' */
    PW_SMRv9_B.Abs_m = std::abs(PW_SMRv9_B.RESHAPE_aw);

    /* DiscreteTransferFcn: '<S90>/Discrete Transfer Fcn1' */
    u1 = PW_SMRv9_cal->DiscreteTransferFcn1_NumCoef_o *
      PW_SMRv9_DW.DiscreteTransferFcn1_states_p;

    /* DiscreteTransferFcn: '<S90>/Discrete Transfer Fcn1' */
    PW_SMRv9_B.DiscreteTransferFcn1_k = u1;

    /* Gain: '<S90>/Gain' */
    PW_SMRv9_B.Gain_n = PW_SMRv9_cal->Gain_Gain_f *
      PW_SMRv9_B.DiscreteTransferFcn1_k;

    /* Saturate: '<S90>/Saturation' */
    u0 = PW_SMRv9_B.Gain_n;
    u1 = PW_SMRv9_cal->Saturation_LowerSat_i;
    u2 = PW_SMRv9_cal->Saturation_UpperSat_h;
    if (u0 > u2) {
      /* Saturate: '<S90>/Saturation' */
      PW_SMRv9_B.Saturation_j = u2;
    } else if (u0 < u1) {
      /* Saturate: '<S90>/Saturation' */
      PW_SMRv9_B.Saturation_j = u1;
    } else {
      /* Saturate: '<S90>/Saturation' */
      PW_SMRv9_B.Saturation_j = u0;
    }

    /* End of Saturate: '<S90>/Saturation' */

    /* Gain: '<S90>/Gain1' */
    PW_SMRv9_B.Gain1_j = PW_SMRv9_cal->Gain1_Gain_m * PW_SMRv9_B.Saturation_j;

    /* Bias: '<S90>/Bias' */
    PW_SMRv9_B.Bias = PW_SMRv9_B.Gain1_j + PW_SMRv9_cal->Bias_Bias;

    /* Sum: '<S90>/Subtract' */
    PW_SMRv9_B.Subtract_k = 0.0;

    /* Gain: '<S328>/Proportional Gain' */
    PW_SMRv9_B.ProportionalGain_i = PW_SMRv9_cal->DiscretePIDController_P_j *
      PW_SMRv9_B.Subtract_k;

    /* DiscreteIntegrator: '<S323>/Integrator' */
    PW_SMRv9_B.Integrator_a = PW_SMRv9_DW.Integrator_DSTATE_j;

    /* Sum: '<S332>/Sum' */
    PW_SMRv9_B.Sum_a = PW_SMRv9_B.ProportionalGain_i + PW_SMRv9_B.Integrator_a;

    /* DeadZone: '<S316>/DeadZone' */
    if (PW_SMRv9_B.Sum_a > PW_SMRv9_cal->DiscretePIDController_UpperSa_c) {
      /* DeadZone: '<S316>/DeadZone' */
      PW_SMRv9_B.DeadZone_l = PW_SMRv9_B.Sum_a -
        PW_SMRv9_cal->DiscretePIDController_UpperSa_c;
    } else if (PW_SMRv9_B.Sum_a >= PW_SMRv9_cal->DiscretePIDController_LowerSa_b)
    {
      /* DeadZone: '<S316>/DeadZone' */
      PW_SMRv9_B.DeadZone_l = 0.0;
    } else {
      /* DeadZone: '<S316>/DeadZone' */
      PW_SMRv9_B.DeadZone_l = PW_SMRv9_B.Sum_a -
        PW_SMRv9_cal->DiscretePIDController_LowerSa_b;
    }

    /* End of DeadZone: '<S316>/DeadZone' */

    /* RelationalOperator: '<S314>/Relational Operator' incorporates:
     *  Constant: '<S314>/Clamping_zero'
     */
    PW_SMRv9_B.RelationalOperator_o = (PW_SMRv9_cal->Clamping_zero_Value_c !=
      PW_SMRv9_B.DeadZone_l);

    /* RelationalOperator: '<S314>/fix for DT propagation issue' incorporates:
     *  Constant: '<S314>/Clamping_zero'
     */
    PW_SMRv9_B.fixforDTpropagationissue_g = (PW_SMRv9_B.DeadZone_l >
      PW_SMRv9_cal->Clamping_zero_Value_c);

    /* Switch: '<S314>/Switch1' */
    if (PW_SMRv9_B.fixforDTpropagationissue_g) {
      /* Switch: '<S314>/Switch1' incorporates:
       *  Constant: '<S314>/Constant'
       */
      PW_SMRv9_B.Switch1_m = PW_SMRv9_cal->Constant_Value_n;
    } else {
      /* Switch: '<S314>/Switch1' incorporates:
       *  Constant: '<S314>/Constant2'
       */
      PW_SMRv9_B.Switch1_m = PW_SMRv9_cal->Constant2_Value_n;
    }

    /* End of Switch: '<S314>/Switch1' */

    /* Gain: '<S320>/Integral Gain' */
    PW_SMRv9_B.IntegralGain_nk = PW_SMRv9_cal->DiscretePIDController_I_b *
      PW_SMRv9_B.Subtract_k;

    /* RelationalOperator: '<S314>/fix for DT propagation issue1' incorporates:
     *  Constant: '<S314>/Clamping_zero'
     */
    PW_SMRv9_B.fixforDTpropagationissue1_e = (PW_SMRv9_B.IntegralGain_nk >
      PW_SMRv9_cal->Clamping_zero_Value_c);

    /* Switch: '<S314>/Switch2' */
    if (PW_SMRv9_B.fixforDTpropagationissue1_e) {
      /* Switch: '<S314>/Switch2' incorporates:
       *  Constant: '<S314>/Constant3'
       */
      PW_SMRv9_B.Switch2_g = PW_SMRv9_cal->Constant3_Value_c;
    } else {
      /* Switch: '<S314>/Switch2' incorporates:
       *  Constant: '<S314>/Constant4'
       */
      PW_SMRv9_B.Switch2_g = PW_SMRv9_cal->Constant4_Value_o;
    }

    /* End of Switch: '<S314>/Switch2' */

    /* RelationalOperator: '<S314>/Equal1' */
    PW_SMRv9_B.Equal1_p = (PW_SMRv9_B.Switch1_m == PW_SMRv9_B.Switch2_g);

    /* Logic: '<S314>/AND3' */
    PW_SMRv9_B.AND3_h = (PW_SMRv9_B.RelationalOperator_o && PW_SMRv9_B.Equal1_p);

    /* Switch: '<S314>/Switch' */
    if (PW_SMRv9_B.AND3_h) {
      /* Switch: '<S314>/Switch' incorporates:
       *  Constant: '<S314>/Constant1'
       */
      PW_SMRv9_B.Switch_c = PW_SMRv9_cal->Constant1_Value_i;
    } else {
      /* Switch: '<S314>/Switch' */
      PW_SMRv9_B.Switch_c = PW_SMRv9_B.IntegralGain_nk;
    }

    /* End of Switch: '<S314>/Switch' */

    /* Saturate: '<S330>/Saturation' */
    u0 = PW_SMRv9_B.Sum_a;
    u1 = PW_SMRv9_cal->DiscretePIDController_LowerSa_b;
    u2 = PW_SMRv9_cal->DiscretePIDController_UpperSa_c;
    if (u0 > u2) {
      /* Saturate: '<S330>/Saturation' */
      PW_SMRv9_B.Saturation_na = u2;
    } else if (u0 < u1) {
      /* Saturate: '<S330>/Saturation' */
      PW_SMRv9_B.Saturation_na = u1;
    } else {
      /* Saturate: '<S330>/Saturation' */
      PW_SMRv9_B.Saturation_na = u0;
    }

    /* End of Saturate: '<S330>/Saturation' */

    /* Reshape: '<S157>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_p1 = PW_SMRv9_B.OUTPUT_1_0[35];

    /* Reshape: '<S159>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_ah = PW_SMRv9_B.OUTPUT_1_0[12];

    /* Reshape: '<S160>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_fb = PW_SMRv9_B.OUTPUT_1_0[70];

    /* Reshape: '<S161>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_km = PW_SMRv9_B.OUTPUT_1_0[68];

    /* Reshape: '<S162>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_oj = PW_SMRv9_B.OUTPUT_1_0[65];

    /* Reshape: '<S163>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_ng = PW_SMRv9_B.OUTPUT_1_0[72];

    /* Reshape: '<S164>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_e = PW_SMRv9_B.OUTPUT_1_0[71];

    /* SimscapeExecutionBlock: '<S287>/OUTPUT_1_1' */
    simulationData = static_cast<NeslSimulationData *>
      (PW_SMRv9_DW.OUTPUT_1_1_SimData);
    time_9 = PW_SMRv9_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_9;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &PW_SMRv9_DW.OUTPUT_1_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &PW_SMRv9_DW.OUTPUT_1_1_Modes;
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
    tmp_b[0] = 0;
    tmp_a[0] = PW_SMRv9_B.INPUT_7_1_1[0];
    tmp_a[1] = PW_SMRv9_B.INPUT_7_1_1[1];
    tmp_a[2] = PW_SMRv9_B.INPUT_7_1_1[2];
    tmp_a[3] = PW_SMRv9_B.INPUT_7_1_1[3];
    tmp_b[1] = 4;
    tmp_a[4] = PW_SMRv9_B.INPUT_4_1_1[0];
    tmp_a[5] = PW_SMRv9_B.INPUT_4_1_1[1];
    tmp_a[6] = PW_SMRv9_B.INPUT_4_1_1[2];
    tmp_a[7] = PW_SMRv9_B.INPUT_4_1_1[3];
    tmp_b[2] = 8;
    tmp_a[8] = PW_SMRv9_B.INPUT_8_1_1[0];
    tmp_a[9] = PW_SMRv9_B.INPUT_8_1_1[1];
    tmp_a[10] = PW_SMRv9_B.INPUT_8_1_1[2];
    tmp_a[11] = PW_SMRv9_B.INPUT_8_1_1[3];
    tmp_b[3] = 12;
    tmp_a[12] = PW_SMRv9_B.INPUT_2_1_1[0];
    tmp_a[13] = PW_SMRv9_B.INPUT_2_1_1[1];
    tmp_a[14] = PW_SMRv9_B.INPUT_2_1_1[2];
    tmp_a[15] = PW_SMRv9_B.INPUT_2_1_1[3];
    tmp_b[4] = 16;
    tmp_a[16] = PW_SMRv9_B.INPUT_1_1_1[0];
    tmp_a[17] = PW_SMRv9_B.INPUT_1_1_1[1];
    tmp_a[18] = PW_SMRv9_B.INPUT_1_1_1[2];
    tmp_a[19] = PW_SMRv9_B.INPUT_1_1_1[3];
    tmp_b[5] = 20;
    tmp_a[20] = PW_SMRv9_B.INPUT_6_1_1[0];
    tmp_a[21] = PW_SMRv9_B.INPUT_6_1_1[1];
    tmp_a[22] = PW_SMRv9_B.INPUT_6_1_1[2];
    tmp_a[23] = PW_SMRv9_B.INPUT_6_1_1[3];
    tmp_b[6] = 24;
    tmp_a[24] = PW_SMRv9_B.INPUT_5_1_1[0];
    tmp_a[25] = PW_SMRv9_B.INPUT_5_1_1[1];
    tmp_a[26] = PW_SMRv9_B.INPUT_5_1_1[2];
    tmp_a[27] = PW_SMRv9_B.INPUT_5_1_1[3];
    tmp_b[7] = 28;
    tmp_a[28] = PW_SMRv9_B.INPUT_3_1_1[0];
    tmp_a[29] = PW_SMRv9_B.INPUT_3_1_1[1];
    tmp_a[30] = PW_SMRv9_B.INPUT_3_1_1[2];
    tmp_a[31] = PW_SMRv9_B.INPUT_3_1_1[3];
    tmp_b[8] = 32;
    std::memcpy(&tmp_a[32], &PW_SMRv9_B.STATE_1[0], 423U * sizeof(real_T));
    tmp_b[9] = 455;
    simulationData->mData->mInputValues.mN = 455;
    simulationData->mData->mInputValues.mX = &tmp_a[0];
    simulationData->mData->mInputOffsets.mN = 10;
    simulationData->mData->mInputOffsets.mX = &tmp_b[0];
    simulationData->mData->mOutputs.mN = 1;

    /* SimscapeExecutionBlock: '<S287>/OUTPUT_1_1' */
    simulationData->mData->mOutputs.mX = &PW_SMRv9_B.OUTPUT_1_1;

    /* SimscapeExecutionBlock: '<S287>/OUTPUT_1_1' */
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    time_a = (((PW_SMRv9_M->Timing.clockTick1+PW_SMRv9_M->Timing.clockTickH1*
                4294967296.0)) * 0.01);
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_a;
    isHit_4 = 0;
    simulationData->mData->mSampleHits.mN = 1;
    simulationData->mData->mSampleHits.mX = &isHit_4;
    simulationData->mData->mIsFundamentalSampleHit = true;
    simulator = static_cast<NeslSimulator *>(PW_SMRv9_DW.OUTPUT_1_1_Simulator);
    diagnosticManager = static_cast<NeuDiagnosticManager *>
      (PW_SMRv9_DW.OUTPUT_1_1_DiagMgr);
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    k = ne_simulator_method(simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (k != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(PW_SMRv9_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(PW_SMRv9_M, msg);
      }
    }

    /* Reshape: '<S145>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_gu = PW_SMRv9_B.OUTPUT_1_1;

    /* Reshape: '<S167>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_pv = PW_SMRv9_B.OUTPUT_1_0[69];

    /* Reshape: '<S168>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_kg = PW_SMRv9_B.OUTPUT_1_0[66];

    /* Reshape: '<S169>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_mh = PW_SMRv9_B.OUTPUT_1_0[77];

    /* Reshape: '<S170>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_az = PW_SMRv9_B.OUTPUT_1_0[56];

    /* Reshape: '<S171>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_ch = PW_SMRv9_B.OUTPUT_1_4[0];

    /* Reshape: '<S172>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_eh = PW_SMRv9_B.OUTPUT_1_4[4];

    /* Reshape: '<S173>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_a1 = PW_SMRv9_B.OUTPUT_1_4[3];

    /* Reshape: '<S174>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_aq = PW_SMRv9_B.OUTPUT_1_0[58];

    /* Reshape: '<S175>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_d1 = PW_SMRv9_B.OUTPUT_1_0[57];

    /* Reshape: '<S210>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_ik = PW_SMRv9_B.OUTPUT_1_0[64];

    /* Reshape: '<S176>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_ou = PW_SMRv9_B.OUTPUT_1_0[42];

    /* Sum: '<S91>/Add' incorporates:
     *  Constant: '<S91>/Constant'
     */
    PW_SMRv9_B.Add_m = PW_SMRv9_cal->Constant_Value_c;

    /* Gain: '<S382>/Proportional Gain' */
    PW_SMRv9_B.ProportionalGain_n = PW_SMRv9_cal->DiscretePIDController_P_o *
      PW_SMRv9_B.Add_m;

    /* DiscreteIntegrator: '<S377>/Integrator' */
    PW_SMRv9_B.Integrator_o = PW_SMRv9_DW.Integrator_DSTATE_c;

    /* Sum: '<S386>/Sum' */
    PW_SMRv9_B.Sum_o = PW_SMRv9_B.ProportionalGain_n + PW_SMRv9_B.Integrator_o;

    /* DeadZone: '<S370>/DeadZone' */
    if (PW_SMRv9_B.Sum_o > PW_SMRv9_cal->DiscretePIDController_UpperSa_p) {
      /* DeadZone: '<S370>/DeadZone' */
      PW_SMRv9_B.DeadZone_k = PW_SMRv9_B.Sum_o -
        PW_SMRv9_cal->DiscretePIDController_UpperSa_p;
    } else if (PW_SMRv9_B.Sum_o >= PW_SMRv9_cal->DiscretePIDController_LowerS_bz)
    {
      /* DeadZone: '<S370>/DeadZone' */
      PW_SMRv9_B.DeadZone_k = 0.0;
    } else {
      /* DeadZone: '<S370>/DeadZone' */
      PW_SMRv9_B.DeadZone_k = PW_SMRv9_B.Sum_o -
        PW_SMRv9_cal->DiscretePIDController_LowerS_bz;
    }

    /* End of DeadZone: '<S370>/DeadZone' */

    /* RelationalOperator: '<S368>/Relational Operator' incorporates:
     *  Constant: '<S368>/Clamping_zero'
     */
    PW_SMRv9_B.RelationalOperator_b = (PW_SMRv9_cal->Clamping_zero_Value_b !=
      PW_SMRv9_B.DeadZone_k);

    /* RelationalOperator: '<S368>/fix for DT propagation issue' incorporates:
     *  Constant: '<S368>/Clamping_zero'
     */
    PW_SMRv9_B.fixforDTpropagationissue_h = (PW_SMRv9_B.DeadZone_k >
      PW_SMRv9_cal->Clamping_zero_Value_b);

    /* Switch: '<S368>/Switch1' */
    if (PW_SMRv9_B.fixforDTpropagationissue_h) {
      /* Switch: '<S368>/Switch1' incorporates:
       *  Constant: '<S368>/Constant'
       */
      PW_SMRv9_B.Switch1_a2 = PW_SMRv9_cal->Constant_Value_jr;
    } else {
      /* Switch: '<S368>/Switch1' incorporates:
       *  Constant: '<S368>/Constant2'
       */
      PW_SMRv9_B.Switch1_a2 = PW_SMRv9_cal->Constant2_Value_bc;
    }

    /* End of Switch: '<S368>/Switch1' */

    /* Gain: '<S374>/Integral Gain' */
    PW_SMRv9_B.IntegralGain_mz = PW_SMRv9_cal->DiscretePIDController_I_l2 *
      PW_SMRv9_B.Add_m;

    /* RelationalOperator: '<S368>/fix for DT propagation issue1' incorporates:
     *  Constant: '<S368>/Clamping_zero'
     */
    PW_SMRv9_B.fixforDTpropagationissue1_ez = (PW_SMRv9_B.IntegralGain_mz >
      PW_SMRv9_cal->Clamping_zero_Value_b);

    /* Switch: '<S368>/Switch2' */
    if (PW_SMRv9_B.fixforDTpropagationissue1_ez) {
      /* Switch: '<S368>/Switch2' incorporates:
       *  Constant: '<S368>/Constant3'
       */
      PW_SMRv9_B.Switch2_m = PW_SMRv9_cal->Constant3_Value_l;
    } else {
      /* Switch: '<S368>/Switch2' incorporates:
       *  Constant: '<S368>/Constant4'
       */
      PW_SMRv9_B.Switch2_m = PW_SMRv9_cal->Constant4_Value_ou;
    }

    /* End of Switch: '<S368>/Switch2' */

    /* RelationalOperator: '<S368>/Equal1' */
    PW_SMRv9_B.Equal1_n = (PW_SMRv9_B.Switch1_a2 == PW_SMRv9_B.Switch2_m);

    /* Logic: '<S368>/AND3' */
    PW_SMRv9_B.AND3_j = (PW_SMRv9_B.RelationalOperator_b && PW_SMRv9_B.Equal1_n);

    /* Switch: '<S368>/Switch' */
    if (PW_SMRv9_B.AND3_j) {
      /* Switch: '<S368>/Switch' incorporates:
       *  Constant: '<S368>/Constant1'
       */
      PW_SMRv9_B.Switch_jb = PW_SMRv9_cal->Constant1_Value_h;
    } else {
      /* Switch: '<S368>/Switch' */
      PW_SMRv9_B.Switch_jb = PW_SMRv9_B.IntegralGain_mz;
    }

    /* End of Switch: '<S368>/Switch' */

    /* Saturate: '<S384>/Saturation' */
    u0 = PW_SMRv9_B.Sum_o;
    u1 = PW_SMRv9_cal->DiscretePIDController_LowerS_bz;
    u2 = PW_SMRv9_cal->DiscretePIDController_UpperSa_p;
    if (u0 > u2) {
      /* Saturate: '<S384>/Saturation' */
      PW_SMRv9_B.Saturation_f = u2;
    } else if (u0 < u1) {
      /* Saturate: '<S384>/Saturation' */
      PW_SMRv9_B.Saturation_f = u1;
    } else {
      /* Saturate: '<S384>/Saturation' */
      PW_SMRv9_B.Saturation_f = u0;
    }

    /* End of Saturate: '<S384>/Saturation' */

    /* Sum: '<S91>/Subtract5' incorporates:
     *  Constant: '<S91>/Constant7'
     */
    PW_SMRv9_B.Subtract5 = PW_SMRv9_cal->Constant7_Value_g -
      PW_SMRv9_B.RESHAPE_ou;

    /* Gain: '<S432>/Proportional Gain' */
    PW_SMRv9_B.ProportionalGain_e3 = PW_SMRv9_cal->DiscretePIDController1_P *
      PW_SMRv9_B.Subtract5;

    /* DiscreteIntegrator: '<S427>/Integrator' */
    PW_SMRv9_B.Integrator_i = PW_SMRv9_DW.Integrator_DSTATE_k;

    /* Sum: '<S436>/Sum' */
    PW_SMRv9_B.Sum_oc = PW_SMRv9_B.ProportionalGain_e3 + PW_SMRv9_B.Integrator_i;

    /* DeadZone: '<S420>/DeadZone' */
    if (PW_SMRv9_B.Sum_oc > PW_SMRv9_cal->DiscretePIDController1_UpperSat) {
      /* DeadZone: '<S420>/DeadZone' */
      PW_SMRv9_B.DeadZone_n = PW_SMRv9_B.Sum_oc -
        PW_SMRv9_cal->DiscretePIDController1_UpperSat;
    } else if (PW_SMRv9_B.Sum_oc >=
               PW_SMRv9_cal->DiscretePIDController1_LowerSat) {
      /* DeadZone: '<S420>/DeadZone' */
      PW_SMRv9_B.DeadZone_n = 0.0;
    } else {
      /* DeadZone: '<S420>/DeadZone' */
      PW_SMRv9_B.DeadZone_n = PW_SMRv9_B.Sum_oc -
        PW_SMRv9_cal->DiscretePIDController1_LowerSat;
    }

    /* End of DeadZone: '<S420>/DeadZone' */

    /* RelationalOperator: '<S418>/Relational Operator' incorporates:
     *  Constant: '<S418>/Clamping_zero'
     */
    PW_SMRv9_B.RelationalOperator_j = (PW_SMRv9_cal->Clamping_zero_Value_g !=
      PW_SMRv9_B.DeadZone_n);

    /* RelationalOperator: '<S418>/fix for DT propagation issue' incorporates:
     *  Constant: '<S418>/Clamping_zero'
     */
    PW_SMRv9_B.fixforDTpropagationissue_i = (PW_SMRv9_B.DeadZone_n >
      PW_SMRv9_cal->Clamping_zero_Value_g);

    /* Switch: '<S418>/Switch1' */
    if (PW_SMRv9_B.fixforDTpropagationissue_i) {
      /* Switch: '<S418>/Switch1' incorporates:
       *  Constant: '<S418>/Constant'
       */
      PW_SMRv9_B.Switch1_f = PW_SMRv9_cal->Constant_Value_p;
    } else {
      /* Switch: '<S418>/Switch1' incorporates:
       *  Constant: '<S418>/Constant2'
       */
      PW_SMRv9_B.Switch1_f = PW_SMRv9_cal->Constant2_Value_a;
    }

    /* End of Switch: '<S418>/Switch1' */

    /* Gain: '<S424>/Integral Gain' */
    PW_SMRv9_B.IntegralGain_i = PW_SMRv9_cal->DiscretePIDController1_I *
      PW_SMRv9_B.Subtract5;

    /* RelationalOperator: '<S418>/fix for DT propagation issue1' incorporates:
     *  Constant: '<S418>/Clamping_zero'
     */
    PW_SMRv9_B.fixforDTpropagationissue1_f = (PW_SMRv9_B.IntegralGain_i >
      PW_SMRv9_cal->Clamping_zero_Value_g);

    /* Switch: '<S418>/Switch2' */
    if (PW_SMRv9_B.fixforDTpropagationissue1_f) {
      /* Switch: '<S418>/Switch2' incorporates:
       *  Constant: '<S418>/Constant3'
       */
      PW_SMRv9_B.Switch2_d = PW_SMRv9_cal->Constant3_Value_c3;
    } else {
      /* Switch: '<S418>/Switch2' incorporates:
       *  Constant: '<S418>/Constant4'
       */
      PW_SMRv9_B.Switch2_d = PW_SMRv9_cal->Constant4_Value_d;
    }

    /* End of Switch: '<S418>/Switch2' */

    /* RelationalOperator: '<S418>/Equal1' */
    PW_SMRv9_B.Equal1_h = (PW_SMRv9_B.Switch1_f == PW_SMRv9_B.Switch2_d);

    /* Logic: '<S418>/AND3' */
    PW_SMRv9_B.AND3_a = (PW_SMRv9_B.RelationalOperator_j && PW_SMRv9_B.Equal1_h);

    /* Switch: '<S418>/Switch' */
    if (PW_SMRv9_B.AND3_a) {
      /* Switch: '<S418>/Switch' incorporates:
       *  Constant: '<S418>/Constant1'
       */
      PW_SMRv9_B.Switch_m = PW_SMRv9_cal->Constant1_Value_e;
    } else {
      /* Switch: '<S418>/Switch' */
      PW_SMRv9_B.Switch_m = PW_SMRv9_B.IntegralGain_i;
    }

    /* End of Switch: '<S418>/Switch' */

    /* Saturate: '<S434>/Saturation' */
    u0 = PW_SMRv9_B.Sum_oc;
    u1 = PW_SMRv9_cal->DiscretePIDController1_LowerSat;
    u2 = PW_SMRv9_cal->DiscretePIDController1_UpperSat;
    if (u0 > u2) {
      /* Saturate: '<S434>/Saturation' */
      PW_SMRv9_B.Saturation_l = u2;
    } else if (u0 < u1) {
      /* Saturate: '<S434>/Saturation' */
      PW_SMRv9_B.Saturation_l = u1;
    } else {
      /* Saturate: '<S434>/Saturation' */
      PW_SMRv9_B.Saturation_l = u0;
    }

    /* End of Saturate: '<S434>/Saturation' */

    /* MinMax: '<S91>/MinMax' */
    u0 = PW_SMRv9_B.Saturation_l;
    u1 = PW_SMRv9_B.Saturation_f;
    if ((u0 <= u1) || rtIsNaN(u1)) {
      u1 = u0;
    }

    /* MinMax: '<S91>/MinMax' */
    PW_SMRv9_B.MinMax_a = u1;

    /* Saturate: '<S91>/Saturation2' */
    u0 = PW_SMRv9_B.MinMax_a;
    u1 = PW_SMRv9_cal->Saturation2_LowerSat;
    u2 = PW_SMRv9_cal->Saturation2_UpperSat;
    if (u0 > u2) {
      /* Saturate: '<S91>/Saturation2' */
      PW_SMRv9_B.Saturation2 = u2;
    } else if (u0 < u1) {
      /* Saturate: '<S91>/Saturation2' */
      PW_SMRv9_B.Saturation2 = u1;
    } else {
      /* Saturate: '<S91>/Saturation2' */
      PW_SMRv9_B.Saturation2 = u0;
    }

    /* End of Saturate: '<S91>/Saturation2' */

    /* Reshape: '<S178>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_m2 = PW_SMRv9_B.OUTPUT_1_0[55];

    /* Reshape: '<S179>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_mw = PW_SMRv9_B.OUTPUT_1_4[1];

    /* Reshape: '<S180>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_hg = PW_SMRv9_B.OUTPUT_1_0[60];

    /* Reshape: '<S181>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_pp = PW_SMRv9_B.OUTPUT_1_4[2];

    /* Reshape: '<S182>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_ae = PW_SMRv9_B.OUTPUT_1_0[59];

    /* Reshape: '<S183>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_ft = PW_SMRv9_B.OUTPUT_1_0[40];

    /* Reshape: '<S184>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_l = PW_SMRv9_B.OUTPUT_1_0[41];

    /* Reshape: '<S177>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_jt = PW_SMRv9_B.OUTPUT_1_0[21];

    /* Reshape: '<S187>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_ikc[0] = PW_SMRv9_B.OUTPUT_1_0[6];
    PW_SMRv9_B.RESHAPE_ikc[1] = PW_SMRv9_B.OUTPUT_1_0[7];
    PW_SMRv9_B.RESHAPE_ikc[2] = PW_SMRv9_B.OUTPUT_1_0[8];

    /* Reshape: '<S189>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_nd[0] = PW_SMRv9_B.OUTPUT_1_0[9];
    PW_SMRv9_B.RESHAPE_nd[1] = PW_SMRv9_B.OUTPUT_1_0[10];
    PW_SMRv9_B.RESHAPE_nd[2] = PW_SMRv9_B.OUTPUT_1_0[11];

    /* Reshape: '<S190>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_i4[0] = PW_SMRv9_B.OUTPUT_1_0[0];
    PW_SMRv9_B.RESHAPE_i4[1] = PW_SMRv9_B.OUTPUT_1_0[1];
    PW_SMRv9_B.RESHAPE_i4[2] = PW_SMRv9_B.OUTPUT_1_0[2];

    /* Reshape: '<S191>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_nu[0] = PW_SMRv9_B.OUTPUT_1_0[3];
    PW_SMRv9_B.RESHAPE_nu[1] = PW_SMRv9_B.OUTPUT_1_0[4];
    PW_SMRv9_B.RESHAPE_nu[2] = PW_SMRv9_B.OUTPUT_1_0[5];

    /* Reshape: '<S192>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_iy = PW_SMRv9_B.OUTPUT_1_0[25];

    /* Reshape: '<S193>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_my = PW_SMRv9_B.OUTPUT_1_0[15];

    /* Reshape: '<S194>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_br = PW_SMRv9_B.OUTPUT_1_0[16];

    /* Reshape: '<S221>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_kh = PW_SMRv9_B.OUTPUT_1_0[74];

    /* Reshape: '<S197>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_f2 = PW_SMRv9_B.OUTPUT_1_0[17];

    /* Reshape: '<S198>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_il = PW_SMRv9_B.OUTPUT_1_0[18];

    /* Reshape: '<S200>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_c0 = PW_SMRv9_B.OUTPUT_1_0[19];

    /* Sum: '<Root>/Subtract2' */
    PW_SMRv9_B.Subtract2 = PW_SMRv9_B.RESHAPE_il - PW_SMRv9_B.RESHAPE_c0;

    /* Reshape: '<S202>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_kri = PW_SMRv9_B.OUTPUT_1_0[24];

    /* Reshape: '<S203>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_ps = PW_SMRv9_B.OUTPUT_1_0[22];

    /* Sum: '<Root>/Subtract4' */
    PW_SMRv9_B.Subtract4 = PW_SMRv9_B.RESHAPE_ps - PW_SMRv9_B.RESHAPE_kri;

    /* Reshape: '<S199>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_i2 = PW_SMRv9_B.OUTPUT_1_0[29];

    /* Reshape: '<S204>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_h4 = PW_SMRv9_B.OUTPUT_1_0[23];

    /* Reshape: '<S205>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_eb = PW_SMRv9_B.OUTPUT_1_0[46];

    /* Reshape: '<S207>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_et = PW_SMRv9_B.OUTPUT_1_0[48];

    /* Reshape: '<S208>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_dh = PW_SMRv9_B.OUTPUT_1_3[0];

    /* Reshape: '<S209>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_ne = PW_SMRv9_B.OUTPUT_1_3[4];

    /* Reshape: '<S211>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_cm = PW_SMRv9_B.OUTPUT_1_3[3];

    /* Reshape: '<S212>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_pw = PW_SMRv9_B.OUTPUT_1_0[50];

    /* Reshape: '<S213>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_fl = PW_SMRv9_B.OUTPUT_1_0[49];

    /* Reshape: '<S214>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_al = PW_SMRv9_B.OUTPUT_1_0[47];

    /* Reshape: '<S223>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_fx = PW_SMRv9_B.OUTPUT_1_0[14];

    /* Reshape: '<S215>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_e3 = PW_SMRv9_B.OUTPUT_1_3[1];

    /* Reshape: '<S216>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_e2 = PW_SMRv9_B.OUTPUT_1_0[52];

    /* Reshape: '<S217>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_jfz = PW_SMRv9_B.OUTPUT_1_3[2];

    /* Reshape: '<S218>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_a0 = PW_SMRv9_B.OUTPUT_1_0[51];

    /* Reshape: '<S220>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_bi = PW_SMRv9_B.OUTPUT_1_0[30];

    /* Reshape: '<S222>/RESHAPE' */
    PW_SMRv9_B.RESHAPE_ko = PW_SMRv9_B.OUTPUT_1_0[31];

    /* Step: '<Root>/Step' */
    u1 = PW_SMRv9_M->Timing.t[0];
    if (u1 < PW_SMRv9_cal->Step_Time) {
      /* Step: '<Root>/Step' */
      PW_SMRv9_B.Step = PW_SMRv9_cal->Step_Y0;
    } else {
      /* Step: '<Root>/Step' */
      PW_SMRv9_B.Step = PW_SMRv9_cal->Step_YFinal;
    }

    /* End of Step: '<Root>/Step' */

    /* Step: '<Root>/Step1' */
    u1 = PW_SMRv9_M->Timing.t[0];
    if (u1 < PW_SMRv9_cal->Step1_Time) {
      /* Step: '<Root>/Step1' */
      PW_SMRv9_B.Step1 = PW_SMRv9_cal->Step1_Y0;
    } else {
      /* Step: '<Root>/Step1' */
      PW_SMRv9_B.Step1 = PW_SMRv9_cal->Step1_YFinal;
    }

    /* End of Step: '<Root>/Step1' */
  }

  {
    NeslSimulationData *simulationData;
    NeslSimulator *simulator;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    real_T tmp_0[32];
    real_T denAccum;
    real_T time;
    int32_T k;
    int_T tmp_1[9];
    boolean_T tmp;

    /* Update for DiscreteTransferFcn: '<S90>/Discrete Transfer Fcn' incorporates:
     *  Constant: '<S90>/Constant'
     */
    denAccum = PW_SMRv9_cal->Constant_Value_j;
    denAccum -= PW_SMRv9_cal->DiscreteTransferFcn_DenCoef[1] *
      PW_SMRv9_DW.DiscreteTransferFcn_states;
    denAccum /= PW_SMRv9_cal->DiscreteTransferFcn_DenCoef[0];
    PW_SMRv9_DW.DiscreteTransferFcn_states = denAccum;

    /* Update for DiscreteTransferFcn: '<S91>/Discrete Transfer Fcn3' */
    denAccum = PW_SMRv9_B.Saturation2;
    denAccum -= PW_SMRv9_cal->DiscreteTransferFcn3_DenCoef[1] *
      PW_SMRv9_DW.DiscreteTransferFcn3_states;
    denAccum /= PW_SMRv9_cal->DiscreteTransferFcn3_DenCoef[0];
    PW_SMRv9_DW.DiscreteTransferFcn3_states = denAccum;

    /* Update for DiscreteTransferFcn: '<S92>/Discrete Transfer Fcn' */
    denAccum = PW_SMRv9_B.Saturation_c;
    denAccum -= PW_SMRv9_cal->DiscreteTransferFcn_DenCoef_n[1] *
      PW_SMRv9_DW.DiscreteTransferFcn_states_m;
    denAccum /= PW_SMRv9_cal->DiscreteTransferFcn_DenCoef_n[0];
    PW_SMRv9_DW.DiscreteTransferFcn_states_m = denAccum;

    /* Update for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn' */
    denAccum = PW_SMRv9_B.Saturation_n;
    denAccum -= PW_SMRv9_cal->DiscreteTransferFcn_DenCoef_o[1] *
      PW_SMRv9_DW.DiscreteTransferFcn_states_g;
    denAccum /= PW_SMRv9_cal->DiscreteTransferFcn_DenCoef_o[0];
    PW_SMRv9_DW.DiscreteTransferFcn_states_g = denAccum;

    /* Update for DiscreteTransferFcn: '<S84>/Discrete Transfer Fcn' */
    denAccum = PW_SMRv9_B.Saturation_h;
    denAccum -= PW_SMRv9_cal->DiscreteTransferFcn_DenCoef_h[1] *
      PW_SMRv9_DW.DiscreteTransferFcn_states_h;
    denAccum /= PW_SMRv9_cal->DiscreteTransferFcn_DenCoef_h[0];
    PW_SMRv9_DW.DiscreteTransferFcn_states_h = denAccum;

    /* Update for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn3' incorporates:
     *  Constant: '<Root>/Constant7'
     */
    denAccum = PW_SMRv9_cal->Constant7_Value;
    denAccum -= PW_SMRv9_cal->DiscreteTransferFcn3_DenCoef_o[1] *
      PW_SMRv9_DW.DiscreteTransferFcn3_states_d;
    denAccum /= PW_SMRv9_cal->DiscreteTransferFcn3_DenCoef_o[0];
    PW_SMRv9_DW.DiscreteTransferFcn3_states_d = denAccum;

    /* Update for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn1' */
    denAccum = PW_SMRv9_B.Switch1;
    denAccum -= PW_SMRv9_cal->DiscreteTransferFcn1_DenCoef[1] *
      PW_SMRv9_DW.DiscreteTransferFcn1_states;
    denAccum /= PW_SMRv9_cal->DiscreteTransferFcn1_DenCoef[0];
    PW_SMRv9_DW.DiscreteTransferFcn1_states = denAccum;

    /* Update for SimscapeExecutionBlock: '<S287>/STATE_1' */
    simulationData = static_cast<NeslSimulationData *>
      (PW_SMRv9_DW.STATE_1_SimData);
    time = PW_SMRv9_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 302;
    simulationData->mData->mDiscStates.mX = &PW_SMRv9_DW.STATE_1_Discrete[0];
    simulationData->mData->mModeVector.mN = 163;
    simulationData->mData->mModeVector.mX = &PW_SMRv9_DW.STATE_1_Modes[0];
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
    tmp_0[0] = PW_SMRv9_B.INPUT_7_1_1[0];
    tmp_0[1] = PW_SMRv9_B.INPUT_7_1_1[1];
    tmp_0[2] = PW_SMRv9_B.INPUT_7_1_1[2];
    tmp_0[3] = PW_SMRv9_B.INPUT_7_1_1[3];
    tmp_1[1] = 4;
    tmp_0[4] = PW_SMRv9_B.INPUT_4_1_1[0];
    tmp_0[5] = PW_SMRv9_B.INPUT_4_1_1[1];
    tmp_0[6] = PW_SMRv9_B.INPUT_4_1_1[2];
    tmp_0[7] = PW_SMRv9_B.INPUT_4_1_1[3];
    tmp_1[2] = 8;
    tmp_0[8] = PW_SMRv9_B.INPUT_8_1_1[0];
    tmp_0[9] = PW_SMRv9_B.INPUT_8_1_1[1];
    tmp_0[10] = PW_SMRv9_B.INPUT_8_1_1[2];
    tmp_0[11] = PW_SMRv9_B.INPUT_8_1_1[3];
    tmp_1[3] = 12;
    tmp_0[12] = PW_SMRv9_B.INPUT_2_1_1[0];
    tmp_0[13] = PW_SMRv9_B.INPUT_2_1_1[1];
    tmp_0[14] = PW_SMRv9_B.INPUT_2_1_1[2];
    tmp_0[15] = PW_SMRv9_B.INPUT_2_1_1[3];
    tmp_1[4] = 16;
    tmp_0[16] = PW_SMRv9_B.INPUT_1_1_1[0];
    tmp_0[17] = PW_SMRv9_B.INPUT_1_1_1[1];
    tmp_0[18] = PW_SMRv9_B.INPUT_1_1_1[2];
    tmp_0[19] = PW_SMRv9_B.INPUT_1_1_1[3];
    tmp_1[5] = 20;
    tmp_0[20] = PW_SMRv9_B.INPUT_6_1_1[0];
    tmp_0[21] = PW_SMRv9_B.INPUT_6_1_1[1];
    tmp_0[22] = PW_SMRv9_B.INPUT_6_1_1[2];
    tmp_0[23] = PW_SMRv9_B.INPUT_6_1_1[3];
    tmp_1[6] = 24;
    tmp_0[24] = PW_SMRv9_B.INPUT_5_1_1[0];
    tmp_0[25] = PW_SMRv9_B.INPUT_5_1_1[1];
    tmp_0[26] = PW_SMRv9_B.INPUT_5_1_1[2];
    tmp_0[27] = PW_SMRv9_B.INPUT_5_1_1[3];
    tmp_1[7] = 28;
    tmp_0[28] = PW_SMRv9_B.INPUT_3_1_1[0];
    tmp_0[29] = PW_SMRv9_B.INPUT_3_1_1[1];
    tmp_0[30] = PW_SMRv9_B.INPUT_3_1_1[2];
    tmp_0[31] = PW_SMRv9_B.INPUT_3_1_1[3];
    tmp_1[8] = 32;
    simulationData->mData->mInputValues.mN = 32;
    simulationData->mData->mInputValues.mX = &tmp_0[0];
    simulationData->mData->mInputOffsets.mN = 9;
    simulationData->mData->mInputOffsets.mX = &tmp_1[0];
    simulator = static_cast<NeslSimulator *>(PW_SMRv9_DW.STATE_1_Simulator);
    diagnosticManager = static_cast<NeuDiagnosticManager *>
      (PW_SMRv9_DW.STATE_1_DiagMgr);
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    k = ne_simulator_method(simulator, NESL_SIM_UPDATE, simulationData,
      diagnosticManager);
    if (k != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(PW_SMRv9_M));
      if (tmp) {
        char *msg;
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(PW_SMRv9_M, msg);
      }
    }

    /* End of Update for SimscapeExecutionBlock: '<S287>/STATE_1' */

    /* Update for RandomNumber: '<S1>/White Noise' */
    PW_SMRv9_DW.NextOutput = rt_nrand_Upu32_Yd_f_pw_snf(&PW_SMRv9_DW.RandSeed) *
      PW_SMRv9_cal->WhiteNoise_StdDev + PW_SMRv9_cal->WhiteNoise_Mean;

    /* Update for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn2' */
    denAccum = PW_SMRv9_B.Gain;
    denAccum -= PW_SMRv9_cal->DiscreteTransferFcn2_DenCoef[1] *
      PW_SMRv9_DW.DiscreteTransferFcn2_states;
    denAccum /= PW_SMRv9_cal->DiscreteTransferFcn2_DenCoef[0];
    PW_SMRv9_DW.DiscreteTransferFcn2_states = denAccum;

    /* Update for DiscreteIntegrator: '<S126>/Integrator' */
    PW_SMRv9_DW.Integrator_DSTATE += PW_SMRv9_cal->Integrator_gainval *
      PW_SMRv9_B.Switch_e;

    /* Update for DiscreteIntegrator: '<S262>/Integrator' */
    PW_SMRv9_DW.Integrator_DSTATE_h += PW_SMRv9_cal->Integrator_gainval_h *
      PW_SMRv9_B.Switch_j;

    /* Update for DiscreteIntegrator: '<S480>/Integrator' */
    PW_SMRv9_DW.Integrator_DSTATE_b += PW_SMRv9_cal->Integrator_gainval_m *
      PW_SMRv9_B.Switch_ed;

    /* Update for DiscreteIntegrator: '<S475>/Filter' */
    PW_SMRv9_DW.Filter_DSTATE += PW_SMRv9_cal->Filter_gainval *
      PW_SMRv9_B.FilterCoefficient;

    /* Update for DiscreteTransferFcn: '<S90>/Discrete Transfer Fcn1' */
    denAccum = PW_SMRv9_B.Abs_m;
    denAccum -= PW_SMRv9_cal->DiscreteTransferFcn1_DenCoef_h[1] *
      PW_SMRv9_DW.DiscreteTransferFcn1_states_p;
    denAccum /= PW_SMRv9_cal->DiscreteTransferFcn1_DenCoef_h[0];
    PW_SMRv9_DW.DiscreteTransferFcn1_states_p = denAccum;

    /* Update for DiscreteIntegrator: '<S323>/Integrator' */
    PW_SMRv9_DW.Integrator_DSTATE_j += PW_SMRv9_cal->Integrator_gainval_o *
      PW_SMRv9_B.Switch_c;

    /* Update for DiscreteIntegrator: '<S377>/Integrator' */
    PW_SMRv9_DW.Integrator_DSTATE_c += PW_SMRv9_cal->Integrator_gainval_mx *
      PW_SMRv9_B.Switch_jb;

    /* Update for DiscreteIntegrator: '<S427>/Integrator' */
    PW_SMRv9_DW.Integrator_DSTATE_k += PW_SMRv9_cal->Integrator_gainval_b *
      PW_SMRv9_B.Switch_m;
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++PW_SMRv9_M->Timing.clockTick0)) {
    ++PW_SMRv9_M->Timing.clockTickH0;
  }

  PW_SMRv9_M->Timing.t[0] = PW_SMRv9_M->Timing.clockTick0 *
    PW_SMRv9_M->Timing.stepSize0 + PW_SMRv9_M->Timing.clockTickH0 *
    PW_SMRv9_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.01s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.01, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    PW_SMRv9_M->Timing.clockTick1++;
    if (!PW_SMRv9_M->Timing.clockTick1) {
      PW_SMRv9_M->Timing.clockTickH1++;
    }
  }
}

/* Model initialize function */
void PW_SMRv9_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* non-finite (run-time) assignments */
  PW_SMRv9_P.DiscretePIDController_LowerSa_c = rtMinusInf;
  PW_SMRv9_P.DiscretePIDController_UpperSa_j = rtInf;
  PW_SMRv9_P.Saturation_UpperSat_d = rtInf;

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&PW_SMRv9_M->solverInfo,
                          &PW_SMRv9_M->Timing.simTimeStep);
    rtsiSetTPtr(&PW_SMRv9_M->solverInfo, &rtmGetTPtr(PW_SMRv9_M));
    rtsiSetStepSizePtr(&PW_SMRv9_M->solverInfo, &PW_SMRv9_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&PW_SMRv9_M->solverInfo, (&rtmGetErrorStatus
      (PW_SMRv9_M)));
    rtsiSetRTModelPtr(&PW_SMRv9_M->solverInfo, PW_SMRv9_M);
  }

  rtsiSetSimTimeStep(&PW_SMRv9_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetIsMinorTimeStepWithModeChange(&PW_SMRv9_M->solverInfo, false);
  rtsiSetSolverName(&PW_SMRv9_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(PW_SMRv9_M, &PW_SMRv9_M->Timing.tArray[0]);
  PW_SMRv9_M->Timing.stepSize0 = 0.01;

  /* block I/O */
  (void) std::memset((static_cast<void *>(&PW_SMRv9_B)), 0,
                     sizeof(B_PW_SMRv9_T));

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&PW_SMRv9_DW), 0,
                     sizeof(DW_PW_SMRv9_T));

  {
    NeModelParameters modelParameters;
    NeModelParameters modelParameters_0;
    NeModelParameters modelParameters_1;
    NeModelParameters modelParameters_2;
    NeModelParameters modelParameters_3;
    NeModelParameters modelParameters_4;
    NeslSimulationData *tmp;
    NeslSimulator *simulator;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    char *msg;
    real_T tmp_0;
    int32_T tmp_1;
    boolean_T zcDisabled;

    /* Start for SimscapeExecutionBlock: '<S287>/STATE_1' */
    simulator = nesl_lease_simulator("PW_SMRv9/Solver Configuration_1", 0, 0);
    PW_SMRv9_DW.STATE_1_Simulator = (void *)simulator;
    zcDisabled = pointer_is_null(PW_SMRv9_DW.STATE_1_Simulator);
    if (zcDisabled) {
      PW_SMRv9_4b22eff7_1_gateway();
      simulator = nesl_lease_simulator("PW_SMRv9/Solver Configuration_1", 0, 0);
      PW_SMRv9_DW.STATE_1_Simulator = (void *)simulator;
    }

    tmp = nesl_create_simulation_data();
    PW_SMRv9_DW.STATE_1_SimData = (void *)tmp;
    diagnosticManager = rtw_create_diagnostics();
    PW_SMRv9_DW.STATE_1_DiagMgr = (void *)diagnosticManager;
    modelParameters.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters.mSolverAbsTol = 0.001;
    modelParameters.mSolverRelTol = 0.001;
    modelParameters.mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO;
    modelParameters.mStartTime = 0.0;
    modelParameters.mLoadInitialState = false;
    modelParameters.mUseSimState = false;
    modelParameters.mLinTrimCompile = false;
    modelParameters.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters.mRTWModifiedTimeStamp = 7.13466668E+8;
    tmp_0 = 0.001;
    modelParameters.mSolverTolerance = tmp_0;
    tmp_0 = 0.01;
    modelParameters.mFixedStepSize = tmp_0;
    zcDisabled = false;
    modelParameters.mVariableStepSolver = zcDisabled;
    zcDisabled = false;
    modelParameters.mIsUsingODEN = zcDisabled;
    modelParameters.mZcDisabled = true;
    simulator = static_cast<NeslSimulator *>(PW_SMRv9_DW.STATE_1_Simulator);
    diagnosticManager = static_cast<NeuDiagnosticManager *>
      (PW_SMRv9_DW.STATE_1_DiagMgr);
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_1 = nesl_initialize_simulator(simulator, &modelParameters,
      diagnosticManager);
    if (tmp_1 != 0) {
      zcDisabled = error_buffer_is_empty(rtmGetErrorStatus(PW_SMRv9_M));
      if (zcDisabled) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(PW_SMRv9_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S287>/STATE_1' */

    /* Start for SimscapeExecutionBlock: '<S287>/OUTPUT_1_4' */
    simulator = nesl_lease_simulator("PW_SMRv9/Solver Configuration_1", 1, 4);
    PW_SMRv9_DW.OUTPUT_1_4_Simulator = (void *)simulator;
    zcDisabled = pointer_is_null(PW_SMRv9_DW.OUTPUT_1_4_Simulator);
    if (zcDisabled) {
      PW_SMRv9_4b22eff7_1_gateway();
      simulator = nesl_lease_simulator("PW_SMRv9/Solver Configuration_1", 1, 4);
      PW_SMRv9_DW.OUTPUT_1_4_Simulator = (void *)simulator;
    }

    tmp = nesl_create_simulation_data();
    PW_SMRv9_DW.OUTPUT_1_4_SimData = (void *)tmp;
    diagnosticManager = rtw_create_diagnostics();
    PW_SMRv9_DW.OUTPUT_1_4_DiagMgr = (void *)diagnosticManager;
    modelParameters_0.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_0.mSolverAbsTol = 0.001;
    modelParameters_0.mSolverRelTol = 0.001;
    modelParameters_0.mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO;
    modelParameters_0.mStartTime = 0.0;
    modelParameters_0.mLoadInitialState = false;
    modelParameters_0.mUseSimState = false;
    modelParameters_0.mLinTrimCompile = false;
    modelParameters_0.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters_0.mRTWModifiedTimeStamp = 7.13466668E+8;
    tmp_0 = 0.001;
    modelParameters_0.mSolverTolerance = tmp_0;
    tmp_0 = 0.01;
    modelParameters_0.mFixedStepSize = tmp_0;
    zcDisabled = false;
    modelParameters_0.mVariableStepSolver = zcDisabled;
    zcDisabled = false;
    modelParameters_0.mIsUsingODEN = zcDisabled;
    modelParameters_0.mZcDisabled = true;
    simulator = static_cast<NeslSimulator *>(PW_SMRv9_DW.OUTPUT_1_4_Simulator);
    diagnosticManager = static_cast<NeuDiagnosticManager *>
      (PW_SMRv9_DW.OUTPUT_1_4_DiagMgr);
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_1 = nesl_initialize_simulator(simulator, &modelParameters_0,
      diagnosticManager);
    if (tmp_1 != 0) {
      zcDisabled = error_buffer_is_empty(rtmGetErrorStatus(PW_SMRv9_M));
      if (zcDisabled) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(PW_SMRv9_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S287>/OUTPUT_1_4' */

    /* Start for SimscapeExecutionBlock: '<S287>/OUTPUT_1_0' */
    simulator = nesl_lease_simulator("PW_SMRv9/Solver Configuration_1", 1, 0);
    PW_SMRv9_DW.OUTPUT_1_0_Simulator = (void *)simulator;
    zcDisabled = pointer_is_null(PW_SMRv9_DW.OUTPUT_1_0_Simulator);
    if (zcDisabled) {
      PW_SMRv9_4b22eff7_1_gateway();
      simulator = nesl_lease_simulator("PW_SMRv9/Solver Configuration_1", 1, 0);
      PW_SMRv9_DW.OUTPUT_1_0_Simulator = (void *)simulator;
    }

    tmp = nesl_create_simulation_data();
    PW_SMRv9_DW.OUTPUT_1_0_SimData = (void *)tmp;
    diagnosticManager = rtw_create_diagnostics();
    PW_SMRv9_DW.OUTPUT_1_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_1.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_1.mSolverAbsTol = 0.001;
    modelParameters_1.mSolverRelTol = 0.001;
    modelParameters_1.mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO;
    modelParameters_1.mStartTime = 0.0;
    modelParameters_1.mLoadInitialState = false;
    modelParameters_1.mUseSimState = false;
    modelParameters_1.mLinTrimCompile = false;
    modelParameters_1.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters_1.mRTWModifiedTimeStamp = 7.13466668E+8;
    tmp_0 = 0.001;
    modelParameters_1.mSolverTolerance = tmp_0;
    tmp_0 = 0.01;
    modelParameters_1.mFixedStepSize = tmp_0;
    zcDisabled = false;
    modelParameters_1.mVariableStepSolver = zcDisabled;
    zcDisabled = false;
    modelParameters_1.mIsUsingODEN = zcDisabled;
    modelParameters_1.mZcDisabled = true;
    simulator = static_cast<NeslSimulator *>(PW_SMRv9_DW.OUTPUT_1_0_Simulator);
    diagnosticManager = static_cast<NeuDiagnosticManager *>
      (PW_SMRv9_DW.OUTPUT_1_0_DiagMgr);
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_1 = nesl_initialize_simulator(simulator, &modelParameters_1,
      diagnosticManager);
    if (tmp_1 != 0) {
      zcDisabled = error_buffer_is_empty(rtmGetErrorStatus(PW_SMRv9_M));
      if (zcDisabled) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(PW_SMRv9_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S287>/OUTPUT_1_0' */

    /* Start for SimscapeExecutionBlock: '<S287>/OUTPUT_1_3' */
    simulator = nesl_lease_simulator("PW_SMRv9/Solver Configuration_1", 1, 3);
    PW_SMRv9_DW.OUTPUT_1_3_Simulator = (void *)simulator;
    zcDisabled = pointer_is_null(PW_SMRv9_DW.OUTPUT_1_3_Simulator);
    if (zcDisabled) {
      PW_SMRv9_4b22eff7_1_gateway();
      simulator = nesl_lease_simulator("PW_SMRv9/Solver Configuration_1", 1, 3);
      PW_SMRv9_DW.OUTPUT_1_3_Simulator = (void *)simulator;
    }

    tmp = nesl_create_simulation_data();
    PW_SMRv9_DW.OUTPUT_1_3_SimData = (void *)tmp;
    diagnosticManager = rtw_create_diagnostics();
    PW_SMRv9_DW.OUTPUT_1_3_DiagMgr = (void *)diagnosticManager;
    modelParameters_2.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_2.mSolverAbsTol = 0.001;
    modelParameters_2.mSolverRelTol = 0.001;
    modelParameters_2.mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO;
    modelParameters_2.mStartTime = 0.0;
    modelParameters_2.mLoadInitialState = false;
    modelParameters_2.mUseSimState = false;
    modelParameters_2.mLinTrimCompile = false;
    modelParameters_2.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters_2.mRTWModifiedTimeStamp = 7.13466668E+8;
    tmp_0 = 0.001;
    modelParameters_2.mSolverTolerance = tmp_0;
    tmp_0 = 0.01;
    modelParameters_2.mFixedStepSize = tmp_0;
    zcDisabled = false;
    modelParameters_2.mVariableStepSolver = zcDisabled;
    zcDisabled = false;
    modelParameters_2.mIsUsingODEN = zcDisabled;
    modelParameters_2.mZcDisabled = true;
    simulator = static_cast<NeslSimulator *>(PW_SMRv9_DW.OUTPUT_1_3_Simulator);
    diagnosticManager = static_cast<NeuDiagnosticManager *>
      (PW_SMRv9_DW.OUTPUT_1_3_DiagMgr);
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_1 = nesl_initialize_simulator(simulator, &modelParameters_2,
      diagnosticManager);
    if (tmp_1 != 0) {
      zcDisabled = error_buffer_is_empty(rtmGetErrorStatus(PW_SMRv9_M));
      if (zcDisabled) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(PW_SMRv9_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S287>/OUTPUT_1_3' */
    /* Start for SimscapeExecutionBlock: '<S287>/OUTPUT_1_2' */
    simulator = nesl_lease_simulator("PW_SMRv9/Solver Configuration_1", 1, 2);
    PW_SMRv9_DW.OUTPUT_1_2_Simulator = (void *)simulator;
    zcDisabled = pointer_is_null(PW_SMRv9_DW.OUTPUT_1_2_Simulator);
    if (zcDisabled) {
      PW_SMRv9_4b22eff7_1_gateway();
      simulator = nesl_lease_simulator("PW_SMRv9/Solver Configuration_1", 1, 2);
      PW_SMRv9_DW.OUTPUT_1_2_Simulator = (void *)simulator;
    }

    tmp = nesl_create_simulation_data();
    PW_SMRv9_DW.OUTPUT_1_2_SimData = (void *)tmp;
    diagnosticManager = rtw_create_diagnostics();
    PW_SMRv9_DW.OUTPUT_1_2_DiagMgr = (void *)diagnosticManager;
    modelParameters_3.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_3.mSolverAbsTol = 0.001;
    modelParameters_3.mSolverRelTol = 0.001;
    modelParameters_3.mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO;
    modelParameters_3.mStartTime = 0.0;
    modelParameters_3.mLoadInitialState = false;
    modelParameters_3.mUseSimState = false;
    modelParameters_3.mLinTrimCompile = false;
    modelParameters_3.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters_3.mRTWModifiedTimeStamp = 7.13466668E+8;
    tmp_0 = 0.001;
    modelParameters_3.mSolverTolerance = tmp_0;
    tmp_0 = 0.01;
    modelParameters_3.mFixedStepSize = tmp_0;
    zcDisabled = false;
    modelParameters_3.mVariableStepSolver = zcDisabled;
    zcDisabled = false;
    modelParameters_3.mIsUsingODEN = zcDisabled;
    modelParameters_3.mZcDisabled = true;
    simulator = static_cast<NeslSimulator *>(PW_SMRv9_DW.OUTPUT_1_2_Simulator);
    diagnosticManager = static_cast<NeuDiagnosticManager *>
      (PW_SMRv9_DW.OUTPUT_1_2_DiagMgr);
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_1 = nesl_initialize_simulator(simulator, &modelParameters_3,
      diagnosticManager);
    if (tmp_1 != 0) {
      zcDisabled = error_buffer_is_empty(rtmGetErrorStatus(PW_SMRv9_M));
      if (zcDisabled) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(PW_SMRv9_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S287>/OUTPUT_1_2' */
    /* Start for SimscapeExecutionBlock: '<S287>/OUTPUT_1_1' */
    simulator = nesl_lease_simulator("PW_SMRv9/Solver Configuration_1", 1, 1);
    PW_SMRv9_DW.OUTPUT_1_1_Simulator = (void *)simulator;
    zcDisabled = pointer_is_null(PW_SMRv9_DW.OUTPUT_1_1_Simulator);
    if (zcDisabled) {
      PW_SMRv9_4b22eff7_1_gateway();
      simulator = nesl_lease_simulator("PW_SMRv9/Solver Configuration_1", 1, 1);
      PW_SMRv9_DW.OUTPUT_1_1_Simulator = (void *)simulator;
    }

    tmp = nesl_create_simulation_data();
    PW_SMRv9_DW.OUTPUT_1_1_SimData = (void *)tmp;
    diagnosticManager = rtw_create_diagnostics();
    PW_SMRv9_DW.OUTPUT_1_1_DiagMgr = (void *)diagnosticManager;
    modelParameters_4.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_4.mSolverAbsTol = 0.001;
    modelParameters_4.mSolverRelTol = 0.001;
    modelParameters_4.mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO;
    modelParameters_4.mStartTime = 0.0;
    modelParameters_4.mLoadInitialState = false;
    modelParameters_4.mUseSimState = false;
    modelParameters_4.mLinTrimCompile = false;
    modelParameters_4.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters_4.mRTWModifiedTimeStamp = 7.13466668E+8;
    tmp_0 = 0.001;
    modelParameters_4.mSolverTolerance = tmp_0;
    tmp_0 = 0.01;
    modelParameters_4.mFixedStepSize = tmp_0;
    zcDisabled = false;
    modelParameters_4.mVariableStepSolver = zcDisabled;
    zcDisabled = false;
    modelParameters_4.mIsUsingODEN = zcDisabled;
    modelParameters_4.mZcDisabled = true;
    simulator = static_cast<NeslSimulator *>(PW_SMRv9_DW.OUTPUT_1_1_Simulator);
    diagnosticManager = static_cast<NeuDiagnosticManager *>
      (PW_SMRv9_DW.OUTPUT_1_1_DiagMgr);
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_1 = nesl_initialize_simulator(simulator, &modelParameters_4,
      diagnosticManager);
    if (tmp_1 != 0) {
      zcDisabled = error_buffer_is_empty(rtmGetErrorStatus(PW_SMRv9_M));
      if (zcDisabled) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(PW_SMRv9_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S287>/OUTPUT_1_1' */
  }

  {
    real_T tmp;
    int32_T r;
    int32_T t;
    uint32_T tseed;

    /* InitializeConditions for DiscreteTransferFcn: '<S90>/Discrete Transfer Fcn' */
    PW_SMRv9_DW.DiscreteTransferFcn_states =
      PW_SMRv9_cal->DiscreteTransferFcn_InitialStat;

    /* InitializeConditions for DiscreteTransferFcn: '<S91>/Discrete Transfer Fcn3' */
    PW_SMRv9_DW.DiscreteTransferFcn3_states =
      PW_SMRv9_cal->DiscreteTransferFcn3_InitialSta;

    /* InitializeConditions for DiscreteTransferFcn: '<S92>/Discrete Transfer Fcn' */
    PW_SMRv9_DW.DiscreteTransferFcn_states_m =
      PW_SMRv9_cal->DiscreteTransferFcn_InitialSt_n;

    /* InitializeConditions for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn' */
    PW_SMRv9_DW.DiscreteTransferFcn_states_g =
      PW_SMRv9_cal->DiscreteTransferFcn_InitialSt_p;

    /* InitializeConditions for DiscreteTransferFcn: '<S84>/Discrete Transfer Fcn' */
    PW_SMRv9_DW.DiscreteTransferFcn_states_h =
      PW_SMRv9_cal->DiscreteTransferFcn_InitialSt_m;

    /* InitializeConditions for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn3' */
    PW_SMRv9_DW.DiscreteTransferFcn3_states_d =
      PW_SMRv9_cal->DiscreteTransferFcn3_InitialS_g;

    /* InitializeConditions for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn1' */
    PW_SMRv9_DW.DiscreteTransferFcn1_states =
      PW_SMRv9_cal->DiscreteTransferFcn1_InitialSta;

    /* InitializeConditions for RandomNumber: '<S1>/White Noise' */
    tmp = std::floor(PW_SMRv9_cal->BandLimitedWhiteNoise_seed);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = std::fmod(tmp, 4.294967296E+9);
    }

    tseed = tmp < 0.0 ? static_cast<uint32_T>(-static_cast<int32_T>
      (static_cast<uint32_T>(-tmp))) : static_cast<uint32_T>(tmp);
    r = static_cast<int32_T>(tseed >> 16U);
    t = static_cast<int32_T>(tseed & 32768U);
    tseed = ((((tseed - (static_cast<uint32_T>(r) << 16U)) +
               static_cast<uint32_T>(t)) << 16U) + static_cast<uint32_T>(t)) +
      static_cast<uint32_T>(r);
    if (tseed < 1U) {
      tseed = 1144108930U;
    } else if (tseed > 2147483646U) {
      tseed = 2147483646U;
    }

    PW_SMRv9_DW.RandSeed = tseed;
    PW_SMRv9_DW.NextOutput = rt_nrand_Upu32_Yd_f_pw_snf(&PW_SMRv9_DW.RandSeed) *
      PW_SMRv9_cal->WhiteNoise_StdDev + PW_SMRv9_cal->WhiteNoise_Mean;

    /* End of InitializeConditions for RandomNumber: '<S1>/White Noise' */

    /* InitializeConditions for DiscreteTransferFcn: '<Root>/Discrete Transfer Fcn2' */
    PW_SMRv9_DW.DiscreteTransferFcn2_states =
      PW_SMRv9_cal->DiscreteTransferFcn2_InitialSta;

    /* InitializeConditions for DiscreteIntegrator: '<S126>/Integrator' */
    PW_SMRv9_DW.Integrator_DSTATE =
      PW_SMRv9_cal->DiscretePIDController_Initial_n;

    /* InitializeConditions for DiscreteIntegrator: '<S262>/Integrator' */
    PW_SMRv9_DW.Integrator_DSTATE_h =
      PW_SMRv9_cal->DiscretePIDController_Initial_p;

    /* InitializeConditions for DiscreteIntegrator: '<S480>/Integrator' */
    PW_SMRv9_DW.Integrator_DSTATE_b =
      PW_SMRv9_cal->DiscretePIDController_Initial_k;

    /* InitializeConditions for DiscreteIntegrator: '<S475>/Filter' */
    PW_SMRv9_DW.Filter_DSTATE = PW_SMRv9_cal->DiscretePIDController_InitialCo;

    /* InitializeConditions for DiscreteTransferFcn: '<S90>/Discrete Transfer Fcn1' */
    PW_SMRv9_DW.DiscreteTransferFcn1_states_p =
      PW_SMRv9_cal->DiscreteTransferFcn1_InitialS_f;

    /* InitializeConditions for DiscreteIntegrator: '<S323>/Integrator' */
    PW_SMRv9_DW.Integrator_DSTATE_j =
      PW_SMRv9_cal->DiscretePIDController_Initial_i;

    /* InitializeConditions for DiscreteIntegrator: '<S377>/Integrator' */
    PW_SMRv9_DW.Integrator_DSTATE_c =
      PW_SMRv9_cal->DiscretePIDController_Initia_nn;

    /* InitializeConditions for DiscreteIntegrator: '<S427>/Integrator' */
    PW_SMRv9_DW.Integrator_DSTATE_k =
      PW_SMRv9_cal->DiscretePIDController1_InitialC;
  }
}

/* Model terminate function */
void PW_SMRv9_terminate(void)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;

  /* Terminate for SimscapeExecutionBlock: '<S287>/STATE_1' */
  diagnosticManager = static_cast<NeuDiagnosticManager *>
    (PW_SMRv9_DW.STATE_1_DiagMgr);
  neu_destroy_diagnostic_manager(diagnosticManager);
  simulationData = static_cast<NeslSimulationData *>(PW_SMRv9_DW.STATE_1_SimData);
  nesl_destroy_simulation_data(simulationData);
  nesl_erase_simulator("PW_SMRv9/Solver Configuration_1");
  nesl_destroy_registry();

  /* Terminate for SimscapeExecutionBlock: '<S287>/OUTPUT_1_4' */
  diagnosticManager = static_cast<NeuDiagnosticManager *>
    (PW_SMRv9_DW.OUTPUT_1_4_DiagMgr);
  neu_destroy_diagnostic_manager(diagnosticManager);
  simulationData = static_cast<NeslSimulationData *>
    (PW_SMRv9_DW.OUTPUT_1_4_SimData);
  nesl_destroy_simulation_data(simulationData);
  nesl_erase_simulator("PW_SMRv9/Solver Configuration_1");
  nesl_destroy_registry();

  /* Terminate for SimscapeExecutionBlock: '<S287>/OUTPUT_1_0' */
  diagnosticManager = static_cast<NeuDiagnosticManager *>
    (PW_SMRv9_DW.OUTPUT_1_0_DiagMgr);
  neu_destroy_diagnostic_manager(diagnosticManager);
  simulationData = static_cast<NeslSimulationData *>
    (PW_SMRv9_DW.OUTPUT_1_0_SimData);
  nesl_destroy_simulation_data(simulationData);
  nesl_erase_simulator("PW_SMRv9/Solver Configuration_1");
  nesl_destroy_registry();

  /* Terminate for SimscapeExecutionBlock: '<S287>/OUTPUT_1_3' */
  diagnosticManager = static_cast<NeuDiagnosticManager *>
    (PW_SMRv9_DW.OUTPUT_1_3_DiagMgr);
  neu_destroy_diagnostic_manager(diagnosticManager);
  simulationData = static_cast<NeslSimulationData *>
    (PW_SMRv9_DW.OUTPUT_1_3_SimData);
  nesl_destroy_simulation_data(simulationData);
  nesl_erase_simulator("PW_SMRv9/Solver Configuration_1");
  nesl_destroy_registry();

  /* Terminate for SimscapeExecutionBlock: '<S287>/OUTPUT_1_2' */
  diagnosticManager = static_cast<NeuDiagnosticManager *>
    (PW_SMRv9_DW.OUTPUT_1_2_DiagMgr);
  neu_destroy_diagnostic_manager(diagnosticManager);
  simulationData = static_cast<NeslSimulationData *>
    (PW_SMRv9_DW.OUTPUT_1_2_SimData);
  nesl_destroy_simulation_data(simulationData);
  nesl_erase_simulator("PW_SMRv9/Solver Configuration_1");
  nesl_destroy_registry();

  /* Terminate for SimscapeExecutionBlock: '<S287>/OUTPUT_1_1' */
  diagnosticManager = static_cast<NeuDiagnosticManager *>
    (PW_SMRv9_DW.OUTPUT_1_1_DiagMgr);
  neu_destroy_diagnostic_manager(diagnosticManager);
  simulationData = static_cast<NeslSimulationData *>
    (PW_SMRv9_DW.OUTPUT_1_1_SimData);
  nesl_destroy_simulation_data(simulationData);
  nesl_erase_simulator("PW_SMRv9/Solver Configuration_1");
  nesl_destroy_registry();
}
