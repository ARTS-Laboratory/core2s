#include "PW_SMRv7_cal.h"
#include "PW_SMRv7.h"

/* Storage class 'PageSwitching' */
PW_SMRv7_cal_type PW_SMRv7_cal_impl = {
  /* Expression: [1 -0.81873]
   * Referenced by: '<S51>/Discrete Transfer Fcn'
   */
  { 1.0, -0.81873 },

  /* Expression: [1 -0.81873]
   * Referenced by: '<Root>/Discrete Transfer Fcn'
   */
  { 1.0, -0.81873 },

  /* Expression: [1 -0.81873]
   * Referenced by: '<S47>/Discrete Transfer Fcn'
   */
  { 1.0, -0.81873 },

  /* Expression: [1 -0.81873]
   * Referenced by: '<S50>/Discrete Transfer Fcn'
   */
  { 1.0, -0.81873 },

  /* Expression: [171 179 193 203 213 217 226 233 240 246]
   * Referenced by: '<S47>/1-D Lookup Table'
   */
  { 171.0, 179.0, 193.0, 203.0, 213.0, 217.0, 226.0, 233.0, 240.0, 246.0 },

  /* Expression: [1.5 2 2.5 3 3.5 4 4.5 5 5.5 6]
   * Referenced by: '<S47>/1-D Lookup Table'
   */
  { 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.5, 5.0, 5.5, 6.0 },

  /* Expression: [3.0 2.5 2.0 1.5 1.2 1.0 0.6 0]
   * Referenced by: '<S51>/1-D Lookup Table'
   */
  { 3.0, 2.5, 2.0, 1.5, 1.2, 1.0, 0.6, 0.0 },

  /* Expression: [315 320 325 330 332 333 334 335]
   * Referenced by: '<S51>/1-D Lookup Table'
   */
  { 315.0, 320.0, 325.0, 330.0, 332.0, 333.0, 334.0, 335.0 },

  /* Mask Parameter: DiscretePIDController_D
   * Referenced by: '<S288>/Derivative Gain'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_I
   * Referenced by: '<S82>/Integral Gain'
   */
  5.0,

  /* Mask Parameter: DiscretePIDController_I_o
   * Referenced by: '<S181>/Integral Gain'
   */
  0.002,

  /* Mask Parameter: DiscretePIDController_I_p
   * Referenced by: '<S291>/Integral Gain'
   */
  0.002,

  /* Mask Parameter: DiscretePIDController_I_n
   * Referenced by: '<S238>/Integral Gain'
   */
  0.01,

  /* Mask Parameter: DiscretePIDController_InitialCo
   * Referenced by: '<S289>/Filter'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_Initial_f
   * Referenced by: '<S85>/Integrator'
   */
  376.99,

  /* Mask Parameter: DiscretePIDController_Initial_g
   * Referenced by: '<S184>/Integrator'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_Initial_m
   * Referenced by: '<S294>/Integrator'
   */
  0.5,

  /* Mask Parameter: DiscretePIDController_Initia_gu
   * Referenced by: '<S241>/Integrator'
   */
  0.25,

  /* Mask Parameter: DiscretePIDController_LowerSatu
   * Referenced by:
   *   '<S92>/Saturation'
   *   '<S78>/DeadZone'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_LowerSa_a
   * Referenced by:
   *   '<S301>/Saturation'
   *   '<S287>/DeadZone'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_LowerSa_h
   * Referenced by:
   *   '<S248>/Saturation'
   *   '<S234>/DeadZone'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_N
   * Referenced by: '<S297>/Filter Coefficient'
   */
  100.0,

  /* Mask Parameter: DiscretePIDController_P
   * Referenced by: '<S90>/Proportional Gain'
   */
  40.0,

  /* Mask Parameter: DiscretePIDController_P_h
   * Referenced by: '<S189>/Proportional Gain'
   */
  0.005,

  /* Mask Parameter: DiscretePIDController_P_l
   * Referenced by: '<S299>/Proportional Gain'
   */
  0.01,

  /* Mask Parameter: DiscretePIDController_P_p
   * Referenced by: '<S246>/Proportional Gain'
   */
  0.5,

  /* Mask Parameter: DiscretePIDController_UpperSatu
   * Referenced by:
   *   '<S92>/Saturation'
   *   '<S78>/DeadZone'
   */
  580.0,

  /* Mask Parameter: DiscretePIDController_UpperSa_n
   * Referenced by:
   *   '<S301>/Saturation'
   *   '<S287>/DeadZone'
   */
  3.0,

  /* Mask Parameter: DiscretePIDController_UpperSa_l
   * Referenced by:
   *   '<S248>/Saturation'
   *   '<S234>/DeadZone'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S76>/Constant1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S175>/Constant1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S285>/Constant1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S232>/Constant1'
   */
  0.0,

  /* Expression: [0.18127]
   * Referenced by: '<S51>/Discrete Transfer Fcn'
   */
  0.18127,

  /* Expression: 0
   * Referenced by: '<S51>/Discrete Transfer Fcn'
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
   * Referenced by: '<S47>/Discrete Transfer Fcn'
   */
  0.18127,

  /* Expression: 0
   * Referenced by: '<S47>/Discrete Transfer Fcn'
   */
  0.0,

  /* Expression: 2.5
   * Referenced by: '<S47>/Saturation1'
   */
  2.5,

  /* Expression: 0
   * Referenced by: '<S47>/Saturation1'
   */
  0.0,

  /* Expression: [0.18127]
   * Referenced by: '<S50>/Discrete Transfer Fcn'
   */
  0.18127,

  /* Expression: 0
   * Referenced by: '<S50>/Discrete Transfer Fcn'
   */
  0.0,

  /* Expression: 3.5
   * Referenced by: '<Root>/Constant'
   */
  3.5,

  /* Expression: 0
   * Referenced by: '<S76>/Clamping_zero'
   */
  0.0,

  /* Computed Parameter: Integrator_gainval
   * Referenced by: '<S85>/Integrator'
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
   * Referenced by: '<S175>/Clamping_zero'
   */
  0.0,

  /* Computed Parameter: Integrator_gainval_k
   * Referenced by: '<S184>/Integrator'
   */
  0.01,

  /* Expression: 333
   * Referenced by: '<S51>/Constant'
   */
  333.0,

  /* Expression: 0
   * Referenced by: '<S285>/Clamping_zero'
   */
  0.0,

  /* Computed Parameter: Integrator_gainval_a
   * Referenced by: '<S294>/Integrator'
   */
  0.01,

  /* Computed Parameter: Filter_gainval
   * Referenced by: '<S289>/Filter'
   */
  0.01,

  /* Expression: 0
   * Referenced by: '<S51>/Saturation'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S232>/Clamping_zero'
   */
  0.0,

  /* Expression: 0.1
   * Referenced by: '<S50>/Gain'
   */
  0.1,

  /* Computed Parameter: Integrator_gainval_b
   * Referenced by: '<S241>/Integrator'
   */
  0.01,

  /* Computed Parameter: Constant_Value_k
   * Referenced by: '<S76>/Constant'
   */
  1,

  /* Computed Parameter: Constant2_Value
   * Referenced by: '<S76>/Constant2'
   */
  -1,

  /* Computed Parameter: Constant3_Value
   * Referenced by: '<S76>/Constant3'
   */
  1,

  /* Computed Parameter: Constant4_Value
   * Referenced by: '<S76>/Constant4'
   */
  -1,

  /* Computed Parameter: Constant_Value_e
   * Referenced by: '<S175>/Constant'
   */
  1,

  /* Computed Parameter: Constant2_Value_f
   * Referenced by: '<S175>/Constant2'
   */
  -1,

  /* Computed Parameter: Constant3_Value_i
   * Referenced by: '<S175>/Constant3'
   */
  1,

  /* Computed Parameter: Constant4_Value_i
   * Referenced by: '<S175>/Constant4'
   */
  -1,

  /* Computed Parameter: Constant_Value_l
   * Referenced by: '<S232>/Constant'
   */
  1,

  /* Computed Parameter: Constant2_Value_m
   * Referenced by: '<S232>/Constant2'
   */
  -1,

  /* Computed Parameter: Constant3_Value_e
   * Referenced by: '<S232>/Constant3'
   */
  1,

  /* Computed Parameter: Constant4_Value_j
   * Referenced by: '<S232>/Constant4'
   */
  -1,

  /* Computed Parameter: Constant_Value_f
   * Referenced by: '<S285>/Constant'
   */
  1,

  /* Computed Parameter: Constant2_Value_o
   * Referenced by: '<S285>/Constant2'
   */
  -1,

  /* Computed Parameter: Constant3_Value_m
   * Referenced by: '<S285>/Constant3'
   */
  1,

  /* Computed Parameter: Constant4_Value_o
   * Referenced by: '<S285>/Constant4'
   */
  -1
};

PW_SMRv7_cal_type *PW_SMRv7_cal = &PW_SMRv7_cal_impl;
