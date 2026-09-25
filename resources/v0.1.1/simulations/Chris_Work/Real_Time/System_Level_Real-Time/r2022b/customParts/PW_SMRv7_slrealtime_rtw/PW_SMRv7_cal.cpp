#include "PW_SMRv7_cal.h"
#include "PW_SMRv7.h"

/* Storage class 'PageSwitching' */
PW_SMRv7_cal_type PW_SMRv7_cal_impl = {
  /* Expression: [1 -0.81873]
   * Referenced by: '<S46>/Discrete Transfer Fcn'
   */
  { 1.0, -0.81873 },

  /* Expression: [1 -0.81873]
   * Referenced by: '<Root>/Discrete Transfer Fcn'
   */
  { 1.0, -0.81873 },

  /* Expression: [1 -0.81873]
   * Referenced by: '<S42>/Discrete Transfer Fcn'
   */
  { 1.0, -0.81873 },

  /* Expression: [1 -0.81873]
   * Referenced by: '<S45>/Discrete Transfer Fcn'
   */
  { 1.0, -0.81873 },

  /* Expression: [171 179 193 203 213 217 226 233 240 246]
   * Referenced by: '<S42>/1-D Lookup Table'
   */
  { 171.0, 179.0, 193.0, 203.0, 213.0, 217.0, 226.0, 233.0, 240.0, 246.0 },

  /* Expression: [1.5 2 2.5 3 3.5 4 4.5 5 5.5 6]
   * Referenced by: '<S42>/1-D Lookup Table'
   */
  { 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.5, 5.0, 5.5, 6.0 },

  /* Expression: [3.0 2.5 2.0 1.5 1.2 1.0 0.6 0]
   * Referenced by: '<S46>/1-D Lookup Table'
   */
  { 3.0, 2.5, 2.0, 1.5, 1.2, 1.0, 0.6, 0.0 },

  /* Expression: [315 320 325 330 332 333 334 335]
   * Referenced by: '<S46>/1-D Lookup Table'
   */
  { 315.0, 320.0, 325.0, 330.0, 332.0, 333.0, 334.0, 335.0 },

  /* Mask Parameter: DiscretePIDController_D
   * Referenced by: '<S278>/Derivative Gain'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_I
   * Referenced by: '<S77>/Integral Gain'
   */
  5.0,

  /* Mask Parameter: DiscretePIDController_I_o
   * Referenced by: '<S171>/Integral Gain'
   */
  0.002,

  /* Mask Parameter: DiscretePIDController_I_p
   * Referenced by: '<S281>/Integral Gain'
   */
  0.002,

  /* Mask Parameter: DiscretePIDController_I_n
   * Referenced by: '<S228>/Integral Gain'
   */
  0.01,

  /* Mask Parameter: DiscretePIDController_InitialCo
   * Referenced by: '<S279>/Filter'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_Initial_f
   * Referenced by: '<S80>/Integrator'
   */
  376.99,

  /* Mask Parameter: DiscretePIDController_Initial_g
   * Referenced by: '<S174>/Integrator'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_Initial_m
   * Referenced by: '<S284>/Integrator'
   */
  0.5,

  /* Mask Parameter: DiscretePIDController_Initia_gu
   * Referenced by: '<S231>/Integrator'
   */
  0.25,

  /* Mask Parameter: DiscretePIDController_LowerSatu
   * Referenced by:
   *   '<S87>/Saturation'
   *   '<S73>/DeadZone'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_LowerSa_a
   * Referenced by:
   *   '<S291>/Saturation'
   *   '<S277>/DeadZone'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_LowerSa_h
   * Referenced by:
   *   '<S238>/Saturation'
   *   '<S224>/DeadZone'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_N
   * Referenced by: '<S287>/Filter Coefficient'
   */
  100.0,

  /* Mask Parameter: DiscretePIDController_P
   * Referenced by: '<S85>/Proportional Gain'
   */
  40.0,

  /* Mask Parameter: DiscretePIDController_P_h
   * Referenced by: '<S179>/Proportional Gain'
   */
  0.005,

  /* Mask Parameter: DiscretePIDController_P_l
   * Referenced by: '<S289>/Proportional Gain'
   */
  0.01,

  /* Mask Parameter: DiscretePIDController_P_p
   * Referenced by: '<S236>/Proportional Gain'
   */
  0.5,

  /* Mask Parameter: DiscretePIDController_UpperSatu
   * Referenced by:
   *   '<S87>/Saturation'
   *   '<S73>/DeadZone'
   */
  580.0,

  /* Mask Parameter: DiscretePIDController_UpperSa_n
   * Referenced by:
   *   '<S291>/Saturation'
   *   '<S277>/DeadZone'
   */
  3.0,

  /* Mask Parameter: DiscretePIDController_UpperSa_l
   * Referenced by:
   *   '<S238>/Saturation'
   *   '<S224>/DeadZone'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S71>/Constant1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S165>/Constant1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S275>/Constant1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S222>/Constant1'
   */
  0.0,

  /* Expression: [0.18127]
   * Referenced by: '<S46>/Discrete Transfer Fcn'
   */
  0.18127,

  /* Expression: 0
   * Referenced by: '<S46>/Discrete Transfer Fcn'
   */
  0.0,

  /* Expression: [0.18127]
   * Referenced by: '<Root>/Discrete Transfer Fcn'
   */
  0.18127,

  /* Expression: 0
   * Referenced by: '<Root>/Discrete Transfer Fcn'
   */
  0.0,

  /* Expression: [0.18127]
   * Referenced by: '<S42>/Discrete Transfer Fcn'
   */
  0.18127,

  /* Expression: 0
   * Referenced by: '<S42>/Discrete Transfer Fcn'
   */
  0.0,

  /* Expression: 2.5
   * Referenced by: '<S42>/Saturation1'
   */
  2.5,

  /* Expression: 0
   * Referenced by: '<S42>/Saturation1'
   */
  0.0,

  /* Expression: [0.18127]
   * Referenced by: '<S45>/Discrete Transfer Fcn'
   */
  0.18127,

  /* Expression: 0
   * Referenced by: '<S45>/Discrete Transfer Fcn'
   */
  0.0,

  /* Expression: 3.5
   * Referenced by: '<Root>/Constant'
   */
  3.5,

  /* Expression: 0
   * Referenced by: '<S71>/Clamping_zero'
   */
  0.0,

  /* Computed Parameter: Integrator_gainval
   * Referenced by: '<S80>/Integrator'
   */
  0.01,

  /* Expression: 550
   * Referenced by: '<Root>/Saturation'
   */
  550.0,

  /* Expression: 0
   * Referenced by: '<Root>/Saturation'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S165>/Clamping_zero'
   */
  0.0,

  /* Computed Parameter: Integrator_gainval_k
   * Referenced by: '<S174>/Integrator'
   */
  0.01,

  /* Expression: 333
   * Referenced by: '<S46>/Constant'
   */
  333.0,

  /* Expression: 0
   * Referenced by: '<S275>/Clamping_zero'
   */
  0.0,

  /* Computed Parameter: Integrator_gainval_a
   * Referenced by: '<S284>/Integrator'
   */
  0.01,

  /* Computed Parameter: Filter_gainval
   * Referenced by: '<S279>/Filter'
   */
  0.01,

  /* Expression: 0
   * Referenced by: '<S46>/Saturation'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S222>/Clamping_zero'
   */
  0.0,

  /* Expression: 0.15
   * Referenced by: '<S45>/Gain'
   */
  0.15,

  /* Computed Parameter: Integrator_gainval_b
   * Referenced by: '<S231>/Integrator'
   */
  0.01,

  /* Computed Parameter: Constant_Value_k
   * Referenced by: '<S71>/Constant'
   */
  1,

  /* Computed Parameter: Constant2_Value
   * Referenced by: '<S71>/Constant2'
   */
  -1,

  /* Computed Parameter: Constant3_Value
   * Referenced by: '<S71>/Constant3'
   */
  1,

  /* Computed Parameter: Constant4_Value
   * Referenced by: '<S71>/Constant4'
   */
  -1,

  /* Computed Parameter: Constant_Value_e
   * Referenced by: '<S165>/Constant'
   */
  1,

  /* Computed Parameter: Constant2_Value_f
   * Referenced by: '<S165>/Constant2'
   */
  -1,

  /* Computed Parameter: Constant3_Value_i
   * Referenced by: '<S165>/Constant3'
   */
  1,

  /* Computed Parameter: Constant4_Value_i
   * Referenced by: '<S165>/Constant4'
   */
  -1,

  /* Computed Parameter: Constant_Value_l
   * Referenced by: '<S222>/Constant'
   */
  1,

  /* Computed Parameter: Constant2_Value_m
   * Referenced by: '<S222>/Constant2'
   */
  -1,

  /* Computed Parameter: Constant3_Value_e
   * Referenced by: '<S222>/Constant3'
   */
  1,

  /* Computed Parameter: Constant4_Value_j
   * Referenced by: '<S222>/Constant4'
   */
  -1,

  /* Computed Parameter: Constant_Value_f
   * Referenced by: '<S275>/Constant'
   */
  1,

  /* Computed Parameter: Constant2_Value_o
   * Referenced by: '<S275>/Constant2'
   */
  -1,

  /* Computed Parameter: Constant3_Value_m
   * Referenced by: '<S275>/Constant3'
   */
  1,

  /* Computed Parameter: Constant4_Value_o
   * Referenced by: '<S275>/Constant4'
   */
  -1
};

PW_SMRv7_cal_type *PW_SMRv7_cal = &PW_SMRv7_cal_impl;
