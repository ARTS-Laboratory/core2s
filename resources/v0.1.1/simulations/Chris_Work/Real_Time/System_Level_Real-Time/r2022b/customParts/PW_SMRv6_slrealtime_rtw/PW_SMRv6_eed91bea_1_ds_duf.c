/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv6/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_sys_struct.h"
#include "PW_SMRv6_eed91bea_1_ds_duf.h"
#include "PW_SMRv6_eed91bea_1_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_externals.h"
#include "PW_SMRv6_eed91bea_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv6_eed91bea_1_ds_duf(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t43, NeDsMethodOutput *t44)
{
  ETTS0 d_efOut;
  ETTS0 efOut;
  ETTS0 f_efOut;
  ETTS0 h_efOut;
  ETTS0 t2;
  ETTS0 t3;
  PmRealVector out;
  real_T X[222];
  real_T b_efOut[1];
  real_T c_efOut[1];
  real_T e_efOut[1];
  real_T g_efOut[1];
  real_T i_efOut[1];
  real_T t29[1];
  real_T intermediate_der2203;
  real_T intrm_sf_mf_342;
  real_T t32_idx_0;
  real_T t36;
  real_T t37;
  real_T t38;
  real_T t42;
  size_t t12[1];
  size_t t18[1];
  size_t t5[1];
  size_t t6[1];
  int32_T b;
  for (b = 0; b < 222; b++) {
    X[b] = t43->mX.mX[b];
  }

  out = t44->mDUF;
  t29[0ULL] = X[21ULL];
  t5[0] = 100ULL;
  t6[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t29[0ULL], &t5
    [0ULL], &t6[0ULL]);
  t3 = efOut;
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t5[0ULL], &t6[0ULL]);
  t32_idx_0 = b_efOut[0];
  intrm_sf_mf_342 = t32_idx_0;
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t5[0ULL], &t6[0ULL]);
  t32_idx_0 = c_efOut[0];
  if (X[22ULL] <= intrm_sf_mf_342) {
    intermediate_der2203 = X[22ULL] / (intrm_sf_mf_342 == 0.0 ? 1.0E-16 :
      intrm_sf_mf_342) - 1.0;
  } else if (X[22ULL] >= t32_idx_0) {
    intermediate_der2203 = (X[22ULL] - 4000.0) / (4000.0 - t32_idx_0 == 0.0 ?
      1.0E-16 : 4000.0 - t32_idx_0) + 2.0;
  } else {
    t32_idx_0 -= intrm_sf_mf_342;
    intermediate_der2203 = (X[22ULL] - intrm_sf_mf_342) / (t32_idx_0 == 0.0 ?
      1.0E-16 : t32_idx_0);
  }

  t29[0ULL] = intermediate_der2203;
  t12[0] = 25ULL;
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t29[0ULL],
    &t12[0ULL], &t6[0ULL]);
  t2 = d_efOut;
  tlu2_2d_linear_linear_value(&e_efOut[0ULL], &t2.mField0[0ULL], &t2.mField2
    [0ULL], &t3.mField0[0ULL], &t3.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField23, &t12[0ULL], &t5[0ULL], &t6[0ULL]);
  t32_idx_0 = e_efOut[0];
  intrm_sf_mf_342 = t32_idx_0;
  t29[0ULL] = intermediate_der2203;
  t18[0] = 50ULL;
  tlu2_linear_linear_prelookup(&f_efOut.mField0[0ULL], &f_efOut.mField1[0ULL],
    &f_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField27, &t29[0ULL],
    &t18[0ULL], &t6[0ULL]);
  t2 = f_efOut;
  tlu2_2d_linear_linear_value(&g_efOut[0ULL], &t2.mField0[0ULL], &t2.mField2
    [0ULL], &t3.mField0[0ULL], &t3.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField28, &t18[0ULL], &t5[0ULL], &t6[0ULL]);
  t32_idx_0 = g_efOut[0];
  t42 = t32_idx_0;
  t29[0ULL] = intermediate_der2203;
  tlu2_linear_linear_prelookup(&h_efOut.mField0[0ULL], &h_efOut.mField1[0ULL],
    &h_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t29[0ULL],
    &t12[0ULL], &t6[0ULL]);
  t2 = h_efOut;
  tlu2_2d_linear_linear_value(&i_efOut[0ULL], &t2.mField0[0ULL], &t2.mField2
    [0ULL], &t3.mField0[0ULL], &t3.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t12[0ULL], &t5[0ULL], &t6[0ULL]);
  t32_idx_0 = i_efOut[0];
  t36 = intermediate_der2203 / 0.1;
  t37 = t36 * t36 * 3.0 - t36 * t36 * t36 * 2.0;
  t36 = (intermediate_der2203 - 0.9) / 0.099999999999999978;
  t38 = t36 * t36 * 3.0 - t36 * t36 * t36 * 2.0;
  if (intermediate_der2203 <= 0.0) {
    t36 = intrm_sf_mf_342;
  } else if (intermediate_der2203 >= 0.1) {
    t36 = t42;
  } else {
    t36 = (1.0 - t37) * intrm_sf_mf_342 + t42 * t37;
  }

  if (intermediate_der2203 <= 0.9) {
    intrm_sf_mf_342 = t36;
  } else if (intermediate_der2203 >= 1.0) {
    intrm_sf_mf_342 = t32_idx_0;
  } else {
    intrm_sf_mf_342 = (1.0 - t38) * t36 + t32_idx_0 * t38;
  }

  t29[0ULL] = -(1000.0 / (X[23ULL] == 0.0 ? 1.0E-16 : X[23ULL]) *
                intrm_sf_mf_342 * 6.367473975406809 / 10.0);
  out.mX[0] = t29[0];
  (void)LC;
  (void)t44;
  return 0;
}
