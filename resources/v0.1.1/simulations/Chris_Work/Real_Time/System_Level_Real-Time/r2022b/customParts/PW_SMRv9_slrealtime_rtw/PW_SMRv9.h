/*
 * PW_SMRv9.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "PW_SMRv9".
 *
 * Model version              : 1.7
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C++ source code generated on : Fri Oct  9 13:12:22 2026
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PW_SMRv9_h_
#define RTW_HEADER_PW_SMRv9_h_
#include <logsrv.h>
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "nesl_rtw.h"
#include "PW_SMRv9_4b22eff7_1_gateway.h"
#include "PW_SMRv9_types.h"
#include "PW_SMRv9_cal.h"

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
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

/* Block signals (default storage) */
struct B_PW_SMRv9_T {
  real_T DiscreteTransferFcn;          /* '<S90>/Discrete Transfer Fcn' */
  real_T INPUT_6_1_1[4];               /* '<S287>/INPUT_6_1_1' */
  real_T DiscreteTransferFcn3;         /* '<S91>/Discrete Transfer Fcn3' */
  real_T INPUT_7_1_1[4];               /* '<S287>/INPUT_7_1_1' */
  real_T Clock;                        /* '<Root>/Clock' */
  real_T Switch;                       /* '<Root>/Switch' */
  real_T INPUT_4_1_1[4];               /* '<S287>/INPUT_4_1_1' */
  real_T DiscreteTransferFcn_n;        /* '<S92>/Discrete Transfer Fcn' */
  real_T INPUT_8_1_1[4];               /* '<S287>/INPUT_8_1_1' */
  real_T DiscreteTransferFcn_m;        /* '<Root>/Discrete Transfer Fcn' */
  real_T INPUT_2_1_1[4];               /* '<S287>/INPUT_2_1_1' */
  real_T DiscreteTransferFcn_nq;       /* '<S84>/Discrete Transfer Fcn' */
  real_T Saturation1;                  /* '<S84>/Saturation1' */
  real_T INPUT_1_1_1[4];               /* '<S287>/INPUT_1_1_1' */
  real_T DiscreteTransferFcn3_l;       /* '<Root>/Discrete Transfer Fcn3' */
  real_T INPUT_5_1_1[4];               /* '<S287>/INPUT_5_1_1' */
  real_T DiscreteTransferFcn1;         /* '<Root>/Discrete Transfer Fcn1' */
  real_T Saturation1_o;                /* '<Root>/Saturation1' */
  real_T INPUT_3_1_1[4];               /* '<S287>/INPUT_3_1_1' */
  real_T STATE_1[423];                 /* '<S287>/STATE_1' */
  real_T OUTPUT_1_4[6];                /* '<S287>/OUTPUT_1_4' */
  real_T RESHAPE;                      /* '<S148>/RESHAPE' */
  real_T OUTPUT_1_0[78];               /* '<S287>/OUTPUT_1_0' */
  real_T RESHAPE_b;                    /* '<S165>/RESHAPE' */
  real_T RESHAPE_d;                    /* '<S185>/RESHAPE' */
  real_T Product;                      /* '<Root>/Product' */
  real_T Abs;                          /* '<Root>/Abs' */
  real_T Gain1;                        /* '<Root>/Gain1' */
  real_T RESHAPE_n;                    /* '<S201>/RESHAPE' */
  real_T OUTPUT_1_3[6];                /* '<S287>/OUTPUT_1_3' */
  real_T RESHAPE_a;                    /* '<S206>/RESHAPE' */
  real_T RESHAPE_j;                    /* '<S219>/RESHAPE' */
  real_T Product5;                     /* '<Root>/Product5' */
  real_T Abs1;                         /* '<Root>/Abs1' */
  real_T Gain2;                        /* '<Root>/Gain2' */
  real_T Add3;                         /* '<Root>/Add3' */
  real_T Subtract3;                    /* '<Root>/Subtract3' */
  real_T Add2;                         /* '<Root>/Add2' */
  real_T Add;                          /* '<Root>/Add' */
  real_T Switch1;                      /* '<Root>/Switch1' */
  real_T RESHAPE_c;                    /* '<S188>/RESHAPE' */
  real_T RESHAPE_k;                    /* '<S196>/RESHAPE' */
  real_T RESHAPE_h;                    /* '<S195>/RESHAPE' */
  real_T Subtract1;                    /* '<Root>/Subtract1' */
  real_T Product1;                     /* '<Root>/Product1' */
  real_T Product3;                     /* '<Root>/Product3' */
  real_T Product2;                     /* '<Root>/Product2' */
  real_T Product4;                     /* '<Root>/Product4' */
  real_T Add1;                         /* '<Root>/Add1' */
  real_T WhiteNoise;                   /* '<S1>/White Noise' */
  real_T Output;                       /* '<S1>/Output' */
  real_T DiscreteTransferFcn2;         /* '<Root>/Discrete Transfer Fcn2' */
  real_T Gain;                         /* '<Root>/Gain' */
  real_T RESHAPE_kr;                   /* '<S158>/RESHAPE' */
  real_T Subtract;                     /* '<Root>/Subtract' */
  real_T ProportionalGain;             /* '<S131>/Proportional Gain' */
  real_T Integrator;                   /* '<S126>/Integrator' */
  real_T Sum;                          /* '<S135>/Sum' */
  real_T DeadZone;                     /* '<S119>/DeadZone' */
  real_T IntegralGain;                 /* '<S123>/Integral Gain' */
  real_T Switch_e;                     /* '<S117>/Switch' */
  real_T Saturation;                   /* '<S133>/Saturation' */
  real_T Saturation_n;                 /* '<Root>/Saturation' */
  real_T RESHAPE_ab;                   /* '<S143>/RESHAPE' */
  real_T RESHAPE_o;                    /* '<S166>/RESHAPE' */
  real_T uDLookupTable;                /* '<S84>/1-D Lookup Table' */
  real_T Subtract_d;                   /* '<S84>/Subtract' */
  real_T ProportionalGain_d;           /* '<S267>/Proportional Gain' */
  real_T Integrator_n;                 /* '<S262>/Integrator' */
  real_T Sum_g;                        /* '<S271>/Sum' */
  real_T DeadZone_a;                   /* '<S255>/DeadZone' */
  real_T IntegralGain_m;               /* '<S259>/Integral Gain' */
  real_T Switch_j;                     /* '<S253>/Switch' */
  real_T Saturation_h;                 /* '<S269>/Saturation' */
  real_T OUTPUT_1_2;                   /* '<S287>/OUTPUT_1_2' */
  real_T RESHAPE_f;                    /* '<S279>/RESHAPE' */
  real_T RESHAPE_p;                    /* '<S280>/RESHAPE' */
  real_T RESHAPE_ak;                   /* '<S281>/RESHAPE' */
  real_T RESHAPE_jf;                   /* '<S144>/RESHAPE' */
  real_T uDLookupTable_b;              /* '<S92>/1-D Lookup Table' */
  real_T Subtract_p;                   /* '<S92>/Subtract' */
  real_T ProportionalGain_e;           /* '<S485>/Proportional Gain' */
  real_T Integrator_p;                 /* '<S480>/Integrator' */
  real_T DerivativeGain;               /* '<S474>/Derivative Gain' */
  real_T Filter;                       /* '<S475>/Filter' */
  real_T SumD;                         /* '<S475>/SumD' */
  real_T FilterCoefficient;            /* '<S483>/Filter Coefficient' */
  real_T Sum_e;                        /* '<S489>/Sum' */
  real_T DeadZone_e;                   /* '<S473>/DeadZone' */
  real_T IntegralGain_n;               /* '<S477>/Integral Gain' */
  real_T Switch_ed;                    /* '<S471>/Switch' */
  real_T Saturation_p;                 /* '<S487>/Saturation' */
  real_T MinMax;                       /* '<S92>/MinMax' */
  real_T Saturation_c;                 /* '<S92>/Saturation' */
  real_T RESHAPE_hr;                   /* '<S146>/RESHAPE' */
  real_T RESHAPE_kv;                   /* '<S147>/RESHAPE' */
  real_T RESHAPE_je;                   /* '<S149>/RESHAPE' */
  real_T RESHAPE_jv;                   /* '<S150>/RESHAPE' */
  real_T RESHAPE_g;                    /* '<S151>/RESHAPE' */
  real_T RESHAPE_i;                    /* '<S152>/RESHAPE' */
  real_T RESHAPE_ag;                   /* '<S153>/RESHAPE' */
  real_T RESHAPE_am;                   /* '<S154>/RESHAPE' */
  real_T RESHAPE_m;                    /* '<S155>/RESHAPE' */
  real_T RESHAPE_pj;                   /* '<S156>/RESHAPE' */
  real_T RESHAPE_aw;                   /* '<S186>/RESHAPE' */
  real_T Abs_m;                        /* '<S90>/Abs' */
  real_T DiscreteTransferFcn1_k;       /* '<S90>/Discrete Transfer Fcn1' */
  real_T Gain_n;                       /* '<S90>/Gain' */
  real_T Saturation_j;                 /* '<S90>/Saturation' */
  real_T Gain1_j;                      /* '<S90>/Gain1' */
  real_T Bias;                         /* '<S90>/Bias' */
  real_T Subtract_k;                   /* '<S90>/Subtract' */
  real_T ProportionalGain_i;           /* '<S328>/Proportional Gain' */
  real_T Integrator_a;                 /* '<S323>/Integrator' */
  real_T Sum_a;                        /* '<S332>/Sum' */
  real_T DeadZone_l;                   /* '<S316>/DeadZone' */
  real_T IntegralGain_nk;              /* '<S320>/Integral Gain' */
  real_T Switch_c;                     /* '<S314>/Switch' */
  real_T Saturation_na;                /* '<S330>/Saturation' */
  real_T RESHAPE_p1;                   /* '<S157>/RESHAPE' */
  real_T RESHAPE_ah;                   /* '<S159>/RESHAPE' */
  real_T RESHAPE_fb;                   /* '<S160>/RESHAPE' */
  real_T RESHAPE_km;                   /* '<S161>/RESHAPE' */
  real_T RESHAPE_oj;                   /* '<S162>/RESHAPE' */
  real_T RESHAPE_ng;                   /* '<S163>/RESHAPE' */
  real_T RESHAPE_e;                    /* '<S164>/RESHAPE' */
  real_T OUTPUT_1_1;                   /* '<S287>/OUTPUT_1_1' */
  real_T RESHAPE_gu;                   /* '<S145>/RESHAPE' */
  real_T RESHAPE_pv;                   /* '<S167>/RESHAPE' */
  real_T RESHAPE_kg;                   /* '<S168>/RESHAPE' */
  real_T RESHAPE_mh;                   /* '<S169>/RESHAPE' */
  real_T RESHAPE_az;                   /* '<S170>/RESHAPE' */
  real_T RESHAPE_ch;                   /* '<S171>/RESHAPE' */
  real_T RESHAPE_eh;                   /* '<S172>/RESHAPE' */
  real_T RESHAPE_a1;                   /* '<S173>/RESHAPE' */
  real_T RESHAPE_aq;                   /* '<S174>/RESHAPE' */
  real_T RESHAPE_d1;                   /* '<S175>/RESHAPE' */
  real_T RESHAPE_ik;                   /* '<S210>/RESHAPE' */
  real_T RESHAPE_ou;                   /* '<S176>/RESHAPE' */
  real_T Add_m;                        /* '<S91>/Add' */
  real_T ProportionalGain_n;           /* '<S382>/Proportional Gain' */
  real_T Integrator_o;                 /* '<S377>/Integrator' */
  real_T Sum_o;                        /* '<S386>/Sum' */
  real_T DeadZone_k;                   /* '<S370>/DeadZone' */
  real_T IntegralGain_mz;              /* '<S374>/Integral Gain' */
  real_T Switch_jb;                    /* '<S368>/Switch' */
  real_T Saturation_f;                 /* '<S384>/Saturation' */
  real_T Subtract5;                    /* '<S91>/Subtract5' */
  real_T ProportionalGain_e3;          /* '<S432>/Proportional Gain' */
  real_T Integrator_i;                 /* '<S427>/Integrator' */
  real_T Sum_oc;                       /* '<S436>/Sum' */
  real_T DeadZone_n;                   /* '<S420>/DeadZone' */
  real_T IntegralGain_i;               /* '<S424>/Integral Gain' */
  real_T Switch_m;                     /* '<S418>/Switch' */
  real_T Saturation_l;                 /* '<S434>/Saturation' */
  real_T MinMax_a;                     /* '<S91>/MinMax' */
  real_T Saturation2;                  /* '<S91>/Saturation2' */
  real_T RESHAPE_m2;                   /* '<S178>/RESHAPE' */
  real_T RESHAPE_mw;                   /* '<S179>/RESHAPE' */
  real_T RESHAPE_hg;                   /* '<S180>/RESHAPE' */
  real_T RESHAPE_pp;                   /* '<S181>/RESHAPE' */
  real_T RESHAPE_ae;                   /* '<S182>/RESHAPE' */
  real_T RESHAPE_ft;                   /* '<S183>/RESHAPE' */
  real_T RESHAPE_l;                    /* '<S184>/RESHAPE' */
  real_T RESHAPE_jt;                   /* '<S177>/RESHAPE' */
  real_T RESHAPE_ikc[3];               /* '<S187>/RESHAPE' */
  real_T RESHAPE_nd[3];                /* '<S189>/RESHAPE' */
  real_T RESHAPE_i4[3];                /* '<S190>/RESHAPE' */
  real_T RESHAPE_nu[3];                /* '<S191>/RESHAPE' */
  real_T RESHAPE_iy;                   /* '<S192>/RESHAPE' */
  real_T RESHAPE_my;                   /* '<S193>/RESHAPE' */
  real_T RESHAPE_br;                   /* '<S194>/RESHAPE' */
  real_T RESHAPE_kh;                   /* '<S221>/RESHAPE' */
  real_T RESHAPE_f2;                   /* '<S197>/RESHAPE' */
  real_T RESHAPE_il;                   /* '<S198>/RESHAPE' */
  real_T RESHAPE_c0;                   /* '<S200>/RESHAPE' */
  real_T Subtract2;                    /* '<Root>/Subtract2' */
  real_T RESHAPE_kri;                  /* '<S202>/RESHAPE' */
  real_T RESHAPE_ps;                   /* '<S203>/RESHAPE' */
  real_T Subtract4;                    /* '<Root>/Subtract4' */
  real_T RESHAPE_i2;                   /* '<S199>/RESHAPE' */
  real_T RESHAPE_h4;                   /* '<S204>/RESHAPE' */
  real_T RESHAPE_eb;                   /* '<S205>/RESHAPE' */
  real_T RESHAPE_et;                   /* '<S207>/RESHAPE' */
  real_T RESHAPE_dh;                   /* '<S208>/RESHAPE' */
  real_T RESHAPE_ne;                   /* '<S209>/RESHAPE' */
  real_T RESHAPE_cm;                   /* '<S211>/RESHAPE' */
  real_T RESHAPE_pw;                   /* '<S212>/RESHAPE' */
  real_T RESHAPE_fl;                   /* '<S213>/RESHAPE' */
  real_T RESHAPE_al;                   /* '<S214>/RESHAPE' */
  real_T RESHAPE_fx;                   /* '<S223>/RESHAPE' */
  real_T RESHAPE_e3;                   /* '<S215>/RESHAPE' */
  real_T RESHAPE_e2;                   /* '<S216>/RESHAPE' */
  real_T RESHAPE_jfz;                  /* '<S217>/RESHAPE' */
  real_T RESHAPE_a0;                   /* '<S218>/RESHAPE' */
  real_T RESHAPE_bi;                   /* '<S220>/RESHAPE' */
  real_T RESHAPE_ko;                   /* '<S222>/RESHAPE' */
  real_T Step;                         /* '<Root>/Step' */
  real_T Step1;                        /* '<Root>/Step1' */
  int8_T Switch1_a;                    /* '<S117>/Switch1' */
  int8_T Switch2;                      /* '<S117>/Switch2' */
  int8_T Switch1_n;                    /* '<S253>/Switch1' */
  int8_T Switch2_a;                    /* '<S253>/Switch2' */
  int8_T Switch1_n2;                   /* '<S471>/Switch1' */
  int8_T Switch2_j;                    /* '<S471>/Switch2' */
  int8_T Switch1_m;                    /* '<S314>/Switch1' */
  int8_T Switch2_g;                    /* '<S314>/Switch2' */
  int8_T Switch1_a2;                   /* '<S368>/Switch1' */
  int8_T Switch2_m;                    /* '<S368>/Switch2' */
  int8_T Switch1_f;                    /* '<S418>/Switch1' */
  int8_T Switch2_d;                    /* '<S418>/Switch2' */
  boolean_T RelationalOperator;        /* '<S117>/Relational Operator' */
  boolean_T fixforDTpropagationissue;/* '<S117>/fix for DT propagation issue' */
  boolean_T fixforDTpropagationissue1;
                                    /* '<S117>/fix for DT propagation issue1' */
  boolean_T Equal1;                    /* '<S117>/Equal1' */
  boolean_T AND3;                      /* '<S117>/AND3' */
  boolean_T RelationalOperator_f;      /* '<S253>/Relational Operator' */
  boolean_T fixforDTpropagationissue_p;
                                     /* '<S253>/fix for DT propagation issue' */
  boolean_T fixforDTpropagationissue1_m;
                                    /* '<S253>/fix for DT propagation issue1' */
  boolean_T Equal1_e;                  /* '<S253>/Equal1' */
  boolean_T AND3_n;                    /* '<S253>/AND3' */
  boolean_T RelationalOperator_fb;     /* '<S471>/Relational Operator' */
  boolean_T fixforDTpropagationissue_n;
                                     /* '<S471>/fix for DT propagation issue' */
  boolean_T fixforDTpropagationissue1_l;
                                    /* '<S471>/fix for DT propagation issue1' */
  boolean_T Equal1_j;                  /* '<S471>/Equal1' */
  boolean_T AND3_nv;                   /* '<S471>/AND3' */
  boolean_T RelationalOperator_o;      /* '<S314>/Relational Operator' */
  boolean_T fixforDTpropagationissue_g;
                                     /* '<S314>/fix for DT propagation issue' */
  boolean_T fixforDTpropagationissue1_e;
                                    /* '<S314>/fix for DT propagation issue1' */
  boolean_T Equal1_p;                  /* '<S314>/Equal1' */
  boolean_T AND3_h;                    /* '<S314>/AND3' */
  boolean_T RelationalOperator_b;      /* '<S368>/Relational Operator' */
  boolean_T fixforDTpropagationissue_h;
                                     /* '<S368>/fix for DT propagation issue' */
  boolean_T fixforDTpropagationissue1_ez;
                                    /* '<S368>/fix for DT propagation issue1' */
  boolean_T Equal1_n;                  /* '<S368>/Equal1' */
  boolean_T AND3_j;                    /* '<S368>/AND3' */
  boolean_T RelationalOperator_j;      /* '<S418>/Relational Operator' */
  boolean_T fixforDTpropagationissue_i;
                                     /* '<S418>/fix for DT propagation issue' */
  boolean_T fixforDTpropagationissue1_f;
                                    /* '<S418>/fix for DT propagation issue1' */
  boolean_T Equal1_h;                  /* '<S418>/Equal1' */
  boolean_T AND3_a;                    /* '<S418>/AND3' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_PW_SMRv9_T {
  real_T DiscreteTransferFcn_states;   /* '<S90>/Discrete Transfer Fcn' */
  real_T INPUT_6_1_1_Discrete[2];      /* '<S287>/INPUT_6_1_1' */
  real_T DiscreteTransferFcn3_states;  /* '<S91>/Discrete Transfer Fcn3' */
  real_T INPUT_7_1_1_Discrete[2];      /* '<S287>/INPUT_7_1_1' */
  real_T INPUT_4_1_1_Discrete[2];      /* '<S287>/INPUT_4_1_1' */
  real_T DiscreteTransferFcn_states_m; /* '<S92>/Discrete Transfer Fcn' */
  real_T INPUT_8_1_1_Discrete[2];      /* '<S287>/INPUT_8_1_1' */
  real_T DiscreteTransferFcn_states_g; /* '<Root>/Discrete Transfer Fcn' */
  real_T INPUT_2_1_1_Discrete[2];      /* '<S287>/INPUT_2_1_1' */
  real_T DiscreteTransferFcn_states_h; /* '<S84>/Discrete Transfer Fcn' */
  real_T INPUT_1_1_1_Discrete[2];      /* '<S287>/INPUT_1_1_1' */
  real_T DiscreteTransferFcn3_states_d;/* '<Root>/Discrete Transfer Fcn3' */
  real_T INPUT_5_1_1_Discrete[2];      /* '<S287>/INPUT_5_1_1' */
  real_T DiscreteTransferFcn1_states;  /* '<Root>/Discrete Transfer Fcn1' */
  real_T INPUT_3_1_1_Discrete[2];      /* '<S287>/INPUT_3_1_1' */
  real_T STATE_1_Discrete[302];        /* '<S287>/STATE_1' */
  real_T DiscreteTransferFcn2_states;  /* '<Root>/Discrete Transfer Fcn2' */
  real_T Integrator_DSTATE;            /* '<S126>/Integrator' */
  real_T Integrator_DSTATE_h;          /* '<S262>/Integrator' */
  real_T Integrator_DSTATE_b;          /* '<S480>/Integrator' */
  real_T Filter_DSTATE;                /* '<S475>/Filter' */
  real_T DiscreteTransferFcn1_states_p;/* '<S90>/Discrete Transfer Fcn1' */
  real_T Integrator_DSTATE_j;          /* '<S323>/Integrator' */
  real_T Integrator_DSTATE_c;          /* '<S377>/Integrator' */
  real_T Integrator_DSTATE_k;          /* '<S427>/Integrator' */
  real_T OUTPUT_1_4_Discrete;          /* '<S287>/OUTPUT_1_4' */
  real_T OUTPUT_1_0_Discrete;          /* '<S287>/OUTPUT_1_0' */
  real_T OUTPUT_1_3_Discrete;          /* '<S287>/OUTPUT_1_3' */
  real_T NextOutput;                   /* '<S1>/White Noise' */
  real_T OUTPUT_1_2_Discrete;          /* '<S287>/OUTPUT_1_2' */
  real_T OUTPUT_1_1_Discrete;          /* '<S287>/OUTPUT_1_1' */
  void* STATE_1_Simulator;             /* '<S287>/STATE_1' */
  void* STATE_1_SimData;               /* '<S287>/STATE_1' */
  void* STATE_1_DiagMgr;               /* '<S287>/STATE_1' */
  void* STATE_1_ZcLogger;              /* '<S287>/STATE_1' */
  void* STATE_1_TsInfo;                /* '<S287>/STATE_1' */
  void* OUTPUT_1_4_Simulator;          /* '<S287>/OUTPUT_1_4' */
  void* OUTPUT_1_4_SimData;            /* '<S287>/OUTPUT_1_4' */
  void* OUTPUT_1_4_DiagMgr;            /* '<S287>/OUTPUT_1_4' */
  void* OUTPUT_1_4_ZcLogger;           /* '<S287>/OUTPUT_1_4' */
  void* OUTPUT_1_4_TsInfo;             /* '<S287>/OUTPUT_1_4' */
  void* OUTPUT_1_0_Simulator;          /* '<S287>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimData;            /* '<S287>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagMgr;            /* '<S287>/OUTPUT_1_0' */
  void* OUTPUT_1_0_ZcLogger;           /* '<S287>/OUTPUT_1_0' */
  void* OUTPUT_1_0_TsInfo;             /* '<S287>/OUTPUT_1_0' */
  void* OUTPUT_1_3_Simulator;          /* '<S287>/OUTPUT_1_3' */
  void* OUTPUT_1_3_SimData;            /* '<S287>/OUTPUT_1_3' */
  void* OUTPUT_1_3_DiagMgr;            /* '<S287>/OUTPUT_1_3' */
  void* OUTPUT_1_3_ZcLogger;           /* '<S287>/OUTPUT_1_3' */
  void* OUTPUT_1_3_TsInfo;             /* '<S287>/OUTPUT_1_3' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Add1_;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_PSSim;   /* synthesized block */

