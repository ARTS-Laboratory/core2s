#ifndef RTW_HEADER_PW_SMRv7_cal_h_
#define RTW_HEADER_PW_SMRv7_cal_h_
#include "rtwtypes.h"

/* Storage class 'PageSwitching', for system '<Root>' */
struct PW_SMRv7_cal_type {
  real_T DiscreteTransferFcn_DenCoef[2];/* Expression: [1 -0.81873]
                                         * Referenced by: '<S46>/Discrete Transfer Fcn'
                                         */
  real_T DiscreteTransferFcn_DenCoef_l[2];/* Expression: [1 -0.81873]
                                           * Referenced by: '<Root>/Discrete Transfer Fcn'
                                           */
  real_T DiscreteTransferFcn_DenCoef_b[2];/* Expression: [1 -0.81873]
                                           * Referenced by: '<S42>/Discrete Transfer Fcn'
                                           */
  real_T DiscreteTransferFcn_DenCoef_i[2];/* Expression: [1 -0.81873]
                                           * Referenced by: '<S45>/Discrete Transfer Fcn'
                                           */
  real_T uDLookupTable_tableData[10];
                        /* Expression: [171 179 193 203 213 217 226 233 240 246]
                         * Referenced by: '<S42>/1-D Lookup Table'
                         */
  real_T uDLookupTable_bp01Data[10];
                                  /* Expression: [1.5 2 2.5 3 3.5 4 4.5 5 5.5 6]
                                   * Referenced by: '<S42>/1-D Lookup Table'
                                   */
  real_T uDLookupTable_tableData_j[8];
                                  /* Expression: [3.0 2.5 2.0 1.5 1.2 1.0 0.6 0]
                                   * Referenced by: '<S46>/1-D Lookup Table'
                                   */
  real_T uDLookupTable_bp01Data_p[8];
                                /* Expression: [315 320 325 330 332 333 334 335]
                                 * Referenced by: '<S46>/1-D Lookup Table'
                                 */
  real_T DiscretePIDController_D;     /* Mask Parameter: DiscretePIDController_D
                                       * Referenced by: '<S278>/Derivative Gain'
                                       */
  real_T DiscretePIDController_I;     /* Mask Parameter: DiscretePIDController_I
                                       * Referenced by: '<S77>/Integral Gain'
                                       */
  real_T DiscretePIDController_I_o; /* Mask Parameter: DiscretePIDController_I_o
                                     * Referenced by: '<S171>/Integral Gain'
                                     */
  real_T DiscretePIDController_I_p; /* Mask Parameter: DiscretePIDController_I_p
                                     * Referenced by: '<S281>/Integral Gain'
                                     */
  real_T DiscretePIDController_I_n; /* Mask Parameter: DiscretePIDController_I_n
                                     * Referenced by: '<S228>/Integral Gain'
                                     */
  real_T DiscretePIDController_InitialCo;
                              /* Mask Parameter: DiscretePIDController_InitialCo
                               * Referenced by: '<S279>/Filter'
                               */
  real_T DiscretePIDController_Initial_f;
                              /* Mask Parameter: DiscretePIDController_Initial_f
                               * Referenced by: '<S80>/Integrator'
                               */
  real_T DiscretePIDController_Initial_g;
                              /* Mask Parameter: DiscretePIDController_Initial_g
                               * Referenced by: '<S174>/Integrator'
                               */
  real_T DiscretePIDController_Initial_m;
                              /* Mask Parameter: DiscretePIDController_Initial_m
                               * Referenced by: '<S284>/Integrator'
                               */
  real_T DiscretePIDController_Initia_gu;
                              /* Mask Parameter: DiscretePIDController_Initia_gu
                               * Referenced by: '<S231>/Integrator'
                               */
  real_T DiscretePIDController_LowerSatu;
                              /* Mask Parameter: DiscretePIDController_LowerSatu
                               * Referenced by:
                               *   '<S87>/Saturation'
                               *   '<S73>/DeadZone'
                               */
  real_T DiscretePIDController_LowerSa_a;
                              /* Mask Parameter: DiscretePIDController_LowerSa_a
                               * Referenced by:
                               *   '<S291>/Saturation'
                               *   '<S277>/DeadZone'
                               */
  real_T DiscretePIDController_LowerSa_h;
                              /* Mask Parameter: DiscretePIDController_LowerSa_h
                               * Referenced by:
                               *   '<S238>/Saturation'
                               *   '<S224>/DeadZone'
                               */
  real_T DiscretePIDController_N;     /* Mask Parameter: DiscretePIDController_N
                                       * Referenced by: '<S287>/Filter Coefficient'
                                       */
  real_T DiscretePIDController_P;     /* Mask Parameter: DiscretePIDController_P
                                       * Referenced by: '<S85>/Proportional Gain'
                                       */
  real_T DiscretePIDController_P_h; /* Mask Parameter: DiscretePIDController_P_h
                                     * Referenced by: '<S179>/Proportional Gain'
                                     */
  real_T DiscretePIDController_P_l; /* Mask Parameter: DiscretePIDController_P_l
                                     * Referenced by: '<S289>/Proportional Gain'
                                     */
  real_T DiscretePIDController_P_p; /* Mask Parameter: DiscretePIDController_P_p
                                     * Referenced by: '<S236>/Proportional Gain'
                                     */
  real_T DiscretePIDController_UpperSatu;
                              /* Mask Parameter: DiscretePIDController_UpperSatu
                               * Referenced by:
                               *   '<S87>/Saturation'
                               *   '<S73>/DeadZone'
                               */
  real_T DiscretePIDController_UpperSa_n;
                              /* Mask Parameter: DiscretePIDController_UpperSa_n
                               * Referenced by:
                               *   '<S291>/Saturation'
                               *   '<S277>/DeadZone'
                               */
  real_T DiscretePIDController_UpperSa_l;
                              /* Mask Parameter: DiscretePIDController_UpperSa_l
                               * Referenced by:
                               *   '<S238>/Saturation'
                               *   '<S224>/DeadZone'
                               */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S71>/Constant1'
                                        */
  real_T Constant1_Value_d;            /* Expression: 0
                                        * Referenced by: '<S165>/Constant1'
                                        */
  real_T Constant1_Value_i;            /* Expression: 0
                                        * Referenced by: '<S275>/Constant1'
                                        */
  real_T Constant1_Value_n;            /* Expression: 0
                                        * Referenced by: '<S222>/Constant1'
                                        */
  real_T DiscreteTransferFcn_NumCoef;  /* Expression: [0.18127]
                                        * Referenced by: '<S46>/Discrete Transfer Fcn'
                                        */
  real_T DiscreteTransferFcn_InitialStat;/* Expression: 0
                                          * Referenced by: '<S46>/Discrete Transfer Fcn'
                                          */
  real_T DiscreteTransferFcn_NumCoef_e;/* Expression: [0.18127]
                                        * Referenced by: '<Root>/Discrete Transfer Fcn'
                                        */
  real_T DiscreteTransferFcn_InitialSt_f;/* Expression: 0
                                          * Referenced by: '<Root>/Discrete Transfer Fcn'
                                          */
  real_T DiscreteTransferFcn_NumCoef_er;/* Expression: [0.18127]
                                         * Referenced by: '<S42>/Discrete Transfer Fcn'
                                         */
  real_T DiscreteTransferFcn_InitialSt_i;/* Expression: 0
                                          * Referenced by: '<S42>/Discrete Transfer Fcn'
                                          */
  real_T Saturation1_UpperSat;         /* Expression: 2.5
                                        * Referenced by: '<S42>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S42>/Saturation1'
                                        */
  real_T DiscreteTransferFcn_NumCoef_o;/* Expression: [0.18127]
                                        * Referenced by: '<S45>/Discrete Transfer Fcn'
                                        */
  real_T DiscreteTransferFcn_InitialSt_h;/* Expression: 0
                                          * Referenced by: '<S45>/Discrete Transfer Fcn'
                                          */
  real_T Constant_Value;               /* Expression: 3.5
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Clamping_zero_Value;          /* Expression: 0
                                        * Referenced by: '<S71>/Clamping_zero'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S80>/Integrator'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 550
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Clamping_zero_Value_e;        /* Expression: 0
                                        * Referenced by: '<S165>/Clamping_zero'
                                        */
  real_T Integrator_gainval_k;       /* Computed Parameter: Integrator_gainval_k
                                      * Referenced by: '<S174>/Integrator'
                                      */
  real_T Constant_Value_c;             /* Expression: 333
                                        * Referenced by: '<S46>/Constant'
                                        */
  real_T Clamping_zero_Value_m;        /* Expression: 0
                                        * Referenced by: '<S275>/Clamping_zero'
                                        */
  real_T Integrator_gainval_a;       /* Computed Parameter: Integrator_gainval_a
                                      * Referenced by: '<S284>/Integrator'
                                      */
  real_T Filter_gainval;               /* Computed Parameter: Filter_gainval
                                        * Referenced by: '<S279>/Filter'
                                        */
  real_T Saturation_LowerSat_j;        /* Expression: 0
                                        * Referenced by: '<S46>/Saturation'
                                        */
  real_T Clamping_zero_Value_f;        /* Expression: 0
                                        * Referenced by: '<S222>/Clamping_zero'
                                        */
  real_T Gain_Gain;                    /* Expression: 0.15
                                        * Referenced by: '<S45>/Gain'
                                        */
  real_T Integrator_gainval_b;       /* Computed Parameter: Integrator_gainval_b
                                      * Referenced by: '<S231>/Integrator'
                                      */
  int8_T Constant_Value_k;             /* Computed Parameter: Constant_Value_k
                                        * Referenced by: '<S71>/Constant'
                                        */
  int8_T Constant2_Value;              /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S71>/Constant2'
                                        */
  int8_T Constant3_Value;              /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S71>/Constant3'
                                        */
  int8_T Constant4_Value;              /* Computed Parameter: Constant4_Value
                                        * Referenced by: '<S71>/Constant4'
                                        */
  int8_T Constant_Value_e;             /* Computed Parameter: Constant_Value_e
                                        * Referenced by: '<S165>/Constant'
                                        */
  int8_T Constant2_Value_f;            /* Computed Parameter: Constant2_Value_f
                                        * Referenced by: '<S165>/Constant2'
                                        */
  int8_T Constant3_Value_i;            /* Computed Parameter: Constant3_Value_i
                                        * Referenced by: '<S165>/Constant3'
                                        */
  int8_T Constant4_Value_i;            /* Computed Parameter: Constant4_Value_i
                                        * Referenced by: '<S165>/Constant4'
                                        */
  int8_T Constant_Value_l;             /* Computed Parameter: Constant_Value_l
                                        * Referenced by: '<S222>/Constant'
                                        */
  int8_T Constant2_Value_m;            /* Computed Parameter: Constant2_Value_m
                                        * Referenced by: '<S222>/Constant2'
                                        */
  int8_T Constant3_Value_e;            /* Computed Parameter: Constant3_Value_e
                                        * Referenced by: '<S222>/Constant3'
                                        */
  int8_T Constant4_Value_j;            /* Computed Parameter: Constant4_Value_j
                                        * Referenced by: '<S222>/Constant4'
                                        */
  int8_T Constant_Value_f;             /* Computed Parameter: Constant_Value_f
                                        * Referenced by: '<S275>/Constant'
                                        */
  int8_T Constant2_Value_o;            /* Computed Parameter: Constant2_Value_o
                                        * Referenced by: '<S275>/Constant2'
                                        */
  int8_T Constant3_Value_m;            /* Computed Parameter: Constant3_Value_m
                                        * Referenced by: '<S275>/Constant3'
                                        */
  int8_T Constant4_Value_o;            /* Computed Parameter: Constant4_Value_o
                                        * Referenced by: '<S275>/Constant4'
                                        */
};

/* Storage class 'PageSwitching' */
extern PW_SMRv7_cal_type PW_SMRv7_cal_impl;
extern PW_SMRv7_cal_type *PW_SMRv7_cal;

#endif                                 /* RTW_HEADER_PW_SMRv7_cal_h_ */
