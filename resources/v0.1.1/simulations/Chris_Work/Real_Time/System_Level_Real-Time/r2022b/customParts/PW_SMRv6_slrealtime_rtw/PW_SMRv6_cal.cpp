#include "PW_SMRv6_cal.h"
#include "PW_SMRv6.h"

/* Storage class 'PageSwitching' */
PW_SMRv6_cal_type PW_SMRv6_cal_impl = {
  /* Expression: [1 -0.81873]
   * Referenced by: '<S21>/Discrete Transfer Fcn'
   */
  { 1.0, -0.81873 },

  /* Expression: [1 -0.81873]
   * Referenced by: '<S19>/Discrete Transfer Fcn'
   */
  { 1.0, -0.81873 },

  /* Expression: [169 182 191 201 210 217 224 231 237 243]
   * Referenced by: '<S19>/1-D Lookup Table'
   */
  { 169.0, 182.0, 191.0, 201.0, 210.0, 217.0, 224.0, 231.0, 237.0, 243.0 },

  /* Expression: [1.5 2 2.5 3 3.5 4 4.5 5 5.5 6]
   * Referenced by: '<S19>/1-D Lookup Table'
   */
  { 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.5, 5.0, 5.5, 6.0 },

  /* Expression: [3.0 2.5 2.0 1.5 1.2 1.0 0.6 0]
   * Referenced by: '<S21>/1-D Lookup Table'
   */
  { 3.0, 2.5, 2.0, 1.5, 1.2, 1.0, 0.6, 0.0 },

  /* Expression: [315 320 325 330 332 333 334 335]
   * Referenced by: '<S21>/1-D Lookup Table'
   */
  { 315.0, 320.0, 325.0, 330.0, 332.0, 333.0, 334.0, 335.0 },

  /* Mask Parameter: DiscretePIDController_D
   * Referenced by: '<S124>/Derivative Gain'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_I
   * Referenced by: '<S73>/Integral Gain'
   */
  0.002,

  /* Mask Parameter: DiscretePIDController_I_p
   * Referenced by: '<S127>/Integral Gain'
   */
  0.002,

  /* Mask Parameter: DiscretePIDController_InitialCo
   * Referenced by: '<S125>/Filter'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_Initial_h
   * Referenced by: '<S76>/Integrator'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_Initial_o
   * Referenced by: '<S130>/Integrator'
   */
  0.5,

  /* Mask Parameter: DiscretePIDController_LowerSa_d
   * Referenced by:
   *   '<S137>/Saturation'
   *   '<S123>/DeadZone'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_N
   * Referenced by: '<S133>/Filter Coefficient'
   */
  100.0,

  /* Mask Parameter: DiscretePIDController_P
   * Referenced by: '<S81>/Proportional Gain'
   */
  0.005,

  /* Mask Parameter: DiscretePIDController_P_l
   * Referenced by: '<S135>/Proportional Gain'
   */
  0.01,

  /* Mask Parameter: DiscretePIDController_UpperSa_j
   * Referenced by:
   *   '<S137>/Saturation'
   *   '<S123>/DeadZone'
   */
  3.0,

  /* Expression: 0
   * Referenced by: '<S67>/Constant1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S121>/Constant1'
   */
  0.0,

  /* Expression: [0.18127]
   * Referenced by: '<S21>/Discrete Transfer Fcn'
   */
  0.18127,

  /* Expression: 0
   * Referenced by: '<S21>/Discrete Transfer Fcn'
   */
  0.0,

  /* Expression: [0.18127]
   * Referenced by: '<S19>/Discrete Transfer Fcn'
   */
  0.18127,

  /* Expression: 0
   * Referenced by: '<S19>/Discrete Transfer Fcn'
   */
  0.0,

  /* Expression: 2.5
   * Referenced by: '<S19>/Saturation1'
   */
  2.5,

  /* Expression: 0
   * Referenced by: '<S19>/Saturation1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S22>/Unit Delay'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S67>/Clamping_zero'
   */
  0.0,

  /* Computed Parameter: Integrator_gainval
   * Referenced by: '<S76>/Integrator'
   */
  0.01,

  /* Expression: 333
   * Referenced by: '<S21>/Constant'
   */
  333.0,

  /* Expression: 0
   * Referenced by: '<S121>/Clamping_zero'
   */
  0.0,

  /* Computed Parameter: Integrator_gainval_b
   * Referenced by: '<S130>/Integrator'
   */
  0.01,

  /* Computed Parameter: Filter_gainval
   * Referenced by: '<S125>/Filter'
   */
  0.01,

  /* Expression: 0
   * Referenced by: '<S21>/Saturation'
   */
  0.0,

  /* Expression: 0.021
   * Referenced by: '<S22>/Relay'
   */
  0.021,

  /* Expression: 0.02
   * Referenced by: '<S22>/Relay'
   */
  0.02,

  /* Expression: 1
   * Referenced by: '<S22>/Relay'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S22>/Relay'
   */
  0.0,

  /* Computed Parameter: Constant_Value_b
   * Referenced by: '<S67>/Constant'
   */
  1,

  /* Computed Parameter: Constant2_Value
   * Referenced by: '<S67>/Constant2'
   */
  -1,

  /* Computed Parameter: Constant3_Value
   * Referenced by: '<S67>/Constant3'
   */
  1,

  /* Computed Parameter: Constant4_Value
   * Referenced by: '<S67>/Constant4'
   */
  -1,

  /* Computed Parameter: Constant_Value_d
   * Referenced by: '<S121>/Constant'
   */
  1,

  /* Computed Parameter: Constant2_Value_h
   * Referenced by: '<S121>/Constant2'
   */
  -1,

  /* Computed Parameter: Constant3_Value_k
   * Referenced by: '<S121>/Constant3'
   */
  1,

  /* Computed Parameter: Constant4_Value_p
   * Referenced by: '<S121>/Constant4'
   */
  -1
};

PW_SMRv6_cal_type *PW_SMRv6_cal{ &PW_SMRv6_cal_impl };
