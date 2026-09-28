/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv7/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv7_d632b26e_1_ds_sys_struct.h"
#include "PW_SMRv7_d632b26e_1_ds_zc.h"
#include "PW_SMRv7_d632b26e_1_ds.h"
#include "PW_SMRv7_d632b26e_1_ds_externals.h"
#include "PW_SMRv7_d632b26e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv7_d632b26e_1_ds_zc(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t606, NeDsMethodOutput *t607)
{
  ETTS0 ad_efOut;
  ETTS0 ae_efOut;
  ETTS0 bc_efOut;
  ETTS0 ce_efOut;
  ETTS0 d_efOut;
  ETTS0 db_efOut;
  ETTS0 dc_efOut;
  ETTS0 de_efOut;
  ETTS0 ed_efOut;
  ETTS0 efOut;
  ETTS0 f_efOut;
  ETTS0 fb_efOut;
  ETTS0 fc_efOut;
  ETTS0 fe_efOut;
  ETTS0 gc_efOut;
  ETTS0 gd_efOut;
  ETTS0 ge_efOut;
  ETTS0 hd_efOut;
  ETTS0 i_efOut;
  ETTS0 ib_efOut;
  ETTS0 ic_efOut;
  ETTS0 ie_efOut;
  ETTS0 jd_efOut;
  ETTS0 je_efOut;
  ETTS0 k_efOut;
  ETTS0 kb_efOut;
  ETTS0 kd_efOut;
  ETTS0 lc_efOut;
  ETTS0 le_efOut;
  ETTS0 md_efOut;
  ETTS0 me_efOut;
  ETTS0 n_efOut;
  ETTS0 nb_efOut;
  ETTS0 nc_efOut;
  ETTS0 nd_efOut;
  ETTS0 o_efOut;
  ETTS0 oe_efOut;
  ETTS0 pb_efOut;
  ETTS0 pd_efOut;
  ETTS0 pe_efOut;
  ETTS0 qc_efOut;
  ETTS0 qd_efOut;
  ETTS0 rc_efOut;
  ETTS0 re_efOut;
  ETTS0 s_efOut;
  ETTS0 sb_efOut;
  ETTS0 sd_efOut;
  ETTS0 se_efOut;
  ETTS0 t21;
  ETTS0 t34;
  ETTS0 t4;
  ETTS0 t42;
  ETTS0 t48;
  ETTS0 t50;
  ETTS0 t53;
  ETTS0 t56;
  ETTS0 t59;
  ETTS0 t9;
  ETTS0 td_efOut;
  ETTS0 u_efOut;
  ETTS0 ub_efOut;
  ETTS0 ue_efOut;
  ETTS0 vc_efOut;
  ETTS0 vd_efOut;
  ETTS0 ve_efOut;
  ETTS0 w_efOut;
  ETTS0 wb_efOut;
  ETTS0 wd_efOut;
  ETTS0 y_efOut;
  ETTS0 yb_efOut;
  ETTS0 yd_efOut;
  PmRealVector out;
  real_T X[183];
  real_T t416[145];
  real_T ab_efOut[1];
  real_T ac_efOut[1];
  real_T b_efOut[1];
  real_T bb_efOut[1];
  real_T bd_efOut[1];
  real_T be_efOut[1];
  real_T c_efOut[1];
  real_T cb_efOut[1];
  real_T cc_efOut[1];
  real_T cd_efOut[1];
  real_T dd_efOut[1];
  real_T e_efOut[1];
  real_T eb_efOut[1];
  real_T ec_efOut[1];
  real_T ee_efOut[1];
  real_T fd_efOut[1];
  real_T g_efOut[1];
  real_T gb_efOut[1];
  real_T h_efOut[1];
  real_T hb_efOut[1];
  real_T hc_efOut[1];
  real_T he_efOut[1];
  real_T id_efOut[1];
  real_T j_efOut[1];
  real_T jb_efOut[1];
  real_T jc_efOut[1];
  real_T kc_efOut[1];
  real_T ke_efOut[1];
  real_T l_efOut[1];
  real_T lb_efOut[1];
  real_T ld_efOut[1];
  real_T m_efOut[1];
  real_T mb_efOut[1];
  real_T mc_efOut[1];
  real_T ne_efOut[1];
  real_T ob_efOut[1];
  real_T oc_efOut[1];
  real_T od_efOut[1];
  real_T p_efOut[1];
  real_T pc_efOut[1];
  real_T q_efOut[1];
  real_T qb_efOut[1];
  real_T qe_efOut[1];
  real_T r_efOut[1];
  real_T rb_efOut[1];
  real_T rd_efOut[1];
  real_T sc_efOut[1];
  real_T t392[1];
  real_T t_efOut[1];
  real_T tb_efOut[1];
  real_T tc_efOut[1];
  real_T te_efOut[1];
  real_T uc_efOut[1];
  real_T ud_efOut[1];
  real_T v_efOut[1];
  real_T vb_efOut[1];
  real_T wc_efOut[1];
  real_T we_efOut[1];
  real_T x_efOut[1];
  real_T xb_efOut[1];
  real_T xc_efOut[1];
  real_T xd_efOut[1];
  real_T yc_efOut[1];
  real_T Check_Valve_2P2_convection_A_v_in;
  real_T Fixed_Displacement_Pump_2P_v_out_A;
  real_T Preheating_Pipe_2P_v_B;
  real_T Pressure_Relief_Valve_2P1_convection_A_v_in;
  real_T Pressure_Relief_Valve_2P1_convection_B_v_in;
  real_T Steam_Drum_v_AV_in;
  real_T U_idx_3;
  real_T intrm_sf_mf_429;
  real_T intrm_sf_mf_431;
  real_T intrm_sf_mf_542;
  real_T intrm_sf_mf_545;
  real_T intrm_sf_mf_546;
  real_T intrm_sf_mf_92;
  real_T t475_idx_0;
  real_T t481;
  real_T t482;
  real_T t485;
  real_T t486;
  real_T t487;
  real_T t488;
  real_T t489;
  real_T t490;
  real_T t492;
  real_T t493;
  real_T t498;
  real_T t502;
  real_T t503;
  real_T t595;
  real_T t596;
  real_T t605;
  size_t t291[1];
  size_t t294[1];
  size_t t63[1];
  int32_T b;
  boolean_T intrm_sf_mf_25;
  boolean_T intrm_sf_mf_432;
  boolean_T intrm_sf_mf_435;
  boolean_T intrm_sf_mf_52;
  U_idx_3 = t606->mU.mX[3];
  for (b = 0; b < 183; b++) {
    X[b] = t606->mX.mX[b];
  }

  out = t607->mZC;
  t392[0ULL] = X[0ULL];
  t291[0] = 100ULL;
  t63[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t392[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t59 = efOut;
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t59.mField0[0ULL], &t59.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = b_efOut[0];
  intrm_sf_mf_429 = t475_idx_0;
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t59.mField0[0ULL], &t59.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = c_efOut[0];
  intrm_sf_mf_431 = t475_idx_0;
  if (X[42ULL] <= intrm_sf_mf_429) {
    Check_Valve_2P2_convection_A_v_in = X[42ULL] / (intrm_sf_mf_429 == 0.0 ?
      1.0E-16 : intrm_sf_mf_429) - 1.0;
  } else if (X[42ULL] >= t475_idx_0) {
    Check_Valve_2P2_convection_A_v_in = (X[42ULL] - 4000.0) / (4000.0 -
      t475_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t475_idx_0) + 2.0;
  } else {
    intrm_sf_mf_92 = t475_idx_0 - intrm_sf_mf_429;
    Check_Valve_2P2_convection_A_v_in = (X[42ULL] - intrm_sf_mf_429) /
      (intrm_sf_mf_92 == 0.0 ? 1.0E-16 : intrm_sf_mf_92);
  }

  t392[0ULL] = Check_Valve_2P2_convection_A_v_in;
  t294[0] = 50ULL;
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t48 = d_efOut;
  tlu2_2d_linear_linear_value(&e_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t59.mField0[0ULL], &t59.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = e_efOut[0];
  Check_Valve_2P2_convection_A_v_in = t475_idx_0;
  t392[0ULL] = X[43ULL];
  tlu2_linear_linear_prelookup(&f_efOut.mField0[0ULL], &f_efOut.mField1[0ULL],
    &f_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t392[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t56 = f_efOut;
  tlu2_1d_linear_linear_value(&g_efOut[0ULL], &t56.mField0[0ULL], &t56.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = g_efOut[0];
  Preheating_Pipe_2P_v_B = t475_idx_0;
  tlu2_1d_linear_linear_value(&h_efOut[0ULL], &t56.mField0[0ULL], &t56.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = h_efOut[0];
  Pressure_Relief_Valve_2P1_convection_A_v_in = t475_idx_0;
  if (X[44ULL] <= Preheating_Pipe_2P_v_B) {
    t481 = X[44ULL] / (Preheating_Pipe_2P_v_B == 0.0 ? 1.0E-16 :
                       Preheating_Pipe_2P_v_B) - 1.0;
  } else if (X[44ULL] >= t475_idx_0) {
    t481 = (X[44ULL] - 4000.0) / (4000.0 - t475_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t475_idx_0) + 2.0;
  } else {
    t488 = t475_idx_0 - Preheating_Pipe_2P_v_B;
    t481 = (X[44ULL] - Preheating_Pipe_2P_v_B) / (t488 == 0.0 ? 1.0E-16 : t488);
  }

  t392[0ULL] = t481;
  tlu2_linear_linear_prelookup(&i_efOut.mField0[0ULL], &i_efOut.mField1[0ULL],
    &i_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t48 = i_efOut;
  tlu2_2d_linear_linear_value(&j_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t56.mField0[0ULL], &t56.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = j_efOut[0];
  t481 = t475_idx_0;
  t392[0ULL] = X[6ULL];
  tlu2_linear_linear_prelookup(&k_efOut.mField0[0ULL], &k_efOut.mField1[0ULL],
    &k_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t392[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t34 = k_efOut;
  tlu2_1d_linear_linear_value(&l_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = l_efOut[0];
  t482 = t475_idx_0;
  tlu2_1d_linear_linear_value(&m_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = m_efOut[0];
  intrm_sf_mf_92 = t475_idx_0;
  if (X[7ULL] <= t482) {
    Fixed_Displacement_Pump_2P_v_out_A = X[7ULL] / (t482 == 0.0 ? 1.0E-16 : t482)
      - 1.0;
  } else if (X[7ULL] >= t475_idx_0) {
    Fixed_Displacement_Pump_2P_v_out_A = (X[7ULL] - 4000.0) / (4000.0 -
      t475_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t475_idx_0) + 2.0;
  } else {
    t493 = t475_idx_0 - t482;
    Fixed_Displacement_Pump_2P_v_out_A = (X[7ULL] - t482) / (t493 == 0.0 ?
      1.0E-16 : t493);
  }

  if (X[8ULL] <= t482) {
    t486 = X[8ULL] / (t482 == 0.0 ? 1.0E-16 : t482) - 1.0;
  } else if (X[8ULL] >= t475_idx_0) {
    t486 = (X[8ULL] - 4000.0) / (4000.0 - t475_idx_0 == 0.0 ? 1.0E-16 : 4000.0 -
      t475_idx_0) + 2.0;
  } else {
    t498 = t475_idx_0 - t482;
    t486 = (X[8ULL] - t482) / (t498 == 0.0 ? 1.0E-16 : t498);
  }

  t392[0ULL] = ((Fixed_Displacement_Pump_2P_v_out_A < 0.0 ?
                 Fixed_Displacement_Pump_2P_v_out_A : 0.0) + (t486 < 0.0 ? t486 :
    0.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&n_efOut.mField0[0ULL], &n_efOut.mField1[0ULL],
    &n_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t48 = n_efOut;
  t392[0ULL] = X[6ULL];
  tlu2_linear_nearest_prelookup(&o_efOut.mField0[0ULL], &o_efOut.mField1[0ULL],
    &o_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t392[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t50 = o_efOut;
  tlu2_2d_linear_nearest_value(&p_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t50.mField0[0ULL], &t50.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField10, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = p_efOut[0];
  t485 = t475_idx_0;
  tlu2_2d_linear_nearest_value(&q_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t50.mField0[0ULL], &t50.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField8, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = q_efOut[0];
  t487 = t475_idx_0;
  tlu2_2d_linear_nearest_value(&r_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t50.mField0[0ULL], &t50.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField11, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = r_efOut[0];
  t485 = t485 * t487 / (t475_idx_0 == 0.0 ? 1.0E-16 : t475_idx_0);
  t487 = X[9ULL] >= 0.0 ? X[9ULL] : 0.0;
  t488 = X[10ULL] >= 0.0 ? X[10ULL] : 0.0;
  t489 = t485 * t488;
  t502 = t487 + X[59ULL];
  t490 = (t489 + X[59ULL]) / (t502 == 0.0 ? 1.0E-16 : t502);
  if (t490 <= 1.0) {
    intrm_sf_mf_542 = 1.0 - t490 * 0.999999;
  } else {
    intrm_sf_mf_542 = 1.0E-6;
  }

  if (t490 >= 1.0) {
    t492 = t490 * 1.000001 - 1.0;
  } else {
    t492 = 1.0E-6;
  }

  if (t489 + X[59ULL] >= t487 + X[59ULL]) {
    t503 = t487 + X[59ULL];
    t605 = t489 + X[59ULL];
    t490 = (1.000001 / (t503 == 0.0 ? 1.0E-16 : t503) - 0.999999 / (t605 == 0.0 ?
             1.0E-16 : t605)) * X[11ULL];
  } else {
    t595 = t489 + X[59ULL];
    t596 = t487 + X[59ULL];
    t490 = (1.000001 / (t595 == 0.0 ? 1.0E-16 : t595) - 0.999999 / (t596 == 0.0 ?
             1.0E-16 : t596)) * X[11ULL];
  }

  t489 = t490 <= 15.0 ? t490 : 15.0;
  t392[0ULL] = Fixed_Displacement_Pump_2P_v_out_A;
  tlu2_linear_linear_prelookup(&s_efOut.mField0[0ULL], &s_efOut.mField1[0ULL],
    &s_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t48 = s_efOut;
  tlu2_2d_linear_linear_value(&t_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = t_efOut[0];
  t493 = X[6ULL] * t475_idx_0 * 100.0 + X[7ULL];
  t392[0] = 0.0;
  tlu2_linear_linear_prelookup(&u_efOut.mField0[0ULL], &u_efOut.mField1[0ULL],
    &u_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t4 = u_efOut;
  tlu2_2d_linear_linear_value(&v_efOut[0ULL], &t4.mField0[0ULL], &t4.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = v_efOut[0];
  t605 = (1.0 - pmf_exp(-t489)) * X[58ULL];
  t595 = pmf_exp(-t489) * t492 + intrm_sf_mf_542;
  intrm_sf_mf_25 = (t605 / (t595 == 0.0 ? 1.0E-16 : t595) > ((X[6ULL] *
    t475_idx_0 * 100.0 + t482) - t493) / (t485 == 0.0 ? 1.0E-16 : t485) * 1000.0);
  t392[0] = 1.0;
  tlu2_linear_linear_prelookup(&w_efOut.mField0[0ULL], &w_efOut.mField1[0ULL],
    &w_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t42 = w_efOut;
  tlu2_2d_linear_linear_value(&x_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = x_efOut[0];
  t485 = X[6ULL] * t475_idx_0 * 100.0 + intrm_sf_mf_92;
  t392[0ULL] = ((Fixed_Displacement_Pump_2P_v_out_A > 1.0 ?
                 Fixed_Displacement_Pump_2P_v_out_A : 1.0) + (t486 > 1.0 ? t486 :
    1.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&y_efOut.mField0[0ULL], &y_efOut.mField1[0ULL],
    &y_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t48 = y_efOut;
  tlu2_2d_linear_nearest_value(&ab_efOut[0ULL], &t48.mField0[0ULL],
    &t48.mField2[0ULL], &t50.mField0[0ULL], &t50.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = ab_efOut[0];
  t482 = t475_idx_0;
  tlu2_2d_linear_nearest_value(&bb_efOut[0ULL], &t48.mField0[0ULL],
    &t48.mField2[0ULL], &t50.mField0[0ULL], &t50.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = bb_efOut[0];
  intrm_sf_mf_92 = t475_idx_0;
  tlu2_2d_linear_nearest_value(&cb_efOut[0ULL], &t48.mField0[0ULL],
    &t48.mField2[0ULL], &t50.mField0[0ULL], &t50.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = cb_efOut[0];
  t482 = t482 * intrm_sf_mf_92 / (t475_idx_0 == 0.0 ? 1.0E-16 : t475_idx_0);
  intrm_sf_mf_92 = t482 * t488;
  Fixed_Displacement_Pump_2P_v_out_A = (X[59ULL] + intrm_sf_mf_92) / (t502 ==
    0.0 ? 1.0E-16 : t502);
  if (Fixed_Displacement_Pump_2P_v_out_A <= 1.0) {
    t488 = 1.0 - Fixed_Displacement_Pump_2P_v_out_A * 0.999999;
  } else {
    t488 = 1.0E-6;
  }

  if (Fixed_Displacement_Pump_2P_v_out_A >= 1.0) {
    t489 = Fixed_Displacement_Pump_2P_v_out_A * 1.000001 - 1.0;
  } else {
    t489 = 1.0E-6;
  }

  if (X[59ULL] + intrm_sf_mf_92 >= t487 + X[59ULL]) {
    t605 = t487 + X[59ULL];
    t595 = X[59ULL] + intrm_sf_mf_92;
    Fixed_Displacement_Pump_2P_v_out_A = (1.000001 / (t605 == 0.0 ? 1.0E-16 :
      t605) - 0.999999 / (t595 == 0.0 ? 1.0E-16 : t595)) * X[12ULL];
  } else {
    t596 = X[59ULL] + intrm_sf_mf_92;
    t502 = t487 + X[59ULL];
    Fixed_Displacement_Pump_2P_v_out_A = (1.000001 / (t596 == 0.0 ? 1.0E-16 :
      t596) - 0.999999 / (t502 == 0.0 ? 1.0E-16 : t502)) * X[12ULL];
  }

  intrm_sf_mf_92 = Fixed_Displacement_Pump_2P_v_out_A <= 15.0 ?
    Fixed_Displacement_Pump_2P_v_out_A : 15.0;
  t605 = (1.0 - pmf_exp(-intrm_sf_mf_92)) * X[58ULL];
  t595 = pmf_exp(-intrm_sf_mf_92) * t489 + t488;
  intrm_sf_mf_52 = (t605 / (t595 == 0.0 ? 1.0E-16 : t595) < (t485 - t493) /
                    (t482 == 0.0 ? 1.0E-16 : t482) * 1000.0);
  t392[0ULL] = t486;
  tlu2_linear_linear_prelookup(&db_efOut.mField0[0ULL], &db_efOut.mField1[0ULL],
    &db_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t48 = db_efOut;
  tlu2_2d_linear_linear_value(&eb_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = eb_efOut[0];
  t482 = t475_idx_0;
  t392[0ULL] = X[49ULL];
  tlu2_linear_linear_prelookup(&fb_efOut.mField0[0ULL], &fb_efOut.mField1[0ULL],
    &fb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t392[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t34 = fb_efOut;
  tlu2_1d_linear_linear_value(&gb_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = gb_efOut[0];
  intrm_sf_mf_92 = t475_idx_0;
  tlu2_1d_linear_linear_value(&hb_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = hb_efOut[0];
  if (X[50ULL] <= intrm_sf_mf_92) {
    t485 = X[50ULL] / (intrm_sf_mf_92 == 0.0 ? 1.0E-16 : intrm_sf_mf_92) - 1.0;
  } else if (X[50ULL] >= t475_idx_0) {
    t485 = (X[50ULL] - 4000.0) / (4000.0 - t475_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t475_idx_0) + 2.0;
  } else {
    t502 = t475_idx_0 - intrm_sf_mf_92;
    t485 = (X[50ULL] - intrm_sf_mf_92) / (t502 == 0.0 ? 1.0E-16 : t502);
  }

  t392[0ULL] = t485;
  tlu2_linear_linear_prelookup(&ib_efOut.mField0[0ULL], &ib_efOut.mField1[0ULL],
    &ib_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t50 = ib_efOut;
  tlu2_2d_linear_linear_value(&jb_efOut[0ULL], &t50.mField0[0ULL], &t50.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = jb_efOut[0];
  intrm_sf_mf_92 = t475_idx_0;
  t392[0ULL] = X[53ULL];
  tlu2_linear_linear_prelookup(&kb_efOut.mField0[0ULL], &kb_efOut.mField1[0ULL],
    &kb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t392[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t34 = kb_efOut;
  tlu2_1d_linear_linear_value(&lb_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = lb_efOut[0];
  Fixed_Displacement_Pump_2P_v_out_A = t475_idx_0;
  tlu2_1d_linear_linear_value(&mb_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = mb_efOut[0];
  t485 = t475_idx_0;
  if (X[54ULL] <= Fixed_Displacement_Pump_2P_v_out_A) {
    t486 = X[54ULL] / (Fixed_Displacement_Pump_2P_v_out_A == 0.0 ? 1.0E-16 :
                       Fixed_Displacement_Pump_2P_v_out_A) - 1.0;
  } else if (X[54ULL] >= t475_idx_0) {
    t486 = (X[54ULL] - 4000.0) / (4000.0 - t475_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t475_idx_0) + 2.0;
  } else {
    t502 = t475_idx_0 - Fixed_Displacement_Pump_2P_v_out_A;
    t486 = (X[54ULL] - Fixed_Displacement_Pump_2P_v_out_A) / (t502 == 0.0 ?
      1.0E-16 : t502);
  }

  t392[0ULL] = t486;
  tlu2_linear_linear_prelookup(&nb_efOut.mField0[0ULL], &nb_efOut.mField1[0ULL],
    &nb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t53 = nb_efOut;
  tlu2_2d_linear_linear_value(&ob_efOut[0ULL], &t53.mField0[0ULL], &t53.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = ob_efOut[0];
  t486 = t475_idx_0;
  t392[0ULL] = X[79ULL];
  tlu2_linear_linear_prelookup(&pb_efOut.mField0[0ULL], &pb_efOut.mField1[0ULL],
    &pb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t392[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t50 = pb_efOut;
  tlu2_1d_linear_linear_value(&qb_efOut[0ULL], &t50.mField0[0ULL], &t50.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = qb_efOut[0];
  t487 = t475_idx_0;
  tlu2_1d_linear_linear_value(&rb_efOut[0ULL], &t50.mField0[0ULL], &t50.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = rb_efOut[0];
  t488 = t475_idx_0;
  if (X[80ULL] <= t487) {
    t489 = X[80ULL] / (t487 == 0.0 ? 1.0E-16 : t487) - 1.0;
  } else if (X[80ULL] >= t475_idx_0) {
    t489 = (X[80ULL] - 4000.0) / (4000.0 - t475_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t475_idx_0) + 2.0;
  } else {
    t502 = t475_idx_0 - t487;
    t489 = (X[80ULL] - t487) / (t502 == 0.0 ? 1.0E-16 : t502);
  }

  t392[0ULL] = t489;
  tlu2_linear_linear_prelookup(&sb_efOut.mField0[0ULL], &sb_efOut.mField1[0ULL],
    &sb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t48 = sb_efOut;
  tlu2_2d_linear_linear_value(&tb_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t50.mField0[0ULL], &t50.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = tb_efOut[0];
  t489 = t475_idx_0;
  if (X[85ULL] <= Fixed_Displacement_Pump_2P_v_out_A) {
    t490 = X[85ULL] / (Fixed_Displacement_Pump_2P_v_out_A == 0.0 ? 1.0E-16 :
                       Fixed_Displacement_Pump_2P_v_out_A) - 1.0;
  } else if (X[85ULL] >= t485) {
    t490 = (X[85ULL] - 4000.0) / (4000.0 - t485 == 0.0 ? 1.0E-16 : 4000.0 - t485)
      + 2.0;
  } else {
    t502 = t485 - Fixed_Displacement_Pump_2P_v_out_A;
    t490 = (X[85ULL] - Fixed_Displacement_Pump_2P_v_out_A) / (t502 == 0.0 ?
      1.0E-16 : t502);
  }

  t392[0ULL] = t490;
  tlu2_linear_linear_prelookup(&ub_efOut.mField0[0ULL], &ub_efOut.mField1[0ULL],
    &ub_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t48 = ub_efOut;
  tlu2_2d_linear_linear_value(&vb_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = vb_efOut[0];
  Fixed_Displacement_Pump_2P_v_out_A = t475_idx_0;
  if (X[86ULL] <= t487) {
    t485 = X[86ULL] / (t487 == 0.0 ? 1.0E-16 : t487) - 1.0;
  } else if (X[86ULL] >= t488) {
    t485 = (X[86ULL] - 4000.0) / (4000.0 - t488 == 0.0 ? 1.0E-16 : 4000.0 - t488)
      + 2.0;
  } else {
    t502 = t488 - t487;
    t485 = (X[86ULL] - t487) / (t502 == 0.0 ? 1.0E-16 : t502);
  }

  t392[0ULL] = t485;
  tlu2_linear_linear_prelookup(&wb_efOut.mField0[0ULL], &wb_efOut.mField1[0ULL],
    &wb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t48 = wb_efOut;
  tlu2_2d_linear_linear_value(&xb_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t50.mField0[0ULL], &t50.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = xb_efOut[0];
  t485 = t475_idx_0;
  if (X[145ULL] <= t487) {
    t490 = X[145ULL] / (t487 == 0.0 ? 1.0E-16 : t487) - 1.0;
  } else if (X[145ULL] >= t488) {
    t490 = (X[145ULL] - 4000.0) / (4000.0 - t488 == 0.0 ? 1.0E-16 : 4000.0 -
      t488) + 2.0;
  } else {
    t502 = t488 - t487;
    t490 = (X[145ULL] - t487) / (t502 == 0.0 ? 1.0E-16 : t502);
  }

  t392[0ULL] = t490;
  tlu2_linear_linear_prelookup(&yb_efOut.mField0[0ULL], &yb_efOut.mField1[0ULL],
    &yb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t48 = yb_efOut;
  tlu2_2d_linear_linear_value(&ac_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t50.mField0[0ULL], &t50.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = ac_efOut[0];
  t487 = t475_idx_0;
  if (X[146ULL] <= Preheating_Pipe_2P_v_B) {
    t488 = X[146ULL] / (Preheating_Pipe_2P_v_B == 0.0 ? 1.0E-16 :
                        Preheating_Pipe_2P_v_B) - 1.0;
  } else if (X[146ULL] >= Pressure_Relief_Valve_2P1_convection_A_v_in) {
    t488 = (X[146ULL] - 4000.0) / (4000.0 -
      Pressure_Relief_Valve_2P1_convection_A_v_in == 0.0 ? 1.0E-16 : 4000.0 -
      Pressure_Relief_Valve_2P1_convection_A_v_in) + 2.0;
  } else {
    t502 = Pressure_Relief_Valve_2P1_convection_A_v_in - Preheating_Pipe_2P_v_B;
    t488 = (X[146ULL] - Preheating_Pipe_2P_v_B) / (t502 == 0.0 ? 1.0E-16 : t502);
  }

  t392[0ULL] = t488;
  tlu2_linear_linear_prelookup(&bc_efOut.mField0[0ULL], &bc_efOut.mField1[0ULL],
    &bc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t9 = bc_efOut;
  tlu2_2d_linear_linear_value(&cc_efOut[0ULL], &t9.mField0[0ULL], &t9.mField2
    [0ULL], &t56.mField0[0ULL], &t56.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = cc_efOut[0];
  Preheating_Pipe_2P_v_B = t475_idx_0;
  if (X[99ULL] <= intrm_sf_mf_429) {
    Pressure_Relief_Valve_2P1_convection_A_v_in = X[99ULL] / (intrm_sf_mf_429 ==
      0.0 ? 1.0E-16 : intrm_sf_mf_429) - 1.0;
  } else if (X[99ULL] >= intrm_sf_mf_431) {
    Pressure_Relief_Valve_2P1_convection_A_v_in = (X[99ULL] - 4000.0) / (4000.0
      - intrm_sf_mf_431 == 0.0 ? 1.0E-16 : 4000.0 - intrm_sf_mf_431) + 2.0;
  } else {
    t502 = intrm_sf_mf_431 - intrm_sf_mf_429;
    Pressure_Relief_Valve_2P1_convection_A_v_in = (X[99ULL] - intrm_sf_mf_429) /
      (t502 == 0.0 ? 1.0E-16 : t502);
  }

  t392[0ULL] = Pressure_Relief_Valve_2P1_convection_A_v_in;
  tlu2_linear_linear_prelookup(&dc_efOut.mField0[0ULL], &dc_efOut.mField1[0ULL],
    &dc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t48 = dc_efOut;
  tlu2_2d_linear_linear_value(&ec_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t59.mField0[0ULL], &t59.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = ec_efOut[0];
  Pressure_Relief_Valve_2P1_convection_A_v_in = t475_idx_0;
  if (X[148ULL] <= 1082.1904733151327) {
    t488 = X[148ULL] / 1082.1904733151327 - 1.0;
  } else if (X[148ULL] >= 2601.6367101330361) {
    t488 = (X[148ULL] - 4000.0) / 1398.3632898669639 + 2.0;
  } else {
    t488 = (X[148ULL] - 1082.1904733151327) / 1519.4462368179034;
  }

  t392[0ULL] = t488;
  tlu2_linear_linear_prelookup(&fc_efOut.mField0[0ULL], &fc_efOut.mField1[0ULL],
    &fc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t48 = fc_efOut;
  t392[0] = 40.0;
  tlu2_linear_linear_prelookup(&gc_efOut.mField0[0ULL], &gc_efOut.mField1[0ULL],
    &gc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t392[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t21 = gc_efOut;
  tlu2_2d_linear_linear_value(&hc_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t21.mField0[0ULL], &t21.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = hc_efOut[0];
  Pressure_Relief_Valve_2P1_convection_B_v_in = t475_idx_0;
  if (X[97ULL] <= intrm_sf_mf_429) {
    t488 = X[97ULL] / (intrm_sf_mf_429 == 0.0 ? 1.0E-16 : intrm_sf_mf_429) - 1.0;
  } else if (X[97ULL] >= intrm_sf_mf_431) {
    t488 = (X[97ULL] - 4000.0) / (4000.0 - intrm_sf_mf_431 == 0.0 ? 1.0E-16 :
      4000.0 - intrm_sf_mf_431) + 2.0;
  } else {
    t502 = intrm_sf_mf_431 - intrm_sf_mf_429;
    t488 = (X[97ULL] - intrm_sf_mf_429) / (t502 == 0.0 ? 1.0E-16 : t502);
  }

  t392[0ULL] = t488;
  tlu2_linear_linear_prelookup(&ic_efOut.mField0[0ULL], &ic_efOut.mField1[0ULL],
    &ic_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t56 = ic_efOut;
  tlu2_2d_linear_linear_value(&jc_efOut[0ULL], &t56.mField0[0ULL], &t56.mField2
    [0ULL], &t59.mField0[0ULL], &t59.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = jc_efOut[0];
  t595 = pmf_sqrt(t475_idx_0 * 461.5);
  tlu2_2d_linear_linear_value(&kc_efOut[0ULL], &t56.mField0[0ULL], &t56.mField2
    [0ULL], &t59.mField0[0ULL], &t59.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = kc_efOut[0];
  t490 = t475_idx_0;
  if (U_idx_3 <= 0.0) {
    t492 = 0.0;
  } else {
    t492 = U_idx_3 >= 1.0 ? 1.0 : U_idx_3;
  }

  intrm_sf_mf_542 = t492 * 0.0002;
  t488 = X[49ULL] / (X[0ULL] == 0.0 ? 1.0E-16 : X[0ULL]);
  if (t488 <= 0.0) {
    t493 = 0.0;
  } else {
    t493 = t488 >= 1.0 ? 1.0 : t488;
  }

  t488 = (pmf_pow(t493, 1.5384615384615383) - pmf_pow(t493, 1.7692307692307689))
    * 8.6666666666666661;
  if (t488 <= 0.0) {
    intrm_sf_mf_545 = 0.0;
  } else {
    intrm_sf_mf_545 = t488 >= 1.0E+6 ? 1.0E+6 : t488;
  }

  t488 = intrm_sf_mf_542 * X[0ULL] * 0.85 / (t595 == 0.0 ? 1.0E-16 : t595) *
    pmf_sqrt(intrm_sf_mf_545);
  if (t493 < 0.545727733814065) {
    intrm_sf_mf_542 = X[0ULL] * 0.85 / (t595 == 0.0 ? 1.0E-16 : t595) *
      0.667262351240862 * intrm_sf_mf_542 * 100000.0;
  } else {
    intrm_sf_mf_542 = t488 * 100000.0;
  }

  t488 = X[0ULL] - X[49ULL] > 0.01 ? intrm_sf_mf_542 : 0.0;
  if (X[147ULL] <= intrm_sf_mf_429) {
    Steam_Drum_v_AV_in = X[147ULL] / (intrm_sf_mf_429 == 0.0 ? 1.0E-16 :
      intrm_sf_mf_429) - 1.0;
  } else if (X[147ULL] >= intrm_sf_mf_431) {
    Steam_Drum_v_AV_in = (X[147ULL] - 4000.0) / (4000.0 - intrm_sf_mf_431 == 0.0
      ? 1.0E-16 : 4000.0 - intrm_sf_mf_431) + 2.0;
  } else {
    t502 = intrm_sf_mf_431 - intrm_sf_mf_429;
    Steam_Drum_v_AV_in = (X[147ULL] - intrm_sf_mf_429) / (t502 == 0.0 ? 1.0E-16 :
      t502);
  }

  t392[0ULL] = Steam_Drum_v_AV_in;
  tlu2_linear_linear_prelookup(&lc_efOut.mField0[0ULL], &lc_efOut.mField1[0ULL],
    &lc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t34 = lc_efOut;
  tlu2_2d_linear_linear_value(&mc_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], &t59.mField0[0ULL], &t59.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = mc_efOut[0];
  Steam_Drum_v_AV_in = t475_idx_0;
  t392[0ULL] = X[33ULL];
  tlu2_linear_linear_prelookup(&nc_efOut.mField0[0ULL], &nc_efOut.mField1[0ULL],
    &nc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t392[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t50 = nc_efOut;
  tlu2_1d_linear_linear_value(&oc_efOut[0ULL], &t50.mField0[0ULL], &t50.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = oc_efOut[0];
  intrm_sf_mf_429 = t475_idx_0;
  tlu2_1d_linear_linear_value(&pc_efOut[0ULL], &t50.mField0[0ULL], &t50.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = pc_efOut[0];
  intrm_sf_mf_431 = t475_idx_0;
  if (X[34ULL] <= intrm_sf_mf_429) {
    intrm_sf_mf_542 = X[34ULL] / (intrm_sf_mf_429 == 0.0 ? 1.0E-16 :
      intrm_sf_mf_429) - 1.0;
  } else if (X[34ULL] >= t475_idx_0) {
    intrm_sf_mf_542 = (X[34ULL] - 4000.0) / (4000.0 - t475_idx_0 == 0.0 ?
      1.0E-16 : 4000.0 - t475_idx_0) + 2.0;
  } else {
    t502 = t475_idx_0 - intrm_sf_mf_429;
    intrm_sf_mf_542 = (X[34ULL] - intrm_sf_mf_429) / (t502 == 0.0 ? 1.0E-16 :
      t502);
  }

  if (X[35ULL] <= intrm_sf_mf_429) {
    t493 = X[35ULL] / (intrm_sf_mf_429 == 0.0 ? 1.0E-16 : intrm_sf_mf_429) - 1.0;
  } else if (X[35ULL] >= t475_idx_0) {
    t493 = (X[35ULL] - 4000.0) / (4000.0 - t475_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t475_idx_0) + 2.0;
  } else {
    t502 = t475_idx_0 - intrm_sf_mf_429;
    t493 = (X[35ULL] - intrm_sf_mf_429) / (t502 == 0.0 ? 1.0E-16 : t502);
  }

  t392[0ULL] = ((intrm_sf_mf_542 < 0.0 ? intrm_sf_mf_542 : 0.0) + (t493 < 0.0 ?
    t493 : 0.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&qc_efOut.mField0[0ULL], &qc_efOut.mField1[0ULL],
    &qc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t9 = qc_efOut;
  t392[0ULL] = X[33ULL];
  tlu2_linear_nearest_prelookup(&rc_efOut.mField0[0ULL], &rc_efOut.mField1[0ULL],
    &rc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t392[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t53 = rc_efOut;
  tlu2_2d_linear_nearest_value(&sc_efOut[0ULL], &t9.mField0[0ULL], &t9.mField2
    [0ULL], &t53.mField0[0ULL], &t53.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField10, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = sc_efOut[0];
  t492 = t475_idx_0;
  tlu2_2d_linear_nearest_value(&tc_efOut[0ULL], &t9.mField0[0ULL], &t9.mField2
    [0ULL], &t53.mField0[0ULL], &t53.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField8, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = tc_efOut[0];
  intrm_sf_mf_545 = t475_idx_0;
  tlu2_2d_linear_nearest_value(&uc_efOut[0ULL], &t9.mField0[0ULL], &t9.mField2
    [0ULL], &t53.mField0[0ULL], &t53.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField11, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = uc_efOut[0];
  t492 = t492 * intrm_sf_mf_545 / (t475_idx_0 == 0.0 ? 1.0E-16 : t475_idx_0);
  intrm_sf_mf_545 = X[37ULL] >= 0.0 ? X[37ULL] : 0.0;
  intrm_sf_mf_546 = X[38ULL] >= 0.0 ? X[38ULL] : 0.0;
  t595 = intrm_sf_mf_545 + X[164ULL];
  t596 = (intrm_sf_mf_545 + X[164ULL]) * (1.0 - pmf_exp(-X[36ULL] / (t595 == 0.0
    ? 1.0E-16 : t595)));
  t605 = t492 * intrm_sf_mf_546 + X[164ULL];
  t605 = t596 / (t605 == 0.0 ? 1.0E-16 : t605);
  t392[0ULL] = intrm_sf_mf_542;
  tlu2_linear_linear_prelookup(&vc_efOut.mField0[0ULL], &vc_efOut.mField1[0ULL],
    &vc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t9 = vc_efOut;
  tlu2_2d_linear_linear_value(&wc_efOut[0ULL], &t9.mField0[0ULL], &t9.mField2
    [0ULL], &t50.mField0[0ULL], &t50.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = wc_efOut[0];
  t498 = X[33ULL] * t475_idx_0 * 100.0 + X[34ULL];
  tlu2_2d_linear_linear_value(&xc_efOut[0ULL], &t4.mField0[0ULL], &t4.mField2
    [0ULL], &t50.mField0[0ULL], &t50.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = xc_efOut[0];
  intrm_sf_mf_429 = ((X[33ULL] * t475_idx_0 * 100.0 + intrm_sf_mf_429) - t498) /
    (t492 == 0.0 ? 1.0E-16 : t492);
  t492 = (1.0 - pmf_exp(-(t605 <= 15.0 ? t605 : 15.0))) * X[163ULL];
  intrm_sf_mf_432 = (t492 > intrm_sf_mf_429 * 1000.0);
  tlu2_2d_linear_linear_value(&yc_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], &t50.mField0[0ULL], &t50.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = yc_efOut[0];
  t492 = X[33ULL] * t475_idx_0 * 100.0 + intrm_sf_mf_431;
  t392[0ULL] = ((intrm_sf_mf_542 > 1.0 ? intrm_sf_mf_542 : 1.0) + (t493 > 1.0 ?
    t493 : 1.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&ad_efOut.mField0[0ULL], &ad_efOut.mField1[0ULL],
    &ad_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t34 = ad_efOut;
  tlu2_2d_linear_nearest_value(&bd_efOut[0ULL], &t34.mField0[0ULL],
    &t34.mField2[0ULL], &t53.mField0[0ULL], &t53.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = bd_efOut[0];
  intrm_sf_mf_429 = t475_idx_0;
  tlu2_2d_linear_nearest_value(&cd_efOut[0ULL], &t34.mField0[0ULL],
    &t34.mField2[0ULL], &t53.mField0[0ULL], &t53.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = cd_efOut[0];
  intrm_sf_mf_431 = t475_idx_0;
  tlu2_2d_linear_nearest_value(&dd_efOut[0ULL], &t34.mField0[0ULL],
    &t34.mField2[0ULL], &t53.mField0[0ULL], &t53.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = dd_efOut[0];
  intrm_sf_mf_429 = intrm_sf_mf_429 * intrm_sf_mf_431 / (t475_idx_0 == 0.0 ?
    1.0E-16 : t475_idx_0);
  t596 = (intrm_sf_mf_545 + X[164ULL]) * (1.0 - pmf_exp(-X[39ULL] / (t595 == 0.0
    ? 1.0E-16 : t595)));
  t605 = X[164ULL] + intrm_sf_mf_429 * intrm_sf_mf_546;
  intrm_sf_mf_431 = t596 / (t605 == 0.0 ? 1.0E-16 : t605);
  intrm_sf_mf_542 = intrm_sf_mf_431 <= 15.0 ? intrm_sf_mf_431 : 15.0;
  intrm_sf_mf_431 = (t492 - t498) / (intrm_sf_mf_429 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_429);
  intrm_sf_mf_429 = (1.0 - pmf_exp(-intrm_sf_mf_542)) * X[163ULL];
  intrm_sf_mf_435 = (intrm_sf_mf_429 < intrm_sf_mf_431 * 1000.0);
  t392[0ULL] = t493;
  tlu2_linear_linear_prelookup(&ed_efOut.mField0[0ULL], &ed_efOut.mField1[0ULL],
    &ed_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t53 = ed_efOut;
  tlu2_2d_linear_linear_value(&fd_efOut[0ULL], &t53.mField0[0ULL], &t53.mField2
    [0ULL], &t50.mField0[0ULL], &t50.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t294[0ULL], &t291[0ULL], &t63[0ULL]);
  t475_idx_0 = fd_efOut[0];
  intrm_sf_mf_429 = t475_idx_0;
  t392[0ULL] = X[5ULL];
  t291[0] = 28ULL;
  tlu2_linear_linear_prelookup(&gd_efOut.mField0[0ULL], &gd_efOut.mField1[0ULL],
    &gd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t392[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t50 = gd_efOut;
  t392[0ULL] = X[4ULL];
  t294[0] = 27ULL;
  tlu2_linear_linear_prelookup(&hd_efOut.mField0[0ULL], &hd_efOut.mField1[0ULL],
    &hd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t48 = hd_efOut;
  tlu2_2d_linear_linear_value(&id_efOut[0ULL], &t50.mField0[0ULL], &t50.mField2
    [0ULL], &t48.mField0[0ULL], &t48.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t291[0ULL], &t294[0ULL], &t63[0ULL]);
  t475_idx_0 = id_efOut[0];
  intrm_sf_mf_431 = t475_idx_0;
  t392[0ULL] = X[48ULL];
  tlu2_linear_linear_prelookup(&jd_efOut.mField0[0ULL], &jd_efOut.mField1[0ULL],
    &jd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t392[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t50 = jd_efOut;
  t392[0] = 1.01325;
  tlu2_linear_linear_prelookup(&kd_efOut.mField0[0ULL], &kd_efOut.mField1[0ULL],
    &kd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t48 = kd_efOut;
  tlu2_2d_linear_linear_value(&ld_efOut[0ULL], &t50.mField0[0ULL], &t50.mField2
    [0ULL], &t48.mField0[0ULL], &t48.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t291[0ULL], &t294[0ULL], &t63[0ULL]);
  t475_idx_0 = ld_efOut[0];
  intrm_sf_mf_542 = t475_idx_0;
  t392[0ULL] = X[51ULL];
  tlu2_linear_linear_prelookup(&md_efOut.mField0[0ULL], &md_efOut.mField1[0ULL],
    &md_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t392[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t50 = md_efOut;
  t392[0ULL] = X[52ULL];
  tlu2_linear_linear_prelookup(&nd_efOut.mField0[0ULL], &nd_efOut.mField1[0ULL],
    &nd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t48 = nd_efOut;
  tlu2_2d_linear_linear_value(&od_efOut[0ULL], &t50.mField0[0ULL], &t50.mField2
    [0ULL], &t48.mField0[0ULL], &t48.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t291[0ULL], &t294[0ULL], &t63[0ULL]);
  t475_idx_0 = od_efOut[0];
  t492 = t475_idx_0;
  t392[0ULL] = X[88ULL];
  tlu2_linear_linear_prelookup(&pd_efOut.mField0[0ULL], &pd_efOut.mField1[0ULL],
    &pd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t392[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t48 = pd_efOut;
  t392[0] = 150.0;
  tlu2_linear_linear_prelookup(&qd_efOut.mField0[0ULL], &qd_efOut.mField1[0ULL],
    &qd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t42 = qd_efOut;
  tlu2_2d_linear_linear_value(&rd_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t291[0ULL], &t294[0ULL], &t63[0ULL]);
  t475_idx_0 = rd_efOut[0];
  t493 = t475_idx_0;
  t392[0ULL] = X[89ULL];
  tlu2_linear_linear_prelookup(&sd_efOut.mField0[0ULL], &sd_efOut.mField1[0ULL],
    &sd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t392[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t50 = sd_efOut;
  t392[0ULL] = X[90ULL];
  tlu2_linear_linear_prelookup(&td_efOut.mField0[0ULL], &td_efOut.mField1[0ULL],
    &td_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t48 = td_efOut;
  tlu2_2d_linear_linear_value(&ud_efOut[0ULL], &t50.mField0[0ULL], &t50.mField2
    [0ULL], &t48.mField0[0ULL], &t48.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t291[0ULL], &t294[0ULL], &t63[0ULL]);
  t475_idx_0 = ud_efOut[0];
  intrm_sf_mf_545 = t475_idx_0;
  t392[0ULL] = X[102ULL];
  tlu2_linear_linear_prelookup(&vd_efOut.mField0[0ULL], &vd_efOut.mField1[0ULL],
    &vd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t392[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t4 = vd_efOut;
  t392[0ULL] = X[103ULL];
  tlu2_linear_linear_prelookup(&wd_efOut.mField0[0ULL], &wd_efOut.mField1[0ULL],
    &wd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t9 = wd_efOut;
  tlu2_2d_linear_linear_value(&xd_efOut[0ULL], &t4.mField0[0ULL], &t4.mField2
    [0ULL], &t9.mField0[0ULL], &t9.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t291[0ULL], &t294[0ULL], &t63[0ULL]);
  t475_idx_0 = xd_efOut[0];
  intrm_sf_mf_546 = t475_idx_0;
  t392[0ULL] = X[104ULL];
  tlu2_linear_linear_prelookup(&yd_efOut.mField0[0ULL], &yd_efOut.mField1[0ULL],
    &yd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t392[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t34 = yd_efOut;
  t392[0ULL] = X[105ULL];
  tlu2_linear_linear_prelookup(&ae_efOut.mField0[0ULL], &ae_efOut.mField1[0ULL],
    &ae_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t48 = ae_efOut;
  tlu2_2d_linear_linear_value(&be_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], &t48.mField0[0ULL], &t48.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t291[0ULL], &t294[0ULL], &t63[0ULL]);
  t475_idx_0 = be_efOut[0];
  t605 = t475_idx_0;
  t392[0ULL] = X[111ULL];
  tlu2_linear_linear_prelookup(&ce_efOut.mField0[0ULL], &ce_efOut.mField1[0ULL],
    &ce_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t392[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t48 = ce_efOut;
  t392[0] = 2.0;
  tlu2_linear_linear_prelookup(&de_efOut.mField0[0ULL], &de_efOut.mField1[0ULL],
    &de_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t53 = de_efOut;
  tlu2_2d_linear_linear_value(&ee_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t53.mField0[0ULL], &t53.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t291[0ULL], &t294[0ULL], &t63[0ULL]);
  t475_idx_0 = ee_efOut[0];
  t502 = t475_idx_0;
  t392[0ULL] = X[116ULL];
  tlu2_linear_linear_prelookup(&fe_efOut.mField0[0ULL], &fe_efOut.mField1[0ULL],
    &fe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t392[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t4 = fe_efOut;
  t392[0ULL] = X[117ULL];
  tlu2_linear_linear_prelookup(&ge_efOut.mField0[0ULL], &ge_efOut.mField1[0ULL],
    &ge_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t53 = ge_efOut;
  tlu2_2d_linear_linear_value(&he_efOut[0ULL], &t4.mField0[0ULL], &t4.mField2
    [0ULL], &t53.mField0[0ULL], &t53.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t291[0ULL], &t294[0ULL], &t63[0ULL]);
  t475_idx_0 = he_efOut[0];
  t498 = t475_idx_0;
  t392[0ULL] = X[118ULL];
  tlu2_linear_linear_prelookup(&ie_efOut.mField0[0ULL], &ie_efOut.mField1[0ULL],
    &ie_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t392[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t34 = ie_efOut;
  t392[0ULL] = X[119ULL];
  tlu2_linear_linear_prelookup(&je_efOut.mField0[0ULL], &je_efOut.mField1[0ULL],
    &je_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t42 = je_efOut;
  tlu2_2d_linear_linear_value(&ke_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t291[0ULL], &t294[0ULL], &t63[0ULL]);
  t475_idx_0 = ke_efOut[0];
  U_idx_3 = t475_idx_0;
  t392[0ULL] = X[16ULL];
  tlu2_linear_linear_prelookup(&le_efOut.mField0[0ULL], &le_efOut.mField1[0ULL],
    &le_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t392[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t53 = le_efOut;
  t392[0ULL] = X[15ULL];
  tlu2_linear_linear_prelookup(&me_efOut.mField0[0ULL], &me_efOut.mField1[0ULL],
    &me_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t42 = me_efOut;
  tlu2_2d_linear_linear_value(&ne_efOut[0ULL], &t53.mField0[0ULL], &t53.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t291[0ULL], &t294[0ULL], &t63[0ULL]);
  t475_idx_0 = ne_efOut[0];
  t596 = t475_idx_0;
  t392[0ULL] = X[18ULL];
  tlu2_linear_linear_prelookup(&oe_efOut.mField0[0ULL], &oe_efOut.mField1[0ULL],
    &oe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t392[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t50 = oe_efOut;
  t392[0ULL] = X[17ULL];
  tlu2_linear_linear_prelookup(&pe_efOut.mField0[0ULL], &pe_efOut.mField1[0ULL],
    &pe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t48 = pe_efOut;
  tlu2_2d_linear_linear_value(&qe_efOut[0ULL], &t50.mField0[0ULL], &t50.mField2
    [0ULL], &t48.mField0[0ULL], &t48.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t291[0ULL], &t294[0ULL], &t63[0ULL]);
  t475_idx_0 = qe_efOut[0];
  t595 = t475_idx_0;
  t392[0ULL] = X[20ULL];
  tlu2_linear_linear_prelookup(&re_efOut.mField0[0ULL], &re_efOut.mField1[0ULL],
    &re_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t392[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t48 = re_efOut;
  t392[0ULL] = X[19ULL];
  tlu2_linear_linear_prelookup(&se_efOut.mField0[0ULL], &se_efOut.mField1[0ULL],
    &se_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t34 = se_efOut;
  tlu2_2d_linear_linear_value(&te_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t291[0ULL], &t294[0ULL], &t63[0ULL]);
  t475_idx_0 = te_efOut[0];
  t392[0ULL] = X[32ULL];
  tlu2_linear_linear_prelookup(&ue_efOut.mField0[0ULL], &ue_efOut.mField1[0ULL],
    &ue_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t392[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t50 = ue_efOut;
  t392[0ULL] = X[31ULL];
  tlu2_linear_linear_prelookup(&ve_efOut.mField0[0ULL], &ve_efOut.mField1[0ULL],
    &ve_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t392[0ULL],
    &t294[0ULL], &t63[0ULL]);
  t48 = ve_efOut;
  tlu2_2d_linear_linear_value(&we_efOut[0ULL], &t50.mField0[0ULL], &t50.mField2
    [0ULL], &t48.mField0[0ULL], &t48.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t291[0ULL], &t294[0ULL], &t63[0ULL]);
  t392[0] = we_efOut[0];
  t503 = t392[0ULL];
  t416[0ULL] = X[0ULL] - 0.01;
  t416[1ULL] = 950.0 - X[0ULL];
  t416[2ULL] = X[42ULL];
  t416[3ULL] = 4000.0 - X[42ULL];
  t416[4ULL] = X[43ULL] - 0.01;
  t416[5ULL] = 950.0 - X[43ULL];
  t416[6ULL] = X[44ULL];
  t416[7ULL] = 4000.0 - X[44ULL];
  t416[8ULL] = intrm_sf_mf_542;
  t416[9ULL] = X[48ULL] - 273.16;
  t416[10ULL] = 608.8024 - X[48ULL];
  t416[11ULL] = t492;
  t416[12ULL] = X[52ULL] - 0.018111;
  t416[13ULL] = 220.64 - X[52ULL];
  t416[14ULL] = X[51ULL] - 273.16;
  t416[15ULL] = 608.8024 - X[51ULL];
  t416[16ULL] = X[49ULL] - 0.01;
  t416[17ULL] = 950.0 - X[49ULL];
  t416[18ULL] = X[50ULL];
  t416[19ULL] = 4000.0 - X[50ULL];
  t416[20ULL] = X[53ULL] - 0.01;
  t416[21ULL] = 950.0 - X[53ULL];
  t416[22ULL] = X[54ULL];
  t416[23ULL] = 4000.0 - X[54ULL];
  t416[24ULL] = intrm_sf_mf_545;
  t416[25ULL] = X[90ULL] - 0.018111;
  t416[26ULL] = 220.64 - X[90ULL];
  t416[27ULL] = X[89ULL] - 273.16;
  t416[28ULL] = 608.8024 - X[89ULL];
  t416[29ULL] = intrm_sf_mf_546;
  t416[30ULL] = X[103ULL] - 0.018111;
  t416[31ULL] = 220.64 - X[103ULL];
  t416[32ULL] = X[102ULL] - 273.16;
  t416[33ULL] = 608.8024 - X[102ULL];
  t416[34ULL] = X[147ULL];
  t416[35ULL] = 4000.0 - X[147ULL];
  t416[36ULL] = intrm_sf_mf_431;
  t416[37ULL] = X[4ULL] - 0.018111;
  t416[38ULL] = 220.64 - X[4ULL];
  t416[39ULL] = X[5ULL] - 273.16;
  t416[40ULL] = 608.8024 - X[5ULL];
  t416[41ULL] = t503;
  t416[42ULL] = X[31ULL] - 0.018111;
  t416[43ULL] = 220.64 - X[31ULL];
  t416[44ULL] = X[32ULL] - 273.16;
  t416[45ULL] = 608.8024 - X[32ULL];
  t416[46ULL] = X[6ULL] - 0.01;
  t416[47ULL] = 950.0 - X[6ULL];
  t416[48ULL] = X[8ULL];
  t416[49ULL] = 4000.0 - X[8ULL];
  t416[50ULL] = t482;
  t416[51ULL] = X[33ULL] - 0.01;
  t416[52ULL] = 950.0 - X[33ULL];
  t416[53ULL] = X[35ULL];
  t416[54ULL] = 4000.0 - X[35ULL];
  t416[55ULL] = intrm_sf_mf_429;
  t416[56ULL] = Fixed_Displacement_Pump_2P_v_out_A;
  t416[57ULL] = t485;
  t416[58ULL] = X[79ULL] - 0.01;
  t416[59ULL] = 950.0 - X[79ULL];
  t416[60ULL] = X[80ULL];
  t416[61ULL] = 4000.0 - X[80ULL];
  t416[62ULL] = t493;
  t416[63ULL] = X[88ULL] - 273.16;
  t416[64ULL] = 608.8024 - X[88ULL];
  t416[65ULL] = intrm_sf_mf_545;
  t416[66ULL] = intrm_sf_mf_546;
  t416[67ULL] = t605;
  t416[68ULL] = X[105ULL] - 0.018111;
  t416[69ULL] = 220.64 - X[105ULL];
  t416[70ULL] = X[104ULL] - 273.16;
  t416[71ULL] = 608.8024 - X[104ULL];
  t416[72ULL] = t502;
  t416[73ULL] = X[111ULL] - 273.16;
  t416[74ULL] = 608.8024 - X[111ULL];
  t416[75ULL] = t492;
  t416[76ULL] = t498;
  t416[77ULL] = X[117ULL] - 0.018111;
  t416[78ULL] = 220.64 - X[117ULL];
  t416[79ULL] = X[116ULL] - 273.16;
  t416[80ULL] = 608.8024 - X[116ULL];
  t416[81ULL] = U_idx_3;
  t416[82ULL] = X[119ULL] - 0.018111;
  t416[83ULL] = 220.64 - X[119ULL];
  t416[84ULL] = X[118ULL] - 273.16;
  t416[85ULL] = 608.8024 - X[118ULL];
  t416[86ULL] = t596;
  t416[87ULL] = X[15ULL] - 0.018111;
  t416[88ULL] = 220.64 - X[15ULL];
  t416[89ULL] = X[16ULL] - 273.16;
  t416[90ULL] = 608.8024 - X[16ULL];
  t416[91ULL] = t605;
  t416[92ULL] = t498;
  t416[93ULL] = t595;
  t416[94ULL] = X[17ULL] - 0.018111;
  t416[95ULL] = 220.64 - X[17ULL];
  t416[96ULL] = X[18ULL] - 273.16;
  t416[97ULL] = 608.8024 - X[18ULL];
  t416[98ULL] = U_idx_3;
  t416[99ULL] = intrm_sf_mf_545;
  t416[100ULL] = t475_idx_0;
  t416[101ULL] = X[19ULL] - 0.018111;
  t416[102ULL] = 220.64 - X[19ULL];
  t416[103ULL] = X[20ULL] - 273.16;
  t416[104ULL] = 608.8024 - X[20ULL];
  t416[105ULL] = 0.0063674739754068094 / (X[23ULL] == 0.0 ? 1.0E-16 : X[23ULL])
    + t487;
  t416[106ULL] = 0.0063674739754068094 / (X[23ULL] == 0.0 ? 1.0E-16 : X[23ULL])
    + Preheating_Pipe_2P_v_B;
  t416[107ULL] = X[21ULL] - 0.01;
  t416[108ULL] = 950.0 - X[21ULL];
  t416[109ULL] = X[22ULL];
  t416[110ULL] = 4000.0 - X[22ULL];
  t416[111ULL] = X[99ULL];
  t416[112ULL] = 4000.0 - X[99ULL];
  t416[113ULL] = X[148ULL];
  t416[114ULL] = 4000.0 - X[148ULL];
  t416[115ULL] = t488;
  t416[116ULL] = X[56ULL];
  t416[117ULL] = 220.64 - X[0ULL];
  t416[118ULL] = X[26ULL];
  t416[119ULL] = 4000.0 - X[26ULL];
  t416[120ULL] = X[27ULL];
  t416[121ULL] = 4000.0 - X[27ULL];
  t416[122ULL] = Check_Valve_2P2_convection_A_v_in;
  t416[123ULL] = t481;
  t416[124ULL] = intrm_sf_mf_92;
  t416[125ULL] = t486;
  t416[126ULL] = t486;
  t416[127ULL] = t489;
  t416[128ULL] = t489;
  t416[129ULL] = t481;
  t416[130ULL] = Pressure_Relief_Valve_2P1_convection_A_v_in;
  t416[131ULL] = Pressure_Relief_Valve_2P1_convection_B_v_in;
  t416[132ULL] = Pressure_Relief_Valve_2P1_convection_B_v_in;
  t416[133ULL] = t490;
  t416[134ULL] = intrm_sf_mf_92;
  t416[135ULL] = Pressure_Relief_Valve_2P1_convection_A_v_in;
  t416[136ULL] = Steam_Drum_v_AV_in;
  t416[137ULL] = Check_Valve_2P2_convection_A_v_in;
  t416[138ULL] = t490;
  t416[139ULL] = t481;
  t416[140ULL] = Steam_Drum_v_AV_in;
  t416[141ULL] = (real_T)intrm_sf_mf_25;
  t416[142ULL] = (real_T)intrm_sf_mf_52;
  t416[143ULL] = (real_T)intrm_sf_mf_432;
  t416[144ULL] = (real_T)intrm_sf_mf_435;
  for (b = 0; b < 145; b++) {
    out.mX[b] = t416[b];
  }

  (void)LC;
  (void)t607;
  return 0;
}
