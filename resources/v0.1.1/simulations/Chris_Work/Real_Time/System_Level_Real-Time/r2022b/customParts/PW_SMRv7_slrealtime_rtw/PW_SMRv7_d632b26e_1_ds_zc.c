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
  NeDynamicSystemInput *t595, NeDsMethodOutput *t596)
{
  ETTS0 bc_efOut;
  ETTS0 be_efOut;
  ETTS0 ce_efOut;
  ETTS0 d_efOut;
  ETTS0 db_efOut;
  ETTS0 dc_efOut;
  ETTS0 dd_efOut;
  ETTS0 ee_efOut;
  ETTS0 efOut;
  ETTS0 f_efOut;
  ETTS0 fb_efOut;
  ETTS0 fc_efOut;
  ETTS0 fd_efOut;
  ETTS0 fe_efOut;
  ETTS0 gc_efOut;
  ETTS0 gd_efOut;
  ETTS0 he_efOut;
  ETTS0 i_efOut;
  ETTS0 ib_efOut;
  ETTS0 ic_efOut;
  ETTS0 id_efOut;
  ETTS0 ie_efOut;
  ETTS0 jd_efOut;
  ETTS0 k_efOut;
  ETTS0 kb_efOut;
  ETTS0 kc_efOut;
  ETTS0 ke_efOut;
  ETTS0 ld_efOut;
  ETTS0 le_efOut;
  ETTS0 mc_efOut;
  ETTS0 md_efOut;
  ETTS0 n_efOut;
  ETTS0 nb_efOut;
  ETTS0 ne_efOut;
  ETTS0 o_efOut;
  ETTS0 od_efOut;
  ETTS0 oe_efOut;
  ETTS0 pb_efOut;
  ETTS0 pc_efOut;
  ETTS0 pd_efOut;
  ETTS0 qc_efOut;
  ETTS0 qe_efOut;
  ETTS0 rd_efOut;
  ETTS0 re_efOut;
  ETTS0 s_efOut;
  ETTS0 sb_efOut;
  ETTS0 sd_efOut;
  ETTS0 t18;
  ETTS0 t2;
  ETTS0 t22;
  ETTS0 t3;
  ETTS0 t48;
  ETTS0 t49;
  ETTS0 t52;
  ETTS0 t56;
  ETTS0 t59;
  ETTS0 t8;
  ETTS0 te_efOut;
  ETTS0 u_efOut;
  ETTS0 ub_efOut;
  ETTS0 uc_efOut;
  ETTS0 ud_efOut;
  ETTS0 ue_efOut;
  ETTS0 vd_efOut;
  ETTS0 w_efOut;
  ETTS0 wb_efOut;
  ETTS0 xd_efOut;
  ETTS0 y_efOut;
  ETTS0 yb_efOut;
  ETTS0 yc_efOut;
  ETTS0 yd_efOut;
  PmRealVector out;
  real_T X[183];
  real_T t413[146];
  real_T ab_efOut[1];
  real_T ac_efOut[1];
  real_T ad_efOut[1];
  real_T ae_efOut[1];
  real_T b_efOut[1];
  real_T bb_efOut[1];
  real_T bd_efOut[1];
  real_T c_efOut[1];
  real_T cb_efOut[1];
  real_T cc_efOut[1];
  real_T cd_efOut[1];
  real_T de_efOut[1];
  real_T e_efOut[1];
  real_T eb_efOut[1];
  real_T ec_efOut[1];
  real_T ed_efOut[1];
  real_T g_efOut[1];
  real_T gb_efOut[1];
  real_T ge_efOut[1];
  real_T h_efOut[1];
  real_T hb_efOut[1];
  real_T hc_efOut[1];
  real_T hd_efOut[1];
  real_T j_efOut[1];
  real_T jb_efOut[1];
  real_T jc_efOut[1];
  real_T je_efOut[1];
  real_T kd_efOut[1];
  real_T l_efOut[1];
  real_T lb_efOut[1];
  real_T lc_efOut[1];
  real_T m_efOut[1];
  real_T mb_efOut[1];
  real_T me_efOut[1];
  real_T nc_efOut[1];
  real_T nd_efOut[1];
  real_T ob_efOut[1];
  real_T oc_efOut[1];
  real_T p_efOut[1];
  real_T pe_efOut[1];
  real_T q_efOut[1];
  real_T qb_efOut[1];
  real_T qd_efOut[1];
  real_T r_efOut[1];
  real_T rb_efOut[1];
  real_T rc_efOut[1];
  real_T sc_efOut[1];
  real_T se_efOut[1];
  real_T t389[1];
  real_T t_efOut[1];
  real_T tb_efOut[1];
  real_T tc_efOut[1];
  real_T td_efOut[1];
  real_T v_efOut[1];
  real_T vb_efOut[1];
  real_T vc_efOut[1];
  real_T ve_efOut[1];
  real_T wc_efOut[1];
  real_T wd_efOut[1];
  real_T x_efOut[1];
  real_T xb_efOut[1];
  real_T xc_efOut[1];
  real_T Check_Valve_2P2_convection_A_v_in;
  real_T Fixed_Displacement_Pump_2P_v_out_A;
  real_T Pressure_Relief_Valve_2P1_convection_A_v_in;
  real_T Pressure_Relief_Valve_2P1_convection_B_v_in;
  real_T Simscape_Component_Dp;
  real_T Simscape_Component_mdot_admitted;
  real_T Steam_Drum_v_AV_in;
  real_T Steam_Generator_two_phase_fluid_h_sat_vap;
  real_T U_idx_3;
  real_T intrm_sf_mf_428;
  real_T intrm_sf_mf_543;
  real_T intrm_sf_mf_544;
  real_T intrm_sf_mf_549;
  real_T t472_idx_0;
  real_T t475;
  real_T t477;
  real_T t478;
  real_T t479;
  real_T t481;
  real_T t482;
  real_T t483;
  real_T t484;
  real_T t485;
  real_T t486;
  real_T t488;
  real_T t492;
  real_T t494;
  real_T t498;
  real_T t500;
  real_T t586;
  real_T t594;
  size_t t288[1];
  size_t t291[1];
  size_t t63[1];
  int32_T b;
  boolean_T intrm_sf_mf_25;
  boolean_T intrm_sf_mf_431;
  boolean_T intrm_sf_mf_434;
  boolean_T intrm_sf_mf_52;
  U_idx_3 = t595->mU.mX[3];
  for (b = 0; b < 183; b++) {
    X[b] = t595->mX.mX[b];
  }

  out = t596->mZC;
  t389[0ULL] = X[0ULL];
  t288[0] = 100ULL;
  t63[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t389[0ULL],
    &t288[0ULL], &t63[0ULL]);
  t59 = efOut;
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t59.mField0[0ULL], &t59.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = b_efOut[0];
  Steam_Drum_v_AV_in = t472_idx_0;
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t59.mField0[0ULL], &t59.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = c_efOut[0];
  intrm_sf_mf_428 = t472_idx_0;
  if (X[42ULL] <= Steam_Drum_v_AV_in) {
    Check_Valve_2P2_convection_A_v_in = X[42ULL] / (Steam_Drum_v_AV_in == 0.0 ?
      1.0E-16 : Steam_Drum_v_AV_in) - 1.0;
  } else if (X[42ULL] >= t472_idx_0) {
    Check_Valve_2P2_convection_A_v_in = (X[42ULL] - 4000.0) / (4000.0 -
      t472_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t472_idx_0) + 2.0;
  } else {
    t479 = t472_idx_0 - Steam_Drum_v_AV_in;
    Check_Valve_2P2_convection_A_v_in = (X[42ULL] - Steam_Drum_v_AV_in) / (t479 ==
      0.0 ? 1.0E-16 : t479);
  }

  t389[0ULL] = Check_Valve_2P2_convection_A_v_in;
  t291[0] = 50ULL;
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t48 = d_efOut;
  tlu2_2d_linear_linear_value(&e_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t59.mField0[0ULL], &t59.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = e_efOut[0];
  Check_Valve_2P2_convection_A_v_in = t472_idx_0;
  t389[0ULL] = X[43ULL];
  tlu2_linear_linear_prelookup(&f_efOut.mField0[0ULL], &f_efOut.mField1[0ULL],
    &f_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t389[0ULL],
    &t288[0ULL], &t63[0ULL]);
  t56 = f_efOut;
  tlu2_1d_linear_linear_value(&g_efOut[0ULL], &t56.mField0[0ULL], &t56.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = g_efOut[0];
  t475 = t472_idx_0;
  tlu2_1d_linear_linear_value(&h_efOut[0ULL], &t56.mField0[0ULL], &t56.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = h_efOut[0];
  Pressure_Relief_Valve_2P1_convection_A_v_in = t472_idx_0;
  if (X[44ULL] <= t475) {
    t477 = X[44ULL] / (t475 == 0.0 ? 1.0E-16 : t475) - 1.0;
  } else if (X[44ULL] >= t472_idx_0) {
    t477 = (X[44ULL] - 4000.0) / (4000.0 - t472_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t472_idx_0) + 2.0;
  } else {
    t484 = t472_idx_0 - t475;
    t477 = (X[44ULL] - t475) / (t484 == 0.0 ? 1.0E-16 : t484);
  }

  t389[0ULL] = t477;
  tlu2_linear_linear_prelookup(&i_efOut.mField0[0ULL], &i_efOut.mField1[0ULL],
    &i_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t48 = i_efOut;
  tlu2_2d_linear_linear_value(&j_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t56.mField0[0ULL], &t56.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = j_efOut[0];
  t477 = t472_idx_0;
  t389[0ULL] = X[6ULL];
  tlu2_linear_linear_prelookup(&k_efOut.mField0[0ULL], &k_efOut.mField1[0ULL],
    &k_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t389[0ULL],
    &t288[0ULL], &t63[0ULL]);
  t49 = k_efOut;
  tlu2_1d_linear_linear_value(&l_efOut[0ULL], &t49.mField0[0ULL], &t49.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = l_efOut[0];
  t478 = t472_idx_0;
  tlu2_1d_linear_linear_value(&m_efOut[0ULL], &t49.mField0[0ULL], &t49.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = m_efOut[0];
  t479 = t472_idx_0;
  if (X[7ULL] <= t478) {
    Fixed_Displacement_Pump_2P_v_out_A = X[7ULL] / (t478 == 0.0 ? 1.0E-16 : t478)
      - 1.0;
  } else if (X[7ULL] >= t472_idx_0) {
    Fixed_Displacement_Pump_2P_v_out_A = (X[7ULL] - 4000.0) / (4000.0 -
      t472_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t472_idx_0) + 2.0;
  } else {
    Steam_Generator_two_phase_fluid_h_sat_vap = t472_idx_0 - t478;
    Fixed_Displacement_Pump_2P_v_out_A = (X[7ULL] - t478) /
      (Steam_Generator_two_phase_fluid_h_sat_vap == 0.0 ? 1.0E-16 :
       Steam_Generator_two_phase_fluid_h_sat_vap);
  }

  if (X[8ULL] <= t478) {
    t482 = X[8ULL] / (t478 == 0.0 ? 1.0E-16 : t478) - 1.0;
  } else if (X[8ULL] >= t472_idx_0) {
    t482 = (X[8ULL] - 4000.0) / (4000.0 - t472_idx_0 == 0.0 ? 1.0E-16 : 4000.0 -
      t472_idx_0) + 2.0;
  } else {
    t494 = t472_idx_0 - t478;
    t482 = (X[8ULL] - t478) / (t494 == 0.0 ? 1.0E-16 : t494);
  }

  t389[0ULL] = ((Fixed_Displacement_Pump_2P_v_out_A < 0.0 ?
                 Fixed_Displacement_Pump_2P_v_out_A : 0.0) + (t482 < 0.0 ? t482 :
    0.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&n_efOut.mField0[0ULL], &n_efOut.mField1[0ULL],
    &n_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t48 = n_efOut;
  t389[0ULL] = X[6ULL];
  tlu2_linear_nearest_prelookup(&o_efOut.mField0[0ULL], &o_efOut.mField1[0ULL],
    &o_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t389[0ULL],
    &t288[0ULL], &t63[0ULL]);
  t18 = o_efOut;
  tlu2_2d_linear_nearest_value(&p_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField10, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = p_efOut[0];
  t481 = t472_idx_0;
  tlu2_2d_linear_nearest_value(&q_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField8, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = q_efOut[0];
  t483 = t472_idx_0;
  tlu2_2d_linear_nearest_value(&r_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField11, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = r_efOut[0];
  t481 = t481 * t483 / (t472_idx_0 == 0.0 ? 1.0E-16 : t472_idx_0);
  t483 = X[9ULL] >= 0.0 ? X[9ULL] : 0.0;
  t484 = X[10ULL] >= 0.0 ? X[10ULL] : 0.0;
  t485 = t481 * t484;
  t498 = t483 + X[59ULL];
  t486 = (t485 + X[59ULL]) / (t498 == 0.0 ? 1.0E-16 : t498);
  if (t486 <= 1.0) {
    Simscape_Component_mdot_admitted = 1.0 - t486 * 0.999999;
  } else {
    Simscape_Component_mdot_admitted = 1.0E-6;
  }

  if (t486 >= 1.0) {
    t488 = t486 * 1.000001 - 1.0;
  } else {
    t488 = 1.0E-6;
  }

  if (t485 + X[59ULL] >= t483 + X[59ULL]) {
    t594 = t483 + X[59ULL];
    t500 = t485 + X[59ULL];
    t486 = (1.000001 / (t594 == 0.0 ? 1.0E-16 : t594) - 0.999999 / (t500 == 0.0 ?
             1.0E-16 : t500)) * X[11ULL];
  } else {
    t594 = t485 + X[59ULL];
    t494 = t483 + X[59ULL];
    t486 = (1.000001 / (t594 == 0.0 ? 1.0E-16 : t594) - 0.999999 / (t494 == 0.0 ?
             1.0E-16 : t494)) * X[11ULL];
  }

  t485 = t486 <= 15.0 ? t486 : 15.0;
  t389[0ULL] = Fixed_Displacement_Pump_2P_v_out_A;
  tlu2_linear_linear_prelookup(&s_efOut.mField0[0ULL], &s_efOut.mField1[0ULL],
    &s_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t48 = s_efOut;
  tlu2_2d_linear_linear_value(&t_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t49.mField0[0ULL], &t49.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = t_efOut[0];
  Steam_Generator_two_phase_fluid_h_sat_vap = X[6ULL] * t472_idx_0 * 100.0 + X
    [7ULL];
  t389[0] = 0.0;
  tlu2_linear_linear_prelookup(&u_efOut.mField0[0ULL], &u_efOut.mField1[0ULL],
    &u_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t8 = u_efOut;
  tlu2_2d_linear_linear_value(&v_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], &t49.mField0[0ULL], &t49.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = v_efOut[0];
  t594 = (1.0 - pmf_exp(-t485)) * X[58ULL];
  t494 = pmf_exp(-t485) * t488 + Simscape_Component_mdot_admitted;
  intrm_sf_mf_25 = (t594 / (t494 == 0.0 ? 1.0E-16 : t494) > ((X[6ULL] *
    t472_idx_0 * 100.0 + t478) - Steam_Generator_two_phase_fluid_h_sat_vap) /
                    (t481 == 0.0 ? 1.0E-16 : t481) * 1000.0);
  t389[0] = 1.0;
  tlu2_linear_linear_prelookup(&w_efOut.mField0[0ULL], &w_efOut.mField1[0ULL],
    &w_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t3 = w_efOut;
  tlu2_2d_linear_linear_value(&x_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], &t49.mField0[0ULL], &t49.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = x_efOut[0];
  t481 = X[6ULL] * t472_idx_0 * 100.0 + t479;
  t389[0ULL] = ((Fixed_Displacement_Pump_2P_v_out_A > 1.0 ?
                 Fixed_Displacement_Pump_2P_v_out_A : 1.0) + (t482 > 1.0 ? t482 :
    1.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&y_efOut.mField0[0ULL], &y_efOut.mField1[0ULL],
    &y_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t48 = y_efOut;
  tlu2_2d_linear_nearest_value(&ab_efOut[0ULL], &t48.mField0[0ULL],
    &t48.mField2[0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = ab_efOut[0];
  t478 = t472_idx_0;
  tlu2_2d_linear_nearest_value(&bb_efOut[0ULL], &t48.mField0[0ULL],
    &t48.mField2[0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = bb_efOut[0];
  t479 = t472_idx_0;
  tlu2_2d_linear_nearest_value(&cb_efOut[0ULL], &t48.mField0[0ULL],
    &t48.mField2[0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = cb_efOut[0];
  t478 = t478 * t479 / (t472_idx_0 == 0.0 ? 1.0E-16 : t472_idx_0);
  t479 = t478 * t484;
  Fixed_Displacement_Pump_2P_v_out_A = (X[59ULL] + t479) / (t498 == 0.0 ?
    1.0E-16 : t498);
  if (Fixed_Displacement_Pump_2P_v_out_A <= 1.0) {
    t484 = 1.0 - Fixed_Displacement_Pump_2P_v_out_A * 0.999999;
  } else {
    t484 = 1.0E-6;
  }

  if (Fixed_Displacement_Pump_2P_v_out_A >= 1.0) {
    t485 = Fixed_Displacement_Pump_2P_v_out_A * 1.000001 - 1.0;
  } else {
    t485 = 1.0E-6;
  }

  if (X[59ULL] + t479 >= t483 + X[59ULL]) {
    t594 = t483 + X[59ULL];
    t494 = X[59ULL] + t479;
    Fixed_Displacement_Pump_2P_v_out_A = (1.000001 / (t594 == 0.0 ? 1.0E-16 :
      t594) - 0.999999 / (t494 == 0.0 ? 1.0E-16 : t494)) * X[12ULL];
  } else {
    t586 = X[59ULL] + t479;
    t594 = t483 + X[59ULL];
    Fixed_Displacement_Pump_2P_v_out_A = (1.000001 / (t586 == 0.0 ? 1.0E-16 :
      t586) - 0.999999 / (t594 == 0.0 ? 1.0E-16 : t594)) * X[12ULL];
  }

  t479 = Fixed_Displacement_Pump_2P_v_out_A <= 15.0 ?
    Fixed_Displacement_Pump_2P_v_out_A : 15.0;
  t594 = (1.0 - pmf_exp(-t479)) * X[58ULL];
  t494 = pmf_exp(-t479) * t485 + t484;
  intrm_sf_mf_52 = (t594 / (t494 == 0.0 ? 1.0E-16 : t494) < (t481 -
    Steam_Generator_two_phase_fluid_h_sat_vap) / (t478 == 0.0 ? 1.0E-16 : t478) *
                    1000.0);
  t389[0ULL] = t482;
  tlu2_linear_linear_prelookup(&db_efOut.mField0[0ULL], &db_efOut.mField1[0ULL],
    &db_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t48 = db_efOut;
  tlu2_2d_linear_linear_value(&eb_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t49.mField0[0ULL], &t49.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = eb_efOut[0];
  t478 = t472_idx_0;
  t389[0ULL] = X[49ULL];
  tlu2_linear_linear_prelookup(&fb_efOut.mField0[0ULL], &fb_efOut.mField1[0ULL],
    &fb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t389[0ULL],
    &t288[0ULL], &t63[0ULL]);
  t49 = fb_efOut;
  tlu2_1d_linear_linear_value(&gb_efOut[0ULL], &t49.mField0[0ULL], &t49.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = gb_efOut[0];
  t479 = t472_idx_0;
  tlu2_1d_linear_linear_value(&hb_efOut[0ULL], &t49.mField0[0ULL], &t49.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = hb_efOut[0];
  if (X[50ULL] <= t479) {
    t481 = X[50ULL] / (t479 == 0.0 ? 1.0E-16 : t479) - 1.0;
  } else if (X[50ULL] >= t472_idx_0) {
    t481 = (X[50ULL] - 4000.0) / (4000.0 - t472_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t472_idx_0) + 2.0;
  } else {
    t594 = t472_idx_0 - t479;
    t481 = (X[50ULL] - t479) / (t594 == 0.0 ? 1.0E-16 : t594);
  }

  t389[0ULL] = t481;
  tlu2_linear_linear_prelookup(&ib_efOut.mField0[0ULL], &ib_efOut.mField1[0ULL],
    &ib_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t18 = ib_efOut;
  tlu2_2d_linear_linear_value(&jb_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t49.mField0[0ULL], &t49.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = jb_efOut[0];
  t479 = t472_idx_0;
  t389[0ULL] = X[53ULL];
  tlu2_linear_linear_prelookup(&kb_efOut.mField0[0ULL], &kb_efOut.mField1[0ULL],
    &kb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t389[0ULL],
    &t288[0ULL], &t63[0ULL]);
  t49 = kb_efOut;
  tlu2_1d_linear_linear_value(&lb_efOut[0ULL], &t49.mField0[0ULL], &t49.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = lb_efOut[0];
  Fixed_Displacement_Pump_2P_v_out_A = t472_idx_0;
  tlu2_1d_linear_linear_value(&mb_efOut[0ULL], &t49.mField0[0ULL], &t49.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = mb_efOut[0];
  t481 = t472_idx_0;
  if (X[54ULL] <= Fixed_Displacement_Pump_2P_v_out_A) {
    t482 = X[54ULL] / (Fixed_Displacement_Pump_2P_v_out_A == 0.0 ? 1.0E-16 :
                       Fixed_Displacement_Pump_2P_v_out_A) - 1.0;
  } else if (X[54ULL] >= t472_idx_0) {
    t482 = (X[54ULL] - 4000.0) / (4000.0 - t472_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t472_idx_0) + 2.0;
  } else {
    t594 = t472_idx_0 - Fixed_Displacement_Pump_2P_v_out_A;
    t482 = (X[54ULL] - Fixed_Displacement_Pump_2P_v_out_A) / (t594 == 0.0 ?
      1.0E-16 : t594);
  }

  t389[0ULL] = t482;
  tlu2_linear_linear_prelookup(&nb_efOut.mField0[0ULL], &nb_efOut.mField1[0ULL],
    &nb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t2 = nb_efOut;
  tlu2_2d_linear_linear_value(&ob_efOut[0ULL], &t2.mField0[0ULL], &t2.mField2
    [0ULL], &t49.mField0[0ULL], &t49.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = ob_efOut[0];
  t482 = t472_idx_0;
  t389[0ULL] = X[79ULL];
  tlu2_linear_linear_prelookup(&pb_efOut.mField0[0ULL], &pb_efOut.mField1[0ULL],
    &pb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t389[0ULL],
    &t288[0ULL], &t63[0ULL]);
  t18 = pb_efOut;
  tlu2_1d_linear_linear_value(&qb_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = qb_efOut[0];
  t483 = t472_idx_0;
  tlu2_1d_linear_linear_value(&rb_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = rb_efOut[0];
  t484 = t472_idx_0;
  if (X[80ULL] <= t483) {
    t485 = X[80ULL] / (t483 == 0.0 ? 1.0E-16 : t483) - 1.0;
  } else if (X[80ULL] >= t472_idx_0) {
    t485 = (X[80ULL] - 4000.0) / (4000.0 - t472_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t472_idx_0) + 2.0;
  } else {
    t594 = t472_idx_0 - t483;
    t485 = (X[80ULL] - t483) / (t594 == 0.0 ? 1.0E-16 : t594);
  }

  t389[0ULL] = t485;
  tlu2_linear_linear_prelookup(&sb_efOut.mField0[0ULL], &sb_efOut.mField1[0ULL],
    &sb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t48 = sb_efOut;
  tlu2_2d_linear_linear_value(&tb_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = tb_efOut[0];
  t485 = t472_idx_0;
  if (X[85ULL] <= Fixed_Displacement_Pump_2P_v_out_A) {
    t486 = X[85ULL] / (Fixed_Displacement_Pump_2P_v_out_A == 0.0 ? 1.0E-16 :
                       Fixed_Displacement_Pump_2P_v_out_A) - 1.0;
  } else if (X[85ULL] >= t481) {
    t486 = (X[85ULL] - 4000.0) / (4000.0 - t481 == 0.0 ? 1.0E-16 : 4000.0 - t481)
      + 2.0;
  } else {
    t594 = t481 - Fixed_Displacement_Pump_2P_v_out_A;
    t486 = (X[85ULL] - Fixed_Displacement_Pump_2P_v_out_A) / (t594 == 0.0 ?
      1.0E-16 : t594);
  }

  t389[0ULL] = t486;
  tlu2_linear_linear_prelookup(&ub_efOut.mField0[0ULL], &ub_efOut.mField1[0ULL],
    &ub_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t48 = ub_efOut;
  tlu2_2d_linear_linear_value(&vb_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t49.mField0[0ULL], &t49.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = vb_efOut[0];
  Fixed_Displacement_Pump_2P_v_out_A = t472_idx_0;
  if (X[86ULL] <= t483) {
    t481 = X[86ULL] / (t483 == 0.0 ? 1.0E-16 : t483) - 1.0;
  } else if (X[86ULL] >= t484) {
    t481 = (X[86ULL] - 4000.0) / (4000.0 - t484 == 0.0 ? 1.0E-16 : 4000.0 - t484)
      + 2.0;
  } else {
    t594 = t484 - t483;
    t481 = (X[86ULL] - t483) / (t594 == 0.0 ? 1.0E-16 : t594);
  }

  t389[0ULL] = t481;
  tlu2_linear_linear_prelookup(&wb_efOut.mField0[0ULL], &wb_efOut.mField1[0ULL],
    &wb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t48 = wb_efOut;
  tlu2_2d_linear_linear_value(&xb_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = xb_efOut[0];
  t481 = t472_idx_0;
  if (X[145ULL] <= t483) {
    t486 = X[145ULL] / (t483 == 0.0 ? 1.0E-16 : t483) - 1.0;
  } else if (X[145ULL] >= t484) {
    t486 = (X[145ULL] - 4000.0) / (4000.0 - t484 == 0.0 ? 1.0E-16 : 4000.0 -
      t484) + 2.0;
  } else {
    t594 = t484 - t483;
    t486 = (X[145ULL] - t483) / (t594 == 0.0 ? 1.0E-16 : t594);
  }

  t389[0ULL] = t486;
  tlu2_linear_linear_prelookup(&yb_efOut.mField0[0ULL], &yb_efOut.mField1[0ULL],
    &yb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t48 = yb_efOut;
  tlu2_2d_linear_linear_value(&ac_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = ac_efOut[0];
  t483 = t472_idx_0;
  if (X[146ULL] <= t475) {
    t484 = X[146ULL] / (t475 == 0.0 ? 1.0E-16 : t475) - 1.0;
  } else if (X[146ULL] >= Pressure_Relief_Valve_2P1_convection_A_v_in) {
    t484 = (X[146ULL] - 4000.0) / (4000.0 -
      Pressure_Relief_Valve_2P1_convection_A_v_in == 0.0 ? 1.0E-16 : 4000.0 -
      Pressure_Relief_Valve_2P1_convection_A_v_in) + 2.0;
  } else {
    t594 = Pressure_Relief_Valve_2P1_convection_A_v_in - t475;
    t484 = (X[146ULL] - t475) / (t594 == 0.0 ? 1.0E-16 : t594);
  }

  t389[0ULL] = t484;
  tlu2_linear_linear_prelookup(&bc_efOut.mField0[0ULL], &bc_efOut.mField1[0ULL],
    &bc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t52 = bc_efOut;
  tlu2_2d_linear_linear_value(&cc_efOut[0ULL], &t52.mField0[0ULL], &t52.mField2
    [0ULL], &t56.mField0[0ULL], &t56.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = cc_efOut[0];
  t475 = t472_idx_0;
  if (X[99ULL] <= Steam_Drum_v_AV_in) {
    Pressure_Relief_Valve_2P1_convection_A_v_in = X[99ULL] / (Steam_Drum_v_AV_in
      == 0.0 ? 1.0E-16 : Steam_Drum_v_AV_in) - 1.0;
  } else if (X[99ULL] >= intrm_sf_mf_428) {
    Pressure_Relief_Valve_2P1_convection_A_v_in = (X[99ULL] - 4000.0) / (4000.0
      - intrm_sf_mf_428 == 0.0 ? 1.0E-16 : 4000.0 - intrm_sf_mf_428) + 2.0;
  } else {
    t594 = intrm_sf_mf_428 - Steam_Drum_v_AV_in;
    Pressure_Relief_Valve_2P1_convection_A_v_in = (X[99ULL] - Steam_Drum_v_AV_in)
      / (t594 == 0.0 ? 1.0E-16 : t594);
  }

  t389[0ULL] = Pressure_Relief_Valve_2P1_convection_A_v_in;
  tlu2_linear_linear_prelookup(&dc_efOut.mField0[0ULL], &dc_efOut.mField1[0ULL],
    &dc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t48 = dc_efOut;
  tlu2_2d_linear_linear_value(&ec_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t59.mField0[0ULL], &t59.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = ec_efOut[0];
  Pressure_Relief_Valve_2P1_convection_A_v_in = t472_idx_0;
  if (X[148ULL] <= 1082.1904733151327) {
    t484 = X[148ULL] / 1082.1904733151327 - 1.0;
  } else if (X[148ULL] >= 2601.6367101330361) {
    t484 = (X[148ULL] - 4000.0) / 1398.3632898669639 + 2.0;
  } else {
    t484 = (X[148ULL] - 1082.1904733151327) / 1519.4462368179034;
  }

  t389[0ULL] = t484;
  tlu2_linear_linear_prelookup(&fc_efOut.mField0[0ULL], &fc_efOut.mField1[0ULL],
    &fc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t48 = fc_efOut;
  t389[0] = 40.0;
  tlu2_linear_linear_prelookup(&gc_efOut.mField0[0ULL], &gc_efOut.mField1[0ULL],
    &gc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t389[0ULL],
    &t288[0ULL], &t63[0ULL]);
  t22 = gc_efOut;
  tlu2_2d_linear_linear_value(&hc_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t22.mField0[0ULL], &t22.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = hc_efOut[0];
  Pressure_Relief_Valve_2P1_convection_B_v_in = t472_idx_0;
  Simscape_Component_Dp = X[0ULL] - X[49ULL];
  if (X[97ULL] <= Steam_Drum_v_AV_in) {
    t484 = X[97ULL] / (Steam_Drum_v_AV_in == 0.0 ? 1.0E-16 : Steam_Drum_v_AV_in)
      - 1.0;
  } else if (X[97ULL] >= intrm_sf_mf_428) {
    t484 = (X[97ULL] - 4000.0) / (4000.0 - intrm_sf_mf_428 == 0.0 ? 1.0E-16 :
      4000.0 - intrm_sf_mf_428) + 2.0;
  } else {
    t594 = intrm_sf_mf_428 - Steam_Drum_v_AV_in;
    t484 = (X[97ULL] - Steam_Drum_v_AV_in) / (t594 == 0.0 ? 1.0E-16 : t594);
  }

  t389[0ULL] = t484;
  tlu2_linear_linear_prelookup(&ic_efOut.mField0[0ULL], &ic_efOut.mField1[0ULL],
    &ic_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t18 = ic_efOut;
  tlu2_2d_linear_linear_value(&jc_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t59.mField0[0ULL], &t59.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = jc_efOut[0];
  t484 = t472_idx_0;
  t486 = Simscape_Component_Dp / 30.0;
  if (t486 <= 0.0) {
    Simscape_Component_mdot_admitted = 0.0;
  } else {
    Simscape_Component_mdot_admitted = t486 >= 1.0E+6 ? 1.0E+6 : t486;
  }

  t486 = pmf_sqrt(Simscape_Component_mdot_admitted) * 0.5;
  if (U_idx_3 <= 0.0) {
    t488 = 0.0;
  } else {
    t488 = U_idx_3 >= 1.0 ? 1.0 : U_idx_3;
  }

  Simscape_Component_mdot_admitted = t486 * t488;
  if (X[147ULL] <= Steam_Drum_v_AV_in) {
    t486 = X[147ULL] / (Steam_Drum_v_AV_in == 0.0 ? 1.0E-16 : Steam_Drum_v_AV_in)
      - 1.0;
  } else if (X[147ULL] >= intrm_sf_mf_428) {
    t486 = (X[147ULL] - 4000.0) / (4000.0 - intrm_sf_mf_428 == 0.0 ? 1.0E-16 :
      4000.0 - intrm_sf_mf_428) + 2.0;
  } else {
    t594 = intrm_sf_mf_428 - Steam_Drum_v_AV_in;
    t486 = (X[147ULL] - Steam_Drum_v_AV_in) / (t594 == 0.0 ? 1.0E-16 : t594);
  }

  t389[0ULL] = t486;
  tlu2_linear_linear_prelookup(&kc_efOut.mField0[0ULL], &kc_efOut.mField1[0ULL],
    &kc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t56 = kc_efOut;
  tlu2_2d_linear_linear_value(&lc_efOut[0ULL], &t56.mField0[0ULL], &t56.mField2
    [0ULL], &t59.mField0[0ULL], &t59.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = lc_efOut[0];
  Steam_Drum_v_AV_in = t472_idx_0;
  t389[0ULL] = X[33ULL];
  tlu2_linear_linear_prelookup(&mc_efOut.mField0[0ULL], &mc_efOut.mField1[0ULL],
    &mc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t389[0ULL],
    &t288[0ULL], &t63[0ULL]);
  t18 = mc_efOut;
  tlu2_1d_linear_linear_value(&nc_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = nc_efOut[0];
  intrm_sf_mf_428 = t472_idx_0;
  tlu2_1d_linear_linear_value(&oc_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = oc_efOut[0];
  t486 = t472_idx_0;
  if (X[34ULL] <= intrm_sf_mf_428) {
    t488 = X[34ULL] / (intrm_sf_mf_428 == 0.0 ? 1.0E-16 : intrm_sf_mf_428) - 1.0;
  } else if (X[34ULL] >= t472_idx_0) {
    t488 = (X[34ULL] - 4000.0) / (4000.0 - t472_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t472_idx_0) + 2.0;
  } else {
    t594 = t472_idx_0 - intrm_sf_mf_428;
    t488 = (X[34ULL] - intrm_sf_mf_428) / (t594 == 0.0 ? 1.0E-16 : t594);
  }

  if (X[35ULL] <= intrm_sf_mf_428) {
    intrm_sf_mf_543 = X[35ULL] / (intrm_sf_mf_428 == 0.0 ? 1.0E-16 :
      intrm_sf_mf_428) - 1.0;
  } else if (X[35ULL] >= t472_idx_0) {
    intrm_sf_mf_543 = (X[35ULL] - 4000.0) / (4000.0 - t472_idx_0 == 0.0 ?
      1.0E-16 : 4000.0 - t472_idx_0) + 2.0;
  } else {
    t594 = t472_idx_0 - intrm_sf_mf_428;
    intrm_sf_mf_543 = (X[35ULL] - intrm_sf_mf_428) / (t594 == 0.0 ? 1.0E-16 :
      t594);
  }

  t389[0ULL] = ((t488 < 0.0 ? t488 : 0.0) + (intrm_sf_mf_543 < 0.0 ?
    intrm_sf_mf_543 : 0.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&pc_efOut.mField0[0ULL], &pc_efOut.mField1[0ULL],
    &pc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t52 = pc_efOut;
  t389[0ULL] = X[33ULL];
  tlu2_linear_nearest_prelookup(&qc_efOut.mField0[0ULL], &qc_efOut.mField1[0ULL],
    &qc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t389[0ULL],
    &t288[0ULL], &t63[0ULL]);
  t2 = qc_efOut;
  tlu2_2d_linear_nearest_value(&rc_efOut[0ULL], &t52.mField0[0ULL],
    &t52.mField2[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)
    (LC))->mField10, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = rc_efOut[0];
  Steam_Generator_two_phase_fluid_h_sat_vap = t472_idx_0;
  tlu2_2d_linear_nearest_value(&sc_efOut[0ULL], &t52.mField0[0ULL],
    &t52.mField2[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)
    (LC))->mField8, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = sc_efOut[0];
  intrm_sf_mf_544 = t472_idx_0;
  tlu2_2d_linear_nearest_value(&tc_efOut[0ULL], &t52.mField0[0ULL],
    &t52.mField2[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)
    (LC))->mField11, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = tc_efOut[0];
  Steam_Generator_two_phase_fluid_h_sat_vap =
    Steam_Generator_two_phase_fluid_h_sat_vap * intrm_sf_mf_544 / (t472_idx_0 ==
    0.0 ? 1.0E-16 : t472_idx_0);
  intrm_sf_mf_544 = X[37ULL] >= 0.0 ? X[37ULL] : 0.0;
  t492 = X[38ULL] >= 0.0 ? X[38ULL] : 0.0;
  t494 = intrm_sf_mf_544 + X[164ULL];
  t586 = (intrm_sf_mf_544 + X[164ULL]) * (1.0 - pmf_exp(-X[36ULL] / (t494 == 0.0
    ? 1.0E-16 : t494)));
  t594 = Steam_Generator_two_phase_fluid_h_sat_vap * t492 + X[164ULL];
  U_idx_3 = t586 / (t594 == 0.0 ? 1.0E-16 : t594);
  t389[0ULL] = t488;
  tlu2_linear_linear_prelookup(&uc_efOut.mField0[0ULL], &uc_efOut.mField1[0ULL],
    &uc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t48 = uc_efOut;
  tlu2_2d_linear_linear_value(&vc_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = vc_efOut[0];
  intrm_sf_mf_549 = X[33ULL] * t472_idx_0 * 100.0 + X[34ULL];
  tlu2_2d_linear_linear_value(&wc_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = wc_efOut[0];
  intrm_sf_mf_428 = ((X[33ULL] * t472_idx_0 * 100.0 + intrm_sf_mf_428) -
                     intrm_sf_mf_549) /
    (Steam_Generator_two_phase_fluid_h_sat_vap == 0.0 ? 1.0E-16 :
     Steam_Generator_two_phase_fluid_h_sat_vap);
  Steam_Generator_two_phase_fluid_h_sat_vap = (1.0 - pmf_exp(-(U_idx_3 <= 15.0 ?
    U_idx_3 : 15.0))) * X[163ULL];
  intrm_sf_mf_431 = (Steam_Generator_two_phase_fluid_h_sat_vap > intrm_sf_mf_428
                     * 1000.0);
  tlu2_2d_linear_linear_value(&xc_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = xc_efOut[0];
  Steam_Generator_two_phase_fluid_h_sat_vap = X[33ULL] * t472_idx_0 * 100.0 +
    t486;
  t389[0ULL] = ((t488 > 1.0 ? t488 : 1.0) + (intrm_sf_mf_543 > 1.0 ?
    intrm_sf_mf_543 : 1.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&yc_efOut.mField0[0ULL], &yc_efOut.mField1[0ULL],
    &yc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t49 = yc_efOut;
  tlu2_2d_linear_nearest_value(&ad_efOut[0ULL], &t49.mField0[0ULL],
    &t49.mField2[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)
    (LC))->mField10, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = ad_efOut[0];
  intrm_sf_mf_428 = t472_idx_0;
  tlu2_2d_linear_nearest_value(&bd_efOut[0ULL], &t49.mField0[0ULL],
    &t49.mField2[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)
    (LC))->mField8, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = bd_efOut[0];
  t486 = t472_idx_0;
  tlu2_2d_linear_nearest_value(&cd_efOut[0ULL], &t49.mField0[0ULL],
    &t49.mField2[0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)
    (LC))->mField11, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = cd_efOut[0];
  intrm_sf_mf_428 = intrm_sf_mf_428 * t486 / (t472_idx_0 == 0.0 ? 1.0E-16 :
    t472_idx_0);
  t586 = (intrm_sf_mf_544 + X[164ULL]) * (1.0 - pmf_exp(-X[39ULL] / (t494 == 0.0
    ? 1.0E-16 : t494)));
  t594 = X[164ULL] + intrm_sf_mf_428 * t492;
  t486 = t586 / (t594 == 0.0 ? 1.0E-16 : t594);
  t488 = t486 <= 15.0 ? t486 : 15.0;
  t486 = (Steam_Generator_two_phase_fluid_h_sat_vap - intrm_sf_mf_549) /
    (intrm_sf_mf_428 == 0.0 ? 1.0E-16 : intrm_sf_mf_428);
  intrm_sf_mf_428 = (1.0 - pmf_exp(-t488)) * X[163ULL];
  intrm_sf_mf_434 = (intrm_sf_mf_428 < t486 * 1000.0);
  t389[0ULL] = intrm_sf_mf_543;
  tlu2_linear_linear_prelookup(&dd_efOut.mField0[0ULL], &dd_efOut.mField1[0ULL],
    &dd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t48 = dd_efOut;
  tlu2_2d_linear_linear_value(&ed_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t291[0ULL], &t288[0ULL], &t63[0ULL]);
  t472_idx_0 = ed_efOut[0];
  intrm_sf_mf_428 = t472_idx_0;
  t389[0ULL] = X[5ULL];
  t288[0] = 28ULL;
  tlu2_linear_linear_prelookup(&fd_efOut.mField0[0ULL], &fd_efOut.mField1[0ULL],
    &fd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t389[0ULL],
    &t288[0ULL], &t63[0ULL]);
  t18 = fd_efOut;
  t389[0ULL] = X[4ULL];
  t291[0] = 27ULL;
  tlu2_linear_linear_prelookup(&gd_efOut.mField0[0ULL], &gd_efOut.mField1[0ULL],
    &gd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t48 = gd_efOut;
  tlu2_2d_linear_linear_value(&hd_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t48.mField0[0ULL], &t48.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t288[0ULL], &t291[0ULL], &t63[0ULL]);
  t472_idx_0 = hd_efOut[0];
  t486 = t472_idx_0;
  t389[0ULL] = X[48ULL];
  tlu2_linear_linear_prelookup(&id_efOut.mField0[0ULL], &id_efOut.mField1[0ULL],
    &id_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t389[0ULL],
    &t288[0ULL], &t63[0ULL]);
  t48 = id_efOut;
  t389[0] = 1.01325;
  tlu2_linear_linear_prelookup(&jd_efOut.mField0[0ULL], &jd_efOut.mField1[0ULL],
    &jd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t8 = jd_efOut;
  tlu2_2d_linear_linear_value(&kd_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t288[0ULL], &t291[0ULL], &t63[0ULL]);
  t472_idx_0 = kd_efOut[0];
  t488 = t472_idx_0;
  t389[0ULL] = X[51ULL];
  tlu2_linear_linear_prelookup(&ld_efOut.mField0[0ULL], &ld_efOut.mField1[0ULL],
    &ld_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t389[0ULL],
    &t288[0ULL], &t63[0ULL]);
  t18 = ld_efOut;
  t389[0ULL] = X[52ULL];
  tlu2_linear_linear_prelookup(&md_efOut.mField0[0ULL], &md_efOut.mField1[0ULL],
    &md_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t48 = md_efOut;
  tlu2_2d_linear_linear_value(&nd_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t48.mField0[0ULL], &t48.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t288[0ULL], &t291[0ULL], &t63[0ULL]);
  t472_idx_0 = nd_efOut[0];
  Steam_Generator_two_phase_fluid_h_sat_vap = t472_idx_0;
  t389[0ULL] = X[88ULL];
  tlu2_linear_linear_prelookup(&od_efOut.mField0[0ULL], &od_efOut.mField1[0ULL],
    &od_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t389[0ULL],
    &t288[0ULL], &t63[0ULL]);
  t48 = od_efOut;
  t389[0] = 150.0;
  tlu2_linear_linear_prelookup(&pd_efOut.mField0[0ULL], &pd_efOut.mField1[0ULL],
    &pd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t3 = pd_efOut;
  tlu2_2d_linear_linear_value(&qd_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t3.mField0[0ULL], &t3.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t288[0ULL], &t291[0ULL], &t63[0ULL]);
  t472_idx_0 = qd_efOut[0];
  intrm_sf_mf_543 = t472_idx_0;
  t389[0ULL] = X[89ULL];
  tlu2_linear_linear_prelookup(&rd_efOut.mField0[0ULL], &rd_efOut.mField1[0ULL],
    &rd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t389[0ULL],
    &t288[0ULL], &t63[0ULL]);
  t18 = rd_efOut;
  t389[0ULL] = X[90ULL];
  tlu2_linear_linear_prelookup(&sd_efOut.mField0[0ULL], &sd_efOut.mField1[0ULL],
    &sd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t48 = sd_efOut;
  tlu2_2d_linear_linear_value(&td_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t48.mField0[0ULL], &t48.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t288[0ULL], &t291[0ULL], &t63[0ULL]);
  t472_idx_0 = td_efOut[0];
  intrm_sf_mf_544 = t472_idx_0;
  t389[0ULL] = X[102ULL];
  tlu2_linear_linear_prelookup(&ud_efOut.mField0[0ULL], &ud_efOut.mField1[0ULL],
    &ud_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t389[0ULL],
    &t288[0ULL], &t63[0ULL]);
  t3 = ud_efOut;
  t389[0ULL] = X[103ULL];
  tlu2_linear_linear_prelookup(&vd_efOut.mField0[0ULL], &vd_efOut.mField1[0ULL],
    &vd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t8 = vd_efOut;
  tlu2_2d_linear_linear_value(&wd_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t288[0ULL], &t291[0ULL], &t63[0ULL]);
  t472_idx_0 = wd_efOut[0];
  t492 = t472_idx_0;
  t389[0ULL] = X[104ULL];
  tlu2_linear_linear_prelookup(&xd_efOut.mField0[0ULL], &xd_efOut.mField1[0ULL],
    &xd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t389[0ULL],
    &t288[0ULL], &t63[0ULL]);
  t49 = xd_efOut;
  t389[0ULL] = X[105ULL];
  tlu2_linear_linear_prelookup(&yd_efOut.mField0[0ULL], &yd_efOut.mField1[0ULL],
    &yd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t48 = yd_efOut;
  tlu2_2d_linear_linear_value(&ae_efOut[0ULL], &t49.mField0[0ULL], &t49.mField2
    [0ULL], &t48.mField0[0ULL], &t48.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t288[0ULL], &t291[0ULL], &t63[0ULL]);
  t472_idx_0 = ae_efOut[0];
  U_idx_3 = t472_idx_0;
  t389[0ULL] = X[111ULL];
  tlu2_linear_linear_prelookup(&be_efOut.mField0[0ULL], &be_efOut.mField1[0ULL],
    &be_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t389[0ULL],
    &t288[0ULL], &t63[0ULL]);
  t48 = be_efOut;
  t389[0] = 2.0;
  tlu2_linear_linear_prelookup(&ce_efOut.mField0[0ULL], &ce_efOut.mField1[0ULL],
    &ce_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t2 = ce_efOut;
  tlu2_2d_linear_linear_value(&de_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t288[0ULL], &t291[0ULL], &t63[0ULL]);
  t472_idx_0 = de_efOut[0];
  t494 = t472_idx_0;
  t389[0ULL] = X[116ULL];
  tlu2_linear_linear_prelookup(&ee_efOut.mField0[0ULL], &ee_efOut.mField1[0ULL],
    &ee_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t389[0ULL],
    &t288[0ULL], &t63[0ULL]);
  t3 = ee_efOut;
  t389[0ULL] = X[117ULL];
  tlu2_linear_linear_prelookup(&fe_efOut.mField0[0ULL], &fe_efOut.mField1[0ULL],
    &fe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t2 = fe_efOut;
  tlu2_2d_linear_linear_value(&ge_efOut[0ULL], &t3.mField0[0ULL], &t3.mField2
    [0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t288[0ULL], &t291[0ULL], &t63[0ULL]);
  t472_idx_0 = ge_efOut[0];
  intrm_sf_mf_549 = t472_idx_0;
  t389[0ULL] = X[118ULL];
  tlu2_linear_linear_prelookup(&he_efOut.mField0[0ULL], &he_efOut.mField1[0ULL],
    &he_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t389[0ULL],
    &t288[0ULL], &t63[0ULL]);
  t49 = he_efOut;
  t389[0ULL] = X[119ULL];
  tlu2_linear_linear_prelookup(&ie_efOut.mField0[0ULL], &ie_efOut.mField1[0ULL],
    &ie_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t2 = ie_efOut;
  tlu2_2d_linear_linear_value(&je_efOut[0ULL], &t49.mField0[0ULL], &t49.mField2
    [0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t288[0ULL], &t291[0ULL], &t63[0ULL]);
  t472_idx_0 = je_efOut[0];
  t586 = t472_idx_0;
  t389[0ULL] = X[16ULL];
  tlu2_linear_linear_prelookup(&ke_efOut.mField0[0ULL], &ke_efOut.mField1[0ULL],
    &ke_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t389[0ULL],
    &t288[0ULL], &t63[0ULL]);
  t49 = ke_efOut;
  t389[0ULL] = X[15ULL];
  tlu2_linear_linear_prelookup(&le_efOut.mField0[0ULL], &le_efOut.mField1[0ULL],
    &le_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t2 = le_efOut;
  tlu2_2d_linear_linear_value(&me_efOut[0ULL], &t49.mField0[0ULL], &t49.mField2
    [0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t288[0ULL], &t291[0ULL], &t63[0ULL]);
  t472_idx_0 = me_efOut[0];
  t594 = t472_idx_0;
  t389[0ULL] = X[18ULL];
  tlu2_linear_linear_prelookup(&ne_efOut.mField0[0ULL], &ne_efOut.mField1[0ULL],
    &ne_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t389[0ULL],
    &t288[0ULL], &t63[0ULL]);
  t18 = ne_efOut;
  t389[0ULL] = X[17ULL];
  tlu2_linear_linear_prelookup(&oe_efOut.mField0[0ULL], &oe_efOut.mField1[0ULL],
    &oe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t48 = oe_efOut;
  tlu2_2d_linear_linear_value(&pe_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t48.mField0[0ULL], &t48.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t288[0ULL], &t291[0ULL], &t63[0ULL]);
  t472_idx_0 = pe_efOut[0];
  t498 = t472_idx_0;
  t389[0ULL] = X[20ULL];
  tlu2_linear_linear_prelookup(&qe_efOut.mField0[0ULL], &qe_efOut.mField1[0ULL],
    &qe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t389[0ULL],
    &t288[0ULL], &t63[0ULL]);
  t48 = qe_efOut;
  t389[0ULL] = X[19ULL];
  tlu2_linear_linear_prelookup(&re_efOut.mField0[0ULL], &re_efOut.mField1[0ULL],
    &re_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t18 = re_efOut;
  tlu2_2d_linear_linear_value(&se_efOut[0ULL], &t48.mField0[0ULL], &t48.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t288[0ULL], &t291[0ULL], &t63[0ULL]);
  t472_idx_0 = se_efOut[0];
  t389[0ULL] = X[32ULL];
  tlu2_linear_linear_prelookup(&te_efOut.mField0[0ULL], &te_efOut.mField1[0ULL],
    &te_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t389[0ULL],
    &t288[0ULL], &t63[0ULL]);
  t18 = te_efOut;
  t389[0ULL] = X[31ULL];
  tlu2_linear_linear_prelookup(&ue_efOut.mField0[0ULL], &ue_efOut.mField1[0ULL],
    &ue_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t389[0ULL],
    &t291[0ULL], &t63[0ULL]);
  t48 = ue_efOut;
  tlu2_2d_linear_linear_value(&ve_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t48.mField0[0ULL], &t48.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t288[0ULL], &t291[0ULL], &t63[0ULL]);
  t389[0] = ve_efOut[0];
  t500 = t389[0ULL];
  t413[0ULL] = X[0ULL] - 0.01;
  t413[1ULL] = 950.0 - X[0ULL];
  t413[2ULL] = X[42ULL];
  t413[3ULL] = 4000.0 - X[42ULL];
  t413[4ULL] = X[43ULL] - 0.01;
  t413[5ULL] = 950.0 - X[43ULL];
  t413[6ULL] = X[44ULL];
  t413[7ULL] = 4000.0 - X[44ULL];
  t413[8ULL] = t488;
  t413[9ULL] = X[48ULL] - 273.16;
  t413[10ULL] = 608.8024 - X[48ULL];
  t413[11ULL] = Steam_Generator_two_phase_fluid_h_sat_vap;
  t413[12ULL] = X[52ULL] - 0.018111;
  t413[13ULL] = 220.64 - X[52ULL];
  t413[14ULL] = X[51ULL] - 273.16;
  t413[15ULL] = 608.8024 - X[51ULL];
  t413[16ULL] = X[49ULL] - 0.01;
  t413[17ULL] = 950.0 - X[49ULL];
  t413[18ULL] = X[50ULL];
  t413[19ULL] = 4000.0 - X[50ULL];
  t413[20ULL] = X[53ULL] - 0.01;
  t413[21ULL] = 950.0 - X[53ULL];
  t413[22ULL] = X[54ULL];
  t413[23ULL] = 4000.0 - X[54ULL];
  t413[24ULL] = intrm_sf_mf_544;
  t413[25ULL] = X[90ULL] - 0.018111;
  t413[26ULL] = 220.64 - X[90ULL];
  t413[27ULL] = X[89ULL] - 273.16;
  t413[28ULL] = 608.8024 - X[89ULL];
  t413[29ULL] = t492;
  t413[30ULL] = X[103ULL] - 0.018111;
  t413[31ULL] = 220.64 - X[103ULL];
  t413[32ULL] = X[102ULL] - 273.16;
  t413[33ULL] = 608.8024 - X[102ULL];
  t413[34ULL] = X[147ULL];
  t413[35ULL] = 4000.0 - X[147ULL];
  t413[36ULL] = t486;
  t413[37ULL] = X[4ULL] - 0.018111;
  t413[38ULL] = 220.64 - X[4ULL];
  t413[39ULL] = X[5ULL] - 273.16;
  t413[40ULL] = 608.8024 - X[5ULL];
  t413[41ULL] = t500;
  t413[42ULL] = X[31ULL] - 0.018111;
  t413[43ULL] = 220.64 - X[31ULL];
  t413[44ULL] = X[32ULL] - 273.16;
  t413[45ULL] = 608.8024 - X[32ULL];
  t413[46ULL] = X[6ULL] - 0.01;
  t413[47ULL] = 950.0 - X[6ULL];
  t413[48ULL] = X[8ULL];
  t413[49ULL] = 4000.0 - X[8ULL];
  t413[50ULL] = t478;
  t413[51ULL] = X[33ULL] - 0.01;
  t413[52ULL] = 950.0 - X[33ULL];
  t413[53ULL] = X[35ULL];
  t413[54ULL] = 4000.0 - X[35ULL];
  t413[55ULL] = intrm_sf_mf_428;
  t413[56ULL] = Fixed_Displacement_Pump_2P_v_out_A;
  t413[57ULL] = t481;
  t413[58ULL] = X[79ULL] - 0.01;
  t413[59ULL] = 950.0 - X[79ULL];
  t413[60ULL] = X[80ULL];
  t413[61ULL] = 4000.0 - X[80ULL];
  t413[62ULL] = intrm_sf_mf_543;
  t413[63ULL] = X[88ULL] - 273.16;
  t413[64ULL] = 608.8024 - X[88ULL];
  t413[65ULL] = intrm_sf_mf_544;
  t413[66ULL] = t492;
  t413[67ULL] = U_idx_3;
  t413[68ULL] = X[105ULL] - 0.018111;
  t413[69ULL] = 220.64 - X[105ULL];
  t413[70ULL] = X[104ULL] - 273.16;
  t413[71ULL] = 608.8024 - X[104ULL];
  t413[72ULL] = t494;
  t413[73ULL] = X[111ULL] - 273.16;
  t413[74ULL] = 608.8024 - X[111ULL];
  t413[75ULL] = Steam_Generator_two_phase_fluid_h_sat_vap;
  t413[76ULL] = intrm_sf_mf_549;
  t413[77ULL] = X[117ULL] - 0.018111;
  t413[78ULL] = 220.64 - X[117ULL];
  t413[79ULL] = X[116ULL] - 273.16;
  t413[80ULL] = 608.8024 - X[116ULL];
  t413[81ULL] = t586;
  t413[82ULL] = X[119ULL] - 0.018111;
  t413[83ULL] = 220.64 - X[119ULL];
  t413[84ULL] = X[118ULL] - 273.16;
  t413[85ULL] = 608.8024 - X[118ULL];
  t413[86ULL] = t594;
  t413[87ULL] = X[15ULL] - 0.018111;
  t413[88ULL] = 220.64 - X[15ULL];
  t413[89ULL] = X[16ULL] - 273.16;
  t413[90ULL] = 608.8024 - X[16ULL];
  t413[91ULL] = U_idx_3;
  t413[92ULL] = intrm_sf_mf_549;
  t413[93ULL] = t498;
  t413[94ULL] = X[17ULL] - 0.018111;
  t413[95ULL] = 220.64 - X[17ULL];
  t413[96ULL] = X[18ULL] - 273.16;
  t413[97ULL] = 608.8024 - X[18ULL];
  t413[98ULL] = t586;
  t413[99ULL] = intrm_sf_mf_544;
  t413[100ULL] = t472_idx_0;
  t413[101ULL] = X[19ULL] - 0.018111;
  t413[102ULL] = 220.64 - X[19ULL];
  t413[103ULL] = X[20ULL] - 273.16;
  t413[104ULL] = 608.8024 - X[20ULL];
  t413[105ULL] = 0.0063674739754068094 / (X[23ULL] == 0.0 ? 1.0E-16 : X[23ULL])
    + t483;
  t413[106ULL] = 0.0063674739754068094 / (X[23ULL] == 0.0 ? 1.0E-16 : X[23ULL])
    + t475;
  t413[107ULL] = X[21ULL] - 0.01;
  t413[108ULL] = 950.0 - X[21ULL];
  t413[109ULL] = X[22ULL];
  t413[110ULL] = 4000.0 - X[22ULL];
  t413[111ULL] = X[99ULL];
  t413[112ULL] = 4000.0 - X[99ULL];
  t413[113ULL] = X[148ULL];
  t413[114ULL] = 4000.0 - X[148ULL];
  t413[115ULL] = Simscape_Component_mdot_admitted;
  t413[116ULL] = X[56ULL];
  t413[117ULL] = Simscape_Component_Dp - 0.01;
  t413[118ULL] = 220.64 - X[0ULL];
  t413[119ULL] = X[26ULL];
  t413[120ULL] = 4000.0 - X[26ULL];
  t413[121ULL] = X[27ULL];
  t413[122ULL] = 4000.0 - X[27ULL];
  t413[123ULL] = Check_Valve_2P2_convection_A_v_in;
  t413[124ULL] = t477;
  t413[125ULL] = t479;
  t413[126ULL] = t482;
  t413[127ULL] = t482;
  t413[128ULL] = t485;
  t413[129ULL] = t485;
  t413[130ULL] = t477;
  t413[131ULL] = Pressure_Relief_Valve_2P1_convection_A_v_in;
  t413[132ULL] = Pressure_Relief_Valve_2P1_convection_B_v_in;
  t413[133ULL] = Pressure_Relief_Valve_2P1_convection_B_v_in;
  t413[134ULL] = t484;
  t413[135ULL] = t479;
  t413[136ULL] = Pressure_Relief_Valve_2P1_convection_A_v_in;
  t413[137ULL] = Steam_Drum_v_AV_in;
  t413[138ULL] = Check_Valve_2P2_convection_A_v_in;
  t413[139ULL] = t484;
  t413[140ULL] = t477;
  t413[141ULL] = Steam_Drum_v_AV_in;
  t413[142ULL] = (real_T)intrm_sf_mf_25;
  t413[143ULL] = (real_T)intrm_sf_mf_52;
  t413[144ULL] = (real_T)intrm_sf_mf_431;
  t413[145ULL] = (real_T)intrm_sf_mf_434;
  for (b = 0; b < 146; b++) {
    out.mX[b] = t413[b];
  }

  (void)LC;
  (void)t596;
  return 0;
}
