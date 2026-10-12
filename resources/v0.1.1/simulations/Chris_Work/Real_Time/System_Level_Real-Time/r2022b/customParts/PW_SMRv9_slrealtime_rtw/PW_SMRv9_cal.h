#ifndef RTW_HEADER_PW_SMRv9_cal_h_
#define RTW_HEADER_PW_SMRv9_cal_h_
#include "rtwtypes.h"

/* Storage class 'PageSwitching', for system '<Root>' */
struct PW_SMRv9_cal_type {
  real_T DiscreteTransferFcn_DenCoef[2];/* Expression: [1 -0.81873]
                                         * Referenced by: '<S90>/Discrete Transfer Fcn'
                                         */
  real_T DiscreteTransferFcn3_DenCoef[2];/* Expression: [1 -0.81873]
                                          * Referenced by: '<S91>/Discrete Transfer Fcn3'
                                          */
  real_T DiscreteTransferFcn_DenCoef_n[2];/* Expression: [1 -0.81873]
                                           * Referenced by: '<S92>/Discrete Transfer Fcn'
                                           */
  real_T DiscreteTransferFcn_DenCoef_o[2];/* Expression: [1 -0.81873]
                                           * Referenced by: '<Root>/Discrete Transfer Fcn'
                                           */
  real_T DiscreteTransferFcn_DenCoef_h[2];/* Expression: [1 -0.81873]
                                           * Referenced by: '<S84>/Discrete Transfer Fcn'
                                           */
  real_T DiscreteTransferFcn3_DenCoef_o[2];/* Expression: [1 -0.81873]
                                            * Referenced by: '<Root>/Discrete Transfer Fcn3'
                                            */
  real_T DiscreteTransferFcn1_DenCoef[2];/* Expression: [1 -0.81873]
                                          * Referenced by: '<Root>/Discrete Transfer Fcn1'
                                          */
  real_T DiscreteTransferFcn2_DenCoef[2];/* Expression: [1 -0.81873]
                                          * Referenced by: '<Root>/Discrete Transfer Fcn2'
                                          */
  real_T uDLookupTable_tableData[10];
                          /* Expression: [87 95 109 119 129 133 142 149 153 162]
                           * Referenced by: '<S84>/1-D Lookup Table'
                           */
  real_T uDLookupTable_bp01Data[10];
                                  /* Expression: [1.5 2 2.5 3 3.5 4 4.5 5 5.5 6]
                                   * Referenced by: '<S84>/1-D Lookup Table'
                                   */
  real_T uDLookupTable_tableData_g[8];
                                  /* Expression: [3.0 2.5 2.0 1.5 1.2 1.0 0.6 0]
                                   * Referenced by: '<S92>/1-D Lookup Table'
                                   */
  real_T uDLookupTable_bp01Data_n[8];
                                /* Expression: [315 320 325 330 332 333 334 335]
                                 * Referenced by: '<S92>/1-D Lookup Table'
                                 */
  real_T DiscreteTransferFcn1_DenCoef_h[2];/* Expression: [1 -0.81873]
                                            * Referenced by: '<S90>/Discrete Transfer Fcn1'
                                            */
  real_T BandLimitedWhiteNoise_Cov; /* Mask Parameter: BandLimitedWhiteNoise_Cov
                                     * Referenced by: '<S1>/Output'
                                     */
  real_T DiscretePIDController_D;     /* Mask Parameter: DiscretePIDController_D
                                       * Referenced by: '<S474>/Derivative Gain'
                                       */
  real_T DiscretePIDController_I;     /* Mask Parameter: DiscretePIDController_I
                                       * Referenced by: '<S123>/Integral Gain'
                                       */
  real_T DiscretePIDController_I_a; /* Mask Parameter: DiscretePIDController_I_a
                                     * Referenced by: '<S259>/Integral Gain'
                                     */
  real_T DiscretePIDController_I_l; /* Mask Parameter: DiscretePIDController_I_l
                                     * Referenced by: '<S477>/Integral Gain'
                                     */
  real_T DiscretePIDController_I_b; /* Mask Parameter: DiscretePIDController_I_b
                                     * Referenced by: '<S320>/Integral Gain'
                                     */
  real_T DiscretePIDController_I_l2;
                                   /* Mask Parameter: DiscretePIDController_I_l2
                                    * Referenced by: '<S374>/Integral Gain'
                                    */
  real_T DiscretePIDController1_I;   /* Mask Parameter: DiscretePIDController1_I
                                      * Referenced by: '<S424>/Integral Gain'
                                      */
  real_T DiscretePIDController_InitialCo;
                              /* Mask Parameter: DiscretePIDController_InitialCo
                               * Referenced by: '<S475>/Filter'
                               */
  real_T DiscretePIDController_Initial_n;
                              /* Mask Parameter: DiscretePIDController_Initial_n
                               * Referenced by: '<S126>/Integrator'
                               */
  real_T DiscretePIDController_Initial_p;
                              /* Mask Parameter: DiscretePIDController_Initial_p
                               * Referenced by: '<S262>/Integrator'
                               */
  real_T DiscretePIDController_Initial_k;
                              /* Mask Parameter: DiscretePIDController_Initial_k
                               * Referenced by: '<S480>/Integrator'
                               */
  real_T DiscretePIDController_Initial_i;
                              /* Mask Parameter: DiscretePIDController_Initial_i
                               * Referenced by: '<S323>/Integrator'
                               */
  real_T DiscretePIDController_Initia_nn;
                              /* Mask Parameter: DiscretePIDController_Initia_nn
                               * Referenced by: '<S377>/Integrator'
                               */
  real_T DiscretePIDController1_InitialC;
                              /* Mask Parameter: DiscretePIDController1_InitialC
                               * Referenced by: '<S427>/Integrator'
                               */
  real_T DiscretePIDController_LowerSatu;
                              /* Mask Parameter: DiscretePIDController_LowerSatu
                               * Referenced by:
                               *   '<S133>/Saturation'
                               *   '<S119>/DeadZone'
                               */
  real_T DiscretePIDController_LowerSa_a;
                              /* Mask Parameter: DiscretePIDController_LowerSa_a
                               * Referenced by:
                               *   '<S487>/Saturation'
                               *   '<S473>/DeadZone'
                               */
  real_T DiscretePIDController_LowerSa_b;
                              /* Mask Parameter: DiscretePIDController_LowerSa_b
                               * Referenced by:
                               *   '<S330>/Saturation'
                               *   '<S316>/DeadZone'
                               */
  real_T DiscretePIDController_LowerS_bz;
                              /* Mask Parameter: DiscretePIDController_LowerS_bz
                               * Referenced by:
                               *   '<S384>/Saturation'
                               *   '<S370>/DeadZone'
                               */
  real_T DiscretePIDController1_LowerSat;
                              /* Mask Parameter: DiscretePIDController1_LowerSat
                               * Referenced by:
                               *   '<S434>/Saturation'
                               *   '<S420>/DeadZone'
                               */
  real_T DiscretePIDController_N;     /* Mask Parameter: DiscretePIDController_N
                                       * Referenced by: '<S483>/Filter Coefficient'
                                       */
  real_T DiscretePIDController_P;     /* Mask Parameter: DiscretePIDController_P
                                       * Referenced by: '<S131>/Proportional Gain'
                                       */
  real_T DiscretePIDController_P_e; /* Mask Parameter: DiscretePIDController_P_e
                                     * Referenced by: '<S267>/Proportional Gain'
                                     */
  real_T DiscretePIDController_P_i; /* Mask Parameter: DiscretePIDController_P_i
                                     * Referenced by: '<S485>/Proportional Gain'
                                     */
  real_T DiscretePIDController_P_j; /* Mask Parameter: DiscretePIDController_P_j
                                     * Referenced by: '<S328>/Proportional Gain'
                                     */
  real_T DiscretePIDController_P_o; /* Mask Parameter: DiscretePIDController_P_o
                                     * Referenced by: '<S382>/Proportional Gain'
                                     */
  real_T DiscretePIDController1_P;   /* Mask Parameter: DiscretePIDController1_P
                                      * Referenced by: '<S432>/Proportional Gain'
                                      */
  real_T DiscretePIDController_UpperSatu;
                              /* Mask Parameter: DiscretePIDController_UpperSatu
                               * Referenced by:
                               *   '<S133>/Saturation'
                               *   '<S119>/DeadZone'
                               */
  real_T DiscretePIDController_UpperS_jt;
                              /* Mask Parameter: DiscretePIDController_UpperS_jt
                               * Referenced by:
                               *   '<S487>/Saturation'
                               *   '<S473>/DeadZone'
                               */
  real_T DiscretePIDController_UpperSa_c;
                              /* Mask Parameter: DiscretePIDController_UpperSa_c
                               * Referenced by:
                               *   '<S330>/Saturation'
                               *   '<S316>/DeadZone'
                               */
  real_T DiscretePIDController_UpperSa_p;
                              /* Mask Parameter: DiscretePIDController_UpperSa_p
                               * Referenced by:
                               *   '<S384>/Saturation'
                               *   '<S370>/DeadZone'
                               */
  real_T DiscretePIDController1_UpperSat;
                              /* Mask Parameter: DiscretePIDController1_UpperSat
                               * Referenced by:
                               *   '<S434>/Saturation'
                               *   '<S420>/DeadZone'
                               */
  real_T BandLimitedWhiteNoise_seed;
                                   /* Mask Parameter: BandLimitedWhiteNoise_seed
                                    * Referenced by: '<S1>/White Noise'
                                    */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S117>/Constant1'
                                        */
  real_T Constant1_Value_n;            /* Expression: 0
                                        * Referenced by: '<S253>/Constant1'
                                        */
  real_T Constant1_Value_k;            /* Expression: 0
                                        * Referenced by: '<S471>/Constant1'
                                        */
  real_T Constant1_Value_i;            /* Expression: 0
                                        * Referenced by: '<S314>/Constant1'
                                        */
  real_T Constant1_Value_h;            /* Expression: 0
                                        * Referenced by: '<S368>/Constant1'
                                        */
  real_T Constant1_Value_e;            /* Expression: 0
                                        * Referenced by: '<S418>/Constant1'
                                        */
  real_T DiscreteTransferFcn_NumCoef;  /* Expression: [0.18127]
                                        * Referenced by: '<S90>/Discrete Transfer Fcn'
                                        */
  real_T DiscreteTransferFcn_InitialStat;/* Expression: 0
                                          * Referenced by: '<S90>/Discrete Transfer Fcn'
                                          */
  real_T DiscreteTransferFcn3_NumCoef; /* Expression: [0.18127]
                                        * Referenced by: '<S91>/Discrete Transfer Fcn3'
                                        */
  real_T DiscreteTransferFcn3_InitialSta;/* Expression: 376.99
                                          * Referenced by: '<S91>/Discrete Transfer Fcn3'
                                          */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant4'
                                        */
  real_T Constant5_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant5'
                                        */
  real_T Switch_Threshold;             /* Expression: 1800
                                        * Referenced by: '<Root>/Switch'
                                        */
  real_T DiscreteTransferFcn_NumCoef_p;/* Expression: [0.18127]
                                        * Referenced by: '<S92>/Discrete Transfer Fcn'
                                        */
  real_T DiscreteTransferFcn_InitialSt_n;/* Expression: 0
                                          * Referenced by: '<S92>/Discrete Transfer Fcn'
                                          */
  real_T DiscreteTransferFcn_NumCoef_c;/* Expression: [0.18127]
                                        * Referenced by: '<Root>/Discrete Transfer Fcn'
                                        */
  real_T DiscreteTransferFcn_InitialSt_p;/* Expression: 550
                                          * Referenced by: '<Root>/Discrete Transfer Fcn'
                                          */
  real_T DiscreteTransferFcn_NumCoef_i;/* Expression: [0.18127]
                                        * Referenced by: '<S84>/Discrete Transfer Fcn'
                                        */
  real_T DiscreteTransferFcn_InitialSt_m;/* Expression: 0
                                          * Referenced by: '<S84>/Discrete Transfer Fcn'
                                          */
  real_T Saturation1_UpperSat;         /* Expression: 0.3E-9
                                        * Referenced by: '<S84>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S84>/Saturation1'
                                        */
  real_T DiscreteTransferFcn3_NumCoef_l;/* Expression: [0.18127]
                                         * Referenced by: '<Root>/Discrete Transfer Fcn3'
                                         */
  real_T DiscreteTransferFcn3_InitialS_g;/* Expression: 0
                                          * Referenced by: '<Root>/Discrete Transfer Fcn3'
                                          */
  real_T DiscreteTransferFcn1_NumCoef; /* Expression: [0.18127]
                                        * Referenced by: '<Root>/Discrete Transfer Fcn1'
                                        */
  real_T DiscreteTransferFcn1_InitialSta;/* Expression: 0
                                          * Referenced by: '<Root>/Discrete Transfer Fcn1'
                                          */
  real_T Saturation1_UpperSat_o;       /* Expression: 1000
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_d;       /* Expression: 0
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1/1000
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T Gain2_Gain;                   /* Expression: 1/1000
                                        * Referenced by: '<Root>/Gain2'
                                        */
  real_T Constant1_Value_e1;           /* Expression: 100
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<Root>/Switch1'
                                        */
  real_T Constant6_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant6'
                                        */
  real_T Constant3_Value;              /* Expression: 1.5
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T WhiteNoise_Mean;              /* Expression: 0
                                        * Referenced by: '<S1>/White Noise'
                                        */
  real_T WhiteNoise_StdDev;            /* Computed Parameter: WhiteNoise_StdDev
                                        * Referenced by: '<S1>/White Noise'
                                        */
  real_T DiscreteTransferFcn2_NumCoef; /* Expression: [0.18127]
                                        * Referenced by: '<Root>/Discrete Transfer Fcn2'
                                        */
  real_T DiscreteTransferFcn2_InitialSta;/* Expression: 0
                                          * Referenced by: '<Root>/Discrete Transfer Fcn2'
                                          */
  real_T Gain_Gain;                    /* Expression: 200
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T Constant_Value;               /* Expression: 7
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Clamping_zero_Value;          /* Expression: 0
                                        * Referenced by: '<S117>/Clamping_zero'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S126>/Integrator'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 550
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Constant7_Value;              /* Expression: 0.8
                                        * Referenced by: '<Root>/Constant7'
                                        */
  real_T Clamping_zero_Value_j;        /* Expression: 0
                                        * Referenced by: '<S253>/Clamping_zero'
                                        */
  real_T Integrator_gainval_h;       /* Computed Parameter: Integrator_gainval_h
                                      * Referenced by: '<S262>/Integrator'
                                      */
  real_T Constant_Value_l;             /* Expression: 330
                                        * Referenced by: '<S92>/Constant'
                                        */
  real_T Clamping_zero_Value_m;        /* Expression: 0
                                        * Referenced by: '<S471>/Clamping_zero'
                                        */
  real_T Integrator_gainval_m;       /* Computed Parameter: Integrator_gainval_m
                                      * Referenced by: '<S480>/Integrator'
                                      */
  real_T Filter_gainval;               /* Computed Parameter: Filter_gainval
                                        * Referenced by: '<S475>/Filter'
                                        */
  real_T Saturation_LowerSat_b;        /* Expression: 0
                                        * Referenced by: '<S92>/Saturation'
                                        */
  real_T DiscreteTransferFcn1_NumCoef_o;/* Expression: [0.18127]
                                         * Referenced by: '<S90>/Discrete Transfer Fcn1'
                                         */
  real_T DiscreteTransferFcn1_InitialS_f;/* Expression: 0
                                          * Referenced by: '<S90>/Discrete Transfer Fcn1'
                                          */
  real_T Gain_Gain_f;                  /* Expression: 1/0.01
                                        * Referenced by: '<S90>/Gain'
                                        */
  real_T Saturation_UpperSat_h;        /* Expression: 1
                                        * Referenced by: '<S90>/Saturation'
                                        */
  real_T Saturation_LowerSat_i;        /* Expression: 0
                                        * Referenced by: '<S90>/Saturation'
                                        */
  real_T Gain1_Gain_m;                 /* Expression: -1
                                        * Referenced by: '<S90>/Gain1'
                                        */
  real_T Bias_Bias;                    /* Expression: 1
                                        * Referenced by: '<S90>/Bias'
                                        */
  real_T Constant_Value_j;             /* Expression: 0.45
                                        * Referenced by: '<S90>/Constant'
                                        */
  real_T Clamping_zero_Value_c;        /* Expression: 0
                                        * Referenced by: '<S314>/Clamping_zero'
                                        */
  real_T Integrator_gainval_o;       /* Computed Parameter: Integrator_gainval_o
                                      * Referenced by: '<S323>/Integrator'
                                      */
  real_T Constant_Value_c;             /* Expression: 8
                                        * Referenced by: '<S91>/Constant'
                                        */
  real_T Constant7_Value_g;            /* Expression: 15.25
                                        * Referenced by: '<S91>/Constant7'
                                        */
  real_T Clamping_zero_Value_b;        /* Expression: 0
                                        * Referenced by: '<S368>/Clamping_zero'
                                        */
  real_T Integrator_gainval_mx;     /* Computed Parameter: Integrator_gainval_mx
                                     * Referenced by: '<S377>/Integrator'
                                     */
  real_T Clamping_zero_Value_g;        /* Expression: 0
                                        * Referenced by: '<S418>/Clamping_zero'
                                        */
  real_T Integrator_gainval_b;       /* Computed Parameter: Integrator_gainval_b
                                      * Referenced by: '<S427>/Integrator'
                                      */
  real_T Saturation2_UpperSat;         /* Expression: 470
                                        * Referenced by: '<S91>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S91>/Saturation2'
                                        */
  real_T Step_Time;                    /* Expression: 7
                                        * Referenced by: '<Root>/Step'
                                        */
  real_T Step_Y0;                      /* Expression: 0
                                        * Referenced by: '<Root>/Step'
                                        */
  real_T Step_YFinal;                  /* Expression: 800
                                        * Referenced by: '<Root>/Step'
                                        */
  real_T Step1_Time;                   /* Expression: 17
                                        * Referenced by: '<Root>/Step1'
                                        */
  real_T Step1_Y0;                     /* Expression: 0
                                        * Referenced by: '<Root>/Step1'
                                        */
  real_T Step1_YFinal;                 /* Expression: -800
                                        * Referenced by: '<Root>/Step1'
                                        */
  int8_T Constant_Value_i;             /* Computed Parameter: Constant_Value_i
                                        * Referenced by: '<S117>/Constant'
                                        */
  int8_T Constant2_Value_c;            /* Computed Parameter: Constant2_Value_c
                                        * Referenced by: '<S117>/Constant2'
                                        */
  int8_T Constant3_Value_k;            /* Computed Parameter: Constant3_Value_k
                                        * Referenced by: '<S117>/Constant3'
                                        */
  int8_T Constant4_Value_f;            /* Computed Parameter: Constant4_Value_f
                                        * Referenced by: '<S117>/Constant4'
                                        */
  int8_T Constant_Value_m;             /* Computed Parameter: Constant_Value_m
                                        * Referenced by: '<S253>/Constant'
                                        */
  int8_T Constant2_Value_b;            /* Computed Parameter: Constant2_Value_b
                                        * Referenced by: '<S253>/Constant2'
                                        */
  int8_T Constant3_Value_m;            /* Computed Parameter: Constant3_Value_m
                                        * Referenced by: '<S253>/Constant3'
                                        */
  int8_T Constant4_Value_h;            /* Computed Parameter: Constant4_Value_h
                                        * Referenced by: '<S253>/Constant4'
                                        */
  int8_T Constant_Value_n;             /* Computed Parameter: Constant_Value_n
                                        * Referenced by: '<S314>/Constant'
                                        */
  int8_T Constant2_Value_n;            /* Computed Parameter: Constant2_Value_n
                                        * Referenced by: '<S314>/Constant2'
                                        */
  int8_T Constant3_Value_c;            /* Computed Parameter: Constant3_Value_c
                                        * Referenced by: '<S314>/Constant3'
                                        */
  int8_T Constant4_Value_o;            /* Computed Parameter: Constant4_Value_o
                                        * Referenced by: '<S314>/Constant4'
                                        */
  int8_T Constant_Value_jr;            /* Computed Parameter: Constant_Value_jr
                                        * Referenced by: '<S368>/Constant'
                                        */
  int8_T Constant2_Value_bc;           /* Computed Parameter: Constant2_Value_bc
                                        * Referenced by: '<S368>/Constant2'
                                        */
  int8_T Constant3_Value_l;            /* Computed Parameter: Constant3_Value_l
                                        * Referenced by: '<S368>/Constant3'
                                        */
  int8_T Constant4_Value_ou;           /* Computed Parameter: Constant4_Value_ou
                                        * Referenced by: '<S368>/Constant4'
                                        */
  int8_T Constant_Value_p;             /* Computed Parameter: Constant_Value_p
                                        * Referenced by: '<S418>/Constant'
                                        */
  int8_T Constant2_Value_a;            /* Computed Parameter: Constant2_Value_a
                                        * Referenced by: '<S418>/Constant2'
                                        */
  int8_T Constant3_Value_c3;           /* Computed Parameter: Constant3_Value_c3
                                        * Referenced by: '<S418>/Constant3'
                                        */
  int8_T Constant4_Value_d;            /* Computed Parameter: Constant4_Value_d
                                        * Referenced by: '<S418>/Constant4'
                                        */
  int8_T Constant_Value_d;             /* Computed Parameter: Constant_Value_d
                                        * Referenced by: '<S471>/Constant'
                                        */
  int8_T Constant2_Value_k;            /* Computed Parameter: Constant2_Value_k
                                        * Referenced by: '<S471>/Constant2'
                                        */
  int8_T Constant3_Value_h;            /* Computed Parameter: Constant3_Value_h
                                        * Referenced by: '<S471>/Constant3'
                                        */
  int8_T Constant4_Value_b;            /* Computed Parameter: Constant4_Value_b
                                        * Referenced by: '<S471>/Constant4'
                                        */
};

/* Storage class 'PageSwitching' */
extern PW_SMRv9_cal_type PW_SMRv9_cal_impl;
extern PW_SMRv9_cal_type *PW_SMRv9_cal;

#endif                                 /* RTW_HEADER_PW_SMRv9_cal_h_ */
