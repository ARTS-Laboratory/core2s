#ifndef RTW_HEADER_PW_SMRv6_cal_h_
#define RTW_HEADER_PW_SMRv6_cal_h_
#include "rtwtypes.h"

/* Storage class 'PageSwitching', for system '<Root>' */
struct PW_SMRv6_cal_type {
  real_T DiscreteTransferFcn_DenCoef[2];/* Expression: [1 -0.81873]
                                         * Referenced by: '<S21>/Discrete Transfer Fcn'
                                         */
  real_T DiscreteTransferFcn_DenCoef_h[2];/* Expression: [1 -0.81873]
                                           * Referenced by: '<S19>/Discrete Transfer Fcn'
                                           */
  real_T uDLookupTable_tableData[10];
                        /* Expression: [169 182 191 201 210 217 224 231 237 243]
                         * Referenced by: '<S19>/1-D Lookup Table'
                         */
  real_T uDLookupTable_bp01Data[10];
                                  /* Expression: [1.5 2 2.5 3 3.5 4 4.5 5 5.5 6]
                                   * Referenced by: '<S19>/1-D Lookup Table'
                                   */
  real_T uDLookupTable_tableData_i[8];
                                  /* Expression: [3.0 2.5 2.0 1.5 1.2 1.0 0.6 0]
                                   * Referenced by: '<S21>/1-D Lookup Table'
                                   */
  real_T uDLookupTable_bp01Data_l[8];
                                /* Expression: [315 320 325 330 332 333 334 335]
                                 * Referenced by: '<S21>/1-D Lookup Table'
                                 */
  real_T DiscretePIDController_D;     /* Mask Parameter: DiscretePIDController_D
                                       * Referenced by: '<S124>/Derivative Gain'
                                       */
  real_T DiscretePIDController_I;     /* Mask Parameter: DiscretePIDController_I
                                       * Referenced by: '<S73>/Integral Gain'
                                       */
  real_T DiscretePIDController_I_p; /* Mask Parameter: DiscretePIDController_I_p
                                     * Referenced by: '<S127>/Integral Gain'
                                     */
  real_T DiscretePIDController_InitialCo;
                              /* Mask Parameter: DiscretePIDController_InitialCo
                               * Referenced by: '<S125>/Filter'
                               */
  real_T DiscretePIDController_Initial_h;
                              /* Mask Parameter: DiscretePIDController_Initial_h
                               * Referenced by: '<S76>/Integrator'
                               */
  real_T DiscretePIDController_Initial_o;
                              /* Mask Parameter: DiscretePIDController_Initial_o
                               * Referenced by: '<S130>/Integrator'
                               */
  real_T DiscretePIDController_LowerSa_d;
                              /* Mask Parameter: DiscretePIDController_LowerSa_d
                               * Referenced by:
                               *   '<S137>/Saturation'
                               *   '<S123>/DeadZone'
                               */
  real_T DiscretePIDController_N;     /* Mask Parameter: DiscretePIDController_N
                                       * Referenced by: '<S133>/Filter Coefficient'
                                       */
  real_T DiscretePIDController_P;     /* Mask Parameter: DiscretePIDController_P
                                       * Referenced by: '<S81>/Proportional Gain'
                                       */
  real_T DiscretePIDController_P_l; /* Mask Parameter: DiscretePIDController_P_l
                                     * Referenced by: '<S135>/Proportional Gain'
                                     */
  real_T DiscretePIDController_UpperSa_j;
                              /* Mask Parameter: DiscretePIDController_UpperSa_j
                               * Referenced by:
                               *   '<S137>/Saturation'
                               *   '<S123>/DeadZone'
                               */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S67>/Constant1'
                                        */
  real_T Constant1_Value_a;            /* Expression: 0
                                        * Referenced by: '<S121>/Constant1'
                                        */
  real_T DiscreteTransferFcn_NumCoef;  /* Expression: [0.18127]
                                        * Referenced by: '<S21>/Discrete Transfer Fcn'
                                        */
  real_T DiscreteTransferFcn_InitialStat;/* Expression: 0
                                          * Referenced by: '<S21>/Discrete Transfer Fcn'
                                          */
  real_T DiscreteTransferFcn_NumCoef_f;/* Expression: [0.18127]
                                        * Referenced by: '<S19>/Discrete Transfer Fcn'
                                        */
  real_T DiscreteTransferFcn_InitialSt_k;/* Expression: 0
                                          * Referenced by: '<S19>/Discrete Transfer Fcn'
                                          */
  real_T Saturation1_UpperSat;         /* Expression: 2.5
                                        * Referenced by: '<S19>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S19>/Saturation1'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 1
                                        * Referenced by: '<S22>/Unit Delay'
                                        */
  real_T Clamping_zero_Value;          /* Expression: 0
                                        * Referenced by: '<S67>/Clamping_zero'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S76>/Integrator'
                                        */
  real_T Constant_Value;               /* Expression: 333
                                        * Referenced by: '<S21>/Constant'
                                        */
  real_T Clamping_zero_Value_l;        /* Expression: 0
                                        * Referenced by: '<S121>/Clamping_zero'
                                        */
  real_T Integrator_gainval_b;       /* Computed Parameter: Integrator_gainval_b
                                      * Referenced by: '<S130>/Integrator'
                                      */
  real_T Filter_gainval;               /* Computed Parameter: Filter_gainval
                                        * Referenced by: '<S125>/Filter'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0
                                        * Referenced by: '<S21>/Saturation'
                                        */
  real_T Relay_OnVal;                  /* Expression: 0.021
                                        * Referenced by: '<S22>/Relay'
                                        */
  real_T Relay_OffVal;                 /* Expression: 0.02
                                        * Referenced by: '<S22>/Relay'
                                        */
  real_T Relay_YOn;                    /* Expression: 1
                                        * Referenced by: '<S22>/Relay'
                                        */
  real_T Relay_YOff;                   /* Expression: 0
                                        * Referenced by: '<S22>/Relay'
                                        */
  int8_T Constant_Value_b;             /* Computed Parameter: Constant_Value_b
                                        * Referenced by: '<S67>/Constant'
                                        */
  int8_T Constant2_Value;              /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S67>/Constant2'
                                        */
  int8_T Constant3_Value;              /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S67>/Constant3'
                                        */
  int8_T Constant4_Value;              /* Computed Parameter: Constant4_Value
                                        * Referenced by: '<S67>/Constant4'
                                        */
  int8_T Constant_Value_d;             /* Computed Parameter: Constant_Value_d
                                        * Referenced by: '<S121>/Constant'
                                        */
  int8_T Constant2_Value_h;            /* Computed Parameter: Constant2_Value_h
                                        * Referenced by: '<S121>/Constant2'
                                        */
  int8_T Constant3_Value_k;            /* Computed Parameter: Constant3_Value_k
                                        * Referenced by: '<S121>/Constant3'
                                        */
  int8_T Constant4_Value_p;            /* Computed Parameter: Constant4_Value_p
                                        * Referenced by: '<S121>/Constant4'
                                        */
};

/* Storage class 'PageSwitching' */
extern PW_SMRv6_cal_type PW_SMRv6_cal_impl;
extern PW_SMRv6_cal_type *PW_SMRv6_cal;

#endif                                 /* RTW_HEADER_PW_SMRv6_cal_h_ */
