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
  NeDynamicSystemInput *t80, NeDsMethodOutput *t81)
{
  ETTS0 d_efOut;
  ETTS0 efOut;
  ETTS0 g_efOut;
  ETTS0 i_efOut;
  ETTS0 k_efOut;
  ETTS0 t0;
  ETTS0 t1;
  ETTS0 t2;
  ETTS0 t3;
  ETTS0 t4;
  PmRealVector out;
  real_T X[183];
  real_T t46[5];
  real_T t57[4];
  real_T b_efOut[1];
  real_T c_efOut[1];
  real_T e_efOut[1];
  real_T f_efOut[1];
  real_T h_efOut[1];
  real_T j_efOut[1];
  real_T l_efOut[1];
  real_T m_efOut[1];
  real_T n_efOut[1];
  real_T o_efOut[1];
  real_T t56[1];
  real_T Simscape_Component_pressure_difference_ratio_raw;
  real_T U_idx_3;
  real_T intermediate_der1587;
  real_T intermediate_der6053;
  real_T intermediate_der6056;
  real_T intermediate_der6066;
  real_T t51_idx_0;
  real_T t61;
  real_T t63;
  real_T t76;
  real_T t79;
  size_t t20[1];
  size_t t6[1];
  size_t t7[1];
  size_t t58;
  int32_T M[129];
  int32_T b;
  for (b = 0; b < 129; b++) {
    M[b] = t80->mM.mX[b];
  }

  U_idx_3 = t80->mU.mX[3];
  for (b = 0; b < 183; b++) {
    X[b] = t80->mX.mX[b];
  }

  out = t81->mDUY;
  t56[0ULL] = X[0ULL];
  t6[0] = 100ULL;
  t7[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t56[0ULL], &t6
    [0ULL], &t7[0ULL]);
  t4 = efOut;
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t4.mField0[0ULL], &t4.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t6[0ULL], &t7[0ULL]);
  t51_idx_0 = b_efOut[0];
  intermediate_der6053 = t51_idx_0;
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t4.mField0[0ULL], &t4.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t6[0ULL], &t7[0ULL]);
  t51_idx_0 = c_efOut[0];
  Simscape_Component_pressure_difference_ratio_raw = t51_idx_0;
  t56[0ULL] = X[49ULL];
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t56[0ULL], &t6
    [0ULL], &t7[0ULL]);
  t2 = d_efOut;
  tlu2_1d_linear_linear_value(&e_efOut[0ULL], &t2.mField0[0ULL], &t2.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t6[0ULL], &t7[0ULL]);
  t51_idx_0 = e_efOut[0];
  intermediate_der6066 = t51_idx_0;
  tlu2_1d_linear_linear_value(&f_efOut[0ULL], &t2.mField0[0ULL], &t2.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t6[0ULL], &t7[0ULL]);
  t51_idx_0 = f_efOut[0];
  intermediate_der1587 = t51_idx_0;
  intermediate_der6056 = X[0ULL] - X[49ULL];
  if (X[97ULL] <= intermediate_der6053) {
    t63 = X[97ULL] / (intermediate_der6053 == 0.0 ? 1.0E-16 :
                      intermediate_der6053) - 1.0;
  } else if (X[97ULL] >= Simscape_Component_pressure_difference_ratio_raw) {
    t63 = (X[97ULL] - 4000.0) / (4000.0 -
      Simscape_Component_pressure_difference_ratio_raw == 0.0 ? 1.0E-16 : 4000.0
      - Simscape_Component_pressure_difference_ratio_raw) + 2.0;
  } else {
    t63 = Simscape_Component_pressure_difference_ratio_raw -
      intermediate_der6053;
    t63 = (X[97ULL] - intermediate_der6053) / (t63 == 0.0 ? 1.0E-16 : t63);
  }

  t56[0ULL] = t63;
  t20[0] = 50ULL;
  tlu2_linear_linear_prelookup(&g_efOut.mField0[0ULL], &g_efOut.mField1[0ULL],
    &g_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t56[0ULL],
    &t20[0ULL], &t7[0ULL]);
  t3 = g_efOut;
  tlu2_2d_linear_linear_value(&h_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], &t4.mField0[0ULL], &t4.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t20[0ULL], &t6[0ULL], &t7[0ULL]);
  t51_idx_0 = h_efOut[0];
  Simscape_Component_pressure_difference_ratio_raw = intermediate_der6056 / 30.0;
  if (Simscape_Component_pressure_difference_ratio_raw <= 0.0) {
    t63 = 0.0;
  } else {
    t63 = Simscape_Component_pressure_difference_ratio_raw >= 1.0E+6 ? 1.0E+6 :
      Simscape_Component_pressure_difference_ratio_raw;
  }

  Simscape_Component_pressure_difference_ratio_raw = pmf_sqrt(t63) * 0.5;
  if (U_idx_3 <= 0.0) {
    t79 = 0.0;
  } else {
    t79 = U_idx_3 >= 1.0 ? 1.0 : U_idx_3;
  }

  t76 = Simscape_Component_pressure_difference_ratio_raw * t79;
  t63 = fabs(t76);
  t79 = t63 / 0.5;
  t61 = 0.8 - (t79 - 0.8) * (t79 - 0.8) * 0.2;
  t79 = t51_idx_0 * X[0ULL] * 100.0 + X[97ULL];
  if (intermediate_der6066 <= intermediate_der6066) {
    intermediate_der6053 = intermediate_der6066 / (intermediate_der6066 == 0.0 ?
      1.0E-16 : intermediate_der6066) - 1.0;
  } else if (intermediate_der6066 >= intermediate_der1587) {
    intermediate_der6053 = (intermediate_der6066 - 4000.0) / (4000.0 -
      intermediate_der1587 == 0.0 ? 1.0E-16 : 4000.0 - intermediate_der1587) +
      2.0;
  } else {
    t63 = intermediate_der1587 - intermediate_der6066;
    intermediate_der6053 = (intermediate_der6066 - intermediate_der6066) / (t63 ==
      0.0 ? 1.0E-16 : t63);
  }

  t56[0ULL] = intermediate_der6053;
  tlu2_linear_linear_prelookup(&i_efOut.mField0[0ULL], &i_efOut.mField1[0ULL],
    &i_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t56[0ULL],
    &t20[0ULL], &t7[0ULL]);
  t1 = i_efOut;
  tlu2_2d_linear_linear_value(&j_efOut[0ULL], &t1.mField0[0ULL], &t1.mField2
    [0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t20[0ULL], &t6[0ULL], &t7[0ULL]);
  t51_idx_0 = j_efOut[0];
  t51_idx_0 = X[49ULL] * t51_idx_0 * 100.0 + intermediate_der6066;
  if (intermediate_der1587 <= intermediate_der6066) {
    intermediate_der6053 = intermediate_der1587 / (intermediate_der6066 == 0.0 ?
      1.0E-16 : intermediate_der6066) - 1.0;
  } else if (intermediate_der1587 >= intermediate_der1587) {
    intermediate_der6053 = (intermediate_der1587 - 4000.0) / (4000.0 -
      intermediate_der1587 == 0.0 ? 1.0E-16 : 4000.0 - intermediate_der1587) +
      2.0;
  } else {
    t63 = intermediate_der1587 - intermediate_der6066;
    intermediate_der6053 = (intermediate_der1587 - intermediate_der6066) / (t63 ==
      0.0 ? 1.0E-16 : t63);
  }

  t56[0ULL] = intermediate_der6053;
  tlu2_linear_linear_prelookup(&k_efOut.mField0[0ULL], &k_efOut.mField1[0ULL],
    &k_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t56[0ULL],
    &t20[0ULL], &t7[0ULL]);
  t0 = k_efOut;
  tlu2_2d_linear_linear_value(&l_efOut[0ULL], &t0.mField0[0ULL], &t0.mField2
    [0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t20[0ULL], &t6[0ULL], &t7[0ULL]);
  t56[0] = l_efOut[0];
  intermediate_der6053 = t56[0ULL];
  intermediate_der6066 = X[49ULL] * intermediate_der6053 * 100.0 +
    intermediate_der1587;
  tlu2_2d_linear_linear_value(&m_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], &t4.mField0[0ULL], &t4.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t20[0ULL], &t6[0ULL], &t7[0ULL]);
  t56[0] = m_efOut[0];
  intermediate_der6053 = t56[0ULL];
  tlu2_2d_linear_linear_value(&n_efOut[0ULL], &t1.mField0[0ULL], &t1.mField2
    [0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t20[0ULL], &t6[0ULL], &t7[0ULL]);
  t56[0] = n_efOut[0];
  intermediate_der1587 = t56[0ULL];
  tlu2_2d_linear_linear_value(&o_efOut[0ULL], &t0.mField0[0ULL], &t0.mField2
    [0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t20[0ULL], &t6[0ULL], &t7[0ULL]);
  t56[0] = o_efOut[0];
  t63 = t56[0ULL];
  t63 -= intermediate_der1587;
  intermediate_der6053 = (intermediate_der6053 - intermediate_der1587) / (t63 ==
    0.0 ? 1.0E-16 : t63);
  if (intermediate_der6053 <= 0.0) {
    intermediate_der1587 = 0.0;
  } else {
    intermediate_der1587 = intermediate_der6053 >= 1.0 ? 1.0 :
      intermediate_der6053;
  }

  intermediate_der6066 = t79 - ((intermediate_der6066 - t51_idx_0) *
    intermediate_der1587 + t51_idx_0);
  intermediate_der6053 = ((real_T)(M[56ULL] != 0) * 2.0 - 1.0) * t76 / 0.5;
  if (U_idx_3 <= 0.0) {
    t76 = 0.0;
  } else {
    t76 = (real_T)!(U_idx_3 >= 1.0);
  }

  if (t61 <= 0.0) {
    intermediate_der6053 = 0.0;
  } else {
    intermediate_der6053 = t61 >= 1.0 ? 0.0 : -((intermediate_der6053 - 0.8) *
      (((real_T)(M[56ULL] != 0) * 2.0 - 1.0) *
       (Simscape_Component_pressure_difference_ratio_raw * t76) / 0.5) * 0.4);
  }

  intermediate_der6066 = intermediate_der6056 > 0.01 ? intermediate_der6066 *
    intermediate_der6053 : 0.0;
  t57[0ULL] = intermediate_der6053;
  t57[1ULL] = intermediate_der6066;
  t57[2ULL] = t76;
  t57[3ULL] = ((real_T)(M[63ULL] != 0) * 2.0 - 1.0) * X[56ULL] *
    intermediate_der6066 * 0.001;
  t46[0ULL] = 1.0;
  for (t58 = 0ULL; t58 < 4ULL; t58++) {
    t46[t58 + 1ULL] = t57[t58];
  }

  out.mX[0] = t46[0];
  out.mX[1] = t46[1];
  out.mX[2] = t46[2];
  out.mX[3] = t46[3];
  out.mX[4] = t46[4];
  (void)LC;
  (void)t81;
  return 0;
}
