/*
 * PW_SMRv7.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "PW_SMRv7".
 *
 * Model version              : 1.15
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C++ source code generated on : Mon Sep 28 12:13:55 2026
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PW_SMRv7_h_
#define RTW_HEADER_PW_SMRv7_h_
#include <logsrv.h>
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "nesl_rtw.h"
#include "PW_SMRv7_d632b26e_1_gateway.h"
#include "PW_SMRv7_types.h"
#include "PW_SMRv7_cal.h"

extern "C"
{

#include "rtGetInf.h"

}

#include <cstring>

extern "C"
{

#include "rt_nonfinite.h"

}

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

/* Block signals (default storage) */
struct B_PW_SMRv7_T {
  real_T DiscreteTransferFcn;          /* '<S51>/Discrete Transfer Fcn' */
  real_T INPUT_4_1_1[4];               /* '<S205>/INPUT_4_1_1' */
  real_T DiscreteTransferFcn_a;        /* '<Root>/Discrete Transfer Fcn' */
  real_T INPUT_2_1_1[4];               /* '<S205>/INPUT_2_1_1' */
  real_T DiscreteTransferFcn_o;        /* '<S47>/Discrete Transfer Fcn' */
  real_T Saturation1;                  /* '<S47>/Saturation1' */
  real_T INPUT_1_1_1[4];               /* '<S205>/INPUT_1_1_1' */
  real_T DiscreteTransferFcn_n;        /* '<S50>/Discrete Transfer Fcn' */
  real_T INPUT_3_1_1[4];               /* '<S205>/INPUT_3_1_1' */
  real_T STATE_1[311];                 /* '<S205>/STATE_1' */
  real_T OUTPUT_1_1[40];               /* '<S205>/OUTPUT_1_1' */
  real_T RESHAPE;                      /* '<S117>/RESHAPE' */
  real_T Subtract;                     /* '<Root>/Subtract' */
  real_T ProportionalGain;             /* '<S90>/Proportional Gain' */
  real_T Integrator;                   /* '<S85>/Integrator' */
  real_T Sum;                          /* '<S94>/Sum' */
  real_T DeadZone;                     /* '<S78>/DeadZone' */
  real_T IntegralGain;                 /* '<S82>/Integral Gain' */
  real_T Switch;                       /* '<S76>/Switch' */
  real_T Saturation;                   /* '<S92>/Saturation' */
  real_T Saturation_l;                 /* '<Root>/Saturation' */
  real_T RESHAPE_e;                    /* '<S102>/RESHAPE' */
  real_T RESHAPE_k;                    /* '<S125>/RESHAPE' */
  real_T uDLookupTable;                /* '<S47>/1-D Lookup Table' */
  real_T Subtract_h;                   /* '<S47>/Subtract' */
  real_T ProportionalGain_d;           /* '<S189>/Proportional Gain' */
  real_T Integrator_f;                 /* '<S184>/Integrator' */
  real_T Sum_p;                        /* '<S193>/Sum' */
  real_T DeadZone_n;                   /* '<S177>/DeadZone' */
  real_T IntegralGain_p;               /* '<S181>/Integral Gain' */
  real_T Switch_a;                     /* '<S175>/Switch' */
  real_T Saturation_m;                 /* '<S191>/Saturation' */
  real_T RESHAPE_p;                    /* '<S201>/RESHAPE' */
  real_T RESHAPE_n;                    /* '<S202>/RESHAPE' */
  real_T RESHAPE_m;                    /* '<S103>/RESHAPE' */
  real_T uDLookupTable_l;              /* '<S51>/1-D Lookup Table' */
  real_T Subtract_hm;                  /* '<S51>/Subtract' */
  real_T ProportionalGain_l;           /* '<S299>/Proportional Gain' */
  real_T Integrator_n;                 /* '<S294>/Integrator' */
  real_T DerivativeGain;               /* '<S288>/Derivative Gain' */
  real_T Filter;                       /* '<S289>/Filter' */
  real_T SumD;                         /* '<S289>/SumD' */
  real_T FilterCoefficient;            /* '<S297>/Filter Coefficient' */
  real_T Sum_f;                        /* '<S303>/Sum' */
  real_T DeadZone_f;                   /* '<S287>/DeadZone' */
  real_T IntegralGain_c;               /* '<S291>/Integral Gain' */
  real_T Switch_f;                     /* '<S285>/Switch' */
  real_T Saturation_f;                 /* '<S301>/Saturation' */
  real_T MinMax;                       /* '<S51>/MinMax' */
  real_T Saturation_d;                 /* '<S51>/Saturation' */
  real_T RESHAPE_j;                    /* '<S105>/RESHAPE' */
  real_T OUTPUT_1_2[6];                /* '<S205>/OUTPUT_1_2' */
  real_T RESHAPE_ef;                   /* '<S107>/RESHAPE' */
  real_T OUTPUT_1_0;                   /* '<S205>/OUTPUT_1_0' */
  real_T RESHAPE_ps;                   /* '<S104>/RESHAPE' */
  real_T Gain;                         /* '<S50>/Gain' */
  real_T Subtract_m;                   /* '<S50>/Subtract' */
  real_T ProportionalGain_c;           /* '<S246>/Proportional Gain' */
  real_T Integrator_c;                 /* '<S241>/Integrator' */
  real_T Sum_k;                        /* '<S250>/Sum' */
  real_T DeadZone_m;                   /* '<S234>/DeadZone' */
  real_T IntegralGain_d;               /* '<S238>/Integral Gain' */
  real_T Switch_m;                     /* '<S232>/Switch' */
  real_T Saturation_i;                 /* '<S248>/Saturation' */
  real_T RESHAPE_a;                    /* '<S106>/RESHAPE' */
  real_T RESHAPE_l;                    /* '<S108>/RESHAPE' */
  real_T RESHAPE_p0;                   /* '<S109>/RESHAPE' */
  real_T RESHAPE_av;                   /* '<S110>/RESHAPE' */
  real_T RESHAPE_ab;                   /* '<S142>/RESHAPE' */
  real_T RESHAPE_po;                   /* '<S111>/RESHAPE' */
  real_T RESHAPE_my;                   /* '<S112>/RESHAPE' */
  real_T RESHAPE_b;                    /* '<S113>/RESHAPE' */
  real_T RESHAPE_h;                    /* '<S114>/RESHAPE' */
  real_T RESHAPE_nj;                   /* '<S115>/RESHAPE' */
  real_T RESHAPE_o;                    /* '<S116>/RESHAPE' */
  real_T RESHAPE_bx;                   /* '<S118>/RESHAPE' */
  real_T RESHAPE_o4;                   /* '<S119>/RESHAPE' */
  real_T RESHAPE_ou;                   /* '<S120>/RESHAPE' */
  real_T RESHAPE_j1;                   /* '<S121>/RESHAPE' */
  real_T RESHAPE_c;                    /* '<S122>/RESHAPE' */
  real_T RESHAPE_m5;                   /* '<S123>/RESHAPE' */
  real_T RESHAPE_k4;                   /* '<S124>/RESHAPE' */
  real_T RESHAPE_li;                   /* '<S126>/RESHAPE' */
  real_T RESHAPE_eh;                   /* '<S127>/RESHAPE' */
  real_T RESHAPE_kh;                   /* '<S128>/RESHAPE' */
  real_T RESHAPE_e3;                   /* '<S129>/RESHAPE' */
  real_T RESHAPE_cs;                   /* '<S130>/RESHAPE' */
  real_T RESHAPE_lj;                   /* '<S131>/RESHAPE' */
  real_T RESHAPE_ce;                   /* '<S132>/RESHAPE' */
  real_T RESHAPE_d;                    /* '<S133>/RESHAPE' */
  real_T RESHAPE_f;                    /* '<S134>/RESHAPE' */
  real_T RESHAPE_jf;                   /* '<S144>/RESHAPE' */
  real_T RESHAPE_e0;                   /* '<S135>/RESHAPE' */
  real_T RESHAPE_ad;                   /* '<S137>/RESHAPE' */
  real_T RESHAPE_nt;                   /* '<S138>/RESHAPE' */
  real_T RESHAPE_je;                   /* '<S139>/RESHAPE' */
  real_T RESHAPE_nc;                   /* '<S140>/RESHAPE' */
  real_T RESHAPE_e0x;                  /* '<S141>/RESHAPE' */
  real_T RESHAPE_c4;                   /* '<S136>/RESHAPE' */
  real_T RESHAPE_g;                    /* '<S145>/RESHAPE' */
  real_T RESHAPE_i;                    /* '<S143>/RESHAPE' */
  real_T RESHAPE_fp;                   /* '<S146>/RESHAPE' */
  int8_T Switch1;                      /* '<S76>/Switch1' */
  int8_T Switch2;                      /* '<S76>/Switch2' */
  int8_T Switch1_n;                    /* '<S175>/Switch1' */
  int8_T Switch2_g;                    /* '<S175>/Switch2' */
  int8_T Switch1_j;                    /* '<S285>/Switch1' */
  int8_T Switch2_gt;                   /* '<S285>/Switch2' */
  int8_T Switch1_nb;                   /* '<S232>/Switch1' */
  int8_T Switch2_p;                    /* '<S232>/Switch2' */
  boolean_T RelationalOperator;        /* '<S76>/Relational Operator' */
  boolean_T fixforDTpropagationissue; /* '<S76>/fix for DT propagation issue' */
  boolean_T fixforDTpropagationissue1;
                                     /* '<S76>/fix for DT propagation issue1' */
  boolean_T Equal1;                    /* '<S76>/Equal1' */
  boolean_T AND3;                      /* '<S76>/AND3' */
  boolean_T RelationalOperator_a;      /* '<S175>/Relational Operator' */
  boolean_T fixforDTpropagationissue_f;
                                     /* '<S175>/fix for DT propagation issue' */
  boolean_T fixforDTpropagationissue1_c;
                                    /* '<S175>/fix for DT propagation issue1' */
  boolean_T Equal1_i;                  /* '<S175>/Equal1' */
  boolean_T AND3_g;                    /* '<S175>/AND3' */
  boolean_T RelationalOperator_a4;     /* '<S285>/Relational Operator' */
  boolean_T fixforDTpropagationissue_p;
                                     /* '<S285>/fix for DT propagation issue' */
  boolean_T fixforDTpropagationissue1_h;
                                    /* '<S285>/fix for DT propagation issue1' */
  boolean_T Equal1_d;                  /* '<S285>/Equal1' */
  boolean_T AND3_h;                    /* '<S285>/AND3' */
  boolean_T RelationalOperator_o;      /* '<S232>/Relational Operator' */
  boolean_T fixforDTpropagationissue_m;
                                     /* '<S232>/fix for DT propagation issue' */
  boolean_T fixforDTpropagationissue1_b;
                                    /* '<S232>/fix for DT propagation issue1' */
  boolean_T Equal1_o;                  /* '<S232>/Equal1' */
  boolean_T AND3_l;                    /* '<S232>/AND3' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_PW_SMRv7_T {
  real_T DiscreteTransferFcn_states;   /* '<S51>/Discrete Transfer Fcn' */
  real_T INPUT_4_1_1_Discrete[2];      /* '<S205>/INPUT_4_1_1' */
  real_T DiscreteTransferFcn_states_m; /* '<Root>/Discrete Transfer Fcn' */
  real_T INPUT_2_1_1_Discrete[2];      /* '<S205>/INPUT_2_1_1' */
  real_T DiscreteTransferFcn_states_n; /* '<S47>/Discrete Transfer Fcn' */
  real_T INPUT_1_1_1_Discrete[2];      /* '<S205>/INPUT_1_1_1' */
  real_T DiscreteTransferFcn_states_h; /* '<S50>/Discrete Transfer Fcn' */
  real_T INPUT_3_1_1_Discrete[2];      /* '<S205>/INPUT_3_1_1' */
  real_T STATE_1_Discrete[183];        /* '<S205>/STATE_1' */
  real_T Integrator_DSTATE;            /* '<S85>/Integrator' */
  real_T Integrator_DSTATE_k;          /* '<S184>/Integrator' */
  real_T Integrator_DSTATE_p;          /* '<S294>/Integrator' */
  real_T Filter_DSTATE;                /* '<S289>/Filter' */
  real_T Integrator_DSTATE_e;          /* '<S241>/Integrator' */
  real_T OUTPUT_1_1_Discrete;          /* '<S205>/OUTPUT_1_1' */
  real_T OUTPUT_1_2_Discrete;          /* '<S205>/OUTPUT_1_2' */
  real_T OUTPUT_1_0_Discrete;          /* '<S205>/OUTPUT_1_0' */
  void* STATE_1_Simulator;             /* '<S205>/STATE_1' */
  void* STATE_1_SimData;               /* '<S205>/STATE_1' */
  void* STATE_1_DiagMgr;               /* '<S205>/STATE_1' */
  void* STATE_1_ZcLogger;              /* '<S205>/STATE_1' */
  void* STATE_1_TsInfo;                /* '<S205>/STATE_1' */
  void* OUTPUT_1_1_Simulator;          /* '<S205>/OUTPUT_1_1' */
  void* OUTPUT_1_1_SimData;            /* '<S205>/OUTPUT_1_1' */
  void* OUTPUT_1_1_DiagMgr;            /* '<S205>/OUTPUT_1_1' */
  void* OUTPUT_1_1_ZcLogger;           /* '<S205>/OUTPUT_1_1' */
  void* OUTPUT_1_1_TsInfo;             /* '<S205>/OUTPUT_1_1' */
  void* OUTPUT_1_2_Simulator;          /* '<S205>/OUTPUT_1_2' */
  void* OUTPUT_1_2_SimData;            /* '<S205>/OUTPUT_1_2' */
  void* OUTPUT_1_2_DiagMgr;            /* '<S205>/OUTPUT_1_2' */
  void* OUTPUT_1_2_ZcLogger;           /* '<S205>/OUTPUT_1_2' */
  void* OUTPUT_1_2_TsInfo;             /* '<S205>/OUTPUT_1_2' */
  void* OUTPUT_1_0_Simulator;          /* '<S205>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimData;            /* '<S205>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagMgr;            /* '<S205>/OUTPUT_1_0' */
  void* OUTPUT_1_0_ZcLogger;           /* '<S205>/OUTPUT_1_0' */
  void* OUTPUT_1_0_TsInfo;             /* '<S205>/OUTPUT_1_0' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_PSSim;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_PSS_d;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_PSS_h;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_PSS_i;   /* synthesized block */

