/*
 * PW_SMRv7.h
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
  real_T DiscreteTransferFcn;          /* '<S46>/Discrete Transfer Fcn' */
  real_T INPUT_4_1_1[4];               /* '<S195>/INPUT_4_1_1' */
  real_T DiscreteTransferFcn_a;        /* '<Root>/Discrete Transfer Fcn' */
  real_T INPUT_2_1_1[4];               /* '<S195>/INPUT_2_1_1' */
  real_T DiscreteTransferFcn_o;        /* '<S42>/Discrete Transfer Fcn' */
  real_T Saturation1;                  /* '<S42>/Saturation1' */
  real_T INPUT_1_1_1[4];               /* '<S195>/INPUT_1_1_1' */
  real_T DiscreteTransferFcn_n;        /* '<S45>/Discrete Transfer Fcn' */
  real_T INPUT_3_1_1[4];               /* '<S195>/INPUT_3_1_1' */
  real_T STATE_1[312];                 /* '<S195>/STATE_1' */
  real_T OUTPUT_1_1[37];               /* '<S195>/OUTPUT_1_1' */
  real_T RESHAPE;                      /* '<S112>/RESHAPE' */
  real_T Subtract;                     /* '<Root>/Subtract' */
  real_T ProportionalGain;             /* '<S85>/Proportional Gain' */
  real_T Integrator;                   /* '<S80>/Integrator' */
  real_T Sum;                          /* '<S89>/Sum' */
  real_T DeadZone;                     /* '<S73>/DeadZone' */
  real_T IntegralGain;                 /* '<S77>/Integral Gain' */
  real_T Switch;                       /* '<S71>/Switch' */
  real_T Saturation;                   /* '<S87>/Saturation' */
  real_T Saturation_l;                 /* '<Root>/Saturation' */
  real_T RESHAPE_e;                    /* '<S97>/RESHAPE' */
  real_T RESHAPE_k;                    /* '<S120>/RESHAPE' */
  real_T uDLookupTable;                /* '<S42>/1-D Lookup Table' */
  real_T Subtract_h;                   /* '<S42>/Subtract' */
  real_T ProportionalGain_d;           /* '<S179>/Proportional Gain' */
  real_T Integrator_f;                 /* '<S174>/Integrator' */
  real_T Sum_p;                        /* '<S183>/Sum' */
  real_T DeadZone_n;                   /* '<S167>/DeadZone' */
  real_T IntegralGain_p;               /* '<S171>/Integral Gain' */
  real_T Switch_a;                     /* '<S165>/Switch' */
  real_T Saturation_m;                 /* '<S181>/Saturation' */
  real_T RESHAPE_p;                    /* '<S191>/RESHAPE' */
  real_T RESHAPE_n;                    /* '<S192>/RESHAPE' */
  real_T RESHAPE_m;                    /* '<S98>/RESHAPE' */
  real_T uDLookupTable_l;              /* '<S46>/1-D Lookup Table' */
  real_T Subtract_hm;                  /* '<S46>/Subtract' */
  real_T ProportionalGain_l;           /* '<S289>/Proportional Gain' */
  real_T Integrator_n;                 /* '<S284>/Integrator' */
  real_T DerivativeGain;               /* '<S278>/Derivative Gain' */
  real_T Filter;                       /* '<S279>/Filter' */
  real_T SumD;                         /* '<S279>/SumD' */
  real_T FilterCoefficient;            /* '<S287>/Filter Coefficient' */
  real_T Sum_f;                        /* '<S293>/Sum' */
  real_T DeadZone_f;                   /* '<S277>/DeadZone' */
  real_T IntegralGain_c;               /* '<S281>/Integral Gain' */
  real_T Switch_f;                     /* '<S275>/Switch' */
  real_T Saturation_f;                 /* '<S291>/Saturation' */
  real_T MinMax;                       /* '<S46>/MinMax' */
  real_T Saturation_d;                 /* '<S46>/Saturation' */
  real_T RESHAPE_j;                    /* '<S100>/RESHAPE' */
  real_T OUTPUT_1_2[4];                /* '<S195>/OUTPUT_1_2' */
  real_T RESHAPE_ef;                   /* '<S102>/RESHAPE' */
  real_T OUTPUT_1_0;                   /* '<S195>/OUTPUT_1_0' */
  real_T RESHAPE_ps;                   /* '<S99>/RESHAPE' */
  real_T Gain;                         /* '<S45>/Gain' */
  real_T Subtract_m;                   /* '<S45>/Subtract' */
  real_T ProportionalGain_c;           /* '<S236>/Proportional Gain' */
  real_T Integrator_c;                 /* '<S231>/Integrator' */
  real_T Sum_k;                        /* '<S240>/Sum' */
  real_T DeadZone_m;                   /* '<S224>/DeadZone' */
  real_T IntegralGain_d;               /* '<S228>/Integral Gain' */
  real_T Switch_m;                     /* '<S222>/Switch' */
  real_T Saturation_i;                 /* '<S238>/Saturation' */
  real_T RESHAPE_a;                    /* '<S101>/RESHAPE' */
  real_T RESHAPE_l;                    /* '<S103>/RESHAPE' */
  real_T RESHAPE_p0;                   /* '<S104>/RESHAPE' */
  real_T RESHAPE_av;                   /* '<S105>/RESHAPE' */
  real_T RESHAPE_ab;                   /* '<S132>/RESHAPE' */
  real_T RESHAPE_po;                   /* '<S106>/RESHAPE' */
  real_T RESHAPE_my;                   /* '<S107>/RESHAPE' */
  real_T RESHAPE_b;                    /* '<S108>/RESHAPE' */
  real_T RESHAPE_h;                    /* '<S109>/RESHAPE' */
  real_T RESHAPE_nj;                   /* '<S110>/RESHAPE' */
  real_T RESHAPE_o;                    /* '<S111>/RESHAPE' */
  real_T RESHAPE_bx;                   /* '<S113>/RESHAPE' */
  real_T RESHAPE_o4;                   /* '<S114>/RESHAPE' */
  real_T RESHAPE_ou;                   /* '<S115>/RESHAPE' */
  real_T RESHAPE_j1;                   /* '<S116>/RESHAPE' */
  real_T RESHAPE_c;                    /* '<S117>/RESHAPE' */
  real_T RESHAPE_m5;                   /* '<S118>/RESHAPE' */
  real_T RESHAPE_k4;                   /* '<S119>/RESHAPE' */
  real_T RESHAPE_li;                   /* '<S121>/RESHAPE' */
  real_T RESHAPE_eh;                   /* '<S122>/RESHAPE' */
  real_T RESHAPE_kh;                   /* '<S123>/RESHAPE' */
  real_T RESHAPE_e3;                   /* '<S124>/RESHAPE' */
  real_T RESHAPE_cs;                   /* '<S125>/RESHAPE' */
  real_T RESHAPE_lj;                   /* '<S126>/RESHAPE' */
  real_T RESHAPE_ce;                   /* '<S127>/RESHAPE' */
  real_T RESHAPE_d;                    /* '<S128>/RESHAPE' */
  real_T RESHAPE_f;                    /* '<S129>/RESHAPE' */
  real_T RESHAPE_jf;                   /* '<S134>/RESHAPE' */
  real_T RESHAPE_e0;                   /* '<S130>/RESHAPE' */
  real_T RESHAPE_c4;                   /* '<S131>/RESHAPE' */
  real_T RESHAPE_g;                    /* '<S135>/RESHAPE' */
  real_T RESHAPE_i;                    /* '<S133>/RESHAPE' */
  real_T RESHAPE_fp;                   /* '<S136>/RESHAPE' */
  int8_T Switch1;                      /* '<S71>/Switch1' */
  int8_T Switch2;                      /* '<S71>/Switch2' */
  int8_T Switch1_n;                    /* '<S165>/Switch1' */
  int8_T Switch2_g;                    /* '<S165>/Switch2' */
  int8_T Switch1_j;                    /* '<S275>/Switch1' */
  int8_T Switch2_gt;                   /* '<S275>/Switch2' */
  int8_T Switch1_nb;                   /* '<S222>/Switch1' */
  int8_T Switch2_p;                    /* '<S222>/Switch2' */
  boolean_T RelationalOperator;        /* '<S71>/Relational Operator' */
  boolean_T fixforDTpropagationissue; /* '<S71>/fix for DT propagation issue' */
  boolean_T fixforDTpropagationissue1;
                                     /* '<S71>/fix for DT propagation issue1' */
  boolean_T Equal1;                    /* '<S71>/Equal1' */
  boolean_T AND3;                      /* '<S71>/AND3' */
  boolean_T RelationalOperator_a;      /* '<S165>/Relational Operator' */
  boolean_T fixforDTpropagationissue_f;
                                     /* '<S165>/fix for DT propagation issue' */
  boolean_T fixforDTpropagationissue1_c;
                                    /* '<S165>/fix for DT propagation issue1' */
  boolean_T Equal1_i;                  /* '<S165>/Equal1' */
  boolean_T AND3_g;                    /* '<S165>/AND3' */
  boolean_T RelationalOperator_a4;     /* '<S275>/Relational Operator' */
  boolean_T fixforDTpropagationissue_p;
                                     /* '<S275>/fix for DT propagation issue' */
  boolean_T fixforDTpropagationissue1_h;
                                    /* '<S275>/fix for DT propagation issue1' */
  boolean_T Equal1_d;                  /* '<S275>/Equal1' */
  boolean_T AND3_h;                    /* '<S275>/AND3' */
  boolean_T RelationalOperator_o;      /* '<S222>/Relational Operator' */
  boolean_T fixforDTpropagationissue_m;
                                     /* '<S222>/fix for DT propagation issue' */
  boolean_T fixforDTpropagationissue1_b;
                                    /* '<S222>/fix for DT propagation issue1' */
  boolean_T Equal1_o;                  /* '<S222>/Equal1' */
  boolean_T AND3_l;                    /* '<S222>/AND3' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_PW_SMRv7_T {
  real_T DiscreteTransferFcn_states;   /* '<S46>/Discrete Transfer Fcn' */
  real_T INPUT_4_1_1_Discrete[2];      /* '<S195>/INPUT_4_1_1' */
  real_T DiscreteTransferFcn_states_m; /* '<Root>/Discrete Transfer Fcn' */
  real_T INPUT_2_1_1_Discrete[2];      /* '<S195>/INPUT_2_1_1' */
  real_T DiscreteTransferFcn_states_n; /* '<S42>/Discrete Transfer Fcn' */
  real_T INPUT_1_1_1_Discrete[2];      /* '<S195>/INPUT_1_1_1' */
  real_T DiscreteTransferFcn_states_h; /* '<S45>/Discrete Transfer Fcn' */
  real_T INPUT_3_1_1_Discrete[2];      /* '<S195>/INPUT_3_1_1' */
  real_T STATE_1_Discrete[183];        /* '<S195>/STATE_1' */
  real_T Integrator_DSTATE;            /* '<S80>/Integrator' */
  real_T Integrator_DSTATE_k;          /* '<S174>/Integrator' */
  real_T Integrator_DSTATE_p;          /* '<S284>/Integrator' */
  real_T Filter_DSTATE;                /* '<S279>/Filter' */
  real_T Integrator_DSTATE_e;          /* '<S231>/Integrator' */
  real_T OUTPUT_1_1_Discrete;          /* '<S195>/OUTPUT_1_1' */
  real_T OUTPUT_1_2_Discrete;          /* '<S195>/OUTPUT_1_2' */
  real_T OUTPUT_1_0_Discrete;          /* '<S195>/OUTPUT_1_0' */
  void* STATE_1_Simulator;             /* '<S195>/STATE_1' */
  void* STATE_1_SimData;               /* '<S195>/STATE_1' */
  void* STATE_1_DiagMgr;               /* '<S195>/STATE_1' */
  void* STATE_1_ZcLogger;              /* '<S195>/STATE_1' */
  void* STATE_1_TsInfo;                /* '<S195>/STATE_1' */
  void* OUTPUT_1_1_Simulator;          /* '<S195>/OUTPUT_1_1' */
  void* OUTPUT_1_1_SimData;            /* '<S195>/OUTPUT_1_1' */
  void* OUTPUT_1_1_DiagMgr;            /* '<S195>/OUTPUT_1_1' */
  void* OUTPUT_1_1_ZcLogger;           /* '<S195>/OUTPUT_1_1' */
  void* OUTPUT_1_1_TsInfo;             /* '<S195>/OUTPUT_1_1' */
  void* OUTPUT_1_2_Simulator;          /* '<S195>/OUTPUT_1_2' */
  void* OUTPUT_1_2_SimData;            /* '<S195>/OUTPUT_1_2' */
  void* OUTPUT_1_2_DiagMgr;            /* '<S195>/OUTPUT_1_2' */
  void* OUTPUT_1_2_ZcLogger;           /* '<S195>/OUTPUT_1_2' */
  void* OUTPUT_1_2_TsInfo;             /* '<S195>/OUTPUT_1_2' */
  void* OUTPUT_1_0_Simulator;          /* '<S195>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimData;            /* '<S195>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagMgr;            /* '<S195>/OUTPUT_1_0' */
  void* OUTPUT_1_0_ZcLogger;           /* '<S195>/OUTPUT_1_0' */
  void* OUTPUT_1_0_TsInfo;             /* '<S195>/OUTPUT_1_0' */
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

  int_T STATE_1_Modes[129];            /* '<S195>/STATE_1' */
  int_T OUTPUT_1_1_Modes;              /* '<S195>/OUTPUT_1_1' */
  int_T OUTPUT_1_2_Modes;              /* '<S195>/OUTPUT_1_2' */
  int_T OUTPUT_1_0_Modes;              /* '<S195>/OUTPUT_1_0' */
  boolean_T STATE_1_FirstOutput;       /* '<S195>/STATE_1' */
  boolean_T OUTPUT_1_1_FirstOutput;    /* '<S195>/OUTPUT_1_1' */
  boolean_T OUTPUT_1_2_FirstOutput;    /* '<S195>/OUTPUT_1_2' */
  boolean_T OUTPUT_1_0_FirstOutput;    /* '<S195>/OUTPUT_1_0' */
};

