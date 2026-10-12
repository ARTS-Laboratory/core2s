/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv9/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_sys_struct.h"
#include "PW_SMRv9_4b22eff7_1_ds_update_i.h"
#include "PW_SMRv9_4b22eff7_1_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_externals.h"
#include "PW_SMRv9_4b22eff7_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv9_4b22eff7_1_ds_update_i(const NeDynamicSystem *LC, const
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
  int32_T CI_idx_0;
  int32_T CI_idx_1;
  int32_T CI_idx_10;
  int32_T CI_idx_11;
  int32_T CI_idx_12;
  int32_T CI_idx_13;
  int32_T CI_idx_2;
  int32_T CI_idx_23;
  int32_T CI_idx_3;
  int32_T CI_idx_34;
  int32_T CI_idx_37;
  int32_T CI_idx_38;
  int32_T CI_idx_39;
  int32_T CI_idx_4;
  int32_T CI_idx_40;
  int32_T CI_idx_41;
  int32_T CI_idx_5;
  int32_T CI_idx_6;
  int32_T CI_idx_7;
  int32_T CI_idx_8;
  int32_T CI_idx_9;
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
  for (CI_idx_0 = 0; CI_idx_0 < 250; CI_idx_0++) {
    X[CI_idx_0] = t4->mX.mX[CI_idx_0];
  }

  CI_idx_0 = t4->mCI.mX[0];
  CI_idx_1 = t4->mCI.mX[1];
  CI_idx_2 = t4->mCI.mX[2];
  CI_idx_3 = t4->mCI.mX[3];
  CI_idx_4 = t4->mCI.mX[4];
  CI_idx_5 = t4->mCI.mX[5];
  CI_idx_6 = t4->mCI.mX[6];
  CI_idx_7 = t4->mCI.mX[7];
  CI_idx_8 = t4->mCI.mX[8];
  CI_idx_9 = t4->mCI.mX[9];
  CI_idx_10 = t4->mCI.mX[10];
  CI_idx_11 = t4->mCI.mX[11];
  CI_idx_12 = t4->mCI.mX[12];
  CI_idx_13 = t4->mCI.mX[13];
  CI_idx_23 = t4->mCI.mX[23];
  CI_idx_34 = t4->mCI.mX[34];
  CI_idx_37 = t4->mCI.mX[37];
  CI_idx_38 = t4->mCI.mX[38];
  CI_idx_39 = t4->mCI.mX[39];
  CI_idx_40 = t4->mCI.mX[40];
  CI_idx_41 = t4->mCI.mX[41];
  out = t5->mUPDATE_I;
  Circuit_Breaker_Three_Phase_breakerA_i = X[84ULL] * -0.0012548887771113527;
  Circuit_Breaker_Three_Phase_breakerB_i = X[85ULL] * -0.0012548887771113527;
  Circuit_Breaker_Three_Phase_breakerC_i = X[86ULL] * -0.0012548887771113527;
  if (((CI_idx_38 == 0) && (U_idx_1 < 0.5) && ((size_t)Q_idx_0 == 1ULL)) ||
      ((U_idx_1 < 0.5) && ((size_t)Q_idx_0 == 1ULL) && (Q_idx_3 != 0))) {
    t0 = 2ULL;
  } else if (((CI_idx_37 == 0) && (U_idx_1 >= 0.5) && ((size_t)Q_idx_0 == 2ULL))
             || ((U_idx_1 >= 0.5) && ((size_t)Q_idx_0 == 2ULL) && (Q_idx_3 != 0)))
  {
    t0 = 3ULL;
  } else if (((CI_idx_34 == 0) && (Circuit_Breaker_Three_Phase_breakerA_i == 0.0)
              && ((size_t)Q_idx_0 == 3ULL)) ||
             ((Circuit_Breaker_Three_Phase_breakerA_i == 0.0) && ((size_t)
               Q_idx_0 == 3ULL) && (Q_idx_3 != 0))) {
    t0 = 1ULL;
  } else if (((CI_idx_23 == 0) && (Circuit_Breaker_Three_Phase_breakerA_i < 0.0)
              && ((size_t)Q_idx_0 == 3ULL)) ||
             ((Circuit_Breaker_Three_Phase_breakerA_i < 0.0) && ((size_t)Q_idx_0
    == 3ULL) && (Q_idx_3 != 0))) {
    t0 = 4ULL;
  } else if (((CI_idx_12 == 0) && (Circuit_Breaker_Three_Phase_breakerA_i > 0.0)
              && ((size_t)Q_idx_0 == 3ULL)) ||
             ((Circuit_Breaker_Three_Phase_breakerA_i > 0.0) && ((size_t)Q_idx_0
    == 3ULL) && (Q_idx_3 != 0))) {
    t0 = 5ULL;
  } else if (((CI_idx_1 == 0) && (Circuit_Breaker_Three_Phase_breakerA_i >= 0.0)
              && ((size_t)Q_idx_0 == 4ULL)) ||
             ((Circuit_Breaker_Three_Phase_breakerA_i >= 0.0) && ((size_t)
               Q_idx_0 == 4ULL) && (Q_idx_3 != 0))) {
    t0 = 1ULL;
  } else if (((CI_idx_0 == 0) && (Circuit_Breaker_Three_Phase_breakerA_i <= 0.0)
              && ((size_t)Q_idx_0 == 5ULL)) ||
             ((Circuit_Breaker_Three_Phase_breakerA_i <= 0.0) && ((size_t)
               Q_idx_0 == 5ULL) && (Q_idx_3 != 0))) {
    t0 = 1ULL;
  } else {
    t0 = (size_t)Q_idx_0;
  }

  if (((CI_idx_5 == 0) && (U_idx_1 < 0.5) && ((size_t)Q_idx_1 == 1ULL)) ||
      ((U_idx_1 < 0.5) && ((size_t)Q_idx_1 == 1ULL) && (Q_idx_3 != 0))) {
    t1 = 2ULL;
  } else if (((CI_idx_4 == 0) && (U_idx_1 >= 0.5) && ((size_t)Q_idx_1 == 2ULL)) ||
             ((U_idx_1 >= 0.5) && ((size_t)Q_idx_1 == 2ULL) && (Q_idx_3 != 0)))
  {
    t1 = 3ULL;
  } else if (((CI_idx_3 == 0) && (Circuit_Breaker_Three_Phase_breakerB_i == 0.0)
              && ((size_t)Q_idx_1 == 3ULL)) ||
             ((Circuit_Breaker_Three_Phase_breakerB_i == 0.0) && ((size_t)
               Q_idx_1 == 3ULL) && (Q_idx_3 != 0))) {
    t1 = 1ULL;
  } else if (((CI_idx_2 == 0) && (Circuit_Breaker_Three_Phase_breakerB_i < 0.0) &&
              ((size_t)Q_idx_1 == 3ULL)) ||
             ((Circuit_Breaker_Three_Phase_breakerB_i < 0.0) && ((size_t)Q_idx_1
    == 3ULL) && (Q_idx_3 != 0))) {
    t1 = 4ULL;
  } else if (((CI_idx_41 == 0) && (Circuit_Breaker_Three_Phase_breakerB_i > 0.0)
              && ((size_t)Q_idx_1 == 3ULL)) ||
             ((Circuit_Breaker_Three_Phase_breakerB_i > 0.0) && ((size_t)Q_idx_1
    == 3ULL) && (Q_idx_3 != 0))) {
    t1 = 5ULL;
  } else if (((CI_idx_40 == 0) && (Circuit_Breaker_Three_Phase_breakerB_i >= 0.0)
              && ((size_t)Q_idx_1 == 4ULL)) ||
             ((Circuit_Breaker_Three_Phase_breakerB_i >= 0.0) && ((size_t)
               Q_idx_1 == 4ULL) && (Q_idx_3 != 0))) {
    t1 = 1ULL;
  } else if (((CI_idx_39 == 0) && (Circuit_Breaker_Three_Phase_breakerB_i <= 0.0)
              && ((size_t)Q_idx_1 == 5ULL)) ||
             ((Circuit_Breaker_Three_Phase_breakerB_i <= 0.0) && ((size_t)
               Q_idx_1 == 5ULL) && (Q_idx_3 != 0))) {
    t1 = 1ULL;
  } else {
    t1 = (size_t)Q_idx_1;
  }

  if (((CI_idx_13 == 0) && (U_idx_1 < 0.5) && ((size_t)Q_idx_2 == 1ULL)) ||
      ((U_idx_1 < 0.5) && ((size_t)Q_idx_2 == 1ULL) && (Q_idx_3 != 0))) {
    t2 = 2ULL;
  } else if (((CI_idx_11 == 0) && (U_idx_1 >= 0.5) && ((size_t)Q_idx_2 == 2ULL))
             || ((U_idx_1 >= 0.5) && ((size_t)Q_idx_2 == 2ULL) && (Q_idx_3 != 0)))
  {
    t2 = 3ULL;
  } else if (((CI_idx_10 == 0) && (Circuit_Breaker_Three_Phase_breakerC_i == 0.0)
              && ((size_t)Q_idx_2 == 3ULL)) ||
             ((Circuit_Breaker_Three_Phase_breakerC_i == 0.0) && ((size_t)
               Q_idx_2 == 3ULL) && (Q_idx_3 != 0))) {
    t2 = 1ULL;
  } else if (((CI_idx_9 == 0) && (Circuit_Breaker_Three_Phase_breakerC_i < 0.0) &&
              ((size_t)Q_idx_2 == 3ULL)) ||
             ((Circuit_Breaker_Three_Phase_breakerC_i < 0.0) && ((size_t)Q_idx_2
    == 3ULL) && (Q_idx_3 != 0))) {
    t2 = 4ULL;
  } else if (((CI_idx_8 == 0) && (Circuit_Breaker_Three_Phase_breakerC_i > 0.0) &&
              ((size_t)Q_idx_2 == 3ULL)) ||
             ((Circuit_Breaker_Three_Phase_breakerC_i > 0.0) && ((size_t)Q_idx_2
    == 3ULL) && (Q_idx_3 != 0))) {
    t2 = 5ULL;
  } else if (((CI_idx_7 == 0) && (Circuit_Breaker_Three_Phase_breakerC_i >= 0.0)
              && ((size_t)Q_idx_2 == 4ULL)) ||
             ((Circuit_Breaker_Three_Phase_breakerC_i >= 0.0) && ((size_t)
               Q_idx_2 == 4ULL) && (Q_idx_3 != 0))) {
    t2 = 1ULL;
  } else if (((CI_idx_6 == 0) && (Circuit_Breaker_Three_Phase_breakerC_i <= 0.0)
              && ((size_t)Q_idx_2 == 5ULL)) ||
             ((Circuit_Breaker_Three_Phase_breakerC_i <= 0.0) && ((size_t)
               Q_idx_2 == 5ULL) && (Q_idx_3 != 0))) {
    t2 = 1ULL;
  } else {
    t2 = (size_t)Q_idx_2;
  }

  out.mX[0] = (int32_T)t0;
  out.mX[1] = (int32_T)t1;
  out.mX[2] = (int32_T)t2;
  out.mX[3] = 0;
  (void)LC;
  (void)t5;
  return 0;
}
