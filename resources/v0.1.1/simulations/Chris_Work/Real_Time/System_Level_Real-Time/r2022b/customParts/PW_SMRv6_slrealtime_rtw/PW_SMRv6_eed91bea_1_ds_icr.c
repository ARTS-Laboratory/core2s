/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv6/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_sys_struct.h"
#include "PW_SMRv6_eed91bea_1_ds_icr.h"
#include "PW_SMRv6_eed91bea_1_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_externals.h"
#include "PW_SMRv6_eed91bea_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv6_eed91bea_1_ds_icr(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t537, NeDsMethodOutput *t538)
{
  ETTS0 ac_efOut;
  ETTS0 bb_efOut;
  ETTS0 bd_efOut;
  ETTS0 d_efOut;
  ETTS0 db_efOut;
  ETTS0 dc_efOut;
  ETTS0 ec_efOut;
  ETTS0 efOut;
  ETTS0 fb_efOut;
  ETTS0 g_efOut;
  ETTS0 gc_efOut;
  ETTS0 h_efOut;
  ETTS0 hb_efOut;
  ETTS0 ic_efOut;
  ETTS0 j_efOut;
  ETTS0 kc_efOut;
  ETTS0 l_efOut;
  ETTS0 lc_efOut;
  ETTS0 m_efOut;
  ETTS0 nc_efOut;
  ETTS0 o_efOut;
  ETTS0 p_efOut;
  ETTS0 pb_efOut;
  ETTS0 pc_efOut;
  ETTS0 r_efOut;
  ETTS0 sc_efOut;
  ETTS0 t12;
  ETTS0 t13;
  ETTS0 t17;
  ETTS0 t18;
  ETTS0 t20;
  ETTS0 t21;
  ETTS0 t22;
  ETTS0 t23;
  ETTS0 t24;
  ETTS0 t27;
  ETTS0 t30;
  ETTS0 t_efOut;
  ETTS0 tb_efOut;
  ETTS0 w_efOut;
  ETTS0 wb_efOut;
  ETTS0 wc_efOut;
  PmRealVector out;
  real_T X[222];
  real_T ab_efOut[1];
  real_T ad_efOut[1];
  real_T b_efOut[1];
  real_T bc_efOut[1];
  real_T c_efOut[1];
  real_T cb_efOut[1];
  real_T cc_efOut[1];
  real_T cd_efOut[1];
  real_T dd_efOut[1];
  real_T e_efOut[1];
  real_T eb_efOut[1];
  real_T ed_efOut[1];
  real_T f_efOut[1];
  real_T fc_efOut[1];
  real_T fd_efOut[1];
  real_T gb_efOut[1];
  real_T gd_efOut[1];
  real_T hc_efOut[1];
  real_T hd_efOut[1];
  real_T i_efOut[1];
  real_T ib_efOut[1];
  real_T id_efOut[1];
  real_T jb_efOut[1];
  real_T jc_efOut[1];
  real_T jd_efOut[1];
  real_T k_efOut[1];
  real_T kb_efOut[1];
  real_T kd_efOut[1];
  real_T lb_efOut[1];
  real_T ld_efOut[1];
  real_T mb_efOut[1];
  real_T mc_efOut[1];
  real_T n_efOut[1];
  real_T nb_efOut[1];
  real_T ob_efOut[1];
  real_T oc_efOut[1];
  real_T q_efOut[1];
  real_T qb_efOut[1];
  real_T qc_efOut[1];
  real_T rb_efOut[1];
  real_T rc_efOut[1];
  real_T s_efOut[1];
  real_T sb_efOut[1];
  real_T t323[1];
  real_T t333[1];
  real_T tc_efOut[1];
  real_T u_efOut[1];
  real_T ub_efOut[1];
  real_T uc_efOut[1];
  real_T v_efOut[1];
  real_T vb_efOut[1];
  real_T vc_efOut[1];
  real_T x_efOut[1];
  real_T xb_efOut[1];
  real_T xc_efOut[1];
  real_T y_efOut[1];
  real_T yb_efOut[1];
  real_T yc_efOut[1];
  real_T Condenser_UA_mix;
  real_T Steam_Generator_Rth_liq;
  real_T Steam_Generator_UA_liq;
  real_T Steam_Generator_thermal_liquid_Cdot;
  real_T Steam_Generator_two_phase_fluid_Cdot_threshold;
  real_T Steam_Generator_two_phase_fluid_hc_vap;
  real_T Steam_Generator_two_phase_fluid_v_sat_vap;
  real_T intrm_sf_mf_17;
  real_T intrm_sf_mf_434;
  real_T intrm_sf_mf_490;
  real_T intrm_sf_mf_500;
  real_T intrm_sf_mf_511;
  real_T intrm_sf_mf_590;
  real_T intrm_sf_mf_61;
  real_T intrm_sf_mf_91;
  real_T t301_idx_0;
  real_T t335;
  real_T t337;
  real_T t338;
  real_T t340;
  real_T t341;
  real_T t342;
  real_T t345;
  real_T t347;
  real_T t349;
  real_T t351;
  real_T t352;
  real_T t354;
  real_T t357;
  real_T t358;
  real_T t360;
  real_T t366;
  real_T t367;
  real_T t368;
  real_T t370;
  real_T t371;
  real_T t478;
  real_T t492;
  real_T t502;
  real_T t506;
  real_T t507;
  real_T t513;
  real_T t520;
  real_T t525;
  real_T t534;
  real_T t536;
  size_t t32[1];
  size_t t33[1];
  size_t t46[1];
  size_t t49[1];
  size_t t61[1];
  int32_T b;
  boolean_T intrm_sf_mf_463;
  boolean_T intrm_sf_mf_477;
  boolean_T intrm_sf_mf_479;
  boolean_T intrm_sf_mf_482;
  boolean_T intrm_sf_mf_484;
  boolean_T intrm_sf_mf_485;
  boolean_T intrm_sf_mf_495;
  boolean_T intrm_sf_mf_496;
  boolean_T intrm_sf_mf_497;
  for (b = 0; b < 222; b++) {
    X[b] = t537->mX.mX[b];
  }

  out = t538->mICR;
  t333[0ULL] = X[0ULL];
  t32[0] = 100ULL;
  t33[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t333[0ULL], &t32
    [0ULL], &t33[0ULL]);
  t30 = efOut;
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t32[0ULL], &t33[0ULL]);
  t323[0] = b_efOut[0];
  intrm_sf_mf_500 = t323[0ULL];
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t32[0ULL], &t33[0ULL]);
  t301_idx_0 = c_efOut[0];
  Steam_Generator_two_phase_fluid_Cdot_threshold = t301_idx_0;
  if (X[50ULL] <= intrm_sf_mf_500) {
    intrm_sf_mf_17 = X[50ULL] / (intrm_sf_mf_500 == 0.0 ? 1.0E-16 :
      intrm_sf_mf_500) - 1.0;
  } else if (X[50ULL] >= t301_idx_0) {
    intrm_sf_mf_17 = (X[50ULL] - 4000.0) / (4000.0 - t301_idx_0 == 0.0 ? 1.0E-16
      : 4000.0 - t301_idx_0) + 2.0;
  } else {
    Condenser_UA_mix = t301_idx_0 - intrm_sf_mf_500;
    intrm_sf_mf_17 = (X[50ULL] - intrm_sf_mf_500) / (Condenser_UA_mix == 0.0 ?
      1.0E-16 : Condenser_UA_mix);
  }

  t333[0ULL] = X[51ULL];
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t333[0ULL],
    &t32[0ULL], &t33[0ULL]);
  t30 = d_efOut;
  tlu2_1d_linear_linear_value(&e_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t32[0ULL], &t33[0ULL]);
  t301_idx_0 = e_efOut[0];
  t335 = t301_idx_0;
  tlu2_1d_linear_linear_value(&f_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t32[0ULL], &t33[0ULL]);
  t301_idx_0 = f_efOut[0];
  if (X[52ULL] <= t335) {
    t337 = X[52ULL] / (t335 == 0.0 ? 1.0E-16 : t335) - 1.0;
  } else if (X[52ULL] >= t301_idx_0) {
    t337 = (X[52ULL] - 4000.0) / (4000.0 - t301_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t301_idx_0) + 2.0;
  } else {
    intrm_sf_mf_91 = t301_idx_0 - t335;
    t337 = (X[52ULL] - t335) / (intrm_sf_mf_91 == 0.0 ? 1.0E-16 : intrm_sf_mf_91);
  }

  t333[0ULL] = X[3ULL];
  t46[0] = 28ULL;
  tlu2_linear_nearest_prelookup(&g_efOut.mField0[0ULL], &g_efOut.mField1[0ULL],
    &g_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t333[0ULL],
    &t46[0ULL], &t33[0ULL]);
  t24 = g_efOut;
  t333[0ULL] = X[4ULL];
  t49[0] = 27ULL;
  tlu2_linear_nearest_prelookup(&h_efOut.mField0[0ULL], &h_efOut.mField1[0ULL],
    &h_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t333[0ULL],
    &t49[0ULL], &t33[0ULL]);
  t22 = h_efOut;
  tlu2_2d_linear_nearest_value(&i_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], &t22.mField0[0ULL], &t22.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField5, &t46[0ULL], &t49[0ULL], &t33[0ULL]);
  t301_idx_0 = i_efOut[0];
  t335 = t301_idx_0;
  t333[0ULL] = X[5ULL];
  tlu2_linear_nearest_prelookup(&j_efOut.mField0[0ULL], &j_efOut.mField1[0ULL],
    &j_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t333[0ULL],
    &t46[0ULL], &t33[0ULL]);
  t27 = j_efOut;
  tlu2_2d_linear_nearest_value(&k_efOut[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], &t22.mField0[0ULL], &t22.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField5, &t46[0ULL], &t49[0ULL], &t33[0ULL]);
  t301_idx_0 = k_efOut[0];
  t335 = (t335 + t301_idx_0) / 2.0;
  intrm_sf_mf_61 = t335 * 0.11700000000000003 / 0.022;
  t333[0] = 1.0;
  t61[0] = 50ULL;
  tlu2_linear_nearest_prelookup(&l_efOut.mField0[0ULL], &l_efOut.mField1[0ULL],
    &l_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t333[0ULL],
    &t61[0ULL], &t33[0ULL]);
  t18 = l_efOut;
  t323[0ULL] = X[6ULL];
  tlu2_linear_nearest_prelookup(&m_efOut.mField0[0ULL], &m_efOut.mField1[0ULL],
    &m_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t323[0ULL],
    &t32[0ULL], &t33[0ULL]);
  t21 = m_efOut;
  tlu2_2d_linear_nearest_value(&n_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t21.mField0[0ULL], &t21.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField8, &t61[0ULL], &t32[0ULL], &t33[0ULL]);
  t301_idx_0 = n_efOut[0];
  t338 = t301_idx_0 * 0.018849555921538759 / 0.02;
  t323[0ULL] = X[3ULL];
  tlu2_linear_linear_prelookup(&o_efOut.mField0[0ULL], &o_efOut.mField1[0ULL],
    &o_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t323[0ULL],
    &t46[0ULL], &t33[0ULL]);
  t30 = o_efOut;
  t323[0ULL] = X[4ULL];
  tlu2_linear_linear_prelookup(&p_efOut.mField0[0ULL], &p_efOut.mField1[0ULL],
    &p_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t323[0ULL],
    &t49[0ULL], &t33[0ULL]);
  t17 = p_efOut;
  tlu2_2d_linear_linear_value(&q_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField9, &t46[0ULL], &t49[0ULL], &t33[0ULL]);
  t301_idx_0 = q_efOut[0];
  Condenser_UA_mix = t301_idx_0;
  t323[0ULL] = X[5ULL];
  tlu2_linear_linear_prelookup(&r_efOut.mField0[0ULL], &r_efOut.mField1[0ULL],
    &r_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t323[0ULL],
    &t46[0ULL], &t33[0ULL]);
  t30 = r_efOut;
  tlu2_2d_linear_linear_value(&s_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField9, &t46[0ULL], &t49[0ULL], &t33[0ULL]);
  t301_idx_0 = s_efOut[0];
  Condenser_UA_mix = (Condenser_UA_mix + t301_idx_0) / 2.0;
  t340 = (X[63ULL] - 10.0) / 2.0;
  t341 = tanh(Condenser_UA_mix * t340 * 3.0 / (intrm_sf_mf_61 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_61)) * Condenser_UA_mix * t340;
  t323[0ULL] = X[6ULL];
  tlu2_linear_linear_prelookup(&t_efOut.mField0[0ULL], &t_efOut.mField1[0ULL],
    &t_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t323[0ULL],
    &t32[0ULL], &t33[0ULL]);
  t20 = t_efOut;
  tlu2_1d_linear_linear_value(&u_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t32[0ULL], &t33[0ULL]);
  t301_idx_0 = u_efOut[0];
  intrm_sf_mf_61 = t301_idx_0;
  tlu2_1d_linear_linear_value(&v_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t32[0ULL], &t33[0ULL]);
  t301_idx_0 = v_efOut[0];
  Condenser_UA_mix = t301_idx_0;
  if (X[7ULL] <= intrm_sf_mf_61) {
    t342 = X[7ULL] / (intrm_sf_mf_61 == 0.0 ? 1.0E-16 : intrm_sf_mf_61) - 1.0;
  } else if (X[7ULL] >= t301_idx_0) {
    t342 = (X[7ULL] - 4000.0) / (4000.0 - t301_idx_0 == 0.0 ? 1.0E-16 : 4000.0 -
      t301_idx_0) + 2.0;
  } else {
    t534 = t301_idx_0 - intrm_sf_mf_61;
    t342 = (X[7ULL] - intrm_sf_mf_61) / (t534 == 0.0 ? 1.0E-16 : t534);
  }

  if (X[8ULL] <= intrm_sf_mf_61) {
    intrm_sf_mf_91 = X[8ULL] / (intrm_sf_mf_61 == 0.0 ? 1.0E-16 : intrm_sf_mf_61)
      - 1.0;
  } else if (X[8ULL] >= t301_idx_0) {
    intrm_sf_mf_91 = (X[8ULL] - 4000.0) / (4000.0 - t301_idx_0 == 0.0 ? 1.0E-16 :
      4000.0 - t301_idx_0) + 2.0;
  } else {
    t360 = t301_idx_0 - intrm_sf_mf_61;
    intrm_sf_mf_91 = (X[8ULL] - intrm_sf_mf_61) / (t360 == 0.0 ? 1.0E-16 : t360);
  }

  t323[0ULL] = ((t342 < 0.0 ? t342 : 0.0) + (intrm_sf_mf_91 < 0.0 ?
    intrm_sf_mf_91 : 0.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&w_efOut.mField0[0ULL], &w_efOut.mField1[0ULL],
    &w_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t323[0ULL],
    &t61[0ULL], &t33[0ULL]);
  t30 = w_efOut;
  tlu2_2d_linear_nearest_value(&x_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t21.mField0[0ULL], &t21.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField10, &t61[0ULL], &t32[0ULL], &t33[0ULL]);
  t301_idx_0 = x_efOut[0];
  intrm_sf_mf_590 = t301_idx_0;
  tlu2_2d_linear_nearest_value(&y_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t21.mField0[0ULL], &t21.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField8, &t61[0ULL], &t32[0ULL], &t33[0ULL]);
  t301_idx_0 = y_efOut[0];
  t345 = t301_idx_0;
  tlu2_2d_linear_nearest_value(&ab_efOut[0ULL], &t30.mField0[0ULL],
    &t30.mField2[0ULL], &t21.mField0[0ULL], &t21.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t61[0ULL], &t32[0ULL], &t33[0ULL]);
  t301_idx_0 = ab_efOut[0];
  Steam_Generator_two_phase_fluid_hc_vap = t301_idx_0;
  t347 = intrm_sf_mf_590 * t345 / (t301_idx_0 == 0.0 ? 1.0E-16 : t301_idx_0);
  Steam_Generator_thermal_liquid_Cdot = tanh((X[64ULL] - X[65ULL]) * t347 * 3.0 /
    (t338 == 0.0 ? 1.0E-16 : t338));
  t338 = (Steam_Generator_thermal_liquid_Cdot + 1.0) / 2.0 * (X[64ULL] > 0.0 ?
    X[64ULL] : 0.0) + (1.0 - Steam_Generator_thermal_liquid_Cdot) / 2.0 * (X
    [65ULL] > 0.0 ? X[65ULL] : 0.0);
  Steam_Generator_Rth_liq = X[9ULL] >= 0.0 ? X[9ULL] : 0.0;
  t349 = X[10ULL] >= 0.0 ? X[10ULL] : 0.0;
  Steam_Generator_thermal_liquid_Cdot = t347 * t349;
  t366 = Steam_Generator_thermal_liquid_Cdot + X[67ULL];
  t367 = Steam_Generator_Rth_liq + X[67ULL];
  t351 = t366 / (t367 == 0.0 ? 1.0E-16 : t367);
  if (t351 <= 1.0) {
    t352 = 1.0 - t351 * 0.999999;
  } else {
    t352 = 1.0E-6;
  }

  if (t351 >= 1.0) {
    t536 = t351 * 1.000001 - 1.0;
  } else {
    t536 = 1.0E-6;
  }

  if (Steam_Generator_thermal_liquid_Cdot + X[67ULL] >= Steam_Generator_Rth_liq
      + X[67ULL]) {
    t368 = Steam_Generator_Rth_liq + X[67ULL];
    intrm_sf_mf_490 = Steam_Generator_thermal_liquid_Cdot + X[67ULL];
    t354 = (1.000001 / (t368 == 0.0 ? 1.0E-16 : t368) - 0.999999 /
            (intrm_sf_mf_490 == 0.0 ? 1.0E-16 : intrm_sf_mf_490)) * X[11ULL];
  } else {
    t370 = Steam_Generator_thermal_liquid_Cdot + X[67ULL];
    t371 = Steam_Generator_Rth_liq + X[67ULL];
    t354 = (1.000001 / (t370 == 0.0 ? 1.0E-16 : t370) - 0.999999 / (t371 == 0.0 ?
             1.0E-16 : t371)) * X[11ULL];
  }

  Steam_Generator_thermal_liquid_Cdot = t354 <= 15.0 ? t354 : 15.0;
  t323[0ULL] = t342;
  tlu2_linear_linear_prelookup(&bb_efOut.mField0[0ULL], &bb_efOut.mField1[0ULL],
    &bb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t323[0ULL],
    &t61[0ULL], &t33[0ULL]);
  t13 = bb_efOut;
  tlu2_2d_linear_linear_value(&cb_efOut[0ULL], &t13.mField0[0ULL], &t13.mField2
    [0ULL], &t20.mField0[0ULL], &t20.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t61[0ULL], &t32[0ULL], &t33[0ULL]);
  t301_idx_0 = cb_efOut[0];
  t534 = X[6ULL] * t301_idx_0 * 100.0 + X[7ULL];
  t323[0] = 0.0;
  tlu2_linear_linear_prelookup(&db_efOut.mField0[0ULL], &db_efOut.mField1[0ULL],
    &db_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t323[0ULL],
    &t61[0ULL], &t33[0ULL]);
  t23 = db_efOut;
  tlu2_2d_linear_linear_value(&eb_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t20.mField0[0ULL], &t20.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t61[0ULL], &t32[0ULL], &t33[0ULL]);
  t301_idx_0 = eb_efOut[0];
  t354 = t301_idx_0;
  intrm_sf_mf_511 = X[6ULL] * t301_idx_0 * 100.0 + intrm_sf_mf_61;
  intrm_sf_mf_61 = (intrm_sf_mf_511 - t534) / (t347 == 0.0 ? 1.0E-16 : t347);
  t478 = (1.0 - pmf_exp(-Steam_Generator_thermal_liquid_Cdot)) * X[66ULL];
  t502 = pmf_exp(-Steam_Generator_thermal_liquid_Cdot) * t536 + t352;
  t357 = t478 / (t502 == 0.0 ? 1.0E-16 : t502);
  intrm_sf_mf_463 = (t357 > intrm_sf_mf_61 * 1000.0);
  intrm_sf_mf_495 = (t534 < intrm_sf_mf_511);
  intrm_sf_mf_496 = (t534 > intrm_sf_mf_511);
  tlu2_linear_linear_prelookup(&fb_efOut.mField0[0ULL], &fb_efOut.mField1[0ULL],
    &fb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t333[0ULL],
    &t61[0ULL], &t33[0ULL]);
  t12 = fb_efOut;
  tlu2_2d_linear_linear_value(&gb_efOut[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &t20.mField0[0ULL], &t20.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t61[0ULL], &t32[0ULL], &t33[0ULL]);
  t301_idx_0 = gb_efOut[0];
  t358 = t301_idx_0;
  t525 = X[6ULL] * t301_idx_0 * 100.0 + Condenser_UA_mix;
  intrm_sf_mf_497 = (t534 > t525);
  intrm_sf_mf_484 = (X[66ULL] < 0.0);
  intrm_sf_mf_485 = (X[66ULL] > 0.0);
  if (intrm_sf_mf_485) {
    if (intrm_sf_mf_495) {
      if (intrm_sf_mf_463) {
        t502 = X[66ULL] - t352 * intrm_sf_mf_61 * 1000.0;
        t301_idx_0 = pmf_log((t536 * intrm_sf_mf_61 * 1000.0 + X[66ULL]) / (t502
          == 0.0 ? 1.0E-16 : t502));
        Condenser_UA_mix = t301_idx_0 / (Steam_Generator_thermal_liquid_Cdot ==
          0.0 ? 1.0E-16 : Steam_Generator_thermal_liquid_Cdot);
      } else {
        Condenser_UA_mix = 1.0;
      }
    } else {
      Condenser_UA_mix = 0.0;
    }
  } else {
    Condenser_UA_mix = intrm_sf_mf_484 ? intrm_sf_mf_497 ? 0.0 : (real_T)
      !intrm_sf_mf_496 : (real_T)intrm_sf_mf_495;
  }

  t333[0ULL] = ((t342 > 1.0 ? t342 : 1.0) + (intrm_sf_mf_91 > 1.0 ?
    intrm_sf_mf_91 : 1.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&hb_efOut.mField0[0ULL], &hb_efOut.mField1[0ULL],
    &hb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t333[0ULL],
    &t61[0ULL], &t33[0ULL]);
  t30 = hb_efOut;
  tlu2_2d_linear_nearest_value(&ib_efOut[0ULL], &t30.mField0[0ULL],
    &t30.mField2[0ULL], &t21.mField0[0ULL], &t21.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t61[0ULL], &t32[0ULL], &t33[0ULL]);
  t301_idx_0 = ib_efOut[0];
  Steam_Generator_thermal_liquid_Cdot = t301_idx_0;
  tlu2_2d_linear_nearest_value(&jb_efOut[0ULL], &t30.mField0[0ULL],
    &t30.mField2[0ULL], &t21.mField0[0ULL], &t21.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t61[0ULL], &t32[0ULL], &t33[0ULL]);
  t301_idx_0 = jb_efOut[0];
  t352 = t301_idx_0;
  tlu2_2d_linear_nearest_value(&kb_efOut[0ULL], &t30.mField0[0ULL],
    &t30.mField2[0ULL], &t21.mField0[0ULL], &t21.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t61[0ULL], &t32[0ULL], &t33[0ULL]);
  t301_idx_0 = kb_efOut[0];
  t536 = t301_idx_0;
  t360 = Steam_Generator_thermal_liquid_Cdot * t352 / (t301_idx_0 == 0.0 ?
    1.0E-16 : t301_idx_0);
  t513 = t360 * t349;
  t349 = (X[67ULL] + t513) / (t367 == 0.0 ? 1.0E-16 : t367);
  if (t349 <= 1.0) {
    t520 = 1.0 - t349 * 0.999999;
  } else {
    t520 = 1.0E-6;
  }

  if (t349 >= 1.0) {
    t506 = t349 * 1.000001 - 1.0;
  } else {
    t506 = 1.0E-6;
  }

  if (X[67ULL] + t513 >= Steam_Generator_Rth_liq + X[67ULL]) {
    t478 = Steam_Generator_Rth_liq + X[67ULL];
    t502 = X[67ULL] + t513;
    Steam_Generator_two_phase_fluid_v_sat_vap = (1.000001 / (t478 == 0.0 ?
      1.0E-16 : t478) - 0.999999 / (t502 == 0.0 ? 1.0E-16 : t502)) * X[12ULL];
  } else {
    t301_idx_0 = X[67ULL] + t513;
    t492 = Steam_Generator_Rth_liq + X[67ULL];
    Steam_Generator_two_phase_fluid_v_sat_vap = (1.000001 / (t301_idx_0 == 0.0 ?
      1.0E-16 : t301_idx_0) - 0.999999 / (t492 == 0.0 ? 1.0E-16 : t492)) * X
      [12ULL];
  }

  Steam_Generator_Rth_liq = Steam_Generator_two_phase_fluid_v_sat_vap <= 15.0 ?
    Steam_Generator_two_phase_fluid_v_sat_vap : 15.0;
  t513 = (t525 - t534) / (t360 == 0.0 ? 1.0E-16 : t360);
  intrm_sf_mf_477 = (t534 < t525);
  t478 = (1.0 - pmf_exp(-Steam_Generator_Rth_liq)) * X[66ULL];
  t502 = pmf_exp(-Steam_Generator_Rth_liq) * t506 + t520;
  Steam_Generator_two_phase_fluid_v_sat_vap = t478 / (t502 == 0.0 ? 1.0E-16 :
    t502);
  intrm_sf_mf_479 = (Steam_Generator_two_phase_fluid_v_sat_vap < t513 * 1000.0);
  intrm_sf_mf_482 = (t534 <= t525);
  if (intrm_sf_mf_485) {
    t507 = intrm_sf_mf_495 ? 0.0 : (real_T)!intrm_sf_mf_477;
  } else if (intrm_sf_mf_484) {
    if (intrm_sf_mf_497) {
      if (intrm_sf_mf_479) {
        t502 = X[66ULL] - t520 * t513 * 1000.0;
        t301_idx_0 = pmf_log((t506 * t513 * 1000.0 + X[66ULL]) / (t502 == 0.0 ?
          1.0E-16 : t502));
        t507 = t301_idx_0 / (Steam_Generator_Rth_liq == 0.0 ? 1.0E-16 :
                             Steam_Generator_Rth_liq);
      } else {
        t507 = 1.0;
      }
    } else {
      t507 = 0.0;
    }
  } else {
    t507 = intrm_sf_mf_495 ? 0.0 : (real_T)!intrm_sf_mf_482;
  }

  Steam_Generator_Rth_liq = (1.0 - Condenser_UA_mix) - t507;
  t520 = t366 / (t367 == 0.0 ? 1.0E-16 : t367) / (t347 == 0.0 ? 1.0E-16 : t347);
  t506 = X[13ULL] / (t367 == 0.0 ? 1.0E-16 : t367);
  t366 = t506 <= 15.0 ? t506 : 15.0;
  if (intrm_sf_mf_485) {
    if (intrm_sf_mf_495) {
      if (intrm_sf_mf_463) {
        t506 = (t351 - 1.0) * intrm_sf_mf_61 * 1000.0 + X[66ULL];
      } else {
        t506 = (t351 * t357 + X[66ULL]) - intrm_sf_mf_61 * 1000.0;
      }
    } else if (intrm_sf_mf_477) {
      t506 = X[66ULL];
    } else {
      t506 = (t349 * Steam_Generator_two_phase_fluid_v_sat_vap + X[66ULL]) -
        t513 * 1000.0;
    }
  } else if (intrm_sf_mf_484) {
    if (intrm_sf_mf_497) {
      if (intrm_sf_mf_479) {
        t506 = (t349 - 1.0) * t513 * 1000.0 + X[66ULL];
      } else {
        t506 = (t349 * Steam_Generator_two_phase_fluid_v_sat_vap + X[66ULL]) -
          t513 * 1000.0;
      }
    } else if (intrm_sf_mf_496) {
      t506 = X[66ULL];
    } else {
      t506 = (t351 * t357 + X[66ULL]) - intrm_sf_mf_61 * 1000.0;
    }
  } else if (intrm_sf_mf_495) {
    t506 = (t351 * t357 + X[66ULL]) - intrm_sf_mf_61 * 1000.0;
  } else if (intrm_sf_mf_482) {
    t506 = X[66ULL];
  } else {
    t506 = (t349 * Steam_Generator_two_phase_fluid_v_sat_vap + X[66ULL]) - t513 *
      1000.0;
  }

  if (intrm_sf_mf_485) {
    if (intrm_sf_mf_495) {
      if (intrm_sf_mf_463) {
        intrm_sf_mf_61 = intrm_sf_mf_511;
      } else {
        intrm_sf_mf_61 = t347 * t357 * 0.001 + t534;
      }
    } else if (intrm_sf_mf_477) {
      intrm_sf_mf_61 = t534;
    } else {
      intrm_sf_mf_61 = t360 * Steam_Generator_two_phase_fluid_v_sat_vap * 0.001
        + t534;
    }
  } else if (intrm_sf_mf_484) {
    if (intrm_sf_mf_497) {
      if (intrm_sf_mf_479) {
        intrm_sf_mf_61 = t525;
      } else {
        intrm_sf_mf_61 = t360 * Steam_Generator_two_phase_fluid_v_sat_vap *
          0.001 + t534;
      }
    } else if (intrm_sf_mf_496) {
      intrm_sf_mf_61 = t534;
    } else {
      intrm_sf_mf_61 = t347 * t357 * 0.001 + t534;
    }
  } else if (intrm_sf_mf_495) {
    intrm_sf_mf_61 = t347 * t357 * 0.001 + t534;
  } else if (intrm_sf_mf_482) {
    intrm_sf_mf_61 = t534;
  } else {
    intrm_sf_mf_61 = t360 * Steam_Generator_two_phase_fluid_v_sat_vap * 0.001 +
      t534;
  }

  t347 = intrm_sf_mf_511 - intrm_sf_mf_61;
  t349 = t525 - intrm_sf_mf_61;
  t478 = (pmf_exp(t366 * Steam_Generator_Rth_liq) - 1.0) * t506;
  t351 = t478 / (t520 == 0.0 ? 1.0E-16 : t520);
  if (intrm_sf_mf_485) {
    if (intrm_sf_mf_61 < t525) {
      if (t351 * 0.001 > t349) {
        t478 = t520 * t349 * 1000.0 + t506;
        t502 = -pmf_log(t506 / (t478 == 0.0 ? 1.0E-16 : t478));
        intrm_sf_mf_61 = t502 / (t366 == 0.0 ? 1.0E-16 : t366);
      } else {
        intrm_sf_mf_61 = Steam_Generator_Rth_liq;
      }
    } else {
      intrm_sf_mf_61 = 0.0;
    }
  } else if (intrm_sf_mf_484) {
    if (intrm_sf_mf_61 > intrm_sf_mf_511) {
      if (t351 * 0.001 < t347) {
        t301_idx_0 = t520 * t347 * 1000.0 + t506;
        t492 = -pmf_log(t506 / (t301_idx_0 == 0.0 ? 1.0E-16 : t301_idx_0));
        intrm_sf_mf_61 = t492 / (t366 == 0.0 ? 1.0E-16 : t366);
      } else {
        intrm_sf_mf_61 = Steam_Generator_Rth_liq;
      }
    } else {
      intrm_sf_mf_61 = 0.0;
    }
  } else {
    intrm_sf_mf_61 = Steam_Generator_Rth_liq;
  }

  t347 = Steam_Generator_Rth_liq - intrm_sf_mf_61;
  t349 = Condenser_UA_mix + (intrm_sf_mf_485 ? 0.0 : intrm_sf_mf_484 ? t347 :
    0.0);
  t347 = t507 + (intrm_sf_mf_485 ? t347 : 0.0);
  tlu2_2d_linear_nearest_value(&lb_efOut[0ULL], &t24.mField0[0ULL],
    &t24.mField2[0ULL], &t22.mField0[0ULL], &t22.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t46[0ULL], &t49[0ULL], &t33[0ULL]);
  t301_idx_0 = lb_efOut[0];
  Condenser_UA_mix = t301_idx_0;
  tlu2_2d_linear_nearest_value(&mb_efOut[0ULL], &t27.mField0[0ULL],
    &t27.mField2[0ULL], &t22.mField0[0ULL], &t22.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t46[0ULL], &t49[0ULL], &t33[0ULL]);
  t301_idx_0 = mb_efOut[0];
  Condenser_UA_mix = (Condenser_UA_mix + t301_idx_0) / 2.0;
  t502 = Condenser_UA_mix * 0.11700000000000003;
  Condenser_UA_mix = t340 * 0.022 / (t502 == 0.0 ? 1.0E-16 : t502);
  t340 = pmf_sqrt(Condenser_UA_mix * Condenser_UA_mix + 100.0);
  Condenser_UA_mix = t340 * 35.580755206091233;
  Steam_Generator_Rth_liq = t340 * pmf_sqrt(t340) * pmf_sqrt(pmf_sqrt(t340)) *
    2.0794784986224468;
  if (t340 > 250000.0) {
    t351 = (t340 - 250000.0) / 325000.0 + 1.0;
  } else {
    t351 = 1.0;
  }

  t340 = 1.0 - pmf_exp(-(t340 + 200.0) / 1000.0);
  t534 = Steam_Generator_Rth_liq * t351 * t340 + Condenser_UA_mix;
  tlu2_2d_linear_nearest_value(&nb_efOut[0ULL], &t24.mField0[0ULL],
    &t24.mField2[0ULL], &t22.mField0[0ULL], &t22.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField13, &t46[0ULL], &t49[0ULL], &t33[0ULL]);
  t301_idx_0 = nb_efOut[0];
  Condenser_UA_mix = t301_idx_0;
  tlu2_2d_linear_nearest_value(&ob_efOut[0ULL], &t27.mField0[0ULL],
    &t27.mField2[0ULL], &t22.mField0[0ULL], &t22.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField13, &t46[0ULL], &t49[0ULL], &t33[0ULL]);
  t301_idx_0 = ob_efOut[0];
  Condenser_UA_mix = (Condenser_UA_mix + t301_idx_0) / 2.0;
  Condenser_UA_mix = pmf_pow(t534 * Condenser_UA_mix * 0.53047999688613334,
    0.33333333333333331) * 0.404;
  t478 = Condenser_UA_mix * t335 / 0.022 * 5.1836278784231586;
  t335 = 1.0 / (t478 == 0.0 ? 1.0E-16 : t478);
  Condenser_UA_mix = intrm_sf_mf_590 > 0.5 ? intrm_sf_mf_590 : 0.5;
  t478 = t338 * 0.02;
  t502 = Steam_Generator_two_phase_fluid_hc_vap * 0.018849555921538759;
  t340 = t478 / (t502 == 0.0 ? 1.0E-16 : t502);
  intrm_sf_mf_590 = t340 > 1000.0 ? t340 : 1000.0;
  t502 = pmf_log10(6.9 / (intrm_sf_mf_590 == 0.0 ? 1.0E-16 : intrm_sf_mf_590) +
                   7.9545220244797035E-5) * pmf_log10(6.9 / (intrm_sf_mf_590 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_590) + 7.9545220244797035E-5) * 3.24;
  Steam_Generator_two_phase_fluid_hc_vap = 1.0 / (t502 == 0.0 ? 1.0E-16 : t502);
  t301_idx_0 = (pmf_pow(Condenser_UA_mix, 0.66666666666666663) - 1.0) * pmf_sqrt
    (Steam_Generator_two_phase_fluid_hc_vap / 8.0) * 12.7 + 1.0;
  Condenser_UA_mix = (intrm_sf_mf_590 - 1000.0) *
    (Steam_Generator_two_phase_fluid_hc_vap / 8.0) * Condenser_UA_mix /
    (t301_idx_0 == 0.0 ? 1.0E-16 : t301_idx_0);
  intrm_sf_mf_590 = (t340 - 2000.0) / 2000.0;
  Steam_Generator_two_phase_fluid_hc_vap = intrm_sf_mf_590 * intrm_sf_mf_590 *
    3.0 - intrm_sf_mf_590 * intrm_sf_mf_590 * intrm_sf_mf_590 * 2.0;
  if (t340 <= 2000.0) {
    intrm_sf_mf_590 = 3.66;
  } else if (t340 >= 4000.0) {
    intrm_sf_mf_590 = Condenser_UA_mix;
  } else {
    intrm_sf_mf_590 = (1.0 - Steam_Generator_two_phase_fluid_hc_vap) * 3.66 +
      Condenser_UA_mix * Steam_Generator_two_phase_fluid_hc_vap;
  }

  t502 = t345 * intrm_sf_mf_590 / 0.02 * 5.6548667764616276;
  t340 = t335 + 1.0 / (t502 == 0.0 ? 1.0E-16 : t502);
  tlu2_linear_nearest_prelookup(&pb_efOut.mField0[0ULL], &pb_efOut.mField1[0ULL],
    &pb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t323[0ULL],
    &t61[0ULL], &t33[0ULL]);
  t13 = pb_efOut;
  tlu2_2d_linear_nearest_value(&qb_efOut[0ULL], &t13.mField0[0ULL],
    &t13.mField2[0ULL], &t21.mField0[0ULL], &t21.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t61[0ULL], &t32[0ULL], &t33[0ULL]);
  t323[0] = qb_efOut[0];
  Condenser_UA_mix = t323[0ULL];
  tlu2_2d_linear_nearest_value(&rb_efOut[0ULL], &t13.mField0[0ULL],
    &t13.mField2[0ULL], &t21.mField0[0ULL], &t21.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t61[0ULL], &t32[0ULL], &t33[0ULL]);
  t323[0] = rb_efOut[0];
  intrm_sf_mf_590 = t323[0ULL];
  t502 = intrm_sf_mf_590 * 0.018849555921538759;
  intrm_sf_mf_590 = t478 / (t502 == 0.0 ? 1.0E-16 : t502);
  t345 = intrm_sf_mf_590 > 1.0 ? intrm_sf_mf_590 : 1.0;
  intrm_sf_mf_590 = t342 <= 0.0 ? 0.0 : t342 >= 1.0 ? 1.0 : t342;
  t342 = intrm_sf_mf_91 <= 0.0 ? 0.0 : intrm_sf_mf_91 >= 1.0 ? 1.0 :
    intrm_sf_mf_91;
  if (t342 - intrm_sf_mf_590 > 1.0E-6) {
    intrm_sf_mf_91 = t342 - intrm_sf_mf_590;
  } else if (intrm_sf_mf_590 - t342 > 1.0E-6) {
    intrm_sf_mf_91 = intrm_sf_mf_590 - t342;
  } else {
    intrm_sf_mf_91 = 1.0E-6;
  }

  if (t358 / (t354 == 0.0 ? 1.0E-16 : t354) > 1.000001) {
    Steam_Generator_two_phase_fluid_hc_vap = pmf_sqrt(t358 / (t354 == 0.0 ?
      1.0E-16 : t354));
  } else {
    Steam_Generator_two_phase_fluid_hc_vap = 1.0000004999998751;
  }

  Steam_Generator_Rth_liq = intrm_sf_mf_590 <= t342 ? intrm_sf_mf_590 : t342;
  t502 = pmf_pow(t345, 0.8) * pmf_pow(Condenser_UA_mix, 0.33) * 0.05;
  t492 = (pmf_pow((intrm_sf_mf_91 + Steam_Generator_Rth_liq) *
                  (Steam_Generator_two_phase_fluid_hc_vap - 1.0) + 1.0, 1.8) -
          pmf_pow((Steam_Generator_two_phase_fluid_hc_vap - 1.0) *
                  Steam_Generator_Rth_liq + 1.0, 1.8)) * (t502 / 1.8 /
    (Steam_Generator_two_phase_fluid_hc_vap - 1.0 == 0.0 ? 1.0E-16 :
     Steam_Generator_two_phase_fluid_hc_vap - 1.0));
  Condenser_UA_mix = t492 / (intrm_sf_mf_91 == 0.0 ? 1.0E-16 : intrm_sf_mf_91);
  t342 = Condenser_UA_mix > 3.66 ? Condenser_UA_mix : 3.66;
  tlu2_2d_linear_nearest_value(&sb_efOut[0ULL], &t13.mField0[0ULL],
    &t13.mField2[0ULL], &t21.mField0[0ULL], &t21.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t61[0ULL], &t32[0ULL], &t33[0ULL]);
  t323[0] = sb_efOut[0];
  Condenser_UA_mix = t323[0ULL];
  t502 = t342 * Condenser_UA_mix / 0.02 * 5.6548667764616276;
  t342 = t335 + 1.0 / (t502 == 0.0 ? 1.0E-16 : t502);
  Condenser_UA_mix = Steam_Generator_thermal_liquid_Cdot > 0.5 ?
    Steam_Generator_thermal_liquid_Cdot : 0.5;
  t502 = t536 * 0.018849555921538759;
  intrm_sf_mf_590 = t478 / (t502 == 0.0 ? 1.0E-16 : t502);
  intrm_sf_mf_91 = intrm_sf_mf_590 > 1000.0 ? intrm_sf_mf_590 : 1000.0;
  t478 = pmf_log10(6.9 / (intrm_sf_mf_91 == 0.0 ? 1.0E-16 : intrm_sf_mf_91) +
                   7.9545220244797035E-5) * pmf_log10(6.9 / (intrm_sf_mf_91 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_91) + 7.9545220244797035E-5) * 3.24;
  t345 = 1.0 / (t478 == 0.0 ? 1.0E-16 : t478);
  t502 = (pmf_pow(Condenser_UA_mix, 0.66666666666666663) - 1.0) * pmf_sqrt(t345 /
    8.0) * 12.7 + 1.0;
  Condenser_UA_mix = (intrm_sf_mf_91 - 1000.0) * (t345 / 8.0) * Condenser_UA_mix
    / (t502 == 0.0 ? 1.0E-16 : t502);
  intrm_sf_mf_91 = (intrm_sf_mf_590 - 2000.0) / 2000.0;
  t345 = intrm_sf_mf_91 * intrm_sf_mf_91 * 3.0 - intrm_sf_mf_91 * intrm_sf_mf_91
    * intrm_sf_mf_91 * 2.0;
  if (intrm_sf_mf_590 <= 2000.0) {
    intrm_sf_mf_91 = 3.66;
  } else if (intrm_sf_mf_590 >= 4000.0) {
    intrm_sf_mf_91 = Condenser_UA_mix;
  } else {
    intrm_sf_mf_91 = (1.0 - t345) * 3.66 + Condenser_UA_mix * t345;
  }

  t478 = t352 * intrm_sf_mf_91 / 0.02 * 5.6548667764616276;
  intrm_sf_mf_590 = t335 + 1.0 / (t478 == 0.0 ? 1.0E-16 : t478);
  t335 = 1.0 / (t340 == 0.0 ? 1.0E-16 : t340);
  Condenser_UA_mix = 1.0 / (t342 == 0.0 ? 1.0E-16 : t342);
  t340 = 1.0 / (intrm_sf_mf_590 == 0.0 ? 1.0E-16 : intrm_sf_mf_590);
  t333[0ULL] = X[57ULL];
  tlu2_linear_linear_prelookup(&tb_efOut.mField0[0ULL], &tb_efOut.mField1[0ULL],
    &tb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t333[0ULL],
    &t32[0ULL], &t33[0ULL]);
  t27 = tb_efOut;
  tlu2_1d_linear_linear_value(&ub_efOut[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t32[0ULL], &t33[0ULL]);
  t323[0] = ub_efOut[0];
  t342 = t323[0ULL];
  tlu2_1d_linear_linear_value(&vb_efOut[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t32[0ULL], &t33[0ULL]);
  t323[0] = vb_efOut[0];
  intrm_sf_mf_590 = t323[0ULL];
  if (X[58ULL] <= t342) {
    intrm_sf_mf_91 = X[58ULL] / (t342 == 0.0 ? 1.0E-16 : t342) - 1.0;
  } else if (X[58ULL] >= intrm_sf_mf_590) {
    intrm_sf_mf_91 = (X[58ULL] - 4000.0) / (4000.0 - intrm_sf_mf_590 == 0.0 ?
      1.0E-16 : 4000.0 - intrm_sf_mf_590) + 2.0;
  } else {
    t301_idx_0 = intrm_sf_mf_590 - t342;
    intrm_sf_mf_91 = (X[58ULL] - t342) / (t301_idx_0 == 0.0 ? 1.0E-16 :
      t301_idx_0);
  }

  t333[0ULL] = X[61ULL];
  tlu2_linear_linear_prelookup(&wb_efOut.mField0[0ULL], &wb_efOut.mField1[0ULL],
    &wb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t333[0ULL],
    &t32[0ULL], &t33[0ULL]);
  t30 = wb_efOut;
  tlu2_1d_linear_linear_value(&xb_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t32[0ULL], &t33[0ULL]);
  t323[0] = xb_efOut[0];
  t342 = t323[0ULL];
  tlu2_1d_linear_linear_value(&yb_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t32[0ULL], &t33[0ULL]);
  t323[0] = yb_efOut[0];
  intrm_sf_mf_590 = t323[0ULL];
  if (X[62ULL] <= t342) {
    t345 = X[62ULL] / (t342 == 0.0 ? 1.0E-16 : t342) - 1.0;
  } else if (X[62ULL] >= intrm_sf_mf_590) {
    t345 = (X[62ULL] - 4000.0) / (4000.0 - intrm_sf_mf_590 == 0.0 ? 1.0E-16 :
      4000.0 - intrm_sf_mf_590) + 2.0;
  } else {
    t301_idx_0 = intrm_sf_mf_590 - t342;
    t345 = (X[62ULL] - t342) / (t301_idx_0 == 0.0 ? 1.0E-16 : t301_idx_0);
  }

  if (X[178ULL] <= 1116.244310015441) {
    t342 = X[178ULL] / 1116.244310015441 - 1.0;
  } else if (X[178ULL] >= 2599.6003881396355) {
    t342 = (X[178ULL] - 4000.0) / 1400.3996118603645 + 2.0;
  } else {
    t342 = (X[178ULL] - 1116.244310015441) / 1483.3560781241945;
  }

  t333[0ULL] = X[126ULL];
  tlu2_linear_linear_prelookup(&ac_efOut.mField0[0ULL], &ac_efOut.mField1[0ULL],
    &ac_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t333[0ULL],
    &t32[0ULL], &t33[0ULL]);
  t30 = ac_efOut;
  tlu2_1d_linear_linear_value(&bc_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t32[0ULL], &t33[0ULL]);
  t323[0] = bc_efOut[0];
  intrm_sf_mf_434 = t323[0ULL];
  tlu2_1d_linear_linear_value(&cc_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t32[0ULL], &t33[0ULL]);
  t323[0] = cc_efOut[0];
  Steam_Generator_UA_liq = t323[0ULL];
  if (X[127ULL] <= intrm_sf_mf_434) {
    intrm_sf_mf_590 = X[127ULL] / (intrm_sf_mf_434 == 0.0 ? 1.0E-16 :
      intrm_sf_mf_434) - 1.0;
  } else if (X[127ULL] >= Steam_Generator_UA_liq) {
    intrm_sf_mf_590 = (X[127ULL] - 4000.0) / (4000.0 - Steam_Generator_UA_liq ==
      0.0 ? 1.0E-16 : 4000.0 - Steam_Generator_UA_liq) + 2.0;
  } else {
    t301_idx_0 = Steam_Generator_UA_liq - intrm_sf_mf_434;
    intrm_sf_mf_590 = (X[127ULL] - intrm_sf_mf_434) / (t301_idx_0 == 0.0 ?
      1.0E-16 : t301_idx_0);
  }

  if (X[189ULL] <= intrm_sf_mf_500) {
    intrm_sf_mf_434 = X[189ULL] / (intrm_sf_mf_500 == 0.0 ? 1.0E-16 :
      intrm_sf_mf_500) - 1.0;
  } else if (X[189ULL] >= Steam_Generator_two_phase_fluid_Cdot_threshold) {
    intrm_sf_mf_434 = (X[189ULL] - 4000.0) / (4000.0 -
      Steam_Generator_two_phase_fluid_Cdot_threshold == 0.0 ? 1.0E-16 : 4000.0 -
      Steam_Generator_two_phase_fluid_Cdot_threshold) + 2.0;
  } else {
    t301_idx_0 = Steam_Generator_two_phase_fluid_Cdot_threshold -
      intrm_sf_mf_500;
    intrm_sf_mf_434 = (X[189ULL] - intrm_sf_mf_500) / (t301_idx_0 == 0.0 ?
      1.0E-16 : t301_idx_0);
  }

  t333[0ULL] = X[30ULL];
  tlu2_linear_nearest_prelookup(&dc_efOut.mField0[0ULL], &dc_efOut.mField1[0ULL],
    &dc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t333[0ULL],
    &t46[0ULL], &t33[0ULL]);
  t20 = dc_efOut;
  t333[0ULL] = X[31ULL];
  tlu2_linear_nearest_prelookup(&ec_efOut.mField0[0ULL], &ec_efOut.mField1[0ULL],
    &ec_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t333[0ULL],
    &t49[0ULL], &t33[0ULL]);
  t17 = ec_efOut;
  tlu2_2d_linear_nearest_value(&fc_efOut[0ULL], &t20.mField0[0ULL],
    &t20.mField2[0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField5, &t46[0ULL], &t49[0ULL], &t33[0ULL]);
  t323[0] = fc_efOut[0];
  Steam_Generator_UA_liq = t323[0ULL];
  t333[0ULL] = X[32ULL];
  tlu2_linear_nearest_prelookup(&gc_efOut.mField0[0ULL], &gc_efOut.mField1[0ULL],
    &gc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t333[0ULL],
    &t46[0ULL], &t33[0ULL]);
  t22 = gc_efOut;
  tlu2_2d_linear_nearest_value(&hc_efOut[0ULL], &t22.mField0[0ULL],
    &t22.mField2[0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField5, &t46[0ULL], &t49[0ULL], &t33[0ULL]);
  t323[0] = hc_efOut[0];
  intrm_sf_mf_500 = t323[0ULL];
  Steam_Generator_UA_liq = (Steam_Generator_UA_liq + intrm_sf_mf_500) / 2.0;
  intrm_sf_mf_500 = Steam_Generator_UA_liq * 0.42000000000000004 / 0.018;
  t333[0ULL] = X[33ULL];
  tlu2_linear_nearest_prelookup(&ic_efOut.mField0[0ULL], &ic_efOut.mField1[0ULL],
    &ic_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t333[0ULL],
    &t32[0ULL], &t33[0ULL]);
  t27 = ic_efOut;
  tlu2_2d_linear_nearest_value(&jc_efOut[0ULL], &t18.mField0[0ULL],
    &t18.mField2[0ULL], &t27.mField0[0ULL], &t27.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t61[0ULL], &t32[0ULL], &t33[0ULL]);
  t323[0] = jc_efOut[0];
  Steam_Generator_two_phase_fluid_Cdot_threshold = t323[0ULL];
  Steam_Generator_two_phase_fluid_Cdot_threshold =
    Steam_Generator_two_phase_fluid_Cdot_threshold * 0.036815538909255395 /
    0.025;
  t333[0ULL] = X[30ULL];
  tlu2_linear_linear_prelookup(&kc_efOut.mField0[0ULL], &kc_efOut.mField1[0ULL],
    &kc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t333[0ULL],
    &t46[0ULL], &t33[0ULL]);
  t18 = kc_efOut;
  t333[0ULL] = X[31ULL];
  tlu2_linear_linear_prelookup(&lc_efOut.mField0[0ULL], &lc_efOut.mField1[0ULL],
    &lc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t333[0ULL],
    &t49[0ULL], &t33[0ULL]);
  t30 = lc_efOut;
  tlu2_2d_linear_linear_value(&mc_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t30.mField0[0ULL], &t30.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField9, &t46[0ULL], &t49[0ULL], &t33[0ULL]);
  t323[0] = mc_efOut[0];
  Steam_Generator_two_phase_fluid_hc_vap = t323[0ULL];
  t333[0ULL] = X[32ULL];
  tlu2_linear_linear_prelookup(&nc_efOut.mField0[0ULL], &nc_efOut.mField1[0ULL],
    &nc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t333[0ULL],
    &t46[0ULL], &t33[0ULL]);
  t18 = nc_efOut;
  tlu2_2d_linear_linear_value(&oc_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t30.mField0[0ULL], &t30.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField9, &t46[0ULL], &t49[0ULL], &t33[0ULL]);
  t323[0] = oc_efOut[0];
  Steam_Generator_Rth_liq = t323[0ULL];
  Steam_Generator_two_phase_fluid_hc_vap =
    (Steam_Generator_two_phase_fluid_hc_vap + Steam_Generator_Rth_liq) / 2.0;
  Steam_Generator_Rth_liq = (X[166ULL] - -3.5) / 2.0;
  Steam_Generator_thermal_liquid_Cdot = tanh
    (Steam_Generator_two_phase_fluid_hc_vap * Steam_Generator_Rth_liq * 3.0 /
     (intrm_sf_mf_500 == 0.0 ? 1.0E-16 : intrm_sf_mf_500)) *
    Steam_Generator_two_phase_fluid_hc_vap * Steam_Generator_Rth_liq;
  t333[0ULL] = X[33ULL];
  tlu2_linear_linear_prelookup(&pc_efOut.mField0[0ULL], &pc_efOut.mField1[0ULL],
    &pc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t333[0ULL],
    &t32[0ULL], &t33[0ULL]);
  t18 = pc_efOut;
  tlu2_1d_linear_linear_value(&qc_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t32[0ULL], &t33[0ULL]);
  t323[0] = qc_efOut[0];
  intrm_sf_mf_500 = t323[0ULL];
  tlu2_1d_linear_linear_value(&rc_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t32[0ULL], &t33[0ULL]);
  t323[0] = rc_efOut[0];
  Steam_Generator_two_phase_fluid_hc_vap = t323[0ULL];
  if (X[34ULL] <= intrm_sf_mf_500) {
    t351 = X[34ULL] / (intrm_sf_mf_500 == 0.0 ? 1.0E-16 : intrm_sf_mf_500) - 1.0;
  } else if (X[34ULL] >= Steam_Generator_two_phase_fluid_hc_vap) {
    t351 = (X[34ULL] - 4000.0) / (4000.0 -
      Steam_Generator_two_phase_fluid_hc_vap == 0.0 ? 1.0E-16 : 4000.0 -
      Steam_Generator_two_phase_fluid_hc_vap) + 2.0;
  } else {
    t301_idx_0 = Steam_Generator_two_phase_fluid_hc_vap - intrm_sf_mf_500;
    t351 = (X[34ULL] - intrm_sf_mf_500) / (t301_idx_0 == 0.0 ? 1.0E-16 :
      t301_idx_0);
  }

  if (X[35ULL] <= intrm_sf_mf_500) {
    t536 = X[35ULL] / (intrm_sf_mf_500 == 0.0 ? 1.0E-16 : intrm_sf_mf_500) - 1.0;
  } else if (X[35ULL] >= Steam_Generator_two_phase_fluid_hc_vap) {
    t536 = (X[35ULL] - 4000.0) / (4000.0 -
      Steam_Generator_two_phase_fluid_hc_vap == 0.0 ? 1.0E-16 : 4000.0 -
      Steam_Generator_two_phase_fluid_hc_vap) + 2.0;
  } else {
    t301_idx_0 = Steam_Generator_two_phase_fluid_hc_vap - intrm_sf_mf_500;
    t536 = (X[35ULL] - intrm_sf_mf_500) / (t301_idx_0 == 0.0 ? 1.0E-16 :
      t301_idx_0);
  }

  t333[0ULL] = ((t351 < 0.0 ? t351 : 0.0) + (t536 < 0.0 ? t536 : 0.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&sc_efOut.mField0[0ULL], &sc_efOut.mField1[0ULL],
    &sc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t333[0ULL],
    &t61[0ULL], &t33[0ULL]);
  t21 = sc_efOut;
  tlu2_2d_linear_nearest_value(&tc_efOut[0ULL], &t21.mField0[0ULL],
    &t21.mField2[0ULL], &t27.mField0[0ULL], &t27.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t61[0ULL], &t32[0ULL], &t33[0ULL]);
  t323[0] = tc_efOut[0];
  t352 = t323[0ULL];
  tlu2_2d_linear_nearest_value(&uc_efOut[0ULL], &t21.mField0[0ULL],
    &t21.mField2[0ULL], &t27.mField0[0ULL], &t27.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t61[0ULL], &t32[0ULL], &t33[0ULL]);
  t323[0] = uc_efOut[0];
  t354 = t323[0ULL];
  tlu2_2d_linear_nearest_value(&vc_efOut[0ULL], &t21.mField0[0ULL],
    &t21.mField2[0ULL], &t27.mField0[0ULL], &t27.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t61[0ULL], &t32[0ULL], &t33[0ULL]);
  t323[0] = vc_efOut[0];
  t534 = t323[0ULL];
  intrm_sf_mf_511 = t352 * t354 / (t534 == 0.0 ? 1.0E-16 : t534);
  if (-X[192ULL] > 0.0) {
    t358 = -X[192ULL];
  } else {
    t358 = 0.0;
  }

  t525 = tanh((X[172ULL] - (-X[192ULL])) * intrm_sf_mf_511 * 3.0 /
              (Steam_Generator_two_phase_fluid_Cdot_threshold == 0.0 ? 1.0E-16 :
               Steam_Generator_two_phase_fluid_Cdot_threshold));
  Steam_Generator_two_phase_fluid_Cdot_threshold = (t525 + 1.0) / 2.0 * (X
    [172ULL] > 0.0 ? X[172ULL] : 0.0) + (1.0 - t525) / 2.0 * t358;
  t357 = X[37ULL] >= 0.0 ? X[37ULL] : 0.0;
  t358 = X[38ULL] >= 0.0 ? X[38ULL] : 0.0;
  t502 = t357 + X[198ULL];
  t301_idx_0 = (t357 + X[198ULL]) * (1.0 - pmf_exp(-X[36ULL] / (t502 == 0.0 ?
    1.0E-16 : t502)));
  t478 = intrm_sf_mf_511 * t358 + X[198ULL];
  t525 = t301_idx_0 / (t478 == 0.0 ? 1.0E-16 : t478);
  t360 = t525 <= 15.0 ? t525 : 15.0;
  t333[0ULL] = t351;
  tlu2_linear_linear_prelookup(&wc_efOut.mField0[0ULL], &wc_efOut.mField1[0ULL],
    &wc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t333[0ULL],
    &t61[0ULL], &t33[0ULL]);
  t30 = wc_efOut;
  tlu2_2d_linear_linear_value(&xc_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t61[0ULL], &t32[0ULL], &t33[0ULL]);
  t323[0] = xc_efOut[0];
  t525 = t323[0ULL];
  t513 = X[33ULL] * t525 * 100.0 + X[34ULL];
  tlu2_2d_linear_linear_value(&yc_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t61[0ULL], &t32[0ULL], &t33[0ULL]);
  t323[0] = yc_efOut[0];
  t525 = t323[0ULL];
  t520 = X[33ULL] * t525 * 100.0 + intrm_sf_mf_500;
  intrm_sf_mf_500 = (t520 - t513) / (intrm_sf_mf_511 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_511);
  t506 = (1.0 - pmf_exp(-t360)) * X[197ULL];
  intrm_sf_mf_463 = (t506 > intrm_sf_mf_500 * 1000.0);
  intrm_sf_mf_495 = (t513 < t520);
  intrm_sf_mf_496 = (t513 > t520);
  tlu2_2d_linear_linear_value(&ad_efOut[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t61[0ULL], &t32[0ULL], &t33[0ULL]);
  t323[0] = ad_efOut[0];
  Steam_Generator_two_phase_fluid_v_sat_vap = t323[0ULL];
  t507 = X[33ULL] * Steam_Generator_two_phase_fluid_v_sat_vap * 100.0 +
    Steam_Generator_two_phase_fluid_hc_vap;
  intrm_sf_mf_497 = (t513 > t507);
  intrm_sf_mf_484 = (X[197ULL] < 0.0);
  intrm_sf_mf_485 = (X[197ULL] > 0.0);
  if (intrm_sf_mf_485) {
    if (intrm_sf_mf_495) {
      if (intrm_sf_mf_463) {
        t301_idx_0 = -pmf_log((X[197ULL] - intrm_sf_mf_500 * 1000.0) / (X[197ULL]
          == 0.0 ? 1.0E-16 : X[197ULL]));
        Steam_Generator_two_phase_fluid_hc_vap = t301_idx_0 / (t360 == 0.0 ?
          1.0E-16 : t360);
      } else {
        Steam_Generator_two_phase_fluid_hc_vap = 1.0;
      }
    } else {
      Steam_Generator_two_phase_fluid_hc_vap = 0.0;
    }
  } else {
    Steam_Generator_two_phase_fluid_hc_vap = intrm_sf_mf_484 ? intrm_sf_mf_497 ?
      0.0 : (real_T)!intrm_sf_mf_496 : (real_T)intrm_sf_mf_495;
  }

  t333[0ULL] = ((t351 > 1.0 ? t351 : 1.0) + (t536 > 1.0 ? t536 : 1.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&bd_efOut.mField0[0ULL], &bd_efOut.mField1[0ULL],
    &bd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t333[0ULL],
    &t61[0ULL], &t33[0ULL]);
  t30 = bd_efOut;
  tlu2_2d_linear_nearest_value(&cd_efOut[0ULL], &t30.mField0[0ULL],
    &t30.mField2[0ULL], &t27.mField0[0ULL], &t27.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t61[0ULL], &t32[0ULL], &t33[0ULL]);
  t333[0] = cd_efOut[0];
  t360 = t333[0ULL];
  tlu2_2d_linear_nearest_value(&dd_efOut[0ULL], &t30.mField0[0ULL],
    &t30.mField2[0ULL], &t27.mField0[0ULL], &t27.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t61[0ULL], &t32[0ULL], &t33[0ULL]);
  t333[0] = dd_efOut[0];
  t366 = t333[0ULL];
  tlu2_2d_linear_nearest_value(&ed_efOut[0ULL], &t30.mField0[0ULL],
    &t30.mField2[0ULL], &t27.mField0[0ULL], &t27.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t61[0ULL], &t32[0ULL], &t33[0ULL]);
  t333[0] = ed_efOut[0];
  t367 = t333[0ULL];
  t368 = t360 * t366 / (t367 == 0.0 ? 1.0E-16 : t367);
  t492 = (t357 + X[198ULL]) * (1.0 - pmf_exp(-X[39ULL] / (t502 == 0.0 ? 1.0E-16 :
    t502)));
  t301_idx_0 = X[198ULL] + t368 * t358;
  t358 = t492 / (t301_idx_0 == 0.0 ? 1.0E-16 : t301_idx_0);
  intrm_sf_mf_490 = t358 <= 15.0 ? t358 : 15.0;
  t358 = (t507 - t513) / (t368 == 0.0 ? 1.0E-16 : t368);
  intrm_sf_mf_477 = (t513 < t507);
  t370 = (1.0 - pmf_exp(-intrm_sf_mf_490)) * X[197ULL];
  intrm_sf_mf_479 = (t370 < t358 * 1000.0);
  intrm_sf_mf_482 = (t513 <= t507);
  if (intrm_sf_mf_485) {
    t371 = intrm_sf_mf_495 ? 0.0 : (real_T)!intrm_sf_mf_477;
  } else if (intrm_sf_mf_484) {
    if (intrm_sf_mf_497) {
      if (intrm_sf_mf_479) {
        t301_idx_0 = -pmf_log((X[197ULL] - t358 * 1000.0) / (X[197ULL] == 0.0 ?
          1.0E-16 : X[197ULL]));
        t371 = t301_idx_0 / (intrm_sf_mf_490 == 0.0 ? 1.0E-16 : intrm_sf_mf_490);
      } else {
        t371 = 1.0;
      }
    } else {
      t371 = 0.0;
    }
  } else {
    t371 = intrm_sf_mf_495 ? 0.0 : (real_T)!intrm_sf_mf_482;
  }

  intrm_sf_mf_490 = (1.0 - Steam_Generator_two_phase_fluid_hc_vap) - t371;
  t492 = (t357 + X[198ULL]) * (1.0 - pmf_exp(-X[40ULL] / (t502 == 0.0 ? 1.0E-16 :
    t502)));
  t502 = t478 / (intrm_sf_mf_511 == 0.0 ? 1.0E-16 : intrm_sf_mf_511);
  t357 = t492 / (t502 == 0.0 ? 1.0E-16 : t502);
  if (intrm_sf_mf_485) {
    if (intrm_sf_mf_495) {
      t301_idx_0 = X[197ULL] - intrm_sf_mf_500 * 1000.0;
    } else if (intrm_sf_mf_477) {
      t301_idx_0 = X[197ULL];
    } else {
      t301_idx_0 = X[197ULL] - t358 * 1000.0;
    }
  } else if (intrm_sf_mf_484) {
    if (intrm_sf_mf_497) {
      t301_idx_0 = X[197ULL] - t358 * 1000.0;
    } else if (intrm_sf_mf_496) {
      t301_idx_0 = X[197ULL];
    } else {
      t301_idx_0 = X[197ULL] - intrm_sf_mf_500 * 1000.0;
    }
  } else if (intrm_sf_mf_495) {
    t301_idx_0 = intrm_sf_mf_500 * 1000.0 + X[197ULL];
  } else if (intrm_sf_mf_482) {
    t301_idx_0 = X[197ULL];
  } else {
    t301_idx_0 = t358 * 1000.0 + X[197ULL];
  }

  if (intrm_sf_mf_485) {
    if (intrm_sf_mf_495) {
      if (intrm_sf_mf_463) {
        intrm_sf_mf_500 = t520;
      } else {
        intrm_sf_mf_500 = intrm_sf_mf_511 * t506 * 0.001 + t513;
      }
    } else if (intrm_sf_mf_477) {
      intrm_sf_mf_500 = t513;
    } else {
      intrm_sf_mf_500 = t368 * t370 * 0.001 + t513;
    }
  } else if (intrm_sf_mf_484) {
    if (intrm_sf_mf_497) {
      if (intrm_sf_mf_479) {
        intrm_sf_mf_500 = t507;
      } else {
        intrm_sf_mf_500 = t368 * t370 * 0.001 + t513;
      }
    } else if (intrm_sf_mf_496) {
      intrm_sf_mf_500 = t513;
    } else {
      intrm_sf_mf_500 = intrm_sf_mf_511 * t506 * 0.001 + t513;
    }
  } else if (intrm_sf_mf_495) {
    intrm_sf_mf_500 = intrm_sf_mf_511 * t506 * 0.001 + t513;
  } else if (intrm_sf_mf_482) {
    intrm_sf_mf_500 = t513;
  } else {
    intrm_sf_mf_500 = t368 * t370 * 0.001 + t513;
  }

  intrm_sf_mf_511 = t520 - intrm_sf_mf_500;
  t358 = t507 - intrm_sf_mf_500;
  t513 = t357 * t301_idx_0 * intrm_sf_mf_490;
  if (intrm_sf_mf_485) {
    if (intrm_sf_mf_500 < t507) {
      if (t513 * 0.001 > t358) {
        intrm_sf_mf_500 = t358 / (t301_idx_0 == 0.0 ? 1.0E-16 : t301_idx_0) /
          (t357 == 0.0 ? 1.0E-16 : t357) * 1000.0;
      } else {
        intrm_sf_mf_500 = intrm_sf_mf_490;
      }
    } else {
      intrm_sf_mf_500 = 0.0;
    }
  } else if (intrm_sf_mf_484) {
    if (intrm_sf_mf_500 > t520) {
      if (t513 * 0.001 < intrm_sf_mf_511) {
        intrm_sf_mf_500 = intrm_sf_mf_511 / (t301_idx_0 == 0.0 ? 1.0E-16 :
          t301_idx_0) / (t357 == 0.0 ? 1.0E-16 : t357) * 1000.0;
      } else {
        intrm_sf_mf_500 = intrm_sf_mf_490;
      }
    } else {
      intrm_sf_mf_500 = 0.0;
    }
  } else {
    intrm_sf_mf_500 = intrm_sf_mf_490;
  }

  intrm_sf_mf_511 = intrm_sf_mf_490 - intrm_sf_mf_500;
  t358 = Steam_Generator_two_phase_fluid_hc_vap + (intrm_sf_mf_485 ? 0.0 :
    intrm_sf_mf_484 ? intrm_sf_mf_511 : 0.0);
  intrm_sf_mf_511 = t371 + (intrm_sf_mf_485 ? intrm_sf_mf_511 : 0.0);
  tlu2_2d_linear_nearest_value(&fd_efOut[0ULL], &t20.mField0[0ULL],
    &t20.mField2[0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t46[0ULL], &t49[0ULL], &t33[0ULL]);
  t333[0] = fd_efOut[0];
  Steam_Generator_two_phase_fluid_hc_vap = t333[0ULL];
  tlu2_2d_linear_nearest_value(&gd_efOut[0ULL], &t22.mField0[0ULL],
    &t22.mField2[0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t46[0ULL], &t49[0ULL], &t33[0ULL]);
  t333[0] = gd_efOut[0];
  t357 = t333[0ULL];
  Steam_Generator_two_phase_fluid_hc_vap =
    (Steam_Generator_two_phase_fluid_hc_vap + t357) / 2.0;
  t507 = Steam_Generator_two_phase_fluid_hc_vap * 0.42000000000000004;
  Steam_Generator_two_phase_fluid_hc_vap = Steam_Generator_Rth_liq * 0.018 /
    (t507 == 0.0 ? 1.0E-16 : t507);
  Steam_Generator_Rth_liq = pmf_sqrt(Steam_Generator_two_phase_fluid_hc_vap *
    Steam_Generator_two_phase_fluid_hc_vap + 100.0);
  Steam_Generator_two_phase_fluid_hc_vap = Steam_Generator_Rth_liq *
    29.915749795368463;
  t357 = Steam_Generator_Rth_liq * pmf_sqrt(Steam_Generator_Rth_liq) * pmf_sqrt
    (pmf_sqrt(Steam_Generator_Rth_liq)) * 1.996694297036971;
  if (Steam_Generator_Rth_liq > 250000.0) {
    t513 = (Steam_Generator_Rth_liq - 250000.0) / 325000.0 + 1.0;
  } else {
    t513 = 1.0;
  }

  Steam_Generator_Rth_liq = 1.0 - pmf_exp(-(Steam_Generator_Rth_liq + 200.0) /
    1000.0);
  t520 = t357 * t513 * Steam_Generator_Rth_liq +
    Steam_Generator_two_phase_fluid_hc_vap;
  tlu2_2d_linear_nearest_value(&hd_efOut[0ULL], &t20.mField0[0ULL],
    &t20.mField2[0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField13, &t46[0ULL], &t49[0ULL], &t33[0ULL]);
  t333[0] = hd_efOut[0];
  Steam_Generator_two_phase_fluid_hc_vap = t333[0ULL];
  tlu2_2d_linear_nearest_value(&id_efOut[0ULL], &t22.mField0[0ULL],
    &t22.mField2[0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField13, &t46[0ULL], &t49[0ULL], &t33[0ULL]);
  t333[0] = id_efOut[0];
  Steam_Generator_Rth_liq = t333[0ULL];
  Steam_Generator_two_phase_fluid_hc_vap =
    (Steam_Generator_two_phase_fluid_hc_vap + Steam_Generator_Rth_liq) / 2.0;
  Steam_Generator_two_phase_fluid_hc_vap = pmf_pow(t520 *
    Steam_Generator_two_phase_fluid_hc_vap * 0.55399065447813123,
    0.33333333333333331) * 0.404;
  t513 = Steam_Generator_two_phase_fluid_hc_vap * Steam_Generator_UA_liq / 0.018
    * 23.750440461138837;
  Steam_Generator_UA_liq = 1.0 / (t513 == 0.0 ? 1.0E-16 : t513);
  Steam_Generator_two_phase_fluid_hc_vap = t352 > 0.5 ? t352 : 0.5;
  t513 = Steam_Generator_two_phase_fluid_Cdot_threshold * 0.025;
  t520 = t534 * 0.036815538909255395;
  Steam_Generator_Rth_liq = t513 / (t520 == 0.0 ? 1.0E-16 : t520);
  t352 = Steam_Generator_Rth_liq > 1000.0 ? Steam_Generator_Rth_liq : 1000.0;
  t520 = pmf_log10(6.9 / (t352 == 0.0 ? 1.0E-16 : t352) + 6.2093190311196615E-5)
    * pmf_log10(6.9 / (t352 == 0.0 ? 1.0E-16 : t352) + 6.2093190311196615E-5) *
    3.24;
  t534 = 1.0 / (t520 == 0.0 ? 1.0E-16 : t520);
  t506 = (pmf_pow(Steam_Generator_two_phase_fluid_hc_vap, 0.66666666666666663) -
          1.0) * pmf_sqrt(t534 / 8.0) * 12.7 + 1.0;
  Steam_Generator_two_phase_fluid_hc_vap = (t352 - 1000.0) * (t534 / 8.0) *
    Steam_Generator_two_phase_fluid_hc_vap / (t506 == 0.0 ? 1.0E-16 : t506);
  t352 = (Steam_Generator_Rth_liq - 2000.0) / 2000.0;
  t534 = t352 * t352 * 3.0 - t352 * t352 * t352 * 2.0;
  if (Steam_Generator_Rth_liq <= 2000.0) {
    t352 = 3.66;
  } else if (Steam_Generator_Rth_liq >= 4000.0) {
    t352 = Steam_Generator_two_phase_fluid_hc_vap;
  } else {
    t352 = (1.0 - t534) * 3.66 + Steam_Generator_two_phase_fluid_hc_vap * t534;
  }

  t520 = t354 * t352 / 0.025 * 41.233403578366037;
  Steam_Generator_Rth_liq = Steam_Generator_UA_liq + 1.0 / (t520 == 0.0 ?
    1.0E-16 : t520);
  tlu2_2d_linear_nearest_value(&jd_efOut[0ULL], &t13.mField0[0ULL],
    &t13.mField2[0ULL], &t27.mField0[0ULL], &t27.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t61[0ULL], &t32[0ULL], &t33[0ULL]);
  t333[0] = jd_efOut[0];
  Steam_Generator_two_phase_fluid_hc_vap = t333[0ULL];
  tlu2_2d_linear_nearest_value(&kd_efOut[0ULL], &t13.mField0[0ULL],
    &t13.mField2[0ULL], &t27.mField0[0ULL], &t27.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t61[0ULL], &t32[0ULL], &t33[0ULL]);
  t333[0] = kd_efOut[0];
  t352 = t333[0ULL];
  t520 = t352 * 0.036815538909255395;
  t352 = t513 / (t520 == 0.0 ? 1.0E-16 : t520);
  t354 = t352 > 1.0 ? t352 : 1.0;
  t352 = t351 <= 0.0 ? 0.0 : t351 >= 1.0 ? 1.0 : t351;
  t351 = t536 <= 0.0 ? 0.0 : t536 >= 1.0 ? 1.0 : t536;
  if (t351 - t352 > 1.0E-6) {
    t536 = t351 - t352;
  } else if (t352 - t351 > 1.0E-6) {
    t536 = t352 - t351;
  } else {
    t536 = 1.0E-6;
  }

  if (Steam_Generator_two_phase_fluid_v_sat_vap / (t525 == 0.0 ? 1.0E-16 : t525)
      > 1.000001) {
    t534 = pmf_sqrt(Steam_Generator_two_phase_fluid_v_sat_vap / (t525 == 0.0 ?
      1.0E-16 : t525));
  } else {
    t534 = 1.0000004999998751;
  }

  t357 = t352 <= t351 ? t352 : t351;
  t525 = pmf_pow(t354, 0.8) * pmf_pow(Steam_Generator_two_phase_fluid_hc_vap,
    0.33) * 0.05;
  t506 = (pmf_pow((t536 + t357) * (t534 - 1.0) + 1.0, 1.8) - pmf_pow((t534 - 1.0)
           * t357 + 1.0, 1.8)) * (t525 / 1.8 / (t534 - 1.0 == 0.0 ? 1.0E-16 :
    t534 - 1.0));
  Steam_Generator_two_phase_fluid_hc_vap = t506 / (t536 == 0.0 ? 1.0E-16 : t536);
  t351 = Steam_Generator_two_phase_fluid_hc_vap > 3.66 ?
    Steam_Generator_two_phase_fluid_hc_vap : 3.66;
  tlu2_2d_linear_nearest_value(&ld_efOut[0ULL], &t13.mField0[0ULL],
    &t13.mField2[0ULL], &t27.mField0[0ULL], &t27.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t61[0ULL], &t32[0ULL], &t33[0ULL]);
  t333[0] = ld_efOut[0];
  Steam_Generator_two_phase_fluid_hc_vap = t333[0ULL];
  t534 = t351 * Steam_Generator_two_phase_fluid_hc_vap / 0.025 *
    41.233403578366037;
  t351 = Steam_Generator_UA_liq + 1.0 / (t534 == 0.0 ? 1.0E-16 : t534);
  Steam_Generator_two_phase_fluid_hc_vap = t360 > 0.5 ? t360 : 0.5;
  t534 = t367 * 0.036815538909255395;
  t352 = t513 / (t534 == 0.0 ? 1.0E-16 : t534);
  t536 = t352 > 1000.0 ? t352 : 1000.0;
  t534 = pmf_log10(6.9 / (t536 == 0.0 ? 1.0E-16 : t536) + 6.2093190311196615E-5)
    * pmf_log10(6.9 / (t536 == 0.0 ? 1.0E-16 : t536) + 6.2093190311196615E-5) *
    3.24;
  t354 = 1.0 / (t534 == 0.0 ? 1.0E-16 : t534);
  t357 = (pmf_pow(Steam_Generator_two_phase_fluid_hc_vap, 0.66666666666666663) -
          1.0) * pmf_sqrt(t354 / 8.0) * 12.7 + 1.0;
  Steam_Generator_two_phase_fluid_hc_vap = (t536 - 1000.0) * (t354 / 8.0) *
    Steam_Generator_two_phase_fluid_hc_vap / (t357 == 0.0 ? 1.0E-16 : t357);
  t536 = (t352 - 2000.0) / 2000.0;
  t354 = t536 * t536 * 3.0 - t536 * t536 * t536 * 2.0;
  if (t352 <= 2000.0) {
    t536 = 3.66;
  } else if (t352 >= 4000.0) {
    t536 = Steam_Generator_two_phase_fluid_hc_vap;
  } else {
    t536 = (1.0 - t354) * 3.66 + Steam_Generator_two_phase_fluid_hc_vap * t354;
  }

  t536 = t366 * t536 / 0.025 * 41.233403578366037;
  t352 = Steam_Generator_UA_liq + 1.0 / (t536 == 0.0 ? 1.0E-16 : t536);
  Steam_Generator_two_phase_fluid_hc_vap = 1.0 / (t351 == 0.0 ? 1.0E-16 : t351);
  if (intrm_sf_mf_17 <= 0.0) {
    t351 = 0.0;
  } else {
    t351 = intrm_sf_mf_17 >= 1.0 ? 1.0 : intrm_sf_mf_17;
  }

  if (t337 <= 0.0) {
    intrm_sf_mf_17 = 0.0;
  } else {
    intrm_sf_mf_17 = t337 >= 1.0 ? 1.0 : t337;
  }

  if (t345 <= 0.0) {
    t337 = 0.0;
  } else {
    t337 = t345 >= 1.0 ? 1.0 : t345;
  }

  if (t342 <= 0.0) {
    t345 = 0.0;
  } else {
    t345 = t342 >= 1.0 ? 1.0 : t342;
  }

  if (intrm_sf_mf_590 <= 0.0) {
    t342 = 0.0;
  } else {
    t342 = intrm_sf_mf_590 >= 1.0 ? 1.0 : intrm_sf_mf_590;
  }

  if (intrm_sf_mf_91 <= 0.0) {
    intrm_sf_mf_590 = 0.0;
  } else {
    intrm_sf_mf_590 = intrm_sf_mf_91 >= 1.0 ? 1.0 : intrm_sf_mf_91;
  }

  if (intrm_sf_mf_434 <= 0.0) {
    intrm_sf_mf_91 = 0.0;
  } else {
    intrm_sf_mf_91 = intrm_sf_mf_434 >= 1.0 ? 1.0 : intrm_sf_mf_434;
  }

  out.mX[0] = X[1ULL] - t351;
  out.mX[1] = X[2ULL] - intrm_sf_mf_17;
  out.mX[2] = X[14ULL] - ((t349 * 943.36996936171124 + t347 * 3.9068179179201641)
    + intrm_sf_mf_61 * 899.76188604581819) * 0.028274333882308138;
  out.mX[3] = X[11ULL] - t335;
  out.mX[4] = X[12ULL] - t340;
  out.mX[5] = X[13ULL] - Condenser_UA_mix;
  out.mX[6] = X[10ULL] - t338;
  out.mX[7] = X[9ULL] - t341;
  out.mX[8] = X[24ULL] - t337;
  out.mX[9] = X[25ULL] - t345;
  out.mX[10] = X[41ULL] - ((t358 * 944.66854386952843 + intrm_sf_mf_511 *
    17.468881413331218) + intrm_sf_mf_500 * 809.77239983044092) *
    0.25770877236478779;
  out.mX[11] = X[36ULL] - 1.0 / (Steam_Generator_Rth_liq == 0.0 ? 1.0E-16 :
    Steam_Generator_Rth_liq);
  out.mX[12] = X[39ULL] - 1.0 / (t352 == 0.0 ? 1.0E-16 : t352);
  out.mX[13] = X[40ULL] - Steam_Generator_two_phase_fluid_hc_vap;
  out.mX[14] = X[38ULL] - Steam_Generator_two_phase_fluid_Cdot_threshold;
  out.mX[15] = X[37ULL] - Steam_Generator_thermal_liquid_Cdot;
  out.mX[16] = X[42ULL] - t342;
  out.mX[17] = X[43ULL] - intrm_sf_mf_590;
  out.mX[18] = X[44ULL] - intrm_sf_mf_590;
  out.mX[19] = X[45ULL] - intrm_sf_mf_590;
  out.mX[20] = X[46ULL] - intrm_sf_mf_91;
  out.mX[21] = X[47ULL] - t342;
  out.mX[22] = X[48ULL] - intrm_sf_mf_91;
  out.mX[23] = X[49ULL] - intrm_sf_mf_590;
  (void)LC;
  (void)t538;
  return 0;
}