/* Parameters (default storage) */
struct P_PW_SMRv7_T_ {
  real_T DiscretePIDController_LowerSa_f;
                              /* Mask Parameter: DiscretePIDController_LowerSa_f
                               * Referenced by:
                               *   '<S181>/Saturation'
                               *   '<S167>/DeadZone'
                               */
  real_T DiscretePIDController_UpperSa_o;
                              /* Mask Parameter: DiscretePIDController_UpperSa_o
                               * Referenced by:
                               *   '<S181>/Saturation'
                               *   '<S167>/DeadZone'
                               */
  real_T Saturation_UpperSat_b;        /* Expression: inf
                                        * Referenced by: '<S46>/Saturation'
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
 * '<S37>'  : 'PW_SMRv7/PS-Simulink Converter5'
 * '<S38>'  : 'PW_SMRv7/PS-Simulink Converter6'
 * '<S39>'  : 'PW_SMRv7/PS-Simulink Converter7'
 * '<S40>'  : 'PW_SMRv7/PS-Simulink Converter8'
 * '<S41>'  : 'PW_SMRv7/PS-Simulink Converter9'
 * '<S42>'  : 'PW_SMRv7/Preheating'
 * '<S43>'  : 'PW_SMRv7/Simulink-PS Converter'
 * '<S44>'  : 'PW_SMRv7/Solver Configuration'
 * '<S45>'  : 'PW_SMRv7/Subsystem'
 * '<S46>'  : 'PW_SMRv7/Subsystem1'
 * '<S47>'  : 'PW_SMRv7/Discrete PID Controller/Anti-windup'
 * '<S48>'  : 'PW_SMRv7/Discrete PID Controller/D Gain'
 * '<S49>'  : 'PW_SMRv7/Discrete PID Controller/Filter'
 * '<S50>'  : 'PW_SMRv7/Discrete PID Controller/Filter ICs'
 * '<S51>'  : 'PW_SMRv7/Discrete PID Controller/I Gain'
 * '<S52>'  : 'PW_SMRv7/Discrete PID Controller/Ideal P Gain'
 * '<S53>'  : 'PW_SMRv7/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S54>'  : 'PW_SMRv7/Discrete PID Controller/Integrator'
 * '<S55>'  : 'PW_SMRv7/Discrete PID Controller/Integrator ICs'
 * '<S56>'  : 'PW_SMRv7/Discrete PID Controller/N Copy'
 * '<S57>'  : 'PW_SMRv7/Discrete PID Controller/N Gain'
 * '<S58>'  : 'PW_SMRv7/Discrete PID Controller/P Copy'
 * '<S59>'  : 'PW_SMRv7/Discrete PID Controller/Parallel P Gain'
 * '<S60>'  : 'PW_SMRv7/Discrete PID Controller/Reset Signal'
 * '<S61>'  : 'PW_SMRv7/Discrete PID Controller/Saturation'
 * '<S62>'  : 'PW_SMRv7/Discrete PID Controller/Saturation Fdbk'
 * '<S63>'  : 'PW_SMRv7/Discrete PID Controller/Sum'
 * '<S64>'  : 'PW_SMRv7/Discrete PID Controller/Sum Fdbk'
 * '<S65>'  : 'PW_SMRv7/Discrete PID Controller/Tracking Mode'
 * '<S66>'  : 'PW_SMRv7/Discrete PID Controller/Tracking Mode Sum'
 * '<S67>'  : 'PW_SMRv7/Discrete PID Controller/Tsamp - Integral'
 * '<S68>'  : 'PW_SMRv7/Discrete PID Controller/Tsamp - Ngain'
 * '<S69>'  : 'PW_SMRv7/Discrete PID Controller/postSat Signal'
 * '<S70>'  : 'PW_SMRv7/Discrete PID Controller/preSat Signal'
 * '<S71>'  : 'PW_SMRv7/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S72>'  : 'PW_SMRv7/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S73>'  : 'PW_SMRv7/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S74>'  : 'PW_SMRv7/Discrete PID Controller/D Gain/Disabled'
 * '<S75>'  : 'PW_SMRv7/Discrete PID Controller/Filter/Disabled'
 * '<S76>'  : 'PW_SMRv7/Discrete PID Controller/Filter ICs/Disabled'
 * '<S77>'  : 'PW_SMRv7/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S78>'  : 'PW_SMRv7/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S79>'  : 'PW_SMRv7/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S80>'  : 'PW_SMRv7/Discrete PID Controller/Integrator/Discrete'
 * '<S81>'  : 'PW_SMRv7/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S82>'  : 'PW_SMRv7/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S83>'  : 'PW_SMRv7/Discrete PID Controller/N Gain/Disabled'
 * '<S84>'  : 'PW_SMRv7/Discrete PID Controller/P Copy/Disabled'
 * '<S85>'  : 'PW_SMRv7/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S86>'  : 'PW_SMRv7/Discrete PID Controller/Reset Signal/Disabled'
 * '<S87>'  : 'PW_SMRv7/Discrete PID Controller/Saturation/Enabled'
 * '<S88>'  : 'PW_SMRv7/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S89>'  : 'PW_SMRv7/Discrete PID Controller/Sum/Sum_PI'
 * '<S90>'  : 'PW_SMRv7/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S91>'  : 'PW_SMRv7/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S92>'  : 'PW_SMRv7/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S93>'  : 'PW_SMRv7/Discrete PID Controller/Tsamp - Integral/Passthrough'
 * '<S94>'  : 'PW_SMRv7/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S95>'  : 'PW_SMRv7/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S96>'  : 'PW_SMRv7/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S97>'  : 'PW_SMRv7/PS-Simulink Converter/EVAL_KEY'
 * '<S98>'  : 'PW_SMRv7/PS-Simulink Converter1/EVAL_KEY'
 * '<S99>'  : 'PW_SMRv7/PS-Simulink Converter10/EVAL_KEY'
 * '<S100>' : 'PW_SMRv7/PS-Simulink Converter11/EVAL_KEY'
 * '<S101>' : 'PW_SMRv7/PS-Simulink Converter12/EVAL_KEY'
 * '<S102>' : 'PW_SMRv7/PS-Simulink Converter13/EVAL_KEY'
 * '<S103>' : 'PW_SMRv7/PS-Simulink Converter14/EVAL_KEY'
 * '<S104>' : 'PW_SMRv7/PS-Simulink Converter15/EVAL_KEY'
 * '<S105>' : 'PW_SMRv7/PS-Simulink Converter16/EVAL_KEY'
 * '<S106>' : 'PW_SMRv7/PS-Simulink Converter17/EVAL_KEY'
 * '<S107>' : 'PW_SMRv7/PS-Simulink Converter18/EVAL_KEY'
 * '<S108>' : 'PW_SMRv7/PS-Simulink Converter19/EVAL_KEY'
 * '<S109>' : 'PW_SMRv7/PS-Simulink Converter2/EVAL_KEY'
 * '<S110>' : 'PW_SMRv7/PS-Simulink Converter20/EVAL_KEY'
 * '<S111>' : 'PW_SMRv7/PS-Simulink Converter21/EVAL_KEY'
 * '<S112>' : 'PW_SMRv7/PS-Simulink Converter22/EVAL_KEY'
 * '<S113>' : 'PW_SMRv7/PS-Simulink Converter23/EVAL_KEY'
 * '<S114>' : 'PW_SMRv7/PS-Simulink Converter24/EVAL_KEY'
 * '<S115>' : 'PW_SMRv7/PS-Simulink Converter25/EVAL_KEY'
 * '<S116>' : 'PW_SMRv7/PS-Simulink Converter26/EVAL_KEY'
 * '<S117>' : 'PW_SMRv7/PS-Simulink Converter27/EVAL_KEY'
 * '<S118>' : 'PW_SMRv7/PS-Simulink Converter28/EVAL_KEY'
 * '<S119>' : 'PW_SMRv7/PS-Simulink Converter29/EVAL_KEY'
 * '<S120>' : 'PW_SMRv7/PS-Simulink Converter3/EVAL_KEY'
 * '<S121>' : 'PW_SMRv7/PS-Simulink Converter30/EVAL_KEY'
 * '<S122>' : 'PW_SMRv7/PS-Simulink Converter31/EVAL_KEY'
 * '<S123>' : 'PW_SMRv7/PS-Simulink Converter32/EVAL_KEY'
 * '<S124>' : 'PW_SMRv7/PS-Simulink Converter33/EVAL_KEY'
 * '<S125>' : 'PW_SMRv7/PS-Simulink Converter34/EVAL_KEY'
 * '<S126>' : 'PW_SMRv7/PS-Simulink Converter35/EVAL_KEY'
 * '<S127>' : 'PW_SMRv7/PS-Simulink Converter36/EVAL_KEY'
 * '<S128>' : 'PW_SMRv7/PS-Simulink Converter37/EVAL_KEY'
 * '<S129>' : 'PW_SMRv7/PS-Simulink Converter38/EVAL_KEY'
 * '<S130>' : 'PW_SMRv7/PS-Simulink Converter39/EVAL_KEY'
 * '<S131>' : 'PW_SMRv7/PS-Simulink Converter4/EVAL_KEY'
 * '<S132>' : 'PW_SMRv7/PS-Simulink Converter5/EVAL_KEY'
 * '<S133>' : 'PW_SMRv7/PS-Simulink Converter6/EVAL_KEY'
 * '<S134>' : 'PW_SMRv7/PS-Simulink Converter7/EVAL_KEY'
 * '<S135>' : 'PW_SMRv7/PS-Simulink Converter8/EVAL_KEY'
 * '<S136>' : 'PW_SMRv7/PS-Simulink Converter9/EVAL_KEY'
 * '<S137>' : 'PW_SMRv7/Preheating/Discrete PID Controller'
 * '<S138>' : 'PW_SMRv7/Preheating/PS-Simulink Converter1'
 * '<S139>' : 'PW_SMRv7/Preheating/PS-Simulink Converter7'
 * '<S140>' : 'PW_SMRv7/Preheating/Simulink-PS Converter1'
 * '<S141>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Anti-windup'
 * '<S142>' : 'PW_SMRv7/Preheating/Discrete PID Controller/D Gain'
 * '<S143>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Filter'
 * '<S144>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Filter ICs'
 * '<S145>' : 'PW_SMRv7/Preheating/Discrete PID Controller/I Gain'
 * '<S146>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Ideal P Gain'
 * '<S147>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S148>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Integrator'
 * '<S149>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Integrator ICs'
 * '<S150>' : 'PW_SMRv7/Preheating/Discrete PID Controller/N Copy'
 * '<S151>' : 'PW_SMRv7/Preheating/Discrete PID Controller/N Gain'
 * '<S152>' : 'PW_SMRv7/Preheating/Discrete PID Controller/P Copy'
 * '<S153>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Parallel P Gain'
 * '<S154>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Reset Signal'
 * '<S155>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Saturation'
 * '<S156>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Saturation Fdbk'
 * '<S157>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Sum'
 * '<S158>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Sum Fdbk'
 * '<S159>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Tracking Mode'
 * '<S160>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Tracking Mode Sum'
 * '<S161>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Tsamp - Integral'
 * '<S162>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Tsamp - Ngain'
 * '<S163>' : 'PW_SMRv7/Preheating/Discrete PID Controller/postSat Signal'
 * '<S164>' : 'PW_SMRv7/Preheating/Discrete PID Controller/preSat Signal'
 * '<S165>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S166>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S167>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S168>' : 'PW_SMRv7/Preheating/Discrete PID Controller/D Gain/Disabled'
 * '<S169>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Filter/Disabled'
 * '<S170>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Filter ICs/Disabled'
 * '<S171>' : 'PW_SMRv7/Preheating/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S172>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S173>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S174>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Integrator/Discrete'
 * '<S175>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S176>' : 'PW_SMRv7/Preheating/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S177>' : 'PW_SMRv7/Preheating/Discrete PID Controller/N Gain/Disabled'
 * '<S178>' : 'PW_SMRv7/Preheating/Discrete PID Controller/P Copy/Disabled'
 * '<S179>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S180>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Reset Signal/Disabled'
 * '<S181>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Saturation/Enabled'
 * '<S182>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S183>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Sum/Sum_PI'
 * '<S184>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S185>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S186>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S187>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Tsamp - Integral/Passthrough'
 * '<S188>' : 'PW_SMRv7/Preheating/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S189>' : 'PW_SMRv7/Preheating/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S190>' : 'PW_SMRv7/Preheating/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S191>' : 'PW_SMRv7/Preheating/PS-Simulink Converter1/EVAL_KEY'
 * '<S192>' : 'PW_SMRv7/Preheating/PS-Simulink Converter7/EVAL_KEY'
 * '<S193>' : 'PW_SMRv7/Preheating/Simulink-PS Converter1/EVAL_KEY'
 * '<S194>' : 'PW_SMRv7/Simulink-PS Converter/EVAL_KEY'
 * '<S195>' : 'PW_SMRv7/Solver Configuration/EVAL_KEY'
 * '<S196>' : 'PW_SMRv7/Subsystem/Discrete PID Controller'
 * '<S197>' : 'PW_SMRv7/Subsystem/Simulink-PS Converter'
 * '<S198>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Anti-windup'
 * '<S199>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/D Gain'
 * '<S200>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Filter'
 * '<S201>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Filter ICs'
 * '<S202>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/I Gain'
 * '<S203>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Ideal P Gain'
 * '<S204>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S205>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Integrator'
 * '<S206>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Integrator ICs'
 * '<S207>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/N Copy'
 * '<S208>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/N Gain'
 * '<S209>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/P Copy'
 * '<S210>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Parallel P Gain'
 * '<S211>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Reset Signal'
 * '<S212>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Saturation'
 * '<S213>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Saturation Fdbk'
 * '<S214>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Sum'
 * '<S215>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Sum Fdbk'
 * '<S216>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Tracking Mode'
 * '<S217>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Tracking Mode Sum'
 * '<S218>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Tsamp - Integral'
 * '<S219>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Tsamp - Ngain'
 * '<S220>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/postSat Signal'
 * '<S221>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/preSat Signal'
 * '<S222>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S223>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S224>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S225>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/D Gain/Disabled'
 * '<S226>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Filter/Disabled'
 * '<S227>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Filter ICs/Disabled'
 * '<S228>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S229>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S230>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S231>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Integrator/Discrete'
 * '<S232>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S233>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S234>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/N Gain/Disabled'
 * '<S235>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/P Copy/Disabled'
 * '<S236>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S237>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Reset Signal/Disabled'
 * '<S238>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Saturation/Enabled'
 * '<S239>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S240>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Sum/Sum_PI'
 * '<S241>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S242>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S243>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S244>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Tsamp - Integral/Passthrough'
 * '<S245>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S246>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S247>' : 'PW_SMRv7/Subsystem/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S248>' : 'PW_SMRv7/Subsystem/Simulink-PS Converter/EVAL_KEY'
 * '<S249>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller'
 * '<S250>' : 'PW_SMRv7/Subsystem1/Simulink-PS Converter'
 * '<S251>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Anti-windup'
 * '<S252>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/D Gain'
 * '<S253>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Filter'
 * '<S254>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Filter ICs'
 * '<S255>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/I Gain'
 * '<S256>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Ideal P Gain'
 * '<S257>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S258>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Integrator'
 * '<S259>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Integrator ICs'
 * '<S260>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/N Copy'
 * '<S261>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/N Gain'
 * '<S262>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/P Copy'
 * '<S263>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Parallel P Gain'
 * '<S264>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Reset Signal'
 * '<S265>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Saturation'
 * '<S266>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Saturation Fdbk'
 * '<S267>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Sum'
 * '<S268>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Sum Fdbk'
 * '<S269>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Tracking Mode'
 * '<S270>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Tracking Mode Sum'
 * '<S271>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Tsamp - Integral'
 * '<S272>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Tsamp - Ngain'
 * '<S273>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/postSat Signal'
 * '<S274>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/preSat Signal'
 * '<S275>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S276>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S277>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S278>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/D Gain/Internal Parameters'
 * '<S279>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Filter/Disc. Forward Euler Filter'
 * '<S280>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Filter ICs/Internal IC - Filter'
 * '<S281>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S282>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S283>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S284>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Integrator/Discrete'
 * '<S285>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S286>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/N Copy/Disabled'
 * '<S287>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/N Gain/Internal Parameters'
 * '<S288>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/P Copy/Disabled'
 * '<S289>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S290>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Reset Signal/Disabled'
 * '<S291>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Saturation/Enabled'
 * '<S292>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S293>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Sum/Sum_PID'
 * '<S294>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S295>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S296>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S297>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Tsamp - Integral/Passthrough'
 * '<S298>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S299>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S300>' : 'PW_SMRv7/Subsystem1/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S301>' : 'PW_SMRv7/Subsystem1/Simulink-PS Converter/EVAL_KEY'
 */
#endif                                 /* RTW_HEADER_PW_SMRv7_h_ */
