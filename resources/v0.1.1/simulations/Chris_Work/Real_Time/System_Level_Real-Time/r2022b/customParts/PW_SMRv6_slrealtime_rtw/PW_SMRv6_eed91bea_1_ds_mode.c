/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv6/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_sys_struct.h"
#include "PW_SMRv6_eed91bea_1_ds_mode.h"
#include "PW_SMRv6_eed91bea_1_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_externals.h"
#include "PW_SMRv6_eed91bea_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv6_eed91bea_1_ds_mode(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t731, NeDsMethodOutput *t732)
{
  ETTS0 ad_efOut;
  ETTS0 ae_efOut;
  ETTS0 bc_efOut;
  ETTS0 bf_efOut;
  ETTS0 cc_efOut;
  ETTS0 cd_efOut;
  ETTS0 ce_efOut;
  ETTS0 cf_efOut;
  ETTS0 d_efOut;
  ETTS0 db_efOut;
  ETTS0 de_efOut;
  ETTS0 ec_efOut;
  ETTS0 ed_efOut;
  ETTS0 efOut;
  ETTS0 ef_efOut;
  ETTS0 f_efOut;
  ETTS0 fb_efOut;
  ETTS0 fe_efOut;
  ETTS0 ff_efOut;
  ETTS0 gc_efOut;
  ETTS0 gd_efOut;
  ETTS0 ge_efOut;
  ETTS0 hf_efOut;
  ETTS0 i_efOut;
  ETTS0 ib_efOut;
  ETTS0 ic_efOut;
  ETTS0 ie_efOut;
  ETTS0 if_efOut;
  ETTS0 jc_efOut;
  ETTS0 jd_efOut;
  ETTS0 je_efOut;
  ETTS0 k_efOut;
  ETTS0 kb_efOut;
  ETTS0 kd_efOut;
  ETTS0 kf_efOut;
  ETTS0 lc_efOut;
  ETTS0 le_efOut;
  ETTS0 lf_efOut;
  ETTS0 me_efOut;
  ETTS0 n_efOut;
  ETTS0 nb_efOut;
  ETTS0 nc_efOut;
  ETTS0 nf_efOut;
  ETTS0 o_efOut;
  ETTS0 od_efOut;
  ETTS0 oe_efOut;
  ETTS0 of_efOut;
  ETTS0 pb_efOut;
  ETTS0 pc_efOut;
  ETTS0 pe_efOut;
  ETTS0 rc_efOut;
  ETTS0 re_efOut;
  ETTS0 s_efOut;
  ETTS0 sb_efOut;
  ETTS0 sd_efOut;
  ETTS0 se_efOut;
  ETTS0 t18;
  ETTS0 t19;
  ETTS0 t5;
  ETTS0 t54;
  ETTS0 t55;
  ETTS0 t57;
  ETTS0 t59;
  ETTS0 t60;
  ETTS0 t65;
  ETTS0 t69;
  ETTS0 t70;
  ETTS0 tc_efOut;
  ETTS0 u_efOut;
  ETTS0 ub_efOut;
  ETTS0 uc_efOut;
  ETTS0 ue_efOut;
  ETTS0 ve_efOut;
  ETTS0 w_efOut;
  ETTS0 wb_efOut;
  ETTS0 wc_efOut;
  ETTS0 wd_efOut;
  ETTS0 xe_efOut;
  ETTS0 y_efOut;
  ETTS0 yb_efOut;
  ETTS0 yd_efOut;
  ETTS0 ye_efOut;
  PmIntVector out;
  real_T X[222];
  real_T ab_efOut[1];
  real_T ac_efOut[1];
  real_T af_efOut[1];
  real_T b_efOut[1];
  real_T bb_efOut[1];
  real_T bd_efOut[1];
  real_T be_efOut[1];
  real_T c_efOut[1];
  real_T cb_efOut[1];
  real_T dc_efOut[1];
  real_T dd_efOut[1];
  real_T df_efOut[1];
  real_T e_efOut[1];
  real_T eb_efOut[1];
  real_T ee_efOut[1];
  real_T fc_efOut[1];
  real_T fd_efOut[1];
  real_T g_efOut[1];
  real_T gb_efOut[1];
  real_T gf_efOut[1];
  real_T h_efOut[1];
  real_T hb_efOut[1];
  real_T hc_efOut[1];
  real_T hd_efOut[1];
  real_T he_efOut[1];
  real_T id_efOut[1];
  real_T j_efOut[1];
  real_T jb_efOut[1];
  real_T jf_efOut[1];
  real_T kc_efOut[1];
  real_T ke_efOut[1];
  real_T l_efOut[1];
  real_T lb_efOut[1];
  real_T ld_efOut[1];
  real_T m_efOut[1];
  real_T mb_efOut[1];
  real_T mc_efOut[1];
  real_T md_efOut[1];
  real_T mf_efOut[1];
  real_T nd_efOut[1];
  real_T ne_efOut[1];
  real_T ob_efOut[1];
  real_T oc_efOut[1];
  real_T p_efOut[1];
  real_T pd_efOut[1];
  real_T pf_efOut[1];
  real_T q_efOut[1];
  real_T qb_efOut[1];
  real_T qc_efOut[1];
  real_T qd_efOut[1];
  real_T qe_efOut[1];
  real_T r_efOut[1];
  real_T rb_efOut[1];
  real_T rd_efOut[1];
  real_T sc_efOut[1];
  real_T t552[1];
  real_T t_efOut[1];
  real_T tb_efOut[1];
  real_T td_efOut[1];
  real_T te_efOut[1];
  real_T ud_efOut[1];
  real_T v_efOut[1];
  real_T vb_efOut[1];
  real_T vc_efOut[1];
  real_T vd_efOut[1];
  real_T we_efOut[1];
  real_T x_efOut[1];
  real_T xb_efOut[1];
  real_T xc_efOut[1];
  real_T xd_efOut[1];
  real_T yc_efOut[1];
  real_T Check_Valve_2P2_convection_A_v_in;
  real_T Check_Valve_2P2_convection_B_v_in;
  real_T Condenser_two_phase_fluid_v_out;
  real_T D_idx_0;
  real_T D_idx_1;
  real_T D_idx_2;
  real_T D_idx_3;
  real_T D_idx_4;
  real_T D_idx_5;
  real_T D_idx_6;
  real_T D_idx_7;
  real_T Local_Restriction_2P1_convection_A_v_in;
  real_T Local_Restriction_2P1_p_R;
  real_T Local_Restriction_2P_convection_A_v_in;
  real_T Local_Restriction_2P_convection_B_v_in;
  real_T Local_Restriction_2P_p_R;
  real_T Mass_Energy_Flow_Rate_Sensor_2P1_M;
  real_T Preheating_Pipe_2P_v_A;
  real_T Pressure_Relief_Valve_2P_convection_B_v_in;
  real_T Steam_Drum_v_BV_in;
  real_T Steam_Generator_two_phase_fluid_v_out;
  real_T Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C;
  real_T T_idx_0;
  real_T U_idx_2;
  real_T intrm_sf_mf_475;
  real_T intrm_sf_mf_645;
  real_T intrm_sf_mf_647;
  real_T intrm_sf_mf_649;
  real_T t550_idx_0;
  real_T t553;
  real_T t554;
  real_T t559;
  real_T t560;
  real_T t561;
  real_T t562;
  real_T t563;
  real_T t565;
  real_T t568;
  real_T t571;
  real_T t574;
  real_T t575;
  real_T t576;
  real_T t577;
  real_T t578;
  real_T t579;
  real_T t580;
  real_T t581;
  real_T t582;
  real_T t583;
  real_T t588;
  real_T t589;
  real_T t590;
  real_T t730;
  size_t t357[1];
  size_t t360[1];
  size_t t77[1];
  int32_T t482[163];
  int32_T b;
  boolean_T intrm_sf_mf_25;
  boolean_T intrm_sf_mf_476;
  boolean_T intrm_sf_mf_479;
  boolean_T intrm_sf_mf_52;
  T_idx_0 = t731->mT.mX[0];
  U_idx_2 = t731->mU.mX[2];
  for (b = 0; b < 222; b++) {
    X[b] = t731->mX.mX[b];
  }

  D_idx_0 = t731->mD.mX[0];
  D_idx_1 = t731->mD.mX[1];
  D_idx_2 = t731->mD.mX[2];
  D_idx_3 = t731->mD.mX[3];
  D_idx_4 = t731->mD.mX[4];
  D_idx_5 = t731->mD.mX[5];
  D_idx_6 = t731->mD.mX[6];
  D_idx_7 = t731->mD.mX[7];
  out = t732->mMODE;
  t552[0ULL] = X[0ULL];
  t357[0] = 100ULL;
  t77[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t552[0ULL],
    &t357[0ULL], &t77[0ULL]);
  t69 = efOut;
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t69.mField0[0ULL], &t69.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = b_efOut[0];
  Steam_Drum_v_BV_in = t550_idx_0;
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t69.mField0[0ULL], &t69.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = c_efOut[0];
  Steam_Generator_two_phase_fluid_v_out = t550_idx_0;
  if (X[50ULL] <= Steam_Drum_v_BV_in) {
    Check_Valve_2P2_convection_A_v_in = X[50ULL] / (Steam_Drum_v_BV_in == 0.0 ?
      1.0E-16 : Steam_Drum_v_BV_in) - 1.0;
  } else if (X[50ULL] >= t550_idx_0) {
    Check_Valve_2P2_convection_A_v_in = (X[50ULL] - 4000.0) / (4000.0 -
      t550_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t550_idx_0) + 2.0;
  } else {
    Mass_Energy_Flow_Rate_Sensor_2P1_M = t550_idx_0 - Steam_Drum_v_BV_in;
    Check_Valve_2P2_convection_A_v_in = (X[50ULL] - Steam_Drum_v_BV_in) /
      (Mass_Energy_Flow_Rate_Sensor_2P1_M == 0.0 ? 1.0E-16 :
       Mass_Energy_Flow_Rate_Sensor_2P1_M);
  }

  t552[0ULL] = Check_Valve_2P2_convection_A_v_in;
  t360[0] = 50ULL;
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t65 = d_efOut;
  tlu2_2d_linear_linear_value(&e_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t69.mField0[0ULL], &t69.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = e_efOut[0];
  Check_Valve_2P2_convection_A_v_in = t550_idx_0;
  t552[0ULL] = X[51ULL];
  tlu2_linear_linear_prelookup(&f_efOut.mField0[0ULL], &f_efOut.mField1[0ULL],
    &f_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t552[0ULL],
    &t357[0ULL], &t77[0ULL]);
  t70 = f_efOut;
  tlu2_1d_linear_linear_value(&g_efOut[0ULL], &t70.mField0[0ULL], &t70.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = g_efOut[0];
  t553 = t550_idx_0;
  tlu2_1d_linear_linear_value(&h_efOut[0ULL], &t70.mField0[0ULL], &t70.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = h_efOut[0];
  t554 = t550_idx_0;
  if (X[52ULL] <= t553) {
    Check_Valve_2P2_convection_B_v_in = X[52ULL] / (t553 == 0.0 ? 1.0E-16 : t553)
      - 1.0;
  } else if (X[52ULL] >= t550_idx_0) {
    Check_Valve_2P2_convection_B_v_in = (X[52ULL] - 4000.0) / (4000.0 -
      t550_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t550_idx_0) + 2.0;
  } else {
    t562 = t550_idx_0 - t553;
    Check_Valve_2P2_convection_B_v_in = (X[52ULL] - t553) / (t562 == 0.0 ?
      1.0E-16 : t562);
  }

  t552[0ULL] = Check_Valve_2P2_convection_B_v_in;
  tlu2_linear_linear_prelookup(&i_efOut.mField0[0ULL], &i_efOut.mField1[0ULL],
    &i_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t65 = i_efOut;
  tlu2_2d_linear_linear_value(&j_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t70.mField0[0ULL], &t70.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = j_efOut[0];
  Check_Valve_2P2_convection_B_v_in = t550_idx_0;
  t552[0ULL] = X[6ULL];
  tlu2_linear_linear_prelookup(&k_efOut.mField0[0ULL], &k_efOut.mField1[0ULL],
    &k_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t552[0ULL],
    &t357[0ULL], &t77[0ULL]);
  t54 = k_efOut;
  tlu2_1d_linear_linear_value(&l_efOut[0ULL], &t54.mField0[0ULL], &t54.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = l_efOut[0];
  Condenser_two_phase_fluid_v_out = t550_idx_0;
  tlu2_1d_linear_linear_value(&m_efOut[0ULL], &t54.mField0[0ULL], &t54.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = m_efOut[0];
  Mass_Energy_Flow_Rate_Sensor_2P1_M = t550_idx_0;
  if (X[7ULL] <= Condenser_two_phase_fluid_v_out) {
    Preheating_Pipe_2P_v_A = X[7ULL] / (Condenser_two_phase_fluid_v_out == 0.0 ?
      1.0E-16 : Condenser_two_phase_fluid_v_out) - 1.0;
  } else if (X[7ULL] >= t550_idx_0) {
    Preheating_Pipe_2P_v_A = (X[7ULL] - 4000.0) / (4000.0 - t550_idx_0 == 0.0 ?
      1.0E-16 : 4000.0 - t550_idx_0) + 2.0;
  } else {
    intrm_sf_mf_645 = t550_idx_0 - Condenser_two_phase_fluid_v_out;
    Preheating_Pipe_2P_v_A = (X[7ULL] - Condenser_two_phase_fluid_v_out) /
      (intrm_sf_mf_645 == 0.0 ? 1.0E-16 : intrm_sf_mf_645);
  }

  if (X[8ULL] <= Condenser_two_phase_fluid_v_out) {
    t560 = X[8ULL] / (Condenser_two_phase_fluid_v_out == 0.0 ? 1.0E-16 :
                      Condenser_two_phase_fluid_v_out) - 1.0;
  } else if (X[8ULL] >= t550_idx_0) {
    t560 = (X[8ULL] - 4000.0) / (4000.0 - t550_idx_0 == 0.0 ? 1.0E-16 : 4000.0 -
      t550_idx_0) + 2.0;
  } else {
    intrm_sf_mf_649 = t550_idx_0 - Condenser_two_phase_fluid_v_out;
    t560 = (X[8ULL] - Condenser_two_phase_fluid_v_out) / (intrm_sf_mf_649 == 0.0
      ? 1.0E-16 : intrm_sf_mf_649);
  }

  t552[0ULL] = ((Preheating_Pipe_2P_v_A < 0.0 ? Preheating_Pipe_2P_v_A : 0.0) +
                (t560 < 0.0 ? t560 : 0.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&n_efOut.mField0[0ULL], &n_efOut.mField1[0ULL],
    &n_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t65 = n_efOut;
  t552[0ULL] = X[6ULL];
  tlu2_linear_nearest_prelookup(&o_efOut.mField0[0ULL], &o_efOut.mField1[0ULL],
    &o_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t552[0ULL],
    &t357[0ULL], &t77[0ULL]);
  t60 = o_efOut;
  tlu2_2d_linear_nearest_value(&p_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField10, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = p_efOut[0];
  t559 = t550_idx_0;
  tlu2_2d_linear_nearest_value(&q_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField8, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = q_efOut[0];
  t561 = t550_idx_0;
  tlu2_2d_linear_nearest_value(&r_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField11, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = r_efOut[0];
  t559 = t559 * t561 / (t550_idx_0 == 0.0 ? 1.0E-16 : t550_idx_0);
  t561 = X[9ULL] >= 0.0 ? X[9ULL] : 0.0;
  t562 = X[10ULL] >= 0.0 ? X[10ULL] : 0.0;
  t563 = t559 * t562;
  t576 = t561 + X[67ULL];
  intrm_sf_mf_475 = (t563 + X[67ULL]) / (t576 == 0.0 ? 1.0E-16 : t576);
  if (intrm_sf_mf_475 <= 1.0) {
    t565 = 1.0 - intrm_sf_mf_475 * 0.999999;
  } else {
    t565 = 1.0E-6;
  }

  if (intrm_sf_mf_475 >= 1.0) {
    Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C = intrm_sf_mf_475 * 1.000001
      - 1.0;
  } else {
    Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C = 1.0E-6;
  }

  if (t563 + X[67ULL] >= t561 + X[67ULL]) {
    t577 = t561 + X[67ULL];
    t578 = t563 + X[67ULL];
    intrm_sf_mf_475 = (1.000001 / (t577 == 0.0 ? 1.0E-16 : t577) - 0.999999 /
                       (t578 == 0.0 ? 1.0E-16 : t578)) * X[11ULL];
  } else {
    t579 = t563 + X[67ULL];
    t580 = t561 + X[67ULL];
    intrm_sf_mf_475 = (1.000001 / (t579 == 0.0 ? 1.0E-16 : t579) - 0.999999 /
                       (t580 == 0.0 ? 1.0E-16 : t580)) * X[11ULL];
  }

  t563 = intrm_sf_mf_475 <= 15.0 ? intrm_sf_mf_475 : 15.0;
  t552[0ULL] = Preheating_Pipe_2P_v_A;
  tlu2_linear_linear_prelookup(&s_efOut.mField0[0ULL], &s_efOut.mField1[0ULL],
    &s_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t65 = s_efOut;
  tlu2_2d_linear_linear_value(&t_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t54.mField0[0ULL], &t54.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = t_efOut[0];
  intrm_sf_mf_645 = X[6ULL] * t550_idx_0 * 100.0 + X[7ULL];
  t552[0] = 0.0;
  tlu2_linear_linear_prelookup(&u_efOut.mField0[0ULL], &u_efOut.mField1[0ULL],
    &u_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t18 = u_efOut;
  tlu2_2d_linear_linear_value(&v_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t54.mField0[0ULL], &t54.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = v_efOut[0];
  t582 = (1.0 - pmf_exp(-t563)) * X[66ULL];
  t583 = pmf_exp(-t563) * Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C + t565;
  intrm_sf_mf_25 = (t582 / (t583 == 0.0 ? 1.0E-16 : t583) > ((X[6ULL] *
    t550_idx_0 * 100.0 + Condenser_two_phase_fluid_v_out) - intrm_sf_mf_645) /
                    (t559 == 0.0 ? 1.0E-16 : t559) * 1000.0);
  t552[0] = 1.0;
  tlu2_linear_linear_prelookup(&w_efOut.mField0[0ULL], &w_efOut.mField1[0ULL],
    &w_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t5 = w_efOut;
  tlu2_2d_linear_linear_value(&x_efOut[0ULL], &t5.mField0[0ULL], &t5.mField2
    [0ULL], &t54.mField0[0ULL], &t54.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = x_efOut[0];
  t559 = X[6ULL] * t550_idx_0 * 100.0 + Mass_Energy_Flow_Rate_Sensor_2P1_M;
  t552[0ULL] = ((Preheating_Pipe_2P_v_A > 1.0 ? Preheating_Pipe_2P_v_A : 1.0) +
                (t560 > 1.0 ? t560 : 1.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&y_efOut.mField0[0ULL], &y_efOut.mField1[0ULL],
    &y_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t65 = y_efOut;
  tlu2_2d_linear_nearest_value(&ab_efOut[0ULL], &t65.mField0[0ULL],
    &t65.mField2[0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = ab_efOut[0];
  Condenser_two_phase_fluid_v_out = t550_idx_0;
  tlu2_2d_linear_nearest_value(&bb_efOut[0ULL], &t65.mField0[0ULL],
    &t65.mField2[0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = bb_efOut[0];
  Mass_Energy_Flow_Rate_Sensor_2P1_M = t550_idx_0;
  tlu2_2d_linear_nearest_value(&cb_efOut[0ULL], &t65.mField0[0ULL],
    &t65.mField2[0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = cb_efOut[0];
  Condenser_two_phase_fluid_v_out = Condenser_two_phase_fluid_v_out *
    Mass_Energy_Flow_Rate_Sensor_2P1_M / (t550_idx_0 == 0.0 ? 1.0E-16 :
    t550_idx_0);
  Mass_Energy_Flow_Rate_Sensor_2P1_M = Condenser_two_phase_fluid_v_out * t562;
  Preheating_Pipe_2P_v_A = (X[67ULL] + Mass_Energy_Flow_Rate_Sensor_2P1_M) /
    (t576 == 0.0 ? 1.0E-16 : t576);
  if (Preheating_Pipe_2P_v_A <= 1.0) {
    t562 = 1.0 - Preheating_Pipe_2P_v_A * 0.999999;
  } else {
    t562 = 1.0E-6;
  }

  if (Preheating_Pipe_2P_v_A >= 1.0) {
    t563 = Preheating_Pipe_2P_v_A * 1.000001 - 1.0;
  } else {
    t563 = 1.0E-6;
  }

  if (X[67ULL] + Mass_Energy_Flow_Rate_Sensor_2P1_M >= t561 + X[67ULL]) {
    t588 = t561 + X[67ULL];
    t589 = X[67ULL] + Mass_Energy_Flow_Rate_Sensor_2P1_M;
    Preheating_Pipe_2P_v_A = (1.000001 / (t588 == 0.0 ? 1.0E-16 : t588) -
      0.999999 / (t589 == 0.0 ? 1.0E-16 : t589)) * X[12ULL];
  } else {
    t590 = X[67ULL] + Mass_Energy_Flow_Rate_Sensor_2P1_M;
    t730 = t561 + X[67ULL];
    Preheating_Pipe_2P_v_A = (1.000001 / (t590 == 0.0 ? 1.0E-16 : t590) -
      0.999999 / (t730 == 0.0 ? 1.0E-16 : t730)) * X[12ULL];
  }

  Mass_Energy_Flow_Rate_Sensor_2P1_M = Preheating_Pipe_2P_v_A <= 15.0 ?
    Preheating_Pipe_2P_v_A : 15.0;
  t730 = (1.0 - pmf_exp(-Mass_Energy_Flow_Rate_Sensor_2P1_M)) * X[66ULL];
  Mass_Energy_Flow_Rate_Sensor_2P1_M = pmf_exp
    (-Mass_Energy_Flow_Rate_Sensor_2P1_M) * t563 + t562;
  intrm_sf_mf_52 = (t730 / (Mass_Energy_Flow_Rate_Sensor_2P1_M == 0.0 ? 1.0E-16 :
    Mass_Energy_Flow_Rate_Sensor_2P1_M) < (t559 - intrm_sf_mf_645) /
                    (Condenser_two_phase_fluid_v_out == 0.0 ? 1.0E-16 :
                     Condenser_two_phase_fluid_v_out) * 1000.0);
  t552[0ULL] = t560;
  tlu2_linear_linear_prelookup(&db_efOut.mField0[0ULL], &db_efOut.mField1[0ULL],
    &db_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t65 = db_efOut;
  tlu2_2d_linear_linear_value(&eb_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t54.mField0[0ULL], &t54.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = eb_efOut[0];
  Condenser_two_phase_fluid_v_out = t550_idx_0;
  t552[0ULL] = X[57ULL];
  tlu2_linear_linear_prelookup(&fb_efOut.mField0[0ULL], &fb_efOut.mField1[0ULL],
    &fb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t552[0ULL],
    &t357[0ULL], &t77[0ULL]);
  t54 = fb_efOut;
  tlu2_1d_linear_linear_value(&gb_efOut[0ULL], &t54.mField0[0ULL], &t54.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = gb_efOut[0];
  Mass_Energy_Flow_Rate_Sensor_2P1_M = t550_idx_0;
  tlu2_1d_linear_linear_value(&hb_efOut[0ULL], &t54.mField0[0ULL], &t54.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = hb_efOut[0];
  Preheating_Pipe_2P_v_A = t550_idx_0;
  if (X[58ULL] <= Mass_Energy_Flow_Rate_Sensor_2P1_M) {
    t559 = X[58ULL] / (Mass_Energy_Flow_Rate_Sensor_2P1_M == 0.0 ? 1.0E-16 :
                       Mass_Energy_Flow_Rate_Sensor_2P1_M) - 1.0;
  } else if (X[58ULL] >= t550_idx_0) {
    t559 = (X[58ULL] - 4000.0) / (4000.0 - t550_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t550_idx_0) + 2.0;
  } else {
    t580 = t550_idx_0 - Mass_Energy_Flow_Rate_Sensor_2P1_M;
    t559 = (X[58ULL] - Mass_Energy_Flow_Rate_Sensor_2P1_M) / (t580 == 0.0 ?
      1.0E-16 : t580);
  }

  t552[0ULL] = t559;
  tlu2_linear_linear_prelookup(&ib_efOut.mField0[0ULL], &ib_efOut.mField1[0ULL],
    &ib_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t60 = ib_efOut;
  tlu2_2d_linear_linear_value(&jb_efOut[0ULL], &t60.mField0[0ULL], &t60.mField2
    [0ULL], &t54.mField0[0ULL], &t54.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = jb_efOut[0];
  t559 = t550_idx_0;
  t552[0ULL] = X[61ULL];
  tlu2_linear_linear_prelookup(&kb_efOut.mField0[0ULL], &kb_efOut.mField1[0ULL],
    &kb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t552[0ULL],
    &t357[0ULL], &t77[0ULL]);
  t60 = kb_efOut;
  tlu2_1d_linear_linear_value(&lb_efOut[0ULL], &t60.mField0[0ULL], &t60.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = lb_efOut[0];
  t560 = t550_idx_0;
  tlu2_1d_linear_linear_value(&mb_efOut[0ULL], &t60.mField0[0ULL], &t60.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = mb_efOut[0];
  t561 = t550_idx_0;
  if (X[62ULL] <= t560) {
    t562 = X[62ULL] / (t560 == 0.0 ? 1.0E-16 : t560) - 1.0;
  } else if (X[62ULL] >= t550_idx_0) {
    t562 = (X[62ULL] - 4000.0) / (4000.0 - t550_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t550_idx_0) + 2.0;
  } else {
    t580 = t550_idx_0 - t560;
    t562 = (X[62ULL] - t560) / (t580 == 0.0 ? 1.0E-16 : t580);
  }

  t552[0ULL] = t562;
  tlu2_linear_linear_prelookup(&nb_efOut.mField0[0ULL], &nb_efOut.mField1[0ULL],
    &nb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t59 = nb_efOut;
  tlu2_2d_linear_linear_value(&ob_efOut[0ULL], &t59.mField0[0ULL], &t59.mField2
    [0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = ob_efOut[0];
  t562 = t550_idx_0;
  t552[0ULL] = X[87ULL];
  tlu2_linear_linear_prelookup(&pb_efOut.mField0[0ULL], &pb_efOut.mField1[0ULL],
    &pb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t552[0ULL],
    &t357[0ULL], &t77[0ULL]);
  t57 = pb_efOut;
  tlu2_1d_linear_linear_value(&qb_efOut[0ULL], &t57.mField0[0ULL], &t57.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = qb_efOut[0];
  t563 = t550_idx_0;
  tlu2_1d_linear_linear_value(&rb_efOut[0ULL], &t57.mField0[0ULL], &t57.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = rb_efOut[0];
  intrm_sf_mf_475 = t550_idx_0;
  if (X[88ULL] <= t563) {
    t565 = X[88ULL] / (t563 == 0.0 ? 1.0E-16 : t563) - 1.0;
  } else if (X[88ULL] >= t550_idx_0) {
    t565 = (X[88ULL] - 4000.0) / (4000.0 - t550_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t550_idx_0) + 2.0;
  } else {
    t580 = t550_idx_0 - t563;
    t565 = (X[88ULL] - t563) / (t580 == 0.0 ? 1.0E-16 : t580);
  }

  t552[0ULL] = t565;
  tlu2_linear_linear_prelookup(&sb_efOut.mField0[0ULL], &sb_efOut.mField1[0ULL],
    &sb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t65 = sb_efOut;
  tlu2_2d_linear_linear_value(&tb_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t57.mField0[0ULL], &t57.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = tb_efOut[0];
  t565 = t550_idx_0;
  if (X[95ULL] <= t560) {
    Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C = X[95ULL] / (t560 == 0.0 ?
      1.0E-16 : t560) - 1.0;
  } else if (X[95ULL] >= t561) {
    Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C = (X[95ULL] - 4000.0) /
      (4000.0 - t561 == 0.0 ? 1.0E-16 : 4000.0 - t561) + 2.0;
  } else {
    t580 = t561 - t560;
    Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C = (X[95ULL] - t560) / (t580 ==
      0.0 ? 1.0E-16 : t580);
  }

  t552[0ULL] = Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C;
  tlu2_linear_linear_prelookup(&ub_efOut.mField0[0ULL], &ub_efOut.mField1[0ULL],
    &ub_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t65 = ub_efOut;
  tlu2_2d_linear_linear_value(&vb_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = vb_efOut[0];
  t560 = t550_idx_0;
  if (X[96ULL] <= t563) {
    t561 = X[96ULL] / (t563 == 0.0 ? 1.0E-16 : t563) - 1.0;
  } else if (X[96ULL] >= intrm_sf_mf_475) {
    t561 = (X[96ULL] - 4000.0) / (4000.0 - intrm_sf_mf_475 == 0.0 ? 1.0E-16 :
      4000.0 - intrm_sf_mf_475) + 2.0;
  } else {
    t580 = intrm_sf_mf_475 - t563;
    t561 = (X[96ULL] - t563) / (t580 == 0.0 ? 1.0E-16 : t580);
  }

  t552[0ULL] = t561;
  tlu2_linear_linear_prelookup(&wb_efOut.mField0[0ULL], &wb_efOut.mField1[0ULL],
    &wb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t65 = wb_efOut;
  tlu2_2d_linear_linear_value(&xb_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t57.mField0[0ULL], &t57.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = xb_efOut[0];
  t561 = t550_idx_0;
  intrm_sf_mf_476 = (X[0ULL] >= 35.0);
  if (intrm_sf_mf_476) {
    Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C = X[0ULL] - 35.0;
  } else {
    Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C = 35.0 - X[0ULL];
  }

  intrm_sf_mf_645 = (X[0ULL] + 35.0) / 2.0;
  t568 = intrm_sf_mf_645 * 0.0010000000000000009;
  if (X[101ULL] <= Steam_Drum_v_BV_in) {
    intrm_sf_mf_647 = X[101ULL] / (Steam_Drum_v_BV_in == 0.0 ? 1.0E-16 :
      Steam_Drum_v_BV_in) - 1.0;
  } else if (X[101ULL] >= Steam_Generator_two_phase_fluid_v_out) {
    intrm_sf_mf_647 = (X[101ULL] - 4000.0) / (4000.0 -
      Steam_Generator_two_phase_fluid_v_out == 0.0 ? 1.0E-16 : 4000.0 -
      Steam_Generator_two_phase_fluid_v_out) + 2.0;
  } else {
    t580 = Steam_Generator_two_phase_fluid_v_out - Steam_Drum_v_BV_in;
    intrm_sf_mf_647 = (X[101ULL] - Steam_Drum_v_BV_in) / (t580 == 0.0 ? 1.0E-16 :
      t580);
  }

  t552[0ULL] = intrm_sf_mf_647;
  tlu2_linear_linear_prelookup(&yb_efOut.mField0[0ULL], &yb_efOut.mField1[0ULL],
    &yb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t59 = yb_efOut;
  tlu2_2d_linear_linear_value(&ac_efOut[0ULL], &t59.mField0[0ULL], &t59.mField2
    [0ULL], &t69.mField0[0ULL], &t69.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = ac_efOut[0];
  intrm_sf_mf_647 = t550_idx_0;
  if (X[102ULL] <= 1045.1675871910322) {
    Local_Restriction_2P_convection_A_v_in = X[102ULL] / 1045.1675871910322 -
      1.0;
  } else if (X[102ULL] >= 2602.8601302059533) {
    Local_Restriction_2P_convection_A_v_in = (X[102ULL] - 4000.0) /
      1397.1398697940467 + 2.0;
  } else {
    Local_Restriction_2P_convection_A_v_in = (X[102ULL] - 1045.1675871910322) /
      1557.6925430149211;
  }

  t552[0ULL] = Local_Restriction_2P_convection_A_v_in;
  tlu2_linear_linear_prelookup(&bc_efOut.mField0[0ULL], &bc_efOut.mField1[0ULL],
    &bc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t65 = bc_efOut;
  t552[0] = 35.0;
  tlu2_linear_linear_prelookup(&cc_efOut.mField0[0ULL], &cc_efOut.mField1[0ULL],
    &cc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t552[0ULL],
    &t357[0ULL], &t77[0ULL]);
  t60 = cc_efOut;
  tlu2_2d_linear_linear_value(&dc_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = dc_efOut[0];
  t571 = intrm_sf_mf_476 ? intrm_sf_mf_647 : t550_idx_0;
  if (t571 * 0.0025 / (X[100ULL] == 0.0 ? 1.0E-16 : X[100ULL]) <= 0.0) {
    intrm_sf_mf_647 = 0.0;
  } else if (t571 * 0.0025 / (X[100ULL] == 0.0 ? 1.0E-16 : X[100ULL]) >= 1.0) {
    intrm_sf_mf_647 = 1.0;
  } else {
    intrm_sf_mf_647 = t571 * 0.0025 / (X[100ULL] == 0.0 ? 1.0E-16 : X[100ULL]);
  }

  if (X[98ULL] <= Steam_Drum_v_BV_in) {
    Local_Restriction_2P_convection_A_v_in = X[98ULL] / (Steam_Drum_v_BV_in ==
      0.0 ? 1.0E-16 : Steam_Drum_v_BV_in) - 1.0;
  } else if (X[98ULL] >= Steam_Generator_two_phase_fluid_v_out) {
    Local_Restriction_2P_convection_A_v_in = (X[98ULL] - 4000.0) / (4000.0 -
      Steam_Generator_two_phase_fluid_v_out == 0.0 ? 1.0E-16 : 4000.0 -
      Steam_Generator_two_phase_fluid_v_out) + 2.0;
  } else {
    t580 = Steam_Generator_two_phase_fluid_v_out - Steam_Drum_v_BV_in;
    Local_Restriction_2P_convection_A_v_in = (X[98ULL] - Steam_Drum_v_BV_in) /
      (t580 == 0.0 ? 1.0E-16 : t580);
  }

  t552[0ULL] = Local_Restriction_2P_convection_A_v_in;
  tlu2_linear_linear_prelookup(&ec_efOut.mField0[0ULL], &ec_efOut.mField1[0ULL],
    &ec_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t55 = ec_efOut;
  tlu2_2d_linear_linear_value(&fc_efOut[0ULL], &t55.mField0[0ULL], &t55.mField2
    [0ULL], &t69.mField0[0ULL], &t69.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = fc_efOut[0];
  Local_Restriction_2P_convection_A_v_in = t550_idx_0;
  if (X[99ULL] <= 1045.1675871910322) {
    t571 = X[99ULL] / 1045.1675871910322 - 1.0;
  } else if (X[99ULL] >= 2602.8601302059533) {
    t571 = (X[99ULL] - 4000.0) / 1397.1398697940467 + 2.0;
  } else {
    t571 = (X[99ULL] - 1045.1675871910322) / 1557.6925430149211;
  }

  t552[0ULL] = t571;
  tlu2_linear_linear_prelookup(&gc_efOut.mField0[0ULL], &gc_efOut.mField1[0ULL],
    &gc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t65 = gc_efOut;
  tlu2_2d_linear_linear_value(&hc_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = hc_efOut[0];
  Local_Restriction_2P_convection_B_v_in = t550_idx_0;
  t730 = fabs(X[100ULL]);
  t571 = (intrm_sf_mf_476 ? X[0ULL] : 35.0) - (1.0 - intrm_sf_mf_647) * (X
    [106ULL] * X[106ULL] / 2.0 / (t730 == 0.0 ? 1.0E-16 : t730)) * 1.0025E-5;
  Local_Restriction_2P_p_R = Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C /
    (t568 == 0.0 ? 1.0E-16 : t568);
  intrm_sf_mf_647 = Local_Restriction_2P_p_R * Local_Restriction_2P_p_R * 3.0 -
    Local_Restriction_2P_p_R * Local_Restriction_2P_p_R *
    Local_Restriction_2P_p_R * 2.0;
  if (Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C <= 0.0) {
    Local_Restriction_2P_p_R = intrm_sf_mf_645;
  } else if (Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C >= t568) {
    Local_Restriction_2P_p_R = t571;
  } else {
    Local_Restriction_2P_p_R = (1.0 - intrm_sf_mf_647) * intrm_sf_mf_645 + t571 *
      intrm_sf_mf_647;
  }

  intrm_sf_mf_476 = (X[57ULL] <= 32.0);
  if (intrm_sf_mf_476) {
    Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C = 32.0 - X[57ULL];
  } else {
    Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C = X[57ULL] - 32.0;
  }

  intrm_sf_mf_645 = (X[57ULL] + 32.0) / 2.0;
  t568 = intrm_sf_mf_645 * 0.0010000000000000009;
  if (X[110ULL] <= 1021.2772792641167) {
    intrm_sf_mf_647 = X[110ULL] / 1021.2772792641167 - 1.0;
  } else if (X[110ULL] >= 2603.1447338066746) {
    intrm_sf_mf_647 = (X[110ULL] - 4000.0) / 1396.8552661933254 + 2.0;
  } else {
    intrm_sf_mf_647 = (X[110ULL] - 1021.2772792641167) / 1581.8674545425579;
  }

  t552[0ULL] = intrm_sf_mf_647;
  tlu2_linear_linear_prelookup(&ic_efOut.mField0[0ULL], &ic_efOut.mField1[0ULL],
    &ic_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t59 = ic_efOut;
  t552[0] = 32.0;
  tlu2_linear_linear_prelookup(&jc_efOut.mField0[0ULL], &jc_efOut.mField1[0ULL],
    &jc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t552[0ULL],
    &t357[0ULL], &t77[0ULL]);
  t55 = jc_efOut;
  tlu2_2d_linear_linear_value(&kc_efOut[0ULL], &t59.mField0[0ULL], &t59.mField2
    [0ULL], &t55.mField0[0ULL], &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = kc_efOut[0];
  intrm_sf_mf_647 = t550_idx_0;
  if (X[111ULL] <= Mass_Energy_Flow_Rate_Sensor_2P1_M) {
    t571 = X[111ULL] / (Mass_Energy_Flow_Rate_Sensor_2P1_M == 0.0 ? 1.0E-16 :
                        Mass_Energy_Flow_Rate_Sensor_2P1_M) - 1.0;
  } else if (X[111ULL] >= Preheating_Pipe_2P_v_A) {
    t571 = (X[111ULL] - 4000.0) / (4000.0 - Preheating_Pipe_2P_v_A == 0.0 ?
      1.0E-16 : 4000.0 - Preheating_Pipe_2P_v_A) + 2.0;
  } else {
    t580 = Preheating_Pipe_2P_v_A - Mass_Energy_Flow_Rate_Sensor_2P1_M;
    t571 = (X[111ULL] - Mass_Energy_Flow_Rate_Sensor_2P1_M) / (t580 == 0.0 ?
      1.0E-16 : t580);
  }

  t552[0ULL] = t571;
  tlu2_linear_linear_prelookup(&lc_efOut.mField0[0ULL], &lc_efOut.mField1[0ULL],
    &lc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t65 = lc_efOut;
  tlu2_2d_linear_linear_value(&mc_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t54.mField0[0ULL], &t54.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = mc_efOut[0];
  Preheating_Pipe_2P_v_A = intrm_sf_mf_476 ? intrm_sf_mf_647 : t550_idx_0;
  if (Preheating_Pipe_2P_v_A * 0.00025 / (X[109ULL] == 0.0 ? 1.0E-16 : X[109ULL])
      <= 0.0) {
    Mass_Energy_Flow_Rate_Sensor_2P1_M = 0.0;
  } else if (Preheating_Pipe_2P_v_A * 0.00025 / (X[109ULL] == 0.0 ? 1.0E-16 : X
              [109ULL]) >= 1.0) {
    Mass_Energy_Flow_Rate_Sensor_2P1_M = 1.0;
  } else {
    Mass_Energy_Flow_Rate_Sensor_2P1_M = Preheating_Pipe_2P_v_A * 0.00025 / (X
      [109ULL] == 0.0 ? 1.0E-16 : X[109ULL]);
  }

  if (X[108ULL] <= 1021.2772792641167) {
    Preheating_Pipe_2P_v_A = X[108ULL] / 1021.2772792641167 - 1.0;
  } else if (X[108ULL] >= 2603.1447338066746) {
    Preheating_Pipe_2P_v_A = (X[108ULL] - 4000.0) / 1396.8552661933254 + 2.0;
  } else {
    Preheating_Pipe_2P_v_A = (X[108ULL] - 1021.2772792641167) /
      1581.8674545425579;
  }

  t552[0ULL] = Preheating_Pipe_2P_v_A;
  tlu2_linear_linear_prelookup(&nc_efOut.mField0[0ULL], &nc_efOut.mField1[0ULL],
    &nc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t54 = nc_efOut;
  tlu2_2d_linear_linear_value(&oc_efOut[0ULL], &t54.mField0[0ULL], &t54.mField2
    [0ULL], &t55.mField0[0ULL], &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = oc_efOut[0];
  Local_Restriction_2P1_convection_A_v_in = t550_idx_0;
  t730 = fabs(X[109ULL]);
  Preheating_Pipe_2P_v_A = (intrm_sf_mf_476 ? 32.0 : X[57ULL]) - (1.0 -
    Mass_Energy_Flow_Rate_Sensor_2P1_M) * (X[115ULL] * X[115ULL] / 2.0 / (t730 ==
    0.0 ? 1.0E-16 : t730)) * 1.0002500000000001E-5;
  Local_Restriction_2P1_p_R = Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C /
    (t568 == 0.0 ? 1.0E-16 : t568);
  Mass_Energy_Flow_Rate_Sensor_2P1_M = Local_Restriction_2P1_p_R *
    Local_Restriction_2P1_p_R * 3.0 - Local_Restriction_2P1_p_R *
    Local_Restriction_2P1_p_R * Local_Restriction_2P1_p_R * 2.0;
  if (Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C <= 0.0) {
    Local_Restriction_2P1_p_R = intrm_sf_mf_645;
  } else if (Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C >= t568) {
    Local_Restriction_2P1_p_R = Preheating_Pipe_2P_v_A;
  } else {
    Local_Restriction_2P1_p_R = (1.0 - Mass_Energy_Flow_Rate_Sensor_2P1_M) *
      intrm_sf_mf_645 + Preheating_Pipe_2P_v_A *
      Mass_Energy_Flow_Rate_Sensor_2P1_M;
  }

  if (X[176ULL] <= t563) {
    Preheating_Pipe_2P_v_A = X[176ULL] / (t563 == 0.0 ? 1.0E-16 : t563) - 1.0;
  } else if (X[176ULL] >= intrm_sf_mf_475) {
    Preheating_Pipe_2P_v_A = (X[176ULL] - 4000.0) / (4000.0 - intrm_sf_mf_475 ==
      0.0 ? 1.0E-16 : 4000.0 - intrm_sf_mf_475) + 2.0;
  } else {
    t580 = intrm_sf_mf_475 - t563;
    Preheating_Pipe_2P_v_A = (X[176ULL] - t563) / (t580 == 0.0 ? 1.0E-16 : t580);
  }

  t552[0ULL] = Preheating_Pipe_2P_v_A;
  tlu2_linear_linear_prelookup(&pc_efOut.mField0[0ULL], &pc_efOut.mField1[0ULL],
    &pc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t65 = pc_efOut;
  tlu2_2d_linear_linear_value(&qc_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t57.mField0[0ULL], &t57.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = qc_efOut[0];
  Preheating_Pipe_2P_v_A = t550_idx_0;
  if (X[177ULL] <= t553) {
    t563 = X[177ULL] / (t553 == 0.0 ? 1.0E-16 : t553) - 1.0;
  } else if (X[177ULL] >= t554) {
    t563 = (X[177ULL] - 4000.0) / (4000.0 - t554 == 0.0 ? 1.0E-16 : 4000.0 -
      t554) + 2.0;
  } else {
    t580 = t554 - t553;
    t563 = (X[177ULL] - t553) / (t580 == 0.0 ? 1.0E-16 : t580);
  }

  t552[0ULL] = t563;
  tlu2_linear_linear_prelookup(&rc_efOut.mField0[0ULL], &rc_efOut.mField1[0ULL],
    &rc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t19 = rc_efOut;
  tlu2_2d_linear_linear_value(&sc_efOut[0ULL], &t19.mField0[0ULL], &t19.mField2
    [0ULL], &t70.mField0[0ULL], &t70.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = sc_efOut[0];
  t553 = t550_idx_0;
  if (X[178ULL] <= 1116.244310015441) {
    t554 = X[178ULL] / 1116.244310015441 - 1.0;
  } else if (X[178ULL] >= 2599.6003881396355) {
    t554 = (X[178ULL] - 4000.0) / 1400.3996118603645 + 2.0;
  } else {
    t554 = (X[178ULL] - 1116.244310015441) / 1483.3560781241945;
  }

  t552[0ULL] = t554;
  tlu2_linear_linear_prelookup(&tc_efOut.mField0[0ULL], &tc_efOut.mField1[0ULL],
    &tc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t55 = tc_efOut;
  t552[0] = 45.0;
  tlu2_linear_linear_prelookup(&uc_efOut.mField0[0ULL], &uc_efOut.mField1[0ULL],
    &uc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t552[0ULL],
    &t357[0ULL], &t77[0ULL]);
  t65 = uc_efOut;
  tlu2_2d_linear_linear_value(&vc_efOut[0ULL], &t55.mField0[0ULL], &t55.mField2
    [0ULL], &t65.mField0[0ULL], &t65.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = vc_efOut[0];
  Pressure_Relief_Valve_2P_convection_B_v_in = t550_idx_0;
  t552[0ULL] = X[126ULL];
  tlu2_linear_linear_prelookup(&wc_efOut.mField0[0ULL], &wc_efOut.mField1[0ULL],
    &wc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t552[0ULL],
    &t357[0ULL], &t77[0ULL]);
  t59 = wc_efOut;
  tlu2_1d_linear_linear_value(&xc_efOut[0ULL], &t59.mField0[0ULL], &t59.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = xc_efOut[0];
  t554 = t550_idx_0;
  tlu2_1d_linear_linear_value(&yc_efOut[0ULL], &t59.mField0[0ULL], &t59.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = yc_efOut[0];
  if (X[127ULL] <= t554) {
    intrm_sf_mf_475 = X[127ULL] / (t554 == 0.0 ? 1.0E-16 : t554) - 1.0;
  } else if (X[127ULL] >= t550_idx_0) {
    intrm_sf_mf_475 = (X[127ULL] - 4000.0) / (4000.0 - t550_idx_0 == 0.0 ?
      1.0E-16 : 4000.0 - t550_idx_0) + 2.0;
  } else {
    t580 = t550_idx_0 - t554;
    intrm_sf_mf_475 = (X[127ULL] - t554) / (t580 == 0.0 ? 1.0E-16 : t580);
  }

  t552[0ULL] = intrm_sf_mf_475;
  tlu2_linear_linear_prelookup(&ad_efOut.mField0[0ULL], &ad_efOut.mField1[0ULL],
    &ad_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t65 = ad_efOut;
  tlu2_2d_linear_linear_value(&bd_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t59.mField0[0ULL], &t59.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = bd_efOut[0];
  t554 = t550_idx_0;
  if (X[188ULL] <= Steam_Drum_v_BV_in) {
    t563 = X[188ULL] / (Steam_Drum_v_BV_in == 0.0 ? 1.0E-16 : Steam_Drum_v_BV_in)
      - 1.0;
  } else if (X[188ULL] >= Steam_Generator_two_phase_fluid_v_out) {
    t563 = (X[188ULL] - 4000.0) / (4000.0 -
      Steam_Generator_two_phase_fluid_v_out == 0.0 ? 1.0E-16 : 4000.0 -
      Steam_Generator_two_phase_fluid_v_out) + 2.0;
  } else {
    t580 = Steam_Generator_two_phase_fluid_v_out - Steam_Drum_v_BV_in;
    t563 = (X[188ULL] - Steam_Drum_v_BV_in) / (t580 == 0.0 ? 1.0E-16 : t580);
  }

  t552[0ULL] = t563;
  tlu2_linear_linear_prelookup(&cd_efOut.mField0[0ULL], &cd_efOut.mField1[0ULL],
    &cd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t65 = cd_efOut;
  tlu2_2d_linear_linear_value(&dd_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t69.mField0[0ULL], &t69.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = dd_efOut[0];
  t563 = t550_idx_0;
  if (X[189ULL] <= Steam_Drum_v_BV_in) {
    intrm_sf_mf_475 = X[189ULL] / (Steam_Drum_v_BV_in == 0.0 ? 1.0E-16 :
      Steam_Drum_v_BV_in) - 1.0;
  } else if (X[189ULL] >= Steam_Generator_two_phase_fluid_v_out) {
    intrm_sf_mf_475 = (X[189ULL] - 4000.0) / (4000.0 -
      Steam_Generator_two_phase_fluid_v_out == 0.0 ? 1.0E-16 : 4000.0 -
      Steam_Generator_two_phase_fluid_v_out) + 2.0;
  } else {
    t580 = Steam_Generator_two_phase_fluid_v_out - Steam_Drum_v_BV_in;
    intrm_sf_mf_475 = (X[189ULL] - Steam_Drum_v_BV_in) / (t580 == 0.0 ? 1.0E-16 :
      t580);
  }

  t552[0ULL] = intrm_sf_mf_475;
  tlu2_linear_linear_prelookup(&ed_efOut.mField0[0ULL], &ed_efOut.mField1[0ULL],
    &ed_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t65 = ed_efOut;
  tlu2_2d_linear_linear_value(&fd_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t69.mField0[0ULL], &t69.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = fd_efOut[0];
  Steam_Drum_v_BV_in = t550_idx_0;
  t552[0ULL] = X[33ULL];
  tlu2_linear_linear_prelookup(&gd_efOut.mField0[0ULL], &gd_efOut.mField1[0ULL],
    &gd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t552[0ULL],
    &t357[0ULL], &t77[0ULL]);
  t59 = gd_efOut;
  tlu2_1d_linear_linear_value(&hd_efOut[0ULL], &t59.mField0[0ULL], &t59.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = hd_efOut[0];
  Steam_Generator_two_phase_fluid_v_out = t550_idx_0;
  tlu2_1d_linear_linear_value(&id_efOut[0ULL], &t59.mField0[0ULL], &t59.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = id_efOut[0];
  intrm_sf_mf_475 = t550_idx_0;
  if (X[34ULL] <= Steam_Generator_two_phase_fluid_v_out) {
    Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C = X[34ULL] /
      (Steam_Generator_two_phase_fluid_v_out == 0.0 ? 1.0E-16 :
       Steam_Generator_two_phase_fluid_v_out) - 1.0;
  } else if (X[34ULL] >= t550_idx_0) {
    Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C = (X[34ULL] - 4000.0) /
      (4000.0 - t550_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t550_idx_0) + 2.0;
  } else {
    t580 = t550_idx_0 - Steam_Generator_two_phase_fluid_v_out;
    Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C = (X[34ULL] -
      Steam_Generator_two_phase_fluid_v_out) / (t580 == 0.0 ? 1.0E-16 : t580);
  }

  if (X[35ULL] <= Steam_Generator_two_phase_fluid_v_out) {
    t568 = X[35ULL] / (Steam_Generator_two_phase_fluid_v_out == 0.0 ? 1.0E-16 :
                       Steam_Generator_two_phase_fluid_v_out) - 1.0;
  } else if (X[35ULL] >= t550_idx_0) {
    t568 = (X[35ULL] - 4000.0) / (4000.0 - t550_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t550_idx_0) + 2.0;
  } else {
    t580 = t550_idx_0 - Steam_Generator_two_phase_fluid_v_out;
    t568 = (X[35ULL] - Steam_Generator_two_phase_fluid_v_out) / (t580 == 0.0 ?
      1.0E-16 : t580);
  }

  t552[0ULL] = ((Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C < 0.0 ?
                 Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C : 0.0) + (t568 <
    0.0 ? t568 : 0.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&jd_efOut.mField0[0ULL], &jd_efOut.mField1[0ULL],
    &jd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t57 = jd_efOut;
  t552[0ULL] = X[33ULL];
  tlu2_linear_nearest_prelookup(&kd_efOut.mField0[0ULL], &kd_efOut.mField1[0ULL],
    &kd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t552[0ULL],
    &t357[0ULL], &t77[0ULL]);
  t60 = kd_efOut;
  tlu2_2d_linear_nearest_value(&ld_efOut[0ULL], &t57.mField0[0ULL],
    &t57.mField2[0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = ld_efOut[0];
  intrm_sf_mf_645 = t550_idx_0;
  tlu2_2d_linear_nearest_value(&md_efOut[0ULL], &t57.mField0[0ULL],
    &t57.mField2[0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = md_efOut[0];
  intrm_sf_mf_647 = t550_idx_0;
  tlu2_2d_linear_nearest_value(&nd_efOut[0ULL], &t57.mField0[0ULL],
    &t57.mField2[0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = nd_efOut[0];
  intrm_sf_mf_645 = intrm_sf_mf_645 * intrm_sf_mf_647 / (t550_idx_0 == 0.0 ?
    1.0E-16 : t550_idx_0);
  intrm_sf_mf_647 = X[37ULL] >= 0.0 ? X[37ULL] : 0.0;
  t571 = X[38ULL] >= 0.0 ? X[38ULL] : 0.0;
  Mass_Energy_Flow_Rate_Sensor_2P1_M = intrm_sf_mf_647 + X[198ULL];
  t580 = (intrm_sf_mf_647 + X[198ULL]) * (1.0 - pmf_exp(-X[36ULL] /
    (Mass_Energy_Flow_Rate_Sensor_2P1_M == 0.0 ? 1.0E-16 :
     Mass_Energy_Flow_Rate_Sensor_2P1_M)));
  t730 = intrm_sf_mf_645 * t571 + X[198ULL];
  intrm_sf_mf_649 = t580 / (t730 == 0.0 ? 1.0E-16 : t730);
  t552[0ULL] = Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C;
  tlu2_linear_linear_prelookup(&od_efOut.mField0[0ULL], &od_efOut.mField1[0ULL],
    &od_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t65 = od_efOut;
  tlu2_2d_linear_linear_value(&pd_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t59.mField0[0ULL], &t59.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = pd_efOut[0];
  t574 = X[33ULL] * t550_idx_0 * 100.0 + X[34ULL];
  tlu2_2d_linear_linear_value(&qd_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t59.mField0[0ULL], &t59.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = qd_efOut[0];
  Steam_Generator_two_phase_fluid_v_out = ((X[33ULL] * t550_idx_0 * 100.0 +
    Steam_Generator_two_phase_fluid_v_out) - t574) / (intrm_sf_mf_645 == 0.0 ?
    1.0E-16 : intrm_sf_mf_645);
  intrm_sf_mf_645 = (1.0 - pmf_exp(-(intrm_sf_mf_649 <= 15.0 ? intrm_sf_mf_649 :
    15.0))) * X[197ULL];
  intrm_sf_mf_476 = (intrm_sf_mf_645 > Steam_Generator_two_phase_fluid_v_out *
                     1000.0);
  tlu2_2d_linear_linear_value(&rd_efOut[0ULL], &t5.mField0[0ULL], &t5.mField2
    [0ULL], &t59.mField0[0ULL], &t59.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = rd_efOut[0];
  intrm_sf_mf_645 = X[33ULL] * t550_idx_0 * 100.0 + intrm_sf_mf_475;
  t552[0ULL] = ((Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C > 1.0 ?
                 Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C : 1.0) + (t568 >
    1.0 ? t568 : 1.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&sd_efOut.mField0[0ULL], &sd_efOut.mField1[0ULL],
    &sd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t54 = sd_efOut;
  tlu2_2d_linear_nearest_value(&td_efOut[0ULL], &t54.mField0[0ULL],
    &t54.mField2[0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = td_efOut[0];
  Steam_Generator_two_phase_fluid_v_out = t550_idx_0;
  tlu2_2d_linear_nearest_value(&ud_efOut[0ULL], &t54.mField0[0ULL],
    &t54.mField2[0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = ud_efOut[0];
  intrm_sf_mf_475 = t550_idx_0;
  tlu2_2d_linear_nearest_value(&vd_efOut[0ULL], &t54.mField0[0ULL],
    &t54.mField2[0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = vd_efOut[0];
  Steam_Generator_two_phase_fluid_v_out = Steam_Generator_two_phase_fluid_v_out *
    intrm_sf_mf_475 / (t550_idx_0 == 0.0 ? 1.0E-16 : t550_idx_0);
  t580 = (intrm_sf_mf_647 + X[198ULL]) * (1.0 - pmf_exp(-X[39ULL] /
    (Mass_Energy_Flow_Rate_Sensor_2P1_M == 0.0 ? 1.0E-16 :
     Mass_Energy_Flow_Rate_Sensor_2P1_M)));
  t730 = X[198ULL] + Steam_Generator_two_phase_fluid_v_out * t571;
  intrm_sf_mf_475 = t580 / (t730 == 0.0 ? 1.0E-16 : t730);
  Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C = intrm_sf_mf_475 <= 15.0 ?
    intrm_sf_mf_475 : 15.0;
  intrm_sf_mf_475 = (intrm_sf_mf_645 - t574) /
    (Steam_Generator_two_phase_fluid_v_out == 0.0 ? 1.0E-16 :
     Steam_Generator_two_phase_fluid_v_out);
  Steam_Generator_two_phase_fluid_v_out = (1.0 - pmf_exp
    (-Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C)) * X[197ULL];
  intrm_sf_mf_479 = (Steam_Generator_two_phase_fluid_v_out < intrm_sf_mf_475 *
                     1000.0);
  t552[0ULL] = t568;
  tlu2_linear_linear_prelookup(&wd_efOut.mField0[0ULL], &wd_efOut.mField1[0ULL],
    &wd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t5 = wd_efOut;
  tlu2_2d_linear_linear_value(&xd_efOut[0ULL], &t5.mField0[0ULL], &t5.mField2
    [0ULL], &t59.mField0[0ULL], &t59.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t360[0ULL], &t357[0ULL], &t77[0ULL]);
  t550_idx_0 = xd_efOut[0];
  Steam_Generator_two_phase_fluid_v_out = t550_idx_0;
  intrm_sf_mf_475 = U_idx_2 * -24.0 + 24.0;
  Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C = U_idx_2 * 24.0;
  t552[0ULL] = X[5ULL];
  t357[0] = 28ULL;
  tlu2_linear_linear_prelookup(&yd_efOut.mField0[0ULL], &yd_efOut.mField1[0ULL],
    &yd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t552[0ULL],
    &t357[0ULL], &t77[0ULL]);
  t60 = yd_efOut;
  t552[0ULL] = X[4ULL];
  t360[0] = 27ULL;
  tlu2_linear_linear_prelookup(&ae_efOut.mField0[0ULL], &ae_efOut.mField1[0ULL],
    &ae_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t65 = ae_efOut;
  tlu2_2d_linear_linear_value(&be_efOut[0ULL], &t60.mField0[0ULL], &t60.mField2
    [0ULL], &t65.mField0[0ULL], &t65.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t357[0ULL], &t360[0ULL], &t77[0ULL]);
  t550_idx_0 = be_efOut[0];
  intrm_sf_mf_645 = t550_idx_0;
  t552[0ULL] = X[56ULL];
  tlu2_linear_linear_prelookup(&ce_efOut.mField0[0ULL], &ce_efOut.mField1[0ULL],
    &ce_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t552[0ULL],
    &t357[0ULL], &t77[0ULL]);
  t65 = ce_efOut;
  t552[0] = 1.01325;
  tlu2_linear_linear_prelookup(&de_efOut.mField0[0ULL], &de_efOut.mField1[0ULL],
    &de_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t18 = de_efOut;
  tlu2_2d_linear_linear_value(&ee_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t357[0ULL], &t360[0ULL], &t77[0ULL]);
  t550_idx_0 = ee_efOut[0];
  t568 = t550_idx_0;
  t552[0ULL] = X[59ULL];
  tlu2_linear_linear_prelookup(&fe_efOut.mField0[0ULL], &fe_efOut.mField1[0ULL],
    &fe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t552[0ULL],
    &t357[0ULL], &t77[0ULL]);
  t5 = fe_efOut;
  t552[0ULL] = X[60ULL];
  tlu2_linear_linear_prelookup(&ge_efOut.mField0[0ULL], &ge_efOut.mField1[0ULL],
    &ge_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t59 = ge_efOut;
  tlu2_2d_linear_linear_value(&he_efOut[0ULL], &t5.mField0[0ULL], &t5.mField2
    [0ULL], &t59.mField0[0ULL], &t59.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t357[0ULL], &t360[0ULL], &t77[0ULL]);
  t550_idx_0 = he_efOut[0];
  intrm_sf_mf_647 = t550_idx_0;
  t552[0ULL] = X[117ULL];
  tlu2_linear_linear_prelookup(&ie_efOut.mField0[0ULL], &ie_efOut.mField1[0ULL],
    &ie_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t552[0ULL],
    &t357[0ULL], &t77[0ULL]);
  t65 = ie_efOut;
  t552[0] = 150.0;
  tlu2_linear_linear_prelookup(&je_efOut.mField0[0ULL], &je_efOut.mField1[0ULL],
    &je_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t59 = je_efOut;
  tlu2_2d_linear_linear_value(&ke_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t59.mField0[0ULL], &t59.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t357[0ULL], &t360[0ULL], &t77[0ULL]);
  t550_idx_0 = ke_efOut[0];
  t571 = t550_idx_0;
  t552[0ULL] = X[118ULL];
  tlu2_linear_linear_prelookup(&le_efOut.mField0[0ULL], &le_efOut.mField1[0ULL],
    &le_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t552[0ULL],
    &t357[0ULL], &t77[0ULL]);
  t54 = le_efOut;
  t552[0ULL] = X[119ULL];
  tlu2_linear_linear_prelookup(&me_efOut.mField0[0ULL], &me_efOut.mField1[0ULL],
    &me_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t65 = me_efOut;
  tlu2_2d_linear_linear_value(&ne_efOut[0ULL], &t54.mField0[0ULL], &t54.mField2
    [0ULL], &t65.mField0[0ULL], &t65.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t357[0ULL], &t360[0ULL], &t77[0ULL]);
  t550_idx_0 = ne_efOut[0];
  intrm_sf_mf_649 = t550_idx_0;
  t552[0ULL] = X[133ULL];
  tlu2_linear_linear_prelookup(&oe_efOut.mField0[0ULL], &oe_efOut.mField1[0ULL],
    &oe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t552[0ULL],
    &t357[0ULL], &t77[0ULL]);
  t60 = oe_efOut;
  t552[0ULL] = X[134ULL];
  tlu2_linear_linear_prelookup(&pe_efOut.mField0[0ULL], &pe_efOut.mField1[0ULL],
    &pe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t65 = pe_efOut;
  tlu2_2d_linear_linear_value(&qe_efOut[0ULL], &t60.mField0[0ULL], &t60.mField2
    [0ULL], &t65.mField0[0ULL], &t65.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t357[0ULL], &t360[0ULL], &t77[0ULL]);
  t550_idx_0 = qe_efOut[0];
  U_idx_2 = t550_idx_0;
  t552[0ULL] = X[135ULL];
  tlu2_linear_linear_prelookup(&re_efOut.mField0[0ULL], &re_efOut.mField1[0ULL],
    &re_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t552[0ULL],
    &t357[0ULL], &t77[0ULL]);
  t5 = re_efOut;
  t552[0ULL] = X[136ULL];
  tlu2_linear_linear_prelookup(&se_efOut.mField0[0ULL], &se_efOut.mField1[0ULL],
    &se_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t60 = se_efOut;
  tlu2_2d_linear_linear_value(&te_efOut[0ULL], &t5.mField0[0ULL], &t5.mField2
    [0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t357[0ULL], &t360[0ULL], &t77[0ULL]);
  t550_idx_0 = te_efOut[0];
  t574 = t550_idx_0;
  t552[0ULL] = X[142ULL];
  tlu2_linear_linear_prelookup(&ue_efOut.mField0[0ULL], &ue_efOut.mField1[0ULL],
    &ue_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t552[0ULL],
    &t357[0ULL], &t77[0ULL]);
  t65 = ue_efOut;
  t552[0] = 2.0;
  tlu2_linear_linear_prelookup(&ve_efOut.mField0[0ULL], &ve_efOut.mField1[0ULL],
    &ve_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t54 = ve_efOut;
  tlu2_2d_linear_linear_value(&we_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t54.mField0[0ULL], &t54.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t357[0ULL], &t360[0ULL], &t77[0ULL]);
  t550_idx_0 = we_efOut[0];
  t575 = t550_idx_0;
  t552[0ULL] = X[147ULL];
  tlu2_linear_linear_prelookup(&xe_efOut.mField0[0ULL], &xe_efOut.mField1[0ULL],
    &xe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t552[0ULL],
    &t357[0ULL], &t77[0ULL]);
  t65 = xe_efOut;
  t552[0ULL] = X[148ULL];
  tlu2_linear_linear_prelookup(&ye_efOut.mField0[0ULL], &ye_efOut.mField1[0ULL],
    &ye_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t54 = ye_efOut;
  tlu2_2d_linear_linear_value(&af_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t54.mField0[0ULL], &t54.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t357[0ULL], &t360[0ULL], &t77[0ULL]);
  t550_idx_0 = af_efOut[0];
  t576 = t550_idx_0;
  t552[0ULL] = X[149ULL];
  tlu2_linear_linear_prelookup(&bf_efOut.mField0[0ULL], &bf_efOut.mField1[0ULL],
    &bf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t552[0ULL],
    &t357[0ULL], &t77[0ULL]);
  t60 = bf_efOut;
  t552[0ULL] = X[150ULL];
  tlu2_linear_linear_prelookup(&cf_efOut.mField0[0ULL], &cf_efOut.mField1[0ULL],
    &cf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t54 = cf_efOut;
  tlu2_2d_linear_linear_value(&df_efOut[0ULL], &t60.mField0[0ULL], &t60.mField2
    [0ULL], &t54.mField0[0ULL], &t54.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t357[0ULL], &t360[0ULL], &t77[0ULL]);
  t550_idx_0 = df_efOut[0];
  t577 = t550_idx_0;
  t552[0ULL] = X[16ULL];
  tlu2_linear_linear_prelookup(&ef_efOut.mField0[0ULL], &ef_efOut.mField1[0ULL],
    &ef_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t552[0ULL],
    &t357[0ULL], &t77[0ULL]);
  t54 = ef_efOut;
  t552[0ULL] = X[15ULL];
  tlu2_linear_linear_prelookup(&ff_efOut.mField0[0ULL], &ff_efOut.mField1[0ULL],
    &ff_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t59 = ff_efOut;
  tlu2_2d_linear_linear_value(&gf_efOut[0ULL], &t54.mField0[0ULL], &t54.mField2
    [0ULL], &t59.mField0[0ULL], &t59.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t357[0ULL], &t360[0ULL], &t77[0ULL]);
  t550_idx_0 = gf_efOut[0];
  t578 = t550_idx_0;
  t552[0ULL] = X[18ULL];
  tlu2_linear_linear_prelookup(&hf_efOut.mField0[0ULL], &hf_efOut.mField1[0ULL],
    &hf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t552[0ULL],
    &t357[0ULL], &t77[0ULL]);
  t60 = hf_efOut;
  t552[0ULL] = X[17ULL];
  tlu2_linear_linear_prelookup(&if_efOut.mField0[0ULL], &if_efOut.mField1[0ULL],
    &if_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t65 = if_efOut;
  tlu2_2d_linear_linear_value(&jf_efOut[0ULL], &t60.mField0[0ULL], &t60.mField2
    [0ULL], &t65.mField0[0ULL], &t65.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t357[0ULL], &t360[0ULL], &t77[0ULL]);
  t550_idx_0 = jf_efOut[0];
  t579 = t550_idx_0;
  t552[0ULL] = X[20ULL];
  tlu2_linear_linear_prelookup(&kf_efOut.mField0[0ULL], &kf_efOut.mField1[0ULL],
    &kf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t552[0ULL],
    &t357[0ULL], &t77[0ULL]);
  t65 = kf_efOut;
  t552[0ULL] = X[19ULL];
  tlu2_linear_linear_prelookup(&lf_efOut.mField0[0ULL], &lf_efOut.mField1[0ULL],
    &lf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t60 = lf_efOut;
  tlu2_2d_linear_linear_value(&mf_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t357[0ULL], &t360[0ULL], &t77[0ULL]);
  t550_idx_0 = mf_efOut[0];
  t552[0ULL] = X[32ULL];
  tlu2_linear_linear_prelookup(&nf_efOut.mField0[0ULL], &nf_efOut.mField1[0ULL],
    &nf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t552[0ULL],
    &t357[0ULL], &t77[0ULL]);
  t60 = nf_efOut;
  t552[0ULL] = X[31ULL];
  tlu2_linear_linear_prelookup(&of_efOut.mField0[0ULL], &of_efOut.mField1[0ULL],
    &of_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t552[0ULL],
    &t360[0ULL], &t77[0ULL]);
  t65 = of_efOut;
  tlu2_2d_linear_linear_value(&pf_efOut[0ULL], &t60.mField0[0ULL], &t60.mField2
    [0ULL], &t65.mField0[0ULL], &t65.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t357[0ULL], &t360[0ULL], &t77[0ULL]);
  t552[0] = pf_efOut[0];
  t581 = t552[0ULL];
  t582 = T_idx_0 - D_idx_1;
  t583 = (t582 - D_idx_2 * 0.33333333333333331) * (t582 - D_idx_2 *
    0.33333333333333331) * D_idx_0 * 0.5 + D_idx_3;
  Mass_Energy_Flow_Rate_Sensor_2P1_M = (D_idx_0 * D_idx_2 * D_idx_2 *
    0.055555555555555552 + (t582 - D_idx_2 * 0.66666666666666663) * D_idx_0 *
    D_idx_2 * 0.33333333333333331) + D_idx_3;
  t580 = T_idx_0 - D_idx_5;
  t730 = (t580 - D_idx_6 * 0.33333333333333331) * (t580 - D_idx_6 *
    0.33333333333333331) * D_idx_4 * 0.5 + D_idx_7;
  t588 = (D_idx_4 * D_idx_6 * D_idx_6 * 0.055555555555555552 + (t580 - D_idx_6 *
           0.66666666666666663) * D_idx_4 * D_idx_6 * 0.33333333333333331) +
    D_idx_7;
  if (t582 <= D_idx_2 * 0.33333333333333331) {
    t589 = D_idx_3;
  } else {
    t589 = t582 <= D_idx_2 * 0.66666666666666663 ? t583 :
      Mass_Energy_Flow_Rate_Sensor_2P1_M;
  }

  if (t582 <= D_idx_2 * 0.33333333333333331) {
    t590 = D_idx_3;
  } else {
    t590 = t582 <= D_idx_2 * 0.66666666666666663 ? t583 :
      Mass_Energy_Flow_Rate_Sensor_2P1_M;
  }

  if (t580 <= D_idx_6 * 0.33333333333333331) {
    t583 = D_idx_7;
  } else {
    t583 = t580 <= D_idx_6 * 0.66666666666666663 ? t730 : t588;
  }

  if (t580 <= D_idx_6 * 0.33333333333333331) {
    Mass_Energy_Flow_Rate_Sensor_2P1_M = D_idx_7;
  } else {
    Mass_Energy_Flow_Rate_Sensor_2P1_M = t580 <= D_idx_6 * 0.66666666666666663 ?
      t730 : t588;
  }

  t482[0ULL] = (int32_T)(intrm_sf_mf_475 < 12.0);
  t482[1ULL] = (int32_T)(intrm_sf_mf_475 >= 12.0);
  t482[2ULL] = (int32_T)(Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C < 12.0);
  t482[3ULL] = (int32_T)(Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C >= 12.0);
  t482[4ULL] = (int32_T)intrm_sf_mf_479;
  t482[5ULL] = (int32_T)(Local_Restriction_2P_p_R <= 950.0);
  t482[6ULL] = (int32_T)(Local_Restriction_2P_p_R >= 0.01);
  t482[7ULL] = (int32_T)(X[107ULL] <= 4000.0);
  t482[8ULL] = (int32_T)(X[107ULL] >= 0.0);
  t482[9ULL] = (int32_T)(X[108ULL] >= 0.0);
  t482[10ULL] = (int32_T)(X[108ULL] <= 4000.0);
  t482[11ULL] = (int32_T)(Local_Restriction_2P1_p_R <= 950.0);
  t482[12ULL] = (int32_T)(Local_Restriction_2P1_p_R >= 0.01);
  t482[13ULL] = (int32_T)(X[116ULL] <= 4000.0);
  t482[14ULL] = (int32_T)(X[116ULL] >= 0.0);
  t482[15ULL] = (int32_T)((t589 > 0.01 ? 0.01 : t589) <= 0.0);
  t482[16ULL] = (int32_T)(t571 > 0.0);
  t482[17ULL] = (int32_T)(X[117ULL] >= 273.16);
  t482[18ULL] = (int32_T)(X[117ULL] <= 608.8024);
  t482[19ULL] = (int32_T)(intrm_sf_mf_649 > 0.0);
  t482[20ULL] = (int32_T)(X[119ULL] >= 0.018111);
  t482[21ULL] = (int32_T)(X[119ULL] <= 220.64);
  t482[22ULL] = (int32_T)(X[118ULL] >= 273.16);
  t482[23ULL] = (int32_T)(X[118ULL] <= 608.8024);
  t482[24ULL] = (int32_T)(U_idx_2 > 0.0);
  t482[25ULL] = (int32_T)(X[134ULL] >= 0.018111);
  t482[26ULL] = (int32_T)(t590 >= 0.01);
  t482[27ULL] = (int32_T)(X[134ULL] <= 220.64);
  t482[28ULL] = (int32_T)(X[133ULL] >= 273.16);
  t482[29ULL] = (int32_T)(X[133ULL] <= 608.8024);
  t482[30ULL] = (int32_T)(t574 > 0.0);
  t482[31ULL] = (int32_T)(X[136ULL] >= 0.018111);
  t482[32ULL] = (int32_T)(X[136ULL] <= 220.64);
  t482[33ULL] = (int32_T)(X[135ULL] >= 273.16);
  t482[34ULL] = (int32_T)(X[135ULL] <= 608.8024);
  t482[35ULL] = (int32_T)(t575 > 0.0);
  t482[36ULL] = (int32_T)(X[142ULL] >= 273.16);
  t482[37ULL] = (int32_T)(t582 <= D_idx_2 * 0.33333333333333331);
  t482[38ULL] = (int32_T)(X[142ULL] <= 608.8024);
  t482[39ULL] = (int32_T)(intrm_sf_mf_647 > 0.0);
  t482[40ULL] = (int32_T)(t576 > 0.0);
  t482[41ULL] = (int32_T)(X[148ULL] >= 0.018111);
  t482[42ULL] = (int32_T)(X[148ULL] <= 220.64);
  t482[43ULL] = (int32_T)(X[147ULL] >= 273.16);
  t482[44ULL] = (int32_T)(X[147ULL] <= 608.8024);
  t482[45ULL] = (int32_T)(t577 > 0.0);
  t482[46ULL] = (int32_T)(X[150ULL] >= 0.018111);
  t482[47ULL] = (int32_T)(X[150ULL] <= 220.64);
  t482[48ULL] = (int32_T)(t582 <= D_idx_2 * 0.66666666666666663);
  t482[49ULL] = (int32_T)(X[149ULL] >= 273.16);
  t482[50ULL] = (int32_T)(X[149ULL] <= 608.8024);
  t482[51ULL] = (int32_T)(t578 > 0.0);
  t482[52ULL] = (int32_T)(X[15ULL] >= 0.018111);
  t482[53ULL] = (int32_T)(X[15ULL] <= 220.64);
  t482[54ULL] = (int32_T)(X[16ULL] >= 273.16);
  t482[55ULL] = (int32_T)(X[16ULL] <= 608.8024);
  t482[56ULL] = (int32_T)(t579 > 0.0);
  t482[57ULL] = (int32_T)((t583 > 0.01 ? 0.01 : t583) <= 0.0);
  t482[58ULL] = (int32_T)(X[17ULL] >= 0.018111);
  t482[59ULL] = (int32_T)(X[17ULL] <= 220.64);
  t482[60ULL] = (int32_T)(X[18ULL] >= 273.16);
  t482[61ULL] = (int32_T)(X[18ULL] <= 608.8024);
  t482[62ULL] = (int32_T)(t550_idx_0 > 0.0);
  t482[63ULL] = (int32_T)(X[19ULL] >= 0.018111);
  t482[64ULL] = (int32_T)(X[19ULL] <= 220.64);
  t482[65ULL] = (int32_T)(X[20ULL] >= 273.16);
  t482[66ULL] = (int32_T)(Mass_Energy_Flow_Rate_Sensor_2P1_M >= 0.01);
  t482[67ULL] = (int32_T)(X[20ULL] <= 608.8024);
  t482[68ULL] = (int32_T)(X[21ULL] >= 0.01);
  t482[69ULL] = (int32_T)(X[21ULL] <= 950.0);
  t482[70ULL] = (int32_T)(X[22ULL] >= 0.0);
  t482[71ULL] = (int32_T)(X[22ULL] <= 4000.0);
  t482[72ULL] = (int32_T)(X[178ULL] >= 0.0);
  t482[73ULL] = (int32_T)(X[178ULL] <= 4000.0);
  t482[74ULL] = (int32_T)(X[0ULL] < 220.64);
  t482[75ULL] = (int32_T)(X[26ULL] >= 0.0);
  t482[76ULL] = (int32_T)(X[26ULL] <= 4000.0);
  t482[77ULL] = (int32_T)(t580 <= D_idx_6 * 0.33333333333333331);
  t482[78ULL] = (int32_T)(X[27ULL] >= 0.0);
  t482[79ULL] = (int32_T)(X[27ULL] <= 4000.0);
  t482[80ULL] = (int32_T)(t581 > 0.0);
  t482[81ULL] = (int32_T)(X[31ULL] >= 0.018111);
  t482[82ULL] = (int32_T)(X[31ULL] <= 220.64);
  t482[83ULL] = (int32_T)(X[32ULL] >= 273.16);
  t482[84ULL] = (int32_T)(X[32ULL] <= 608.8024);
  t482[85ULL] = (int32_T)(X[33ULL] >= 0.01);
  t482[86ULL] = (int32_T)(X[33ULL] <= 950.0);
  t482[87ULL] = (int32_T)(X[35ULL] >= 0.0);
  t482[88ULL] = (int32_T)(t580 <= D_idx_6 * 0.66666666666666663);
  t482[89ULL] = (int32_T)(X[35ULL] <= 4000.0);
  t482[90ULL] = (int32_T)(X[188ULL] >= 0.0);
  t482[91ULL] = (int32_T)(X[188ULL] <= 4000.0);
  t482[92ULL] = (int32_T)(X[126ULL] >= 0.01);
  t482[93ULL] = (int32_T)(X[126ULL] <= 950.0);
  t482[94ULL] = (int32_T)(X[127ULL] >= 0.0);
  t482[95ULL] = (int32_T)(X[127ULL] <= 4000.0);
  t482[96ULL] = (int32_T)(X[189ULL] >= 0.0);
  t482[97ULL] = (int32_T)(Check_Valve_2P2_convection_A_v_in >= 0.0);
  t482[98ULL] = (int32_T)(X[189ULL] <= 4000.0);
  t482[99ULL] = (int32_T)(Check_Valve_2P2_convection_B_v_in >= 0.0);
  t482[100ULL] = (int32_T)(t559 >= 0.0);
  t482[101ULL] = (int32_T)(t562 >= 0.0);
  t482[102ULL] = (int32_T)(Condenser_two_phase_fluid_v_out >= 0.0);
  t482[103ULL] = (int32_T)(t565 >= 0.0);
  t482[104ULL] = (int32_T)(t560 >= 0.0);
  t482[105ULL] = (int32_T)(t561 >= 0.0);
  t482[106ULL] = (int32_T)(Local_Restriction_2P_convection_A_v_in >= 0.0);
  t482[107ULL] = (int32_T)(Local_Restriction_2P_convection_B_v_in >= 0.0);
  t482[108ULL] = (int32_T)(Local_Restriction_2P1_convection_A_v_in >= 0.0);
  t482[109ULL] = (int32_T)(0.0063674739754068094 / (X[23ULL] == 0.0 ? 1.0E-16 :
    X[23ULL]) + Preheating_Pipe_2P_v_A >= 0.0);
  t482[110ULL] = (int32_T)(0.0063674739754068094 / (X[23ULL] == 0.0 ? 1.0E-16 :
    X[23ULL]) + t553 >= 0.0);
  t482[111ULL] = (int32_T)(Pressure_Relief_Valve_2P_convection_B_v_in >= 0.0);
  t482[112ULL] = (int32_T)intrm_sf_mf_25;
  t482[113ULL] = (int32_T)(t554 >= 0.0);
  t482[114ULL] = (int32_T)(X[126ULL] - X[57ULL] > 0.01);
  t482[115ULL] = (int32_T)(t563 >= 0.0);
  t482[116ULL] = (int32_T)(Steam_Drum_v_BV_in >= 0.0);
  t482[117ULL] = (int32_T)intrm_sf_mf_52;
  t482[118ULL] = (int32_T)(Steam_Generator_two_phase_fluid_v_out >= 0.0);
  t482[119ULL] = (int32_T)(X[0ULL] >= 0.01);
  t482[120ULL] = (int32_T)(X[100ULL] >= 0.0);
  t482[121ULL] = (int32_T)(X[0ULL] <= 950.0);
  t482[122ULL] = (int32_T)(X[50ULL] >= 0.0);
  t482[123ULL] = (int32_T)(X[50ULL] <= 4000.0);
  t482[124ULL] = (int32_T)(X[51ULL] >= 0.01);
  t482[125ULL] = (int32_T)(X[51ULL] <= 950.0);
  t482[126ULL] = (int32_T)(X[52ULL] >= 0.0);
  t482[127ULL] = (int32_T)(X[52ULL] <= 4000.0);
  t482[128ULL] = (int32_T)(intrm_sf_mf_645 > 0.0);
  t482[129ULL] = (int32_T)(X[4ULL] >= 0.018111);
  t482[130ULL] = (int32_T)(X[4ULL] <= 220.64);
  t482[131ULL] = (int32_T)(X[109ULL] >= 0.0);
  t482[132ULL] = (int32_T)(X[5ULL] >= 273.16);
  t482[133ULL] = (int32_T)(X[5ULL] <= 608.8024);
  t482[134ULL] = (int32_T)(X[6ULL] >= 0.01);
  t482[135ULL] = (int32_T)(X[6ULL] <= 950.0);
  t482[136ULL] = (int32_T)(X[8ULL] >= 0.0);
  t482[137ULL] = (int32_T)(X[8ULL] <= 4000.0);
  t482[138ULL] = (int32_T)(t568 > 0.0);
  t482[139ULL] = (int32_T)(X[56ULL] >= 273.16);
  t482[140ULL] = (int32_T)(X[56ULL] <= 608.8024);
  t482[141ULL] = (int32_T)(-X[128ULL] + X[129ULL] >= 0.0);
  t482[142ULL] = (int32_T)(X[60ULL] >= 0.018111);
  t482[143ULL] = (int32_T)(X[60ULL] <= 220.64);
  t482[144ULL] = (int32_T)(X[59ULL] >= 273.16);
  t482[145ULL] = (int32_T)(X[59ULL] <= 608.8024);
  t482[146ULL] = (int32_T)(X[57ULL] >= 0.01);
  t482[147ULL] = (int32_T)(X[57ULL] <= 950.0);
  t482[148ULL] = (int32_T)(X[58ULL] >= 0.0);
  t482[149ULL] = (int32_T)(X[58ULL] <= 4000.0);
  t482[150ULL] = (int32_T)(X[61ULL] >= 0.01);
  t482[151ULL] = (int32_T)(X[61ULL] <= 950.0);
  t482[152ULL] = (int32_T)intrm_sf_mf_476;
  t482[153ULL] = (int32_T)(X[62ULL] >= 0.0);
  t482[154ULL] = (int32_T)(X[62ULL] <= 4000.0);
  t482[155ULL] = (int32_T)(X[87ULL] >= 0.01);
  t482[156ULL] = (int32_T)(X[87ULL] <= 950.0);
  t482[157ULL] = (int32_T)(X[88ULL] >= 0.0);
  t482[158ULL] = (int32_T)(X[88ULL] <= 4000.0);
  t482[159ULL] = (int32_T)(X[98ULL] >= 0.0);
  t482[160ULL] = (int32_T)(X[98ULL] <= 4000.0);
  t482[161ULL] = (int32_T)(X[99ULL] >= 0.0);
  t482[162ULL] = (int32_T)(X[99ULL] <= 4000.0);
  for (b = 0; b < 163; b++) {
    out.mX[b] = t482[b];
  }

  (void)LC;
  (void)t732;
  return 0;
}
