/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv9/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_sys_struct.h"
#include "PW_SMRv9_4b22eff7_1_ds_duy.h"
#include "PW_SMRv9_4b22eff7_1_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_externals.h"
#include "PW_SMRv9_4b22eff7_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv9_4b22eff7_1_ds_duy(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t185, NeDsMethodOutput *t186)
{
  ETTS0 ab_efOut;
  ETTS0 cb_efOut;
  ETTS0 d_efOut;
  ETTS0 efOut;
  ETTS0 g_efOut;
  ETTS0 i_efOut;
  ETTS0 l_efOut;
  ETTS0 o_efOut;
  ETTS0 q_efOut;
  ETTS0 t0;
  ETTS0 t2;
  ETTS0 t3;
  ETTS0 t5;
  ETTS0 t7;
  ETTS0 t8;
  ETTS0 t9;
  ETTS0 w_efOut;
  PmRealVector out;
  real_T X[250];
  real_T t98[14];
  real_T t121[6];
  real_T t122[6];
  real_T b_efOut[1];
  real_T bb_efOut[1];
  real_T c_efOut[1];
  real_T db_efOut[1];
  real_T e_efOut[1];
  real_T eb_efOut[1];
  real_T f_efOut[1];
  real_T fb_efOut[1];
  real_T gb_efOut[1];
  real_T h_efOut[1];
  real_T j_efOut[1];
  real_T k_efOut[1];
  real_T m_efOut[1];
  real_T n_efOut[1];
  real_T p_efOut[1];
  real_T r_efOut[1];
  real_T s_efOut[1];
  real_T t118[1];
  real_T t_efOut[1];
  real_T u_efOut[1];
  real_T v_efOut[1];
  real_T x_efOut[1];
  real_T y_efOut[1];
  real_T Simscape_Component1_h_B_isentropic;
  real_T Simscape_Component1_mdot_nozzle;
  real_T U_idx_5;
  real_T U_idx_6;
  real_T intermediate_der129;
  real_T intermediate_der2506;
  real_T intermediate_der6203;
  real_T intermediate_der7007;
  real_T intermediate_der7015;
  real_T intermediate_der7044;
  real_T intrm_sf_mf_413;
  real_T intrm_sf_mf_433;
  real_T t116_idx_0;
  real_T t125;
  real_T t126;
  real_T t130;
  real_T t131;
  real_T t133;
  real_T t134;
  real_T t136;
  real_T t137;
  real_T t153;
  real_T t175;
  real_T t183;
  real_T t184;
  size_t t11[1];
  size_t t12[1];
  size_t t25[1];
  size_t t124;
  int32_T M[163];
  int32_T b;
  for (b = 0; b < 163; b++) {
    M[b] = t185->mM.mX[b];
  }

  U_idx_5 = t185->mU.mX[5];
  U_idx_6 = t185->mU.mX[6];
  for (b = 0; b < 250; b++) {
    X[b] = t185->mX.mX[b];
  }

  out = t186->mDUY;
  t118[0ULL] = X[0ULL];
  t11[0] = 100ULL;
  t12[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t118[0ULL], &t11
    [0ULL], &t12[0ULL]);
  t8 = efOut;
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t11[0ULL], &t12[0ULL]);
  t116_idx_0 = b_efOut[0];
  intermediate_der7044 = t116_idx_0;
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t11[0ULL], &t12[0ULL]);
  t116_idx_0 = c_efOut[0];
  intermediate_der7007 = t116_idx_0;
  t118[0ULL] = X[15ULL];
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t118[0ULL],
    &t11[0ULL], &t12[0ULL]);
  t7 = d_efOut;
  tlu2_1d_linear_linear_value(&e_efOut[0ULL], &t7.mField0[0ULL], &t7.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t11[0ULL], &t12[0ULL]);
  t116_idx_0 = e_efOut[0];
  Simscape_Component1_h_B_isentropic = t116_idx_0;
  tlu2_1d_linear_linear_value(&f_efOut[0ULL], &t7.mField0[0ULL], &t7.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t11[0ULL], &t12[0ULL]);
  t116_idx_0 = f_efOut[0];
  if (X[118ULL] <= Simscape_Component1_h_B_isentropic) {
    t116_idx_0 = X[118ULL] / (Simscape_Component1_h_B_isentropic == 0.0 ?
      1.0E-16 : Simscape_Component1_h_B_isentropic) - 1.0;
  } else if (X[118ULL] >= t116_idx_0) {
    t116_idx_0 = (X[118ULL] - 4000.0) / (4000.0 - t116_idx_0 == 0.0 ? 1.0E-16 :
      4000.0 - t116_idx_0) + 2.0;
  } else {
    t184 = t116_idx_0 - Simscape_Component1_h_B_isentropic;
    t116_idx_0 = (X[118ULL] - Simscape_Component1_h_B_isentropic) / (t184 == 0.0
      ? 1.0E-16 : t184);
  }

  t118[0ULL] = t116_idx_0;
  t25[0] = 50ULL;
  tlu2_linear_linear_prelookup(&g_efOut.mField0[0ULL], &g_efOut.mField1[0ULL],
    &g_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t118[0ULL],
    &t25[0ULL], &t12[0ULL]);
  t9 = g_efOut;
  tlu2_2d_linear_linear_value(&h_efOut[0ULL], &t9.mField0[0ULL], &t9.mField2
    [0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t25[0ULL], &t11[0ULL], &t12[0ULL]);
  t116_idx_0 = h_efOut[0];
  Simscape_Component1_h_B_isentropic = t116_idx_0;
  if (X[154ULL] <= intermediate_der7044) {
    intermediate_der7015 = X[154ULL] / (intermediate_der7044 == 0.0 ? 1.0E-16 :
      intermediate_der7044) - 1.0;
  } else if (X[154ULL] >= intermediate_der7007) {
    intermediate_der7015 = (X[154ULL] - 4000.0) / (4000.0 - intermediate_der7007
      == 0.0 ? 1.0E-16 : 4000.0 - intermediate_der7007) + 2.0;
  } else {
    t134 = intermediate_der7007 - intermediate_der7044;
    intermediate_der7015 = (X[154ULL] - intermediate_der7044) / (t134 == 0.0 ?
      1.0E-16 : t134);
  }

  t118[0ULL] = intermediate_der7015;
  tlu2_linear_linear_prelookup(&i_efOut.mField0[0ULL], &i_efOut.mField1[0ULL],
    &i_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t118[0ULL],
    &t25[0ULL], &t12[0ULL]);
  t5 = i_efOut;
  tlu2_2d_linear_linear_value(&j_efOut[0ULL], &t5.mField0[0ULL], &t5.mField2
    [0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t25[0ULL], &t11[0ULL], &t12[0ULL]);
  t116_idx_0 = j_efOut[0];
  intermediate_der7044 = t116_idx_0;
  intermediate_der7007 = X[0ULL] - X[15ULL];
  tlu2_2d_linear_linear_value(&k_efOut[0ULL], &t5.mField0[0ULL], &t5.mField2
    [0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t25[0ULL], &t11[0ULL], &t12[0ULL]);
  t116_idx_0 = k_efOut[0];
  t136 = pmf_sqrt(t116_idx_0 * 461.5);
  intermediate_der7015 = X[0ULL] * 0.85 / (t136 == 0.0 ? 1.0E-16 : t136) *
    0.667262351240862;
  if (U_idx_5 <= 0.0) {
    t125 = 0.0;
  } else {
    t125 = U_idx_5 >= 1.0 ? 1.0 : U_idx_5;
  }

  t126 = t125 * 0.0002;
  t125 = intermediate_der7015 * t126;
  intermediate_der6203 = X[15ULL] / (X[0ULL] == 0.0 ? 1.0E-16 : X[0ULL]);
  if (intermediate_der6203 <= 0.0) {
    intermediate_der2506 = 0.0;
  } else {
    intermediate_der2506 = intermediate_der6203 >= 1.0 ? 1.0 :
      intermediate_der6203;
  }

  intermediate_der6203 = (pmf_pow(intermediate_der2506, 1.5384615384615383) -
    pmf_pow(intermediate_der2506, 1.7692307692307689)) * 8.6666666666666661;
  if (intermediate_der6203 <= 0.0) {
    t184 = 0.0;
  } else {
    t184 = intermediate_der6203 >= 1.0E+6 ? 1.0E+6 : intermediate_der6203;
  }

  t126 = t126 * X[0ULL] * 0.85 / (t136 == 0.0 ? 1.0E-16 : t136) * pmf_sqrt(t184);
  if (intermediate_der2506 < 0.545727733814065) {
    intermediate_der6203 = t125 * 100000.0;
  } else {
    intermediate_der6203 = t126 * 100000.0;
  }

  t125 = intermediate_der7007 > 0.01 ? intermediate_der6203 : 0.0;
  intermediate_der129 = fabs(t125);
  t126 = intermediate_der129 / 0.5;
  intermediate_der6203 = 0.8 - (t126 - 0.8) * (t126 - 0.8) * 0.2;
  t126 = intermediate_der7044 * X[0ULL] * 100.0 + X[154ULL];
  if (X[15ULL] <= 1.0) {
    intermediate_der7044 = 1.0;
  } else {
    intermediate_der7044 = X[15ULL] >= 1000.0 ? 1000.0 : X[15ULL];
  }

  t118[0ULL] = intermediate_der7044;
  tlu2_linear_linear_prelookup(&l_efOut.mField0[0ULL], &l_efOut.mField1[0ULL],
    &l_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t118[0ULL],
    &t11[0ULL], &t12[0ULL]);
  t0 = l_efOut;
  tlu2_1d_linear_linear_value(&m_efOut[0ULL], &t0.mField0[0ULL], &t0.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t11[0ULL], &t12[0ULL]);
  t116_idx_0 = m_efOut[0];
  t130 = t116_idx_0;
  tlu2_1d_linear_linear_value(&n_efOut[0ULL], &t0.mField0[0ULL], &t0.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t11[0ULL], &t12[0ULL]);
  t116_idx_0 = n_efOut[0];
  t131 = t116_idx_0;
  if (t130 <= t130) {
    t183 = t130 / (t130 == 0.0 ? 1.0E-16 : t130) - 1.0;
  } else if (t130 >= t116_idx_0) {
    t183 = (t130 - 4000.0) / (4000.0 - t116_idx_0 == 0.0 ? 1.0E-16 : 4000.0 -
      t116_idx_0) + 2.0;
  } else {
    t116_idx_0 -= t130;
    t183 = (t130 - t130) / (t116_idx_0 == 0.0 ? 1.0E-16 : t116_idx_0);
  }

  t118[0ULL] = t183;
  tlu2_linear_linear_prelookup(&o_efOut.mField0[0ULL], &o_efOut.mField1[0ULL],
    &o_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t118[0ULL],
    &t25[0ULL], &t12[0ULL]);
  t3 = o_efOut;
  tlu2_2d_linear_linear_value(&p_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t25[0ULL], &t11[0ULL], &t12[0ULL]);
  t116_idx_0 = p_efOut[0];
  t133 = t116_idx_0 * intermediate_der7044 * 100.0 + t130;
  if (t131 <= t130) {
    t183 = t131 / (t130 == 0.0 ? 1.0E-16 : t130) - 1.0;
  } else if (t131 >= t131) {
    t183 = (t131 - 4000.0) / (4000.0 - t131 == 0.0 ? 1.0E-16 : 4000.0 - t131) +
      2.0;
  } else {
    t116_idx_0 = t131 - t130;
    t183 = (t131 - t130) / (t116_idx_0 == 0.0 ? 1.0E-16 : t116_idx_0);
  }

  t118[0ULL] = t183;
  tlu2_linear_linear_prelookup(&q_efOut.mField0[0ULL], &q_efOut.mField1[0ULL],
    &q_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t118[0ULL],
    &t25[0ULL], &t12[0ULL]);
  t2 = q_efOut;
  tlu2_2d_linear_linear_value(&r_efOut[0ULL], &t2.mField0[0ULL], &t2.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t25[0ULL], &t11[0ULL], &t12[0ULL]);
  t116_idx_0 = r_efOut[0];
  t183 = t116_idx_0 * intermediate_der7044 * 100.0 + t131;
  tlu2_2d_linear_linear_value(&s_efOut[0ULL], &t5.mField0[0ULL], &t5.mField2
    [0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t25[0ULL], &t11[0ULL], &t12[0ULL]);
  t116_idx_0 = s_efOut[0];
  intermediate_der7044 = t116_idx_0;
  tlu2_2d_linear_linear_value(&t_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t25[0ULL], &t11[0ULL], &t12[0ULL]);
  t116_idx_0 = t_efOut[0];
  t130 = t116_idx_0;
  tlu2_2d_linear_linear_value(&u_efOut[0ULL], &t2.mField0[0ULL], &t2.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t25[0ULL], &t11[0ULL], &t12[0ULL]);
  t116_idx_0 = u_efOut[0];
  t153 = t116_idx_0 - t130;
  intermediate_der7044 = (intermediate_der7044 - t130) / (t153 == 0.0 ? 1.0E-16 :
    t153);
  if (intermediate_der7044 <= 0.0) {
    t130 = 0.0;
  } else {
    t130 = intermediate_der7044 >= 1.0 ? 1.0 : intermediate_der7044;
  }

  t130 = t126 - ((t183 - t133) * t130 + t133);
  t131 = pmf_sqrt(X[18ULL] * X[18ULL] + 1.0);
  t126 = X[15ULL] - X[88ULL];
  tlu2_2d_linear_linear_value(&v_efOut[0ULL], &t9.mField0[0ULL], &t9.mField2
    [0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t25[0ULL], &t11[0ULL], &t12[0ULL]);
  t116_idx_0 = v_efOut[0];
  t153 = pmf_sqrt(t116_idx_0 * 461.5);
  t183 = X[15ULL] * 0.85 / (t153 == 0.0 ? 1.0E-16 : t153) * 0.667262351240862;
  if (U_idx_6 <= 0.0) {
    t134 = 0.0;
  } else {
    t134 = U_idx_6 >= 1.0 ? 1.0 : U_idx_6;
  }

  intrm_sf_mf_413 = t134 * 0.0002;
  t134 = t183 * intrm_sf_mf_413;
  Simscape_Component1_mdot_nozzle = X[88ULL] / (X[15ULL] == 0.0 ? 1.0E-16 : X
    [15ULL]);
  if (Simscape_Component1_mdot_nozzle <= 0.0) {
    t137 = 0.0;
  } else {
    t137 = Simscape_Component1_mdot_nozzle >= 1.0 ? 1.0 :
      Simscape_Component1_mdot_nozzle;
  }

  Simscape_Component1_mdot_nozzle = (pmf_pow(t137, 1.5384615384615383) - pmf_pow
    (t137, 1.7692307692307689)) * 8.6666666666666661;
  if (Simscape_Component1_mdot_nozzle <= 0.0) {
    t175 = 0.0;
  } else {
    t175 = Simscape_Component1_mdot_nozzle >= 1.0E+6 ? 1.0E+6 :
      Simscape_Component1_mdot_nozzle;
  }

  intrm_sf_mf_413 = X[15ULL] * intrm_sf_mf_413 * 0.85 / (t153 == 0.0 ? 1.0E-16 :
    t153) * pmf_sqrt(t175);
  if (t137 < 0.545727733814065) {
    Simscape_Component1_mdot_nozzle = t134 * 100000.0;
  } else {
    Simscape_Component1_mdot_nozzle = intrm_sf_mf_413 * 100000.0;
  }

  t134 = t126 > 0.01 ? Simscape_Component1_mdot_nozzle : 0.0;
  t116_idx_0 = fabs(t134);
  intrm_sf_mf_413 = t116_idx_0 / 0.5;
  Simscape_Component1_mdot_nozzle = 0.8 - (intrm_sf_mf_413 - 0.8) *
    (intrm_sf_mf_413 - 0.8) * 0.2;
  intrm_sf_mf_413 = Simscape_Component1_h_B_isentropic * X[15ULL] * 100.0 + X
    [118ULL];
  if (X[88ULL] <= 1.0) {
    Simscape_Component1_h_B_isentropic = 1.0;
  } else {
    Simscape_Component1_h_B_isentropic = X[88ULL] >= 1000.0 ? 1000.0 : X[88ULL];
  }

  t118[0ULL] = Simscape_Component1_h_B_isentropic;
  tlu2_linear_linear_prelookup(&w_efOut.mField0[0ULL], &w_efOut.mField1[0ULL],
    &w_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t118[0ULL],
    &t11[0ULL], &t12[0ULL]);
  t2 = w_efOut;
  tlu2_1d_linear_linear_value(&x_efOut[0ULL], &t2.mField0[0ULL], &t2.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t11[0ULL], &t12[0ULL]);
  t116_idx_0 = x_efOut[0];
  intermediate_der129 = t116_idx_0;
  tlu2_1d_linear_linear_value(&y_efOut[0ULL], &t2.mField0[0ULL], &t2.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t11[0ULL], &t12[0ULL]);
  t116_idx_0 = y_efOut[0];
  intermediate_der7044 = t116_idx_0;
  if (intermediate_der129 <= intermediate_der129) {
    intrm_sf_mf_433 = intermediate_der129 / (intermediate_der129 == 0.0 ?
      1.0E-16 : intermediate_der129) - 1.0;
  } else if (intermediate_der129 >= t116_idx_0) {
    intrm_sf_mf_433 = (intermediate_der129 - 4000.0) / (4000.0 - t116_idx_0 ==
      0.0 ? 1.0E-16 : 4000.0 - t116_idx_0) + 2.0;
  } else {
    t116_idx_0 -= intermediate_der129;
    intrm_sf_mf_433 = (intermediate_der129 - intermediate_der129) / (t116_idx_0 ==
      0.0 ? 1.0E-16 : t116_idx_0);
  }

  t118[0ULL] = intrm_sf_mf_433;
  tlu2_linear_linear_prelookup(&ab_efOut.mField0[0ULL], &ab_efOut.mField1[0ULL],
    &ab_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t118[0ULL],
    &t25[0ULL], &t12[0ULL]);
  t3 = ab_efOut;
  tlu2_2d_linear_linear_value(&bb_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t25[0ULL], &t11[0ULL], &t12[0ULL]);
  t116_idx_0 = bb_efOut[0];
  t133 = t116_idx_0 * Simscape_Component1_h_B_isentropic * 100.0 +
    intermediate_der129;
  if (intermediate_der7044 <= intermediate_der129) {
    intrm_sf_mf_433 = intermediate_der7044 / (intermediate_der129 == 0.0 ?
      1.0E-16 : intermediate_der129) - 1.0;
  } else if (intermediate_der7044 >= intermediate_der7044) {
    intrm_sf_mf_433 = (intermediate_der7044 - 4000.0) / (4000.0 -
      intermediate_der7044 == 0.0 ? 1.0E-16 : 4000.0 - intermediate_der7044) +
      2.0;
  } else {
    t116_idx_0 = intermediate_der7044 - intermediate_der129;
    intrm_sf_mf_433 = (intermediate_der7044 - intermediate_der129) / (t116_idx_0
      == 0.0 ? 1.0E-16 : t116_idx_0);
  }

  t118[0ULL] = intrm_sf_mf_433;
  tlu2_linear_linear_prelookup(&cb_efOut.mField0[0ULL], &cb_efOut.mField1[0ULL],
    &cb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t118[0ULL],
    &t25[0ULL], &t12[0ULL]);
  t0 = cb_efOut;
  tlu2_2d_linear_linear_value(&db_efOut[0ULL], &t0.mField0[0ULL], &t0.mField2
    [0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t25[0ULL], &t11[0ULL], &t12[0ULL]);
  t118[0] = db_efOut[0];
  intermediate_der129 = t118[0ULL];
  intrm_sf_mf_433 = intermediate_der129 * Simscape_Component1_h_B_isentropic *
    100.0 + intermediate_der7044;
  tlu2_2d_linear_linear_value(&eb_efOut[0ULL], &t9.mField0[0ULL], &t9.mField2
    [0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t25[0ULL], &t11[0ULL], &t12[0ULL]);
  t118[0] = eb_efOut[0];
  Simscape_Component1_h_B_isentropic = t118[0ULL];
  tlu2_2d_linear_linear_value(&fb_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t25[0ULL], &t11[0ULL], &t12[0ULL]);
  t118[0] = fb_efOut[0];
  intermediate_der129 = t118[0ULL];
  tlu2_2d_linear_linear_value(&gb_efOut[0ULL], &t0.mField0[0ULL], &t0.mField2
    [0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t25[0ULL], &t11[0ULL], &t12[0ULL]);
  t118[0] = gb_efOut[0];
  intermediate_der7044 = t118[0ULL];
  t116_idx_0 = intermediate_der7044 - intermediate_der129;
  Simscape_Component1_h_B_isentropic = (Simscape_Component1_h_B_isentropic -
    intermediate_der129) / (t116_idx_0 == 0.0 ? 1.0E-16 : t116_idx_0);
  if (Simscape_Component1_h_B_isentropic <= 0.0) {
    intermediate_der129 = 0.0;
  } else {
    intermediate_der129 = Simscape_Component1_h_B_isentropic >= 1.0 ? 1.0 :
      Simscape_Component1_h_B_isentropic;
  }

  intermediate_der129 = intrm_sf_mf_413 - ((intrm_sf_mf_433 - t133) *
    intermediate_der129 + t133);
  if (t130 <= 0.0) {
    intrm_sf_mf_413 = 0.0;
  } else {
    intrm_sf_mf_413 = t130 >= 500.0 ? 500.0 : t130;
  }

  if (intermediate_der129 <= 0.0) {
    t130 = 0.0;
  } else {
    t130 = intermediate_der129 >= 500.0 ? 500.0 : intermediate_der129;
  }

  t125 = ((real_T)(M[107ULL] != 0) * 2.0 - 1.0) * t125 / 0.5;
  t134 = ((real_T)(M[109ULL] != 0) * 2.0 - 1.0) * t134 / 0.5;
  if (U_idx_5 <= 0.0) {
    intrm_sf_mf_433 = 0.0;
  } else {
    intrm_sf_mf_433 = (real_T)!(U_idx_5 >= 1.0);
  }

  t116_idx_0 = intrm_sf_mf_433 * 0.0002;
  t133 = intermediate_der7015 * t116_idx_0;
  intermediate_der7015 = X[0ULL] * t116_idx_0 * 0.85 / (t136 == 0.0 ? 1.0E-16 :
    t136) * pmf_sqrt(t184);
  if (intermediate_der2506 < 0.545727733814065) {
    t184 = t133 * 100000.0;
  } else {
    t184 = intermediate_der7015 * 100000.0;
  }

  intermediate_der7015 = intermediate_der7007 > 0.01 ? t184 : 0.0;
  if (U_idx_6 <= 0.0) {
    t184 = 0.0;
  } else {
    t184 = (real_T)!(U_idx_6 >= 1.0);
  }

  t133 = t184 * 0.0002;
  intermediate_der129 = t183 * t133;
  t183 = X[15ULL] * t133 * 0.85 / (t153 == 0.0 ? 1.0E-16 : t153) * pmf_sqrt(t175);
  if (t137 < 0.545727733814065) {
    t175 = intermediate_der129 * 100000.0;
  } else {
    t175 = t183 * 100000.0;
  }

  t137 = t133;
  t133 = t184;
  intermediate_der7015 = ((real_T)(M[107ULL] != 0) * 2.0 - 1.0) *
    intermediate_der7015 / 0.5;
  if (intermediate_der6203 <= 0.0) {
    t125 = 0.0;
  } else {
    t125 = intermediate_der6203 >= 1.0 ? 0.0 : -((t125 - 0.8) *
      intermediate_der7015 * 0.4);
  }

  if (intermediate_der7007 > 0.01) {
    t184 = (boolean_T)(real_T)(X[15ULL] > 1.0) ? t125 * intrm_sf_mf_413 : 0.0;
  } else {
    t184 = 0.0;
  }

  intermediate_der7044 = ((real_T)(M[109ULL] != 0) * 2.0 - 1.0) * (t126 > 0.01 ?
    t175 : 0.0) / 0.5;
  if (Simscape_Component1_mdot_nozzle <= 0.0) {
    intermediate_der6203 = 0.0;
  } else {
    intermediate_der6203 = Simscape_Component1_mdot_nozzle >= 1.0 ? 0.0 :
      -((t134 - 0.8) * intermediate_der7044 * 0.4);
  }

  if (t126 > 0.01) {
    t130 = (boolean_T)(real_T)(X[88ULL] > 1.0) ? intermediate_der6203 * t130 :
      0.0;
  } else {
    t130 = 0.0;
  }

  t121[0ULL] = t125;
  t121[1ULL] = t184;
  t121[2ULL] = intermediate_der7015;
  t121[3ULL] = t116_idx_0;
  t121[4ULL] = intrm_sf_mf_433;
  t121[5ULL] = ((real_T)(M[108ULL] != 0) * 2.0 - 1.0) * X[122ULL] * t184 / (t131
    == 0.0 ? 1.0E-16 : t131) * 1000.0;
  t122[0ULL] = intermediate_der6203;
  t122[1ULL] = t130;
  t122[2ULL] = intermediate_der7044;
  t122[3ULL] = t137;
  t122[4ULL] = t133;
  t122[5ULL] = -(((real_T)(M[110ULL] != 0) * 2.0 - 1.0) * ((-X[95ULL] - X[122ULL])
    + X[124ULL]) * t130) / (t131 == 0.0 ? 1.0E-16 : t131) * 1000.0;
  t98[0ULL] = 1.0;
  t98[1ULL] = 1000.0;
  for (t124 = 0ULL; t124 < 6ULL; t124++) {
    t98[t124 + 2ULL] = t121[t124];
  }

  for (t124 = 0ULL; t124 < 6ULL; t124++) {
    t98[t124 + 8ULL] = t122[t124];
  }

  out.mX[0] = t98[0];
  out.mX[1] = t98[1];
  out.mX[2] = t98[2];
  out.mX[3] = t98[3];
  out.mX[4] = t98[4];
  out.mX[5] = t98[5];
  out.mX[6] = t98[6];
  out.mX[7] = t98[7];
  out.mX[8] = t98[8];
  out.mX[9] = t98[9];
  out.mX[10] = t98[10];
  out.mX[11] = t98[11];
  out.mX[12] = t98[12];
  out.mX[13] = t98[13];
  (void)LC;
  (void)t186;
  return 0;
}
