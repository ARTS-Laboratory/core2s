/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv7/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv7_d632b26e_1_ds_sys_struct.h"
#include "PW_SMRv7_d632b26e_1_ds_icr.h"
#include "PW_SMRv7_d632b26e_1_ds.h"
#include "PW_SMRv7_d632b26e_1_ds_externals.h"
#include "PW_SMRv7_d632b26e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv7_d632b26e_1_ds_icr(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t492, NeDsMethodOutput *t493)
{
  ETTS0 bb_efOut;
  ETTS0 bc_efOut;
  ETTS0 cc_efOut;
  ETTS0 d_efOut;
  ETTS0 db_efOut;
  ETTS0 ec_efOut;
  ETTS0 efOut;
  ETTS0 fb_efOut;
  ETTS0 g_efOut;
  ETTS0 gc_efOut;
  ETTS0 h_efOut;
  ETTS0 hb_efOut;
  ETTS0 j_efOut;
  ETTS0 jc_efOut;
  ETTS0 l_efOut;
  ETTS0 m_efOut;
  ETTS0 nc_efOut;
  ETTS0 o_efOut;
  ETTS0 p_efOut;
  ETTS0 pb_efOut;
  ETTS0 r_efOut;
  ETTS0 rc_efOut;
  ETTS0 t10;
  ETTS0 t11;
  ETTS0 t14;
  ETTS0 t16;
  ETTS0 t18;
  ETTS0 t19;
  ETTS0 t20;
  ETTS0 t21;
  ETTS0 t24;
  ETTS0 t26;
  ETTS0 t_efOut;
  ETTS0 tb_efOut;
  ETTS0 ub_efOut;
  ETTS0 w_efOut;
  ETTS0 wb_efOut;
  ETTS0 yb_efOut;
  PmRealVector out;
  real_T X[183];
  real_T ab_efOut[1];
  real_T ac_efOut[1];
  real_T ad_efOut[1];
  real_T b_efOut[1];
  real_T bd_efOut[1];
  real_T c_efOut[1];
  real_T cb_efOut[1];
  real_T cd_efOut[1];
  real_T dc_efOut[1];
  real_T e_efOut[1];
  real_T eb_efOut[1];
  real_T f_efOut[1];
  real_T fc_efOut[1];
  real_T gb_efOut[1];
  real_T hc_efOut[1];
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
  real_T mc_efOut[1];
  real_T n_efOut[1];
  real_T nb_efOut[1];
  real_T ob_efOut[1];
  real_T oc_efOut[1];
  real_T pc_efOut[1];
  real_T q_efOut[1];
  real_T qb_efOut[1];
  real_T qc_efOut[1];
  real_T rb_efOut[1];
  real_T s_efOut[1];
  real_T sb_efOut[1];
  real_T sc_efOut[1];
  real_T t292[1];
  real_T t299[1];
  real_T tc_efOut[1];
  real_T u_efOut[1];
  real_T uc_efOut[1];
  real_T v_efOut[1];
  real_T vb_efOut[1];
  real_T vc_efOut[1];
  real_T wc_efOut[1];
  real_T x_efOut[1];
  real_T xb_efOut[1];
  real_T xc_efOut[1];
  real_T y_efOut[1];
  real_T yc_efOut[1];
  real_T Condenser_UA_liq;
  real_T Condenser_UA_vap;
  real_T Condenser_two_phase_fluid_f_vap;
  real_T Steam_Generator_UA_liq;
  real_T Steam_Generator_thermal_liquid_Hg_tur;
  real_T Steam_Generator_two_phase_fluid_Cdot_threshold;
  real_T Steam_Generator_two_phase_fluid_unorm_in_vap;
  real_T Steam_Generator_two_phase_fluid_v_sat_vap;
  real_T intrm_sf_mf_17;
  real_T intrm_sf_mf_325;
  real_T intrm_sf_mf_337;
  real_T intrm_sf_mf_445;
  real_T intrm_sf_mf_455;
  real_T intrm_sf_mf_61;
  real_T intrm_sf_mf_84;
  real_T intrm_sf_mf_85;
  real_T t275_idx_0;
  real_T t307;
  real_T t308;
  real_T t309;
  real_T t311;
  real_T t313;
  real_T t314;
  real_T t316;
  real_T t318;
  real_T t321;
  real_T t323;
  real_T t325;
  real_T t333;
  real_T t334;
  real_T t335;
  real_T t337;
  real_T t338;
  real_T t438;
  real_T t456;
  real_T t457;
  real_T t462;
  real_T t468;
  real_T t472;
  real_T t479;
  real_T t480;
  real_T t482;
  real_T t491;
  size_t t29[1];
  size_t t30[1];
  size_t t43[1];
  size_t t46[1];
  size_t t58[1];
  int32_T b;
  boolean_T intrm_sf_mf_420;
  boolean_T intrm_sf_mf_421;
  boolean_T intrm_sf_mf_432;
  boolean_T intrm_sf_mf_434;
  boolean_T intrm_sf_mf_436;
  boolean_T intrm_sf_mf_437;
  boolean_T intrm_sf_mf_439;
  boolean_T intrm_sf_mf_440;
  boolean_T intrm_sf_mf_451;
  for (b = 0; b < 183; b++) {
    X[b] = t492->mX.mX[b];
  }

  out = t493->mICR;
  t299[0ULL] = X[0ULL];
  t29[0] = 100ULL;
  t30[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t299[0ULL], &t29
    [0ULL], &t30[0ULL]);
  t24 = efOut;
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t29[0ULL], &t30[0ULL]);
  t292[0] = b_efOut[0];
  intrm_sf_mf_325 = t292[0ULL];
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t29[0ULL], &t30[0ULL]);
  t275_idx_0 = c_efOut[0];
  Steam_Generator_two_phase_fluid_Cdot_threshold = t275_idx_0;
  if (X[42ULL] <= intrm_sf_mf_325) {
    intrm_sf_mf_17 = X[42ULL] / (intrm_sf_mf_325 == 0.0 ? 1.0E-16 :
      intrm_sf_mf_325) - 1.0;
  } else if (X[42ULL] >= t275_idx_0) {
    intrm_sf_mf_17 = (X[42ULL] - 4000.0) / (4000.0 - t275_idx_0 == 0.0 ? 1.0E-16
      : 4000.0 - t275_idx_0) + 2.0;
  } else {
    t309 = t275_idx_0 - intrm_sf_mf_325;
    intrm_sf_mf_17 = (X[42ULL] - intrm_sf_mf_325) / (t309 == 0.0 ? 1.0E-16 :
      t309);
  }

  t299[0ULL] = X[43ULL];
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t299[0ULL],
    &t29[0ULL], &t30[0ULL]);
  t24 = d_efOut;
  tlu2_1d_linear_linear_value(&e_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t29[0ULL], &t30[0ULL]);
  t275_idx_0 = e_efOut[0];
  Condenser_UA_liq = t275_idx_0;
  tlu2_1d_linear_linear_value(&f_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t29[0ULL], &t30[0ULL]);
  t275_idx_0 = f_efOut[0];
  if (X[44ULL] <= Condenser_UA_liq) {
    t307 = X[44ULL] / (Condenser_UA_liq == 0.0 ? 1.0E-16 : Condenser_UA_liq) -
      1.0;
  } else if (X[44ULL] >= t275_idx_0) {
    t307 = (X[44ULL] - 4000.0) / (4000.0 - t275_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t275_idx_0) + 2.0;
  } else {
    t314 = t275_idx_0 - Condenser_UA_liq;
    t307 = (X[44ULL] - Condenser_UA_liq) / (t314 == 0.0 ? 1.0E-16 : t314);
  }

  t299[0ULL] = X[3ULL];
  t43[0] = 28ULL;
  tlu2_linear_nearest_prelookup(&g_efOut.mField0[0ULL], &g_efOut.mField1[0ULL],
    &g_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t299[0ULL],
    &t43[0ULL], &t30[0ULL]);
  t21 = g_efOut;
  t299[0ULL] = X[4ULL];
  t46[0] = 27ULL;
  tlu2_linear_nearest_prelookup(&h_efOut.mField0[0ULL], &h_efOut.mField1[0ULL],
    &h_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t299[0ULL],
    &t46[0ULL], &t30[0ULL]);
  t19 = h_efOut;
  tlu2_2d_linear_nearest_value(&i_efOut[0ULL], &t21.mField0[0ULL], &t21.mField2
    [0ULL], &t19.mField0[0ULL], &t19.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField5, &t43[0ULL], &t46[0ULL], &t30[0ULL]);
  t275_idx_0 = i_efOut[0];
  Condenser_UA_liq = t275_idx_0;
  t299[0ULL] = X[5ULL];
  tlu2_linear_nearest_prelookup(&j_efOut.mField0[0ULL], &j_efOut.mField1[0ULL],
    &j_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t299[0ULL],
    &t43[0ULL], &t30[0ULL]);
  t26 = j_efOut;
  tlu2_2d_linear_nearest_value(&k_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], &t19.mField0[0ULL], &t19.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField5, &t43[0ULL], &t46[0ULL], &t30[0ULL]);
  t275_idx_0 = k_efOut[0];
  Condenser_UA_liq = (Condenser_UA_liq + t275_idx_0) / 2.0;
  intrm_sf_mf_61 = Condenser_UA_liq * 0.11700000000000003 / 0.022;
  t299[0] = 1.0;
  t58[0] = 50ULL;
  tlu2_linear_nearest_prelookup(&l_efOut.mField0[0ULL], &l_efOut.mField1[0ULL],
    &l_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t299[0ULL],
    &t58[0ULL], &t30[0ULL]);
  t14 = l_efOut;
  t292[0ULL] = X[6ULL];
  tlu2_linear_nearest_prelookup(&m_efOut.mField0[0ULL], &m_efOut.mField1[0ULL],
    &m_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t292[0ULL],
    &t29[0ULL], &t30[0ULL]);
  t18 = m_efOut;
  tlu2_2d_linear_nearest_value(&n_efOut[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField8, &t58[0ULL], &t29[0ULL], &t30[0ULL]);
  t275_idx_0 = n_efOut[0];
  t308 = t275_idx_0 * 0.02356194490192345 / 0.02;
  t292[0ULL] = X[3ULL];
  tlu2_linear_linear_prelookup(&o_efOut.mField0[0ULL], &o_efOut.mField1[0ULL],
    &o_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t292[0ULL],
    &t43[0ULL], &t30[0ULL]);
  t24 = o_efOut;
  t292[0ULL] = X[4ULL];
  tlu2_linear_linear_prelookup(&p_efOut.mField0[0ULL], &p_efOut.mField1[0ULL],
    &p_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t292[0ULL],
    &t46[0ULL], &t30[0ULL]);
  t16 = p_efOut;
  tlu2_2d_linear_linear_value(&q_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], &t16.mField0[0ULL], &t16.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField9, &t43[0ULL], &t46[0ULL], &t30[0ULL]);
  t275_idx_0 = q_efOut[0];
  t309 = t275_idx_0;
  t292[0ULL] = X[5ULL];
  tlu2_linear_linear_prelookup(&r_efOut.mField0[0ULL], &r_efOut.mField1[0ULL],
    &r_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t292[0ULL],
    &t43[0ULL], &t30[0ULL]);
  t24 = r_efOut;
  tlu2_2d_linear_linear_value(&s_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], &t16.mField0[0ULL], &t16.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField9, &t43[0ULL], &t46[0ULL], &t30[0ULL]);
  t275_idx_0 = s_efOut[0];
  t309 = (t309 + t275_idx_0) / 2.0;
  Condenser_UA_vap = (X[55ULL] - 10.0) / 2.0;
  t311 = tanh(t309 * Condenser_UA_vap * 3.0 / (intrm_sf_mf_61 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_61)) * t309 * Condenser_UA_vap;
  t292[0ULL] = X[6ULL];
  tlu2_linear_linear_prelookup(&t_efOut.mField0[0ULL], &t_efOut.mField1[0ULL],
    &t_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t292[0ULL],
    &t29[0ULL], &t30[0ULL]);
  t16 = t_efOut;
  tlu2_1d_linear_linear_value(&u_efOut[0ULL], &t16.mField0[0ULL], &t16.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t29[0ULL], &t30[0ULL]);
  t275_idx_0 = u_efOut[0];
  intrm_sf_mf_61 = t275_idx_0;
  tlu2_1d_linear_linear_value(&v_efOut[0ULL], &t16.mField0[0ULL], &t16.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t29[0ULL], &t30[0ULL]);
  t275_idx_0 = v_efOut[0];
  t309 = t275_idx_0;
  if (X[7ULL] <= intrm_sf_mf_61) {
    intrm_sf_mf_337 = X[7ULL] / (intrm_sf_mf_61 == 0.0 ? 1.0E-16 :
      intrm_sf_mf_61) - 1.0;
  } else if (X[7ULL] >= t275_idx_0) {
    intrm_sf_mf_337 = (X[7ULL] - 4000.0) / (4000.0 - t275_idx_0 == 0.0 ? 1.0E-16
      : 4000.0 - t275_idx_0) + 2.0;
  } else {
    t325 = t275_idx_0 - intrm_sf_mf_61;
    intrm_sf_mf_337 = (X[7ULL] - intrm_sf_mf_61) / (t325 == 0.0 ? 1.0E-16 : t325);
  }

  if (X[8ULL] <= intrm_sf_mf_61) {
    t314 = X[8ULL] / (intrm_sf_mf_61 == 0.0 ? 1.0E-16 : intrm_sf_mf_61) - 1.0;
  } else if (X[8ULL] >= t275_idx_0) {
    t314 = (X[8ULL] - 4000.0) / (4000.0 - t275_idx_0 == 0.0 ? 1.0E-16 : 4000.0 -
      t275_idx_0) + 2.0;
  } else {
    t472 = t275_idx_0 - intrm_sf_mf_61;
    t314 = (X[8ULL] - intrm_sf_mf_61) / (t472 == 0.0 ? 1.0E-16 : t472);
  }

  t292[0ULL] = ((intrm_sf_mf_337 < 0.0 ? intrm_sf_mf_337 : 0.0) + (t314 < 0.0 ?
    t314 : 0.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&w_efOut.mField0[0ULL], &w_efOut.mField1[0ULL],
    &w_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t292[0ULL],
    &t58[0ULL], &t30[0ULL]);
  t24 = w_efOut;
  tlu2_2d_linear_nearest_value(&x_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField10, &t58[0ULL], &t29[0ULL], &t30[0ULL]);
  t275_idx_0 = x_efOut[0];
  t313 = t275_idx_0;
  tlu2_2d_linear_nearest_value(&y_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField8, &t58[0ULL], &t29[0ULL], &t30[0ULL]);
  t275_idx_0 = y_efOut[0];
  Condenser_two_phase_fluid_f_vap = t275_idx_0;
  tlu2_2d_linear_nearest_value(&ab_efOut[0ULL], &t24.mField0[0ULL],
    &t24.mField2[0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t58[0ULL], &t29[0ULL], &t30[0ULL]);
  t275_idx_0 = ab_efOut[0];
  t316 = t275_idx_0;
  intrm_sf_mf_85 = t313 * Condenser_two_phase_fluid_f_vap / (t275_idx_0 == 0.0 ?
    1.0E-16 : t275_idx_0);
  t491 = tanh((X[56ULL] - X[57ULL]) * intrm_sf_mf_85 * 3.0 / (t308 == 0.0 ?
    1.0E-16 : t308));
  t308 = (t491 + 1.0) / 2.0 * (X[56ULL] > 0.0 ? X[56ULL] : 0.0) + (1.0 - t491) /
    2.0 * (X[57ULL] > 0.0 ? X[57ULL] : 0.0);
  t318 = X[9ULL] >= 0.0 ? X[9ULL] : 0.0;
  intrm_sf_mf_84 = X[10ULL] >= 0.0 ? X[10ULL] : 0.0;
  t491 = intrm_sf_mf_85 * intrm_sf_mf_84;
  intrm_sf_mf_445 = t491 + X[59ULL];
  t337 = t318 + X[59ULL];
  t321 = intrm_sf_mf_445 / (t337 == 0.0 ? 1.0E-16 : t337);
  if (t321 <= 1.0) {
    t482 = 1.0 - t321 * 0.999999;
  } else {
    t482 = 1.0E-6;
  }

  if (t321 >= 1.0) {
    t323 = t321 * 1.000001 - 1.0;
  } else {
    t323 = 1.0E-6;
  }

  if (t491 + X[59ULL] >= t318 + X[59ULL]) {
    t338 = t318 + X[59ULL];
    t275_idx_0 = t491 + X[59ULL];
    Steam_Generator_thermal_liquid_Hg_tur = (1.000001 / (t338 == 0.0 ? 1.0E-16 :
      t338) - 0.999999 / (t275_idx_0 == 0.0 ? 1.0E-16 : t275_idx_0)) * X[11ULL];
  } else {
    t438 = t491 + X[59ULL];
    t457 = t318 + X[59ULL];
    Steam_Generator_thermal_liquid_Hg_tur = (1.000001 / (t438 == 0.0 ? 1.0E-16 :
      t438) - 0.999999 / (t457 == 0.0 ? 1.0E-16 : t457)) * X[11ULL];
  }

  t491 = Steam_Generator_thermal_liquid_Hg_tur <= 15.0 ?
    Steam_Generator_thermal_liquid_Hg_tur : 15.0;
  t292[0ULL] = intrm_sf_mf_337;
  tlu2_linear_linear_prelookup(&bb_efOut.mField0[0ULL], &bb_efOut.mField1[0ULL],
    &bb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t292[0ULL],
    &t58[0ULL], &t30[0ULL]);
  t11 = bb_efOut;
  tlu2_2d_linear_linear_value(&cb_efOut[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &t16.mField0[0ULL], &t16.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t58[0ULL], &t29[0ULL], &t30[0ULL]);
  t275_idx_0 = cb_efOut[0];
  t325 = X[6ULL] * t275_idx_0 * 100.0 + X[7ULL];
  t292[0] = 0.0;
  tlu2_linear_linear_prelookup(&db_efOut.mField0[0ULL], &db_efOut.mField1[0ULL],
    &db_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t292[0ULL],
    &t58[0ULL], &t30[0ULL]);
  t20 = db_efOut;
  tlu2_2d_linear_linear_value(&eb_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t16.mField0[0ULL], &t16.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t58[0ULL], &t29[0ULL], &t30[0ULL]);
  t275_idx_0 = eb_efOut[0];
  Steam_Generator_thermal_liquid_Hg_tur = t275_idx_0;
  t480 = X[6ULL] * t275_idx_0 * 100.0 + intrm_sf_mf_61;
  intrm_sf_mf_61 = (t480 - t325) / (intrm_sf_mf_85 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_85);
  t438 = (1.0 - pmf_exp(-t491)) * X[58ULL];
  t457 = pmf_exp(-t491) * t323 + t482;
  Steam_Generator_two_phase_fluid_unorm_in_vap = t438 / (t457 == 0.0 ? 1.0E-16 :
    t457);
  intrm_sf_mf_420 = (Steam_Generator_two_phase_fluid_unorm_in_vap >
                     intrm_sf_mf_61 * 1000.0);
  intrm_sf_mf_421 = (t325 < t480);
  intrm_sf_mf_451 = (t325 > t480);
  tlu2_linear_linear_prelookup(&fb_efOut.mField0[0ULL], &fb_efOut.mField1[0ULL],
    &fb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t299[0ULL],
    &t58[0ULL], &t30[0ULL]);
  t10 = fb_efOut;
  tlu2_2d_linear_linear_value(&gb_efOut[0ULL], &t10.mField0[0ULL], &t10.mField2
    [0ULL], &t16.mField0[0ULL], &t16.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t58[0ULL], &t29[0ULL], &t30[0ULL]);
  t275_idx_0 = gb_efOut[0];
  t468 = t275_idx_0;
  t479 = X[6ULL] * t275_idx_0 * 100.0 + t309;
  intrm_sf_mf_436 = (t325 > t479);
  intrm_sf_mf_439 = (X[58ULL] < 0.0);
  intrm_sf_mf_440 = (X[58ULL] > 0.0);
  if (intrm_sf_mf_440) {
    if (intrm_sf_mf_421) {
      if (intrm_sf_mf_420) {
        t457 = X[58ULL] - t482 * intrm_sf_mf_61 * 1000.0;
        t275_idx_0 = pmf_log((t323 * intrm_sf_mf_61 * 1000.0 + X[58ULL]) / (t457
          == 0.0 ? 1.0E-16 : t457));
        t309 = t275_idx_0 / (t491 == 0.0 ? 1.0E-16 : t491);
      } else {
        t309 = 1.0;
      }
    } else {
      t309 = 0.0;
    }
  } else {
    t309 = intrm_sf_mf_439 ? intrm_sf_mf_436 ? 0.0 : (real_T)!intrm_sf_mf_451 :
      (real_T)intrm_sf_mf_421;
  }

  t299[0ULL] = ((intrm_sf_mf_337 > 1.0 ? intrm_sf_mf_337 : 1.0) + (t314 > 1.0 ?
    t314 : 1.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&hb_efOut.mField0[0ULL], &hb_efOut.mField1[0ULL],
    &hb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t299[0ULL],
    &t58[0ULL], &t30[0ULL]);
  t24 = hb_efOut;
  tlu2_2d_linear_nearest_value(&ib_efOut[0ULL], &t24.mField0[0ULL],
    &t24.mField2[0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t58[0ULL], &t29[0ULL], &t30[0ULL]);
  t275_idx_0 = ib_efOut[0];
  t491 = t275_idx_0;
  tlu2_2d_linear_nearest_value(&jb_efOut[0ULL], &t24.mField0[0ULL],
    &t24.mField2[0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t58[0ULL], &t29[0ULL], &t30[0ULL]);
  t275_idx_0 = jb_efOut[0];
  t482 = t275_idx_0;
  tlu2_2d_linear_nearest_value(&kb_efOut[0ULL], &t24.mField0[0ULL],
    &t24.mField2[0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t58[0ULL], &t29[0ULL], &t30[0ULL]);
  t275_idx_0 = kb_efOut[0];
  t323 = t275_idx_0;
  t472 = t491 * t482 / (t275_idx_0 == 0.0 ? 1.0E-16 : t275_idx_0);
  Steam_Generator_two_phase_fluid_v_sat_vap = t472 * intrm_sf_mf_84;
  intrm_sf_mf_84 = (X[59ULL] + Steam_Generator_two_phase_fluid_v_sat_vap) /
    (t337 == 0.0 ? 1.0E-16 : t337);
  if (intrm_sf_mf_84 <= 1.0) {
    t462 = 1.0 - intrm_sf_mf_84 * 0.999999;
  } else {
    t462 = 1.0E-6;
  }

  if (intrm_sf_mf_84 >= 1.0) {
    t333 = intrm_sf_mf_84 * 1.000001 - 1.0;
  } else {
    t333 = 1.0E-6;
  }

  if (X[59ULL] + Steam_Generator_two_phase_fluid_v_sat_vap >= t318 + X[59ULL]) {
    t438 = t318 + X[59ULL];
    t457 = X[59ULL] + Steam_Generator_two_phase_fluid_v_sat_vap;
    t334 = (1.000001 / (t438 == 0.0 ? 1.0E-16 : t438) - 0.999999 / (t457 == 0.0 ?
             1.0E-16 : t457)) * X[12ULL];
  } else {
    t275_idx_0 = X[59ULL] + Steam_Generator_two_phase_fluid_v_sat_vap;
    t456 = t318 + X[59ULL];
    t334 = (1.000001 / (t275_idx_0 == 0.0 ? 1.0E-16 : t275_idx_0) - 0.999999 /
            (t456 == 0.0 ? 1.0E-16 : t456)) * X[12ULL];
  }

  t318 = t334 <= 15.0 ? t334 : 15.0;
  Steam_Generator_two_phase_fluid_v_sat_vap = (t479 - t325) / (t472 == 0.0 ?
    1.0E-16 : t472);
  intrm_sf_mf_432 = (t325 < t479);
  t438 = (1.0 - pmf_exp(-t318)) * X[58ULL];
  t457 = pmf_exp(-t318) * t333 + t462;
  t334 = t438 / (t457 == 0.0 ? 1.0E-16 : t457);
  intrm_sf_mf_434 = (t334 < Steam_Generator_two_phase_fluid_v_sat_vap * 1000.0);
  intrm_sf_mf_437 = (t325 <= t479);
  if (intrm_sf_mf_440) {
    t335 = intrm_sf_mf_421 ? 0.0 : (real_T)!intrm_sf_mf_432;
  } else if (intrm_sf_mf_439) {
    if (intrm_sf_mf_436) {
      if (intrm_sf_mf_434) {
        t457 = X[58ULL] - t462 * Steam_Generator_two_phase_fluid_v_sat_vap *
          1000.0;
        t275_idx_0 = pmf_log((t333 * Steam_Generator_two_phase_fluid_v_sat_vap *
                              1000.0 + X[58ULL]) / (t457 == 0.0 ? 1.0E-16 : t457));
        t335 = t275_idx_0 / (t318 == 0.0 ? 1.0E-16 : t318);
      } else {
        t335 = 1.0;
      }
    } else {
      t335 = 0.0;
    }
  } else {
    t335 = intrm_sf_mf_421 ? 0.0 : (real_T)!intrm_sf_mf_437;
  }

  t318 = (1.0 - t309) - t335;
  t462 = intrm_sf_mf_445 / (t337 == 0.0 ? 1.0E-16 : t337) / (intrm_sf_mf_85 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_85);
  t333 = X[13ULL] / (t337 == 0.0 ? 1.0E-16 : t337);
  intrm_sf_mf_445 = t333 <= 15.0 ? t333 : 15.0;
  if (intrm_sf_mf_440) {
    if (intrm_sf_mf_421) {
      if (intrm_sf_mf_420) {
        t333 = (t321 - 1.0) * intrm_sf_mf_61 * 1000.0 + X[58ULL];
      } else {
        t333 = (t321 * Steam_Generator_two_phase_fluid_unorm_in_vap + X[58ULL])
          - intrm_sf_mf_61 * 1000.0;
      }
    } else if (intrm_sf_mf_432) {
      t333 = X[58ULL];
    } else {
      t333 = (intrm_sf_mf_84 * t334 + X[58ULL]) -
        Steam_Generator_two_phase_fluid_v_sat_vap * 1000.0;
    }
  } else if (intrm_sf_mf_439) {
    if (intrm_sf_mf_436) {
      if (intrm_sf_mf_434) {
        t333 = (intrm_sf_mf_84 - 1.0) *
          Steam_Generator_two_phase_fluid_v_sat_vap * 1000.0 + X[58ULL];
      } else {
        t333 = (intrm_sf_mf_84 * t334 + X[58ULL]) -
          Steam_Generator_two_phase_fluid_v_sat_vap * 1000.0;
      }
    } else if (intrm_sf_mf_451) {
      t333 = X[58ULL];
    } else {
      t333 = (t321 * Steam_Generator_two_phase_fluid_unorm_in_vap + X[58ULL]) -
        intrm_sf_mf_61 * 1000.0;
    }
  } else if (intrm_sf_mf_421) {
    t333 = (t321 * Steam_Generator_two_phase_fluid_unorm_in_vap + X[58ULL]) -
      intrm_sf_mf_61 * 1000.0;
  } else if (intrm_sf_mf_437) {
    t333 = X[58ULL];
  } else {
    t333 = (intrm_sf_mf_84 * t334 + X[58ULL]) -
      Steam_Generator_two_phase_fluid_v_sat_vap * 1000.0;
  }

  if (intrm_sf_mf_440) {
    if (intrm_sf_mf_421) {
      if (intrm_sf_mf_420) {
        intrm_sf_mf_61 = t480;
      } else {
        intrm_sf_mf_61 = intrm_sf_mf_85 *
          Steam_Generator_two_phase_fluid_unorm_in_vap * 0.001 + t325;
      }
    } else if (intrm_sf_mf_432) {
      intrm_sf_mf_61 = t325;
    } else {
      intrm_sf_mf_61 = t472 * t334 * 0.001 + t325;
    }
  } else if (intrm_sf_mf_439) {
    if (intrm_sf_mf_436) {
      if (intrm_sf_mf_434) {
        intrm_sf_mf_61 = t479;
      } else {
        intrm_sf_mf_61 = t472 * t334 * 0.001 + t325;
      }
    } else if (intrm_sf_mf_451) {
      intrm_sf_mf_61 = t325;
    } else {
      intrm_sf_mf_61 = intrm_sf_mf_85 *
        Steam_Generator_two_phase_fluid_unorm_in_vap * 0.001 + t325;
    }
  } else if (intrm_sf_mf_421) {
    intrm_sf_mf_61 = intrm_sf_mf_85 *
      Steam_Generator_two_phase_fluid_unorm_in_vap * 0.001 + t325;
  } else if (intrm_sf_mf_437) {
    intrm_sf_mf_61 = t325;
  } else {
    intrm_sf_mf_61 = t472 * t334 * 0.001 + t325;
  }

  intrm_sf_mf_85 = t480 - intrm_sf_mf_61;
  intrm_sf_mf_84 = t479 - intrm_sf_mf_61;
  t438 = (pmf_exp(intrm_sf_mf_445 * t318) - 1.0) * t333;
  t321 = t438 / (t462 == 0.0 ? 1.0E-16 : t462);
  if (intrm_sf_mf_440) {
    if (intrm_sf_mf_61 < t479) {
      if (t321 * 0.001 > intrm_sf_mf_84) {
        t438 = t462 * intrm_sf_mf_84 * 1000.0 + t333;
        t457 = -pmf_log(t333 / (t438 == 0.0 ? 1.0E-16 : t438));
        intrm_sf_mf_61 = t457 / (intrm_sf_mf_445 == 0.0 ? 1.0E-16 :
          intrm_sf_mf_445);
      } else {
        intrm_sf_mf_61 = t318;
      }
    } else {
      intrm_sf_mf_61 = 0.0;
    }
  } else if (intrm_sf_mf_439) {
    if (intrm_sf_mf_61 > t480) {
      if (t321 * 0.001 < intrm_sf_mf_85) {
        t275_idx_0 = t462 * intrm_sf_mf_85 * 1000.0 + t333;
        t456 = -pmf_log(t333 / (t275_idx_0 == 0.0 ? 1.0E-16 : t275_idx_0));
        intrm_sf_mf_61 = t456 / (intrm_sf_mf_445 == 0.0 ? 1.0E-16 :
          intrm_sf_mf_445);
      } else {
        intrm_sf_mf_61 = t318;
      }
    } else {
      intrm_sf_mf_61 = 0.0;
    }
  } else {
    intrm_sf_mf_61 = t318;
  }

  intrm_sf_mf_85 = t318 - intrm_sf_mf_61;
  intrm_sf_mf_84 = t309 + (intrm_sf_mf_440 ? 0.0 : intrm_sf_mf_439 ?
    intrm_sf_mf_85 : 0.0);
  intrm_sf_mf_85 = t335 + (intrm_sf_mf_440 ? intrm_sf_mf_85 : 0.0);
  tlu2_2d_linear_nearest_value(&lb_efOut[0ULL], &t21.mField0[0ULL],
    &t21.mField2[0ULL], &t19.mField0[0ULL], &t19.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t43[0ULL], &t46[0ULL], &t30[0ULL]);
  t275_idx_0 = lb_efOut[0];
  t309 = t275_idx_0;
  tlu2_2d_linear_nearest_value(&mb_efOut[0ULL], &t26.mField0[0ULL],
    &t26.mField2[0ULL], &t19.mField0[0ULL], &t19.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t43[0ULL], &t46[0ULL], &t30[0ULL]);
  t275_idx_0 = mb_efOut[0];
  t309 = (t309 + t275_idx_0) / 2.0;
  t457 = t309 * 0.11700000000000003;
  t309 = Condenser_UA_vap * 0.022 / (t457 == 0.0 ? 1.0E-16 : t457);
  Condenser_UA_vap = pmf_sqrt(t309 * t309 + 100.0);
  t309 = Condenser_UA_vap * 35.580755206091233;
  t318 = Condenser_UA_vap * pmf_sqrt(Condenser_UA_vap) * pmf_sqrt(pmf_sqrt
    (Condenser_UA_vap)) * 2.0794784986224468;
  if (Condenser_UA_vap > 250000.0) {
    t321 = (Condenser_UA_vap - 250000.0) / 325000.0 + 1.0;
  } else {
    t321 = 1.0;
  }

  Condenser_UA_vap = 1.0 - pmf_exp(-(Condenser_UA_vap + 200.0) / 1000.0);
  t325 = t318 * t321 * Condenser_UA_vap + t309;
  tlu2_2d_linear_nearest_value(&nb_efOut[0ULL], &t21.mField0[0ULL],
    &t21.mField2[0ULL], &t19.mField0[0ULL], &t19.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField13, &t43[0ULL], &t46[0ULL], &t30[0ULL]);
  t275_idx_0 = nb_efOut[0];
  t309 = t275_idx_0;
  tlu2_2d_linear_nearest_value(&ob_efOut[0ULL], &t26.mField0[0ULL],
    &t26.mField2[0ULL], &t19.mField0[0ULL], &t19.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField13, &t43[0ULL], &t46[0ULL], &t30[0ULL]);
  t275_idx_0 = ob_efOut[0];
  t309 = (t309 + t275_idx_0) / 2.0;
  t309 = pmf_pow(t325 * t309 * 0.53047999688613334, 0.33333333333333331) * 0.404;
  t438 = t309 * Condenser_UA_liq / 0.022 * 5.1836278784231586;
  Condenser_UA_liq = 1.0 / (t438 == 0.0 ? 1.0E-16 : t438);
  t309 = t313 > 0.5 ? t313 : 0.5;
  t438 = t308 * 0.02;
  t457 = t316 * 0.02356194490192345;
  Condenser_UA_vap = t438 / (t457 == 0.0 ? 1.0E-16 : t457);
  t313 = Condenser_UA_vap > 1000.0 ? Condenser_UA_vap : 1000.0;
  t457 = pmf_log10(6.9 / (t313 == 0.0 ? 1.0E-16 : t313) + 7.9545220244797035E-5)
    * pmf_log10(6.9 / (t313 == 0.0 ? 1.0E-16 : t313) + 7.9545220244797035E-5) *
    3.24;
  t316 = 1.0 / (t457 == 0.0 ? 1.0E-16 : t457);
  t275_idx_0 = (pmf_pow(t309, 0.66666666666666663) - 1.0) * pmf_sqrt(t316 / 8.0)
    * 12.7 + 1.0;
  t309 = (t313 - 1000.0) * (t316 / 8.0) * t309 / (t275_idx_0 == 0.0 ? 1.0E-16 :
    t275_idx_0);
  t313 = (Condenser_UA_vap - 2000.0) / 2000.0;
  t316 = t313 * t313 * 3.0 - t313 * t313 * t313 * 2.0;
  if (Condenser_UA_vap <= 2000.0) {
    t313 = 3.66;
  } else if (Condenser_UA_vap >= 4000.0) {
    t313 = t309;
  } else {
    t313 = (1.0 - t316) * 3.66 + t309 * t316;
  }

  t457 = Condenser_two_phase_fluid_f_vap * t313 / 0.02 * 7.0685834705770345;
  Condenser_UA_vap = Condenser_UA_liq + 1.0 / (t457 == 0.0 ? 1.0E-16 : t457);
  tlu2_linear_nearest_prelookup(&pb_efOut.mField0[0ULL], &pb_efOut.mField1[0ULL],
    &pb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t292[0ULL],
    &t58[0ULL], &t30[0ULL]);
  t11 = pb_efOut;
  tlu2_2d_linear_nearest_value(&qb_efOut[0ULL], &t11.mField0[0ULL],
    &t11.mField2[0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t58[0ULL], &t29[0ULL], &t30[0ULL]);
  t292[0] = qb_efOut[0];
  t309 = t292[0ULL];
  tlu2_2d_linear_nearest_value(&rb_efOut[0ULL], &t11.mField0[0ULL],
    &t11.mField2[0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t58[0ULL], &t29[0ULL], &t30[0ULL]);
  t292[0] = rb_efOut[0];
  t313 = t292[0ULL];
  t457 = t313 * 0.02356194490192345;
  t313 = t438 / (t457 == 0.0 ? 1.0E-16 : t457);
  Condenser_two_phase_fluid_f_vap = t313 > 1.0 ? t313 : 1.0;
  t313 = intrm_sf_mf_337 <= 0.0 ? 0.0 : intrm_sf_mf_337 >= 1.0 ? 1.0 :
    intrm_sf_mf_337;
  intrm_sf_mf_337 = t314 <= 0.0 ? 0.0 : t314 >= 1.0 ? 1.0 : t314;
  if (intrm_sf_mf_337 - t313 > 1.0E-6) {
    t314 = intrm_sf_mf_337 - t313;
  } else if (t313 - intrm_sf_mf_337 > 1.0E-6) {
    t314 = t313 - intrm_sf_mf_337;
  } else {
    t314 = 1.0E-6;
  }

  if (t468 / (Steam_Generator_thermal_liquid_Hg_tur == 0.0 ? 1.0E-16 :
              Steam_Generator_thermal_liquid_Hg_tur) > 1.000001) {
    t316 = pmf_sqrt(t468 / (Steam_Generator_thermal_liquid_Hg_tur == 0.0 ?
      1.0E-16 : Steam_Generator_thermal_liquid_Hg_tur));
  } else {
    t316 = 1.0000004999998751;
  }

  t318 = t313 <= intrm_sf_mf_337 ? t313 : intrm_sf_mf_337;
  t457 = pmf_pow(Condenser_two_phase_fluid_f_vap, 0.8) * pmf_pow(t309, 0.33) *
    0.05;
  t456 = (pmf_pow((t314 + t318) * (t316 - 1.0) + 1.0, 1.8) - pmf_pow((t316 - 1.0)
           * t318 + 1.0, 1.8)) * (t457 / 1.8 / (t316 - 1.0 == 0.0 ? 1.0E-16 :
    t316 - 1.0));
  t309 = t456 / (t314 == 0.0 ? 1.0E-16 : t314);
  intrm_sf_mf_337 = t309 > 3.66 ? t309 : 3.66;
  tlu2_2d_linear_nearest_value(&sb_efOut[0ULL], &t11.mField0[0ULL],
    &t11.mField2[0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t58[0ULL], &t29[0ULL], &t30[0ULL]);
  t292[0] = sb_efOut[0];
  t309 = t292[0ULL];
  t457 = intrm_sf_mf_337 * t309 / 0.02 * 7.0685834705770345;
  intrm_sf_mf_337 = Condenser_UA_liq + 1.0 / (t457 == 0.0 ? 1.0E-16 : t457);
  t309 = t491 > 0.5 ? t491 : 0.5;
  t457 = t323 * 0.02356194490192345;
  t313 = t438 / (t457 == 0.0 ? 1.0E-16 : t457);
  t314 = t313 > 1000.0 ? t313 : 1000.0;
  t438 = pmf_log10(6.9 / (t314 == 0.0 ? 1.0E-16 : t314) + 7.9545220244797035E-5)
    * pmf_log10(6.9 / (t314 == 0.0 ? 1.0E-16 : t314) + 7.9545220244797035E-5) *
    3.24;
  Condenser_two_phase_fluid_f_vap = 1.0 / (t438 == 0.0 ? 1.0E-16 : t438);
  t457 = (pmf_pow(t309, 0.66666666666666663) - 1.0) * pmf_sqrt
    (Condenser_two_phase_fluid_f_vap / 8.0) * 12.7 + 1.0;
  t309 = (t314 - 1000.0) * (Condenser_two_phase_fluid_f_vap / 8.0) * t309 /
    (t457 == 0.0 ? 1.0E-16 : t457);
  t314 = (t313 - 2000.0) / 2000.0;
  Condenser_two_phase_fluid_f_vap = t314 * t314 * 3.0 - t314 * t314 * t314 * 2.0;
  if (t313 <= 2000.0) {
    t314 = 3.66;
  } else if (t313 >= 4000.0) {
    t314 = t309;
  } else {
    t314 = (1.0 - Condenser_two_phase_fluid_f_vap) * 3.66 + t309 *
      Condenser_two_phase_fluid_f_vap;
  }

  t438 = t482 * t314 / 0.02 * 7.0685834705770345;
  t313 = Condenser_UA_liq + 1.0 / (t438 == 0.0 ? 1.0E-16 : t438);
  Condenser_UA_liq = 1.0 / (Condenser_UA_vap == 0.0 ? 1.0E-16 : Condenser_UA_vap);
  t309 = 1.0 / (intrm_sf_mf_337 == 0.0 ? 1.0E-16 : intrm_sf_mf_337);
  Condenser_UA_vap = 1.0 / (t313 == 0.0 ? 1.0E-16 : t313);
  if (X[99ULL] <= intrm_sf_mf_325) {
    intrm_sf_mf_337 = X[99ULL] / (intrm_sf_mf_325 == 0.0 ? 1.0E-16 :
      intrm_sf_mf_325) - 1.0;
  } else if (X[99ULL] >= Steam_Generator_two_phase_fluid_Cdot_threshold) {
    intrm_sf_mf_337 = (X[99ULL] - 4000.0) / (4000.0 -
      Steam_Generator_two_phase_fluid_Cdot_threshold == 0.0 ? 1.0E-16 : 4000.0 -
      Steam_Generator_two_phase_fluid_Cdot_threshold) + 2.0;
  } else {
    t275_idx_0 = Steam_Generator_two_phase_fluid_Cdot_threshold -
      intrm_sf_mf_325;
    intrm_sf_mf_337 = (X[99ULL] - intrm_sf_mf_325) / (t275_idx_0 == 0.0 ?
      1.0E-16 : t275_idx_0);
  }

  if (X[148ULL] <= 1082.1904733151327) {
    intrm_sf_mf_325 = X[148ULL] / 1082.1904733151327 - 1.0;
  } else if (X[148ULL] >= 2601.6367101330361) {
    intrm_sf_mf_325 = (X[148ULL] - 4000.0) / 1398.3632898669639 + 2.0;
  } else {
    intrm_sf_mf_325 = (X[148ULL] - 1082.1904733151327) / 1519.4462368179034;
  }

  t299[0ULL] = X[30ULL];
  tlu2_linear_nearest_prelookup(&tb_efOut.mField0[0ULL], &tb_efOut.mField1[0ULL],
    &tb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t299[0ULL],
    &t43[0ULL], &t30[0ULL]);
  t18 = tb_efOut;
  t299[0ULL] = X[31ULL];
  tlu2_linear_nearest_prelookup(&ub_efOut.mField0[0ULL], &ub_efOut.mField1[0ULL],
    &ub_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t299[0ULL],
    &t46[0ULL], &t30[0ULL]);
  t19 = ub_efOut;
  tlu2_2d_linear_nearest_value(&vb_efOut[0ULL], &t18.mField0[0ULL],
    &t18.mField2[0ULL], &t19.mField0[0ULL], &t19.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField5, &t43[0ULL], &t46[0ULL], &t30[0ULL]);
  t292[0] = vb_efOut[0];
  Steam_Generator_UA_liq = t292[0ULL];
  t299[0ULL] = X[32ULL];
  tlu2_linear_nearest_prelookup(&wb_efOut.mField0[0ULL], &wb_efOut.mField1[0ULL],
    &wb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t299[0ULL],
    &t43[0ULL], &t30[0ULL]);
  t26 = wb_efOut;
  tlu2_2d_linear_nearest_value(&xb_efOut[0ULL], &t26.mField0[0ULL],
    &t26.mField2[0ULL], &t19.mField0[0ULL], &t19.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField5, &t43[0ULL], &t46[0ULL], &t30[0ULL]);
  t292[0] = xb_efOut[0];
  intrm_sf_mf_455 = t292[0ULL];
  Steam_Generator_UA_liq = (Steam_Generator_UA_liq + intrm_sf_mf_455) / 2.0;
  intrm_sf_mf_455 = Steam_Generator_UA_liq * 0.42000000000000004 / 0.018;
  t299[0ULL] = X[33ULL];
  tlu2_linear_nearest_prelookup(&yb_efOut.mField0[0ULL], &yb_efOut.mField1[0ULL],
    &yb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t299[0ULL],
    &t29[0ULL], &t30[0ULL]);
  t16 = yb_efOut;
  tlu2_2d_linear_nearest_value(&ac_efOut[0ULL], &t14.mField0[0ULL],
    &t14.mField2[0ULL], &t16.mField0[0ULL], &t16.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t58[0ULL], &t29[0ULL], &t30[0ULL]);
  t292[0] = ac_efOut[0];
  Steam_Generator_two_phase_fluid_Cdot_threshold = t292[0ULL];
  Steam_Generator_two_phase_fluid_Cdot_threshold =
    Steam_Generator_two_phase_fluid_Cdot_threshold * 0.036815538909255395 /
    0.025;
  t299[0ULL] = X[30ULL];
  tlu2_linear_linear_prelookup(&bc_efOut.mField0[0ULL], &bc_efOut.mField1[0ULL],
    &bc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t299[0ULL],
    &t43[0ULL], &t30[0ULL]);
  t14 = bc_efOut;
  t299[0ULL] = X[31ULL];
  tlu2_linear_linear_prelookup(&cc_efOut.mField0[0ULL], &cc_efOut.mField1[0ULL],
    &cc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t299[0ULL],
    &t46[0ULL], &t30[0ULL]);
  t24 = cc_efOut;
  tlu2_2d_linear_linear_value(&dc_efOut[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField9, &t43[0ULL], &t46[0ULL], &t30[0ULL]);
  t292[0] = dc_efOut[0];
  t313 = t292[0ULL];
  t299[0ULL] = X[32ULL];
  tlu2_linear_linear_prelookup(&ec_efOut.mField0[0ULL], &ec_efOut.mField1[0ULL],
    &ec_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t299[0ULL],
    &t43[0ULL], &t30[0ULL]);
  t14 = ec_efOut;
  tlu2_2d_linear_linear_value(&fc_efOut[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField9, &t43[0ULL], &t46[0ULL], &t30[0ULL]);
  t292[0] = fc_efOut[0];
  t314 = t292[0ULL];
  t313 = (t313 + t314) / 2.0;
  t314 = (X[135ULL] - -3.5) / 2.0;
  Condenser_two_phase_fluid_f_vap = tanh(t313 * t314 * 3.0 / (intrm_sf_mf_455 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_455)) * t313 * t314;
  t299[0ULL] = X[33ULL];
  tlu2_linear_linear_prelookup(&gc_efOut.mField0[0ULL], &gc_efOut.mField1[0ULL],
    &gc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t299[0ULL],
    &t29[0ULL], &t30[0ULL]);
  t14 = gc_efOut;
  tlu2_1d_linear_linear_value(&hc_efOut[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t29[0ULL], &t30[0ULL]);
  t292[0] = hc_efOut[0];
  intrm_sf_mf_455 = t292[0ULL];
  tlu2_1d_linear_linear_value(&ic_efOut[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t29[0ULL], &t30[0ULL]);
  t292[0] = ic_efOut[0];
  t313 = t292[0ULL];
  if (X[34ULL] <= intrm_sf_mf_455) {
    t316 = X[34ULL] / (intrm_sf_mf_455 == 0.0 ? 1.0E-16 : intrm_sf_mf_455) - 1.0;
  } else if (X[34ULL] >= t313) {
    t316 = (X[34ULL] - 4000.0) / (4000.0 - t313 == 0.0 ? 1.0E-16 : 4000.0 - t313)
      + 2.0;
  } else {
    t275_idx_0 = t313 - intrm_sf_mf_455;
    t316 = (X[34ULL] - intrm_sf_mf_455) / (t275_idx_0 == 0.0 ? 1.0E-16 :
      t275_idx_0);
  }

  if (X[35ULL] <= intrm_sf_mf_455) {
    t491 = X[35ULL] / (intrm_sf_mf_455 == 0.0 ? 1.0E-16 : intrm_sf_mf_455) - 1.0;
  } else if (X[35ULL] >= t313) {
    t491 = (X[35ULL] - 4000.0) / (4000.0 - t313 == 0.0 ? 1.0E-16 : 4000.0 - t313)
      + 2.0;
  } else {
    t275_idx_0 = t313 - intrm_sf_mf_455;
    t491 = (X[35ULL] - intrm_sf_mf_455) / (t275_idx_0 == 0.0 ? 1.0E-16 :
      t275_idx_0);
  }

  t299[0ULL] = ((t316 < 0.0 ? t316 : 0.0) + (t491 < 0.0 ? t491 : 0.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&jc_efOut.mField0[0ULL], &jc_efOut.mField1[0ULL],
    &jc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t299[0ULL],
    &t58[0ULL], &t30[0ULL]);
  t21 = jc_efOut;
  tlu2_2d_linear_nearest_value(&kc_efOut[0ULL], &t21.mField0[0ULL],
    &t21.mField2[0ULL], &t16.mField0[0ULL], &t16.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t58[0ULL], &t29[0ULL], &t30[0ULL]);
  t292[0] = kc_efOut[0];
  t318 = t292[0ULL];
  tlu2_2d_linear_nearest_value(&lc_efOut[0ULL], &t21.mField0[0ULL],
    &t21.mField2[0ULL], &t16.mField0[0ULL], &t16.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t58[0ULL], &t29[0ULL], &t30[0ULL]);
  t292[0] = lc_efOut[0];
  t321 = t292[0ULL];
  tlu2_2d_linear_nearest_value(&mc_efOut[0ULL], &t21.mField0[0ULL],
    &t21.mField2[0ULL], &t16.mField0[0ULL], &t16.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t58[0ULL], &t29[0ULL], &t30[0ULL]);
  t292[0] = mc_efOut[0];
  t482 = t292[0ULL];
  t323 = t318 * t321 / (t482 == 0.0 ? 1.0E-16 : t482);
  if (-X[158ULL] > 0.0) {
    t325 = -X[158ULL];
  } else {
    t325 = 0.0;
  }

  t480 = tanh((X[141ULL] - (-X[158ULL])) * t323 * 3.0 /
              (Steam_Generator_two_phase_fluid_Cdot_threshold == 0.0 ? 1.0E-16 :
               Steam_Generator_two_phase_fluid_Cdot_threshold));
  Steam_Generator_two_phase_fluid_Cdot_threshold = (t480 + 1.0) / 2.0 * (X
    [141ULL] > 0.0 ? X[141ULL] : 0.0) + (1.0 - t480) / 2.0 * t325;
  Steam_Generator_thermal_liquid_Hg_tur = X[37ULL] >= 0.0 ? X[37ULL] : 0.0;
  t325 = X[38ULL] >= 0.0 ? X[38ULL] : 0.0;
  t457 = Steam_Generator_thermal_liquid_Hg_tur + X[164ULL];
  t275_idx_0 = (Steam_Generator_thermal_liquid_Hg_tur + X[164ULL]) * (1.0 -
    pmf_exp(-X[36ULL] / (t457 == 0.0 ? 1.0E-16 : t457)));
  t438 = t323 * t325 + X[164ULL];
  t480 = t275_idx_0 / (t438 == 0.0 ? 1.0E-16 : t438);
  Steam_Generator_two_phase_fluid_unorm_in_vap = t480 <= 15.0 ? t480 : 15.0;
  t299[0ULL] = t316;
  tlu2_linear_linear_prelookup(&nc_efOut.mField0[0ULL], &nc_efOut.mField1[0ULL],
    &nc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t299[0ULL],
    &t58[0ULL], &t30[0ULL]);
  t24 = nc_efOut;
  tlu2_2d_linear_linear_value(&oc_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], &t14.mField0[0ULL], &t14.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t58[0ULL], &t29[0ULL], &t30[0ULL]);
  t292[0] = oc_efOut[0];
  t480 = t292[0ULL];
  t468 = X[33ULL] * t480 * 100.0 + X[34ULL];
  tlu2_2d_linear_linear_value(&pc_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t14.mField0[0ULL], &t14.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t58[0ULL], &t29[0ULL], &t30[0ULL]);
  t292[0] = pc_efOut[0];
  t480 = t292[0ULL];
  t479 = X[33ULL] * t480 * 100.0 + intrm_sf_mf_455;
  intrm_sf_mf_455 = (t479 - t468) / (t323 == 0.0 ? 1.0E-16 : t323);
  t472 = (1.0 - pmf_exp(-Steam_Generator_two_phase_fluid_unorm_in_vap)) * X
    [163ULL];
  intrm_sf_mf_420 = (t472 > intrm_sf_mf_455 * 1000.0);
  intrm_sf_mf_421 = (t468 < t479);
  intrm_sf_mf_451 = (t468 > t479);
  tlu2_2d_linear_linear_value(&qc_efOut[0ULL], &t10.mField0[0ULL], &t10.mField2
    [0ULL], &t14.mField0[0ULL], &t14.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t58[0ULL], &t29[0ULL], &t30[0ULL]);
  t292[0] = qc_efOut[0];
  Steam_Generator_two_phase_fluid_v_sat_vap = t292[0ULL];
  t462 = X[33ULL] * Steam_Generator_two_phase_fluid_v_sat_vap * 100.0 + t313;
  intrm_sf_mf_436 = (t468 > t462);
  intrm_sf_mf_439 = (X[163ULL] < 0.0);
  intrm_sf_mf_440 = (X[163ULL] > 0.0);
  if (intrm_sf_mf_440) {
    if (intrm_sf_mf_421) {
      if (intrm_sf_mf_420) {
        t275_idx_0 = -pmf_log((X[163ULL] - intrm_sf_mf_455 * 1000.0) / (X[163ULL]
          == 0.0 ? 1.0E-16 : X[163ULL]));
        t313 = t275_idx_0 / (Steam_Generator_two_phase_fluid_unorm_in_vap == 0.0
                             ? 1.0E-16 :
                             Steam_Generator_two_phase_fluid_unorm_in_vap);
      } else {
        t313 = 1.0;
      }
    } else {
      t313 = 0.0;
    }
  } else {
    t313 = intrm_sf_mf_439 ? intrm_sf_mf_436 ? 0.0 : (real_T)!intrm_sf_mf_451 :
      (real_T)intrm_sf_mf_421;
  }

  t299[0ULL] = ((t316 > 1.0 ? t316 : 1.0) + (t491 > 1.0 ? t491 : 1.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&rc_efOut.mField0[0ULL], &rc_efOut.mField1[0ULL],
    &rc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t299[0ULL],
    &t58[0ULL], &t30[0ULL]);
  t24 = rc_efOut;
  tlu2_2d_linear_nearest_value(&sc_efOut[0ULL], &t24.mField0[0ULL],
    &t24.mField2[0ULL], &t16.mField0[0ULL], &t16.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t58[0ULL], &t29[0ULL], &t30[0ULL]);
  t299[0] = sc_efOut[0];
  Steam_Generator_two_phase_fluid_unorm_in_vap = t299[0ULL];
  tlu2_2d_linear_nearest_value(&tc_efOut[0ULL], &t24.mField0[0ULL],
    &t24.mField2[0ULL], &t16.mField0[0ULL], &t16.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t58[0ULL], &t29[0ULL], &t30[0ULL]);
  t299[0] = tc_efOut[0];
  t333 = t299[0ULL];
  tlu2_2d_linear_nearest_value(&uc_efOut[0ULL], &t24.mField0[0ULL],
    &t24.mField2[0ULL], &t16.mField0[0ULL], &t16.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t58[0ULL], &t29[0ULL], &t30[0ULL]);
  t299[0] = uc_efOut[0];
  t334 = t299[0ULL];
  t335 = Steam_Generator_two_phase_fluid_unorm_in_vap * t333 / (t334 == 0.0 ?
    1.0E-16 : t334);
  t456 = (Steam_Generator_thermal_liquid_Hg_tur + X[164ULL]) * (1.0 - pmf_exp
    (-X[39ULL] / (t457 == 0.0 ? 1.0E-16 : t457)));
  t275_idx_0 = X[164ULL] + t335 * t325;
  t325 = t456 / (t275_idx_0 == 0.0 ? 1.0E-16 : t275_idx_0);
  intrm_sf_mf_445 = t325 <= 15.0 ? t325 : 15.0;
  t325 = (t462 - t468) / (t335 == 0.0 ? 1.0E-16 : t335);
  intrm_sf_mf_432 = (t468 < t462);
  t337 = (1.0 - pmf_exp(-intrm_sf_mf_445)) * X[163ULL];
  intrm_sf_mf_434 = (t337 < t325 * 1000.0);
  intrm_sf_mf_437 = (t468 <= t462);
  if (intrm_sf_mf_440) {
    t338 = intrm_sf_mf_421 ? 0.0 : (real_T)!intrm_sf_mf_432;
  } else if (intrm_sf_mf_439) {
    if (intrm_sf_mf_436) {
      if (intrm_sf_mf_434) {
        t275_idx_0 = -pmf_log((X[163ULL] - t325 * 1000.0) / (X[163ULL] == 0.0 ?
          1.0E-16 : X[163ULL]));
        t338 = t275_idx_0 / (intrm_sf_mf_445 == 0.0 ? 1.0E-16 : intrm_sf_mf_445);
      } else {
        t338 = 1.0;
      }
    } else {
      t338 = 0.0;
    }
  } else {
    t338 = intrm_sf_mf_421 ? 0.0 : (real_T)!intrm_sf_mf_437;
  }

  intrm_sf_mf_445 = (1.0 - t313) - t338;
  t456 = (Steam_Generator_thermal_liquid_Hg_tur + X[164ULL]) * (1.0 - pmf_exp
    (-X[40ULL] / (t457 == 0.0 ? 1.0E-16 : t457)));
  t457 = t438 / (t323 == 0.0 ? 1.0E-16 : t323);
  Steam_Generator_thermal_liquid_Hg_tur = t456 / (t457 == 0.0 ? 1.0E-16 : t457);
  if (intrm_sf_mf_440) {
    if (intrm_sf_mf_421) {
      t275_idx_0 = X[163ULL] - intrm_sf_mf_455 * 1000.0;
    } else if (intrm_sf_mf_432) {
      t275_idx_0 = X[163ULL];
    } else {
      t275_idx_0 = X[163ULL] - t325 * 1000.0;
    }
  } else if (intrm_sf_mf_439) {
    if (intrm_sf_mf_436) {
      t275_idx_0 = X[163ULL] - t325 * 1000.0;
    } else if (intrm_sf_mf_451) {
      t275_idx_0 = X[163ULL];
    } else {
      t275_idx_0 = X[163ULL] - intrm_sf_mf_455 * 1000.0;
    }
  } else if (intrm_sf_mf_421) {
    t275_idx_0 = intrm_sf_mf_455 * 1000.0 + X[163ULL];
  } else if (intrm_sf_mf_437) {
    t275_idx_0 = X[163ULL];
  } else {
    t275_idx_0 = t325 * 1000.0 + X[163ULL];
  }

  if (intrm_sf_mf_440) {
    if (intrm_sf_mf_421) {
      if (intrm_sf_mf_420) {
        intrm_sf_mf_455 = t479;
      } else {
        intrm_sf_mf_455 = t323 * t472 * 0.001 + t468;
      }
    } else if (intrm_sf_mf_432) {
      intrm_sf_mf_455 = t468;
    } else {
      intrm_sf_mf_455 = t335 * t337 * 0.001 + t468;
    }
  } else if (intrm_sf_mf_439) {
    if (intrm_sf_mf_436) {
      if (intrm_sf_mf_434) {
        intrm_sf_mf_455 = t462;
      } else {
        intrm_sf_mf_455 = t335 * t337 * 0.001 + t468;
      }
    } else if (intrm_sf_mf_451) {
      intrm_sf_mf_455 = t468;
    } else {
      intrm_sf_mf_455 = t323 * t472 * 0.001 + t468;
    }
  } else if (intrm_sf_mf_421) {
    intrm_sf_mf_455 = t323 * t472 * 0.001 + t468;
  } else if (intrm_sf_mf_437) {
    intrm_sf_mf_455 = t468;
  } else {
    intrm_sf_mf_455 = t335 * t337 * 0.001 + t468;
  }

  t323 = t479 - intrm_sf_mf_455;
  t325 = t462 - intrm_sf_mf_455;
  t468 = Steam_Generator_thermal_liquid_Hg_tur * t275_idx_0 * intrm_sf_mf_445;
  if (intrm_sf_mf_440) {
    if (intrm_sf_mf_455 < t462) {
      if (t468 * 0.001 > t325) {
        intrm_sf_mf_455 = t325 / (t275_idx_0 == 0.0 ? 1.0E-16 : t275_idx_0) /
          (Steam_Generator_thermal_liquid_Hg_tur == 0.0 ? 1.0E-16 :
           Steam_Generator_thermal_liquid_Hg_tur) * 1000.0;
      } else {
        intrm_sf_mf_455 = intrm_sf_mf_445;
      }
    } else {
      intrm_sf_mf_455 = 0.0;
    }
  } else if (intrm_sf_mf_439) {
    if (intrm_sf_mf_455 > t479) {
      if (t468 * 0.001 < t323) {
        intrm_sf_mf_455 = t323 / (t275_idx_0 == 0.0 ? 1.0E-16 : t275_idx_0) /
          (Steam_Generator_thermal_liquid_Hg_tur == 0.0 ? 1.0E-16 :
           Steam_Generator_thermal_liquid_Hg_tur) * 1000.0;
      } else {
        intrm_sf_mf_455 = intrm_sf_mf_445;
      }
    } else {
      intrm_sf_mf_455 = 0.0;
    }
  } else {
    intrm_sf_mf_455 = intrm_sf_mf_445;
  }

  t323 = intrm_sf_mf_445 - intrm_sf_mf_455;
  t325 = t313 + (intrm_sf_mf_440 ? 0.0 : intrm_sf_mf_439 ? t323 : 0.0);
  t323 = t338 + (intrm_sf_mf_440 ? t323 : 0.0);
  tlu2_2d_linear_nearest_value(&vc_efOut[0ULL], &t18.mField0[0ULL],
    &t18.mField2[0ULL], &t19.mField0[0ULL], &t19.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t43[0ULL], &t46[0ULL], &t30[0ULL]);
  t299[0] = vc_efOut[0];
  t313 = t299[0ULL];
  tlu2_2d_linear_nearest_value(&wc_efOut[0ULL], &t26.mField0[0ULL],
    &t26.mField2[0ULL], &t19.mField0[0ULL], &t19.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t43[0ULL], &t46[0ULL], &t30[0ULL]);
  t299[0] = wc_efOut[0];
  Steam_Generator_thermal_liquid_Hg_tur = t299[0ULL];
  t313 = (t313 + Steam_Generator_thermal_liquid_Hg_tur) / 2.0;
  t462 = t313 * 0.42000000000000004;
  t313 = t314 * 0.018 / (t462 == 0.0 ? 1.0E-16 : t462);
  t314 = pmf_sqrt(t313 * t313 + 100.0);
  t313 = t314 * 29.915749795368463;
  Steam_Generator_thermal_liquid_Hg_tur = t314 * pmf_sqrt(t314) * pmf_sqrt
    (pmf_sqrt(t314)) * 1.996694297036971;
  if (t314 > 250000.0) {
    t468 = (t314 - 250000.0) / 325000.0 + 1.0;
  } else {
    t468 = 1.0;
  }

  t314 = 1.0 - pmf_exp(-(t314 + 200.0) / 1000.0);
  t479 = Steam_Generator_thermal_liquid_Hg_tur * t468 * t314 + t313;
  tlu2_2d_linear_nearest_value(&xc_efOut[0ULL], &t18.mField0[0ULL],
    &t18.mField2[0ULL], &t19.mField0[0ULL], &t19.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField13, &t43[0ULL], &t46[0ULL], &t30[0ULL]);
  t299[0] = xc_efOut[0];
  t313 = t299[0ULL];
  tlu2_2d_linear_nearest_value(&yc_efOut[0ULL], &t26.mField0[0ULL],
    &t26.mField2[0ULL], &t19.mField0[0ULL], &t19.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField13, &t43[0ULL], &t46[0ULL], &t30[0ULL]);
  t299[0] = yc_efOut[0];
  t314 = t299[0ULL];
  t313 = (t313 + t314) / 2.0;
  t313 = pmf_pow(t479 * t313 * 0.55399065447813123, 0.33333333333333331) * 0.404;
  t468 = t313 * Steam_Generator_UA_liq / 0.018 * 23.750440461138837;
  Steam_Generator_UA_liq = 1.0 / (t468 == 0.0 ? 1.0E-16 : t468);
  t313 = t318 > 0.5 ? t318 : 0.5;
  t468 = Steam_Generator_two_phase_fluid_Cdot_threshold * 0.025;
  t479 = t482 * 0.036815538909255395;
  t314 = t468 / (t479 == 0.0 ? 1.0E-16 : t479);
  t318 = t314 > 1000.0 ? t314 : 1000.0;
  t479 = pmf_log10(6.9 / (t318 == 0.0 ? 1.0E-16 : t318) + 6.2093190311196615E-5)
    * pmf_log10(6.9 / (t318 == 0.0 ? 1.0E-16 : t318) + 6.2093190311196615E-5) *
    3.24;
  t482 = 1.0 / (t479 == 0.0 ? 1.0E-16 : t479);
  t472 = (pmf_pow(t313, 0.66666666666666663) - 1.0) * pmf_sqrt(t482 / 8.0) *
    12.7 + 1.0;
  t313 = (t318 - 1000.0) * (t482 / 8.0) * t313 / (t472 == 0.0 ? 1.0E-16 : t472);
  t318 = (t314 - 2000.0) / 2000.0;
  t482 = t318 * t318 * 3.0 - t318 * t318 * t318 * 2.0;
  if (t314 <= 2000.0) {
    t318 = 3.66;
  } else if (t314 >= 4000.0) {
    t318 = t313;
  } else {
    t318 = (1.0 - t482) * 3.66 + t313 * t482;
  }

  t479 = t321 * t318 / 0.025 * 41.233403578366037;
  t314 = Steam_Generator_UA_liq + 1.0 / (t479 == 0.0 ? 1.0E-16 : t479);
  tlu2_2d_linear_nearest_value(&ad_efOut[0ULL], &t11.mField0[0ULL],
    &t11.mField2[0ULL], &t16.mField0[0ULL], &t16.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t58[0ULL], &t29[0ULL], &t30[0ULL]);
  t299[0] = ad_efOut[0];
  t313 = t299[0ULL];
  tlu2_2d_linear_nearest_value(&bd_efOut[0ULL], &t11.mField0[0ULL],
    &t11.mField2[0ULL], &t16.mField0[0ULL], &t16.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t58[0ULL], &t29[0ULL], &t30[0ULL]);
  t299[0] = bd_efOut[0];
  t318 = t299[0ULL];
  t479 = t318 * 0.036815538909255395;
  t318 = t468 / (t479 == 0.0 ? 1.0E-16 : t479);
  t321 = t318 > 1.0 ? t318 : 1.0;
  t318 = t316 <= 0.0 ? 0.0 : t316 >= 1.0 ? 1.0 : t316;
  t316 = t491 <= 0.0 ? 0.0 : t491 >= 1.0 ? 1.0 : t491;
  if (t316 - t318 > 1.0E-6) {
    t491 = t316 - t318;
  } else if (t318 - t316 > 1.0E-6) {
    t491 = t318 - t316;
  } else {
    t491 = 1.0E-6;
  }

  if (Steam_Generator_two_phase_fluid_v_sat_vap / (t480 == 0.0 ? 1.0E-16 : t480)
      > 1.000001) {
    t482 = pmf_sqrt(Steam_Generator_two_phase_fluid_v_sat_vap / (t480 == 0.0 ?
      1.0E-16 : t480));
  } else {
    t482 = 1.0000004999998751;
  }

  Steam_Generator_thermal_liquid_Hg_tur = t318 <= t316 ? t318 : t316;
  t480 = pmf_pow(t321, 0.8) * pmf_pow(t313, 0.33) * 0.05;
  t472 = (pmf_pow((t491 + Steam_Generator_thermal_liquid_Hg_tur) * (t482 - 1.0)
                  + 1.0, 1.8) - pmf_pow((t482 - 1.0) *
           Steam_Generator_thermal_liquid_Hg_tur + 1.0, 1.8)) * (t480 / 1.8 /
    (t482 - 1.0 == 0.0 ? 1.0E-16 : t482 - 1.0));
  t313 = t472 / (t491 == 0.0 ? 1.0E-16 : t491);
  t316 = t313 > 3.66 ? t313 : 3.66;
  tlu2_2d_linear_nearest_value(&cd_efOut[0ULL], &t11.mField0[0ULL],
    &t11.mField2[0ULL], &t16.mField0[0ULL], &t16.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t58[0ULL], &t29[0ULL], &t30[0ULL]);
  t299[0] = cd_efOut[0];
  t313 = t299[0ULL];
  t482 = t316 * t313 / 0.025 * 41.233403578366037;
  t316 = Steam_Generator_UA_liq + 1.0 / (t482 == 0.0 ? 1.0E-16 : t482);
  t313 = Steam_Generator_two_phase_fluid_unorm_in_vap > 0.5 ?
    Steam_Generator_two_phase_fluid_unorm_in_vap : 0.5;
  t482 = t334 * 0.036815538909255395;
  t318 = t468 / (t482 == 0.0 ? 1.0E-16 : t482);
  t491 = t318 > 1000.0 ? t318 : 1000.0;
  t482 = pmf_log10(6.9 / (t491 == 0.0 ? 1.0E-16 : t491) + 6.2093190311196615E-5)
    * pmf_log10(6.9 / (t491 == 0.0 ? 1.0E-16 : t491) + 6.2093190311196615E-5) *
    3.24;
  t321 = 1.0 / (t482 == 0.0 ? 1.0E-16 : t482);
  Steam_Generator_thermal_liquid_Hg_tur = (pmf_pow(t313, 0.66666666666666663) -
    1.0) * pmf_sqrt(t321 / 8.0) * 12.7 + 1.0;
  t313 = (t491 - 1000.0) * (t321 / 8.0) * t313 /
    (Steam_Generator_thermal_liquid_Hg_tur == 0.0 ? 1.0E-16 :
     Steam_Generator_thermal_liquid_Hg_tur);
  t491 = (t318 - 2000.0) / 2000.0;
  t321 = t491 * t491 * 3.0 - t491 * t491 * t491 * 2.0;
  if (t318 <= 2000.0) {
    t491 = 3.66;
  } else if (t318 >= 4000.0) {
    t491 = t313;
  } else {
    t491 = (1.0 - t321) * 3.66 + t313 * t321;
  }

  t491 = t333 * t491 / 0.025 * 41.233403578366037;
  t318 = Steam_Generator_UA_liq + 1.0 / (t491 == 0.0 ? 1.0E-16 : t491);
  t313 = 1.0 / (t316 == 0.0 ? 1.0E-16 : t316);
  if (intrm_sf_mf_17 <= 0.0) {
    t316 = 0.0;
  } else {
    t316 = intrm_sf_mf_17 >= 1.0 ? 1.0 : intrm_sf_mf_17;
  }

  if (t307 <= 0.0) {
    intrm_sf_mf_17 = 0.0;
  } else {
    intrm_sf_mf_17 = t307 >= 1.0 ? 1.0 : t307;
  }

  if (intrm_sf_mf_337 <= 0.0) {
    t307 = 0.0;
  } else {
    t307 = intrm_sf_mf_337 >= 1.0 ? 1.0 : intrm_sf_mf_337;
  }

  if (intrm_sf_mf_325 <= 0.0) {
    intrm_sf_mf_337 = 0.0;
  } else {
    intrm_sf_mf_337 = intrm_sf_mf_325 >= 1.0 ? 1.0 : intrm_sf_mf_325;
  }

  out.mX[0] = X[1ULL] - t316;
  out.mX[1] = X[2ULL] - intrm_sf_mf_17;
  out.mX[2] = X[14ULL] - ((intrm_sf_mf_84 * 888.5435180131293 + intrm_sf_mf_85 *
    17.468881413331218) + intrm_sf_mf_61 * 809.77239983044092) *
    0.035342917352885174;
  out.mX[3] = X[11ULL] - Condenser_UA_liq;
  out.mX[4] = X[12ULL] - Condenser_UA_vap;
  out.mX[5] = X[13ULL] - t309;
  out.mX[6] = X[10ULL] - t308;
  out.mX[7] = X[9ULL] - t311;
  out.mX[8] = X[24ULL] - t307;
  out.mX[9] = X[25ULL] - intrm_sf_mf_337;
  out.mX[10] = X[41ULL] - ((t325 * 828.15401656326969 + t323 *
    20.027703595261809) + intrm_sf_mf_455 * 798.39859540639281) *
    0.25770877236478779;
  out.mX[11] = X[36ULL] - 1.0 / (t314 == 0.0 ? 1.0E-16 : t314);
  out.mX[12] = X[39ULL] - 1.0 / (t318 == 0.0 ? 1.0E-16 : t318);
  out.mX[13] = X[40ULL] - t313;
  out.mX[14] = X[38ULL] - Steam_Generator_two_phase_fluid_Cdot_threshold;
  out.mX[15] = X[37ULL] - Condenser_two_phase_fluid_f_vap;
  (void)LC;
  (void)t493;
  return 0;
}