  void* OUTPUT_1_2_Simulator;          /* '<S287>/OUTPUT_1_2' */
  void* OUTPUT_1_2_SimData;            /* '<S287>/OUTPUT_1_2' */
  void* OUTPUT_1_2_DiagMgr;            /* '<S287>/OUTPUT_1_2' */
  void* OUTPUT_1_2_ZcLogger;           /* '<S287>/OUTPUT_1_2' */
  void* OUTPUT_1_2_TsInfo;             /* '<S287>/OUTPUT_1_2' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_PSS_d;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_PSS_h;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_PSS_f;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_PS_h4;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_PSS_l;   /* synthesized block */

  void* OUTPUT_1_1_Simulator;          /* '<S287>/OUTPUT_1_1' */
  void* OUTPUT_1_1_SimData;            /* '<S287>/OUTPUT_1_1' */
  void* OUTPUT_1_1_DiagMgr;            /* '<S287>/OUTPUT_1_1' */
  void* OUTPUT_1_1_ZcLogger;           /* '<S287>/OUTPUT_1_1' */
  void* OUTPUT_1_1_TsInfo;             /* '<S287>/OUTPUT_1_1' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_PS_ho;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_PS_hm;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_PSS_b;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_PS_dq;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_PS_hp;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_PSS_o;   /* synthesized block */

