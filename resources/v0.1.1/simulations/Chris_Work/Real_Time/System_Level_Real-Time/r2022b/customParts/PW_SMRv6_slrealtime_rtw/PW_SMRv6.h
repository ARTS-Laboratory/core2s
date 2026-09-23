/*
 * PW_SMRv6.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "PW_SMRv6".
 *
 * Model version              : 1.28
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C++ source code generated on : Mon Sep 21 17:54:31 2026
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PW_SMRv6_h_
#define RTW_HEADER_PW_SMRv6_h_
#include <logsrv.h>
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "nesl_rtw.h"
#include "PW_SMRv6_eed91bea_1_gateway.h"
#include "PW_SMRv6_types.h"
#include "PW_SMRv6_cal.h"

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
struct B_PW_SMRv6_T {
  real_T DiscreteTransferFcn;          /* '<S21>/Discrete Transfer Fcn' */
  real_T INPUT_2_1_1[4];               /* '<S94>/INPUT_2_1_1' */
  real_T DiscreteTransferFcn_a;        /* '<S19>/Discrete Transfer Fcn' */
  real_T Saturation1;                  /* '<S19>/Saturation1' */
  real_T INPUT_1_1_1[4];               /* '<S94>/INPUT_1_1_1' */
  real_T UnitDelay;                    /* '<S22>/Unit Delay' */
  real_T INPUT_3_1_1[4];               /* '<S94>/INPUT_3_1_1' */
  real_T STATE_1[401];                 /* '<S94>/STATE_1' */
  real_T OUTPUT_1_1[18];               /* '<S94>/OUTPUT_1_1' */
  real_T RESHAPE;                      /* '<S23>/RESHAPE' */
  real_T RESHAPE_i;                    /* '<S34>/RESHAPE' */
  real_T uDLookupTable;                /* '<S19>/1-D Lookup Table' */
  real_T Subtract;                     /* '<S19>/Subtract' */
  real_T ProportionalGain;             /* '<S81>/Proportional Gain' */
  real_T Integrator;                   /* '<S76>/Integrator' */
  real_T Sum;                          /* '<S85>/Sum' */
  real_T DeadZone;                     /* '<S69>/DeadZone' */
  real_T IntegralGain;                 /* '<S73>/Integral Gain' */
  real_T Switch;                       /* '<S67>/Switch' */
  real_T Saturation;                   /* '<S83>/Saturation' */
  real_T RESHAPE_d;                    /* '<S24>/RESHAPE' */
  real_T uDLookupTable_i;              /* '<S21>/1-D Lookup Table' */
  real_T Subtract_h;                   /* '<S21>/Subtract' */
  real_T ProportionalGain_b;           /* '<S135>/Proportional Gain' */
  real_T Integrator_b;                 /* '<S130>/Integrator' */
  real_T DerivativeGain;               /* '<S124>/Derivative Gain' */
  real_T Filter;                       /* '<S125>/Filter' */
  real_T SumD;                         /* '<S125>/SumD' */
  real_T FilterCoefficient;            /* '<S133>/Filter Coefficient' */
  real_T Sum_j;                        /* '<S139>/Sum' */
  real_T DeadZone_a;                   /* '<S123>/DeadZone' */
  real_T IntegralGain_j;               /* '<S127>/Integral Gain' */
  real_T Switch_b;                     /* '<S121>/Switch' */
  real_T Saturation_f;                 /* '<S137>/Saturation' */
  real_T MinMax;                       /* '<S21>/MinMax' */
  real_T Saturation_f0;                /* '<S21>/Saturation' */
  real_T RESHAPE_n;                    /* '<S26>/RESHAPE' */
  real_T RESHAPE_dd;                   /* '<S27>/RESHAPE' */
  real_T RESHAPE_l;                    /* '<S31>/RESHAPE' */
  real_T RESHAPE_e;                    /* '<S28>/RESHAPE' */
  real_T RESHAPE_j;                    /* '<S29>/RESHAPE' */
  real_T RESHAPE_b;                    /* '<S30>/RESHAPE' */
  real_T OUTPUT_1_0;                   /* '<S94>/OUTPUT_1_0' */
  real_T RESHAPE_f;                    /* '<S32>/RESHAPE' */
  real_T RESHAPE_fr;                   /* '<S33>/RESHAPE' */
  real_T RESHAPE_o;                    /* '<S38>/RESHAPE' */
  real_T RESHAPE_fu;                   /* '<S35>/RESHAPE' */
  real_T RESHAPE_jn;                   /* '<S39>/RESHAPE' */
  real_T RESHAPE_b4;                   /* '<S40>/RESHAPE' */
  real_T RESHAPE_g;                    /* '<S37>/RESHAPE' */
  real_T RESHAPE_e0;                   /* '<S25>/RESHAPE' */
  real_T RESHAPE_c;                    /* '<S36>/RESHAPE' */
  real_T Relay;                        /* '<S22>/Relay' */
  real_T OUTPUT_1_2[2];                /* '<S94>/OUTPUT_1_2' */
  real_T RESHAPE_m;                    /* '<S152>/RESHAPE' */
  real_T RESHAPE_gs;                   /* '<S153>/RESHAPE' */
  real_T RESHAPE_dm;                   /* '<S154>/RESHAPE' */
  int8_T Switch1;                      /* '<S67>/Switch1' */
  int8_T Switch2;                      /* '<S67>/Switch2' */
  int8_T Switch1_i;                    /* '<S121>/Switch1' */
  int8_T Switch2_a;                    /* '<S121>/Switch2' */
  boolean_T RelationalOperator;        /* '<S67>/Relational Operator' */
  boolean_T fixforDTpropagationissue; /* '<S67>/fix for DT propagation issue' */
  boolean_T fixforDTpropagationissue1;
                                     /* '<S67>/fix for DT propagation issue1' */
  boolean_T Equal1;                    /* '<S67>/Equal1' */
  boolean_T AND3;                      /* '<S67>/AND3' */
  boolean_T RelationalOperator_i;      /* '<S121>/Relational Operator' */
  boolean_T fixforDTpropagationissue_i;
                                     /* '<S121>/fix for DT propagation issue' */
  boolean_T fixforDTpropagationissue1_a;
                                    /* '<S121>/fix for DT propagation issue1' */
  boolean_T Equal1_a;                  /* '<S121>/Equal1' */
  boolean_T AND3_b;                    /* '<S121>/AND3' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_PW_SMRv6_T {
  real_T DiscreteTransferFcn_states;   /* '<S21>/Discrete Transfer Fcn' */
  real_T INPUT_2_1_1_Discrete[2];      /* '<S94>/INPUT_2_1_1' */
  real_T DiscreteTransferFcn_states_o; /* '<S19>/Discrete Transfer Fcn' */
  real_T INPUT_1_1_1_Discrete[2];      /* '<S94>/INPUT_1_1_1' */
  real_T UnitDelay_DSTATE;             /* '<S22>/Unit Delay' */
  real_T INPUT_3_1_1_Discrete[2];      /* '<S94>/INPUT_3_1_1' */
  real_T STATE_1_Discrete[246];        /* '<S94>/STATE_1' */
  real_T Integrator_DSTATE;            /* '<S76>/Integrator' */
  real_T Integrator_DSTATE_n;          /* '<S130>/Integrator' */
  real_T Filter_DSTATE;                /* '<S125>/Filter' */
  real_T OUTPUT_1_1_Discrete;          /* '<S94>/OUTPUT_1_1' */
  real_T OUTPUT_1_0_Discrete;          /* '<S94>/OUTPUT_1_0' */
  real_T OUTPUT_1_2_Discrete;          /* '<S94>/OUTPUT_1_2' */
  void* STATE_1_Simulator;             /* '<S94>/STATE_1' */
  void* STATE_1_SimData;               /* '<S94>/STATE_1' */
  void* STATE_1_DiagMgr;               /* '<S94>/STATE_1' */
  void* STATE_1_ZcLogger;              /* '<S94>/STATE_1' */
  void* STATE_1_TsInfo;                /* '<S94>/STATE_1' */
  void* OUTPUT_1_1_Simulator;          /* '<S94>/OUTPUT_1_1' */
  void* OUTPUT_1_1_SimData;            /* '<S94>/OUTPUT_1_1' */
  void* OUTPUT_1_1_DiagMgr;            /* '<S94>/OUTPUT_1_1' */
  void* OUTPUT_1_1_ZcLogger;           /* '<S94>/OUTPUT_1_1' */
  void* OUTPUT_1_1_TsInfo;             /* '<S94>/OUTPUT_1_1' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_PSSim;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_PSS_h;   /* synthesized block */

  void* OUTPUT_1_0_Simulator;          /* '<S94>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimData;            /* '<S94>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagMgr;            /* '<S94>/OUTPUT_1_0' */
  void* OUTPUT_1_0_ZcLogger;           /* '<S94>/OUTPUT_1_0' */
  void* OUTPUT_1_0_TsInfo;             /* '<S94>/OUTPUT_1_0' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_PSS_n;   /* synthesized block */

  void* OUTPUT_1_2_Simulator;          /* '<S94>/OUTPUT_1_2' */
  void* OUTPUT_1_2_SimData;            /* '<S94>/OUTPUT_1_2' */
  void* OUTPUT_1_2_DiagMgr;            /* '<S94>/OUTPUT_1_2' */
  void* OUTPUT_1_2_ZcLogger;           /* '<S94>/OUTPUT_1_2' */
  void* OUTPUT_1_2_TsInfo;             /* '<S94>/OUTPUT_1_2' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_PSS_i;   /* synthesized block */

  int_T STATE_1_Modes[163];            /* '<S94>/STATE_1' */
  int_T OUTPUT_1_1_Modes;              /* '<S94>/OUTPUT_1_1' */
  int_T OUTPUT_1_0_Modes;              /* '<S94>/OUTPUT_1_0' */
  int_T OUTPUT_1_2_Modes;              /* '<S94>/OUTPUT_1_2' */
  boolean_T STATE_1_FirstOutput;       /* '<S94>/STATE_1' */
  boolean_T OUTPUT_1_1_FirstOutput;    /* '<S94>/OUTPUT_1_1' */
  boolean_T OUTPUT_1_0_FirstOutput;    /* '<S94>/OUTPUT_1_0' */
  boolean_T Relay_Mode;                /* '<S22>/Relay' */
  boolean_T OUTPUT_1_2_FirstOutput;    /* '<S94>/OUTPUT_1_2' */
};

