/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv9/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_sys_struct.h"
#include "PW_SMRv9_4b22eff7_1_ds_update2_i.h"
#include "PW_SMRv9_4b22eff7_1_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_externals.h"
#include "PW_SMRv9_4b22eff7_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv9_4b22eff7_1_ds_update2_i(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t4, NeDsMethodOutput *t5)
{
  PmIntVector out;
  real_T X[250];
  real_T Circuit_Breaker_Three_Phase_breakerA_i;
  real_T Circuit_Breaker_Three_Phase_breakerB_i;
  real_T Circuit_Breaker_Three_Phase_breakerC_i;
  real_T U_idx_1;
  size_t t0;
  size_t t1;
  size_t t2;
  int32_T CI_idx_14;
  int32_T CI_idx_15;
  int32_T CI_idx_16;
  int32_T CI_idx_17;
  int32_T CI_idx_19;
  int32_T CI_idx_20;
  int32_T CI_idx_21;
  int32_T CI_idx_22;
  int32_T CI_idx_24;
  int32_T CI_idx_25;
  int32_T CI_idx_27;
  int32_T CI_idx_28;
  int32_T CI_idx_29;
  int32_T CI_idx_30;
  int32_T CI_idx_31;
  int32_T CI_idx_32;
  int32_T CI_idx_35;
  int32_T CI_idx_36;
  int32_T Q_idx_0;
  int32_T Q_idx_1;
  int32_T Q_idx_2;
  int32_T Q_idx_3;
  (void)LC;
  Q_idx_0 = t4->mQ.mX[0];
  Q_idx_1 = t4->mQ.mX[1];
  Q_idx_2 = t4->mQ.mX[2];
  Q_idx_3 = t4->mQ.mX[3];
  U_idx_1 = t4->mU.mX[1];
  for (CI_idx_14 = 0; CI_idx_14 < 250; CI_idx_14++) {
    X[CI_idx_14] = t4->mX.mX[CI_idx_14];
  }

  CI_idx_14 = t4->mCI.mX[14];
  CI_idx_15 = t4->mCI.mX[15];
  CI_idx_16 = t4->mCI.mX[16];
  CI_idx_17 = t4->mCI.mX[17];
  CI_idx_19 = t4->mCI.mX[19];
  CI_idx_20 = t4->mCI.mX[20];
  CI_idx_21 = t4->mCI.mX[21];
  CI_idx_22 = t4->mCI.mX[22];
  CI_idx_24 = t4->mCI.mX[24];
  CI_idx_25 = t4->mCI.mX[25];
  CI_idx_27 = t4->mCI.mX[27];
  CI_idx_28 = t4->mCI.mX[28];
  CI_idx_29 = t4->mCI.mX[29];
  CI_idx_30 = t4->mCI.mX[30];
  CI_idx_31 = t4->mCI.mX[31];
  CI_idx_32 = t4->mCI.mX[32];
  CI_idx_35 = t4->mCI.mX[35];
  CI_idx_36 = t4->mCI.mX[36];
  out = t5->mUPDATE2_I;
  Circuit_Breaker_Three_Phase_breakerA_i = X[84ULL] * -0.0012548887771113527;
  Circuit_Breaker_Three_Phase_breakerB_i = X[85ULL] * -0.0012548887771113527;
  Circuit_Breaker_Three_Phase_breakerC_i = X[86ULL] * -0.0012548887771113527;
  if ((CI_idx_20 == 0) && (U_idx_1 < 0.0) && ((size_t)Q_idx_0 == 1ULL)) {
    t0 = 2ULL;
  } else if ((CI_idx_19 == 0) && (U_idx_1 > 0.0) && ((size_t)Q_idx_0 == 2ULL)) {
    t0 = 3ULL;
  } else if ((CI_idx_17 == 0) && (Circuit_Breaker_Three_Phase_breakerA_i < 0.0) &&
             ((size_t)Q_idx_0 == 3ULL)) {
    t0 = 4ULL;
  } else if ((CI_idx_16 == 0) && (Circuit_Breaker_Three_Phase_breakerA_i > 0.0) &&
             ((size_t)Q_idx_0 == 3ULL)) {
    t0 = 5ULL;
  } else if ((CI_idx_15 == 0) && (Circuit_Breaker_Three_Phase_breakerA_i > 0.0) &&
             ((size_t)Q_idx_0 == 4ULL)) {
    t0 = 1ULL;
  } else if ((CI_idx_14 == 0) && (Circuit_Breaker_Three_Phase_breakerA_i < 0.0) &&
             ((size_t)Q_idx_0 == 5ULL)) {
    t0 = 1ULL;
  } else {
    t0 = (size_t)Q_idx_0;
  }

  if ((CI_idx_28 == 0) && (U_idx_1 < 0.0) && ((size_t)Q_idx_1 == 1ULL)) {
    t1 = 2ULL;
  } else if ((CI_idx_27 == 0) && (U_idx_1 > 0.0) && ((size_t)Q_idx_1 == 2ULL)) {
    t1 = 3ULL;
  } else if ((CI_idx_25 == 0) && (Circuit_Breaker_Three_Phase_breakerB_i < 0.0) &&
             ((size_t)Q_idx_1 == 3ULL)) {
    t1 = 4ULL;
  } else if ((CI_idx_24 == 0) && (Circuit_Breaker_Three_Phase_breakerB_i > 0.0) &&
             ((size_t)Q_idx_1 == 3ULL)) {
    t1 = 5ULL;
  } else if ((CI_idx_22 == 0) && (Circuit_Breaker_Three_Phase_breakerB_i > 0.0) &&
             ((size_t)Q_idx_1 == 4ULL)) {
    t1 = 1ULL;
  } else if ((CI_idx_21 == 0) && (Circuit_Breaker_Three_Phase_breakerB_i < 0.0) &&
             ((size_t)Q_idx_1 == 5ULL)) {
    t1 = 1ULL;
  } else {
    t1 = (size_t)Q_idx_1;
  }

  if ((CI_idx_36 == 0) && (U_idx_1 < 0.0) && ((size_t)Q_idx_2 == 1ULL)) {
    t2 = 2ULL;
  } else if ((CI_idx_35 == 0) && (U_idx_1 > 0.0) && ((size_t)Q_idx_2 == 2ULL)) {
    t2 = 3ULL;
  } else if ((CI_idx_32 == 0) && (Circuit_Breaker_Three_Phase_breakerC_i < 0.0) &&
             ((size_t)Q_idx_2 == 3ULL)) {
    t2 = 4ULL;
  } else if ((CI_idx_31 == 0) && (Circuit_Breaker_Three_Phase_breakerC_i > 0.0) &&
             ((size_t)Q_idx_2 == 3ULL)) {
    t2 = 5ULL;
  } else if ((CI_idx_30 == 0) && (Circuit_Breaker_Three_Phase_breakerC_i > 0.0) &&
             ((size_t)Q_idx_2 == 4ULL)) {
    t2 = 1ULL;
  } else if ((CI_idx_29 == 0) && (Circuit_Breaker_Three_Phase_breakerC_i < 0.0) &&
             ((size_t)Q_idx_2 == 5ULL)) {
    t2 = 1ULL;
  } else {
    t2 = (size_t)Q_idx_2;
  }

  out.mX[0] = (int32_T)t0;
  out.mX[1] = (int32_T)t1;
  out.mX[2] = (int32_T)t2;
  out.mX[3] = (int32_T)(Q_idx_3 != 0);
  (void)LC;
  (void)t5;
  return 0;
}