  int_T STATE_1_Modes[128];            /* '<S205>/STATE_1' */
  int_T OUTPUT_1_1_Modes;              /* '<S205>/OUTPUT_1_1' */
  int_T OUTPUT_1_2_Modes;              /* '<S205>/OUTPUT_1_2' */
  int_T OUTPUT_1_0_Modes;              /* '<S205>/OUTPUT_1_0' */
  boolean_T STATE_1_FirstOutput;       /* '<S205>/STATE_1' */
  boolean_T OUTPUT_1_1_FirstOutput;    /* '<S205>/OUTPUT_1_1' */
  boolean_T OUTPUT_1_2_FirstOutput;    /* '<S205>/OUTPUT_1_2' */
  boolean_T OUTPUT_1_0_FirstOutput;    /* '<S205>/OUTPUT_1_0' */
};

/* Parameters (default storage) */
struct P_PW_SMRv7_T_ {
  real_T DiscretePIDController_LowerSa_f;
                              /* Mask Parameter: DiscretePIDController_LowerSa_f
                               * Referenced by:
                               *   '<S191>/Saturation'
                               *   '<S177>/DeadZone'
                               */
  real_T DiscretePIDController_UpperSa_o;
                              /* Mask Parameter: DiscretePIDController_UpperSa_o
                               * Referenced by:
                               *   '<S191>/Saturation'
                               *   '<S177>/DeadZone'
                               */
  real_T Saturation_UpperSat_b;        /* Expression: inf
                                        * Referenced by: '<S51>/Saturation'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_PW_SMRv7_T {
  const char_T *errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_PW_SMRv7_T PW_SMRv7_P;

#ifdef __cplusplus

}

#endif

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_PW_SMRv7_T PW_SMRv7_B;

#ifdef __cplusplus

}

#endif

/* Block states (default storage) */
extern struct DW_PW_SMRv7_T PW_SMRv7_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  /* Model entry point functions */
  extern void PW_SMRv7_initialize(void);
  extern void PW_SMRv7_step(void);
  extern void PW_SMRv7_terminate(void);

#ifdef __cplusplus

}

