/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv9/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_sys_struct.h"
#include "PW_SMRv9_4b22eff7_1_ds_dtf.h"
#include "PW_SMRv9_4b22eff7_1_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_externals.h"
#include "PW_SMRv9_4b22eff7_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv9_4b22eff7_1_ds_dtf(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t52, NeDsMethodOutput *t53)
{
  PmRealVector out;
  real_T X[250];
  real_T t0[16];
  real_T t4[11];
  real_T t5[11];
  real_T T_idx_0;
  real_T t15;
  real_T t16;
  real_T t19;
  real_T t28;
  real_T t35;
  real_T t36;
  real_T t37;
  real_T t38;
  real_T t39;
  real_T t40;
  real_T t48;
  size_t t6;
  int32_T b;
  (void)LC;
  T_idx_0 = t52->mT.mX[0];
  for (b = 0; b < 250; b++) {
    X[b] = t52->mX.mX[b];
  }

  out = t53->mDTF;
  t48 = X[48ULL] + T_idx_0 * 376.99111843077515;
  t37 = t48;
  t39 = t48 - 2.0943951023931953;
  t19 = t48 + 2.0943951023931953;
  t35 = -sin(t48) * 376.99111843077515 * 0.66666666666666663;
  t36 = -sin(t48 - 2.0943951023931953) * 376.99111843077515 *
    0.66666666666666663;
  t38 = -sin(t48 + 2.0943951023931953) * 376.99111843077515 *
    0.66666666666666663;
  t40 = -(cos(t48) * 376.99111843077515) * 0.66666666666666663;
  T_idx_0 = -(cos(t48 - 2.0943951023931953) * 376.99111843077515) *
    0.66666666666666663;
  t28 = -(cos(t48 + 2.0943951023931953) * 376.99111843077515) *
    0.66666666666666663;
  t48 = ((X[126ULL] * t35 + X[127ULL] * t36) + X[128ULL] * t38) /
    19595.917942265427;
  t15 = -((t35 * 0.0 + t36 * 0.0) + t38 * 0.0) / 19595.917942265427;
  t16 = ((X[126ULL] * t40 + X[127ULL] * T_idx_0) + X[128ULL] * t28) /
    19595.917942265427;
  T_idx_0 = -((t40 * 0.0 + T_idx_0 * 0.0) + t28 * 0.0) / 19595.917942265427;
  t35 = -sin(t37) * 376.99111843077515;
  t36 = -(cos(t37) * 376.99111843077515);
  t37 = -sin(t39) * 376.99111843077515;
  t38 = -(cos(t39) * 376.99111843077515);
  t39 = -sin(t19) * 376.99111843077515;
  t40 = -(cos(t19) * 376.99111843077515);
  t4[0ULL] = 0.0;
  t4[1ULL] = 0.0;
  t4[2ULL] = 0.0;
  t4[3ULL] = 0.0;
  t4[4ULL] = t48;
  t4[5ULL] = t16;
  t4[6ULL] = 0.0;
  t4[7ULL] = 0.0;
  t4[8ULL] = 0.0;
  t4[9ULL] = 0.0;
  t4[10ULL] = 0.0;
  t5[0] = 1.0;
  t5[1] = 1.0;
  t5[2] = 1.0;
  t5[3] = 1.0;
  t5[4] = 1.0;
  t5[5] = 1.0;
  t5[6] = 1.0;
  t5[7] = 1.0;
  t5[8] = 1.0;
  t5[9] = 1.0;
  t5[10] = 1.0;
  t0[0ULL] = -((t48 - (-t15)) / 0.003);
  t0[1ULL] = -((t16 - (-T_idx_0)) / 0.003);
  for (t6 = 0ULL; t6 < 11ULL; t6++) {
    t0[t6 + 2ULL] = -t4[t6] / (t5[t6] == 0.0 ? 1.0E-16 : t5[t6]);
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
  out.mX[11] = t0[11];
  out.mX[12] = t0[12];
  out.mX[13] = -(t35 * X[242ULL] * -510.31036307982879 + t36 * X[244ULL] *
                 -510.31036307982879) / 510.31036307982879;
  out.mX[14] = -(t37 * X[242ULL] * -510.31036307982879 + t38 * X[244ULL] *
                 -510.31036307982879) / 441.94173824157548;
  out.mX[15] = -(t39 * X[242ULL] * -510.31036307982879 + t40 * X[244ULL] *
                 -510.31036307982879) / 441.94173824160293;
  (void)LC;
  (void)t53;
  return 0;
}
