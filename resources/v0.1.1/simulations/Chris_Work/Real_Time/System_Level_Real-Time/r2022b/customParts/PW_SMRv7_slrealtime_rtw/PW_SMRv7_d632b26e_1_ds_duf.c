/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv7/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv7_d632b26e_1_ds_sys_struct.h"
#include "PW_SMRv7_d632b26e_1_ds_duf.h"
#include "PW_SMRv7_d632b26e_1_ds.h"
#include "PW_SMRv7_d632b26e_1_ds_externals.h"
#include "PW_SMRv7_d632b26e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv7_d632b26e_1_ds_duf(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t235, NeDsMethodOutput *t236)
{
  ETTS0 bb_efOut;
  ETTS0 d_efOut;
  ETTS0 db_efOut;
  ETTS0 efOut;
  ETTS0 fb_efOut;
  ETTS0 g_efOut;
  ETTS0 hb_efOut;
  ETTS0 j_efOut;
  ETTS0 k_efOut;
  ETTS0 kb_efOut;
  ETTS0 m_efOut;
  ETTS0 mb_efOut;
  ETTS0 p_efOut;
  ETTS0 r_efOut;
  ETTS0 t12;
  ETTS0 t13;
  ETTS0 t15;
  ETTS0 t16;
  ETTS0 t5;
  ETTS0 t6;
  ETTS0 t_efOut;
  ETTS0 v_efOut;
  ETTS0 x_efOut;
  PmRealVector out;
  real_T X[183];
  real_T ab_efOut[1];
  real_T b_efOut[1];
  real_T c_efOut[1];
  real_T cb_efOut[1];
  real_T e_efOut[1];
  real_T eb_efOut[1];
  real_T f_efOut[1];
  real_T gb_efOut[1];
  real_T h_efOut[1];
  real_T i_efOut[1];
  real_T ib_efOut[1];
  real_T jb_efOut[1];
  real_T l_efOut[1];
  real_T lb_efOut[1];
  real_T n_efOut[1];
  real_T nb_efOut[1];
  real_T o_efOut[1];
  real_T ob_efOut[1];
  real_T pb_efOut[1];
  real_T q_efOut[1];
  real_T qb_efOut[1];
  real_T s_efOut[1];
  real_T t156[1];
  real_T u_efOut[1];
  real_T w_efOut[1];
  real_T y_efOut[1];
  real_T Fixed_Displacement_Pump_2P_v_avg;
  real_T Simscape_Component_Dp;
  real_T Simscape_Component_efficiency_raw;
  real_T Simscape_Component_mdot_forward;
  real_T U_idx_1;
  real_T U_idx_3;
  real_T intermediate_der1673;
  real_T intermediate_der5259;
  real_T intermediate_der5302;
  real_T intrm_sf_mf_276;
  real_T intrm_sf_mf_278;
  real_T t154_idx_0;
  real_T t168;
  real_T t169;
  real_T t171;
  real_T t173;
  real_T t175;
  real_T t176;
  real_T t208;
  real_T t226;
  real_T t232;
  real_T t234;
  size_t t18[1];
  size_t t19[1];
  size_t t39[1];
  size_t t86[1];
  int32_T M[128];
  int32_T b;
  for (b = 0; b < 128; b++) {
    M[b] = t235->mM.mX[b];
  }

  U_idx_1 = t235->mU.mX[1];
  U_idx_3 = t235->mU.mX[3];
  for (b = 0; b < 183; b++) {
    X[b] = t235->mX.mX[b];
  }

  out = t236->mDUF;
  t156[0ULL] = X[0ULL];
  t18[0] = 100ULL;
  t19[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t156[0ULL], &t18
    [0ULL], &t19[0ULL]);
  t16 = efOut;
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t16.mField0[0ULL], &t16.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t18[0ULL], &t19[0ULL]);
  t154_idx_0 = b_efOut[0];
  t168 = t154_idx_0;
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t16.mField0[0ULL], &t16.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t18[0ULL], &t19[0ULL]);
  t154_idx_0 = c_efOut[0];
  t234 = t154_idx_0;
  t156[0ULL] = X[49ULL];
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t156[0ULL],
    &t18[0ULL], &t19[0ULL]);
  t15 = d_efOut;
  tlu2_1d_linear_linear_value(&e_efOut[0ULL], &t15.mField0[0ULL], &t15.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t18[0ULL], &t19[0ULL]);
  t154_idx_0 = e_efOut[0];
  intermediate_der5302 = t154_idx_0;
  tlu2_1d_linear_linear_value(&f_efOut[0ULL], &t15.mField0[0ULL], &t15.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t18[0ULL], &t19[0ULL]);
  t154_idx_0 = f_efOut[0];
  intrm_sf_mf_278 = t154_idx_0;
  t156[0ULL] = X[53ULL];
  tlu2_linear_linear_prelookup(&g_efOut.mField0[0ULL], &g_efOut.mField1[0ULL],
    &g_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t156[0ULL],
    &t18[0ULL], &t19[0ULL]);
  t13 = g_efOut;
  tlu2_1d_linear_linear_value(&h_efOut[0ULL], &t13.mField0[0ULL], &t13.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t18[0ULL], &t19[0ULL]);
  t154_idx_0 = h_efOut[0];
  Fixed_Displacement_Pump_2P_v_avg = t154_idx_0;
  tlu2_1d_linear_linear_value(&i_efOut[0ULL], &t13.mField0[0ULL], &t13.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t18[0ULL], &t19[0ULL]);
  t154_idx_0 = i_efOut[0];
  intermediate_der5259 = t154_idx_0;
  t156[0] = 0.5;
  t39[0] = 50ULL;
  tlu2_linear_linear_prelookup(&j_efOut.mField0[0ULL], &j_efOut.mField1[0ULL],
    &j_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t156[0ULL],
    &t39[0ULL], &t19[0ULL]);
  t6 = j_efOut;
  t156[0ULL] = (X[53ULL] + X[79ULL]) / 2.0;
  tlu2_linear_linear_prelookup(&k_efOut.mField0[0ULL], &k_efOut.mField1[0ULL],
    &k_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t156[0ULL],
    &t18[0ULL], &t19[0ULL]);
  t5 = k_efOut;
  tlu2_2d_linear_linear_value(&l_efOut[0ULL], &t6.mField0[0ULL], &t6.mField2
    [0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t39[0ULL], &t18[0ULL], &t19[0ULL]);
  t154_idx_0 = l_efOut[0];
  t169 = 1.0000000000000001E-7 / (t154_idx_0 == 0.0 ? 1.0E-16 : t154_idx_0) *
    4.1209000000000006E-6 / 2.0;
  t156[0ULL] = X[79ULL];
  tlu2_linear_linear_prelookup(&m_efOut.mField0[0ULL], &m_efOut.mField1[0ULL],
    &m_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t156[0ULL],
    &t18[0ULL], &t19[0ULL]);
  t12 = m_efOut;
  tlu2_1d_linear_linear_value(&n_efOut[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t18[0ULL], &t19[0ULL]);
  t154_idx_0 = n_efOut[0];
  intrm_sf_mf_276 = t154_idx_0;
  tlu2_1d_linear_linear_value(&o_efOut[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t18[0ULL], &t19[0ULL]);
  t154_idx_0 = o_efOut[0];
  intermediate_der1673 = t154_idx_0;
  t232 = X[79ULL] - X[53ULL];
  if (X[83ULL] <= Fixed_Displacement_Pump_2P_v_avg) {
    Simscape_Component_Dp = X[83ULL] / (Fixed_Displacement_Pump_2P_v_avg == 0.0 ?
      1.0E-16 : Fixed_Displacement_Pump_2P_v_avg) - 1.0;
  } else if (X[83ULL] >= intermediate_der5259) {
    Simscape_Component_Dp = (X[83ULL] - 4000.0) / (4000.0 - intermediate_der5259
      == 0.0 ? 1.0E-16 : 4000.0 - intermediate_der5259) + 2.0;
  } else {
    t175 = intermediate_der5259 - Fixed_Displacement_Pump_2P_v_avg;
    Simscape_Component_Dp = (X[83ULL] - Fixed_Displacement_Pump_2P_v_avg) /
      (t175 == 0.0 ? 1.0E-16 : t175);
  }

  t156[0ULL] = Simscape_Component_Dp;
  tlu2_linear_linear_prelookup(&p_efOut.mField0[0ULL], &p_efOut.mField1[0ULL],
    &p_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t156[0ULL],
    &t39[0ULL], &t19[0ULL]);
  t5 = p_efOut;
  tlu2_2d_linear_linear_value(&q_efOut[0ULL], &t5.mField0[0ULL], &t5.mField2
    [0ULL], &t13.mField0[0ULL], &t13.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t39[0ULL], &t18[0ULL], &t19[0ULL]);
  t154_idx_0 = q_efOut[0];
  Simscape_Component_Dp = t154_idx_0;
  if (X[84ULL] <= intrm_sf_mf_276) {
    t171 = X[84ULL] / (intrm_sf_mf_276 == 0.0 ? 1.0E-16 : intrm_sf_mf_276) - 1.0;
  } else if (X[84ULL] >= intermediate_der1673) {
    t171 = (X[84ULL] - 4000.0) / (4000.0 - intermediate_der1673 == 0.0 ? 1.0E-16
      : 4000.0 - intermediate_der1673) + 2.0;
  } else {
    t208 = intermediate_der1673 - intrm_sf_mf_276;
    t171 = (X[84ULL] - intrm_sf_mf_276) / (t208 == 0.0 ? 1.0E-16 : t208);
  }

  t156[0ULL] = t171;
  tlu2_linear_linear_prelookup(&r_efOut.mField0[0ULL], &r_efOut.mField1[0ULL],
    &r_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t156[0ULL],
    &t39[0ULL], &t19[0ULL]);
  t5 = r_efOut;
  tlu2_2d_linear_linear_value(&s_efOut[0ULL], &t5.mField0[0ULL], &t5.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t39[0ULL], &t18[0ULL], &t19[0ULL]);
  t154_idx_0 = s_efOut[0];
  t171 = t154_idx_0;
  if (X[85ULL] <= Fixed_Displacement_Pump_2P_v_avg) {
    Simscape_Component_mdot_forward = X[85ULL] /
      (Fixed_Displacement_Pump_2P_v_avg == 0.0 ? 1.0E-16 :
       Fixed_Displacement_Pump_2P_v_avg) - 1.0;
  } else if (X[85ULL] >= intermediate_der5259) {
    Simscape_Component_mdot_forward = (X[85ULL] - 4000.0) / (4000.0 -
      intermediate_der5259 == 0.0 ? 1.0E-16 : 4000.0 - intermediate_der5259) +
      2.0;
  } else {
    t154_idx_0 = intermediate_der5259 - Fixed_Displacement_Pump_2P_v_avg;
    Simscape_Component_mdot_forward = (X[85ULL] -
      Fixed_Displacement_Pump_2P_v_avg) / (t154_idx_0 == 0.0 ? 1.0E-16 :
      t154_idx_0);
  }

  t156[0ULL] = Simscape_Component_mdot_forward;
  tlu2_linear_linear_prelookup(&t_efOut.mField0[0ULL], &t_efOut.mField1[0ULL],
    &t_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t156[0ULL],
    &t39[0ULL], &t19[0ULL]);
  t5 = t_efOut;
  tlu2_2d_linear_linear_value(&u_efOut[0ULL], &t5.mField0[0ULL], &t5.mField2
    [0ULL], &t13.mField0[0ULL], &t13.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t39[0ULL], &t18[0ULL], &t19[0ULL]);
  t154_idx_0 = u_efOut[0];
  Fixed_Displacement_Pump_2P_v_avg = t154_idx_0;
  if (X[86ULL] <= intrm_sf_mf_276) {
    intermediate_der5259 = X[86ULL] / (intrm_sf_mf_276 == 0.0 ? 1.0E-16 :
      intrm_sf_mf_276) - 1.0;
  } else if (X[86ULL] >= intermediate_der1673) {
    intermediate_der5259 = (X[86ULL] - 4000.0) / (4000.0 - intermediate_der1673 ==
      0.0 ? 1.0E-16 : 4000.0 - intermediate_der1673) + 2.0;
  } else {
    t154_idx_0 = intermediate_der1673 - intrm_sf_mf_276;
    intermediate_der5259 = (X[86ULL] - intrm_sf_mf_276) / (t154_idx_0 == 0.0 ?
      1.0E-16 : t154_idx_0);
  }

  t156[0ULL] = intermediate_der5259;
  tlu2_linear_linear_prelookup(&v_efOut.mField0[0ULL], &v_efOut.mField1[0ULL],
    &v_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t156[0ULL],
    &t39[0ULL], &t19[0ULL]);
  t6 = v_efOut;
  tlu2_2d_linear_linear_value(&w_efOut[0ULL], &t6.mField0[0ULL], &t6.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t39[0ULL], &t18[0ULL], &t19[0ULL]);
  t154_idx_0 = w_efOut[0];
  intrm_sf_mf_276 = pmf_sqrt(t169 * 400000.0 + X[57ULL] * X[57ULL]);
  Fixed_Displacement_Pump_2P_v_avg = (t171 + Fixed_Displacement_Pump_2P_v_avg) /
    2.0;
  Fixed_Displacement_Pump_2P_v_avg = (-X[57ULL] / (intrm_sf_mf_276 == 0.0 ?
    1.0E-16 : intrm_sf_mf_276) + 1.0) * ((Simscape_Component_Dp + t154_idx_0) /
    2.0) / 2.0 + (1.0 - -X[57ULL] / (intrm_sf_mf_276 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_276)) * Fixed_Displacement_Pump_2P_v_avg / 2.0;
  t156[0ULL] = X[21ULL];
  tlu2_linear_linear_prelookup(&x_efOut.mField0[0ULL], &x_efOut.mField1[0ULL],
    &x_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t156[0ULL],
    &t18[0ULL], &t19[0ULL]);
  t12 = x_efOut;
  tlu2_1d_linear_linear_value(&y_efOut[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t18[0ULL], &t19[0ULL]);
  t154_idx_0 = y_efOut[0];
  intermediate_der5259 = t154_idx_0;
  tlu2_1d_linear_linear_value(&ab_efOut[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t18[0ULL], &t19[0ULL]);
  t154_idx_0 = ab_efOut[0];
  if (X[22ULL] <= intermediate_der5259) {
    intrm_sf_mf_276 = X[22ULL] / (intermediate_der5259 == 0.0 ? 1.0E-16 :
      intermediate_der5259) - 1.0;
  } else if (X[22ULL] >= t154_idx_0) {
    intrm_sf_mf_276 = (X[22ULL] - 4000.0) / (4000.0 - t154_idx_0 == 0.0 ?
      1.0E-16 : 4000.0 - t154_idx_0) + 2.0;
  } else {
    t154_idx_0 -= intermediate_der5259;
    intrm_sf_mf_276 = (X[22ULL] - intermediate_der5259) / (t154_idx_0 == 0.0 ?
      1.0E-16 : t154_idx_0);
  }

  t156[0ULL] = intrm_sf_mf_276;
  t86[0] = 25ULL;
  tlu2_linear_linear_prelookup(&bb_efOut.mField0[0ULL], &bb_efOut.mField1[0ULL],
    &bb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t156[0ULL],
    &t86[0ULL], &t19[0ULL]);
  t5 = bb_efOut;
  tlu2_2d_linear_linear_value(&cb_efOut[0ULL], &t5.mField0[0ULL], &t5.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField23, &t86[0ULL], &t18[0ULL], &t19[0ULL]);
  t154_idx_0 = cb_efOut[0];
  intermediate_der5259 = t154_idx_0;
  t156[0ULL] = intrm_sf_mf_276;
  tlu2_linear_linear_prelookup(&db_efOut.mField0[0ULL], &db_efOut.mField1[0ULL],
    &db_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField27, &t156[0ULL],
    &t39[0ULL], &t19[0ULL]);
  t6 = db_efOut;
  tlu2_2d_linear_linear_value(&eb_efOut[0ULL], &t6.mField0[0ULL], &t6.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField28, &t39[0ULL], &t18[0ULL], &t19[0ULL]);
  t154_idx_0 = eb_efOut[0];
  t169 = t154_idx_0;
  t156[0ULL] = intrm_sf_mf_276;
  tlu2_linear_linear_prelookup(&fb_efOut.mField0[0ULL], &fb_efOut.mField1[0ULL],
    &fb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t156[0ULL],
    &t86[0ULL], &t19[0ULL]);
  t13 = fb_efOut;
  tlu2_2d_linear_linear_value(&gb_efOut[0ULL], &t13.mField0[0ULL], &t13.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t86[0ULL], &t18[0ULL], &t19[0ULL]);
  t154_idx_0 = gb_efOut[0];
  intermediate_der1673 = t154_idx_0;
  Simscape_Component_Dp = X[0ULL] - X[49ULL];
  if (X[97ULL] <= t168) {
    t171 = X[97ULL] / (t168 == 0.0 ? 1.0E-16 : t168) - 1.0;
  } else if (X[97ULL] >= t234) {
    t171 = (X[97ULL] - 4000.0) / (4000.0 - t234 == 0.0 ? 1.0E-16 : 4000.0 - t234)
      + 2.0;
  } else {
    t154_idx_0 = t234 - t168;
    t171 = (X[97ULL] - t168) / (t154_idx_0 == 0.0 ? 1.0E-16 : t154_idx_0);
  }

  t156[0ULL] = t171;
  tlu2_linear_linear_prelookup(&hb_efOut.mField0[0ULL], &hb_efOut.mField1[0ULL],
    &hb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t156[0ULL],
    &t39[0ULL], &t19[0ULL]);
  t12 = hb_efOut;
  tlu2_2d_linear_linear_value(&ib_efOut[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &t16.mField0[0ULL], &t16.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t39[0ULL], &t18[0ULL], &t19[0ULL]);
  t154_idx_0 = ib_efOut[0];
  t208 = pmf_sqrt(t154_idx_0 * 461.5);
  t168 = X[0ULL] * 0.85 / (t208 == 0.0 ? 1.0E-16 : t208) * 0.667262351240862;
  tlu2_2d_linear_linear_value(&jb_efOut[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &t16.mField0[0ULL], &t16.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t39[0ULL], &t18[0ULL], &t19[0ULL]);
  t154_idx_0 = jb_efOut[0];
  if (U_idx_3 <= 0.0) {
    Simscape_Component_mdot_forward = 0.0;
  } else {
    Simscape_Component_mdot_forward = U_idx_3 >= 1.0 ? 1.0 : U_idx_3;
  }

  t173 = Simscape_Component_mdot_forward * 0.0002;
  Simscape_Component_mdot_forward = t168 * t173;
  Simscape_Component_efficiency_raw = X[49ULL] / (X[0ULL] == 0.0 ? 1.0E-16 : X
    [0ULL]);
  if (Simscape_Component_efficiency_raw <= 0.0) {
    t175 = 0.0;
  } else {
    t175 = Simscape_Component_efficiency_raw >= 1.0 ? 1.0 :
      Simscape_Component_efficiency_raw;
  }

  Simscape_Component_efficiency_raw = (pmf_pow(t175, 1.5384615384615383) -
    pmf_pow(t175, 1.7692307692307689)) * 8.6666666666666661;
  if (Simscape_Component_efficiency_raw <= 0.0) {
    t176 = 0.0;
  } else {
    t176 = Simscape_Component_efficiency_raw >= 1.0E+6 ? 1.0E+6 :
      Simscape_Component_efficiency_raw;
  }

  t173 = t173 * X[0ULL] * 0.85 / (t208 == 0.0 ? 1.0E-16 : t208) * pmf_sqrt(t176);
  if (t175 < 0.545727733814065) {
    Simscape_Component_efficiency_raw = Simscape_Component_mdot_forward *
      100000.0;
  } else {
    Simscape_Component_efficiency_raw = t173 * 100000.0;
  }

  Simscape_Component_mdot_forward = Simscape_Component_Dp > 0.01 ?
    Simscape_Component_efficiency_raw : 0.0;
  t171 = fabs(Simscape_Component_mdot_forward);
  t173 = t171 / 1.5;
  Simscape_Component_efficiency_raw = (0.8 - (t173 - 0.8) * (t173 - 0.8) * 0.2)
    - (t175 - 0.25) * (t175 - 0.25) * 0.35;
  t173 = t154_idx_0 * X[0ULL] * 100.0 + X[97ULL];
  if (intermediate_der5302 <= intermediate_der5302) {
    t234 = intermediate_der5302 / (intermediate_der5302 == 0.0 ? 1.0E-16 :
      intermediate_der5302) - 1.0;
  } else if (intermediate_der5302 >= intrm_sf_mf_278) {
    t234 = (intermediate_der5302 - 4000.0) / (4000.0 - intrm_sf_mf_278 == 0.0 ?
      1.0E-16 : 4000.0 - intrm_sf_mf_278) + 2.0;
  } else {
    t154_idx_0 = intrm_sf_mf_278 - intermediate_der5302;
    t234 = (intermediate_der5302 - intermediate_der5302) / (t154_idx_0 == 0.0 ?
      1.0E-16 : t154_idx_0);
  }

  t156[0ULL] = t234;
  tlu2_linear_linear_prelookup(&kb_efOut.mField0[0ULL], &kb_efOut.mField1[0ULL],
    &kb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t156[0ULL],
    &t39[0ULL], &t19[0ULL]);
  t6 = kb_efOut;
  tlu2_2d_linear_linear_value(&lb_efOut[0ULL], &t6.mField0[0ULL], &t6.mField2
    [0ULL], &t15.mField0[0ULL], &t15.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t39[0ULL], &t18[0ULL], &t19[0ULL]);
  t154_idx_0 = lb_efOut[0];
  t226 = X[49ULL] * t154_idx_0 * 100.0 + intermediate_der5302;
  if (intrm_sf_mf_278 <= intermediate_der5302) {
    t234 = intrm_sf_mf_278 / (intermediate_der5302 == 0.0 ? 1.0E-16 :
      intermediate_der5302) - 1.0;
  } else if (intrm_sf_mf_278 >= intrm_sf_mf_278) {
    t234 = (intrm_sf_mf_278 - 4000.0) / (4000.0 - intrm_sf_mf_278 == 0.0 ?
      1.0E-16 : 4000.0 - intrm_sf_mf_278) + 2.0;
  } else {
    t154_idx_0 = intrm_sf_mf_278 - intermediate_der5302;
    t234 = (intrm_sf_mf_278 - intermediate_der5302) / (t154_idx_0 == 0.0 ?
      1.0E-16 : t154_idx_0);
  }

  t156[0ULL] = t234;
  tlu2_linear_linear_prelookup(&mb_efOut.mField0[0ULL], &mb_efOut.mField1[0ULL],
    &mb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t156[0ULL],
    &t39[0ULL], &t19[0ULL]);
  t5 = mb_efOut;
  tlu2_2d_linear_linear_value(&nb_efOut[0ULL], &t5.mField0[0ULL], &t5.mField2
    [0ULL], &t15.mField0[0ULL], &t15.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t39[0ULL], &t18[0ULL], &t19[0ULL]);
  t156[0] = nb_efOut[0];
  t234 = t156[0ULL];
  intermediate_der5302 = X[49ULL] * t234 * 100.0 + intrm_sf_mf_278;
  tlu2_2d_linear_linear_value(&ob_efOut[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &t16.mField0[0ULL], &t16.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t39[0ULL], &t18[0ULL], &t19[0ULL]);
  t156[0] = ob_efOut[0];
  t234 = t156[0ULL];
  tlu2_2d_linear_linear_value(&pb_efOut[0ULL], &t6.mField0[0ULL], &t6.mField2
    [0ULL], &t15.mField0[0ULL], &t15.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t39[0ULL], &t18[0ULL], &t19[0ULL]);
  t156[0] = pb_efOut[0];
  intrm_sf_mf_278 = t156[0ULL];
  tlu2_2d_linear_linear_value(&qb_efOut[0ULL], &t5.mField0[0ULL], &t5.mField2
    [0ULL], &t15.mField0[0ULL], &t15.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t39[0ULL], &t18[0ULL], &t19[0ULL]);
  t156[0] = qb_efOut[0];
  t171 = t156[0ULL];
  t171 -= intrm_sf_mf_278;
  t234 = (t234 - intrm_sf_mf_278) / (t171 == 0.0 ? 1.0E-16 : t171);
  if (t234 <= 0.0) {
    intrm_sf_mf_278 = 0.0;
  } else {
    intrm_sf_mf_278 = t234 >= 1.0 ? 1.0 : t234;
  }

  intermediate_der5302 = t173 - ((intermediate_der5302 - t226) * intrm_sf_mf_278
    + t226);
  t234 = intrm_sf_mf_276 / 0.1;
  intrm_sf_mf_278 = t234 * t234 * 3.0 - t234 * t234 * t234 * 2.0;
  t234 = (intrm_sf_mf_276 - 0.9) / 0.099999999999999978;
  t173 = t234 * t234 * 3.0 - t234 * t234 * t234 * 2.0;
  if (intrm_sf_mf_276 <= 0.0) {
    t234 = intermediate_der5259;
  } else if (intrm_sf_mf_276 >= 0.1) {
    t234 = t169;
  } else {
    t234 = (1.0 - intrm_sf_mf_278) * intermediate_der5259 + t169 *
      intrm_sf_mf_278;
  }

  if (intrm_sf_mf_276 <= 0.9) {
    intrm_sf_mf_278 = t234;
  } else if (intrm_sf_mf_276 >= 1.0) {
    intrm_sf_mf_278 = intermediate_der1673;
  } else {
    intrm_sf_mf_278 = (1.0 - t173) * t234 + intermediate_der1673 * t173;
  }

  t226 = U_idx_1 * 4.0;
  t173 = cosh(t226 / 0.025) * cosh(t226 / 0.025);
  intermediate_der1673 = 1.3257606759554879;
  if (U_idx_3 <= 0.0) {
    intermediate_der5259 = 0.0;
  } else {
    intermediate_der5259 = (real_T)!(U_idx_3 >= 1.0);
  }

  t169 = intermediate_der5259 * 0.0002;
  intermediate_der5259 = t168 * t169;
  t168 = X[0ULL] * t169 * 0.85 / (t208 == 0.0 ? 1.0E-16 : t208) * pmf_sqrt(t176);
  if (t175 < 0.545727733814065) {
    t169 = intermediate_der5259 * 100000.0;
  } else {
    t169 = t168 * 100000.0;
  }

  t168 = Simscape_Component_Dp > 0.01 ? t169 : 0.0;
  intermediate_der5259 = fabs(t232) * (160.0 * (1.0 / (t173 == 0.0 ? 1.0E-16 :
    t173))) * 0.018078554672120287;
  if (Simscape_Component_efficiency_raw <= 0.0) {
    t234 = 0.0;
  } else {
    t234 = Simscape_Component_efficiency_raw >= 1.0 ? 0.0 : -((((real_T)(M[55ULL]
      != 0) * 2.0 - 1.0) * Simscape_Component_mdot_forward / 1.5 - 0.8) *
      (((real_T)(M[55ULL] != 0) * 2.0 - 1.0) * t168 / 1.5) * 0.4);
  }

  intermediate_der5302 = -(Simscape_Component_Dp > 0.01 ? intermediate_der5302 *
    t234 : 0.0);
  out.mX[0] = -(intermediate_der1673 / (Fixed_Displacement_Pump_2P_v_avg == 0.0 ?
    1.0E-16 : Fixed_Displacement_Pump_2P_v_avg) * 1.0E-6);
  out.mX[1] = -intermediate_der5259;
  out.mX[2] = t232 * intermediate_der1673 * 0.0001;
  out.mX[3] = -(1000.0 / (X[23ULL] == 0.0 ? 1.0E-16 : X[23ULL]) *
                intrm_sf_mf_278 * 6.367473975406809 / 10.0);
  out.mX[4] = -t168;
  out.mX[5] = -intermediate_der5302 / 41.529355183662183;
  (void)LC;
  (void)t236;
  return 0;
}