  uint32_T RandSeed;                   /* '<S1>/White Noise' */
  int_T STATE_1_Modes[163];            /* '<S287>/STATE_1' */
  int_T OUTPUT_1_4_Modes;              /* '<S287>/OUTPUT_1_4' */
  int_T OUTPUT_1_0_Modes;              /* '<S287>/OUTPUT_1_0' */
  int_T OUTPUT_1_3_Modes;              /* '<S287>/OUTPUT_1_3' */
  int_T OUTPUT_1_2_Modes;              /* '<S287>/OUTPUT_1_2' */
  int_T OUTPUT_1_1_Modes;              /* '<S287>/OUTPUT_1_1' */
  boolean_T STATE_1_FirstOutput;       /* '<S287>/STATE_1' */
  boolean_T OUTPUT_1_4_FirstOutput;    /* '<S287>/OUTPUT_1_4' */
  boolean_T OUTPUT_1_0_FirstOutput;    /* '<S287>/OUTPUT_1_0' */
  boolean_T OUTPUT_1_3_FirstOutput;    /* '<S287>/OUTPUT_1_3' */
  boolean_T OUTPUT_1_2_FirstOutput;    /* '<S287>/OUTPUT_1_2' */
  boolean_T OUTPUT_1_1_FirstOutput;    /* '<S287>/OUTPUT_1_1' */
};

