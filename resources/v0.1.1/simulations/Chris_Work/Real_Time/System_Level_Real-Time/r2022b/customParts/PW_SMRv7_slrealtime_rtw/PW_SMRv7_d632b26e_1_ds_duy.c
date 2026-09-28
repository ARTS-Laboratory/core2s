/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv7/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv7_d632b26e_1_ds_sys_struct.h"
#include "PW_SMRv7_d632b26e_1_ds_duy.h"
#include "PW_SMRv7_d632b26e_1_ds.h"
#include "PW_SMRv7_d632b26e_1_ds_externals.h"
#include "PW_SMRv7_d632b26e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv7_d632b26e_1_ds_duy(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t90, NeDsMethodOutput *t91)
{
  ETTS0 d_efOut;
  ETTS0 efOut;
  ETTS0 g_efOut;
  ETTS0 j_efOut;
  ETTS0 l_efOut;
  ETTS0 t0;
  ETTS0 t1;
  ETTS0 t2;
  ETTS0 t3;
  ETTS0 t4;
  PmRealVector out;
  real_T X[183];
  real_T t49[7];
  real_T t61[6];
  real_T b_efOut[1];
  real_T c_efOut[1];
  real_T e_efOut[1];
  real_T f_efOut[1];
  real_T h_efOut[1];
  real_T i_efOut[1];
  real_T k_efOut[1];
  real_T m_efOut[1];
  real_T n_efOut[1];
  real_T o_efOut[1];
  real_T p_efOut[1];
  real_T t34[1];
  real_T U_idx_3;
  real_T intermediate_der1587;
  real_T intermediate_der2303;
  real_T intermediate_der5282;
  real_T intermediate_der6085;
  real_T intermediate_der6089;
  real_T intermediate_der6103;
  real_T t55_idx_0;
  real_T t63;
  real_T t64;
  real_T t67;
  real_T t69;
  real_T t88;
  real_T t89;
  size_t t20[1];
  size_t t6[1];
  size_t t7[1];
  size_t t62;
  int32_T M[128];
  int32_T b;
  for (b = 0; b < 128; b++) {
    M[b] = t90->mM.mX[b];
  }

  U_idx_3 = t90->mU.mX[3];
  for (b = 0; b < 183; b++) {
    X[b] = t90->mX.mX[b];
  }

  out = t91->mDUY;
  t34[0ULL] = X[0ULL];
  t6[0] = 100ULL;
  t7[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t34[0ULL], &t6
    [0ULL], &t7[0ULL]);
  t4 = efOut;
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t4.mField0[0ULL], &t4.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t6[0ULL], &t7[0ULL]);
  t55_idx_0 = b_efOut[0];
  intermediate_der5282 = t55_idx_0;
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t4.mField0[0ULL], &t4.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t6[0ULL], &t7[0ULL]);
  t55_idx_0 = c_efOut[0];
  intermediate_der6085 = t55_idx_0;
  t34[0ULL] = X[49ULL];
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t34[0ULL], &t6
    [0ULL], &t7[0ULL]);
  t3 = d_efOut;
  tlu2_1d_linear_linear_value(&e_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t6[0ULL], &t7[0ULL]);
  t55_idx_0 = e_efOut[0];
  intermediate_der6103 = t55_idx_0;
  tlu2_1d_linear_linear_value(&f_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t6[0ULL], &t7[0ULL]);
  t55_idx_0 = f_efOut[0];
  intermediate_der1587 = t55_idx_0;
  intermediate_der6089 = X[0ULL] - X[49ULL];
  if (X[97ULL] <= intermediate_der5282) {
    intermediate_der2303 = X[97ULL] / (intermediate_der5282 == 0.0 ? 1.0E-16 :
      intermediate_der5282) - 1.0;
  } else if (X[97ULL] >= intermediate_der6085) {
    intermediate_der2303 = (X[97ULL] - 4000.0) / (4000.0 - intermediate_der6085 ==
      0.0 ? 1.0E-16 : 4000.0 - intermediate_der6085) + 2.0;
  } else {
    t67 = intermediate_der6085 - intermediate_der5282;
    intermediate_der2303 = (X[97ULL] - intermediate_der5282) / (t67 == 0.0 ?
      1.0E-16 : t67);
  }

  t34[0ULL] = intermediate_der2303;
  t20[0] = 50ULL;
  tlu2_linear_linear_prelookup(&g_efOut.mField0[0ULL], &g_efOut.mField1[0ULL],
    &g_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t34[0ULL],
    &t20[0ULL], &t7[0ULL]);
  t2 = g_efOut;
  tlu2_2d_linear_linear_value(&h_efOut[0ULL], &t2.mField0[0ULL], &t2.mField2
    [0ULL], &t4.mField0[0ULL], &t4.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t20[0ULL], &t6[0ULL], &t7[0ULL]);
  t55_idx_0 = h_efOut[0];
  t69 = pmf_sqrt(t55_idx_0 * 461.5);
  intermediate_der5282 = X[0ULL] * 0.85 / (t69 == 0.0 ? 1.0E-16 : t69) *
    0.667262351240862;
  tlu2_2d_linear_linear_value(&i_efOut[0ULL], &t2.mField0[0ULL], &t2.mField2
    [0ULL], &t4.mField0[0ULL], &t4.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t20[0ULL], &t6[0ULL], &t7[0ULL]);
  t55_idx_0 = i_efOut[0];
  if (U_idx_3 <= 0.0) {
    t63 = 0.0;
  } else {
    t63 = U_idx_3 >= 1.0 ? 1.0 : U_idx_3;
  }

  t64 = t63 * 0.0002;
  t63 = intermediate_der5282 * t64;
  t89 = X[49ULL] / (X[0ULL] == 0.0 ? 1.0E-16 : X[0ULL]);
  if (t89 <= 0.0) {
    t88 = 0.0;
  } else {
    t88 = t89 >= 1.0 ? 1.0 : t89;
  }

  t89 = (pmf_pow(t88, 1.5384615384615383) - pmf_pow(t88, 1.7692307692307689)) *
    8.6666666666666661;
  if (t89 <= 0.0) {
    t67 = 0.0;
  } else {
    t67 = t89 >= 1.0E+6 ? 1.0E+6 : t89;
  }

  t64 = t64 * X[0ULL] * 0.85 / (t69 == 0.0 ? 1.0E-16 : t69) * pmf_sqrt(t67);
  if (t88 < 0.545727733814065) {
    t89 = t63 * 100000.0;
  } else {
    t89 = t64 * 100000.0;
  }

  t63 = intermediate_der6089 > 0.01 ? t89 : 0.0;
  intermediate_der2303 = fabs(t63);
  t64 = intermediate_der2303 / 1.5;
  t89 = (0.8 - (t64 - 0.8) * (t64 - 0.8) * 0.2) - (t88 - 0.25) * (t88 - 0.25) *
    0.35;
  t64 = t55_idx_0 * X[0ULL] * 100.0 + X[97ULL];
  if (intermediate_der6103 <= intermediate_der6103) {
    intermediate_der6085 = intermediate_der6103 / (intermediate_der6103 == 0.0 ?
      1.0E-16 : intermediate_der6103) - 1.0;
  } else if (intermediate_der6103 >= intermediate_der1587) {
    intermediate_der6085 = (intermediate_der6103 - 4000.0) / (4000.0 -
      intermediate_der1587 == 0.0 ? 1.0E-16 : 4000.0 - intermediate_der1587) +
      2.0;
  } else {
    intermediate_der2303 = intermediate_der1587 - intermediate_der6103;
    intermediate_der6085 = (intermediate_der6103 - intermediate_der6103) /
      (intermediate_der2303 == 0.0 ? 1.0E-16 : intermediate_der2303);
  }

  t34[0ULL] = intermediate_der6085;
  tlu2_linear_linear_prelookup(&j_efOut.mField0[0ULL], &j_efOut.mField1[0ULL],
    &j_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t34[0ULL],
    &t20[0ULL], &t7[0ULL]);
  t1 = j_efOut;
  tlu2_2d_linear_linear_value(&k_efOut[0ULL], &t1.mField0[0ULL], &t1.mField2
    [0ULL], &t3.mField0[0ULL], &t3.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t20[0ULL], &t6[0ULL], &t7[0ULL]);
  t55_idx_0 = k_efOut[0];
  t55_idx_0 = X[49ULL] * t55_idx_0 * 100.0 + intermediate_der6103;
  if (intermediate_der1587 <= intermediate_der6103) {
    intermediate_der6085 = intermediate_der1587 / (intermediate_der6103 == 0.0 ?
      1.0E-16 : intermediate_der6103) - 1.0;
  } else if (intermediate_der1587 >= intermediate_der1587) {
    intermediate_der6085 = (intermediate_der1587 - 4000.0) / (4000.0 -
      intermediate_der1587 == 0.0 ? 1.0E-16 : 4000.0 - intermediate_der1587) +
      2.0;
  } else {
    intermediate_der2303 = intermediate_der1587 - intermediate_der6103;
    intermediate_der6085 = (intermediate_der1587 - intermediate_der6103) /
      (intermediate_der2303 == 0.0 ? 1.0E-16 : intermediate_der2303);
  }

  t34[0ULL] = intermediate_der6085;
  tlu2_linear_linear_prelookup(&l_efOut.mField0[0ULL], &l_efOut.mField1[0ULL],
    &l_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t34[0ULL],
    &t20[0ULL], &t7[0ULL]);
  t0 = l_efOut;
  tlu2_2d_linear_linear_value(&m_efOut[0ULL], &t0.mField0[0ULL], &t0.mField2
    [0ULL], &t3.mField0[0ULL], &t3.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t20[0ULL], &t6[0ULL], &t7[0ULL]);
  t34[0] = m_efOut[0];
  intermediate_der6085 = t34[0ULL];
  intermediate_der6103 = X[49ULL] * intermediate_der6085 * 100.0 +
    intermediate_der1587;
  tlu2_2d_linear_linear_value(&n_efOut[0ULL], &t2.mField0[0ULL], &t2.mField2
    [0ULL], &t4.mField0[0ULL], &t4.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t20[0ULL], &t6[0ULL], &t7[0ULL]);
  t34[0] = n_efOut[0];
  intermediate_der6085 = t34[0ULL];
  tlu2_2d_linear_linear_value(&o_efOut[0ULL], &t1.mField0[0ULL], &t1.mField2
    [0ULL], &t3.mField0[0ULL], &t3.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t20[0ULL], &t6[0ULL], &t7[0ULL]);
  t34[0] = o_efOut[0];
  intermediate_der1587 = t34[0ULL];
  tlu2_2d_linear_linear_value(&p_efOut[0ULL], &t0.mField0[0ULL], &t0.mField2
    [0ULL], &t3.mField0[0ULL], &t3.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t20[0ULL], &t6[0ULL], &t7[0ULL]);
  t34[0] = p_efOut[0];
  intermediate_der2303 = t34[0ULL];
  intermediate_der2303 -= intermediate_der1587;
  intermediate_der6085 = (intermediate_der6085 - intermediate_der1587) /
    (intermediate_der2303 == 0.0 ? 1.0E-16 : intermediate_der2303);
  if (intermediate_der6085 <= 0.0) {
    intermediate_der1587 = 0.0;
  } else {
    intermediate_der1587 = intermediate_der6085 >= 1.0 ? 1.0 :
      intermediate_der6085;
  }

  intermediate_der6103 = t64 - ((intermediate_der6103 - t55_idx_0) *
    intermediate_der1587 + t55_idx_0);
  intermediate_der6085 = ((real_T)(M[55ULL] != 0) * 2.0 - 1.0) * t63 / 1.5;
  if (U_idx_3 <= 0.0) {
    t64 = 0.0;
  } else {
    t64 = (real_T)!(U_idx_3 >= 1.0);
  }

  intermediate_der2303 = t64 * 0.0002;
  t63 = intermediate_der5282 * intermediate_der2303;
  intermediate_der5282 = X[0ULL] * intermediate_der2303 * 0.85 / (t69 == 0.0 ?
    1.0E-16 : t69) * pmf_sqrt(t67);
  if (t88 < 0.545727733814065) {
    t67 = t63 * 100000.0;
  } else {
    t67 = intermediate_der5282 * 100000.0;
  }

  intermediate_der5282 = ((real_T)(M[55ULL] != 0) * 2.0 - 1.0) *
    (intermediate_der6089 > 0.01 ? t67 : 0.0) / 1.5;
  if (t89 <= 0.0) {
    intermediate_der6085 = 0.0;
  } else {
    intermediate_der6085 = t89 >= 1.0 ? 0.0 : -((intermediate_der6085 - 0.8) *
      intermediate_der5282 * 0.4);
  }

  intermediate_der6103 = intermediate_der6089 > 0.01 ? intermediate_der6103 *
    intermediate_der6085 : 0.0;
  t61[0ULL] = intermediate_der6085;
  t61[1ULL] = intermediate_der6103;
  t61[2ULL] = intermediate_der5282;
  t61[3ULL] = intermediate_der2303;
  t61[4ULL] = t64;
  t61[5ULL] = ((real_T)(M[61ULL] != 0) * 2.0 - 1.0) * X[56ULL] *
    intermediate_der6103 * 0.001;
  t49[0ULL] = 1.0;
  for (t62 = 0ULL; t62 < 6ULL; t62++) {
    t49[t62 + 1ULL] = t61[t62];
  }

  out.mX[0] = t49[0];
  out.mX[1] = t49[1];
  out.mX[2] = t49[2];
  out.mX[3] = t49[3];
  out.mX[4] = t49[4];
  out.mX[5] = t49[5];
  out.mX[6] = t49[6];
  (void)LC;
  (void)t91;
  return 0;
}
