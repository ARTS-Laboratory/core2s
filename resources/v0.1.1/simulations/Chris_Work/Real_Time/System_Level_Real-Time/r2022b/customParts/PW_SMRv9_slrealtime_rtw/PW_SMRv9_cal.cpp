#include "PW_SMRv9_cal.h"
#include "PW_SMRv9.h"

/* Storage class 'PageSwitching' */
PW_SMRv9_cal_type PW_SMRv9_cal_impl = {
  /* Expression: [1 -0.81873]
   * Referenced by: '<S90>/Discrete Transfer Fcn'
   */
  { 1.0, -0.81873 },

  /* Expression: [1 -0.81873]
   * Referenced by: '<S91>/Discrete Transfer Fcn3'
   */
  { 1.0, -0.81873 },

  /* Expression: [1 -0.81873]
   * Referenced by: '<S92>/Discrete Transfer Fcn'
   */
  { 1.0, -0.81873 },

  /* Expression: [1 -0.81873]
   * Referenced by: '<Root>/Discrete Transfer Fcn'
   */
  { 1.0, -0.81873 },

  /* Expression: [1 -0.81873]
   * Referenced by: '<S84>/Discrete Transfer Fcn'
   */
  { 1.0, -0.81873 },

  /* Expression: [1 -0.81873]
   * Referenced by: '<Root>/Discrete Transfer Fcn3'
   */
  { 1.0, -0.81873 },

  /* Expression: [1 -0.81873]
   * Referenced by: '<Root>/Discrete Transfer Fcn1'
   */
  { 1.0, -0.81873 },

  /* Expression: [1 -0.81873]
   * Referenced by: '<Root>/Discrete Transfer Fcn2'
   */
  { 1.0, -0.81873 },

  /* Expression: [87 95 109 119 129 133 142 149 153 162]
   * Referenced by: '<S84>/1-D Lookup Table'
   */
  { 87.0, 95.0, 109.0, 119.0, 129.0, 133.0, 142.0, 149.0, 153.0, 162.0 },

  /* Expression: [1.5 2 2.5 3 3.5 4 4.5 5 5.5 6]
   * Referenced by: '<S84>/1-D Lookup Table'
   */
  { 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.5, 5.0, 5.5, 6.0 },

  /* Expression: [3.0 2.5 2.0 1.5 1.2 1.0 0.6 0]
   * Referenced by: '<S92>/1-D Lookup Table'
   */
  { 3.0, 2.5, 2.0, 1.5, 1.2, 1.0, 0.6, 0.0 },

  /* Expression: [315 320 325 330 332 333 334 335]
   * Referenced by: '<S92>/1-D Lookup Table'
   */
  { 315.0, 320.0, 325.0, 330.0, 332.0, 333.0, 334.0, 335.0 },

  /* Expression: [1 -0.81873]
   * Referenced by: '<S90>/Discrete Transfer Fcn1'
   */
  { 1.0, -0.81873 },

  /* Mask Parameter: BandLimitedWhiteNoise_Cov
   * Referenced by: '<S1>/Output'
   */
  0.01,

  /* Mask Parameter: DiscretePIDController_D
   * Referenced by: '<S474>/Derivative Gain'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_I
   * Referenced by: '<S123>/Integral Gain'
   */
  5.0,

  /* Mask Parameter: DiscretePIDController_I_a
   * Referenced by: '<S259>/Integral Gain'
   */
  0.002,

  /* Mask Parameter: DiscretePIDController_I_l
   * Referenced by: '<S477>/Integral Gain'
   */
  0.002,

  /* Mask Parameter: DiscretePIDController_I_b
   * Referenced by: '<S320>/Integral Gain'
   */
  0.002,

  /* Mask Parameter: DiscretePIDController_I_l2
   * Referenced by: '<S374>/Integral Gain'
   */
  0.15,

  /* Mask Parameter: DiscretePIDController1_I
   * Referenced by: '<S424>/Integral Gain'
   */
  2.0,

  /* Mask Parameter: DiscretePIDController_InitialCo
   * Referenced by: '<S475>/Filter'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_Initial_n
   * Referenced by: '<S126>/Integrator'
   */
  376.99,

  /* Mask Parameter: DiscretePIDController_Initial_p
   * Referenced by: '<S262>/Integrator'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_Initial_k
   * Referenced by: '<S480>/Integrator'
   */
  0.5,

  /* Mask Parameter: DiscretePIDController_Initial_i
   * Referenced by: '<S323>/Integrator'
   */
  0.75,

  /* Mask Parameter: DiscretePIDController_Initia_nn
   * Referenced by: '<S377>/Integrator'
   */
  376.99,

  /* Mask Parameter: DiscretePIDController1_InitialC
   * Referenced by: '<S427>/Integrator'
   */
  376.99,

  /* Mask Parameter: DiscretePIDController_LowerSatu
   * Referenced by:
   *   '<S133>/Saturation'
   *   '<S119>/DeadZone'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_LowerSa_a
   * Referenced by:
   *   '<S487>/Saturation'
   *   '<S473>/DeadZone'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_LowerSa_b
   * Referenced by:
   *   '<S330>/Saturation'
   *   '<S316>/DeadZone'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_LowerS_bz
   * Referenced by:
   *   '<S384>/Saturation'
   *   '<S370>/DeadZone'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController1_LowerSat
   * Referenced by:
   *   '<S434>/Saturation'
   *   '<S420>/DeadZone'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_N
   * Referenced by: '<S483>/Filter Coefficient'
   */
  100.0,

  /* Mask Parameter: DiscretePIDController_P
   * Referenced by: '<S131>/Proportional Gain'
   */
  40.0,

  /* Mask Parameter: DiscretePIDController_P_e
   * Referenced by: '<S267>/Proportional Gain'
   */
  0.005,

  /* Mask Parameter: DiscretePIDController_P_i
   * Referenced by: '<S485>/Proportional Gain'
   */
  0.01,

  /* Mask Parameter: DiscretePIDController_P_j
   * Referenced by: '<S328>/Proportional Gain'
   */
  0.08,

  /* Mask Parameter: DiscretePIDController_P_o
   * Referenced by: '<S382>/Proportional Gain'
   */
  40.0,

  /* Mask Parameter: DiscretePIDController1_P
   * Referenced by: '<S432>/Proportional Gain'
   */
  500.0,

  /* Mask Parameter: DiscretePIDController_UpperSatu
   * Referenced by:
   *   '<S133>/Saturation'
   *   '<S119>/DeadZone'
   */
  580.0,

  /* Mask Parameter: DiscretePIDController_UpperS_jt
   * Referenced by:
   *   '<S487>/Saturation'
   *   '<S473>/DeadZone'
   */
  3.0,

  /* Mask Parameter: DiscretePIDController_UpperSa_c
   * Referenced by:
   *   '<S330>/Saturation'
   *   '<S316>/DeadZone'
   */
  1.0,

  /* Mask Parameter: DiscretePIDController_UpperSa_p
   * Referenced by:
   *   '<S384>/Saturation'
   *   '<S370>/DeadZone'
   */
  470.0,

  /* Mask Parameter: DiscretePIDController1_UpperSat
   * Referenced by:
   *   '<S434>/Saturation'
   *   '<S420>/DeadZone'
   */
  470.0,

  /* Mask Parameter: BandLimitedWhiteNoise_seed
   * Referenced by: '<S1>/White Noise'
   */
  23341.0,

  /* Expression: 0
   * Referenced by: '<S117>/Constant1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S253>/Constant1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S471>/Constant1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S314>/Constant1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S368>/Constant1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S418>/Constant1'
   */
  0.0,

  /* Expression: [0.18127]
   * Referenced by: '<S90>/Discrete Transfer Fcn'
   */
  0.18127,

  /* Expression: 0
   * Referenced by: '<S90>/Discrete Transfer Fcn'
   */
  0.0,

  /* Expression: [0.18127]
   * Referenced by: '<S91>/Discrete Transfer Fcn3'
   */
  0.18127,

  /* Expression: 376.99
   * Referenced by: '<S91>/Discrete Transfer Fcn3'
   */
  376.99,

  /* Expression: 0
   * Referenced by: '<Root>/Constant4'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant5'
   */
  1.0,

  /* Expression: 1800
   * Referenced by: '<Root>/Switch'
   */
  1800.0,

  /* Expression: [0.18127]
   * Referenced by: '<S92>/Discrete Transfer Fcn'
   */
  0.18127,

  /* Expression: 0
   * Referenced by: '<S92>/Discrete Transfer Fcn'
   */
  0.0,

  /* Expression: [0.18127]
   * Referenced by: '<Root>/Discrete Transfer Fcn'
   */
  0.18127,

  /* Expression: 550
   * Referenced by: '<Root>/Discrete Transfer Fcn'
   */
  550.0,

  /* Expression: [0.18127]
   * Referenced by: '<S84>/Discrete Transfer Fcn'
   */
  0.18127,

  /* Expression: 0
   * Referenced by: '<S84>/Discrete Transfer Fcn'
   */
  0.0,

  /* Expression: 0.3E-9
   * Referenced by: '<S84>/Saturation1'
   */
  3.0E-10,

  /* Expression: 0
   * Referenced by: '<S84>/Saturation1'
   */
  0.0,

  /* Expression: [0.18127]
   * Referenced by: '<Root>/Discrete Transfer Fcn3'
   */
  0.18127,

  /* Expression: 0
   * Referenced by: '<Root>/Discrete Transfer Fcn3'
   */
  0.0,

  /* Expression: [0.18127]
   * Referenced by: '<Root>/Discrete Transfer Fcn1'
   */
  0.18127,

  /* Expression: 0
   * Referenced by: '<Root>/Discrete Transfer Fcn1'
   */
  0.0,

  /* Expression: 1000
   * Referenced by: '<Root>/Saturation1'
   */
  1000.0,

  /* Expression: 0
   * Referenced by: '<Root>/Saturation1'
   */
  0.0,

  /* Expression: 1/1000
   * Referenced by: '<Root>/Gain1'
   */
  0.001,

  /* Expression: 1/1000
   * Referenced by: '<Root>/Gain2'
   */
  0.001,

  /* Expression: 100
   * Referenced by: '<Root>/Constant1'
   */
  100.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant2'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<Root>/Switch1'
   */
  0.5,

  /* Expression: 1
   * Referenced by: '<Root>/Constant6'
   */
  1.0,

  /* Expression: 1.5
   * Referenced by: '<Root>/Constant3'
   */
  1.5,

  /* Expression: 0
   * Referenced by: '<S1>/White Noise'
   */
  0.0,

  /* Computed Parameter: WhiteNoise_StdDev
   * Referenced by: '<S1>/White Noise'
   */
  1.0,

  /* Expression: [0.18127]
   * Referenced by: '<Root>/Discrete Transfer Fcn2'
   */
  0.18127,

  /* Expression: 0
   * Referenced by: '<Root>/Discrete Transfer Fcn2'
   */
  0.0,

  /* Expression: 200
   * Referenced by: '<Root>/Gain'
   */
  200.0,

  /* Expression: 7
   * Referenced by: '<Root>/Constant'
   */
  7.0,

  /* Expression: 0
   * Referenced by: '<S117>/Clamping_zero'
   */
  0.0,

  /* Computed Parameter: Integrator_gainval
   * Referenced by: '<S126>/Integrator'
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

  /* Expression: 0.8
   * Referenced by: '<Root>/Constant7'
   */
  0.8,

  /* Expression: 0
   * Referenced by: '<S253>/Clamping_zero'
   */
  0.0,

  /* Computed Parameter: Integrator_gainval_h
   * Referenced by: '<S262>/Integrator'
   */
  0.01,

  /* Expression: 330
   * Referenced by: '<S92>/Constant'
   */
  330.0,

  /* Expression: 0
   * Referenced by: '<S471>/Clamping_zero'
   */
  0.0,

  /* Computed Parameter: Integrator_gainval_m
   * Referenced by: '<S480>/Integrator'
   */
  0.01,

  /* Computed Parameter: Filter_gainval
   * Referenced by: '<S475>/Filter'
   */
  0.01,

  /* Expression: 0
   * Referenced by: '<S92>/Saturation'
   */
  0.0,

  /* Expression: [0.18127]
   * Referenced by: '<S90>/Discrete Transfer Fcn1'
   */
  0.18127,

  /* Expression: 0
   * Referenced by: '<S90>/Discrete Transfer Fcn1'
   */
  0.0,

  /* Expression: 1/0.01
   * Referenced by: '<S90>/Gain'
   */
  100.0,

  /* Expression: 1
   * Referenced by: '<S90>/Saturation'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S90>/Saturation'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S90>/Gain1'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S90>/Bias'
   */
  1.0,

  /* Expression: 0.45
   * Referenced by: '<S90>/Constant'
   */
  0.45,

  /* Expression: 0
   * Referenced by: '<S314>/Clamping_zero'
   */
  0.0,

  /* Computed Parameter: Integrator_gainval_o
   * Referenced by: '<S323>/Integrator'
   */
  0.01,

  /* Expression: 8
   * Referenced by: '<S91>/Constant'
   */
  8.0,

  /* Expression: 15.25
   * Referenced by: '<S91>/Constant7'
   */
  15.25,

  /* Expression: 0
   * Referenced by: '<S368>/Clamping_zero'
   */
  0.0,

  /* Computed Parameter: Integrator_gainval_mx
   * Referenced by: '<S377>/Integrator'
   */
  0.01,

  /* Expression: 0
   * Referenced by: '<S418>/Clamping_zero'
   */
  0.0,

  /* Computed Parameter: Integrator_gainval_b
   * Referenced by: '<S427>/Integrator'
   */
  0.01,

  /* Expression: 470
   * Referenced by: '<S91>/Saturation2'
   */
  470.0,

  /* Expression: 0
   * Referenced by: '<S91>/Saturation2'
   */
  0.0,

  /* Expression: 7
   * Referenced by: '<Root>/Step'
   */
  7.0,

  /* Expression: 0
   * Referenced by: '<Root>/Step'
   */
  0.0,

  /* Expression: 800
   * Referenced by: '<Root>/Step'
   */
  800.0,

  /* Expression: 17
   * Referenced by: '<Root>/Step1'
   */
  17.0,

  /* Expression: 0
   * Referenced by: '<Root>/Step1'
   */
  0.0,

  /* Expression: -800
   * Referenced by: '<Root>/Step1'
   */
  -800.0,

  /* Computed Parameter: Constant_Value_i
   * Referenced by: '<S117>/Constant'
   */
  1,

  /* Computed Parameter: Constant2_Value_c
   * Referenced by: '<S117>/Constant2'
   */
  -1,

  /* Computed Parameter: Constant3_Value_k
   * Referenced by: '<S117>/Constant3'
   */
  1,

  /* Computed Parameter: Constant4_Value_f
   * Referenced by: '<S117>/Constant4'
   */
  -1,

  /* Computed Parameter: Constant_Value_m
   * Referenced by: '<S253>/Constant'
   */
  1,

  /* Computed Parameter: Constant2_Value_b
   * Referenced by: '<S253>/Constant2'
   */
  -1,

  /* Computed Parameter: Constant3_Value_m
   * Referenced by: '<S253>/Constant3'
   */
  1,

  /* Computed Parameter: Constant4_Value_h
   * Referenced by: '<S253>/Constant4'
   */
  -1,

  /* Computed Parameter: Constant_Value_n
   * Referenced by: '<S314>/Constant'
   */
  1,

  /* Computed Parameter: Constant2_Value_n
   * Referenced by: '<S314>/Constant2'
   */
  -1,

  /* Computed Parameter: Constant3_Value_c
   * Referenced by: '<S314>/Constant3'
   */
  1,

  /* Computed Parameter: Constant4_Value_o
   * Referenced by: '<S314>/Constant4'
   */
  -1,

  /* Computed Parameter: Constant_Value_jr
   * Referenced by: '<S368>/Constant'
   */
  1,

  /* Computed Parameter: Constant2_Value_bc
   * Referenced by: '<S368>/Constant2'
   */
  -1,

  /* Computed Parameter: Constant3_Value_l
   * Referenced by: '<S368>/Constant3'
   */
  1,

  /* Computed Parameter: Constant4_Value_ou
   * Referenced by: '<S368>/Constant4'
   */
  -1,

  /* Computed Parameter: Constant_Value_p
   * Referenced by: '<S418>/Constant'
   */
  1,

  /* Computed Parameter: Constant2_Value_a
   * Referenced by: '<S418>/Constant2'
   */
  -1,

  /* Computed Parameter: Constant3_Value_c3
   * Referenced by: '<S418>/Constant3'
   */
  1,

  /* Computed Parameter: Constant4_Value_d
   * Referenced by: '<S418>/Constant4'
   */
  -1,

  /* Computed Parameter: Constant_Value_d
   * Referenced by: '<S471>/Constant'
   */
  1,

  /* Computed Parameter: Constant2_Value_k
   * Referenced by: '<S471>/Constant2'
   */
  -1,

  /* Computed Parameter: Constant3_Value_h
   * Referenced by: '<S471>/Constant3'
   */
  1,

  /* Computed Parameter: Constant4_Value_b
   * Referenced by: '<S471>/Constant4'
   */
  -1
};

PW_SMRv9_cal_type *PW_SMRv9_cal = &PW_SMRv9_cal_impl;
