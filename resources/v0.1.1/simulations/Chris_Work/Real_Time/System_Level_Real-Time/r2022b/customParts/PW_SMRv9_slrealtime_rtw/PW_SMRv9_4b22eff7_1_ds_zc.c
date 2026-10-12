/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv9/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_sys_struct.h"
#include "PW_SMRv9_4b22eff7_1_ds_zc.h"
#include "PW_SMRv9_4b22eff7_1_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_externals.h"
#include "PW_SMRv9_4b22eff7_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv9_4b22eff7_1_ds_zc(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t654, NeDsMethodOutput *t655)
{
  ETTS0 ac_efOut;
  ETTS0 ad_efOut;
  ETTS0 af_efOut;
  ETTS0 be_efOut;
  ETTS0 bf_efOut;
  ETTS0 cc_efOut;
  ETTS0 ce_efOut;
  ETTS0 d_efOut;
  ETTS0 db_efOut;
  ETTS0 df_efOut;
  ETTS0 ec_efOut;
  ETTS0 ed_efOut;
  ETTS0 ee_efOut;
  ETTS0 efOut;
  ETTS0 ef_efOut;
  ETTS0 f_efOut;
  ETTS0 fb_efOut;
  ETTS0 fe_efOut;
  ETTS0 gc_efOut;
  ETTS0 he_efOut;
  ETTS0 i_efOut;
  ETTS0 ib_efOut;
  ETTS0 ic_efOut;
  ETTS0 id_efOut;
  ETTS0 ie_efOut;
  ETTS0 k_efOut;
  ETTS0 kb_efOut;
  ETTS0 kc_efOut;
  ETTS0 ke_efOut;
  ETTS0 le_efOut;
  ETTS0 mc_efOut;
  ETTS0 md_efOut;
  ETTS0 n_efOut;
  ETTS0 nb_efOut;
  ETTS0 ne_efOut;
  ETTS0 o_efOut;
  ETTS0 oc_efOut;
  ETTS0 od_efOut;
  ETTS0 oe_efOut;
  ETTS0 pb_efOut;
  ETTS0 pc_efOut;
  ETTS0 pd_efOut;
  ETTS0 qe_efOut;
  ETTS0 rd_efOut;
  ETTS0 re_efOut;
  ETTS0 s_efOut;
  ETTS0 sb_efOut;
  ETTS0 sd_efOut;
  ETTS0 t0;
  ETTS0 t22;
  ETTS0 t23;
  ETTS0 t45;
  ETTS0 t51;
  ETTS0 t52;
  ETTS0 t55;
  ETTS0 t57;
  ETTS0 t58;
  ETTS0 t59;
  ETTS0 t63;
  ETTS0 tc_efOut;
  ETTS0 te_efOut;
  ETTS0 u_efOut;
  ETTS0 ub_efOut;
  ETTS0 ud_efOut;
  ETTS0 ue_efOut;
  ETTS0 vc_efOut;
  ETTS0 vd_efOut;
  ETTS0 w_efOut;
  ETTS0 wb_efOut;
  ETTS0 we_efOut;
  ETTS0 xd_efOut;
  ETTS0 xe_efOut;
  ETTS0 y_efOut;
  ETTS0 yc_efOut;
  ETTS0 yd_efOut;
  PmRealVector out;
  real_T X[250];
  real_T t441[184];
  real_T ab_efOut[1];
  real_T ae_efOut[1];
  real_T b_efOut[1];
  real_T bb_efOut[1];
  real_T bc_efOut[1];
  real_T bd_efOut[1];
  real_T c_efOut[1];
  real_T cb_efOut[1];
  real_T cd_efOut[1];
  real_T cf_efOut[1];
  real_T dc_efOut[1];
  real_T dd_efOut[1];
  real_T de_efOut[1];
  real_T e_efOut[1];
  real_T eb_efOut[1];
  real_T fc_efOut[1];
  real_T fd_efOut[1];
  real_T ff_efOut[1];
  real_T g_efOut[1];
  real_T gb_efOut[1];
  real_T gd_efOut[1];
  real_T ge_efOut[1];
  real_T h_efOut[1];
  real_T hb_efOut[1];
  real_T hc_efOut[1];
  real_T hd_efOut[1];
  real_T j_efOut[1];
  real_T jb_efOut[1];
  real_T jc_efOut[1];
  real_T jd_efOut[1];
  real_T je_efOut[1];
  real_T kd_efOut[1];
  real_T l_efOut[1];
  real_T lb_efOut[1];
  real_T lc_efOut[1];
  real_T ld_efOut[1];
  real_T m_efOut[1];
  real_T mb_efOut[1];
  real_T me_efOut[1];
  real_T nc_efOut[1];
  real_T nd_efOut[1];
  real_T ob_efOut[1];
  real_T p_efOut[1];
  real_T pe_efOut[1];
  real_T q_efOut[1];
  real_T qb_efOut[1];
  real_T qc_efOut[1];
  real_T qd_efOut[1];
  real_T r_efOut[1];
  real_T rb_efOut[1];
  real_T rc_efOut[1];
  real_T sc_efOut[1];
  real_T se_efOut[1];
  real_T t508[1];
  real_T t_efOut[1];
  real_T tb_efOut[1];
  real_T td_efOut[1];
  real_T uc_efOut[1];
  real_T v_efOut[1];
  real_T vb_efOut[1];
  real_T ve_efOut[1];
  real_T wc_efOut[1];
  real_T wd_efOut[1];
  real_T x_efOut[1];
  real_T xb_efOut[1];
  real_T xc_efOut[1];
  real_T yb_efOut[1];
  real_T ye_efOut[1];
  real_T Check_Valve_2P2_convection_A_v_in;
  real_T Check_Valve_2P2_convection_B_v_in;
  real_T Condenser_two_phase_fluid_Cdot_ext_lag_pos;
  real_T Preheating_Pipe_2P_v_A;
  real_T Pressure_Relief_Valve_2P1_convection_B_v_in;
  real_T Pressure_Relief_Valve_2P_convection_A_v_in;
  real_T U_idx_1;
  real_T U_idx_5;
  real_T U_idx_6;
  real_T intrm_sf_mf_496;
  real_T intrm_sf_mf_626;
  real_T intrm_sf_mf_633;
  real_T intrm_sf_mf_92;
  real_T t502_idx_0;
  real_T t509;
  real_T t510;
  real_T t511;
  real_T t514;
  real_T t515;
  real_T t516;
  real_T t517;
  real_T t518;
  real_T t520;
  real_T t521;
  real_T t522;
  real_T t524;
  real_T t525;
  real_T t527;
  real_T t528;
  real_T t530;
  real_T t531;
  real_T t532;
  real_T t533;
  real_T t534;
  real_T t535;
  real_T t537;
  real_T t541;
  real_T t546;
  real_T t548;
  size_t t316[1];
  size_t t319[1];
  size_t t66[1];
  int32_T Q_idx_0;
  int32_T Q_idx_1;
  int32_T Q_idx_2;
  int32_T b;
  boolean_T intrm_sf_mf_25;
  boolean_T intrm_sf_mf_497;
  boolean_T intrm_sf_mf_516;
  boolean_T intrm_sf_mf_52;
  Q_idx_0 = t654->mQ.mX[0];
  Q_idx_1 = t654->mQ.mX[1];
  Q_idx_2 = t654->mQ.mX[2];
  U_idx_1 = t654->mU.mX[1];
  U_idx_5 = t654->mU.mX[5];
  U_idx_6 = t654->mU.mX[6];
  for (b = 0; b < 250; b++) {
    X[b] = t654->mX.mX[b];
  }

  out = t655->mZC;
  t508[0ULL] = X[0ULL];
  t316[0] = 100ULL;
  t66[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t508[0ULL],
    &t316[0ULL], &t66[0ULL]);
  t63 = efOut;
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t63.mField0[0ULL], &t63.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = b_efOut[0];
  t509 = t502_idx_0;
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t63.mField0[0ULL], &t63.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = c_efOut[0];
  t510 = t502_idx_0;
  if (X[72ULL] <= t509) {
    Check_Valve_2P2_convection_A_v_in = X[72ULL] / (t509 == 0.0 ? 1.0E-16 : t509)
      - 1.0;
  } else if (X[72ULL] >= t502_idx_0) {
    Check_Valve_2P2_convection_A_v_in = (X[72ULL] - 4000.0) / (4000.0 -
      t502_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t502_idx_0) + 2.0;
  } else {
    t515 = t502_idx_0 - t509;
    Check_Valve_2P2_convection_A_v_in = (X[72ULL] - t509) / (t515 == 0.0 ?
      1.0E-16 : t515);
  }

  t508[0ULL] = Check_Valve_2P2_convection_A_v_in;
  t319[0] = 50ULL;
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t51 = d_efOut;
  tlu2_2d_linear_linear_value(&e_efOut[0ULL], &t51.mField0[0ULL], &t51.mField2
    [0ULL], &t63.mField0[0ULL], &t63.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = e_efOut[0];
  Check_Valve_2P2_convection_A_v_in = t502_idx_0;
  t508[0ULL] = X[73ULL];
  tlu2_linear_linear_prelookup(&f_efOut.mField0[0ULL], &f_efOut.mField1[0ULL],
    &f_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t508[0ULL],
    &t316[0ULL], &t66[0ULL]);
  t22 = f_efOut;
  tlu2_1d_linear_linear_value(&g_efOut[0ULL], &t22.mField0[0ULL], &t22.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = g_efOut[0];
  t511 = t502_idx_0;
  tlu2_1d_linear_linear_value(&h_efOut[0ULL], &t22.mField0[0ULL], &t22.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = h_efOut[0];
  Pressure_Relief_Valve_2P_convection_A_v_in = t502_idx_0;
  if (X[74ULL] <= t511) {
    Check_Valve_2P2_convection_B_v_in = X[74ULL] / (t511 == 0.0 ? 1.0E-16 : t511)
      - 1.0;
  } else if (X[74ULL] >= t502_idx_0) {
    Check_Valve_2P2_convection_B_v_in = (X[74ULL] - 4000.0) / (4000.0 -
      t502_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t502_idx_0) + 2.0;
  } else {
    t520 = t502_idx_0 - t511;
    Check_Valve_2P2_convection_B_v_in = (X[74ULL] - t511) / (t520 == 0.0 ?
      1.0E-16 : t520);
  }

  t508[0ULL] = Check_Valve_2P2_convection_B_v_in;
  tlu2_linear_linear_prelookup(&i_efOut.mField0[0ULL], &i_efOut.mField1[0ULL],
    &i_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t51 = i_efOut;
  tlu2_2d_linear_linear_value(&j_efOut[0ULL], &t51.mField0[0ULL], &t51.mField2
    [0ULL], &t22.mField0[0ULL], &t22.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = j_efOut[0];
  Check_Valve_2P2_convection_B_v_in = t502_idx_0;
  t514 = X[84ULL] * -0.0012548887771113527;
  t516 = X[85ULL] * -0.0012548887771113527;
  t517 = X[86ULL] * -0.0012548887771113527;
  t508[0ULL] = X[6ULL];
  tlu2_linear_linear_prelookup(&k_efOut.mField0[0ULL], &k_efOut.mField1[0ULL],
    &k_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t508[0ULL],
    &t316[0ULL], &t66[0ULL]);
  t58 = k_efOut;
  tlu2_1d_linear_linear_value(&l_efOut[0ULL], &t58.mField0[0ULL], &t58.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = l_efOut[0];
  t518 = t502_idx_0;
  tlu2_1d_linear_linear_value(&m_efOut[0ULL], &t58.mField0[0ULL], &t58.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = m_efOut[0];
  intrm_sf_mf_92 = t502_idx_0;
  if (X[7ULL] <= t518) {
    t520 = X[7ULL] / (t518 == 0.0 ? 1.0E-16 : t518) - 1.0;
  } else if (X[7ULL] >= t502_idx_0) {
    t520 = (X[7ULL] - 4000.0) / (4000.0 - t502_idx_0 == 0.0 ? 1.0E-16 : 4000.0 -
      t502_idx_0) + 2.0;
  } else {
    t525 = t502_idx_0 - t518;
    t520 = (X[7ULL] - t518) / (t525 == 0.0 ? 1.0E-16 : t525);
  }

  if (X[8ULL] <= t518) {
    t522 = X[8ULL] / (t518 == 0.0 ? 1.0E-16 : t518) - 1.0;
  } else if (X[8ULL] >= t502_idx_0) {
    t522 = (X[8ULL] - 4000.0) / (4000.0 - t502_idx_0 == 0.0 ? 1.0E-16 : 4000.0 -
      t502_idx_0) + 2.0;
  } else {
    t530 = t502_idx_0 - t518;
    t522 = (X[8ULL] - t518) / (t530 == 0.0 ? 1.0E-16 : t530);
  }

  t508[0ULL] = ((t520 < 0.0 ? t520 : 0.0) + (t522 < 0.0 ? t522 : 0.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&n_efOut.mField0[0ULL], &n_efOut.mField1[0ULL],
    &n_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t51 = n_efOut;
  t508[0ULL] = X[6ULL];
  tlu2_linear_nearest_prelookup(&o_efOut.mField0[0ULL], &o_efOut.mField1[0ULL],
    &o_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t508[0ULL],
    &t316[0ULL], &t66[0ULL]);
  t0 = o_efOut;
  tlu2_2d_linear_nearest_value(&p_efOut[0ULL], &t51.mField0[0ULL], &t51.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField12, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = p_efOut[0];
  t521 = t502_idx_0;
  tlu2_2d_linear_nearest_value(&q_efOut[0ULL], &t51.mField0[0ULL], &t51.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField10, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = q_efOut[0];
  Condenser_two_phase_fluid_Cdot_ext_lag_pos = t502_idx_0;
  tlu2_2d_linear_nearest_value(&r_efOut[0ULL], &t51.mField0[0ULL], &t51.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField13, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = r_efOut[0];
  t521 = t521 * Condenser_two_phase_fluid_Cdot_ext_lag_pos / (t502_idx_0 == 0.0 ?
    1.0E-16 : t502_idx_0);
  Condenser_two_phase_fluid_Cdot_ext_lag_pos = X[9ULL] >= 0.0 ? X[9ULL] : 0.0;
  t524 = X[10ULL] >= 0.0 ? X[10ULL] : 0.0;
  t525 = t521 * t524;
  t534 = Condenser_two_phase_fluid_Cdot_ext_lag_pos + X[98ULL];
  t515 = (t525 + X[98ULL]) / (t534 == 0.0 ? 1.0E-16 : t534);
  if (t515 <= 1.0) {
    t527 = 1.0 - t515 * 0.999999;
  } else {
    t527 = 1.0E-6;
  }

  if (t515 >= 1.0) {
    t528 = t515 * 1.000001 - 1.0;
  } else {
    t528 = 1.0E-6;
  }

  if (t525 + X[98ULL] >= Condenser_two_phase_fluid_Cdot_ext_lag_pos + X[98ULL])
  {
    t535 = Condenser_two_phase_fluid_Cdot_ext_lag_pos + X[98ULL];
    intrm_sf_mf_496 = t525 + X[98ULL];
    t515 = (1.000001 / (t535 == 0.0 ? 1.0E-16 : t535) - 0.999999 /
            (intrm_sf_mf_496 == 0.0 ? 1.0E-16 : intrm_sf_mf_496)) * X[11ULL];
  } else {
    t537 = t525 + X[98ULL];
    intrm_sf_mf_626 = Condenser_two_phase_fluid_Cdot_ext_lag_pos + X[98ULL];
    t515 = (1.000001 / (t537 == 0.0 ? 1.0E-16 : t537) - 0.999999 /
            (intrm_sf_mf_626 == 0.0 ? 1.0E-16 : intrm_sf_mf_626)) * X[11ULL];
  }

  t525 = t515 <= 15.0 ? t515 : 15.0;
  t508[0ULL] = t520;
  tlu2_linear_linear_prelookup(&s_efOut.mField0[0ULL], &s_efOut.mField1[0ULL],
    &s_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t51 = s_efOut;
  tlu2_2d_linear_linear_value(&t_efOut[0ULL], &t51.mField0[0ULL], &t51.mField2
    [0ULL], &t58.mField0[0ULL], &t58.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = t_efOut[0];
  Preheating_Pipe_2P_v_A = X[6ULL] * t502_idx_0 * 100.0 + X[7ULL];
  t508[0] = 0.0;
  tlu2_linear_linear_prelookup(&u_efOut.mField0[0ULL], &u_efOut.mField1[0ULL],
    &u_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t45 = u_efOut;
  tlu2_2d_linear_linear_value(&v_efOut[0ULL], &t45.mField0[0ULL], &t45.mField2
    [0ULL], &t58.mField0[0ULL], &t58.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = v_efOut[0];
  intrm_sf_mf_633 = (1.0 - pmf_exp(-t525)) * X[97ULL];
  t541 = pmf_exp(-t525) * t528 + t527;
  intrm_sf_mf_25 = (intrm_sf_mf_633 / (t541 == 0.0 ? 1.0E-16 : t541) > ((X[6ULL]
    * t502_idx_0 * 100.0 + t518) - Preheating_Pipe_2P_v_A) / (t521 == 0.0 ?
    1.0E-16 : t521) * 1000.0);
  t508[0] = 1.0;
  tlu2_linear_linear_prelookup(&w_efOut.mField0[0ULL], &w_efOut.mField1[0ULL],
    &w_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t59 = w_efOut;
  tlu2_2d_linear_linear_value(&x_efOut[0ULL], &t59.mField0[0ULL], &t59.mField2
    [0ULL], &t58.mField0[0ULL], &t58.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = x_efOut[0];
  t521 = X[6ULL] * t502_idx_0 * 100.0 + intrm_sf_mf_92;
  t508[0ULL] = ((t520 > 1.0 ? t520 : 1.0) + (t522 > 1.0 ? t522 : 1.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&y_efOut.mField0[0ULL], &y_efOut.mField1[0ULL],
    &y_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t52 = y_efOut;
  tlu2_2d_linear_nearest_value(&ab_efOut[0ULL], &t52.mField0[0ULL],
    &t52.mField2[0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)
    (LC))->mField12, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = ab_efOut[0];
  t518 = t502_idx_0;
  tlu2_2d_linear_nearest_value(&bb_efOut[0ULL], &t52.mField0[0ULL],
    &t52.mField2[0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)
    (LC))->mField10, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = bb_efOut[0];
  intrm_sf_mf_92 = t502_idx_0;
  tlu2_2d_linear_nearest_value(&cb_efOut[0ULL], &t52.mField0[0ULL],
    &t52.mField2[0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)
    (LC))->mField13, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = cb_efOut[0];
  t518 = t518 * intrm_sf_mf_92 / (t502_idx_0 == 0.0 ? 1.0E-16 : t502_idx_0);
  intrm_sf_mf_92 = t518 * t524;
  t520 = (X[98ULL] + intrm_sf_mf_92) / (t534 == 0.0 ? 1.0E-16 : t534);
  if (t520 <= 1.0) {
    t524 = 1.0 - t520 * 0.999999;
  } else {
    t524 = 1.0E-6;
  }

  if (t520 >= 1.0) {
    t525 = t520 * 1.000001 - 1.0;
  } else {
    t525 = 1.0E-6;
  }

  if (X[98ULL] + intrm_sf_mf_92 >= Condenser_two_phase_fluid_Cdot_ext_lag_pos +
      X[98ULL]) {
    t546 = Condenser_two_phase_fluid_Cdot_ext_lag_pos + X[98ULL];
    t515 = X[98ULL] + intrm_sf_mf_92;
    t520 = (1.000001 / (t546 == 0.0 ? 1.0E-16 : t546) - 0.999999 / (t515 == 0.0 ?
             1.0E-16 : t515)) * X[12ULL];
  } else {
    t548 = X[98ULL] + intrm_sf_mf_92;
    t527 = Condenser_two_phase_fluid_Cdot_ext_lag_pos + X[98ULL];
    t520 = (1.000001 / (t548 == 0.0 ? 1.0E-16 : t548) - 0.999999 / (t527 == 0.0 ?
             1.0E-16 : t527)) * X[12ULL];
  }

  intrm_sf_mf_92 = t520 <= 15.0 ? t520 : 15.0;
  t527 = (1.0 - pmf_exp(-intrm_sf_mf_92)) * X[97ULL];
  t528 = pmf_exp(-intrm_sf_mf_92) * t525 + t524;
  intrm_sf_mf_52 = (t527 / (t528 == 0.0 ? 1.0E-16 : t528) < (t521 -
    Preheating_Pipe_2P_v_A) / (t518 == 0.0 ? 1.0E-16 : t518) * 1000.0);
  t508[0ULL] = t522;
  tlu2_linear_linear_prelookup(&db_efOut.mField0[0ULL], &db_efOut.mField1[0ULL],
    &db_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t0 = db_efOut;
  tlu2_2d_linear_linear_value(&eb_efOut[0ULL], &t0.mField0[0ULL], &t0.mField2
    [0ULL], &t58.mField0[0ULL], &t58.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = eb_efOut[0];
  t518 = t502_idx_0;
  t508[0ULL] = X[88ULL];
  tlu2_linear_linear_prelookup(&fb_efOut.mField0[0ULL], &fb_efOut.mField1[0ULL],
    &fb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t508[0ULL],
    &t316[0ULL], &t66[0ULL]);
  t0 = fb_efOut;
  tlu2_1d_linear_linear_value(&gb_efOut[0ULL], &t0.mField0[0ULL], &t0.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = gb_efOut[0];
  intrm_sf_mf_92 = t502_idx_0;
  tlu2_1d_linear_linear_value(&hb_efOut[0ULL], &t0.mField0[0ULL], &t0.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = hb_efOut[0];
  if (X[89ULL] <= intrm_sf_mf_92) {
    t521 = X[89ULL] / (intrm_sf_mf_92 == 0.0 ? 1.0E-16 : intrm_sf_mf_92) - 1.0;
  } else if (X[89ULL] >= t502_idx_0) {
    t521 = (X[89ULL] - 4000.0) / (4000.0 - t502_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t502_idx_0) + 2.0;
  } else {
    t515 = t502_idx_0 - intrm_sf_mf_92;
    t521 = (X[89ULL] - intrm_sf_mf_92) / (t515 == 0.0 ? 1.0E-16 : t515);
  }

  t508[0ULL] = t521;
  tlu2_linear_linear_prelookup(&ib_efOut.mField0[0ULL], &ib_efOut.mField1[0ULL],
    &ib_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t51 = ib_efOut;
  tlu2_2d_linear_linear_value(&jb_efOut[0ULL], &t51.mField0[0ULL], &t51.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = jb_efOut[0];
  intrm_sf_mf_92 = t502_idx_0;
  t508[0ULL] = X[92ULL];
  tlu2_linear_linear_prelookup(&kb_efOut.mField0[0ULL], &kb_efOut.mField1[0ULL],
    &kb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t508[0ULL],
    &t316[0ULL], &t66[0ULL]);
  t52 = kb_efOut;
  tlu2_1d_linear_linear_value(&lb_efOut[0ULL], &t52.mField0[0ULL], &t52.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = lb_efOut[0];
  t520 = t502_idx_0;
  tlu2_1d_linear_linear_value(&mb_efOut[0ULL], &t52.mField0[0ULL], &t52.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = mb_efOut[0];
  t521 = t502_idx_0;
  if (X[93ULL] <= t520) {
    t522 = X[93ULL] / (t520 == 0.0 ? 1.0E-16 : t520) - 1.0;
  } else if (X[93ULL] >= t502_idx_0) {
    t522 = (X[93ULL] - 4000.0) / (4000.0 - t502_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t502_idx_0) + 2.0;
  } else {
    t515 = t502_idx_0 - t520;
    t522 = (X[93ULL] - t520) / (t515 == 0.0 ? 1.0E-16 : t515);
  }

  t508[0ULL] = t522;
  tlu2_linear_linear_prelookup(&nb_efOut.mField0[0ULL], &nb_efOut.mField1[0ULL],
    &nb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t58 = nb_efOut;
  tlu2_2d_linear_linear_value(&ob_efOut[0ULL], &t58.mField0[0ULL], &t58.mField2
    [0ULL], &t52.mField0[0ULL], &t52.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = ob_efOut[0];
  t522 = t502_idx_0;
  t508[0ULL] = X[15ULL];
  tlu2_linear_linear_prelookup(&pb_efOut.mField0[0ULL], &pb_efOut.mField1[0ULL],
    &pb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t508[0ULL],
    &t316[0ULL], &t66[0ULL]);
  t55 = pb_efOut;
  tlu2_1d_linear_linear_value(&qb_efOut[0ULL], &t55.mField0[0ULL], &t55.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = qb_efOut[0];
  Condenser_two_phase_fluid_Cdot_ext_lag_pos = t502_idx_0;
  tlu2_1d_linear_linear_value(&rb_efOut[0ULL], &t55.mField0[0ULL], &t55.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = rb_efOut[0];
  t524 = t502_idx_0;
  if (X[117ULL] <= Condenser_two_phase_fluid_Cdot_ext_lag_pos) {
    t525 = X[117ULL] / (Condenser_two_phase_fluid_Cdot_ext_lag_pos == 0.0 ?
                        1.0E-16 : Condenser_two_phase_fluid_Cdot_ext_lag_pos) -
      1.0;
  } else if (X[117ULL] >= t502_idx_0) {
    t525 = (X[117ULL] - 4000.0) / (4000.0 - t502_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t502_idx_0) + 2.0;
  } else {
    t515 = t502_idx_0 - Condenser_two_phase_fluid_Cdot_ext_lag_pos;
    t525 = (X[117ULL] - Condenser_two_phase_fluid_Cdot_ext_lag_pos) / (t515 ==
      0.0 ? 1.0E-16 : t515);
  }

  t508[0ULL] = t525;
  tlu2_linear_linear_prelookup(&sb_efOut.mField0[0ULL], &sb_efOut.mField1[0ULL],
    &sb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t51 = sb_efOut;
  tlu2_2d_linear_linear_value(&tb_efOut[0ULL], &t51.mField0[0ULL], &t51.mField2
    [0ULL], &t55.mField0[0ULL], &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = tb_efOut[0];
  t525 = t502_idx_0;
  if (X[118ULL] <= Condenser_two_phase_fluid_Cdot_ext_lag_pos) {
    t527 = X[118ULL] / (Condenser_two_phase_fluid_Cdot_ext_lag_pos == 0.0 ?
                        1.0E-16 : Condenser_two_phase_fluid_Cdot_ext_lag_pos) -
      1.0;
  } else if (X[118ULL] >= t524) {
    t527 = (X[118ULL] - 4000.0) / (4000.0 - t524 == 0.0 ? 1.0E-16 : 4000.0 -
      t524) + 2.0;
  } else {
    t515 = t524 - Condenser_two_phase_fluid_Cdot_ext_lag_pos;
    t527 = (X[118ULL] - Condenser_two_phase_fluid_Cdot_ext_lag_pos) / (t515 ==
      0.0 ? 1.0E-16 : t515);
  }

  t508[0ULL] = t527;
  tlu2_linear_linear_prelookup(&ub_efOut.mField0[0ULL], &ub_efOut.mField1[0ULL],
    &ub_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t58 = ub_efOut;
  tlu2_2d_linear_linear_value(&vb_efOut[0ULL], &t58.mField0[0ULL], &t58.mField2
    [0ULL], &t55.mField0[0ULL], &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = vb_efOut[0];
  Condenser_two_phase_fluid_Cdot_ext_lag_pos = t502_idx_0;
  t508[0ULL] = X[133ULL];
  tlu2_linear_linear_prelookup(&wb_efOut.mField0[0ULL], &wb_efOut.mField1[0ULL],
    &wb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t508[0ULL],
    &t316[0ULL], &t66[0ULL]);
  t0 = wb_efOut;
  tlu2_1d_linear_linear_value(&xb_efOut[0ULL], &t0.mField0[0ULL], &t0.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = xb_efOut[0];
  Preheating_Pipe_2P_v_A = t502_idx_0;
  tlu2_1d_linear_linear_value(&yb_efOut[0ULL], &t0.mField0[0ULL], &t0.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = yb_efOut[0];
  t530 = t502_idx_0;
  if (X[134ULL] <= Preheating_Pipe_2P_v_A) {
    t531 = X[134ULL] / (Preheating_Pipe_2P_v_A == 0.0 ? 1.0E-16 :
                        Preheating_Pipe_2P_v_A) - 1.0;
  } else if (X[134ULL] >= t502_idx_0) {
    t531 = (X[134ULL] - 4000.0) / (4000.0 - t502_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t502_idx_0) + 2.0;
  } else {
    t515 = t502_idx_0 - Preheating_Pipe_2P_v_A;
    t531 = (X[134ULL] - Preheating_Pipe_2P_v_A) / (t515 == 0.0 ? 1.0E-16 : t515);
  }

  t508[0ULL] = t531;
  tlu2_linear_linear_prelookup(&ac_efOut.mField0[0ULL], &ac_efOut.mField1[0ULL],
    &ac_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t51 = ac_efOut;
  tlu2_2d_linear_linear_value(&bc_efOut[0ULL], &t51.mField0[0ULL], &t51.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = bc_efOut[0];
  t531 = t502_idx_0;
  if (X[139ULL] <= t520) {
    t532 = X[139ULL] / (t520 == 0.0 ? 1.0E-16 : t520) - 1.0;
  } else if (X[139ULL] >= t521) {
    t532 = (X[139ULL] - 4000.0) / (4000.0 - t521 == 0.0 ? 1.0E-16 : 4000.0 -
      t521) + 2.0;
  } else {
    t515 = t521 - t520;
    t532 = (X[139ULL] - t520) / (t515 == 0.0 ? 1.0E-16 : t515);
  }

  t508[0ULL] = t532;
  tlu2_linear_linear_prelookup(&cc_efOut.mField0[0ULL], &cc_efOut.mField1[0ULL],
    &cc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t51 = cc_efOut;
  tlu2_2d_linear_linear_value(&dc_efOut[0ULL], &t51.mField0[0ULL], &t51.mField2
    [0ULL], &t52.mField0[0ULL], &t52.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = dc_efOut[0];
  t520 = t502_idx_0;
  if (X[140ULL] <= Preheating_Pipe_2P_v_A) {
    t521 = X[140ULL] / (Preheating_Pipe_2P_v_A == 0.0 ? 1.0E-16 :
                        Preheating_Pipe_2P_v_A) - 1.0;
  } else if (X[140ULL] >= t530) {
    t521 = (X[140ULL] - 4000.0) / (4000.0 - t530 == 0.0 ? 1.0E-16 : 4000.0 -
      t530) + 2.0;
  } else {
    t515 = t530 - Preheating_Pipe_2P_v_A;
    t521 = (X[140ULL] - Preheating_Pipe_2P_v_A) / (t515 == 0.0 ? 1.0E-16 : t515);
  }

  t508[0ULL] = t521;
  tlu2_linear_linear_prelookup(&ec_efOut.mField0[0ULL], &ec_efOut.mField1[0ULL],
    &ec_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t23 = ec_efOut;
  tlu2_2d_linear_linear_value(&fc_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = fc_efOut[0];
  t521 = t502_idx_0;
  if (X[197ULL] <= Preheating_Pipe_2P_v_A) {
    t532 = X[197ULL] / (Preheating_Pipe_2P_v_A == 0.0 ? 1.0E-16 :
                        Preheating_Pipe_2P_v_A) - 1.0;
  } else if (X[197ULL] >= t530) {
    t532 = (X[197ULL] - 4000.0) / (4000.0 - t530 == 0.0 ? 1.0E-16 : 4000.0 -
      t530) + 2.0;
  } else {
    t515 = t530 - Preheating_Pipe_2P_v_A;
    t532 = (X[197ULL] - Preheating_Pipe_2P_v_A) / (t515 == 0.0 ? 1.0E-16 : t515);
  }

  t508[0ULL] = t532;
  tlu2_linear_linear_prelookup(&gc_efOut.mField0[0ULL], &gc_efOut.mField1[0ULL],
    &gc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t57 = gc_efOut;
  tlu2_2d_linear_linear_value(&hc_efOut[0ULL], &t57.mField0[0ULL], &t57.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = hc_efOut[0];
  Preheating_Pipe_2P_v_A = t502_idx_0;
  if (X[198ULL] <= t511) {
    t530 = X[198ULL] / (t511 == 0.0 ? 1.0E-16 : t511) - 1.0;
  } else if (X[198ULL] >= Pressure_Relief_Valve_2P_convection_A_v_in) {
    t530 = (X[198ULL] - 4000.0) / (4000.0 -
      Pressure_Relief_Valve_2P_convection_A_v_in == 0.0 ? 1.0E-16 : 4000.0 -
      Pressure_Relief_Valve_2P_convection_A_v_in) + 2.0;
  } else {
    t515 = Pressure_Relief_Valve_2P_convection_A_v_in - t511;
    t530 = (X[198ULL] - t511) / (t515 == 0.0 ? 1.0E-16 : t515);
  }

  t508[0ULL] = t530;
  tlu2_linear_linear_prelookup(&ic_efOut.mField0[0ULL], &ic_efOut.mField1[0ULL],
    &ic_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t51 = ic_efOut;
  tlu2_2d_linear_linear_value(&jc_efOut[0ULL], &t51.mField0[0ULL], &t51.mField2
    [0ULL], &t22.mField0[0ULL], &t22.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = jc_efOut[0];
  t511 = t502_idx_0;
  if (X[154ULL] <= t509) {
    Pressure_Relief_Valve_2P_convection_A_v_in = X[154ULL] / (t509 == 0.0 ?
      1.0E-16 : t509) - 1.0;
  } else if (X[154ULL] >= t510) {
    Pressure_Relief_Valve_2P_convection_A_v_in = (X[154ULL] - 4000.0) / (4000.0
      - t510 == 0.0 ? 1.0E-16 : 4000.0 - t510) + 2.0;
  } else {
    t515 = t510 - t509;
    Pressure_Relief_Valve_2P_convection_A_v_in = (X[154ULL] - t509) / (t515 ==
      0.0 ? 1.0E-16 : t515);
  }

  t508[0ULL] = Pressure_Relief_Valve_2P_convection_A_v_in;
  tlu2_linear_linear_prelookup(&kc_efOut.mField0[0ULL], &kc_efOut.mField1[0ULL],
    &kc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t57 = kc_efOut;
  tlu2_2d_linear_linear_value(&lc_efOut[0ULL], &t57.mField0[0ULL], &t57.mField2
    [0ULL], &t63.mField0[0ULL], &t63.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = lc_efOut[0];
  Pressure_Relief_Valve_2P_convection_A_v_in = t502_idx_0;
  if (X[156ULL] <= t509) {
    t530 = X[156ULL] / (t509 == 0.0 ? 1.0E-16 : t509) - 1.0;
  } else if (X[156ULL] >= t510) {
    t530 = (X[156ULL] - 4000.0) / (4000.0 - t510 == 0.0 ? 1.0E-16 : 4000.0 -
      t510) + 2.0;
  } else {
    t515 = t510 - t509;
    t530 = (X[156ULL] - t509) / (t515 == 0.0 ? 1.0E-16 : t515);
  }

  t508[0ULL] = t530;
  tlu2_linear_linear_prelookup(&mc_efOut.mField0[0ULL], &mc_efOut.mField1[0ULL],
    &mc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t22 = mc_efOut;
  tlu2_2d_linear_linear_value(&nc_efOut[0ULL], &t22.mField0[0ULL], &t22.mField2
    [0ULL], &t63.mField0[0ULL], &t63.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = nc_efOut[0];
  t530 = t502_idx_0;
  if (X[200ULL] <= 1082.1904733151327) {
    t532 = X[200ULL] / 1082.1904733151327 - 1.0;
  } else if (X[200ULL] >= 2601.6367101330361) {
    t532 = (X[200ULL] - 4000.0) / 1398.3632898669639 + 2.0;
  } else {
    t532 = (X[200ULL] - 1082.1904733151327) / 1519.4462368179034;
  }

  t508[0ULL] = t532;
  tlu2_linear_linear_prelookup(&oc_efOut.mField0[0ULL], &oc_efOut.mField1[0ULL],
    &oc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t0 = oc_efOut;
  t508[0] = 40.0;
  tlu2_linear_linear_prelookup(&pc_efOut.mField0[0ULL], &pc_efOut.mField1[0ULL],
    &pc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t508[0ULL],
    &t316[0ULL], &t66[0ULL]);
  t51 = pc_efOut;
  tlu2_2d_linear_linear_value(&qc_efOut[0ULL], &t0.mField0[0ULL], &t0.mField2
    [0ULL], &t51.mField0[0ULL], &t51.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = qc_efOut[0];
  Pressure_Relief_Valve_2P1_convection_B_v_in = t502_idx_0;
  tlu2_2d_linear_linear_value(&rc_efOut[0ULL], &t57.mField0[0ULL], &t57.mField2
    [0ULL], &t63.mField0[0ULL], &t63.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = rc_efOut[0];
  t528 = pmf_sqrt(t502_idx_0 * 461.5);
  if (U_idx_5 <= 0.0) {
    t534 = 0.0;
  } else {
    t534 = U_idx_5 >= 1.0 ? 1.0 : U_idx_5;
  }

  t533 = t534 * 0.0002;
  t532 = X[15ULL] / (X[0ULL] == 0.0 ? 1.0E-16 : X[0ULL]);
  if (t532 <= 0.0) {
    t535 = 0.0;
  } else {
    t535 = t532 >= 1.0 ? 1.0 : t532;
  }

  t532 = (pmf_pow(t535, 1.5384615384615383) - pmf_pow(t535, 1.7692307692307689))
    * 8.6666666666666661;
  if (t532 <= 0.0) {
    intrm_sf_mf_496 = 0.0;
  } else {
    intrm_sf_mf_496 = t532 >= 1.0E+6 ? 1.0E+6 : t532;
  }

  t532 = t533 * X[0ULL] * 0.85 / (t528 == 0.0 ? 1.0E-16 : t528) * pmf_sqrt
    (intrm_sf_mf_496);
  if (t535 < 0.545727733814065) {
    t533 = X[0ULL] * 0.85 / (t528 == 0.0 ? 1.0E-16 : t528) * 0.667262351240862 *
      t533 * 100000.0;
  } else {
    t533 = t532 * 100000.0;
  }

  t532 = X[0ULL] - X[15ULL] > 0.01 ? t533 : 0.0;
  tlu2_2d_linear_linear_value(&sc_efOut[0ULL], &t58.mField0[0ULL], &t58.mField2
    [0ULL], &t55.mField0[0ULL], &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = sc_efOut[0];
  t515 = pmf_sqrt(t502_idx_0 * 461.5);
  if (U_idx_6 <= 0.0) {
    t535 = 0.0;
  } else {
    t535 = U_idx_6 >= 1.0 ? 1.0 : U_idx_6;
  }

  t534 = t535 * 0.0002;
  t533 = X[88ULL] / (X[15ULL] == 0.0 ? 1.0E-16 : X[15ULL]);
  if (t533 <= 0.0) {
    intrm_sf_mf_496 = 0.0;
  } else {
    intrm_sf_mf_496 = t533 >= 1.0 ? 1.0 : t533;
  }

  t533 = (pmf_pow(intrm_sf_mf_496, 1.5384615384615383) - pmf_pow(intrm_sf_mf_496,
           1.7692307692307689)) * 8.6666666666666661;
  if (t533 <= 0.0) {
    t537 = 0.0;
  } else {
    t537 = t533 >= 1.0E+6 ? 1.0E+6 : t533;
  }

  t533 = X[15ULL] * t534 * 0.85 / (t515 == 0.0 ? 1.0E-16 : t515) * pmf_sqrt(t537);
  if (intrm_sf_mf_496 < 0.545727733814065) {
    t534 = X[15ULL] * 0.85 / (t515 == 0.0 ? 1.0E-16 : t515) * 0.667262351240862 *
      t534 * 100000.0;
  } else {
    t534 = t533 * 100000.0;
  }

  t533 = X[15ULL] - X[88ULL] > 0.01 ? t534 : 0.0;
  if (X[160ULL] <= t509) {
    U_idx_5 = X[160ULL] / (t509 == 0.0 ? 1.0E-16 : t509) - 1.0;
  } else if (X[160ULL] >= t510) {
    U_idx_5 = (X[160ULL] - 4000.0) / (4000.0 - t510 == 0.0 ? 1.0E-16 : 4000.0 -
      t510) + 2.0;
  } else {
    t515 = t510 - t509;
    U_idx_5 = (X[160ULL] - t509) / (t515 == 0.0 ? 1.0E-16 : t515);
  }

  t508[0ULL] = U_idx_5;
  tlu2_linear_linear_prelookup(&tc_efOut.mField0[0ULL], &tc_efOut.mField1[0ULL],
    &tc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t51 = tc_efOut;
  tlu2_2d_linear_linear_value(&uc_efOut[0ULL], &t51.mField0[0ULL], &t51.mField2
    [0ULL], &t63.mField0[0ULL], &t63.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = uc_efOut[0];
  U_idx_5 = t502_idx_0;
  t508[0ULL] = X[39ULL];
  tlu2_linear_linear_prelookup(&vc_efOut.mField0[0ULL], &vc_efOut.mField1[0ULL],
    &vc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t508[0ULL],
    &t316[0ULL], &t66[0ULL]);
  t58 = vc_efOut;
  tlu2_1d_linear_linear_value(&wc_efOut[0ULL], &t58.mField0[0ULL], &t58.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = wc_efOut[0];
  t509 = t502_idx_0;
  tlu2_1d_linear_linear_value(&xc_efOut[0ULL], &t58.mField0[0ULL], &t58.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = xc_efOut[0];
  t510 = t502_idx_0;
  if (X[40ULL] <= t509) {
    t534 = X[40ULL] / (t509 == 0.0 ? 1.0E-16 : t509) - 1.0;
  } else if (X[40ULL] >= t502_idx_0) {
    t534 = (X[40ULL] - 4000.0) / (4000.0 - t502_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t502_idx_0) + 2.0;
  } else {
    t515 = t502_idx_0 - t509;
    t534 = (X[40ULL] - t509) / (t515 == 0.0 ? 1.0E-16 : t515);
  }

  if (X[41ULL] <= t509) {
    intrm_sf_mf_496 = X[41ULL] / (t509 == 0.0 ? 1.0E-16 : t509) - 1.0;
  } else if (X[41ULL] >= t502_idx_0) {
    intrm_sf_mf_496 = (X[41ULL] - 4000.0) / (4000.0 - t502_idx_0 == 0.0 ?
      1.0E-16 : 4000.0 - t502_idx_0) + 2.0;
  } else {
    t515 = t502_idx_0 - t509;
    intrm_sf_mf_496 = (X[41ULL] - t509) / (t515 == 0.0 ? 1.0E-16 : t515);
  }

  t508[0ULL] = ((t534 < 0.0 ? t534 : 0.0) + (intrm_sf_mf_496 < 0.0 ?
    intrm_sf_mf_496 : 0.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&yc_efOut.mField0[0ULL], &yc_efOut.mField1[0ULL],
    &yc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t52 = yc_efOut;
  t508[0ULL] = X[39ULL];
  tlu2_linear_nearest_prelookup(&ad_efOut.mField0[0ULL], &ad_efOut.mField1[0ULL],
    &ad_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t508[0ULL],
    &t316[0ULL], &t66[0ULL]);
  t51 = ad_efOut;
  tlu2_2d_linear_nearest_value(&bd_efOut[0ULL], &t52.mField0[0ULL],
    &t52.mField2[0ULL], &t51.mField0[0ULL], &t51.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = bd_efOut[0];
  t535 = t502_idx_0;
  tlu2_2d_linear_nearest_value(&cd_efOut[0ULL], &t52.mField0[0ULL],
    &t52.mField2[0ULL], &t51.mField0[0ULL], &t51.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = cd_efOut[0];
  t537 = t502_idx_0;
  tlu2_2d_linear_nearest_value(&dd_efOut[0ULL], &t52.mField0[0ULL],
    &t52.mField2[0ULL], &t51.mField0[0ULL], &t51.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField13, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = dd_efOut[0];
  t535 = t535 * t537 / (t502_idx_0 == 0.0 ? 1.0E-16 : t502_idx_0);
  t537 = X[43ULL] >= 0.0 ? X[43ULL] : 0.0;
  intrm_sf_mf_626 = X[44ULL] >= 0.0 ? X[44ULL] : 0.0;
  t528 = t537 + X[216ULL];
  t515 = (t537 + X[216ULL]) * (1.0 - pmf_exp(-X[42ULL] / (t528 == 0.0 ? 1.0E-16 :
    t528)));
  t527 = t535 * intrm_sf_mf_626 + X[216ULL];
  t524 = t515 / (t527 == 0.0 ? 1.0E-16 : t527);
  t508[0ULL] = t534;
  tlu2_linear_linear_prelookup(&ed_efOut.mField0[0ULL], &ed_efOut.mField1[0ULL],
    &ed_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t52 = ed_efOut;
  tlu2_2d_linear_linear_value(&fd_efOut[0ULL], &t52.mField0[0ULL], &t52.mField2
    [0ULL], &t58.mField0[0ULL], &t58.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = fd_efOut[0];
  t541 = X[39ULL] * t502_idx_0 * 100.0 + X[40ULL];
  tlu2_2d_linear_linear_value(&gd_efOut[0ULL], &t45.mField0[0ULL], &t45.mField2
    [0ULL], &t58.mField0[0ULL], &t58.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = gd_efOut[0];
  t509 = ((X[39ULL] * t502_idx_0 * 100.0 + t509) - t541) / (t535 == 0.0 ?
    1.0E-16 : t535);
  t535 = (1.0 - pmf_exp(-(t524 <= 15.0 ? t524 : 15.0))) * X[215ULL];
  intrm_sf_mf_497 = (t535 > t509 * 1000.0);
  tlu2_2d_linear_linear_value(&hd_efOut[0ULL], &t59.mField0[0ULL], &t59.mField2
    [0ULL], &t58.mField0[0ULL], &t58.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = hd_efOut[0];
  t535 = X[39ULL] * t502_idx_0 * 100.0 + t510;
  t508[0ULL] = ((t534 > 1.0 ? t534 : 1.0) + (intrm_sf_mf_496 > 1.0 ?
    intrm_sf_mf_496 : 1.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&id_efOut.mField0[0ULL], &id_efOut.mField1[0ULL],
    &id_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t59 = id_efOut;
  tlu2_2d_linear_nearest_value(&jd_efOut[0ULL], &t59.mField0[0ULL],
    &t59.mField2[0ULL], &t51.mField0[0ULL], &t51.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = jd_efOut[0];
  t509 = t502_idx_0;
  tlu2_2d_linear_nearest_value(&kd_efOut[0ULL], &t59.mField0[0ULL],
    &t59.mField2[0ULL], &t51.mField0[0ULL], &t51.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = kd_efOut[0];
  t510 = t502_idx_0;
  tlu2_2d_linear_nearest_value(&ld_efOut[0ULL], &t59.mField0[0ULL],
    &t59.mField2[0ULL], &t51.mField0[0ULL], &t51.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField13, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = ld_efOut[0];
  t509 = t509 * t510 / (t502_idx_0 == 0.0 ? 1.0E-16 : t502_idx_0);
  t515 = (t537 + X[216ULL]) * (1.0 - pmf_exp(-X[45ULL] / (t528 == 0.0 ? 1.0E-16 :
    t528)));
  t527 = X[216ULL] + t509 * intrm_sf_mf_626;
  t510 = t515 / (t527 == 0.0 ? 1.0E-16 : t527);
  t534 = t510 <= 15.0 ? t510 : 15.0;
  t510 = (t535 - t541) / (t509 == 0.0 ? 1.0E-16 : t509);
  t509 = (1.0 - pmf_exp(-t534)) * X[215ULL];
  intrm_sf_mf_516 = (t509 < t510 * 1000.0);
  t508[0ULL] = intrm_sf_mf_496;
  tlu2_linear_linear_prelookup(&md_efOut.mField0[0ULL], &md_efOut.mField1[0ULL],
    &md_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t51 = md_efOut;
  tlu2_2d_linear_linear_value(&nd_efOut[0ULL], &t51.mField0[0ULL], &t51.mField2
    [0ULL], &t58.mField0[0ULL], &t58.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = nd_efOut[0];
  t509 = t502_idx_0;
  t510 = ((((X[81ULL] * X[81ULL] - X[81ULL] * X[82ULL]) - X[81ULL] * X[83ULL]) +
           X[82ULL] * X[82ULL]) - X[82ULL] * X[83ULL]) + X[83ULL] * X[83ULL];
  if (t510 >= 0.0) {
    t534 = pmf_sqrt(t510);
  } else {
    t534 = -pmf_sqrt(-t510);
  }

  t508[0ULL] = X[61ULL];
  t316[0] = 28ULL;
  tlu2_linear_linear_prelookup(&od_efOut.mField0[0ULL], &od_efOut.mField1[0ULL],
    &od_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t508[0ULL],
    &t316[0ULL], &t66[0ULL]);
  t23 = od_efOut;
  t508[0ULL] = X[62ULL];
  t319[0] = 27ULL;
  tlu2_linear_linear_prelookup(&pd_efOut.mField0[0ULL], &pd_efOut.mField1[0ULL],
    &pd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t55 = pd_efOut;
  tlu2_2d_linear_linear_value(&qd_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t55.mField0[0ULL], &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t316[0ULL], &t319[0ULL], &t66[0ULL]);
  t502_idx_0 = qd_efOut[0];
  t510 = t502_idx_0;
  t508[0ULL] = X[63ULL];
  tlu2_linear_linear_prelookup(&rd_efOut.mField0[0ULL], &rd_efOut.mField1[0ULL],
    &rd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t508[0ULL],
    &t316[0ULL], &t66[0ULL]);
  t0 = rd_efOut;
  t508[0ULL] = X[64ULL];
  tlu2_linear_linear_prelookup(&sd_efOut.mField0[0ULL], &sd_efOut.mField1[0ULL],
    &sd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t51 = sd_efOut;
  tlu2_2d_linear_linear_value(&td_efOut[0ULL], &t0.mField0[0ULL], &t0.mField2
    [0ULL], &t51.mField0[0ULL], &t51.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t316[0ULL], &t319[0ULL], &t66[0ULL]);
  t502_idx_0 = td_efOut[0];
  t535 = t502_idx_0;
  t508[0ULL] = X[5ULL];
  tlu2_linear_linear_prelookup(&ud_efOut.mField0[0ULL], &ud_efOut.mField1[0ULL],
    &ud_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t508[0ULL],
    &t316[0ULL], &t66[0ULL]);
  t51 = ud_efOut;
  t508[0ULL] = X[4ULL];
  tlu2_linear_linear_prelookup(&vd_efOut.mField0[0ULL], &vd_efOut.mField1[0ULL],
    &vd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t23 = vd_efOut;
  tlu2_2d_linear_linear_value(&wd_efOut[0ULL], &t51.mField0[0ULL], &t51.mField2
    [0ULL], &t23.mField0[0ULL], &t23.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t316[0ULL], &t319[0ULL], &t66[0ULL]);
  t502_idx_0 = wd_efOut[0];
  intrm_sf_mf_496 = t502_idx_0;
  t508[0ULL] = X[87ULL];
  tlu2_linear_linear_prelookup(&xd_efOut.mField0[0ULL], &xd_efOut.mField1[0ULL],
    &xd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t508[0ULL],
    &t316[0ULL], &t66[0ULL]);
  t55 = xd_efOut;
  t508[0] = 1.01325;
  tlu2_linear_linear_prelookup(&yd_efOut.mField0[0ULL], &yd_efOut.mField1[0ULL],
    &yd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t59 = yd_efOut;
  tlu2_2d_linear_linear_value(&ae_efOut[0ULL], &t55.mField0[0ULL], &t55.mField2
    [0ULL], &t59.mField0[0ULL], &t59.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t316[0ULL], &t319[0ULL], &t66[0ULL]);
  t502_idx_0 = ae_efOut[0];
  t537 = t502_idx_0;
  t508[0ULL] = X[90ULL];
  tlu2_linear_linear_prelookup(&be_efOut.mField0[0ULL], &be_efOut.mField1[0ULL],
    &be_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t508[0ULL],
    &t316[0ULL], &t66[0ULL]);
  t52 = be_efOut;
  t508[0ULL] = X[91ULL];
  tlu2_linear_linear_prelookup(&ce_efOut.mField0[0ULL], &ce_efOut.mField1[0ULL],
    &ce_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t51 = ce_efOut;
  tlu2_2d_linear_linear_value(&de_efOut[0ULL], &t52.mField0[0ULL], &t52.mField2
    [0ULL], &t51.mField0[0ULL], &t51.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t316[0ULL], &t319[0ULL], &t66[0ULL]);
  t502_idx_0 = de_efOut[0];
  intrm_sf_mf_626 = t502_idx_0;
  t508[0ULL] = X[142ULL];
  tlu2_linear_linear_prelookup(&ee_efOut.mField0[0ULL], &ee_efOut.mField1[0ULL],
    &ee_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t508[0ULL],
    &t316[0ULL], &t66[0ULL]);
  t59 = ee_efOut;
  t508[0] = 150.0;
  tlu2_linear_linear_prelookup(&fe_efOut.mField0[0ULL], &fe_efOut.mField1[0ULL],
    &fe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t52 = fe_efOut;
  tlu2_2d_linear_linear_value(&ge_efOut[0ULL], &t59.mField0[0ULL], &t59.mField2
    [0ULL], &t52.mField0[0ULL], &t52.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t316[0ULL], &t319[0ULL], &t66[0ULL]);
  t502_idx_0 = ge_efOut[0];
  t524 = t502_idx_0;
  t508[0ULL] = X[143ULL];
  tlu2_linear_linear_prelookup(&he_efOut.mField0[0ULL], &he_efOut.mField1[0ULL],
    &he_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t508[0ULL],
    &t316[0ULL], &t66[0ULL]);
  t52 = he_efOut;
  t508[0ULL] = X[144ULL];
  tlu2_linear_linear_prelookup(&ie_efOut.mField0[0ULL], &ie_efOut.mField1[0ULL],
    &ie_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t0 = ie_efOut;
  tlu2_2d_linear_linear_value(&je_efOut[0ULL], &t52.mField0[0ULL], &t52.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t316[0ULL], &t319[0ULL], &t66[0ULL]);
  t502_idx_0 = je_efOut[0];
  intrm_sf_mf_633 = t502_idx_0;
  t508[0ULL] = X[165ULL];
  tlu2_linear_linear_prelookup(&ke_efOut.mField0[0ULL], &ke_efOut.mField1[0ULL],
    &ke_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t508[0ULL],
    &t316[0ULL], &t66[0ULL]);
  t58 = ke_efOut;
  t508[0] = 2.0;
  tlu2_linear_linear_prelookup(&le_efOut.mField0[0ULL], &le_efOut.mField1[0ULL],
    &le_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t51 = le_efOut;
  tlu2_2d_linear_linear_value(&me_efOut[0ULL], &t58.mField0[0ULL], &t58.mField2
    [0ULL], &t51.mField0[0ULL], &t51.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t316[0ULL], &t319[0ULL], &t66[0ULL]);
  t502_idx_0 = me_efOut[0];
  t541 = t502_idx_0;
  t508[0ULL] = X[170ULL];
  tlu2_linear_linear_prelookup(&ne_efOut.mField0[0ULL], &ne_efOut.mField1[0ULL],
    &ne_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t508[0ULL],
    &t316[0ULL], &t66[0ULL]);
  t51 = ne_efOut;
  t508[0ULL] = X[171ULL];
  tlu2_linear_linear_prelookup(&oe_efOut.mField0[0ULL], &oe_efOut.mField1[0ULL],
    &oe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t58 = oe_efOut;
  tlu2_2d_linear_linear_value(&pe_efOut[0ULL], &t51.mField0[0ULL], &t51.mField2
    [0ULL], &t58.mField0[0ULL], &t58.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t316[0ULL], &t319[0ULL], &t66[0ULL]);
  t502_idx_0 = pe_efOut[0];
  t515 = t502_idx_0;
  t508[0ULL] = X[172ULL];
  tlu2_linear_linear_prelookup(&qe_efOut.mField0[0ULL], &qe_efOut.mField1[0ULL],
    &qe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t508[0ULL],
    &t316[0ULL], &t66[0ULL]);
  t51 = qe_efOut;
  t508[0ULL] = X[173ULL];
  tlu2_linear_linear_prelookup(&re_efOut.mField0[0ULL], &re_efOut.mField1[0ULL],
    &re_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t52 = re_efOut;
  tlu2_2d_linear_linear_value(&se_efOut[0ULL], &t51.mField0[0ULL], &t51.mField2
    [0ULL], &t52.mField0[0ULL], &t52.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t316[0ULL], &t319[0ULL], &t66[0ULL]);
  t502_idx_0 = se_efOut[0];
  t527 = t502_idx_0;
  t508[0ULL] = X[20ULL];
  tlu2_linear_linear_prelookup(&te_efOut.mField0[0ULL], &te_efOut.mField1[0ULL],
    &te_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t508[0ULL],
    &t316[0ULL], &t66[0ULL]);
  t0 = te_efOut;
  t508[0ULL] = X[19ULL];
  tlu2_linear_linear_prelookup(&ue_efOut.mField0[0ULL], &ue_efOut.mField1[0ULL],
    &ue_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t51 = ue_efOut;
  tlu2_2d_linear_linear_value(&ve_efOut[0ULL], &t0.mField0[0ULL], &t0.mField2
    [0ULL], &t51.mField0[0ULL], &t51.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t316[0ULL], &t319[0ULL], &t66[0ULL]);
  t502_idx_0 = ve_efOut[0];
  t528 = t502_idx_0;
  t508[0ULL] = X[22ULL];
  tlu2_linear_linear_prelookup(&we_efOut.mField0[0ULL], &we_efOut.mField1[0ULL],
    &we_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t508[0ULL],
    &t316[0ULL], &t66[0ULL]);
  t51 = we_efOut;
  t508[0ULL] = X[21ULL];
  tlu2_linear_linear_prelookup(&xe_efOut.mField0[0ULL], &xe_efOut.mField1[0ULL],
    &xe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t58 = xe_efOut;
  tlu2_2d_linear_linear_value(&ye_efOut[0ULL], &t51.mField0[0ULL], &t51.mField2
    [0ULL], &t58.mField0[0ULL], &t58.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t316[0ULL], &t319[0ULL], &t66[0ULL]);
  t502_idx_0 = ye_efOut[0];
  t546 = t502_idx_0;
  t508[0ULL] = X[24ULL];
  tlu2_linear_linear_prelookup(&af_efOut.mField0[0ULL], &af_efOut.mField1[0ULL],
    &af_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t508[0ULL],
    &t316[0ULL], &t66[0ULL]);
  t0 = af_efOut;
  t508[0ULL] = X[23ULL];
  tlu2_linear_linear_prelookup(&bf_efOut.mField0[0ULL], &bf_efOut.mField1[0ULL],
    &bf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t51 = bf_efOut;
  tlu2_2d_linear_linear_value(&cf_efOut[0ULL], &t0.mField0[0ULL], &t0.mField2
    [0ULL], &t51.mField0[0ULL], &t51.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t316[0ULL], &t319[0ULL], &t66[0ULL]);
  t502_idx_0 = cf_efOut[0];
  t508[0ULL] = X[38ULL];
  tlu2_linear_linear_prelookup(&df_efOut.mField0[0ULL], &df_efOut.mField1[0ULL],
    &df_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t508[0ULL],
    &t316[0ULL], &t66[0ULL]);
  t51 = df_efOut;
  t508[0ULL] = X[37ULL];
  tlu2_linear_linear_prelookup(&ef_efOut.mField0[0ULL], &ef_efOut.mField1[0ULL],
    &ef_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t0 = ef_efOut;
  tlu2_2d_linear_linear_value(&ff_efOut[0ULL], &t51.mField0[0ULL], &t51.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t316[0ULL], &t319[0ULL], &t66[0ULL]);
  t508[0] = ff_efOut[0];
  t548 = t508[0ULL];
  t441[0ULL] = t510;
  t441[1ULL] = X[62ULL] - 0.018111;
  t441[2ULL] = 220.64 - X[62ULL];
  t441[3ULL] = X[61ULL] - 273.16;
  t441[4ULL] = 608.8024 - X[61ULL];
  t441[5ULL] = t535;
  t441[6ULL] = X[64ULL] - 0.018111;
  t441[7ULL] = 220.64 - X[64ULL];
  t441[8ULL] = X[63ULL] - 273.16;
  t441[9ULL] = 608.8024 - X[63ULL];
  t441[10ULL] = X[0ULL] - 0.01;
  t441[11ULL] = 950.0 - X[0ULL];
  t441[12ULL] = X[72ULL];
  t441[13ULL] = 4000.0 - X[72ULL];
  t441[14ULL] = X[73ULL] - 0.01;
  t441[15ULL] = 950.0 - X[73ULL];
  t441[16ULL] = X[74ULL];
  t441[17ULL] = 4000.0 - X[74ULL];
  t441[18ULL] = t537;
  t441[19ULL] = X[87ULL] - 273.16;
  t441[20ULL] = 608.8024 - X[87ULL];
  t441[21ULL] = intrm_sf_mf_626;
  t441[22ULL] = X[91ULL] - 0.018111;
  t441[23ULL] = 220.64 - X[91ULL];
  t441[24ULL] = X[90ULL] - 273.16;
  t441[25ULL] = 608.8024 - X[90ULL];
  t441[26ULL] = X[88ULL] - 0.01;
  t441[27ULL] = 950.0 - X[88ULL];
  t441[28ULL] = X[89ULL];
  t441[29ULL] = 4000.0 - X[89ULL];
  t441[30ULL] = X[92ULL] - 0.01;
  t441[31ULL] = 950.0 - X[92ULL];
  t441[32ULL] = X[93ULL];
  t441[33ULL] = 4000.0 - X[93ULL];
  t441[34ULL] = intrm_sf_mf_633;
  t441[35ULL] = X[144ULL] - 0.018111;
  t441[36ULL] = 220.64 - X[144ULL];
  t441[37ULL] = X[143ULL] - 273.16;
  t441[38ULL] = 608.8024 - X[143ULL];
  t441[39ULL] = t510;
  t441[40ULL] = X[160ULL];
  t441[41ULL] = 4000.0 - X[160ULL];
  t441[42ULL] = intrm_sf_mf_496;
  t441[43ULL] = X[4ULL] - 0.018111;
  t441[44ULL] = 220.64 - X[4ULL];
  t441[45ULL] = X[5ULL] - 273.16;
  t441[46ULL] = 608.8024 - X[5ULL];
  t441[47ULL] = t548;
  t441[48ULL] = X[37ULL] - 0.018111;
  t441[49ULL] = 220.64 - X[37ULL];
  t441[50ULL] = X[38ULL] - 273.16;
  t441[51ULL] = 608.8024 - X[38ULL];
  t441[52ULL] = X[6ULL] - 0.01;
  t441[53ULL] = 950.0 - X[6ULL];
  t441[54ULL] = X[8ULL];
  t441[55ULL] = 4000.0 - X[8ULL];
  t441[56ULL] = t518;
  t441[57ULL] = X[39ULL] - 0.01;
  t441[58ULL] = 950.0 - X[39ULL];
  t441[59ULL] = X[41ULL];
  t441[60ULL] = 4000.0 - X[41ULL];
  t441[61ULL] = t509;
  t441[62ULL] = X[15ULL] - 0.01;
  t441[63ULL] = 950.0 - X[15ULL];
  t441[64ULL] = X[16ULL];
  t441[65ULL] = 4000.0 - X[16ULL];
  t441[66ULL] = -X[130ULL] > X[130ULL] ? X[130ULL] : -X[130ULL];
  t441[67ULL] = t520;
  t441[68ULL] = t521;
  t441[69ULL] = X[133ULL] - 0.01;
  t441[70ULL] = 950.0 - X[133ULL];
  t441[71ULL] = X[134ULL];
  t441[72ULL] = 4000.0 - X[134ULL];
  t441[73ULL] = t524;
  t441[74ULL] = X[142ULL] - 273.16;
  t441[75ULL] = 608.8024 - X[142ULL];
  t441[76ULL] = intrm_sf_mf_633;
  t441[77ULL] = t541;
  t441[78ULL] = X[165ULL] - 273.16;
  t441[79ULL] = 608.8024 - X[165ULL];
  t441[80ULL] = intrm_sf_mf_626;
  t441[81ULL] = t515;
  t441[82ULL] = X[171ULL] - 0.018111;
  t441[83ULL] = 220.64 - X[171ULL];
  t441[84ULL] = X[170ULL] - 273.16;
  t441[85ULL] = 608.8024 - X[170ULL];
  t441[86ULL] = t527;
  t441[87ULL] = X[173ULL] - 0.018111;
  t441[88ULL] = 220.64 - X[173ULL];
  t441[89ULL] = X[172ULL] - 273.16;
  t441[90ULL] = 608.8024 - X[172ULL];
  t441[91ULL] = t528;
  t441[92ULL] = X[19ULL] - 0.018111;
  t441[93ULL] = 220.64 - X[19ULL];
  t441[94ULL] = X[20ULL] - 273.16;
  t441[95ULL] = 608.8024 - X[20ULL];
  t441[96ULL] = t535;
  t441[97ULL] = t515;
  t441[98ULL] = t546;
  t441[99ULL] = X[21ULL] - 0.018111;
  t441[100ULL] = 220.64 - X[21ULL];
  t441[101ULL] = X[22ULL] - 273.16;
  t441[102ULL] = 608.8024 - X[22ULL];
  t441[103ULL] = t527;
  t441[104ULL] = intrm_sf_mf_633;
  t441[105ULL] = t502_idx_0;
  t441[106ULL] = X[23ULL] - 0.018111;
  t441[107ULL] = 220.64 - X[23ULL];
  t441[108ULL] = X[24ULL] - 273.16;
  t441[109ULL] = 608.8024 - X[24ULL];
  t441[110ULL] = 0.0063674739754068094 / (X[27ULL] == 0.0 ? 1.0E-16 : X[27ULL])
    + Preheating_Pipe_2P_v_A;
  t441[111ULL] = 0.0063674739754068094 / (X[27ULL] == 0.0 ? 1.0E-16 : X[27ULL])
    + t511;
  t441[112ULL] = X[25ULL] - 0.01;
  t441[113ULL] = 950.0 - X[25ULL];
  t441[114ULL] = X[26ULL];
  t441[115ULL] = 4000.0 - X[26ULL];
  t441[116ULL] = X[154ULL];
  t441[117ULL] = 4000.0 - X[154ULL];
  t441[118ULL] = X[156ULL];
  t441[119ULL] = 4000.0 - X[156ULL];
  t441[120ULL] = X[200ULL];
  t441[121ULL] = 4000.0 - X[200ULL];
  t441[122ULL] = t532;
  t441[123ULL] = X[122ULL];
  t441[124ULL] = t533;
  t441[125ULL] = -((-X[95ULL] - X[122ULL]) + X[124ULL]);
  t441[126ULL] = 220.64 - X[0ULL];
  t441[127ULL] = X[32ULL];
  t441[128ULL] = 4000.0 - X[32ULL];
  t441[129ULL] = X[33ULL];
  t441[130ULL] = 4000.0 - X[33ULL];
  t441[131ULL] = Check_Valve_2P2_convection_A_v_in;
  t441[132ULL] = Check_Valve_2P2_convection_B_v_in;
  t441[133ULL] = intrm_sf_mf_92;
  t441[134ULL] = t522;
  t441[135ULL] = t525;
  t441[136ULL] = Condenser_two_phase_fluid_Cdot_ext_lag_pos;
  t441[137ULL] = t522;
  t441[138ULL] = t531;
  t441[139ULL] = t531;
  t441[140ULL] = Check_Valve_2P2_convection_B_v_in;
  t441[141ULL] = Pressure_Relief_Valve_2P_convection_A_v_in;
  t441[142ULL] = intrm_sf_mf_92;
  t441[143ULL] = t530;
  t441[144ULL] = Pressure_Relief_Valve_2P1_convection_B_v_in;
  t441[145ULL] = Pressure_Relief_Valve_2P1_convection_B_v_in;
  t441[146ULL] = Pressure_Relief_Valve_2P_convection_A_v_in;
  t441[147ULL] = t525;
  t441[148ULL] = Condenser_two_phase_fluid_Cdot_ext_lag_pos;
  t441[149ULL] = intrm_sf_mf_92;
  t441[150ULL] = t530;
  t441[151ULL] = U_idx_5;
  t441[152ULL] = Check_Valve_2P2_convection_A_v_in;
  t441[153ULL] = Pressure_Relief_Valve_2P_convection_A_v_in;
  t441[154ULL] = Check_Valve_2P2_convection_B_v_in;
  t441[155ULL] = U_idx_5;
  t441[156ULL] = (real_T)((U_idx_1 < 0.5) && ((size_t)Q_idx_0 == 1ULL));
  t441[157ULL] = (real_T)((U_idx_1 >= 0.5) && ((size_t)Q_idx_0 == 2ULL));
  t441[158ULL] = (real_T)((t514 == 0.0) && ((size_t)Q_idx_0 == 3ULL));
  t441[159ULL] = (real_T)((t514 < 0.0) && ((size_t)Q_idx_0 == 3ULL));
  t441[160ULL] = (real_T)((t514 > 0.0) && ((size_t)Q_idx_0 == 3ULL));
  t441[161ULL] = (real_T)((t514 >= 0.0) && ((size_t)Q_idx_0 == 4ULL));
  t441[162ULL] = (real_T)((t514 <= 0.0) && ((size_t)Q_idx_0 == 5ULL));
  t441[163ULL] = (real_T)((U_idx_1 < 0.5) && ((size_t)Q_idx_1 == 1ULL));
  t441[164ULL] = (real_T)((U_idx_1 >= 0.5) && ((size_t)Q_idx_1 == 2ULL));
  t441[165ULL] = (real_T)((t516 == 0.0) && ((size_t)Q_idx_1 == 3ULL));
  t441[166ULL] = (real_T)((t516 < 0.0) && ((size_t)Q_idx_1 == 3ULL));
  t441[167ULL] = (real_T)((t516 > 0.0) && ((size_t)Q_idx_1 == 3ULL));
  t441[168ULL] = (real_T)((t516 >= 0.0) && ((size_t)Q_idx_1 == 4ULL));
  t441[169ULL] = (real_T)((t516 <= 0.0) && ((size_t)Q_idx_1 == 5ULL));
  t441[170ULL] = (real_T)((U_idx_1 < 0.5) && ((size_t)Q_idx_2 == 1ULL));
  t441[171ULL] = (real_T)((U_idx_1 >= 0.5) && ((size_t)Q_idx_2 == 2ULL));
  t441[172ULL] = (real_T)((t517 == 0.0) && ((size_t)Q_idx_2 == 3ULL));
  t441[173ULL] = (real_T)((t517 < 0.0) && ((size_t)Q_idx_2 == 3ULL));
  t441[174ULL] = (real_T)((t517 > 0.0) && ((size_t)Q_idx_2 == 3ULL));
  t441[175ULL] = (real_T)((t517 >= 0.0) && ((size_t)Q_idx_2 == 4ULL));
  t441[176ULL] = (real_T)((t517 <= 0.0) && ((size_t)Q_idx_2 == 5ULL));
  t441[177ULL] = (real_T)intrm_sf_mf_25;
  t441[178ULL] = (real_T)intrm_sf_mf_52;
  t441[179ULL] = (t534 * 2.0 + X[82ULL] * 1.7320508075688772) - X[83ULL] *
    1.7320508075688772;
  t441[180ULL] = (t534 * 2.0 + X[81ULL] * 1.7320508075688772) - X[82ULL] *
    1.7320508075688772;
  t441[181ULL] = (t534 * 2.0 + X[83ULL] * 1.7320508075688772) - X[81ULL] *
    1.7320508075688772;
  t441[182ULL] = (real_T)intrm_sf_mf_497;
  t441[183ULL] = (real_T)intrm_sf_mf_516;
  for (b = 0; b < 184; b++) {
    out.mX[b] = t441[b];
  }

  (void)LC;
  (void)t655;
  return 0;
}
