/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv9/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_sys_struct.h"
#include "PW_SMRv9_4b22eff7_1_ds_icr.h"
#include "PW_SMRv9_4b22eff7_1_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_externals.h"
#include "PW_SMRv9_4b22eff7_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv9_4b22eff7_1_ds_icr(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t512, NeDsMethodOutput *t513)
{
  ETTS0 ac_efOut;
  ETTS0 bb_efOut;
  ETTS0 cc_efOut;
  ETTS0 d_efOut;
  ETTS0 db_efOut;
  ETTS0 ec_efOut;
  ETTS0 efOut;
  ETTS0 fb_efOut;
  ETTS0 fc_efOut;
  ETTS0 g_efOut;
  ETTS0 h_efOut;
  ETTS0 hb_efOut;
  ETTS0 hc_efOut;
  ETTS0 j_efOut;
  ETTS0 jc_efOut;
  ETTS0 l_efOut;
  ETTS0 m_efOut;
  ETTS0 mc_efOut;
  ETTS0 o_efOut;
  ETTS0 p_efOut;
  ETTS0 pb_efOut;
  ETTS0 qc_efOut;
  ETTS0 r_efOut;
  ETTS0 t12;
  ETTS0 t18;
  ETTS0 t20;
  ETTS0 t21;
  ETTS0 t22;
  ETTS0 t23;
  ETTS0 t24;
  ETTS0 t25;
  ETTS0 t26;
  ETTS0 t27;
  ETTS0 t8;
  ETTS0 t_efOut;
  ETTS0 tb_efOut;
  ETTS0 uc_efOut;
  ETTS0 w_efOut;
  ETTS0 wb_efOut;
  ETTS0 xb_efOut;
  PmRealVector out;
  real_T X[250];
  real_T ab_efOut[1];
  real_T ad_efOut[1];
  real_T b_efOut[1];
  real_T bc_efOut[1];
  real_T bd_efOut[1];
  real_T c_efOut[1];
  real_T cb_efOut[1];
  real_T cd_efOut[1];
  real_T dc_efOut[1];
  real_T dd_efOut[1];
  real_T e_efOut[1];
  real_T eb_efOut[1];
  real_T ed_efOut[1];
  real_T f_efOut[1];
  real_T fd_efOut[1];
  real_T gb_efOut[1];
  real_T gc_efOut[1];
  real_T i_efOut[1];
  real_T ib_efOut[1];
  real_T ic_efOut[1];
  real_T jb_efOut[1];
  real_T k_efOut[1];
  real_T kb_efOut[1];
  real_T kc_efOut[1];
  real_T lb_efOut[1];
  real_T lc_efOut[1];
  real_T mb_efOut[1];
  real_T n_efOut[1];
  real_T nb_efOut[1];
  real_T nc_efOut[1];
  real_T ob_efOut[1];
  real_T oc_efOut[1];
  real_T pc_efOut[1];
  real_T q_efOut[1];
  real_T qb_efOut[1];
  real_T rb_efOut[1];
  real_T rc_efOut[1];
  real_T s_efOut[1];
  real_T sb_efOut[1];
  real_T sc_efOut[1];
  real_T t304[1];
  real_T t314[1];
  real_T tc_efOut[1];
  real_T u_efOut[1];
  real_T ub_efOut[1];
  real_T v_efOut[1];
  real_T vb_efOut[1];
  real_T vc_efOut[1];
  real_T wc_efOut[1];
  real_T x_efOut[1];
  real_T xc_efOut[1];
  real_T y_efOut[1];
  real_T yb_efOut[1];
  real_T yc_efOut[1];
  real_T Condenser_UA_liq;
  real_T Condenser_UA_vap;
  real_T Condenser_two_phase_fluid_mdot_hc_;
  real_T Steam_Generator_UA_liq;
  real_T Steam_Generator_UA_mix;
  real_T Steam_Generator_thermal_liquid_Cdot;
  real_T Steam_Generator_two_phase_fluid_Cdot_threshold;
  real_T Steam_Generator_two_phase_fluid_Re_sat_liq;
  real_T Steam_Generator_two_phase_fluid_unorm_in_vap;
  real_T intrm_sf_mf_17;
  real_T intrm_sf_mf_382;
  real_T intrm_sf_mf_393;
  real_T intrm_sf_mf_511;
  real_T intrm_sf_mf_527;
  real_T intrm_sf_mf_547;
  real_T intrm_sf_mf_548;
  real_T intrm_sf_mf_84;
  real_T t286_idx_0;
  real_T t316;
  real_T t317;
  real_T t319;
  real_T t321;
  real_T t322;
  real_T t323;
  real_T t326;
  real_T t327;
  real_T t330;
  real_T t336;
  real_T t343;
  real_T t345;
  real_T t346;
  real_T t347;
  real_T t349;
  real_T t350;
  real_T t453;
  real_T t476;
  real_T t477;
  real_T t482;
  real_T t488;
  real_T t497;
  real_T t500;
  real_T t501;
  real_T t507;
  real_T t510;
  real_T t511;
  size_t t30[1];
  size_t t31[1];
  size_t t44[1];
  size_t t47[1];
  size_t t59[1];
  int32_T b;
  boolean_T intrm_sf_mf_498;
  boolean_T intrm_sf_mf_503;
  boolean_T intrm_sf_mf_516;
  boolean_T intrm_sf_mf_518;
  boolean_T intrm_sf_mf_519;
  boolean_T intrm_sf_mf_521;
  boolean_T intrm_sf_mf_522;
  boolean_T intrm_sf_mf_531;
  boolean_T intrm_sf_mf_533;
  for (b = 0; b < 250; b++) {
    X[b] = t512->mX.mX[b];
  }

  out = t513->mICR;
  t314[0ULL] = X[0ULL];
  t30[0] = 100ULL;
  t31[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t314[0ULL], &t30
    [0ULL], &t31[0ULL]);
  t25 = efOut;
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t25.mField0[0ULL], &t25.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t30[0ULL], &t31[0ULL]);
  t304[0] = b_efOut[0];
  intrm_sf_mf_382 = t304[0ULL];
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t25.mField0[0ULL], &t25.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t30[0ULL], &t31[0ULL]);
  t286_idx_0 = c_efOut[0];
  Steam_Generator_two_phase_fluid_Cdot_threshold = t286_idx_0;
  if (X[72ULL] <= intrm_sf_mf_382) {
    intrm_sf_mf_17 = X[72ULL] / (intrm_sf_mf_382 == 0.0 ? 1.0E-16 :
      intrm_sf_mf_382) - 1.0;
  } else if (X[72ULL] >= t286_idx_0) {
    intrm_sf_mf_17 = (X[72ULL] - 4000.0) / (4000.0 - t286_idx_0 == 0.0 ? 1.0E-16
      : 4000.0 - t286_idx_0) + 2.0;
  } else {
    t319 = t286_idx_0 - intrm_sf_mf_382;
    intrm_sf_mf_17 = (X[72ULL] - intrm_sf_mf_382) / (t319 == 0.0 ? 1.0E-16 :
      t319);
  }

  t314[0ULL] = X[73ULL];
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t314[0ULL],
    &t30[0ULL], &t31[0ULL]);
  t25 = d_efOut;
  tlu2_1d_linear_linear_value(&e_efOut[0ULL], &t25.mField0[0ULL], &t25.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t30[0ULL], &t31[0ULL]);
  t286_idx_0 = e_efOut[0];
  Condenser_UA_liq = t286_idx_0;
  tlu2_1d_linear_linear_value(&f_efOut[0ULL], &t25.mField0[0ULL], &t25.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t30[0ULL], &t31[0ULL]);
  t286_idx_0 = f_efOut[0];
  if (X[74ULL] <= Condenser_UA_liq) {
    t317 = X[74ULL] / (Condenser_UA_liq == 0.0 ? 1.0E-16 : Condenser_UA_liq) -
      1.0;
  } else if (X[74ULL] >= t286_idx_0) {
    t317 = (X[74ULL] - 4000.0) / (4000.0 - t286_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t286_idx_0) + 2.0;
  } else {
    intrm_sf_mf_393 = t286_idx_0 - Condenser_UA_liq;
    t317 = (X[74ULL] - Condenser_UA_liq) / (intrm_sf_mf_393 == 0.0 ? 1.0E-16 :
      intrm_sf_mf_393);
  }

  t314[0ULL] = X[3ULL];
  t44[0] = 28ULL;
  tlu2_linear_nearest_prelookup(&g_efOut.mField0[0ULL], &g_efOut.mField1[0ULL],
    &g_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t314[0ULL],
    &t44[0ULL], &t31[0ULL]);
  t22 = g_efOut;
  t314[0ULL] = X[4ULL];
  t47[0] = 27ULL;
  tlu2_linear_nearest_prelookup(&h_efOut.mField0[0ULL], &h_efOut.mField1[0ULL],
    &h_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t314[0ULL],
    &t47[0ULL], &t31[0ULL]);
  t23 = h_efOut;
  tlu2_2d_linear_nearest_value(&i_efOut[0ULL], &t22.mField0[0ULL], &t22.mField2
    [0ULL], &t23.mField0[0ULL], &t23.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField9, &t44[0ULL], &t47[0ULL], &t31[0ULL]);
  t286_idx_0 = i_efOut[0];
  Condenser_UA_liq = t286_idx_0;
  t314[0ULL] = X[5ULL];
  tlu2_linear_nearest_prelookup(&j_efOut.mField0[0ULL], &j_efOut.mField1[0ULL],
    &j_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t314[0ULL],
    &t44[0ULL], &t31[0ULL]);
  t27 = j_efOut;
  tlu2_2d_linear_nearest_value(&k_efOut[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], &t23.mField0[0ULL], &t23.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField9, &t44[0ULL], &t47[0ULL], &t31[0ULL]);
  t286_idx_0 = k_efOut[0];
  Condenser_UA_liq = (Condenser_UA_liq + t286_idx_0) / 2.0;
  t316 = Condenser_UA_liq * 0.11700000000000003 / 0.022;
  t314[0] = 1.0;
  t59[0] = 50ULL;
  tlu2_linear_nearest_prelookup(&l_efOut.mField0[0ULL], &l_efOut.mField1[0ULL],
    &l_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t314[0ULL],
    &t59[0ULL], &t31[0ULL]);
  t24 = l_efOut;
  t304[0ULL] = X[6ULL];
  tlu2_linear_nearest_prelookup(&m_efOut.mField0[0ULL], &m_efOut.mField1[0ULL],
    &m_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t304[0ULL],
    &t30[0ULL], &t31[0ULL]);
  t20 = m_efOut;
  tlu2_2d_linear_nearest_value(&n_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], &t20.mField0[0ULL], &t20.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField10, &t59[0ULL], &t30[0ULL], &t31[0ULL]);
  t286_idx_0 = n_efOut[0];
  Condenser_two_phase_fluid_mdot_hc_ = t286_idx_0 * 0.034557519189487726 / 0.02;
  t304[0ULL] = X[3ULL];
  tlu2_linear_linear_prelookup(&o_efOut.mField0[0ULL], &o_efOut.mField1[0ULL],
    &o_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t304[0ULL],
    &t44[0ULL], &t31[0ULL]);
  t25 = o_efOut;
  t304[0ULL] = X[4ULL];
  tlu2_linear_linear_prelookup(&p_efOut.mField0[0ULL], &p_efOut.mField1[0ULL],
    &p_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t304[0ULL],
    &t47[0ULL], &t31[0ULL]);
  t18 = p_efOut;
  tlu2_2d_linear_linear_value(&q_efOut[0ULL], &t25.mField0[0ULL], &t25.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField11, &t44[0ULL], &t47[0ULL], &t31[0ULL]);
  t286_idx_0 = q_efOut[0];
  t319 = t286_idx_0;
  t304[0ULL] = X[5ULL];
  tlu2_linear_linear_prelookup(&r_efOut.mField0[0ULL], &r_efOut.mField1[0ULL],
    &r_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t304[0ULL],
    &t44[0ULL], &t31[0ULL]);
  t25 = r_efOut;
  tlu2_2d_linear_linear_value(&s_efOut[0ULL], &t25.mField0[0ULL], &t25.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField11, &t44[0ULL], &t47[0ULL], &t31[0ULL]);
  t286_idx_0 = s_efOut[0];
  t319 = (t319 + t286_idx_0) / 2.0;
  Condenser_UA_vap = (X[94ULL] - 10.0) / 2.0;
  t321 = tanh(t319 * Condenser_UA_vap * 3.0 / (t316 == 0.0 ? 1.0E-16 : t316)) *
    t319 * Condenser_UA_vap;
  t304[0ULL] = X[6ULL];
  tlu2_linear_linear_prelookup(&t_efOut.mField0[0ULL], &t_efOut.mField1[0ULL],
    &t_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t304[0ULL],
    &t30[0ULL], &t31[0ULL]);
  t26 = t_efOut;
  tlu2_1d_linear_linear_value(&u_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t30[0ULL], &t31[0ULL]);
  t286_idx_0 = u_efOut[0];
  t316 = t286_idx_0;
  tlu2_1d_linear_linear_value(&v_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t30[0ULL], &t31[0ULL]);
  t286_idx_0 = v_efOut[0];
  t319 = t286_idx_0;
  if (X[7ULL] <= t316) {
    t322 = X[7ULL] / (t316 == 0.0 ? 1.0E-16 : t316) - 1.0;
  } else if (X[7ULL] >= t286_idx_0) {
    t322 = (X[7ULL] - 4000.0) / (4000.0 - t286_idx_0 == 0.0 ? 1.0E-16 : 4000.0 -
      t286_idx_0) + 2.0;
  } else {
    intrm_sf_mf_548 = t286_idx_0 - t316;
    t322 = (X[7ULL] - t316) / (intrm_sf_mf_548 == 0.0 ? 1.0E-16 :
      intrm_sf_mf_548);
  }

  if (X[8ULL] <= t316) {
    intrm_sf_mf_393 = X[8ULL] / (t316 == 0.0 ? 1.0E-16 : t316) - 1.0;
  } else if (X[8ULL] >= t286_idx_0) {
    intrm_sf_mf_393 = (X[8ULL] - 4000.0) / (4000.0 - t286_idx_0 == 0.0 ? 1.0E-16
      : 4000.0 - t286_idx_0) + 2.0;
  } else {
    t488 = t286_idx_0 - t316;
    intrm_sf_mf_393 = (X[8ULL] - t316) / (t488 == 0.0 ? 1.0E-16 : t488);
  }

  t304[0ULL] = ((t322 < 0.0 ? t322 : 0.0) + (intrm_sf_mf_393 < 0.0 ?
    intrm_sf_mf_393 : 0.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&w_efOut.mField0[0ULL], &w_efOut.mField1[0ULL],
    &w_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t304[0ULL],
    &t59[0ULL], &t31[0ULL]);
  t25 = w_efOut;
  tlu2_2d_linear_nearest_value(&x_efOut[0ULL], &t25.mField0[0ULL], &t25.mField2
    [0ULL], &t20.mField0[0ULL], &t20.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField12, &t59[0ULL], &t30[0ULL], &t31[0ULL]);
  t286_idx_0 = x_efOut[0];
  t323 = t286_idx_0;
  tlu2_2d_linear_nearest_value(&y_efOut[0ULL], &t25.mField0[0ULL], &t25.mField2
    [0ULL], &t20.mField0[0ULL], &t20.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField10, &t59[0ULL], &t30[0ULL], &t31[0ULL]);
  t286_idx_0 = y_efOut[0];
  Steam_Generator_UA_mix = t286_idx_0;
  tlu2_2d_linear_nearest_value(&ab_efOut[0ULL], &t25.mField0[0ULL],
    &t25.mField2[0ULL], &t20.mField0[0ULL], &t20.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField13, &t59[0ULL], &t30[0ULL], &t31[0ULL]);
  t286_idx_0 = ab_efOut[0];
  t326 = t286_idx_0;
  t327 = t323 * Steam_Generator_UA_mix / (t286_idx_0 == 0.0 ? 1.0E-16 :
    t286_idx_0);
  t330 = tanh((X[95ULL] - X[96ULL]) * t327 * 3.0 /
              (Condenser_two_phase_fluid_mdot_hc_ == 0.0 ? 1.0E-16 :
               Condenser_two_phase_fluid_mdot_hc_));
  Condenser_two_phase_fluid_mdot_hc_ = (t330 + 1.0) / 2.0 * (X[95ULL] > 0.0 ? X
    [95ULL] : 0.0) + (1.0 - t330) / 2.0 * (X[96ULL] > 0.0 ? X[96ULL] : 0.0);
  Steam_Generator_thermal_liquid_Cdot = X[9ULL] >= 0.0 ? X[9ULL] : 0.0;
  intrm_sf_mf_84 = X[10ULL] >= 0.0 ? X[10ULL] : 0.0;
  t330 = t327 * intrm_sf_mf_84;
  t346 = t330 + X[98ULL];
  t347 = Steam_Generator_thermal_liquid_Cdot + X[98ULL];
  Steam_Generator_two_phase_fluid_Re_sat_liq = t346 / (t347 == 0.0 ? 1.0E-16 :
    t347);
  if (Steam_Generator_two_phase_fluid_Re_sat_liq <= 1.0) {
    t511 = 1.0 - Steam_Generator_two_phase_fluid_Re_sat_liq * 0.999999;
  } else {
    t511 = 1.0E-6;
  }

  if (Steam_Generator_two_phase_fluid_Re_sat_liq >= 1.0) {
    t510 = Steam_Generator_two_phase_fluid_Re_sat_liq * 1.000001 - 1.0;
  } else {
    t510 = 1.0E-6;
  }

  if (t330 + X[98ULL] >= Steam_Generator_thermal_liquid_Cdot + X[98ULL]) {
    intrm_sf_mf_527 = Steam_Generator_thermal_liquid_Cdot + X[98ULL];
    t349 = t330 + X[98ULL];
    t507 = (1.000001 / (intrm_sf_mf_527 == 0.0 ? 1.0E-16 : intrm_sf_mf_527) -
            0.999999 / (t349 == 0.0 ? 1.0E-16 : t349)) * X[11ULL];
  } else {
    t350 = t330 + X[98ULL];
    t286_idx_0 = Steam_Generator_thermal_liquid_Cdot + X[98ULL];
    t507 = (1.000001 / (t350 == 0.0 ? 1.0E-16 : t350) - 0.999999 / (t286_idx_0 ==
             0.0 ? 1.0E-16 : t286_idx_0)) * X[11ULL];
  }

  t330 = t507 <= 15.0 ? t507 : 15.0;
  t304[0ULL] = t322;
  tlu2_linear_linear_prelookup(&bb_efOut.mField0[0ULL], &bb_efOut.mField1[0ULL],
    &bb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t304[0ULL],
    &t59[0ULL], &t31[0ULL]);
  t25 = bb_efOut;
  tlu2_2d_linear_linear_value(&cb_efOut[0ULL], &t25.mField0[0ULL], &t25.mField2
    [0ULL], &t26.mField0[0ULL], &t26.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t59[0ULL], &t30[0ULL], &t31[0ULL]);
  t286_idx_0 = cb_efOut[0];
  intrm_sf_mf_548 = X[6ULL] * t286_idx_0 * 100.0 + X[7ULL];
  t304[0] = 0.0;
  tlu2_linear_linear_prelookup(&db_efOut.mField0[0ULL], &db_efOut.mField1[0ULL],
    &db_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t304[0ULL],
    &t59[0ULL], &t31[0ULL]);
  t12 = db_efOut;
  tlu2_2d_linear_linear_value(&eb_efOut[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &t26.mField0[0ULL], &t26.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t59[0ULL], &t30[0ULL], &t31[0ULL]);
  t286_idx_0 = eb_efOut[0];
  t507 = t286_idx_0;
  t336 = X[6ULL] * t286_idx_0 * 100.0 + t316;
  t316 = (t336 - intrm_sf_mf_548) / (t327 == 0.0 ? 1.0E-16 : t327);
  t453 = (1.0 - pmf_exp(-t330)) * X[97ULL];
  t477 = pmf_exp(-t330) * t510 + t511;
  intrm_sf_mf_547 = t453 / (t477 == 0.0 ? 1.0E-16 : t477);
  intrm_sf_mf_531 = (intrm_sf_mf_547 > t316 * 1000.0);
  intrm_sf_mf_503 = (intrm_sf_mf_548 < t336);
  intrm_sf_mf_533 = (intrm_sf_mf_548 > t336);
  tlu2_linear_linear_prelookup(&fb_efOut.mField0[0ULL], &fb_efOut.mField1[0ULL],
    &fb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t314[0ULL],
    &t59[0ULL], &t31[0ULL]);
  t21 = fb_efOut;
  tlu2_2d_linear_linear_value(&gb_efOut[0ULL], &t21.mField0[0ULL], &t21.mField2
    [0ULL], &t26.mField0[0ULL], &t26.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t59[0ULL], &t30[0ULL], &t31[0ULL]);
  t286_idx_0 = gb_efOut[0];
  t500 = t286_idx_0;
  Steam_Generator_two_phase_fluid_unorm_in_vap = X[6ULL] * t286_idx_0 * 100.0 +
    t319;
  intrm_sf_mf_518 = (intrm_sf_mf_548 >
                     Steam_Generator_two_phase_fluid_unorm_in_vap);
  intrm_sf_mf_521 = (X[97ULL] < 0.0);
  intrm_sf_mf_522 = (X[97ULL] > 0.0);
  if (intrm_sf_mf_522) {
    if (intrm_sf_mf_503) {
      if (intrm_sf_mf_531) {
        t477 = X[97ULL] - t511 * t316 * 1000.0;
        t286_idx_0 = pmf_log((t510 * t316 * 1000.0 + X[97ULL]) / (t477 == 0.0 ?
          1.0E-16 : t477));
        t319 = t286_idx_0 / (t330 == 0.0 ? 1.0E-16 : t330);
      } else {
        t319 = 1.0;
      }
    } else {
      t319 = 0.0;
    }
  } else {
    t319 = intrm_sf_mf_521 ? intrm_sf_mf_518 ? 0.0 : (real_T)!intrm_sf_mf_533 :
      (real_T)intrm_sf_mf_503;
  }

  t314[0ULL] = ((t322 > 1.0 ? t322 : 1.0) + (intrm_sf_mf_393 > 1.0 ?
    intrm_sf_mf_393 : 1.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&hb_efOut.mField0[0ULL], &hb_efOut.mField1[0ULL],
    &hb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t314[0ULL],
    &t59[0ULL], &t31[0ULL]);
  t26 = hb_efOut;
  tlu2_2d_linear_nearest_value(&ib_efOut[0ULL], &t26.mField0[0ULL],
    &t26.mField2[0ULL], &t20.mField0[0ULL], &t20.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t59[0ULL], &t30[0ULL], &t31[0ULL]);
  t286_idx_0 = ib_efOut[0];
  t330 = t286_idx_0;
  tlu2_2d_linear_nearest_value(&jb_efOut[0ULL], &t26.mField0[0ULL],
    &t26.mField2[0ULL], &t20.mField0[0ULL], &t20.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t59[0ULL], &t30[0ULL], &t31[0ULL]);
  t286_idx_0 = jb_efOut[0];
  t511 = t286_idx_0;
  tlu2_2d_linear_nearest_value(&kb_efOut[0ULL], &t26.mField0[0ULL],
    &t26.mField2[0ULL], &t20.mField0[0ULL], &t20.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField13, &t59[0ULL], &t30[0ULL], &t31[0ULL]);
  t286_idx_0 = kb_efOut[0];
  t510 = t286_idx_0;
  t488 = t330 * t511 / (t286_idx_0 == 0.0 ? 1.0E-16 : t286_idx_0);
  t497 = t488 * intrm_sf_mf_84;
  intrm_sf_mf_84 = (X[98ULL] + t497) / (t347 == 0.0 ? 1.0E-16 : t347);
  if (intrm_sf_mf_84 <= 1.0) {
    t501 = 1.0 - intrm_sf_mf_84 * 0.999999;
  } else {
    t501 = 1.0E-6;
  }

  if (intrm_sf_mf_84 >= 1.0) {
    t343 = intrm_sf_mf_84 * 1.000001 - 1.0;
  } else {
    t343 = 1.0E-6;
  }

  if (X[98ULL] + t497 >= Steam_Generator_thermal_liquid_Cdot + X[98ULL]) {
    t453 = Steam_Generator_thermal_liquid_Cdot + X[98ULL];
    t477 = X[98ULL] + t497;
    t482 = (1.000001 / (t453 == 0.0 ? 1.0E-16 : t453) - 0.999999 / (t477 == 0.0 ?
             1.0E-16 : t477)) * X[12ULL];
  } else {
    t286_idx_0 = X[98ULL] + t497;
    t476 = Steam_Generator_thermal_liquid_Cdot + X[98ULL];
    t482 = (1.000001 / (t286_idx_0 == 0.0 ? 1.0E-16 : t286_idx_0) - 0.999999 /
            (t476 == 0.0 ? 1.0E-16 : t476)) * X[12ULL];
  }

  Steam_Generator_thermal_liquid_Cdot = t482 <= 15.0 ? t482 : 15.0;
  t497 = (Steam_Generator_two_phase_fluid_unorm_in_vap - intrm_sf_mf_548) /
    (t488 == 0.0 ? 1.0E-16 : t488);
  intrm_sf_mf_498 = (intrm_sf_mf_548 <
                     Steam_Generator_two_phase_fluid_unorm_in_vap);
  t453 = (1.0 - pmf_exp(-Steam_Generator_thermal_liquid_Cdot)) * X[97ULL];
  t477 = pmf_exp(-Steam_Generator_thermal_liquid_Cdot) * t343 + t501;
  t482 = t453 / (t477 == 0.0 ? 1.0E-16 : t477);
  intrm_sf_mf_516 = (t482 < t497 * 1000.0);
  intrm_sf_mf_519 = (intrm_sf_mf_548 <=
                     Steam_Generator_two_phase_fluid_unorm_in_vap);
  if (intrm_sf_mf_522) {
    t345 = intrm_sf_mf_503 ? 0.0 : (real_T)!intrm_sf_mf_498;
  } else if (intrm_sf_mf_521) {
    if (intrm_sf_mf_518) {
      if (intrm_sf_mf_516) {
        t477 = X[97ULL] - t501 * t497 * 1000.0;
        t286_idx_0 = pmf_log((t343 * t497 * 1000.0 + X[97ULL]) / (t477 == 0.0 ?
          1.0E-16 : t477));
        t345 = t286_idx_0 / (Steam_Generator_thermal_liquid_Cdot == 0.0 ?
                             1.0E-16 : Steam_Generator_thermal_liquid_Cdot);
      } else {
        t345 = 1.0;
      }
    } else {
      t345 = 0.0;
    }
  } else {
    t345 = intrm_sf_mf_503 ? 0.0 : (real_T)!intrm_sf_mf_519;
  }

  Steam_Generator_thermal_liquid_Cdot = (1.0 - t319) - t345;
  t501 = t346 / (t347 == 0.0 ? 1.0E-16 : t347) / (t327 == 0.0 ? 1.0E-16 : t327);
  t343 = X[13ULL] / (t347 == 0.0 ? 1.0E-16 : t347);
  t346 = t343 <= 15.0 ? t343 : 15.0;
  if (intrm_sf_mf_522) {
    if (intrm_sf_mf_503) {
      if (intrm_sf_mf_531) {
        t343 = (Steam_Generator_two_phase_fluid_Re_sat_liq - 1.0) * t316 *
          1000.0 + X[97ULL];
      } else {
        t343 = (Steam_Generator_two_phase_fluid_Re_sat_liq * intrm_sf_mf_547 +
                X[97ULL]) - t316 * 1000.0;
      }
    } else if (intrm_sf_mf_498) {
      t343 = X[97ULL];
    } else {
      t343 = (intrm_sf_mf_84 * t482 + X[97ULL]) - t497 * 1000.0;
    }
  } else if (intrm_sf_mf_521) {
    if (intrm_sf_mf_518) {
      if (intrm_sf_mf_516) {
        t343 = (intrm_sf_mf_84 - 1.0) * t497 * 1000.0 + X[97ULL];
      } else {
        t343 = (intrm_sf_mf_84 * t482 + X[97ULL]) - t497 * 1000.0;
      }
    } else if (intrm_sf_mf_533) {
      t343 = X[97ULL];
    } else {
      t343 = (Steam_Generator_two_phase_fluid_Re_sat_liq * intrm_sf_mf_547 + X
              [97ULL]) - t316 * 1000.0;
    }
  } else if (intrm_sf_mf_503) {
    t343 = (Steam_Generator_two_phase_fluid_Re_sat_liq * intrm_sf_mf_547 + X
            [97ULL]) - t316 * 1000.0;
  } else if (intrm_sf_mf_519) {
    t343 = X[97ULL];
  } else {
    t343 = (intrm_sf_mf_84 * t482 + X[97ULL]) - t497 * 1000.0;
  }

  if (intrm_sf_mf_522) {
    if (intrm_sf_mf_503) {
      if (intrm_sf_mf_531) {
        t316 = t336;
      } else {
        t316 = t327 * intrm_sf_mf_547 * 0.001 + intrm_sf_mf_548;
      }
    } else if (intrm_sf_mf_498) {
      t316 = intrm_sf_mf_548;
    } else {
      t316 = t488 * t482 * 0.001 + intrm_sf_mf_548;
    }
  } else if (intrm_sf_mf_521) {
    if (intrm_sf_mf_518) {
      if (intrm_sf_mf_516) {
        t316 = Steam_Generator_two_phase_fluid_unorm_in_vap;
      } else {
        t316 = t488 * t482 * 0.001 + intrm_sf_mf_548;
      }
    } else if (intrm_sf_mf_533) {
      t316 = intrm_sf_mf_548;
    } else {
      t316 = t327 * intrm_sf_mf_547 * 0.001 + intrm_sf_mf_548;
    }
  } else if (intrm_sf_mf_503) {
    t316 = t327 * intrm_sf_mf_547 * 0.001 + intrm_sf_mf_548;
  } else if (intrm_sf_mf_519) {
    t316 = intrm_sf_mf_548;
  } else {
    t316 = t488 * t482 * 0.001 + intrm_sf_mf_548;
  }

  t327 = t336 - t316;
  intrm_sf_mf_84 = Steam_Generator_two_phase_fluid_unorm_in_vap - t316;
  t453 = (pmf_exp(t346 * Steam_Generator_thermal_liquid_Cdot) - 1.0) * t343;
  Steam_Generator_two_phase_fluid_Re_sat_liq = t453 / (t501 == 0.0 ? 1.0E-16 :
    t501);
  if (intrm_sf_mf_522) {
    if (t316 < Steam_Generator_two_phase_fluid_unorm_in_vap) {
      if (Steam_Generator_two_phase_fluid_Re_sat_liq * 0.001 > intrm_sf_mf_84) {
        t453 = t501 * intrm_sf_mf_84 * 1000.0 + t343;
        t477 = -pmf_log(t343 / (t453 == 0.0 ? 1.0E-16 : t453));
        t316 = t477 / (t346 == 0.0 ? 1.0E-16 : t346);
      } else {
        t316 = Steam_Generator_thermal_liquid_Cdot;
      }
    } else {
      t316 = 0.0;
    }
  } else if (intrm_sf_mf_521) {
    if (t316 > t336) {
      if (Steam_Generator_two_phase_fluid_Re_sat_liq * 0.001 < t327) {
        t286_idx_0 = t501 * t327 * 1000.0 + t343;
        t476 = -pmf_log(t343 / (t286_idx_0 == 0.0 ? 1.0E-16 : t286_idx_0));
        t316 = t476 / (t346 == 0.0 ? 1.0E-16 : t346);
      } else {
        t316 = Steam_Generator_thermal_liquid_Cdot;
      }
    } else {
      t316 = 0.0;
    }
  } else {
    t316 = Steam_Generator_thermal_liquid_Cdot;
  }

  t327 = Steam_Generator_thermal_liquid_Cdot - t316;
  intrm_sf_mf_84 = t319 + (intrm_sf_mf_522 ? 0.0 : intrm_sf_mf_521 ? t327 : 0.0);
  t327 = t345 + (intrm_sf_mf_522 ? t327 : 0.0);
  tlu2_2d_linear_nearest_value(&lb_efOut[0ULL], &t22.mField0[0ULL],
    &t22.mField2[0ULL], &t23.mField0[0ULL], &t23.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField14, &t44[0ULL], &t47[0ULL], &t31[0ULL]);
  t286_idx_0 = lb_efOut[0];
  t319 = t286_idx_0;
  tlu2_2d_linear_nearest_value(&mb_efOut[0ULL], &t27.mField0[0ULL],
    &t27.mField2[0ULL], &t23.mField0[0ULL], &t23.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField14, &t44[0ULL], &t47[0ULL], &t31[0ULL]);
  t286_idx_0 = mb_efOut[0];
  t319 = (t319 + t286_idx_0) / 2.0;
  t477 = t319 * 0.11700000000000003;
  t319 = Condenser_UA_vap * 0.022 / (t477 == 0.0 ? 1.0E-16 : t477);
  Condenser_UA_vap = pmf_sqrt(t319 * t319 + 100.0);
  t319 = Condenser_UA_vap * 35.580755206091233;
  Steam_Generator_thermal_liquid_Cdot = Condenser_UA_vap * pmf_sqrt
    (Condenser_UA_vap) * pmf_sqrt(pmf_sqrt(Condenser_UA_vap)) *
    2.0794784986224468;
  if (Condenser_UA_vap > 250000.0) {
    Steam_Generator_two_phase_fluid_Re_sat_liq = (Condenser_UA_vap - 250000.0) /
      325000.0 + 1.0;
  } else {
    Steam_Generator_two_phase_fluid_Re_sat_liq = 1.0;
  }

  Condenser_UA_vap = 1.0 - pmf_exp(-(Condenser_UA_vap + 200.0) / 1000.0);
  intrm_sf_mf_548 = Steam_Generator_thermal_liquid_Cdot *
    Steam_Generator_two_phase_fluid_Re_sat_liq * Condenser_UA_vap + t319;
  tlu2_2d_linear_nearest_value(&nb_efOut[0ULL], &t22.mField0[0ULL],
    &t22.mField2[0ULL], &t23.mField0[0ULL], &t23.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField15, &t44[0ULL], &t47[0ULL], &t31[0ULL]);
  t286_idx_0 = nb_efOut[0];
  t319 = t286_idx_0;
  tlu2_2d_linear_nearest_value(&ob_efOut[0ULL], &t27.mField0[0ULL],
    &t27.mField2[0ULL], &t23.mField0[0ULL], &t23.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField15, &t44[0ULL], &t47[0ULL], &t31[0ULL]);
  t286_idx_0 = ob_efOut[0];
  t319 = (t319 + t286_idx_0) / 2.0;
  t319 = pmf_pow(intrm_sf_mf_548 * t319 * 0.53047999688613334,
                 0.33333333333333331) * 0.404;
  t453 = t319 * Condenser_UA_liq / 0.022 * 5.1836278784231586;
  Condenser_UA_liq = 1.0 / (t453 == 0.0 ? 1.0E-16 : t453);
  t319 = t323 > 0.5 ? t323 : 0.5;
  t453 = Condenser_two_phase_fluid_mdot_hc_ * 0.02;
  t477 = t326 * 0.034557519189487726;
  Condenser_UA_vap = t453 / (t477 == 0.0 ? 1.0E-16 : t477);
  t323 = Condenser_UA_vap > 1000.0 ? Condenser_UA_vap : 1000.0;
  t477 = pmf_log10(6.9 / (t323 == 0.0 ? 1.0E-16 : t323) + 7.9545220244797035E-5)
    * pmf_log10(6.9 / (t323 == 0.0 ? 1.0E-16 : t323) + 7.9545220244797035E-5) *
    3.24;
  t326 = 1.0 / (t477 == 0.0 ? 1.0E-16 : t477);
  t286_idx_0 = (pmf_pow(t319, 0.66666666666666663) - 1.0) * pmf_sqrt(t326 / 8.0)
    * 12.7 + 1.0;
  t319 = (t323 - 1000.0) * (t326 / 8.0) * t319 / (t286_idx_0 == 0.0 ? 1.0E-16 :
    t286_idx_0);
  t323 = (Condenser_UA_vap - 2000.0) / 2000.0;
  t326 = t323 * t323 * 3.0 - t323 * t323 * t323 * 2.0;
  if (Condenser_UA_vap <= 2000.0) {
    t323 = 3.66;
  } else if (Condenser_UA_vap >= 4000.0) {
    t323 = t319;
  } else {
    t323 = (1.0 - t326) * 3.66 + t319 * t326;
  }

  t477 = Steam_Generator_UA_mix * t323 / 0.02 * 10.367255756846319;
  Condenser_UA_vap = Condenser_UA_liq + 1.0 / (t477 == 0.0 ? 1.0E-16 : t477);
  tlu2_linear_nearest_prelookup(&pb_efOut.mField0[0ULL], &pb_efOut.mField1[0ULL],
    &pb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t304[0ULL],
    &t59[0ULL], &t31[0ULL]);
  t8 = pb_efOut;
  tlu2_2d_linear_nearest_value(&qb_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], &t20.mField0[0ULL], &t20.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField12, &t59[0ULL], &t30[0ULL], &t31[0ULL]);
  t304[0] = qb_efOut[0];
  t319 = t304[0ULL];
  tlu2_2d_linear_nearest_value(&rb_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], &t20.mField0[0ULL], &t20.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField13, &t59[0ULL], &t30[0ULL], &t31[0ULL]);
  t304[0] = rb_efOut[0];
  t323 = t304[0ULL];
  t477 = t323 * 0.034557519189487726;
  t323 = t453 / (t477 == 0.0 ? 1.0E-16 : t477);
  Steam_Generator_UA_mix = t323 > 1.0 ? t323 : 1.0;
  t323 = t322 <= 0.0 ? 0.0 : t322 >= 1.0 ? 1.0 : t322;
  t322 = intrm_sf_mf_393 <= 0.0 ? 0.0 : intrm_sf_mf_393 >= 1.0 ? 1.0 :
    intrm_sf_mf_393;
  if (t322 - t323 > 1.0E-6) {
    intrm_sf_mf_393 = t322 - t323;
  } else if (t323 - t322 > 1.0E-6) {
    intrm_sf_mf_393 = t323 - t322;
  } else {
    intrm_sf_mf_393 = 1.0E-6;
  }

  if (t500 / (t507 == 0.0 ? 1.0E-16 : t507) > 1.000001) {
    t326 = pmf_sqrt(t500 / (t507 == 0.0 ? 1.0E-16 : t507));
  } else {
    t326 = 1.0000004999998751;
  }

  Steam_Generator_thermal_liquid_Cdot = t323 <= t322 ? t323 : t322;
  t477 = pmf_pow(Steam_Generator_UA_mix, 0.8) * pmf_pow(t319, 0.33) * 0.05;
  t476 = (pmf_pow((intrm_sf_mf_393 + Steam_Generator_thermal_liquid_Cdot) *
                  (t326 - 1.0) + 1.0, 1.8) - pmf_pow((t326 - 1.0) *
           Steam_Generator_thermal_liquid_Cdot + 1.0, 1.8)) * (t477 / 1.8 /
    (t326 - 1.0 == 0.0 ? 1.0E-16 : t326 - 1.0));
  t319 = t476 / (intrm_sf_mf_393 == 0.0 ? 1.0E-16 : intrm_sf_mf_393);
  t322 = t319 > 3.66 ? t319 : 3.66;
  tlu2_2d_linear_nearest_value(&sb_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], &t20.mField0[0ULL], &t20.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField10, &t59[0ULL], &t30[0ULL], &t31[0ULL]);
  t304[0] = sb_efOut[0];
  t319 = t304[0ULL];
  t477 = t322 * t319 / 0.02 * 10.367255756846319;
  t322 = Condenser_UA_liq + 1.0 / (t477 == 0.0 ? 1.0E-16 : t477);
  t319 = t330 > 0.5 ? t330 : 0.5;
  t477 = t510 * 0.034557519189487726;
  t323 = t453 / (t477 == 0.0 ? 1.0E-16 : t477);
  intrm_sf_mf_393 = t323 > 1000.0 ? t323 : 1000.0;
  t453 = pmf_log10(6.9 / (intrm_sf_mf_393 == 0.0 ? 1.0E-16 : intrm_sf_mf_393) +
                   7.9545220244797035E-5) * pmf_log10(6.9 / (intrm_sf_mf_393 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_393) + 7.9545220244797035E-5) * 3.24;
  Steam_Generator_UA_mix = 1.0 / (t453 == 0.0 ? 1.0E-16 : t453);
  t477 = (pmf_pow(t319, 0.66666666666666663) - 1.0) * pmf_sqrt
    (Steam_Generator_UA_mix / 8.0) * 12.7 + 1.0;
  t319 = (intrm_sf_mf_393 - 1000.0) * (Steam_Generator_UA_mix / 8.0) * t319 /
    (t477 == 0.0 ? 1.0E-16 : t477);
  intrm_sf_mf_393 = (t323 - 2000.0) / 2000.0;
  Steam_Generator_UA_mix = intrm_sf_mf_393 * intrm_sf_mf_393 * 3.0 -
    intrm_sf_mf_393 * intrm_sf_mf_393 * intrm_sf_mf_393 * 2.0;
  if (t323 <= 2000.0) {
    intrm_sf_mf_393 = 3.66;
  } else if (t323 >= 4000.0) {
    intrm_sf_mf_393 = t319;
  } else {
    intrm_sf_mf_393 = (1.0 - Steam_Generator_UA_mix) * 3.66 + t319 *
      Steam_Generator_UA_mix;
  }

  t453 = t511 * intrm_sf_mf_393 / 0.02 * 10.367255756846319;
  t323 = Condenser_UA_liq + 1.0 / (t453 == 0.0 ? 1.0E-16 : t453);
  Condenser_UA_liq = 1.0 / (Condenser_UA_vap == 0.0 ? 1.0E-16 : Condenser_UA_vap);
  t319 = 1.0 / (t322 == 0.0 ? 1.0E-16 : t322);
  Condenser_UA_vap = 1.0 / (t323 == 0.0 ? 1.0E-16 : t323);
  t314[0ULL] = X[88ULL];
  tlu2_linear_linear_prelookup(&tb_efOut.mField0[0ULL], &tb_efOut.mField1[0ULL],
    &tb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t314[0ULL],
    &t30[0ULL], &t31[0ULL]);
  t25 = tb_efOut;
  tlu2_1d_linear_linear_value(&ub_efOut[0ULL], &t25.mField0[0ULL], &t25.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t30[0ULL], &t31[0ULL]);
  t304[0] = ub_efOut[0];
  t322 = t304[0ULL];
  tlu2_1d_linear_linear_value(&vb_efOut[0ULL], &t25.mField0[0ULL], &t25.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t30[0ULL], &t31[0ULL]);
  t304[0] = vb_efOut[0];
  t323 = t304[0ULL];
  if (X[89ULL] <= t322) {
    intrm_sf_mf_393 = X[89ULL] / (t322 == 0.0 ? 1.0E-16 : t322) - 1.0;
  } else if (X[89ULL] >= t323) {
    intrm_sf_mf_393 = (X[89ULL] - 4000.0) / (4000.0 - t323 == 0.0 ? 1.0E-16 :
      4000.0 - t323) + 2.0;
  } else {
    t286_idx_0 = t323 - t322;
    intrm_sf_mf_393 = (X[89ULL] - t322) / (t286_idx_0 == 0.0 ? 1.0E-16 :
      t286_idx_0);
  }

  if (X[154ULL] <= intrm_sf_mf_382) {
    t322 = X[154ULL] / (intrm_sf_mf_382 == 0.0 ? 1.0E-16 : intrm_sf_mf_382) -
      1.0;
  } else if (X[154ULL] >= Steam_Generator_two_phase_fluid_Cdot_threshold) {
    t322 = (X[154ULL] - 4000.0) / (4000.0 -
      Steam_Generator_two_phase_fluid_Cdot_threshold == 0.0 ? 1.0E-16 : 4000.0 -
      Steam_Generator_two_phase_fluid_Cdot_threshold) + 2.0;
  } else {
    t286_idx_0 = Steam_Generator_two_phase_fluid_Cdot_threshold -
      intrm_sf_mf_382;
    t322 = (X[154ULL] - intrm_sf_mf_382) / (t286_idx_0 == 0.0 ? 1.0E-16 :
      t286_idx_0);
  }

  if (X[156ULL] <= intrm_sf_mf_382) {
    t323 = X[156ULL] / (intrm_sf_mf_382 == 0.0 ? 1.0E-16 : intrm_sf_mf_382) -
      1.0;
  } else if (X[156ULL] >= Steam_Generator_two_phase_fluid_Cdot_threshold) {
    t323 = (X[156ULL] - 4000.0) / (4000.0 -
      Steam_Generator_two_phase_fluid_Cdot_threshold == 0.0 ? 1.0E-16 : 4000.0 -
      Steam_Generator_two_phase_fluid_Cdot_threshold) + 2.0;
  } else {
    t286_idx_0 = Steam_Generator_two_phase_fluid_Cdot_threshold -
      intrm_sf_mf_382;
    t323 = (X[156ULL] - intrm_sf_mf_382) / (t286_idx_0 == 0.0 ? 1.0E-16 :
      t286_idx_0);
  }

  if (X[200ULL] <= 1082.1904733151327) {
    intrm_sf_mf_382 = X[200ULL] / 1082.1904733151327 - 1.0;
  } else if (X[200ULL] >= 2601.6367101330361) {
    intrm_sf_mf_382 = (X[200ULL] - 4000.0) / 1398.3632898669639 + 2.0;
  } else {
    intrm_sf_mf_382 = (X[200ULL] - 1082.1904733151327) / 1519.4462368179034;
  }

  t314[0ULL] = X[36ULL];
  tlu2_linear_nearest_prelookup(&wb_efOut.mField0[0ULL], &wb_efOut.mField1[0ULL],
    &wb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t314[0ULL],
    &t44[0ULL], &t31[0ULL]);
  t27 = wb_efOut;
  t314[0ULL] = X[37ULL];
  tlu2_linear_nearest_prelookup(&xb_efOut.mField0[0ULL], &xb_efOut.mField1[0ULL],
    &xb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t314[0ULL],
    &t47[0ULL], &t31[0ULL]);
  t18 = xb_efOut;
  tlu2_2d_linear_nearest_value(&yb_efOut[0ULL], &t27.mField0[0ULL],
    &t27.mField2[0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField9, &t44[0ULL], &t47[0ULL], &t31[0ULL]);
  t304[0] = yb_efOut[0];
  Steam_Generator_UA_liq = t304[0ULL];
  t314[0ULL] = X[38ULL];
  tlu2_linear_nearest_prelookup(&ac_efOut.mField0[0ULL], &ac_efOut.mField1[0ULL],
    &ac_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t314[0ULL],
    &t44[0ULL], &t31[0ULL]);
  t23 = ac_efOut;
  tlu2_2d_linear_nearest_value(&bc_efOut[0ULL], &t23.mField0[0ULL],
    &t23.mField2[0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField9, &t44[0ULL], &t47[0ULL], &t31[0ULL]);
  t304[0] = bc_efOut[0];
  intrm_sf_mf_511 = t304[0ULL];
  Steam_Generator_UA_liq = (Steam_Generator_UA_liq + intrm_sf_mf_511) / 2.0;
  intrm_sf_mf_511 = Steam_Generator_UA_liq * 0.42000000000000004 / 0.018;
  t314[0ULL] = X[39ULL];
  tlu2_linear_nearest_prelookup(&cc_efOut.mField0[0ULL], &cc_efOut.mField1[0ULL],
    &cc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t314[0ULL],
    &t30[0ULL], &t31[0ULL]);
  t26 = cc_efOut;
  tlu2_2d_linear_nearest_value(&dc_efOut[0ULL], &t24.mField0[0ULL],
    &t24.mField2[0ULL], &t26.mField0[0ULL], &t26.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t59[0ULL], &t30[0ULL], &t31[0ULL]);
  t304[0] = dc_efOut[0];
  Steam_Generator_two_phase_fluid_Cdot_threshold = t304[0ULL];
  Steam_Generator_two_phase_fluid_Cdot_threshold =
    Steam_Generator_two_phase_fluid_Cdot_threshold * 0.090811662642829971 /
    0.025;
  t314[0ULL] = X[36ULL];
  tlu2_linear_linear_prelookup(&ec_efOut.mField0[0ULL], &ec_efOut.mField1[0ULL],
    &ec_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t314[0ULL],
    &t44[0ULL], &t31[0ULL]);
  t20 = ec_efOut;
  t314[0ULL] = X[37ULL];
  tlu2_linear_linear_prelookup(&fc_efOut.mField0[0ULL], &fc_efOut.mField1[0ULL],
    &fc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t314[0ULL],
    &t47[0ULL], &t31[0ULL]);
  t22 = fc_efOut;
  tlu2_2d_linear_linear_value(&gc_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t22.mField0[0ULL], &t22.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField11, &t44[0ULL], &t47[0ULL], &t31[0ULL]);
  t304[0] = gc_efOut[0];
  Steam_Generator_UA_mix = t304[0ULL];
  t314[0ULL] = X[38ULL];
  tlu2_linear_linear_prelookup(&hc_efOut.mField0[0ULL], &hc_efOut.mField1[0ULL],
    &hc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t314[0ULL],
    &t44[0ULL], &t31[0ULL]);
  t25 = hc_efOut;
  tlu2_2d_linear_linear_value(&ic_efOut[0ULL], &t25.mField0[0ULL], &t25.mField2
    [0ULL], &t22.mField0[0ULL], &t22.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField11, &t44[0ULL], &t47[0ULL], &t31[0ULL]);
  t304[0] = ic_efOut[0];
  t326 = t304[0ULL];
  Steam_Generator_UA_mix = (Steam_Generator_UA_mix + t326) / 2.0;
  t326 = (X[189ULL] - (-X[68ULL])) / 2.0;
  Steam_Generator_thermal_liquid_Cdot = tanh(Steam_Generator_UA_mix * t326 * 3.0
    / (intrm_sf_mf_511 == 0.0 ? 1.0E-16 : intrm_sf_mf_511)) *
    Steam_Generator_UA_mix * t326;
  t314[0ULL] = X[39ULL];
  tlu2_linear_linear_prelookup(&jc_efOut.mField0[0ULL], &jc_efOut.mField1[0ULL],
    &jc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t314[0ULL],
    &t30[0ULL], &t31[0ULL]);
  t25 = jc_efOut;
  tlu2_1d_linear_linear_value(&kc_efOut[0ULL], &t25.mField0[0ULL], &t25.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t30[0ULL], &t31[0ULL]);
  t304[0] = kc_efOut[0];
  intrm_sf_mf_511 = t304[0ULL];
  tlu2_1d_linear_linear_value(&lc_efOut[0ULL], &t25.mField0[0ULL], &t25.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t30[0ULL], &t31[0ULL]);
  t304[0] = lc_efOut[0];
  Steam_Generator_UA_mix = t304[0ULL];
  if (X[40ULL] <= intrm_sf_mf_511) {
    t330 = X[40ULL] / (intrm_sf_mf_511 == 0.0 ? 1.0E-16 : intrm_sf_mf_511) - 1.0;
  } else if (X[40ULL] >= Steam_Generator_UA_mix) {
    t330 = (X[40ULL] - 4000.0) / (4000.0 - Steam_Generator_UA_mix == 0.0 ?
      1.0E-16 : 4000.0 - Steam_Generator_UA_mix) + 2.0;
  } else {
    t286_idx_0 = Steam_Generator_UA_mix - intrm_sf_mf_511;
    t330 = (X[40ULL] - intrm_sf_mf_511) / (t286_idx_0 == 0.0 ? 1.0E-16 :
      t286_idx_0);
  }

  if (X[41ULL] <= intrm_sf_mf_511) {
    t511 = X[41ULL] / (intrm_sf_mf_511 == 0.0 ? 1.0E-16 : intrm_sf_mf_511) - 1.0;
  } else if (X[41ULL] >= Steam_Generator_UA_mix) {
    t511 = (X[41ULL] - 4000.0) / (4000.0 - Steam_Generator_UA_mix == 0.0 ?
      1.0E-16 : 4000.0 - Steam_Generator_UA_mix) + 2.0;
  } else {
    t286_idx_0 = Steam_Generator_UA_mix - intrm_sf_mf_511;
    t511 = (X[41ULL] - intrm_sf_mf_511) / (t286_idx_0 == 0.0 ? 1.0E-16 :
      t286_idx_0);
  }

  t314[0ULL] = ((t330 < 0.0 ? t330 : 0.0) + (t511 < 0.0 ? t511 : 0.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&mc_efOut.mField0[0ULL], &mc_efOut.mField1[0ULL],
    &mc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t314[0ULL],
    &t59[0ULL], &t31[0ULL]);
  t20 = mc_efOut;
  tlu2_2d_linear_nearest_value(&nc_efOut[0ULL], &t20.mField0[0ULL],
    &t20.mField2[0ULL], &t26.mField0[0ULL], &t26.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t59[0ULL], &t30[0ULL], &t31[0ULL]);
  t304[0] = nc_efOut[0];
  Steam_Generator_two_phase_fluid_Re_sat_liq = t304[0ULL];
  tlu2_2d_linear_nearest_value(&oc_efOut[0ULL], &t20.mField0[0ULL],
    &t20.mField2[0ULL], &t26.mField0[0ULL], &t26.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t59[0ULL], &t30[0ULL], &t31[0ULL]);
  t304[0] = oc_efOut[0];
  t510 = t304[0ULL];
  tlu2_2d_linear_nearest_value(&pc_efOut[0ULL], &t20.mField0[0ULL],
    &t20.mField2[0ULL], &t26.mField0[0ULL], &t26.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField13, &t59[0ULL], &t30[0ULL], &t31[0ULL]);
  t304[0] = pc_efOut[0];
  t507 = t304[0ULL];
  intrm_sf_mf_548 = Steam_Generator_two_phase_fluid_Re_sat_liq * t510 / (t507 ==
    0.0 ? 1.0E-16 : t507);
  if (-X[161ULL] > 0.0) {
    intrm_sf_mf_547 = -X[161ULL];
  } else {
    intrm_sf_mf_547 = 0.0;
  }

  t500 = tanh((X[163ULL] - (-X[161ULL])) * intrm_sf_mf_548 * 3.0 /
              (Steam_Generator_two_phase_fluid_Cdot_threshold == 0.0 ? 1.0E-16 :
               Steam_Generator_two_phase_fluid_Cdot_threshold));
  Steam_Generator_two_phase_fluid_Cdot_threshold = (t500 + 1.0) / 2.0 * (X
    [163ULL] > 0.0 ? X[163ULL] : 0.0) + (1.0 - t500) / 2.0 * intrm_sf_mf_547;
  t336 = X[43ULL] >= 0.0 ? X[43ULL] : 0.0;
  intrm_sf_mf_547 = X[44ULL] >= 0.0 ? X[44ULL] : 0.0;
  t477 = t336 + X[216ULL];
  t286_idx_0 = (t336 + X[216ULL]) * (1.0 - pmf_exp(-X[42ULL] / (t477 == 0.0 ?
    1.0E-16 : t477)));
  t453 = intrm_sf_mf_548 * intrm_sf_mf_547 + X[216ULL];
  t500 = t286_idx_0 / (t453 == 0.0 ? 1.0E-16 : t453);
  Steam_Generator_two_phase_fluid_unorm_in_vap = t500 <= 15.0 ? t500 : 15.0;
  t314[0ULL] = t330;
  tlu2_linear_linear_prelookup(&qc_efOut.mField0[0ULL], &qc_efOut.mField1[0ULL],
    &qc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t314[0ULL],
    &t59[0ULL], &t31[0ULL]);
  t20 = qc_efOut;
  tlu2_2d_linear_linear_value(&rc_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t25.mField0[0ULL], &t25.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t59[0ULL], &t30[0ULL], &t31[0ULL]);
  t304[0] = rc_efOut[0];
  t500 = t304[0ULL];
  t488 = X[39ULL] * t500 * 100.0 + X[40ULL];
  tlu2_2d_linear_linear_value(&sc_efOut[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &t25.mField0[0ULL], &t25.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t59[0ULL], &t30[0ULL], &t31[0ULL]);
  t304[0] = sc_efOut[0];
  t500 = t304[0ULL];
  t497 = X[39ULL] * t500 * 100.0 + intrm_sf_mf_511;
  intrm_sf_mf_511 = (t497 - t488) / (intrm_sf_mf_548 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_548);
  t501 = (1.0 - pmf_exp(-Steam_Generator_two_phase_fluid_unorm_in_vap)) * X
    [215ULL];
  intrm_sf_mf_531 = (t501 > intrm_sf_mf_511 * 1000.0);
  intrm_sf_mf_503 = (t488 < t497);
  intrm_sf_mf_533 = (t488 > t497);
  tlu2_2d_linear_linear_value(&tc_efOut[0ULL], &t21.mField0[0ULL], &t21.mField2
    [0ULL], &t25.mField0[0ULL], &t25.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t59[0ULL], &t30[0ULL], &t31[0ULL]);
  t304[0] = tc_efOut[0];
  t343 = t304[0ULL];
  t482 = X[39ULL] * t343 * 100.0 + Steam_Generator_UA_mix;
  intrm_sf_mf_518 = (t488 > t482);
  intrm_sf_mf_521 = (X[215ULL] < 0.0);
  intrm_sf_mf_522 = (X[215ULL] > 0.0);
  if (intrm_sf_mf_522) {
    if (intrm_sf_mf_503) {
      if (intrm_sf_mf_531) {
        t286_idx_0 = -pmf_log((X[215ULL] - intrm_sf_mf_511 * 1000.0) / (X[215ULL]
          == 0.0 ? 1.0E-16 : X[215ULL]));
        Steam_Generator_UA_mix = t286_idx_0 /
          (Steam_Generator_two_phase_fluid_unorm_in_vap == 0.0 ? 1.0E-16 :
           Steam_Generator_two_phase_fluid_unorm_in_vap);
      } else {
        Steam_Generator_UA_mix = 1.0;
      }
    } else {
      Steam_Generator_UA_mix = 0.0;
    }
  } else {
    Steam_Generator_UA_mix = intrm_sf_mf_521 ? intrm_sf_mf_518 ? 0.0 : (real_T)
      !intrm_sf_mf_533 : (real_T)intrm_sf_mf_503;
  }

  t314[0ULL] = ((t330 > 1.0 ? t330 : 1.0) + (t511 > 1.0 ? t511 : 1.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&uc_efOut.mField0[0ULL], &uc_efOut.mField1[0ULL],
    &uc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t314[0ULL],
    &t59[0ULL], &t31[0ULL]);
  t25 = uc_efOut;
  tlu2_2d_linear_nearest_value(&vc_efOut[0ULL], &t25.mField0[0ULL],
    &t25.mField2[0ULL], &t26.mField0[0ULL], &t26.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t59[0ULL], &t30[0ULL], &t31[0ULL]);
  t314[0] = vc_efOut[0];
  Steam_Generator_two_phase_fluid_unorm_in_vap = t314[0ULL];
  tlu2_2d_linear_nearest_value(&wc_efOut[0ULL], &t25.mField0[0ULL],
    &t25.mField2[0ULL], &t26.mField0[0ULL], &t26.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t59[0ULL], &t30[0ULL], &t31[0ULL]);
  t314[0] = wc_efOut[0];
  t345 = t314[0ULL];
  tlu2_2d_linear_nearest_value(&xc_efOut[0ULL], &t25.mField0[0ULL],
    &t25.mField2[0ULL], &t26.mField0[0ULL], &t26.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField13, &t59[0ULL], &t30[0ULL], &t31[0ULL]);
  t314[0] = xc_efOut[0];
  t346 = t314[0ULL];
  t347 = Steam_Generator_two_phase_fluid_unorm_in_vap * t345 / (t346 == 0.0 ?
    1.0E-16 : t346);
  t476 = (t336 + X[216ULL]) * (1.0 - pmf_exp(-X[45ULL] / (t477 == 0.0 ? 1.0E-16 :
    t477)));
  t286_idx_0 = X[216ULL] + t347 * intrm_sf_mf_547;
  intrm_sf_mf_547 = t476 / (t286_idx_0 == 0.0 ? 1.0E-16 : t286_idx_0);
  intrm_sf_mf_527 = intrm_sf_mf_547 <= 15.0 ? intrm_sf_mf_547 : 15.0;
  intrm_sf_mf_547 = (t482 - t488) / (t347 == 0.0 ? 1.0E-16 : t347);
  intrm_sf_mf_498 = (t488 < t482);
  t349 = (1.0 - pmf_exp(-intrm_sf_mf_527)) * X[215ULL];
  intrm_sf_mf_516 = (t349 < intrm_sf_mf_547 * 1000.0);
  intrm_sf_mf_519 = (t488 <= t482);
  if (intrm_sf_mf_522) {
    t350 = intrm_sf_mf_503 ? 0.0 : (real_T)!intrm_sf_mf_498;
  } else if (intrm_sf_mf_521) {
    if (intrm_sf_mf_518) {
      if (intrm_sf_mf_516) {
        t286_idx_0 = -pmf_log((X[215ULL] - intrm_sf_mf_547 * 1000.0) / (X[215ULL]
          == 0.0 ? 1.0E-16 : X[215ULL]));
        t350 = t286_idx_0 / (intrm_sf_mf_527 == 0.0 ? 1.0E-16 : intrm_sf_mf_527);
      } else {
        t350 = 1.0;
      }
    } else {
      t350 = 0.0;
    }
  } else {
    t350 = intrm_sf_mf_503 ? 0.0 : (real_T)!intrm_sf_mf_519;
  }

  intrm_sf_mf_527 = (1.0 - Steam_Generator_UA_mix) - t350;
  t476 = (t336 + X[216ULL]) * (1.0 - pmf_exp(-X[46ULL] / (t477 == 0.0 ? 1.0E-16 :
    t477)));
  t477 = t453 / (intrm_sf_mf_548 == 0.0 ? 1.0E-16 : intrm_sf_mf_548);
  t336 = t476 / (t477 == 0.0 ? 1.0E-16 : t477);
  if (intrm_sf_mf_522) {
    if (intrm_sf_mf_503) {
      t286_idx_0 = X[215ULL] - intrm_sf_mf_511 * 1000.0;
    } else if (intrm_sf_mf_498) {
      t286_idx_0 = X[215ULL];
    } else {
      t286_idx_0 = X[215ULL] - intrm_sf_mf_547 * 1000.0;
    }
  } else if (intrm_sf_mf_521) {
    if (intrm_sf_mf_518) {
      t286_idx_0 = X[215ULL] - intrm_sf_mf_547 * 1000.0;
    } else if (intrm_sf_mf_533) {
      t286_idx_0 = X[215ULL];
    } else {
      t286_idx_0 = X[215ULL] - intrm_sf_mf_511 * 1000.0;
    }
  } else if (intrm_sf_mf_503) {
    t286_idx_0 = intrm_sf_mf_511 * 1000.0 + X[215ULL];
  } else if (intrm_sf_mf_519) {
    t286_idx_0 = X[215ULL];
  } else {
    t286_idx_0 = intrm_sf_mf_547 * 1000.0 + X[215ULL];
  }

  if (intrm_sf_mf_522) {
    if (intrm_sf_mf_503) {
      if (intrm_sf_mf_531) {
        intrm_sf_mf_511 = t497;
      } else {
        intrm_sf_mf_511 = intrm_sf_mf_548 * t501 * 0.001 + t488;
      }
    } else if (intrm_sf_mf_498) {
      intrm_sf_mf_511 = t488;
    } else {
      intrm_sf_mf_511 = t347 * t349 * 0.001 + t488;
    }
  } else if (intrm_sf_mf_521) {
    if (intrm_sf_mf_518) {
      if (intrm_sf_mf_516) {
        intrm_sf_mf_511 = t482;
      } else {
        intrm_sf_mf_511 = t347 * t349 * 0.001 + t488;
      }
    } else if (intrm_sf_mf_533) {
      intrm_sf_mf_511 = t488;
    } else {
      intrm_sf_mf_511 = intrm_sf_mf_548 * t501 * 0.001 + t488;
    }
  } else if (intrm_sf_mf_503) {
    intrm_sf_mf_511 = intrm_sf_mf_548 * t501 * 0.001 + t488;
  } else if (intrm_sf_mf_519) {
    intrm_sf_mf_511 = t488;
  } else {
    intrm_sf_mf_511 = t347 * t349 * 0.001 + t488;
  }

  intrm_sf_mf_548 = t497 - intrm_sf_mf_511;
  intrm_sf_mf_547 = t482 - intrm_sf_mf_511;
  t488 = t336 * t286_idx_0 * intrm_sf_mf_527;
  if (intrm_sf_mf_522) {
    if (intrm_sf_mf_511 < t482) {
      if (t488 * 0.001 > intrm_sf_mf_547) {
        intrm_sf_mf_511 = intrm_sf_mf_547 / (t286_idx_0 == 0.0 ? 1.0E-16 :
          t286_idx_0) / (t336 == 0.0 ? 1.0E-16 : t336) * 1000.0;
      } else {
        intrm_sf_mf_511 = intrm_sf_mf_527;
      }
    } else {
      intrm_sf_mf_511 = 0.0;
    }
  } else if (intrm_sf_mf_521) {
    if (intrm_sf_mf_511 > t497) {
      if (t488 * 0.001 < intrm_sf_mf_548) {
        intrm_sf_mf_511 = intrm_sf_mf_548 / (t286_idx_0 == 0.0 ? 1.0E-16 :
          t286_idx_0) / (t336 == 0.0 ? 1.0E-16 : t336) * 1000.0;
      } else {
        intrm_sf_mf_511 = intrm_sf_mf_527;
      }
    } else {
      intrm_sf_mf_511 = 0.0;
    }
  } else {
    intrm_sf_mf_511 = intrm_sf_mf_527;
  }

  intrm_sf_mf_548 = intrm_sf_mf_527 - intrm_sf_mf_511;
  intrm_sf_mf_547 = Steam_Generator_UA_mix + (intrm_sf_mf_522 ? 0.0 :
    intrm_sf_mf_521 ? intrm_sf_mf_548 : 0.0);
  intrm_sf_mf_548 = t350 + (intrm_sf_mf_522 ? intrm_sf_mf_548 : 0.0);
  tlu2_2d_linear_nearest_value(&yc_efOut[0ULL], &t27.mField0[0ULL],
    &t27.mField2[0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField14, &t44[0ULL], &t47[0ULL], &t31[0ULL]);
  t314[0] = yc_efOut[0];
  Steam_Generator_UA_mix = t314[0ULL];
  tlu2_2d_linear_nearest_value(&ad_efOut[0ULL], &t23.mField0[0ULL],
    &t23.mField2[0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField14, &t44[0ULL], &t47[0ULL], &t31[0ULL]);
  t314[0] = ad_efOut[0];
  t336 = t314[0ULL];
  Steam_Generator_UA_mix = (Steam_Generator_UA_mix + t336) / 2.0;
  t482 = Steam_Generator_UA_mix * 0.42000000000000004;
  Steam_Generator_UA_mix = t326 * 0.018 / (t482 == 0.0 ? 1.0E-16 : t482);
  t326 = pmf_sqrt(Steam_Generator_UA_mix * Steam_Generator_UA_mix + 100.0);
  Steam_Generator_UA_mix = t326 * 29.915749795368463;
  t336 = t326 * pmf_sqrt(t326) * pmf_sqrt(pmf_sqrt(t326)) * 1.996694297036971;
  if (t326 > 250000.0) {
    t488 = (t326 - 250000.0) / 325000.0 + 1.0;
  } else {
    t488 = 1.0;
  }

  t326 = 1.0 - pmf_exp(-(t326 + 200.0) / 1000.0);
  t497 = t336 * t488 * t326 + Steam_Generator_UA_mix;
  tlu2_2d_linear_nearest_value(&bd_efOut[0ULL], &t27.mField0[0ULL],
    &t27.mField2[0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField15, &t44[0ULL], &t47[0ULL], &t31[0ULL]);
  t314[0] = bd_efOut[0];
  Steam_Generator_UA_mix = t314[0ULL];
  tlu2_2d_linear_nearest_value(&cd_efOut[0ULL], &t23.mField0[0ULL],
    &t23.mField2[0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField15, &t44[0ULL], &t47[0ULL], &t31[0ULL]);
  t314[0] = cd_efOut[0];
  t326 = t314[0ULL];
  Steam_Generator_UA_mix = (Steam_Generator_UA_mix + t326) / 2.0;
  Steam_Generator_UA_mix = pmf_pow(t497 * Steam_Generator_UA_mix *
    0.55399065447813123, 0.33333333333333331) * 0.404;
  t488 = Steam_Generator_UA_mix * Steam_Generator_UA_liq / 0.018 *
    23.750440461138837;
  Steam_Generator_UA_liq = 1.0 / (t488 == 0.0 ? 1.0E-16 : t488);
  Steam_Generator_UA_mix = Steam_Generator_two_phase_fluid_Re_sat_liq > 0.5 ?
    Steam_Generator_two_phase_fluid_Re_sat_liq : 0.5;
  t488 = Steam_Generator_two_phase_fluid_Cdot_threshold * 0.025;
  t497 = t507 * 0.090811662642829971;
  t326 = t488 / (t497 == 0.0 ? 1.0E-16 : t497);
  Steam_Generator_two_phase_fluid_Re_sat_liq = t326 > 1000.0 ? t326 : 1000.0;
  t497 = pmf_log10(6.9 / (Steam_Generator_two_phase_fluid_Re_sat_liq == 0.0 ?
    1.0E-16 : Steam_Generator_two_phase_fluid_Re_sat_liq) +
                   6.2093190311196615E-5) * pmf_log10(6.9 /
    (Steam_Generator_two_phase_fluid_Re_sat_liq == 0.0 ? 1.0E-16 :
     Steam_Generator_two_phase_fluid_Re_sat_liq) + 6.2093190311196615E-5) * 3.24;
  t507 = 1.0 / (t497 == 0.0 ? 1.0E-16 : t497);
  t501 = (pmf_pow(Steam_Generator_UA_mix, 0.66666666666666663) - 1.0) * pmf_sqrt
    (t507 / 8.0) * 12.7 + 1.0;
  Steam_Generator_UA_mix = (Steam_Generator_two_phase_fluid_Re_sat_liq - 1000.0)
    * (t507 / 8.0) * Steam_Generator_UA_mix / (t501 == 0.0 ? 1.0E-16 : t501);
  Steam_Generator_two_phase_fluid_Re_sat_liq = (t326 - 2000.0) / 2000.0;
  t507 = Steam_Generator_two_phase_fluid_Re_sat_liq *
    Steam_Generator_two_phase_fluid_Re_sat_liq * 3.0 -
    Steam_Generator_two_phase_fluid_Re_sat_liq *
    Steam_Generator_two_phase_fluid_Re_sat_liq *
    Steam_Generator_two_phase_fluid_Re_sat_liq * 2.0;
  if (t326 <= 2000.0) {
    Steam_Generator_two_phase_fluid_Re_sat_liq = 3.66;
  } else if (t326 >= 4000.0) {
    Steam_Generator_two_phase_fluid_Re_sat_liq = Steam_Generator_UA_mix;
  } else {
    Steam_Generator_two_phase_fluid_Re_sat_liq = (1.0 - t507) * 3.66 +
      Steam_Generator_UA_mix * t507;
  }

  t497 = t510 * Steam_Generator_two_phase_fluid_Re_sat_liq / 0.025 *
    145.29866022852792;
  t326 = Steam_Generator_UA_liq + 1.0 / (t497 == 0.0 ? 1.0E-16 : t497);
  tlu2_2d_linear_nearest_value(&dd_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], &t26.mField0[0ULL], &t26.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField12, &t59[0ULL], &t30[0ULL], &t31[0ULL]);
  t314[0] = dd_efOut[0];
  Steam_Generator_UA_mix = t314[0ULL];
  tlu2_2d_linear_nearest_value(&ed_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], &t26.mField0[0ULL], &t26.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField13, &t59[0ULL], &t30[0ULL], &t31[0ULL]);
  t314[0] = ed_efOut[0];
  Steam_Generator_two_phase_fluid_Re_sat_liq = t314[0ULL];
  t497 = Steam_Generator_two_phase_fluid_Re_sat_liq * 0.090811662642829971;
  Steam_Generator_two_phase_fluid_Re_sat_liq = t488 / (t497 == 0.0 ? 1.0E-16 :
    t497);
  t510 = Steam_Generator_two_phase_fluid_Re_sat_liq > 1.0 ?
    Steam_Generator_two_phase_fluid_Re_sat_liq : 1.0;
  Steam_Generator_two_phase_fluid_Re_sat_liq = t330 <= 0.0 ? 0.0 : t330 >= 1.0 ?
    1.0 : t330;
  t330 = t511 <= 0.0 ? 0.0 : t511 >= 1.0 ? 1.0 : t511;
  if (t330 - Steam_Generator_two_phase_fluid_Re_sat_liq > 1.0E-6) {
    t511 = t330 - Steam_Generator_two_phase_fluid_Re_sat_liq;
  } else if (Steam_Generator_two_phase_fluid_Re_sat_liq - t330 > 1.0E-6) {
    t511 = Steam_Generator_two_phase_fluid_Re_sat_liq - t330;
  } else {
    t511 = 1.0E-6;
  }

  if (t343 / (t500 == 0.0 ? 1.0E-16 : t500) > 1.000001) {
    t507 = pmf_sqrt(t343 / (t500 == 0.0 ? 1.0E-16 : t500));
  } else {
    t507 = 1.0000004999998751;
  }

  t336 = Steam_Generator_two_phase_fluid_Re_sat_liq <= t330 ?
    Steam_Generator_two_phase_fluid_Re_sat_liq : t330;
  t500 = pmf_pow(t510, 0.8) * pmf_pow(Steam_Generator_UA_mix, 0.33) * 0.05;
  t501 = (pmf_pow((t511 + t336) * (t507 - 1.0) + 1.0, 1.8) - pmf_pow((t507 - 1.0)
           * t336 + 1.0, 1.8)) * (t500 / 1.8 / (t507 - 1.0 == 0.0 ? 1.0E-16 :
    t507 - 1.0));
  Steam_Generator_UA_mix = t501 / (t511 == 0.0 ? 1.0E-16 : t511);
  t330 = Steam_Generator_UA_mix > 3.66 ? Steam_Generator_UA_mix : 3.66;
  tlu2_2d_linear_nearest_value(&fd_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], &t26.mField0[0ULL], &t26.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField10, &t59[0ULL], &t30[0ULL], &t31[0ULL]);
  t314[0] = fd_efOut[0];
  Steam_Generator_UA_mix = t314[0ULL];
  t507 = t330 * Steam_Generator_UA_mix / 0.025 * 145.29866022852792;
  t330 = Steam_Generator_UA_liq + 1.0 / (t507 == 0.0 ? 1.0E-16 : t507);
  Steam_Generator_UA_mix = Steam_Generator_two_phase_fluid_unorm_in_vap > 0.5 ?
    Steam_Generator_two_phase_fluid_unorm_in_vap : 0.5;
  t507 = t346 * 0.090811662642829971;
  Steam_Generator_two_phase_fluid_Re_sat_liq = t488 / (t507 == 0.0 ? 1.0E-16 :
    t507);
  t511 = Steam_Generator_two_phase_fluid_Re_sat_liq > 1000.0 ?
    Steam_Generator_two_phase_fluid_Re_sat_liq : 1000.0;
  t507 = pmf_log10(6.9 / (t511 == 0.0 ? 1.0E-16 : t511) + 6.2093190311196615E-5)
    * pmf_log10(6.9 / (t511 == 0.0 ? 1.0E-16 : t511) + 6.2093190311196615E-5) *
    3.24;
  t510 = 1.0 / (t507 == 0.0 ? 1.0E-16 : t507);
  t336 = (pmf_pow(Steam_Generator_UA_mix, 0.66666666666666663) - 1.0) * pmf_sqrt
    (t510 / 8.0) * 12.7 + 1.0;
  Steam_Generator_UA_mix = (t511 - 1000.0) * (t510 / 8.0) *
    Steam_Generator_UA_mix / (t336 == 0.0 ? 1.0E-16 : t336);
  t511 = (Steam_Generator_two_phase_fluid_Re_sat_liq - 2000.0) / 2000.0;
  t510 = t511 * t511 * 3.0 - t511 * t511 * t511 * 2.0;
  if (Steam_Generator_two_phase_fluid_Re_sat_liq <= 2000.0) {
    t511 = 3.66;
  } else if (Steam_Generator_two_phase_fluid_Re_sat_liq >= 4000.0) {
    t511 = Steam_Generator_UA_mix;
  } else {
    t511 = (1.0 - t510) * 3.66 + Steam_Generator_UA_mix * t510;
  }

  t511 = t345 * t511 / 0.025 * 145.29866022852792;
  Steam_Generator_two_phase_fluid_Re_sat_liq = Steam_Generator_UA_liq + 1.0 /
    (t511 == 0.0 ? 1.0E-16 : t511);
  Steam_Generator_UA_mix = 1.0 / (t330 == 0.0 ? 1.0E-16 : t330);
  if (intrm_sf_mf_17 <= 0.0) {
    t330 = 0.0;
  } else {
    t330 = intrm_sf_mf_17 >= 1.0 ? 1.0 : intrm_sf_mf_17;
  }

  if (t317 <= 0.0) {
    intrm_sf_mf_17 = 0.0;
  } else {
    intrm_sf_mf_17 = t317 >= 1.0 ? 1.0 : t317;
  }

  if (t322 <= 0.0) {
    t317 = 0.0;
  } else {
    t317 = t322 >= 1.0 ? 1.0 : t322;
  }

  if (intrm_sf_mf_393 <= 0.0) {
    t322 = 0.0;
  } else {
    t322 = intrm_sf_mf_393 >= 1.0 ? 1.0 : intrm_sf_mf_393;
  }

  if (t323 <= 0.0) {
    intrm_sf_mf_393 = 0.0;
  } else {
    intrm_sf_mf_393 = t323 >= 1.0 ? 1.0 : t323;
  }

  if (intrm_sf_mf_382 <= 0.0) {
    t323 = 0.0;
  } else {
    t323 = intrm_sf_mf_382 >= 1.0 ? 1.0 : intrm_sf_mf_382;
  }

  out.mX[0] = X[1ULL] - t330;
  out.mX[1] = X[2ULL] - intrm_sf_mf_17;
  out.mX[2] = X[14ULL] - ((intrm_sf_mf_84 * 887.95879053290457 + t327 *
    12.468734081804515) + t316 * 835.15851362539183) * 0.051836278784231589;
  out.mX[3] = X[11ULL] - Condenser_UA_liq;
  out.mX[4] = X[12ULL] - Condenser_UA_vap;
  out.mX[5] = X[13ULL] - t319;
  out.mX[6] = X[10ULL] - Condenser_two_phase_fluid_mdot_hc_;
  out.mX[7] = X[9ULL] - t321;
  out.mX[8] = X[28ULL] - t317;
  out.mX[9] = X[29ULL] - t322;
  out.mX[10] = X[30ULL] - intrm_sf_mf_393;
  out.mX[11] = X[31ULL] - t323;
  out.mX[12] = X[47ULL] - ((intrm_sf_mf_547 * 834.90624651038911 +
    intrm_sf_mf_548 * 20.027703595261809) + intrm_sf_mf_511 * 798.39859540639281)
    * 0.90811662642829971;
  out.mX[13] = X[42ULL] - 1.0 / (t326 == 0.0 ? 1.0E-16 : t326);
  out.mX[14] = X[45ULL] - 1.0 / (Steam_Generator_two_phase_fluid_Re_sat_liq ==
    0.0 ? 1.0E-16 : Steam_Generator_two_phase_fluid_Re_sat_liq);
  out.mX[15] = X[46ULL] - Steam_Generator_UA_mix;
  out.mX[16] = X[44ULL] - Steam_Generator_two_phase_fluid_Cdot_threshold;
  out.mX[17] = X[43ULL] - Steam_Generator_thermal_liquid_Cdot;
  out.mX[18] = X[48ULL] - -3.1298600932886718;
  out.mX[19] = X[53ULL] - 0.999951172927387;
  out.mX[20] = X[54ULL] - -0.011732525778499104;
  out.mX[21] = X[49ULL] - 1.0993697139683174;
  out.mX[22] = X[51ULL] - 0.99996290521851983;
  out.mX[23] = X[50ULL] - -0.010732594604195204;
  out.mX[24] = X[52ULL] - -0.010732594604195204;
  (void)LC;
  (void)t513;
  return 0;
}
