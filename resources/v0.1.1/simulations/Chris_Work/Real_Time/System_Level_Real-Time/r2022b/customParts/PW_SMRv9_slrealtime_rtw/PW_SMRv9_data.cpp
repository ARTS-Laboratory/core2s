/*
 * PW_SMRv9_data.cpp
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

/* Block parameters (default storage) */
P_PW_SMRv9_T PW_SMRv9_P = {
  /* Mask Parameter: DiscretePIDController_LowerSa_c
   * Referenced by:
   *   '<S269>/Saturation'
   *   '<S255>/DeadZone'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_UpperSa_j
   * Referenced by:
   *   '<S269>/Saturation'
   *   '<S255>/DeadZone'
   */
  0.0,

  /* Expression: inf
   * Referenced by: '<S92>/Saturation'
   */
  0.0
};