/* Parameters (default storage) */
struct P_PW_SMRv6_T_ {
  real_T DiscretePIDController_LowerSatu;
                              /* Mask Parameter: DiscretePIDController_LowerSatu
                               * Referenced by:
                               *   '<S83>/Saturation'
                               *   '<S69>/DeadZone'
                               */
  real_T DiscretePIDController_UpperSatu;
                              /* Mask Parameter: DiscretePIDController_UpperSatu
                               * Referenced by:
                               *   '<S83>/Saturation'
                               *   '<S69>/DeadZone'
                               */
  real_T Saturation_UpperSat;          /* Expression: inf
                                        * Referenced by: '<S21>/Saturation'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_PW_SMRv6_T {
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

  extern P_PW_SMRv6_T PW_SMRv6_P;

#ifdef __cplusplus

}

#endif

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_PW_SMRv6_T PW_SMRv6_B;

#ifdef __cplusplus

}

#endif

/* Block states (default storage) */
extern struct DW_PW_SMRv6_T PW_SMRv6_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  /* Model entry point functions */
  extern void PW_SMRv6_initialize(void);
  extern void PW_SMRv6_step(void);
  extern void PW_SMRv6_terminate(void);

#ifdef __cplusplus

}

#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_PW_SMRv6_T *const PW_SMRv6_M;

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
 * '<Root>' : 'PW_SMRv6'
 * '<S1>'   : 'PW_SMRv6/PS-Simulink Converter'
 * '<S2>'   : 'PW_SMRv6/PS-Simulink Converter1'
 * '<S3>'   : 'PW_SMRv6/PS-Simulink Converter10'
 * '<S4>'   : 'PW_SMRv6/PS-Simulink Converter11'
 * '<S5>'   : 'PW_SMRv6/PS-Simulink Converter12'
 * '<S6>'   : 'PW_SMRv6/PS-Simulink Converter13'
 * '<S7>'   : 'PW_SMRv6/PS-Simulink Converter14'
 * '<S8>'   : 'PW_SMRv6/PS-Simulink Converter15'
 * '<S9>'   : 'PW_SMRv6/PS-Simulink Converter16'
 * '<S10>'  : 'PW_SMRv6/PS-Simulink Converter2'
 * '<S11>'  : 'PW_SMRv6/PS-Simulink Converter25'
 * '<S12>'  : 'PW_SMRv6/PS-Simulink Converter3'
 * '<S13>'  : 'PW_SMRv6/PS-Simulink Converter4'
 * '<S14>'  : 'PW_SMRv6/PS-Simulink Converter5'
 * '<S15>'  : 'PW_SMRv6/PS-Simulink Converter6'
 * '<S16>'  : 'PW_SMRv6/PS-Simulink Converter7'
 * '<S17>'  : 'PW_SMRv6/PS-Simulink Converter8'
 * '<S18>'  : 'PW_SMRv6/PS-Simulink Converter9'
 * '<S19>'  : 'PW_SMRv6/Preheating'
 * '<S20>'  : 'PW_SMRv6/Solver Configuration'
 * '<S21>'  : 'PW_SMRv6/Subsystem'
 * '<S22>'  : 'PW_SMRv6/Subsystem3'
 * '<S23>'  : 'PW_SMRv6/PS-Simulink Converter/EVAL_KEY'
 * '<S24>'  : 'PW_SMRv6/PS-Simulink Converter1/EVAL_KEY'
 * '<S25>'  : 'PW_SMRv6/PS-Simulink Converter10/EVAL_KEY'
 * '<S26>'  : 'PW_SMRv6/PS-Simulink Converter11/EVAL_KEY'
 * '<S27>'  : 'PW_SMRv6/PS-Simulink Converter12/EVAL_KEY'
 * '<S28>'  : 'PW_SMRv6/PS-Simulink Converter13/EVAL_KEY'
 * '<S29>'  : 'PW_SMRv6/PS-Simulink Converter14/EVAL_KEY'
 * '<S30>'  : 'PW_SMRv6/PS-Simulink Converter15/EVAL_KEY'
 * '<S31>'  : 'PW_SMRv6/PS-Simulink Converter16/EVAL_KEY'
 * '<S32>'  : 'PW_SMRv6/PS-Simulink Converter2/EVAL_KEY'
 * '<S33>'  : 'PW_SMRv6/PS-Simulink Converter25/EVAL_KEY'
 * '<S34>'  : 'PW_SMRv6/PS-Simulink Converter3/EVAL_KEY'
 * '<S35>'  : 'PW_SMRv6/PS-Simulink Converter4/EVAL_KEY'
 * '<S36>'  : 'PW_SMRv6/PS-Simulink Converter5/EVAL_KEY'
 * '<S37>'  : 'PW_SMRv6/PS-Simulink Converter6/EVAL_KEY'
 * '<S38>'  : 'PW_SMRv6/PS-Simulink Converter7/EVAL_KEY'
 * '<S39>'  : 'PW_SMRv6/PS-Simulink Converter8/EVAL_KEY'
 * '<S40>'  : 'PW_SMRv6/PS-Simulink Converter9/EVAL_KEY'
 * '<S41>'  : 'PW_SMRv6/Preheating/Discrete PID Controller'
 * '<S42>'  : 'PW_SMRv6/Preheating/Simulink-PS Converter1'
 * '<S43>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Anti-windup'
 * '<S44>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/D Gain'
 * '<S45>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Filter'
 * '<S46>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Filter ICs'
 * '<S47>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/I Gain'
 * '<S48>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Ideal P Gain'
 * '<S49>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S50>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Integrator'
 * '<S51>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Integrator ICs'
 * '<S52>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/N Copy'
 * '<S53>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/N Gain'
 * '<S54>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/P Copy'
 * '<S55>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Parallel P Gain'
 * '<S56>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Reset Signal'
 * '<S57>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Saturation'
 * '<S58>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Saturation Fdbk'
 * '<S59>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Sum'
 * '<S60>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Sum Fdbk'
 * '<S61>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Tracking Mode'
 * '<S62>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Tracking Mode Sum'
 * '<S63>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Tsamp - Integral'
 * '<S64>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Tsamp - Ngain'
 * '<S65>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/postSat Signal'
 * '<S66>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/preSat Signal'
 * '<S67>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S68>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S69>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S70>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/D Gain/Disabled'
 * '<S71>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Filter/Disabled'
 * '<S72>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Filter ICs/Disabled'
 * '<S73>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S74>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S75>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S76>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Integrator/Discrete'
 * '<S77>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S78>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S79>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/N Gain/Disabled'
 * '<S80>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/P Copy/Disabled'
 * '<S81>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S82>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Reset Signal/Disabled'
 * '<S83>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Saturation/Enabled'
 * '<S84>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S85>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Sum/Sum_PI'
 * '<S86>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S87>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S88>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S89>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Tsamp - Integral/Passthrough'
 * '<S90>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S91>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S92>'  : 'PW_SMRv6/Preheating/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S93>'  : 'PW_SMRv6/Preheating/Simulink-PS Converter1/EVAL_KEY'
 * '<S94>'  : 'PW_SMRv6/Solver Configuration/EVAL_KEY'
 * '<S95>'  : 'PW_SMRv6/Subsystem/Discrete PID Controller'
 * '<S96>'  : 'PW_SMRv6/Subsystem/Simulink-PS Converter'
 * '<S97>'  : 'PW_SMRv6/Subsystem/Discrete PID Controller/Anti-windup'
 * '<S98>'  : 'PW_SMRv6/Subsystem/Discrete PID Controller/D Gain'
 * '<S99>'  : 'PW_SMRv6/Subsystem/Discrete PID Controller/Filter'
 * '<S100>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Filter ICs'
 * '<S101>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/I Gain'
 * '<S102>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Ideal P Gain'
 * '<S103>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S104>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Integrator'
 * '<S105>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Integrator ICs'
 * '<S106>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/N Copy'
 * '<S107>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/N Gain'
 * '<S108>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/P Copy'
 * '<S109>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Parallel P Gain'
 * '<S110>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Reset Signal'
 * '<S111>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Saturation'
 * '<S112>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Saturation Fdbk'
 * '<S113>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Sum'
 * '<S114>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Sum Fdbk'
 * '<S115>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Tracking Mode'
 * '<S116>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Tracking Mode Sum'
 * '<S117>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Tsamp - Integral'
 * '<S118>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Tsamp - Ngain'
 * '<S119>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/postSat Signal'
 * '<S120>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/preSat Signal'
 * '<S121>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S122>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S123>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S124>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/D Gain/Internal Parameters'
 * '<S125>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Filter/Disc. Forward Euler Filter'
 * '<S126>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Filter ICs/Internal IC - Filter'
 * '<S127>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S128>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S129>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S130>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Integrator/Discrete'
 * '<S131>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S132>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/N Copy/Disabled'
 * '<S133>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/N Gain/Internal Parameters'
 * '<S134>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/P Copy/Disabled'
 * '<S135>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S136>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Reset Signal/Disabled'
 * '<S137>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Saturation/Enabled'
 * '<S138>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S139>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Sum/Sum_PID'
 * '<S140>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S141>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S142>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S143>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Tsamp - Integral/Passthrough'
 * '<S144>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S145>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S146>' : 'PW_SMRv6/Subsystem/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S147>' : 'PW_SMRv6/Subsystem/Simulink-PS Converter/EVAL_KEY'
 * '<S148>' : 'PW_SMRv6/Subsystem3/PS-Simulink Converter'
 * '<S149>' : 'PW_SMRv6/Subsystem3/PS-Simulink Converter1'
 * '<S150>' : 'PW_SMRv6/Subsystem3/PS-Simulink Converter2'
 * '<S151>' : 'PW_SMRv6/Subsystem3/Simulink-PS Converter'
 * '<S152>' : 'PW_SMRv6/Subsystem3/PS-Simulink Converter/EVAL_KEY'
 * '<S153>' : 'PW_SMRv6/Subsystem3/PS-Simulink Converter1/EVAL_KEY'
 * '<S154>' : 'PW_SMRv6/Subsystem3/PS-Simulink Converter2/EVAL_KEY'
 * '<S155>' : 'PW_SMRv6/Subsystem3/Simulink-PS Converter/EVAL_KEY'
 */
#endif                                 /* RTW_HEADER_PW_SMRv6_h_ */
