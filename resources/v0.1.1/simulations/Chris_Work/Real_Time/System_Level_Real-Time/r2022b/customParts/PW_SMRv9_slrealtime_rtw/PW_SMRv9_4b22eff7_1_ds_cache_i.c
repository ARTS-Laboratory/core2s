/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv9/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_sys_struct.h"
#include "PW_SMRv9_4b22eff7_1_ds_cache_i.h"
#include "PW_SMRv9_4b22eff7_1_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_externals.h"
#include "PW_SMRv9_4b22eff7_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv9_4b22eff7_1_ds_cache_i(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmIntVector out;
  real_T X[250];
  real_T Circuit_Breaker_Three_Phase_breakerA_i;
  real_T Circuit_Breaker_Three_Phase_breakerB_i;
  real_T Circuit_Breaker_Three_Phase_breakerC_i;
  real_T U_idx_1;
  int32_T M[163];
  int32_T Q_idx_0;
  int32_T Q_idx_1;
  int32_T Q_idx_2;
  int32_T b;
  (void)LC;
  Q_idx_0 = t1->mQ.mX[0];
  Q_idx_1 = t1->mQ.mX[1];
  Q_idx_2 = t1->mQ.mX[2];
  for (b = 0; b < 163; b++) {
    M[b] = t1->mM.mX[b];
  }

  U_idx_1 = t1->mU.mX[1];
  for (b = 0; b < 250; b++) {
    X[b] = t1->mX.mX[b];
  }

  out = t2->mCACHE_I;
  Circuit_Breaker_Three_Phase_breakerA_i = X[84ULL] * -0.0012548887771113527;
  Circuit_Breaker_Three_Phase_breakerB_i = X[85ULL] * -0.0012548887771113527;
  Circuit_Breaker_Three_Phase_breakerC_i = X[86ULL] * -0.0012548887771113527;
  out.mX[0] = (int32_T)(M[0ULL] != 0);
  out.mX[1] = (int32_T)(M[1ULL] != 0);
  out.mX[2] = (int32_T)(M[2ULL] != 0);
  out.mX[3] = (int32_T)(M[3ULL] != 0);
  out.mX[4] = (int32_T)(M[4ULL] != 0);
  out.mX[5] = (int32_T)(M[5ULL] != 0);
  out.mX[6] = (int32_T)(M[6ULL] != 0);
  out.mX[7] = (int32_T)(M[7ULL] != 0);
  out.mX[8] = (int32_T)(M[8ULL] != 0);
  out.mX[9] = (int32_T)(M[9ULL] != 0);
  out.mX[10] = (int32_T)(M[10ULL] != 0);
  out.mX[11] = (int32_T)(M[11ULL] != 0);
  out.mX[12] = (int32_T)(M[12ULL] != 0);
  out.mX[13] = (int32_T)(M[13ULL] != 0);
  out.mX[14] = (int32_T)((Circuit_Breaker_Three_Phase_breakerA_i <= 0.0) &&
    ((size_t)Q_idx_0 == 5ULL));
  out.mX[15] = (int32_T)((Circuit_Breaker_Three_Phase_breakerA_i >= 0.0) &&
    ((size_t)Q_idx_0 == 4ULL));
  out.mX[16] = (int32_T)((Circuit_Breaker_Three_Phase_breakerA_i > 0.0) &&
    ((size_t)Q_idx_0 == 3ULL));
  out.mX[17] = (int32_T)((Circuit_Breaker_Three_Phase_breakerA_i < 0.0) &&
    ((size_t)Q_idx_0 == 3ULL));
  out.mX[18] = (int32_T)((Circuit_Breaker_Three_Phase_breakerA_i == 0.0) &&
    ((size_t)Q_idx_0 == 3ULL));
  out.mX[19] = (int32_T)((U_idx_1 >= 0.5) && ((size_t)Q_idx_0 == 2ULL));
  out.mX[20] = (int32_T)((U_idx_1 < 0.5) && ((size_t)Q_idx_0 == 1ULL));
  out.mX[21] = (int32_T)((Circuit_Breaker_Three_Phase_breakerB_i <= 0.0) &&
    ((size_t)Q_idx_1 == 5ULL));
  out.mX[22] = (int32_T)((Circuit_Breaker_Three_Phase_breakerB_i >= 0.0) &&
    ((size_t)Q_idx_1 == 4ULL));
  out.mX[23] = (int32_T)(M[14ULL] != 0);
  out.mX[24] = (int32_T)((Circuit_Breaker_Three_Phase_breakerB_i > 0.0) &&
    ((size_t)Q_idx_1 == 3ULL));
  out.mX[25] = (int32_T)((Circuit_Breaker_Three_Phase_breakerB_i < 0.0) &&
    ((size_t)Q_idx_1 == 3ULL));
  out.mX[26] = (int32_T)((Circuit_Breaker_Three_Phase_breakerB_i == 0.0) &&
    ((size_t)Q_idx_1 == 3ULL));
  out.mX[27] = (int32_T)((U_idx_1 >= 0.5) && ((size_t)Q_idx_1 == 2ULL));
  out.mX[28] = (int32_T)((U_idx_1 < 0.5) && ((size_t)Q_idx_1 == 1ULL));
  out.mX[29] = (int32_T)((Circuit_Breaker_Three_Phase_breakerC_i <= 0.0) &&
    ((size_t)Q_idx_2 == 5ULL));
  out.mX[30] = (int32_T)((Circuit_Breaker_Three_Phase_breakerC_i >= 0.0) &&
    ((size_t)Q_idx_2 == 4ULL));
  out.mX[31] = (int32_T)((Circuit_Breaker_Three_Phase_breakerC_i > 0.0) &&
    ((size_t)Q_idx_2 == 3ULL));
  out.mX[32] = (int32_T)((Circuit_Breaker_Three_Phase_breakerC_i < 0.0) &&
    ((size_t)Q_idx_2 == 3ULL));
  out.mX[33] = (int32_T)((Circuit_Breaker_Three_Phase_breakerC_i == 0.0) &&
    ((size_t)Q_idx_2 == 3ULL));
  out.mX[34] = (int32_T)(M[15ULL] != 0);
  out.mX[35] = (int32_T)((U_idx_1 >= 0.5) && ((size_t)Q_idx_2 == 2ULL));
  out.mX[36] = (int32_T)((U_idx_1 < 0.5) && ((size_t)Q_idx_2 == 1ULL));
  out.mX[37] = (int32_T)(M[16ULL] != 0);
  out.mX[38] = (int32_T)(M[17ULL] != 0);
  out.mX[39] = (int32_T)(M[18ULL] != 0);
  out.mX[40] = (int32_T)(M[19ULL] != 0);
  out.mX[41] = (int32_T)(M[20ULL] != 0);
  (void)LC;
  (void)t2;
  return 0;
}
