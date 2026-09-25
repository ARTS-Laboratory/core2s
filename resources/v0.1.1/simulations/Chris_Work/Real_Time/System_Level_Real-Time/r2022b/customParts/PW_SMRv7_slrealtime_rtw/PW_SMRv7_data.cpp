/*
 * PW_SMRv7_data.cpp
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

/* Block parameters (default storage) */
P_PW_SMRv7_T PW_SMRv7_P = {
  /* Mask Parameter: DiscretePIDController_LowerSa_f
   * Referenced by:
   *   '<S181>/Saturation'
   *   '<S167>/DeadZone'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_UpperSa_o
   * Referenced by:
   *   '<S181>/Saturation'
   *   '<S167>/DeadZone'
   */
  0.0,

  /* Expression: inf
   * Referenced by: '<S46>/Saturation'
   */
  0.0
};
