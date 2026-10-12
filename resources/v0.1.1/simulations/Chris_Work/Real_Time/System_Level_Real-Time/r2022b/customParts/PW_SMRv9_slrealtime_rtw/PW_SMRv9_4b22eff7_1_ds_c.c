/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv9/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_sys_struct.h"
#include "PW_SMRv9_4b22eff7_1_ds_c.h"
#include "PW_SMRv9_4b22eff7_1_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_externals.h"
#include "PW_SMRv9_4b22eff7_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv9_4b22eff7_1_ds_c(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t6, NeDsMethodOutput *t7)
{
  PmRealVector out;
  real_T t0[11];
  real_T t1[11];
  real_T t2[11];
  size_t t3;
  (void)t6;
  (void)LC;
  out = t7->mC;
  t1[0ULL] = 0.0;
  t1[1ULL] = 0.0;
  t1[2ULL] = 0.0;
  t1[3ULL] = 0.0;
  t1[4ULL] = 0.0;
  t1[5ULL] = 0.0;
  t1[6ULL] = 0.0;
  t1[7ULL] = 0.0;
  t1[8ULL] = 0.0;
  t1[9ULL] = 0.0;
  t1[10ULL] = 376.99111843077515;
  t2[0] = 1.0;
  t2[1] = 1.0;
  t2[2] = 1.0;
  t2[3] = 1.0;
  t2[4] = 1.0;
  t2[5] = 1.0;
  t2[6] = 1.0;
  t2[7] = 1.0;
  t2[8] = 1.0;
  t2[9] = 1.0;
  t2[10] = 1.0;
  for (t3 = 0ULL; t3 < 11ULL; t3++) {
    t0[t3] = -t1[t3] / (t2[t3] == 0.0 ? 1.0E-16 : t2[t3]);
  }

  out.mX[0] = t0[0];
  out.mX[1] = t0[1];
  out.mX[2] = t0[2];
  out.mX[3] = t0[3];
  out.mX[4] = t0[4];
  out.mX[5] = t0[5];
  out.mX[6] = t0[6];
  out.mX[7] = t0[7];
  out.mX[8] = t0[8];
  out.mX[9] = t0[9];
  out.mX[10] = t0[10];
  (void)LC;
  (void)t7;
  return 0;
}