#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_PW_SMRv7_T *const PW_SMRv7_M;

#ifdef __cplusplus

}

#endif

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'PW_SMRv7'
 * '<S1>'   : 'PW_SMRv7/Discrete PID Controller'
 * '<S2>'   : 'PW_SMRv7/PS-Simulink Converter'
 * '<S3>'   : 'PW_SMRv7/PS-Simulink Converter1'
 * '<S4>'   : 'PW_SMRv7/PS-Simulink Converter10'
 * '<S5>'   : 'PW_SMRv7/PS-Simulink Converter11'
 * '<S6>'   : 'PW_SMRv7/PS-Simulink Converter12'
 * '<S7>'   : 'PW_SMRv7/PS-Simulink Converter13'
 * '<S8>'   : 'PW_SMRv7/PS-Simulink Converter14'
 * '<S9>'   : 'PW_SMRv7/PS-Simulink Converter15'
 * '<S10>'  : 'PW_SMRv7/PS-Simulink Converter16'
 * '<S11>'  : 'PW_SMRv7/PS-Simulink Converter17'
 * '<S12>'  : 'PW_SMRv7/PS-Simulink Converter18'
 * '<S13>'  : 'PW_SMRv7/PS-Simulink Converter19'
 * '<S14>'  : 'PW_SMRv7/PS-Simulink Converter2'
 * '<S15>'  : 'PW_SMRv7/PS-Simulink Converter20'
 * '<S16>'  : 'PW_SMRv7/PS-Simulink Converter21'
 * '<S17>'  : 'PW_SMRv7/PS-Simulink Converter22'
 * '<S18>'  : 'PW_SMRv7/PS-Simulink Converter23'
 * '<S19>'  : 'PW_SMRv7/PS-Simulink Converter24'
 * '<S20>'  : 'PW_SMRv7/PS-Simulink Converter25'
 * '<S21>'  : 'PW_SMRv7/PS-Simulink Converter26'
 * '<S22>'  : 'PW_SMRv7/PS-Simulink Converter27'
 * '<S23>'  : 'PW_SMRv7/PS-Simulink Converter28'
 * '<S24>'  : 'PW_SMRv7/PS-Simulink Converter29'
 * '<S25>'  : 'PW_SMRv7/PS-Simulink Converter3'
 * '<S26>'  : 'PW_SMRv7/PS-Simulink Converter30'
 * '<S27>'  : 'PW_SMRv7/PS-Simulink Converter31'
 * '<S28>'  : 'PW_SMRv7/PS-Simulink Converter32'
 * '<S29>'  : 'PW_SMRv7/PS-Simulink Converter33'
 * '<S30>'  : 'PW_SMRv7/PS-Simulink Converter34'
 * '<S31>'  : 'PW_SMRv7/PS-Simulink Converter35'
 * '<S32>'  : 'PW_SMRv7/PS-Simulink Converter36'
 * '<S33>'  : 'PW_SMRv7/PS-Simulink Converter37'
 * '<S34>'  : 'PW_SMRv7/PS-Simulink Converter38'
 * '<S35>'  : 'PW_SMRv7/PS-Simulink Converter39'
 * '<S36>'  : 'PW_SMRv7/PS-Simulink Converter4'
 * '<S37>'  : 'PW_SMRv7/PS-Simulink Converter40'
 * '<S38>'  : 'PW_SMRv7/PS-Simulink Converter41'
 * '<S39>'  : 'PW_SMRv7/PS-Simulink Converter42'
 * '<S40>'  : 'PW_SMRv7/PS-Simulink Converter43'
 * '<S41>'  : 'PW_SMRv7/PS-Simulink Converter44'
 * '<S42>'  : 'PW_SMRv7/PS-Simulink Converter5'
 * '<S43>'  : 'PW_SMRv7/PS-Simulink Converter6'
 * '<S44>'  : 'PW_SMRv7/PS-Simulink Converter7'
 * '<S45>'  : 'PW_SMRv7/PS-Simulink Converter8'
 * '<S46>'  : 'PW_SMRv7/PS-Simulink Converter9'
 * '<S47>'  : 'PW_SMRv7/Preheating'
 * '<S48>'  : 'PW_SMRv7/Simulink-PS Converter'
 * '<S49>'  : 'PW_SMRv7/Solver Configuration'
 * '<S50>'  : 'PW_SMRv7/Subsystem'
 * '<S51>'  : 'PW_SMRv7/Subsystem1'
 * '<S52>'  : 'PW_SMRv7/Discrete PID Controller/Anti-windup'
 * '<S53>'  : 'PW_SMRv7/Discrete PID Controller/D Gain'
 * '<S54>'  : 'PW_SMRv7/Discrete PID Controller/Filter'
 * '<S55>'  : 'PW_SMRv7/Discrete PID Controller/Filter ICs'
 * '<S56>'  : 'PW_SMRv7/Discrete PID Controller/I Gain'
 * '<S57>'  : 'PW_SMRv7/Discrete PID Controller/Ideal P Gain'
 * '<S58>'  : 'PW_SMRv7/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S59>'  : 'PW_SMRv7/Discrete PID Controller/Integrator'
 * '<S60>'  : 'PW_SMRv7/Discrete PID Controller/Integrator ICs'
 * '<S61>'  : 'PW_SMRv7/Discrete PID Controller/N Copy'
 * '<S62>'  : 'PW_SMRv7/Discrete PID Controller/N Gain'
 * '<S63>'  : 'PW_SMRv7/Discrete PID Controller/P Copy'
 * '<S64>'  : 'PW_SMRv7/Discrete PID Controller/Parallel P Gain'
 * '<S65>'  : 'PW_SMRv7/Discrete PID Controller/Reset Signal'
 * '<S66>'  : 'PW_SMRv7/Discrete PID Controller/Saturation'
 * '<S67>'  : 'PW_SMRv7/Discrete PID Controller/Saturation Fdbk'
 * '<S68>'  : 'PW_SMRv7/Discrete PID Controller/Sum'
 * '<S69>'  : 'PW_SMRv7/Discrete PID Controller/Sum Fdbk'
 * '<S70>'  : 'PW_SMRv7/Discrete PID Controller/Tracking Mode'
 * '<S71>'  : 'PW_SMRv7/Discrete PID Controller/Tracking Mode Sum'
 * '<S72>'  : 'PW_SMRv7/Discrete PID Controller/Tsamp - Integral'
 * '<S73>'  : 'PW_SMRv7/Discrete PID Controller/Tsamp - Ngain'
 * '<S74>'  : 'PW_SMRv7/Discrete PID Controller/postSat Signal'
 * '<S75>'  : 'PW_SMRv7/Discrete PID Controller/preSat Signal'
 * '<S76>'  : 'PW_SMRv7/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S77>'  : 'PW_SMRv7/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S78>'  : 'PW_SMRv7/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S79>'  : 'PW_SMRv7/Discrete PID Controller/D Gain/Disabled'
 * '<S80>'  : 'PW_SMRv7/Discrete PID Controller/Filter/Disabled'
 * '<S81>'  : 'PW_SMRv7/Discrete PID Controller/Filter ICs/Disabled'
 * '<S82>'  : 'PW_SMRv7/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S83>'  : 'PW_SMRv7/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S84>'  : 'PW_SMRv7/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S85>'  : 'PW_SMRv7/Discrete PID Controller/Integrator/Discrete'
 * '<S86>'  : 'PW_SMRv7/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S87>'  : 'PW_SMRv7/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S88>'  : 'PW_SMRv7/Discrete PID Controller/N Gain/Disabled'
 * '<S89>'  : 'PW_SMRv7/Discrete PID Controller/P Copy/Disabled'
 * '<S90>'  : 'PW_SMRv7/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S91>'  : 'PW_SMRv7/Discrete PID Controller/Reset Signal/Disabled'
 * '<S92>'  : 'PW_SMRv7/Discrete PID Controller/Saturation/Enabled'
 * '<S93>'  : 'PW_SMRv7/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S94>'  : 'PW_SMRv7/Discrete PID Controller/Sum/Sum_PI'
 * '<S95>'  : 'PW_SMRv7/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S96>'  : 'PW_SMRv7/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S97>'  : 'PW_SMRv7/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S98>'  : 'PW_SMRv7/Discrete PID Controller/Tsamp - Integral/Passthrough'
 * '<S99>'  : 'PW_SMRv7/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S100>' : 'PW_SMRv7/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S101>' : 'PW_SMRv7/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S102>' : 'PW_SMRv7/PS-Simulink Converter/EVAL_KEY'
 * '<S103>' : 'PW_SMRv7/PS-Simulink Converter1/EVAL_KEY'
 * '<S104>' : 'PW_SMRv7/PS-Simulink Converter10/EVAL_KEY'
 * '<S105>' : 'PW_SMRv7/PS-Simulink Converter11/EVAL_KEY'
 * '<S106>' : 'PW_SMRv7/PS-Simulink Converter12/EVAL_KEY'
 * '<S107>' : 'PW_SMRv7/PS-Simulink Converter13/EVAL_KEY'
 * '<S108>' : 'PW_SMRv7/PS-Simulink Converter14/EVAL_KEY'
 * '<S109>' : 'PW_SMRv7/PS-Simulink Converter15/EVAL_KEY'
 * '<S110>' : 'PW_SMRv7/PS-Simulink Converter16/EVAL_KEY'
 * '<S111>' : 'PW_SMRv7/PS-Simulink Converter17/EVAL_KEY'
 * '<S112>' : 'PW_SMRv7/PS-Simulink Converter18/EVAL_KEY'
 * '<S113>' : 'PW_SMRv7/PS-Simulink Converter19/EVAL_KEY'
 * '<S114>' : 'PW_SMRv7/PS-Simulink Converter2/EVAL_KEY'
 * '<S115>' : 'PW_SMRv7/PS-Simulink Converter20/EVAL_KEY'
 * '<S116>' : 'PW_SMRv7/PS-Simulink Converter21/EVAL_KEY'
 * '<S117>' : 'PW_SMRv7/PS-Simulink Converter22/EVAL_KEY'
 * '<S118>' : 'PW_SMRv7/PS-Simulink Converter23/EVAL_KEY'
 * '<S119>' : 'PW_SMRv7/PS-Simulink Converter24/EVAL_KEY'
 * '<S120>' : 'PW_SMRv7/PS-Simulink Converter25/EVAL_KEY'
 * '<S121>' : 'PW_SMRv7/PS-Simulink Converter26/EVAL_KEY'
 * '<S122>' : 'PW_SMRv7/PS-Simulink Converter27/EVAL_KEY'
 * '<S123>' : 'PW_SMRv7/PS-Simulink Converter28/EVAL_KEY'
 * '<S124>' : 'PW_SMRv7/PS-Simulink Converter29/EVAL_KEY'
 * '<S125>' : 'PW_SMRv7/PS-Simulink Converter3/EVAL_KEY'
 * '<S126>' : 'PW_SMRv7/PS-Simulink Converter30/EVAL_KEY'
 * '<S127>' : 'PW_SMRv7/PS-Simulink Converter31/EVAL_KEY'
 * '<S128>' : 'PW_SMRv7/PS-Simulink Converter32/EVAL_KEY'
 * '<S129>' : 'PW_SMRv7/PS-Simulink Converter33/EVAL_KEY'
 * '<S130>' : 'PW_SMRv7/PS-Simulink Converter34/EVAL_KEY'
 * '<S131>' : 'PW_SMRv7/PS-Simulink Converter35/EVAL_KEY'
 * '<S132>' : 'PW_SMRv7/PS-Simulink Converter36/EVAL_KEY'
 * '<S133>' : 'PW_SMRv7/PS-Simulink Converter37/EVAL_KEY'
 * '<S134>' : 'PW_SMRv7/PS-Simulink Converter38/EVAL_KEY'
 * '<S135>' : 'PW_SMRv7/PS-Simulink Converter39/EVAL_KEY'
 * '<S136>' : 'PW_SMRv7/PS-Simulink Converter4/EVAL_KEY'
 * '<S137>' : 'PW_SMRv7/PS-Simulink Converter40/EVAL_KEY'
 * '<S138>' : 'PW_SMRv7/PS-Simulink Converter41/EVAL_KEY'
 * '<S139>' : 'PW_SMRv7/PS-Simulink Converter42/EVAL_KEY'
 * '<S140>' : 'PW_SMRv7/PS-Simulink Converter43/EVAL_KEY'
 * '<S141>' : 'PW_SMRv7/PS-Simulink Converter44/EVAL_KEY'
 * '<S142>' : 'PW_SMRv7/PS-Simulink Converter5/EVAL_KEY'
 * '<S143>' : 'PW_SMRv7/PS-Simulink Converter6/EVAL_KEY'
 * '<S144>' : 'PW_SMRv7/PS-Simulink Converter7/EVAL_KEY'
 * '<S145>' : 'PW_SMRv7/PS-Simulink Converter8/EVAL_KEY'
 * '<S146>' : 'PW_SMRv7/PS-Simulink Converter9/EVAL_KEY'
 * '<S147>' : 'PW_SMRv7/Preheating/Discrete PID Controller'
 * '<S148>' : 'PW_SMRv7/Preheating/PS-Simulink Converter1'
 * '<S149>' : 'PW_SMRv7/Preheating/PS-Simulink Converter7'
 * '<S150>' : 'PW_SMRv7/Preheating/Simulink-PS Converter1'
 * '<S151>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Anti-windup'
 * '<S152>' : 'PW_SMRv7/Preheating/Discrete PID Controller/D Gain'
 * '<S153>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Filter'
 * '<S154>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Filter ICs'
 * '<S155>' : 'PW_SMRv7/Preheating/Discrete PID Controller/I Gain'
 * '<S156>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Ideal P Gain'
 * '<S157>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S158>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Integrator'
 * '<S159>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Integrator ICs'
 * '<S160>' : 'PW_SMRv7/Preheating/Discrete PID Controller/N Copy'
 * '<S161>' : 'PW_SMRv7/Preheating/Discrete PID Controller/N Gain'
 * '<S162>' : 'PW_SMRv7/Preheating/Discrete PID Controller/P Copy'
 * '<S163>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Parallel P Gain'
 * '<S164>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Reset Signal'
 * '<S165>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Saturation'
 * '<S166>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Saturation Fdbk'
 * '<S167>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Sum'
 * '<S168>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Sum Fdbk'
 * '<S169>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Tracking Mode'
 * '<S170>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Tracking Mode Sum'
 * '<S171>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Tsamp - Integral'
 * '<S172>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Tsamp - Ngain'
 * '<S173>' : 'PW_SMRv7/Preheating/Discrete PID Controller/postSat Signal'
 * '<S174>' : 'PW_SMRv7/Preheating/Discrete PID Controller/preSat Signal'
 * '<S175>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S176>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S177>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S178>' : 'PW_SMRv7/Preheating/Discrete PID Controller/D Gain/Disabled'
 * '<S179>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Filter/Disabled'
 * '<S180>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Filter ICs/Disabled'
 * '<S181>' : 'PW_SMRv7/Preheating/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S182>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S183>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S184>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Integrator/Discrete'
 * '<S185>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S186>' : 'PW_SMRv7/Preheating/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S187>' : 'PW_SMRv7/Preheating/Discrete PID Controller/N Gain/Disabled'
 * '<S188>' : 'PW_SMRv7/Preheating/Discrete PID Controller/P Copy/Disabled'
 * '<S189>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S190>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Reset Signal/Disabled'
 * '<S191>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Saturation/Enabled'
 * '<S192>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S193>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Sum/Sum_PI'
 * '<S194>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S195>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S196>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S197>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Tsamp - Integral/Passthrough'
 * '<S198>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S199>' : 'PW_SMRv7/Preheating/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S200>' : 'PW_SMRv7/Preheating/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S201>' : 'PW_SMRv7/Preheating/PS-Simulink Converter1/EVAL_KEY'
 * '<S202>' : 'PW_SMRv7/Preheating/PS-Simulink Converter7/EVAL_KEY'
 * '<S203>' : 'PW_SMRv7/Preheating/Simulink-PS Converter1/EVAL_KEY'
 * '<S204>' : 'PW_SMRv7/Simulink-PS Converter/EVAL_KEY'
 * '<S205>' : 'PW_SMRv7/Solver Configuration/EVAL_KEY'
 * '<S206>' : 'PW_SMRv7/Subsystem/Discrete PID Controller'
 * '<S207>' : 'PW_SMRv7/Subsystem/Simulink-PS Converter'
 * '<S208>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Anti-windup'
 * '<S209>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/D Gain'
 * '<S210>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Filter'
 * '<S211>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Filter ICs'
 * '<S212>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/I Gain'
 * '<S213>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Ideal P Gain'
 * '<S214>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S215>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Integrator'
 * '<S216>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Integrator ICs'
 * '<S217>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/N Copy'
 * '<S218>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/N Gain'
 * '<S219>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/P Copy'
 * '<S220>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Parallel P Gain'
 * '<S221>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Reset Signal'
 * '<S222>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Saturation'
 * '<S223>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Saturation Fdbk'
 * '<S224>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Sum'
 * '<S225>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Sum Fdbk'
 * '<S226>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Tracking Mode'
 * '<S227>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Tracking Mode Sum'
 * '<S228>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Tsamp - Integral'
 * '<S229>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Tsamp - Ngain'
 * '<S230>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/postSat Signal'
 * '<S231>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/preSat Signal'
 * '<S232>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S233>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S234>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S235>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/D Gain/Disabled'
 * '<S236>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Filter/Disabled'
 * '<S237>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Filter ICs/Disabled'
 * '<S238>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S239>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S240>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S241>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Integrator/Discrete'
 * '<S242>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S243>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S244>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/N Gain/Disabled'
 * '<S245>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/P Copy/Disabled'
 * '<S246>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S247>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Reset Signal/Disabled'
 * '<S248>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Saturation/Enabled'
 * '<S249>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S250>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Sum/Sum_PI'
 * '<S251>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S252>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S253>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S254>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Tsamp - Integral/Passthrough'
 * '<S255>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S256>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S257>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S258>' : 'PW_SMRv7/Subsystem/Simulink-PS Converter/EVAL_KEY'
 * '<S259>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller'
 * '<S260>' : 'PW_SMRv7/Subsystem1/Simulink-PS Converter'
 * '<S261>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Anti-windup'
 * '<S262>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/D Gain'
 * '<S263>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Filter'
 * '<S264>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Filter ICs'
 * '<S265>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/I Gain'
 * '<S266>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Ideal P Gain'
 * '<S267>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S268>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Integrator'
 * '<S269>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Integrator ICs'
 * '<S270>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/N Copy'
 * '<S271>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/N Gain'
 * '<S272>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/P Copy'
 * '<S273>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Parallel P Gain'
 * '<S274>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Reset Signal'
 * '<S275>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Saturation'
 * '<S276>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Saturation Fdbk'
 * '<S277>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Sum'
 * '<S278>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Sum Fdbk'
 * '<S279>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Tracking Mode'
 * '<S280>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Tracking Mode Sum'
 * '<S281>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Tsamp - Integral'
 * '<S282>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Tsamp - Ngain'
 * '<S283>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/postSat Signal'
 * '<S284>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/preSat Signal'
 * '<S285>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S286>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S287>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S288>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/D Gain/Internal Parameters'
 * '<S289>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Filter/Disc. Forward Euler Filter'
 * '<S290>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Filter ICs/Internal IC - Filter'
 * '<S291>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S292>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S293>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S294>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Integrator/Discrete'
 * '<S295>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S296>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/N Copy/Disabled'
 * '<S297>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/N Gain/Internal Parameters'
 * '<S298>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/P Copy/Disabled'
 * '<S299>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S300>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Reset Signal/Disabled'
 * '<S301>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Saturation/Enabled'
 * '<S302>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S303>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Sum/Sum_PID'
 * '<S304>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S305>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S306>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S307>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Tsamp - Integral/Passthrough'
 * '<S308>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S309>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S310>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S311>' : 'PW_SMRv7/Subsystem1/Simulink-PS Converter/EVAL_KEY'
 */
#endif                                 /* RTW_HEADER_PW_SMRv7_h_ */