/* Parameters (default storage) */
struct P_PW_SMRv9_T_ {
  real_T DiscretePIDController_LowerSa_c;
                              /* Mask Parameter: DiscretePIDController_LowerSa_c
                               * Referenced by:
                               *   '<S269>/Saturation'
                               *   '<S255>/DeadZone'
                               */
  real_T DiscretePIDController_UpperSa_j;
                              /* Mask Parameter: DiscretePIDController_UpperSa_j
                               * Referenced by:
                               *   '<S269>/Saturation'
                               *   '<S255>/DeadZone'
                               */
  real_T Saturation_UpperSat_d;        /* Expression: inf
                                        * Referenced by: '<S92>/Saturation'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_PW_SMRv9_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_PW_SMRv9_T PW_SMRv9_P;

#ifdef __cplusplus

}

#endif

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_PW_SMRv9_T PW_SMRv9_B;

#ifdef __cplusplus

}

#endif

/* Block states (default storage) */
extern struct DW_PW_SMRv9_T PW_SMRv9_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  /* Model entry point functions */
  extern void PW_SMRv9_initialize(void);
  extern void PW_SMRv9_step(void);
  extern void PW_SMRv9_terminate(void);

#ifdef __cplusplus

}

#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_PW_SMRv9_T *const PW_SMRv9_M;

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
 * '<Root>' : 'PW_SMRv9'
 * '<S1>'   : 'PW_SMRv9/Band-Limited White Noise'
 * '<S2>'   : 'PW_SMRv9/Discrete PID Controller'
 * '<S3>'   : 'PW_SMRv9/PS-Simulink Converter'
 * '<S4>'   : 'PW_SMRv9/PS-Simulink Converter1'
 * '<S5>'   : 'PW_SMRv9/PS-Simulink Converter10'
 * '<S6>'   : 'PW_SMRv9/PS-Simulink Converter11'
 * '<S7>'   : 'PW_SMRv9/PS-Simulink Converter12'
 * '<S8>'   : 'PW_SMRv9/PS-Simulink Converter13'
 * '<S9>'   : 'PW_SMRv9/PS-Simulink Converter14'
 * '<S10>'  : 'PW_SMRv9/PS-Simulink Converter15'
 * '<S11>'  : 'PW_SMRv9/PS-Simulink Converter16'
 * '<S12>'  : 'PW_SMRv9/PS-Simulink Converter17'
 * '<S13>'  : 'PW_SMRv9/PS-Simulink Converter18'
 * '<S14>'  : 'PW_SMRv9/PS-Simulink Converter19'
 * '<S15>'  : 'PW_SMRv9/PS-Simulink Converter2'
 * '<S16>'  : 'PW_SMRv9/PS-Simulink Converter20'
 * '<S17>'  : 'PW_SMRv9/PS-Simulink Converter21'
 * '<S18>'  : 'PW_SMRv9/PS-Simulink Converter22'
 * '<S19>'  : 'PW_SMRv9/PS-Simulink Converter23'
 * '<S20>'  : 'PW_SMRv9/PS-Simulink Converter24'
 * '<S21>'  : 'PW_SMRv9/PS-Simulink Converter25'
 * '<S22>'  : 'PW_SMRv9/PS-Simulink Converter26'
 * '<S23>'  : 'PW_SMRv9/PS-Simulink Converter27'
 * '<S24>'  : 'PW_SMRv9/PS-Simulink Converter28'
 * '<S25>'  : 'PW_SMRv9/PS-Simulink Converter29'
 * '<S26>'  : 'PW_SMRv9/PS-Simulink Converter3'
 * '<S27>'  : 'PW_SMRv9/PS-Simulink Converter30'
 * '<S28>'  : 'PW_SMRv9/PS-Simulink Converter31'
 * '<S29>'  : 'PW_SMRv9/PS-Simulink Converter32'
 * '<S30>'  : 'PW_SMRv9/PS-Simulink Converter33'
 * '<S31>'  : 'PW_SMRv9/PS-Simulink Converter34'
 * '<S32>'  : 'PW_SMRv9/PS-Simulink Converter35'
 * '<S33>'  : 'PW_SMRv9/PS-Simulink Converter36'
 * '<S34>'  : 'PW_SMRv9/PS-Simulink Converter37'
 * '<S35>'  : 'PW_SMRv9/PS-Simulink Converter38'
 * '<S36>'  : 'PW_SMRv9/PS-Simulink Converter39'
 * '<S37>'  : 'PW_SMRv9/PS-Simulink Converter4'
 * '<S38>'  : 'PW_SMRv9/PS-Simulink Converter40'
 * '<S39>'  : 'PW_SMRv9/PS-Simulink Converter41'
 * '<S40>'  : 'PW_SMRv9/PS-Simulink Converter42'
 * '<S41>'  : 'PW_SMRv9/PS-Simulink Converter43'
 * '<S42>'  : 'PW_SMRv9/PS-Simulink Converter44'
 * '<S43>'  : 'PW_SMRv9/PS-Simulink Converter45'
 * '<S44>'  : 'PW_SMRv9/PS-Simulink Converter46'
 * '<S45>'  : 'PW_SMRv9/PS-Simulink Converter47'
 * '<S46>'  : 'PW_SMRv9/PS-Simulink Converter48'
 * '<S47>'  : 'PW_SMRv9/PS-Simulink Converter49'
 * '<S48>'  : 'PW_SMRv9/PS-Simulink Converter5'
 * '<S49>'  : 'PW_SMRv9/PS-Simulink Converter50'
 * '<S50>'  : 'PW_SMRv9/PS-Simulink Converter51'
 * '<S51>'  : 'PW_SMRv9/PS-Simulink Converter52'
 * '<S52>'  : 'PW_SMRv9/PS-Simulink Converter53'
 * '<S53>'  : 'PW_SMRv9/PS-Simulink Converter54'
 * '<S54>'  : 'PW_SMRv9/PS-Simulink Converter55'
 * '<S55>'  : 'PW_SMRv9/PS-Simulink Converter56'
 * '<S56>'  : 'PW_SMRv9/PS-Simulink Converter57'
 * '<S57>'  : 'PW_SMRv9/PS-Simulink Converter58'
 * '<S58>'  : 'PW_SMRv9/PS-Simulink Converter59'
 * '<S59>'  : 'PW_SMRv9/PS-Simulink Converter6'
 * '<S60>'  : 'PW_SMRv9/PS-Simulink Converter60'
 * '<S61>'  : 'PW_SMRv9/PS-Simulink Converter61'
 * '<S62>'  : 'PW_SMRv9/PS-Simulink Converter62'
 * '<S63>'  : 'PW_SMRv9/PS-Simulink Converter63'
 * '<S64>'  : 'PW_SMRv9/PS-Simulink Converter64'
 * '<S65>'  : 'PW_SMRv9/PS-Simulink Converter65'
 * '<S66>'  : 'PW_SMRv9/PS-Simulink Converter66'
 * '<S67>'  : 'PW_SMRv9/PS-Simulink Converter67'
 * '<S68>'  : 'PW_SMRv9/PS-Simulink Converter68'
 * '<S69>'  : 'PW_SMRv9/PS-Simulink Converter69'
 * '<S70>'  : 'PW_SMRv9/PS-Simulink Converter7'
 * '<S71>'  : 'PW_SMRv9/PS-Simulink Converter70'
 * '<S72>'  : 'PW_SMRv9/PS-Simulink Converter71'
 * '<S73>'  : 'PW_SMRv9/PS-Simulink Converter72'
 * '<S74>'  : 'PW_SMRv9/PS-Simulink Converter73'
 * '<S75>'  : 'PW_SMRv9/PS-Simulink Converter74'
 * '<S76>'  : 'PW_SMRv9/PS-Simulink Converter75'
 * '<S77>'  : 'PW_SMRv9/PS-Simulink Converter76'
 * '<S78>'  : 'PW_SMRv9/PS-Simulink Converter77'
 * '<S79>'  : 'PW_SMRv9/PS-Simulink Converter78'
 * '<S80>'  : 'PW_SMRv9/PS-Simulink Converter79'
 * '<S81>'  : 'PW_SMRv9/PS-Simulink Converter8'
 * '<S82>'  : 'PW_SMRv9/PS-Simulink Converter80'
 * '<S83>'  : 'PW_SMRv9/PS-Simulink Converter9'
 * '<S84>'  : 'PW_SMRv9/Preheating'
 * '<S85>'  : 'PW_SMRv9/Simulink-PS Converter'
 * '<S86>'  : 'PW_SMRv9/Simulink-PS Converter1'
 * '<S87>'  : 'PW_SMRv9/Simulink-PS Converter2'
 * '<S88>'  : 'PW_SMRv9/Simulink-PS Converter3'
 * '<S89>'  : 'PW_SMRv9/Solver Configuration'
 * '<S90>'  : 'PW_SMRv9/Startup Controller'
 * '<S91>'  : 'PW_SMRv9/Subsystem'
 * '<S92>'  : 'PW_SMRv9/Subsystem1'
 * '<S93>'  : 'PW_SMRv9/Discrete PID Controller/Anti-windup'
 * '<S94>'  : 'PW_SMRv9/Discrete PID Controller/D Gain'
 * '<S95>'  : 'PW_SMRv9/Discrete PID Controller/Filter'
 * '<S96>'  : 'PW_SMRv9/Discrete PID Controller/Filter ICs'
 * '<S97>'  : 'PW_SMRv9/Discrete PID Controller/I Gain'
 * '<S98>'  : 'PW_SMRv9/Discrete PID Controller/Ideal P Gain'
 * '<S99>'  : 'PW_SMRv9/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S100>' : 'PW_SMRv9/Discrete PID Controller/Integrator'
 * '<S101>' : 'PW_SMRv9/Discrete PID Controller/Integrator ICs'
 * '<S102>' : 'PW_SMRv9/Discrete PID Controller/N Copy'
 * '<S103>' : 'PW_SMRv9/Discrete PID Controller/N Gain'
 * '<S104>' : 'PW_SMRv9/Discrete PID Controller/P Copy'
 * '<S105>' : 'PW_SMRv9/Discrete PID Controller/Parallel P Gain'
 * '<S106>' : 'PW_SMRv9/Discrete PID Controller/Reset Signal'
 * '<S107>' : 'PW_SMRv9/Discrete PID Controller/Saturation'
 * '<S108>' : 'PW_SMRv9/Discrete PID Controller/Saturation Fdbk'
 * '<S109>' : 'PW_SMRv9/Discrete PID Controller/Sum'
 * '<S110>' : 'PW_SMRv9/Discrete PID Controller/Sum Fdbk'
 * '<S111>' : 'PW_SMRv9/Discrete PID Controller/Tracking Mode'
 * '<S112>' : 'PW_SMRv9/Discrete PID Controller/Tracking Mode Sum'
 * '<S113>' : 'PW_SMRv9/Discrete PID Controller/Tsamp - Integral'
 * '<S114>' : 'PW_SMRv9/Discrete PID Controller/Tsamp - Ngain'
 * '<S115>' : 'PW_SMRv9/Discrete PID Controller/postSat Signal'
 * '<S116>' : 'PW_SMRv9/Discrete PID Controller/preSat Signal'
 * '<S117>' : 'PW_SMRv9/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S118>' : 'PW_SMRv9/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S119>' : 'PW_SMRv9/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S120>' : 'PW_SMRv9/Discrete PID Controller/D Gain/Disabled'
 * '<S121>' : 'PW_SMRv9/Discrete PID Controller/Filter/Disabled'
 * '<S122>' : 'PW_SMRv9/Discrete PID Controller/Filter ICs/Disabled'
 * '<S123>' : 'PW_SMRv9/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S124>' : 'PW_SMRv9/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S125>' : 'PW_SMRv9/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S126>' : 'PW_SMRv9/Discrete PID Controller/Integrator/Discrete'
 * '<S127>' : 'PW_SMRv9/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S128>' : 'PW_SMRv9/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S129>' : 'PW_SMRv9/Discrete PID Controller/N Gain/Disabled'
 * '<S130>' : 'PW_SMRv9/Discrete PID Controller/P Copy/Disabled'
 * '<S131>' : 'PW_SMRv9/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S132>' : 'PW_SMRv9/Discrete PID Controller/Reset Signal/Disabled'
 * '<S133>' : 'PW_SMRv9/Discrete PID Controller/Saturation/Enabled'
 * '<S134>' : 'PW_SMRv9/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S135>' : 'PW_SMRv9/Discrete PID Controller/Sum/Sum_PI'
 * '<S136>' : 'PW_SMRv9/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S137>' : 'PW_SMRv9/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S138>' : 'PW_SMRv9/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S139>' : 'PW_SMRv9/Discrete PID Controller/Tsamp - Integral/Passthrough'
 * '<S140>' : 'PW_SMRv9/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S141>' : 'PW_SMRv9/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S142>' : 'PW_SMRv9/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S143>' : 'PW_SMRv9/PS-Simulink Converter/EVAL_KEY'
 * '<S144>' : 'PW_SMRv9/PS-Simulink Converter1/EVAL_KEY'
 * '<S145>' : 'PW_SMRv9/PS-Simulink Converter10/EVAL_KEY'
 * '<S146>' : 'PW_SMRv9/PS-Simulink Converter11/EVAL_KEY'
 * '<S147>' : 'PW_SMRv9/PS-Simulink Converter12/EVAL_KEY'
 * '<S148>' : 'PW_SMRv9/PS-Simulink Converter13/EVAL_KEY'
 * '<S149>' : 'PW_SMRv9/PS-Simulink Converter14/EVAL_KEY'
 * '<S150>' : 'PW_SMRv9/PS-Simulink Converter15/EVAL_KEY'
 * '<S151>' : 'PW_SMRv9/PS-Simulink Converter16/EVAL_KEY'
 * '<S152>' : 'PW_SMRv9/PS-Simulink Converter17/EVAL_KEY'
 * '<S153>' : 'PW_SMRv9/PS-Simulink Converter18/EVAL_KEY'
 * '<S154>' : 'PW_SMRv9/PS-Simulink Converter19/EVAL_KEY'
 * '<S155>' : 'PW_SMRv9/PS-Simulink Converter2/EVAL_KEY'
 * '<S156>' : 'PW_SMRv9/PS-Simulink Converter20/EVAL_KEY'
 * '<S157>' : 'PW_SMRv9/PS-Simulink Converter21/EVAL_KEY'
 * '<S158>' : 'PW_SMRv9/PS-Simulink Converter22/EVAL_KEY'
 * '<S159>' : 'PW_SMRv9/PS-Simulink Converter23/EVAL_KEY'
 * '<S160>' : 'PW_SMRv9/PS-Simulink Converter24/EVAL_KEY'
 * '<S161>' : 'PW_SMRv9/PS-Simulink Converter25/EVAL_KEY'
 * '<S162>' : 'PW_SMRv9/PS-Simulink Converter26/EVAL_KEY'
 * '<S163>' : 'PW_SMRv9/PS-Simulink Converter27/EVAL_KEY'
 * '<S164>' : 'PW_SMRv9/PS-Simulink Converter28/EVAL_KEY'
 * '<S165>' : 'PW_SMRv9/PS-Simulink Converter29/EVAL_KEY'
 * '<S166>' : 'PW_SMRv9/PS-Simulink Converter3/EVAL_KEY'
 * '<S167>' : 'PW_SMRv9/PS-Simulink Converter30/EVAL_KEY'
 * '<S168>' : 'PW_SMRv9/PS-Simulink Converter31/EVAL_KEY'
 * '<S169>' : 'PW_SMRv9/PS-Simulink Converter32/EVAL_KEY'
 * '<S170>' : 'PW_SMRv9/PS-Simulink Converter33/EVAL_KEY'
 * '<S171>' : 'PW_SMRv9/PS-Simulink Converter34/EVAL_KEY'
 * '<S172>' : 'PW_SMRv9/PS-Simulink Converter35/EVAL_KEY'
 * '<S173>' : 'PW_SMRv9/PS-Simulink Converter36/EVAL_KEY'
 * '<S174>' : 'PW_SMRv9/PS-Simulink Converter37/EVAL_KEY'
 * '<S175>' : 'PW_SMRv9/PS-Simulink Converter38/EVAL_KEY'
 * '<S176>' : 'PW_SMRv9/PS-Simulink Converter39/EVAL_KEY'
 * '<S177>' : 'PW_SMRv9/PS-Simulink Converter4/EVAL_KEY'
 * '<S178>' : 'PW_SMRv9/PS-Simulink Converter40/EVAL_KEY'
 * '<S179>' : 'PW_SMRv9/PS-Simulink Converter41/EVAL_KEY'
 * '<S180>' : 'PW_SMRv9/PS-Simulink Converter42/EVAL_KEY'
 * '<S181>' : 'PW_SMRv9/PS-Simulink Converter43/EVAL_KEY'
 * '<S182>' : 'PW_SMRv9/PS-Simulink Converter44/EVAL_KEY'
 * '<S183>' : 'PW_SMRv9/PS-Simulink Converter45/EVAL_KEY'
 * '<S184>' : 'PW_SMRv9/PS-Simulink Converter46/EVAL_KEY'
 * '<S185>' : 'PW_SMRv9/PS-Simulink Converter47/EVAL_KEY'
 * '<S186>' : 'PW_SMRv9/PS-Simulink Converter48/EVAL_KEY'
 * '<S187>' : 'PW_SMRv9/PS-Simulink Converter49/EVAL_KEY'
 * '<S188>' : 'PW_SMRv9/PS-Simulink Converter5/EVAL_KEY'
 * '<S189>' : 'PW_SMRv9/PS-Simulink Converter50/EVAL_KEY'
 * '<S190>' : 'PW_SMRv9/PS-Simulink Converter51/EVAL_KEY'
 * '<S191>' : 'PW_SMRv9/PS-Simulink Converter52/EVAL_KEY'
 * '<S192>' : 'PW_SMRv9/PS-Simulink Converter53/EVAL_KEY'
 * '<S193>' : 'PW_SMRv9/PS-Simulink Converter54/EVAL_KEY'
 * '<S194>' : 'PW_SMRv9/PS-Simulink Converter55/EVAL_KEY'
 * '<S195>' : 'PW_SMRv9/PS-Simulink Converter56/EVAL_KEY'
 * '<S196>' : 'PW_SMRv9/PS-Simulink Converter57/EVAL_KEY'
 * '<S197>' : 'PW_SMRv9/PS-Simulink Converter58/EVAL_KEY'
 * '<S198>' : 'PW_SMRv9/PS-Simulink Converter59/EVAL_KEY'
 * '<S199>' : 'PW_SMRv9/PS-Simulink Converter6/EVAL_KEY'
 * '<S200>' : 'PW_SMRv9/PS-Simulink Converter60/EVAL_KEY'
 * '<S201>' : 'PW_SMRv9/PS-Simulink Converter61/EVAL_KEY'
 * '<S202>' : 'PW_SMRv9/PS-Simulink Converter62/EVAL_KEY'
 * '<S203>' : 'PW_SMRv9/PS-Simulink Converter63/EVAL_KEY'
 * '<S204>' : 'PW_SMRv9/PS-Simulink Converter64/EVAL_KEY'
 * '<S205>' : 'PW_SMRv9/PS-Simulink Converter65/EVAL_KEY'
 * '<S206>' : 'PW_SMRv9/PS-Simulink Converter66/EVAL_KEY'
 * '<S207>' : 'PW_SMRv9/PS-Simulink Converter67/EVAL_KEY'
 * '<S208>' : 'PW_SMRv9/PS-Simulink Converter68/EVAL_KEY'
 * '<S209>' : 'PW_SMRv9/PS-Simulink Converter69/EVAL_KEY'
 * '<S210>' : 'PW_SMRv9/PS-Simulink Converter7/EVAL_KEY'
 * '<S211>' : 'PW_SMRv9/PS-Simulink Converter70/EVAL_KEY'
 * '<S212>' : 'PW_SMRv9/PS-Simulink Converter71/EVAL_KEY'
 * '<S213>' : 'PW_SMRv9/PS-Simulink Converter72/EVAL_KEY'
 * '<S214>' : 'PW_SMRv9/PS-Simulink Converter73/EVAL_KEY'
 * '<S215>' : 'PW_SMRv9/PS-Simulink Converter74/EVAL_KEY'
 * '<S216>' : 'PW_SMRv9/PS-Simulink Converter75/EVAL_KEY'
 * '<S217>' : 'PW_SMRv9/PS-Simulink Converter76/EVAL_KEY'
 * '<S218>' : 'PW_SMRv9/PS-Simulink Converter77/EVAL_KEY'
 * '<S219>' : 'PW_SMRv9/PS-Simulink Converter78/EVAL_KEY'
 * '<S220>' : 'PW_SMRv9/PS-Simulink Converter79/EVAL_KEY'
 * '<S221>' : 'PW_SMRv9/PS-Simulink Converter8/EVAL_KEY'
 * '<S222>' : 'PW_SMRv9/PS-Simulink Converter80/EVAL_KEY'
 * '<S223>' : 'PW_SMRv9/PS-Simulink Converter9/EVAL_KEY'
 * '<S224>' : 'PW_SMRv9/Preheating/Discrete PID Controller'
 * '<S225>' : 'PW_SMRv9/Preheating/PS-Simulink Converter'
 * '<S226>' : 'PW_SMRv9/Preheating/PS-Simulink Converter1'
 * '<S227>' : 'PW_SMRv9/Preheating/PS-Simulink Converter7'
 * '<S228>' : 'PW_SMRv9/Preheating/Simulink-PS Converter1'
 * '<S229>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Anti-windup'
 * '<S230>' : 'PW_SMRv9/Preheating/Discrete PID Controller/D Gain'
 * '<S231>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Filter'
 * '<S232>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Filter ICs'
 * '<S233>' : 'PW_SMRv9/Preheating/Discrete PID Controller/I Gain'
 * '<S234>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Ideal P Gain'
 * '<S235>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S236>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Integrator'
 * '<S237>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Integrator ICs'
 * '<S238>' : 'PW_SMRv9/Preheating/Discrete PID Controller/N Copy'
 * '<S239>' : 'PW_SMRv9/Preheating/Discrete PID Controller/N Gain'
 * '<S240>' : 'PW_SMRv9/Preheating/Discrete PID Controller/P Copy'
 * '<S241>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Parallel P Gain'
 * '<S242>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Reset Signal'
 * '<S243>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Saturation'
 * '<S244>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Saturation Fdbk'
 * '<S245>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Sum'
 * '<S246>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Sum Fdbk'
 * '<S247>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Tracking Mode'
 * '<S248>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Tracking Mode Sum'
 * '<S249>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Tsamp - Integral'
 * '<S250>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Tsamp - Ngain'
 * '<S251>' : 'PW_SMRv9/Preheating/Discrete PID Controller/postSat Signal'
 * '<S252>' : 'PW_SMRv9/Preheating/Discrete PID Controller/preSat Signal'
 * '<S253>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S254>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S255>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S256>' : 'PW_SMRv9/Preheating/Discrete PID Controller/D Gain/Disabled'
 * '<S257>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Filter/Disabled'
 * '<S258>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Filter ICs/Disabled'
 * '<S259>' : 'PW_SMRv9/Preheating/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S260>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S261>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S262>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Integrator/Discrete'
 * '<S263>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S264>' : 'PW_SMRv9/Preheating/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S265>' : 'PW_SMRv9/Preheating/Discrete PID Controller/N Gain/Disabled'
 * '<S266>' : 'PW_SMRv9/Preheating/Discrete PID Controller/P Copy/Disabled'
 * '<S267>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S268>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Reset Signal/Disabled'
 * '<S269>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Saturation/Enabled'
 * '<S270>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S271>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Sum/Sum_PI'
 * '<S272>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S273>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S274>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S275>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Tsamp - Integral/Passthrough'
 * '<S276>' : 'PW_SMRv9/Preheating/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S277>' : 'PW_SMRv9/Preheating/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S278>' : 'PW_SMRv9/Preheating/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S279>' : 'PW_SMRv9/Preheating/PS-Simulink Converter/EVAL_KEY'
 * '<S280>' : 'PW_SMRv9/Preheating/PS-Simulink Converter1/EVAL_KEY'
 * '<S281>' : 'PW_SMRv9/Preheating/PS-Simulink Converter7/EVAL_KEY'
 * '<S282>' : 'PW_SMRv9/Preheating/Simulink-PS Converter1/EVAL_KEY'
 * '<S283>' : 'PW_SMRv9/Simulink-PS Converter/EVAL_KEY'
 * '<S284>' : 'PW_SMRv9/Simulink-PS Converter1/EVAL_KEY'
 * '<S285>' : 'PW_SMRv9/Simulink-PS Converter2/EVAL_KEY'
 * '<S286>' : 'PW_SMRv9/Simulink-PS Converter3/EVAL_KEY'
 * '<S287>' : 'PW_SMRv9/Solver Configuration/EVAL_KEY'
 * '<S288>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller'
 * '<S289>' : 'PW_SMRv9/Startup Controller/Simulink-PS Converter'
 * '<S290>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Anti-windup'
 * '<S291>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/D Gain'
 * '<S292>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Filter'
 * '<S293>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Filter ICs'
 * '<S294>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/I Gain'
 * '<S295>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Ideal P Gain'
 * '<S296>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S297>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Integrator'
 * '<S298>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Integrator ICs'
 * '<S299>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/N Copy'
 * '<S300>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/N Gain'
 * '<S301>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/P Copy'
 * '<S302>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Parallel P Gain'
 * '<S303>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Reset Signal'
 * '<S304>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Saturation'
 * '<S305>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Saturation Fdbk'
 * '<S306>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Sum'
 * '<S307>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Sum Fdbk'
 * '<S308>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Tracking Mode'
 * '<S309>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Tracking Mode Sum'
 * '<S310>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Tsamp - Integral'
 * '<S311>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Tsamp - Ngain'
 * '<S312>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/postSat Signal'
 * '<S313>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/preSat Signal'
 * '<S314>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S315>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S316>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S317>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/D Gain/Disabled'
 * '<S318>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Filter/Disabled'
 * '<S319>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Filter ICs/Disabled'
 * '<S320>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S321>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S322>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S323>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Integrator/Discrete'
 * '<S324>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S325>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S326>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/N Gain/Disabled'
 * '<S327>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/P Copy/Disabled'
 * '<S328>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S329>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Reset Signal/Disabled'
 * '<S330>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Saturation/Enabled'
 * '<S331>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S332>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Sum/Sum_PI'
 * '<S333>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S334>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S335>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S336>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Tsamp - Integral/Passthrough'
 * '<S337>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S338>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S339>' : 'PW_SMRv9/Startup Controller/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S340>' : 'PW_SMRv9/Startup Controller/Simulink-PS Converter/EVAL_KEY'
 * '<S341>' : 'PW_SMRv9/Subsystem/Discrete PID Controller'
 * '<S342>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1'
 * '<S343>' : 'PW_SMRv9/Subsystem/Simulink-PS Converter'
 * '<S344>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Anti-windup'
 * '<S345>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/D Gain'
 * '<S346>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Filter'
 * '<S347>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Filter ICs'
 * '<S348>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/I Gain'
 * '<S349>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Ideal P Gain'
 * '<S350>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S351>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Integrator'
 * '<S352>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Integrator ICs'
 * '<S353>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/N Copy'
 * '<S354>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/N Gain'
 * '<S355>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/P Copy'
 * '<S356>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Parallel P Gain'
 * '<S357>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Reset Signal'
 * '<S358>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Saturation'
 * '<S359>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Saturation Fdbk'
 * '<S360>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Sum'
 * '<S361>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Sum Fdbk'
 * '<S362>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Tracking Mode'
 * '<S363>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Tracking Mode Sum'
 * '<S364>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Tsamp - Integral'
 * '<S365>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Tsamp - Ngain'
 * '<S366>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/postSat Signal'
 * '<S367>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/preSat Signal'
 * '<S368>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S369>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S370>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S371>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/D Gain/Disabled'
 * '<S372>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Filter/Disabled'
 * '<S373>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Filter ICs/Disabled'
 * '<S374>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S375>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S376>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S377>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Integrator/Discrete'
 * '<S378>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S379>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S380>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/N Gain/Disabled'
 * '<S381>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/P Copy/Disabled'
 * '<S382>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S383>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Reset Signal/Disabled'
 * '<S384>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Saturation/Enabled'
 * '<S385>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S386>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Sum/Sum_PI'
 * '<S387>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S388>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S389>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S390>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Tsamp - Integral/Passthrough'
 * '<S391>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S392>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S393>' : 'PW_SMRv9/Subsystem/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S394>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Anti-windup'
 * '<S395>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/D Gain'
 * '<S396>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Filter'
 * '<S397>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Filter ICs'
 * '<S398>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/I Gain'
 * '<S399>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Ideal P Gain'
 * '<S400>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Ideal P Gain Fdbk'
 * '<S401>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Integrator'
 * '<S402>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Integrator ICs'
 * '<S403>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/N Copy'
 * '<S404>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/N Gain'
 * '<S405>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/P Copy'
 * '<S406>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Parallel P Gain'
 * '<S407>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Reset Signal'
 * '<S408>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Saturation'
 * '<S409>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Saturation Fdbk'
 * '<S410>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Sum'
 * '<S411>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Sum Fdbk'
 * '<S412>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Tracking Mode'
 * '<S413>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Tracking Mode Sum'
 * '<S414>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Tsamp - Integral'
 * '<S415>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Tsamp - Ngain'
 * '<S416>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/postSat Signal'
 * '<S417>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/preSat Signal'
 * '<S418>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Anti-windup/Disc. Clamping Parallel'
 * '<S419>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S420>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S421>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/D Gain/Disabled'
 * '<S422>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Filter/Disabled'
 * '<S423>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Filter ICs/Disabled'
 * '<S424>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/I Gain/Internal Parameters'
 * '<S425>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Ideal P Gain/Passthrough'
 * '<S426>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S427>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Integrator/Discrete'
 * '<S428>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Integrator ICs/Internal IC'
 * '<S429>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/N Copy/Disabled wSignal Specification'
 * '<S430>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/N Gain/Disabled'
 * '<S431>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/P Copy/Disabled'
 * '<S432>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S433>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Reset Signal/Disabled'
 * '<S434>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Saturation/Enabled'
 * '<S435>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Saturation Fdbk/Disabled'
 * '<S436>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Sum/Sum_PI'
 * '<S437>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Sum Fdbk/Disabled'
 * '<S438>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Tracking Mode/Disabled'
 * '<S439>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S440>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Tsamp - Integral/Passthrough'
 * '<S441>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S442>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/postSat Signal/Forward_Path'
 * '<S443>' : 'PW_SMRv9/Subsystem/Discrete PID Controller1/preSat Signal/Forward_Path'
 * '<S444>' : 'PW_SMRv9/Subsystem/Simulink-PS Converter/EVAL_KEY'
 * '<S445>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller'
 * '<S446>' : 'PW_SMRv9/Subsystem1/Simulink-PS Converter'
 * '<S447>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Anti-windup'
 * '<S448>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/D Gain'
 * '<S449>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Filter'
 * '<S450>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Filter ICs'
 * '<S451>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/I Gain'
 * '<S452>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Ideal P Gain'
 * '<S453>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S454>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Integrator'
 * '<S455>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Integrator ICs'
 * '<S456>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/N Copy'
 * '<S457>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/N Gain'
 * '<S458>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/P Copy'
 * '<S459>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Parallel P Gain'
 * '<S460>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Reset Signal'
 * '<S461>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Saturation'
 * '<S462>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Saturation Fdbk'
 * '<S463>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Sum'
 * '<S464>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Sum Fdbk'
 * '<S465>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Tracking Mode'
 * '<S466>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Tracking Mode Sum'
 * '<S467>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Tsamp - Integral'
 * '<S468>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Tsamp - Ngain'
 * '<S469>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/postSat Signal'
 * '<S470>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/preSat Signal'
 * '<S471>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel'
 * '<S472>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone'
 * '<S473>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Anti-windup/Disc. Clamping Parallel/Dead Zone/Enabled'
 * '<S474>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/D Gain/Internal Parameters'
 * '<S475>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Filter/Disc. Forward Euler Filter'
 * '<S476>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Filter ICs/Internal IC - Filter'
 * '<S477>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S478>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S479>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S480>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Integrator/Discrete'
 * '<S481>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S482>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/N Copy/Disabled'
 * '<S483>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/N Gain/Internal Parameters'
 * '<S484>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/P Copy/Disabled'
 * '<S485>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S486>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Reset Signal/Disabled'
 * '<S487>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Saturation/Enabled'
 * '<S488>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S489>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Sum/Sum_PID'
 * '<S490>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S491>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S492>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S493>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Tsamp - Integral/Passthrough'
 * '<S494>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S495>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S496>' : 'PW_SMRv9/Subsystem1/Discrete PID Controller/preSat Signal/Forward_Path'
 * '<S497>' : 'PW_SMRv9/Subsystem1/Simulink-PS Converter/EVAL_KEY'
 */
#endif                                 /* RTW_HEADER_PW_SMRv9_h_ */
