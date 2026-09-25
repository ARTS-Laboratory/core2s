/*
 * PW_SMRv7_private.h
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

#ifndef RTW_HEADER_PW_SMRv7_private_h_
#define RTW_HEADER_PW_SMRv7_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "PW_SMRv7_types.h"
#include "PW_SMRv7.h"

extern void* slrtRegisterSignalToLoggingService(uintptr_t sigAddr);
extern real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);

#endif                                 /* RTW_HEADER_PW_SMRv7_private_h_ */
