/*
 * PW_SMRv6_data.cpp
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

/* Block parameters (default storage) */
P_PW_SMRv6_T PW_SMRv6_P{
  /* Mask Parameter: DiscretePIDController_LowerSatu
   * Referenced by:
   *   '<S83>/Saturation'
   *   '<S69>/DeadZone'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_UpperSatu
   * Referenced by:
   *   '<S83>/Saturation'
   *   '<S69>/DeadZone'
   */
  0.0,

  /* Expression: inf
   * Referenced by: '<S21>/Saturation'
   */
  0.0
};
