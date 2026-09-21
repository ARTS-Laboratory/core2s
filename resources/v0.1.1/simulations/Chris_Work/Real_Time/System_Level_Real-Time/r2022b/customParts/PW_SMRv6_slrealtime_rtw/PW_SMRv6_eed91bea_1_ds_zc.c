/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv6/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_sys_struct.h"
#include "PW_SMRv6_eed91bea_1_ds_zc.h"
#include "PW_SMRv6_eed91bea_1_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_externals.h"
#include "PW_SMRv6_eed91bea_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv6_eed91bea_1_ds_zc(const NeDynamicSystem *LC, const
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
  PmRealVector out;
  real_T X[222];
  real_T t484[191];
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
  real_T t554[1];
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
  real_T Condenser_two_phase_fluid_convection_B_v_in;
  real_T D_idx_0;
  real_T D_idx_1;
  real_T D_idx_2;
  real_T D_idx_3;
  real_T D_idx_4;
  real_T D_idx_5;
  real_T D_idx_6;
  real_T D_idx_7;
  real_T Fixed_Displacement_Pump_2P_convection_B_v_in;
  real_T Fixed_Displacement_Pump_2P_v_out_A;
  real_T Local_Restriction_2P1_convection_A_v_in;
  real_T Local_Restriction_2P1_p_R;
  real_T Local_Restriction_2P_convection_B_v_in;
  real_T Local_Restriction_2P_p_R;
  real_T Mass_Energy_Flow_Rate_Sensor_2P1_M;
  real_T Preheating_Pipe_2P_v_A;
  real_T Preheating_Pipe_2P_v_B;
  real_T Pressure_Relief_Valve_2P_convection_B_v_in;
  real_T Steam_Drum_v_BV_in;
  real_T Steam_Generator_two_phase_fluid_v_out;
  real_T Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C;
  real_T T_idx_0;
  real_T U_idx_2;
  real_T intrm_sf_mf_459;
  real_T intrm_sf_mf_475;
  real_T intrm_sf_mf_645;
  real_T t553_idx_0;
  real_T t556;
  real_T t557;
  real_T t558;
  real_T t561;
  real_T t563;
  real_T t565;
  real_T t571;
  real_T t572;
  real_T t573;
  real_T t574;
  real_T t576;
  real_T t577;
  real_T t578;
  real_T t579;
  real_T t580;
  real_T t581;
  real_T t582;
  real_T t583;
  real_T t584;
  real_T t591;
  real_T t592;
  real_T t593;
  real_T t728;
  real_T t73;
  size_t t359[1];
  size_t t362[1];
  size_t t79[1];
  int32_T M[163];
  int32_T b;
  boolean_T intrm_sf_mf_25;
  boolean_T intrm_sf_mf_476;
  boolean_T intrm_sf_mf_479;
  boolean_T intrm_sf_mf_52;
  for (b = 0; b < 163; b++) {
    M[b] = t731->mM.mX[b];
  }

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
  out = t732->mZC;
  t554[0ULL] = X[0ULL];
  t359[0] = 100ULL;
  t79[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t554[0ULL],
    &t359[0ULL], &t79[0ULL]);
  t69 = efOut;
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t69.mField0[0ULL], &t69.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = b_efOut[0];
  Steam_Drum_v_BV_in = t553_idx_0;
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t69.mField0[0ULL], &t69.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = c_efOut[0];
  Steam_Generator_two_phase_fluid_v_out = t553_idx_0;
  if (X[50ULL] <= Steam_Drum_v_BV_in) {
    Check_Valve_2P2_convection_A_v_in = X[50ULL] / (Steam_Drum_v_BV_in == 0.0 ?
      1.0E-16 : Steam_Drum_v_BV_in) - 1.0;
  } else if (X[50ULL] >= t553_idx_0) {
    Check_Valve_2P2_convection_A_v_in = (X[50ULL] - 4000.0) / (4000.0 -
      t553_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t553_idx_0) + 2.0;
  } else {
    Mass_Energy_Flow_Rate_Sensor_2P1_M = t553_idx_0 - Steam_Drum_v_BV_in;
    Check_Valve_2P2_convection_A_v_in = (X[50ULL] - Steam_Drum_v_BV_in) /
      (Mass_Energy_Flow_Rate_Sensor_2P1_M == 0.0 ? 1.0E-16 :
       Mass_Energy_Flow_Rate_Sensor_2P1_M);
  }

  t554[0ULL] = Check_Valve_2P2_convection_A_v_in;
  t362[0] = 50ULL;
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t65 = d_efOut;
  tlu2_2d_linear_linear_value(&e_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t69.mField0[0ULL], &t69.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = e_efOut[0];
  Check_Valve_2P2_convection_A_v_in = t553_idx_0;
  t554[0ULL] = X[51ULL];
  tlu2_linear_linear_prelookup(&f_efOut.mField0[0ULL], &f_efOut.mField1[0ULL],
    &f_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t554[0ULL],
    &t359[0ULL], &t79[0ULL]);
  t70 = f_efOut;
  tlu2_1d_linear_linear_value(&g_efOut[0ULL], &t70.mField0[0ULL], &t70.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = g_efOut[0];
  Preheating_Pipe_2P_v_B = t553_idx_0;
  tlu2_1d_linear_linear_value(&h_efOut[0ULL], &t70.mField0[0ULL], &t70.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = h_efOut[0];
  t556 = t553_idx_0;
  if (X[52ULL] <= Preheating_Pipe_2P_v_B) {
    t557 = X[52ULL] / (Preheating_Pipe_2P_v_B == 0.0 ? 1.0E-16 :
                       Preheating_Pipe_2P_v_B) - 1.0;
  } else if (X[52ULL] >= t553_idx_0) {
    t557 = (X[52ULL] - 4000.0) / (4000.0 - t553_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t553_idx_0) + 2.0;
  } else {
    Condenser_two_phase_fluid_convection_B_v_in = t553_idx_0 -
      Preheating_Pipe_2P_v_B;
    t557 = (X[52ULL] - Preheating_Pipe_2P_v_B) /
      (Condenser_two_phase_fluid_convection_B_v_in == 0.0 ? 1.0E-16 :
       Condenser_two_phase_fluid_convection_B_v_in);
  }

  t554[0ULL] = t557;
  tlu2_linear_linear_prelookup(&i_efOut.mField0[0ULL], &i_efOut.mField1[0ULL],
    &i_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t65 = i_efOut;
  tlu2_2d_linear_linear_value(&j_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t70.mField0[0ULL], &t70.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = j_efOut[0];
  t557 = t553_idx_0;
  t554[0ULL] = X[6ULL];
  tlu2_linear_linear_prelookup(&k_efOut.mField0[0ULL], &k_efOut.mField1[0ULL],
    &k_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t554[0ULL],
    &t359[0ULL], &t79[0ULL]);
  t54 = k_efOut;
  tlu2_1d_linear_linear_value(&l_efOut[0ULL], &t54.mField0[0ULL], &t54.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = l_efOut[0];
  t558 = t553_idx_0;
  tlu2_1d_linear_linear_value(&m_efOut[0ULL], &t54.mField0[0ULL], &t54.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = m_efOut[0];
  Mass_Energy_Flow_Rate_Sensor_2P1_M = t553_idx_0;
  if (X[7ULL] <= t558) {
    Preheating_Pipe_2P_v_A = X[7ULL] / (t558 == 0.0 ? 1.0E-16 : t558) - 1.0;
  } else if (X[7ULL] >= t553_idx_0) {
    Preheating_Pipe_2P_v_A = (X[7ULL] - 4000.0) / (4000.0 - t553_idx_0 == 0.0 ?
      1.0E-16 : 4000.0 - t553_idx_0) + 2.0;
  } else {
    intrm_sf_mf_645 = t553_idx_0 - t558;
    Preheating_Pipe_2P_v_A = (X[7ULL] - t558) / (intrm_sf_mf_645 == 0.0 ?
      1.0E-16 : intrm_sf_mf_645);
  }

  if (X[8ULL] <= t558) {
    Fixed_Displacement_Pump_2P_v_out_A = X[8ULL] / (t558 == 0.0 ? 1.0E-16 : t558)
      - 1.0;
  } else if (X[8ULL] >= t553_idx_0) {
    Fixed_Displacement_Pump_2P_v_out_A = (X[8ULL] - 4000.0) / (4000.0 -
      t553_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t553_idx_0) + 2.0;
  } else {
    t574 = t553_idx_0 - t558;
    Fixed_Displacement_Pump_2P_v_out_A = (X[8ULL] - t558) / (t574 == 0.0 ?
      1.0E-16 : t574);
  }

  t554[0ULL] = ((Preheating_Pipe_2P_v_A < 0.0 ? Preheating_Pipe_2P_v_A : 0.0) +
                (Fixed_Displacement_Pump_2P_v_out_A < 0.0 ?
                 Fixed_Displacement_Pump_2P_v_out_A : 0.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&n_efOut.mField0[0ULL], &n_efOut.mField1[0ULL],
    &n_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t65 = n_efOut;
  t554[0ULL] = X[6ULL];
  tlu2_linear_nearest_prelookup(&o_efOut.mField0[0ULL], &o_efOut.mField1[0ULL],
    &o_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t554[0ULL],
    &t359[0ULL], &t79[0ULL]);
  t60 = o_efOut;
  tlu2_2d_linear_nearest_value(&p_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField10, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = p_efOut[0];
  t561 = t553_idx_0;
  tlu2_2d_linear_nearest_value(&q_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField8, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = q_efOut[0];
  t563 = t553_idx_0;
  tlu2_2d_linear_nearest_value(&r_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField11, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = r_efOut[0];
  t561 = t561 * t563 / (t553_idx_0 == 0.0 ? 1.0E-16 : t553_idx_0);
  t563 = X[9ULL] >= 0.0 ? X[9ULL] : 0.0;
  Condenser_two_phase_fluid_convection_B_v_in = X[10ULL] >= 0.0 ? X[10ULL] : 0.0;
  t565 = t561 * Condenser_two_phase_fluid_convection_B_v_in;
  t578 = t563 + X[67ULL];
  intrm_sf_mf_475 = (t565 + X[67ULL]) / (t578 == 0.0 ? 1.0E-16 : t578);
  if (intrm_sf_mf_475 <= 1.0) {
    Fixed_Displacement_Pump_2P_convection_B_v_in = 1.0 - intrm_sf_mf_475 *
      0.999999;
  } else {
    Fixed_Displacement_Pump_2P_convection_B_v_in = 1.0E-6;
  }

  if (intrm_sf_mf_475 >= 1.0) {
    Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C = intrm_sf_mf_475 * 1.000001
      - 1.0;
  } else {
    Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C = 1.0E-6;
  }

  if (t565 + X[67ULL] >= t563 + X[67ULL]) {
    t579 = t563 + X[67ULL];
    t580 = t565 + X[67ULL];
    intrm_sf_mf_475 = (1.000001 / (t579 == 0.0 ? 1.0E-16 : t579) - 0.999999 /
                       (t580 == 0.0 ? 1.0E-16 : t580)) * X[11ULL];
  } else {
    t581 = t565 + X[67ULL];
    t582 = t563 + X[67ULL];
    intrm_sf_mf_475 = (1.000001 / (t581 == 0.0 ? 1.0E-16 : t581) - 0.999999 /
                       (t582 == 0.0 ? 1.0E-16 : t582)) * X[11ULL];
  }

  t565 = intrm_sf_mf_475 <= 15.0 ? intrm_sf_mf_475 : 15.0;
  t554[0ULL] = Preheating_Pipe_2P_v_A;
  tlu2_linear_linear_prelookup(&s_efOut.mField0[0ULL], &s_efOut.mField1[0ULL],
    &s_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t65 = s_efOut;
  tlu2_2d_linear_linear_value(&t_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t54.mField0[0ULL], &t54.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = t_efOut[0];
  intrm_sf_mf_645 = X[6ULL] * t553_idx_0 * 100.0 + X[7ULL];
  t554[0] = 0.0;
  tlu2_linear_linear_prelookup(&u_efOut.mField0[0ULL], &u_efOut.mField1[0ULL],
    &u_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t18 = u_efOut;
  tlu2_2d_linear_linear_value(&v_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t54.mField0[0ULL], &t54.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = v_efOut[0];
  t584 = (1.0 - pmf_exp(-t565)) * X[66ULL];
  t73 = pmf_exp(-t565) * Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C +
    Fixed_Displacement_Pump_2P_convection_B_v_in;
  intrm_sf_mf_25 = (t584 / (t73 == 0.0 ? 1.0E-16 : t73) > ((X[6ULL] * t553_idx_0
    * 100.0 + t558) - intrm_sf_mf_645) / (t561 == 0.0 ? 1.0E-16 : t561) * 1000.0);
  t554[0] = 1.0;
  tlu2_linear_linear_prelookup(&w_efOut.mField0[0ULL], &w_efOut.mField1[0ULL],
    &w_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t5 = w_efOut;
  tlu2_2d_linear_linear_value(&x_efOut[0ULL], &t5.mField0[0ULL], &t5.mField2
    [0ULL], &t54.mField0[0ULL], &t54.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = x_efOut[0];
  t561 = X[6ULL] * t553_idx_0 * 100.0 + Mass_Energy_Flow_Rate_Sensor_2P1_M;
  t554[0ULL] = ((Preheating_Pipe_2P_v_A > 1.0 ? Preheating_Pipe_2P_v_A : 1.0) +
                (Fixed_Displacement_Pump_2P_v_out_A > 1.0 ?
                 Fixed_Displacement_Pump_2P_v_out_A : 1.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&y_efOut.mField0[0ULL], &y_efOut.mField1[0ULL],
    &y_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t65 = y_efOut;
  tlu2_2d_linear_nearest_value(&ab_efOut[0ULL], &t65.mField0[0ULL],
    &t65.mField2[0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = ab_efOut[0];
  t558 = t553_idx_0;
  tlu2_2d_linear_nearest_value(&bb_efOut[0ULL], &t65.mField0[0ULL],
    &t65.mField2[0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = bb_efOut[0];
  Mass_Energy_Flow_Rate_Sensor_2P1_M = t553_idx_0;
  tlu2_2d_linear_nearest_value(&cb_efOut[0ULL], &t65.mField0[0ULL],
    &t65.mField2[0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = cb_efOut[0];
  t558 = t558 * Mass_Energy_Flow_Rate_Sensor_2P1_M / (t553_idx_0 == 0.0 ?
    1.0E-16 : t553_idx_0);
  Mass_Energy_Flow_Rate_Sensor_2P1_M = t558 *
    Condenser_two_phase_fluid_convection_B_v_in;
  Preheating_Pipe_2P_v_A = (X[67ULL] + Mass_Energy_Flow_Rate_Sensor_2P1_M) /
    (t578 == 0.0 ? 1.0E-16 : t578);
  if (Preheating_Pipe_2P_v_A <= 1.0) {
    Condenser_two_phase_fluid_convection_B_v_in = 1.0 - Preheating_Pipe_2P_v_A *
      0.999999;
  } else {
    Condenser_two_phase_fluid_convection_B_v_in = 1.0E-6;
  }

  if (Preheating_Pipe_2P_v_A >= 1.0) {
    t565 = Preheating_Pipe_2P_v_A * 1.000001 - 1.0;
  } else {
    t565 = 1.0E-6;
  }

  if (X[67ULL] + Mass_Energy_Flow_Rate_Sensor_2P1_M >= t563 + X[67ULL]) {
    t593 = t563 + X[67ULL];
    t591 = X[67ULL] + Mass_Energy_Flow_Rate_Sensor_2P1_M;
    Preheating_Pipe_2P_v_A = (1.000001 / (t593 == 0.0 ? 1.0E-16 : t593) -
      0.999999 / (t591 == 0.0 ? 1.0E-16 : t591)) * X[12ULL];
  } else {
    t592 = X[67ULL] + Mass_Energy_Flow_Rate_Sensor_2P1_M;
    t593 = t563 + X[67ULL];
    Preheating_Pipe_2P_v_A = (1.000001 / (t592 == 0.0 ? 1.0E-16 : t592) -
      0.999999 / (t593 == 0.0 ? 1.0E-16 : t593)) * X[12ULL];
  }

  Mass_Energy_Flow_Rate_Sensor_2P1_M = Preheating_Pipe_2P_v_A <= 15.0 ?
    Preheating_Pipe_2P_v_A : 15.0;
  t728 = (1.0 - pmf_exp(-Mass_Energy_Flow_Rate_Sensor_2P1_M)) * X[66ULL];
  Mass_Energy_Flow_Rate_Sensor_2P1_M = pmf_exp
    (-Mass_Energy_Flow_Rate_Sensor_2P1_M) * t565 +
    Condenser_two_phase_fluid_convection_B_v_in;
  intrm_sf_mf_52 = (t728 / (Mass_Energy_Flow_Rate_Sensor_2P1_M == 0.0 ? 1.0E-16 :
    Mass_Energy_Flow_Rate_Sensor_2P1_M) < (t561 - intrm_sf_mf_645) / (t558 ==
    0.0 ? 1.0E-16 : t558) * 1000.0);
  t554[0ULL] = Fixed_Displacement_Pump_2P_v_out_A;
  tlu2_linear_linear_prelookup(&db_efOut.mField0[0ULL], &db_efOut.mField1[0ULL],
    &db_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t65 = db_efOut;
  tlu2_2d_linear_linear_value(&eb_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t54.mField0[0ULL], &t54.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = eb_efOut[0];
  t558 = t553_idx_0;
  t554[0ULL] = X[57ULL];
  tlu2_linear_linear_prelookup(&fb_efOut.mField0[0ULL], &fb_efOut.mField1[0ULL],
    &fb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t554[0ULL],
    &t359[0ULL], &t79[0ULL]);
  t54 = fb_efOut;
  tlu2_1d_linear_linear_value(&gb_efOut[0ULL], &t54.mField0[0ULL], &t54.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = gb_efOut[0];
  Mass_Energy_Flow_Rate_Sensor_2P1_M = t553_idx_0;
  tlu2_1d_linear_linear_value(&hb_efOut[0ULL], &t54.mField0[0ULL], &t54.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = hb_efOut[0];
  Preheating_Pipe_2P_v_A = t553_idx_0;
  if (X[58ULL] <= Mass_Energy_Flow_Rate_Sensor_2P1_M) {
    t561 = X[58ULL] / (Mass_Energy_Flow_Rate_Sensor_2P1_M == 0.0 ? 1.0E-16 :
                       Mass_Energy_Flow_Rate_Sensor_2P1_M) - 1.0;
  } else if (X[58ULL] >= t553_idx_0) {
    t561 = (X[58ULL] - 4000.0) / (4000.0 - t553_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t553_idx_0) + 2.0;
  } else {
    t582 = t553_idx_0 - Mass_Energy_Flow_Rate_Sensor_2P1_M;
    t561 = (X[58ULL] - Mass_Energy_Flow_Rate_Sensor_2P1_M) / (t582 == 0.0 ?
      1.0E-16 : t582);
  }

  t554[0ULL] = t561;
  tlu2_linear_linear_prelookup(&ib_efOut.mField0[0ULL], &ib_efOut.mField1[0ULL],
    &ib_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t60 = ib_efOut;
  tlu2_2d_linear_linear_value(&jb_efOut[0ULL], &t60.mField0[0ULL], &t60.mField2
    [0ULL], &t54.mField0[0ULL], &t54.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = jb_efOut[0];
  t561 = t553_idx_0;
  t554[0ULL] = X[61ULL];
  tlu2_linear_linear_prelookup(&kb_efOut.mField0[0ULL], &kb_efOut.mField1[0ULL],
    &kb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t554[0ULL],
    &t359[0ULL], &t79[0ULL]);
  t60 = kb_efOut;
  tlu2_1d_linear_linear_value(&lb_efOut[0ULL], &t60.mField0[0ULL], &t60.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = lb_efOut[0];
  Fixed_Displacement_Pump_2P_v_out_A = t553_idx_0;
  tlu2_1d_linear_linear_value(&mb_efOut[0ULL], &t60.mField0[0ULL], &t60.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = mb_efOut[0];
  t563 = t553_idx_0;
  if (X[62ULL] <= Fixed_Displacement_Pump_2P_v_out_A) {
    Condenser_two_phase_fluid_convection_B_v_in = X[62ULL] /
      (Fixed_Displacement_Pump_2P_v_out_A == 0.0 ? 1.0E-16 :
       Fixed_Displacement_Pump_2P_v_out_A) - 1.0;
  } else if (X[62ULL] >= t553_idx_0) {
    Condenser_two_phase_fluid_convection_B_v_in = (X[62ULL] - 4000.0) / (4000.0
      - t553_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t553_idx_0) + 2.0;
  } else {
    t582 = t553_idx_0 - Fixed_Displacement_Pump_2P_v_out_A;
    Condenser_two_phase_fluid_convection_B_v_in = (X[62ULL] -
      Fixed_Displacement_Pump_2P_v_out_A) / (t582 == 0.0 ? 1.0E-16 : t582);
  }

  t554[0ULL] = Condenser_two_phase_fluid_convection_B_v_in;
  tlu2_linear_linear_prelookup(&nb_efOut.mField0[0ULL], &nb_efOut.mField1[0ULL],
    &nb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t59 = nb_efOut;
  tlu2_2d_linear_linear_value(&ob_efOut[0ULL], &t59.mField0[0ULL], &t59.mField2
    [0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = ob_efOut[0];
  Condenser_two_phase_fluid_convection_B_v_in = t553_idx_0;
  t554[0ULL] = X[87ULL];
  tlu2_linear_linear_prelookup(&pb_efOut.mField0[0ULL], &pb_efOut.mField1[0ULL],
    &pb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t554[0ULL],
    &t359[0ULL], &t79[0ULL]);
  t57 = pb_efOut;
  tlu2_1d_linear_linear_value(&qb_efOut[0ULL], &t57.mField0[0ULL], &t57.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = qb_efOut[0];
  t565 = t553_idx_0;
  tlu2_1d_linear_linear_value(&rb_efOut[0ULL], &t57.mField0[0ULL], &t57.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = rb_efOut[0];
  intrm_sf_mf_475 = t553_idx_0;
  if (X[88ULL] <= t565) {
    Fixed_Displacement_Pump_2P_convection_B_v_in = X[88ULL] / (t565 == 0.0 ?
      1.0E-16 : t565) - 1.0;
  } else if (X[88ULL] >= t553_idx_0) {
    Fixed_Displacement_Pump_2P_convection_B_v_in = (X[88ULL] - 4000.0) / (4000.0
      - t553_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t553_idx_0) + 2.0;
  } else {
    t582 = t553_idx_0 - t565;
    Fixed_Displacement_Pump_2P_convection_B_v_in = (X[88ULL] - t565) / (t582 ==
      0.0 ? 1.0E-16 : t582);
  }

  t554[0ULL] = Fixed_Displacement_Pump_2P_convection_B_v_in;
  tlu2_linear_linear_prelookup(&sb_efOut.mField0[0ULL], &sb_efOut.mField1[0ULL],
    &sb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t65 = sb_efOut;
  tlu2_2d_linear_linear_value(&tb_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t57.mField0[0ULL], &t57.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = tb_efOut[0];
  Fixed_Displacement_Pump_2P_convection_B_v_in = t553_idx_0;
  if (X[95ULL] <= Fixed_Displacement_Pump_2P_v_out_A) {
    Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C = X[95ULL] /
      (Fixed_Displacement_Pump_2P_v_out_A == 0.0 ? 1.0E-16 :
       Fixed_Displacement_Pump_2P_v_out_A) - 1.0;
  } else if (X[95ULL] >= t563) {
    Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C = (X[95ULL] - 4000.0) /
      (4000.0 - t563 == 0.0 ? 1.0E-16 : 4000.0 - t563) + 2.0;
  } else {
    t582 = t563 - Fixed_Displacement_Pump_2P_v_out_A;
    Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C = (X[95ULL] -
      Fixed_Displacement_Pump_2P_v_out_A) / (t582 == 0.0 ? 1.0E-16 : t582);
  }

  t554[0ULL] = Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C;
  tlu2_linear_linear_prelookup(&ub_efOut.mField0[0ULL], &ub_efOut.mField1[0ULL],
    &ub_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t65 = ub_efOut;
  tlu2_2d_linear_linear_value(&vb_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = vb_efOut[0];
  Fixed_Displacement_Pump_2P_v_out_A = t553_idx_0;
  if (X[96ULL] <= t565) {
    t563 = X[96ULL] / (t565 == 0.0 ? 1.0E-16 : t565) - 1.0;
  } else if (X[96ULL] >= intrm_sf_mf_475) {
    t563 = (X[96ULL] - 4000.0) / (4000.0 - intrm_sf_mf_475 == 0.0 ? 1.0E-16 :
      4000.0 - intrm_sf_mf_475) + 2.0;
  } else {
    t582 = intrm_sf_mf_475 - t565;
    t563 = (X[96ULL] - t565) / (t582 == 0.0 ? 1.0E-16 : t582);
  }

  t554[0ULL] = t563;
  tlu2_linear_linear_prelookup(&wb_efOut.mField0[0ULL], &wb_efOut.mField1[0ULL],
    &wb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t65 = wb_efOut;
  tlu2_2d_linear_linear_value(&xb_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t57.mField0[0ULL], &t57.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = xb_efOut[0];
  t563 = t553_idx_0;
  intrm_sf_mf_476 = (X[0ULL] >= 35.0);
  if (intrm_sf_mf_476) {
    Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C = X[0ULL] - 35.0;
  } else {
    Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C = 35.0 - X[0ULL];
  }

  intrm_sf_mf_645 = (X[0ULL] + 35.0) / 2.0;
  intrm_sf_mf_459 = intrm_sf_mf_645 * 0.0010000000000000009;
  if (X[101ULL] <= Steam_Drum_v_BV_in) {
    t571 = X[101ULL] / (Steam_Drum_v_BV_in == 0.0 ? 1.0E-16 : Steam_Drum_v_BV_in)
      - 1.0;
  } else if (X[101ULL] >= Steam_Generator_two_phase_fluid_v_out) {
    t571 = (X[101ULL] - 4000.0) / (4000.0 -
      Steam_Generator_two_phase_fluid_v_out == 0.0 ? 1.0E-16 : 4000.0 -
      Steam_Generator_two_phase_fluid_v_out) + 2.0;
  } else {
    t582 = Steam_Generator_two_phase_fluid_v_out - Steam_Drum_v_BV_in;
    t571 = (X[101ULL] - Steam_Drum_v_BV_in) / (t582 == 0.0 ? 1.0E-16 : t582);
  }

  t554[0ULL] = t571;
  tlu2_linear_linear_prelookup(&yb_efOut.mField0[0ULL], &yb_efOut.mField1[0ULL],
    &yb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t59 = yb_efOut;
  tlu2_2d_linear_linear_value(&ac_efOut[0ULL], &t59.mField0[0ULL], &t59.mField2
    [0ULL], &t69.mField0[0ULL], &t69.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = ac_efOut[0];
  t571 = t553_idx_0;
  if (X[102ULL] <= 1045.1675871910322) {
    t572 = X[102ULL] / 1045.1675871910322 - 1.0;
  } else if (X[102ULL] >= 2602.8601302059533) {
    t572 = (X[102ULL] - 4000.0) / 1397.1398697940467 + 2.0;
  } else {
    t572 = (X[102ULL] - 1045.1675871910322) / 1557.6925430149211;
  }

  t554[0ULL] = t572;
  tlu2_linear_linear_prelookup(&bc_efOut.mField0[0ULL], &bc_efOut.mField1[0ULL],
    &bc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t65 = bc_efOut;
  t554[0] = 35.0;
  tlu2_linear_linear_prelookup(&cc_efOut.mField0[0ULL], &cc_efOut.mField1[0ULL],
    &cc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t554[0ULL],
    &t359[0ULL], &t79[0ULL]);
  t60 = cc_efOut;
  tlu2_2d_linear_linear_value(&dc_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = dc_efOut[0];
  t573 = intrm_sf_mf_476 ? t571 : t553_idx_0;
  if (t573 * 0.0025 / (X[100ULL] == 0.0 ? 1.0E-16 : X[100ULL]) <= 0.0) {
    t571 = 0.0;
  } else if (t573 * 0.0025 / (X[100ULL] == 0.0 ? 1.0E-16 : X[100ULL]) >= 1.0) {
    t571 = 1.0;
  } else {
    t571 = t573 * 0.0025 / (X[100ULL] == 0.0 ? 1.0E-16 : X[100ULL]);
  }

  if (X[98ULL] <= Steam_Drum_v_BV_in) {
    t572 = X[98ULL] / (Steam_Drum_v_BV_in == 0.0 ? 1.0E-16 : Steam_Drum_v_BV_in)
      - 1.0;
  } else if (X[98ULL] >= Steam_Generator_two_phase_fluid_v_out) {
    t572 = (X[98ULL] - 4000.0) / (4000.0 - Steam_Generator_two_phase_fluid_v_out
      == 0.0 ? 1.0E-16 : 4000.0 - Steam_Generator_two_phase_fluid_v_out) + 2.0;
  } else {
    t582 = Steam_Generator_two_phase_fluid_v_out - Steam_Drum_v_BV_in;
    t572 = (X[98ULL] - Steam_Drum_v_BV_in) / (t582 == 0.0 ? 1.0E-16 : t582);
  }

  t554[0ULL] = t572;
  tlu2_linear_linear_prelookup(&ec_efOut.mField0[0ULL], &ec_efOut.mField1[0ULL],
    &ec_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t55 = ec_efOut;
  tlu2_2d_linear_linear_value(&fc_efOut[0ULL], &t55.mField0[0ULL], &t55.mField2
    [0ULL], &t69.mField0[0ULL], &t69.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = fc_efOut[0];
  t572 = t553_idx_0;
  if (X[99ULL] <= 1045.1675871910322) {
    t573 = X[99ULL] / 1045.1675871910322 - 1.0;
  } else if (X[99ULL] >= 2602.8601302059533) {
    t573 = (X[99ULL] - 4000.0) / 1397.1398697940467 + 2.0;
  } else {
    t573 = (X[99ULL] - 1045.1675871910322) / 1557.6925430149211;
  }

  t554[0ULL] = t573;
  tlu2_linear_linear_prelookup(&gc_efOut.mField0[0ULL], &gc_efOut.mField1[0ULL],
    &gc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t65 = gc_efOut;
  tlu2_2d_linear_linear_value(&hc_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = hc_efOut[0];
  Local_Restriction_2P_convection_B_v_in = t553_idx_0;
  t728 = fabs(X[100ULL]);
  t573 = (intrm_sf_mf_476 ? X[0ULL] : 35.0) - (1.0 - t571) * (X[106ULL] * X
    [106ULL] / 2.0 / (t728 == 0.0 ? 1.0E-16 : t728)) * 1.0025E-5;
  Local_Restriction_2P_p_R = Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C /
    (intrm_sf_mf_459 == 0.0 ? 1.0E-16 : intrm_sf_mf_459);
  t571 = Local_Restriction_2P_p_R * Local_Restriction_2P_p_R * 3.0 -
    Local_Restriction_2P_p_R * Local_Restriction_2P_p_R *
    Local_Restriction_2P_p_R * 2.0;
  if (Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C <= 0.0) {
    Local_Restriction_2P_p_R = intrm_sf_mf_645;
  } else if (Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C >= intrm_sf_mf_459)
  {
    Local_Restriction_2P_p_R = t573;
  } else {
    Local_Restriction_2P_p_R = (1.0 - t571) * intrm_sf_mf_645 + t573 * t571;
  }

  intrm_sf_mf_476 = (X[57ULL] <= 32.0);
  if (intrm_sf_mf_476) {
    Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C = 32.0 - X[57ULL];
  } else {
    Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C = X[57ULL] - 32.0;
  }

  intrm_sf_mf_645 = (X[57ULL] + 32.0) / 2.0;
  intrm_sf_mf_459 = intrm_sf_mf_645 * 0.0010000000000000009;
  if (X[110ULL] <= 1021.2772792641167) {
    t571 = X[110ULL] / 1021.2772792641167 - 1.0;
  } else if (X[110ULL] >= 2603.1447338066746) {
    t571 = (X[110ULL] - 4000.0) / 1396.8552661933254 + 2.0;
  } else {
    t571 = (X[110ULL] - 1021.2772792641167) / 1581.8674545425579;
  }

  t554[0ULL] = t571;
  tlu2_linear_linear_prelookup(&ic_efOut.mField0[0ULL], &ic_efOut.mField1[0ULL],
    &ic_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t59 = ic_efOut;
  t554[0] = 32.0;
  tlu2_linear_linear_prelookup(&jc_efOut.mField0[0ULL], &jc_efOut.mField1[0ULL],
    &jc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t554[0ULL],
    &t359[0ULL], &t79[0ULL]);
  t55 = jc_efOut;
  tlu2_2d_linear_linear_value(&kc_efOut[0ULL], &t59.mField0[0ULL], &t59.mField2
    [0ULL], &t55.mField0[0ULL], &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = kc_efOut[0];
  t571 = t553_idx_0;
  if (X[111ULL] <= Mass_Energy_Flow_Rate_Sensor_2P1_M) {
    t573 = X[111ULL] / (Mass_Energy_Flow_Rate_Sensor_2P1_M == 0.0 ? 1.0E-16 :
                        Mass_Energy_Flow_Rate_Sensor_2P1_M) - 1.0;
  } else if (X[111ULL] >= Preheating_Pipe_2P_v_A) {
    t573 = (X[111ULL] - 4000.0) / (4000.0 - Preheating_Pipe_2P_v_A == 0.0 ?
      1.0E-16 : 4000.0 - Preheating_Pipe_2P_v_A) + 2.0;
  } else {
    t582 = Preheating_Pipe_2P_v_A - Mass_Energy_Flow_Rate_Sensor_2P1_M;
    t573 = (X[111ULL] - Mass_Energy_Flow_Rate_Sensor_2P1_M) / (t582 == 0.0 ?
      1.0E-16 : t582);
  }

  t554[0ULL] = t573;
  tlu2_linear_linear_prelookup(&lc_efOut.mField0[0ULL], &lc_efOut.mField1[0ULL],
    &lc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t65 = lc_efOut;
  tlu2_2d_linear_linear_value(&mc_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t54.mField0[0ULL], &t54.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = mc_efOut[0];
  Preheating_Pipe_2P_v_A = intrm_sf_mf_476 ? t571 : t553_idx_0;
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

  t554[0ULL] = Preheating_Pipe_2P_v_A;
  tlu2_linear_linear_prelookup(&nc_efOut.mField0[0ULL], &nc_efOut.mField1[0ULL],
    &nc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t54 = nc_efOut;
  tlu2_2d_linear_linear_value(&oc_efOut[0ULL], &t54.mField0[0ULL], &t54.mField2
    [0ULL], &t55.mField0[0ULL], &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = oc_efOut[0];
  Local_Restriction_2P1_convection_A_v_in = t553_idx_0;
  t728 = fabs(X[109ULL]);
  Preheating_Pipe_2P_v_A = (intrm_sf_mf_476 ? 32.0 : X[57ULL]) - (1.0 -
    Mass_Energy_Flow_Rate_Sensor_2P1_M) * (X[115ULL] * X[115ULL] / 2.0 / (t728 ==
    0.0 ? 1.0E-16 : t728)) * 1.0002500000000001E-5;
  Local_Restriction_2P1_p_R = Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C /
    (intrm_sf_mf_459 == 0.0 ? 1.0E-16 : intrm_sf_mf_459);
  Mass_Energy_Flow_Rate_Sensor_2P1_M = Local_Restriction_2P1_p_R *
    Local_Restriction_2P1_p_R * 3.0 - Local_Restriction_2P1_p_R *
    Local_Restriction_2P1_p_R * Local_Restriction_2P1_p_R * 2.0;
  if (Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C <= 0.0) {
    Local_Restriction_2P1_p_R = intrm_sf_mf_645;
  } else if (Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C >= intrm_sf_mf_459)
  {
    Local_Restriction_2P1_p_R = Preheating_Pipe_2P_v_A;
  } else {
    Local_Restriction_2P1_p_R = (1.0 - Mass_Energy_Flow_Rate_Sensor_2P1_M) *
      intrm_sf_mf_645 + Preheating_Pipe_2P_v_A *
      Mass_Energy_Flow_Rate_Sensor_2P1_M;
  }

  if (X[176ULL] <= t565) {
    Preheating_Pipe_2P_v_A = X[176ULL] / (t565 == 0.0 ? 1.0E-16 : t565) - 1.0;
  } else if (X[176ULL] >= intrm_sf_mf_475) {
    Preheating_Pipe_2P_v_A = (X[176ULL] - 4000.0) / (4000.0 - intrm_sf_mf_475 ==
      0.0 ? 1.0E-16 : 4000.0 - intrm_sf_mf_475) + 2.0;
  } else {
    t582 = intrm_sf_mf_475 - t565;
    Preheating_Pipe_2P_v_A = (X[176ULL] - t565) / (t582 == 0.0 ? 1.0E-16 : t582);
  }

  t554[0ULL] = Preheating_Pipe_2P_v_A;
  tlu2_linear_linear_prelookup(&pc_efOut.mField0[0ULL], &pc_efOut.mField1[0ULL],
    &pc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t65 = pc_efOut;
  tlu2_2d_linear_linear_value(&qc_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t57.mField0[0ULL], &t57.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = qc_efOut[0];
  Preheating_Pipe_2P_v_A = t553_idx_0;
  if (X[177ULL] <= Preheating_Pipe_2P_v_B) {
    t565 = X[177ULL] / (Preheating_Pipe_2P_v_B == 0.0 ? 1.0E-16 :
                        Preheating_Pipe_2P_v_B) - 1.0;
  } else if (X[177ULL] >= t556) {
    t565 = (X[177ULL] - 4000.0) / (4000.0 - t556 == 0.0 ? 1.0E-16 : 4000.0 -
      t556) + 2.0;
  } else {
    t582 = t556 - Preheating_Pipe_2P_v_B;
    t565 = (X[177ULL] - Preheating_Pipe_2P_v_B) / (t582 == 0.0 ? 1.0E-16 : t582);
  }

  t554[0ULL] = t565;
  tlu2_linear_linear_prelookup(&rc_efOut.mField0[0ULL], &rc_efOut.mField1[0ULL],
    &rc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t19 = rc_efOut;
  tlu2_2d_linear_linear_value(&sc_efOut[0ULL], &t19.mField0[0ULL], &t19.mField2
    [0ULL], &t70.mField0[0ULL], &t70.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = sc_efOut[0];
  Preheating_Pipe_2P_v_B = t553_idx_0;
  if (X[178ULL] <= 1116.244310015441) {
    t556 = X[178ULL] / 1116.244310015441 - 1.0;
  } else if (X[178ULL] >= 2599.6003881396355) {
    t556 = (X[178ULL] - 4000.0) / 1400.3996118603645 + 2.0;
  } else {
    t556 = (X[178ULL] - 1116.244310015441) / 1483.3560781241945;
  }

  t554[0ULL] = t556;
  tlu2_linear_linear_prelookup(&tc_efOut.mField0[0ULL], &tc_efOut.mField1[0ULL],
    &tc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t55 = tc_efOut;
  t554[0] = 45.0;
  tlu2_linear_linear_prelookup(&uc_efOut.mField0[0ULL], &uc_efOut.mField1[0ULL],
    &uc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t554[0ULL],
    &t359[0ULL], &t79[0ULL]);
  t65 = uc_efOut;
  tlu2_2d_linear_linear_value(&vc_efOut[0ULL], &t55.mField0[0ULL], &t55.mField2
    [0ULL], &t65.mField0[0ULL], &t65.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = vc_efOut[0];
  Pressure_Relief_Valve_2P_convection_B_v_in = t553_idx_0;
  t554[0ULL] = X[126ULL];
  tlu2_linear_linear_prelookup(&wc_efOut.mField0[0ULL], &wc_efOut.mField1[0ULL],
    &wc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t554[0ULL],
    &t359[0ULL], &t79[0ULL]);
  t59 = wc_efOut;
  tlu2_1d_linear_linear_value(&xc_efOut[0ULL], &t59.mField0[0ULL], &t59.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = xc_efOut[0];
  t556 = t553_idx_0;
  tlu2_1d_linear_linear_value(&yc_efOut[0ULL], &t59.mField0[0ULL], &t59.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = yc_efOut[0];
  if (X[127ULL] <= t556) {
    intrm_sf_mf_475 = X[127ULL] / (t556 == 0.0 ? 1.0E-16 : t556) - 1.0;
  } else if (X[127ULL] >= t553_idx_0) {
    intrm_sf_mf_475 = (X[127ULL] - 4000.0) / (4000.0 - t553_idx_0 == 0.0 ?
      1.0E-16 : 4000.0 - t553_idx_0) + 2.0;
  } else {
    t582 = t553_idx_0 - t556;
    intrm_sf_mf_475 = (X[127ULL] - t556) / (t582 == 0.0 ? 1.0E-16 : t582);
  }

  t554[0ULL] = intrm_sf_mf_475;
  tlu2_linear_linear_prelookup(&ad_efOut.mField0[0ULL], &ad_efOut.mField1[0ULL],
    &ad_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t65 = ad_efOut;
  tlu2_2d_linear_linear_value(&bd_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t59.mField0[0ULL], &t59.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = bd_efOut[0];
  t556 = t553_idx_0;
  if (X[188ULL] <= Steam_Drum_v_BV_in) {
    t565 = X[188ULL] / (Steam_Drum_v_BV_in == 0.0 ? 1.0E-16 : Steam_Drum_v_BV_in)
      - 1.0;
  } else if (X[188ULL] >= Steam_Generator_two_phase_fluid_v_out) {
    t565 = (X[188ULL] - 4000.0) / (4000.0 -
      Steam_Generator_two_phase_fluid_v_out == 0.0 ? 1.0E-16 : 4000.0 -
      Steam_Generator_two_phase_fluid_v_out) + 2.0;
  } else {
    t582 = Steam_Generator_two_phase_fluid_v_out - Steam_Drum_v_BV_in;
    t565 = (X[188ULL] - Steam_Drum_v_BV_in) / (t582 == 0.0 ? 1.0E-16 : t582);
  }

  t554[0ULL] = t565;
  tlu2_linear_linear_prelookup(&cd_efOut.mField0[0ULL], &cd_efOut.mField1[0ULL],
    &cd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t65 = cd_efOut;
  tlu2_2d_linear_linear_value(&dd_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t69.mField0[0ULL], &t69.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = dd_efOut[0];
  t565 = t553_idx_0;
  if (X[189ULL] <= Steam_Drum_v_BV_in) {
    intrm_sf_mf_475 = X[189ULL] / (Steam_Drum_v_BV_in == 0.0 ? 1.0E-16 :
      Steam_Drum_v_BV_in) - 1.0;
  } else if (X[189ULL] >= Steam_Generator_two_phase_fluid_v_out) {
    intrm_sf_mf_475 = (X[189ULL] - 4000.0) / (4000.0 -
      Steam_Generator_two_phase_fluid_v_out == 0.0 ? 1.0E-16 : 4000.0 -
      Steam_Generator_two_phase_fluid_v_out) + 2.0;
  } else {
    t582 = Steam_Generator_two_phase_fluid_v_out - Steam_Drum_v_BV_in;
    intrm_sf_mf_475 = (X[189ULL] - Steam_Drum_v_BV_in) / (t582 == 0.0 ? 1.0E-16 :
      t582);
  }

  t554[0ULL] = intrm_sf_mf_475;
  tlu2_linear_linear_prelookup(&ed_efOut.mField0[0ULL], &ed_efOut.mField1[0ULL],
    &ed_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t65 = ed_efOut;
  tlu2_2d_linear_linear_value(&fd_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t69.mField0[0ULL], &t69.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = fd_efOut[0];
  Steam_Drum_v_BV_in = t553_idx_0;
  t554[0ULL] = X[33ULL];
  tlu2_linear_linear_prelookup(&gd_efOut.mField0[0ULL], &gd_efOut.mField1[0ULL],
    &gd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t554[0ULL],
    &t359[0ULL], &t79[0ULL]);
  t59 = gd_efOut;
  tlu2_1d_linear_linear_value(&hd_efOut[0ULL], &t59.mField0[0ULL], &t59.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = hd_efOut[0];
  Steam_Generator_two_phase_fluid_v_out = t553_idx_0;
  tlu2_1d_linear_linear_value(&id_efOut[0ULL], &t59.mField0[0ULL], &t59.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = id_efOut[0];
  intrm_sf_mf_475 = t553_idx_0;
  if (X[34ULL] <= Steam_Generator_two_phase_fluid_v_out) {
    Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C = X[34ULL] /
      (Steam_Generator_two_phase_fluid_v_out == 0.0 ? 1.0E-16 :
       Steam_Generator_two_phase_fluid_v_out) - 1.0;
  } else if (X[34ULL] >= t553_idx_0) {
    Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C = (X[34ULL] - 4000.0) /
      (4000.0 - t553_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t553_idx_0) + 2.0;
  } else {
    t582 = t553_idx_0 - Steam_Generator_two_phase_fluid_v_out;
    Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C = (X[34ULL] -
      Steam_Generator_two_phase_fluid_v_out) / (t582 == 0.0 ? 1.0E-16 : t582);
  }

  if (X[35ULL] <= Steam_Generator_two_phase_fluid_v_out) {
    intrm_sf_mf_459 = X[35ULL] / (Steam_Generator_two_phase_fluid_v_out == 0.0 ?
      1.0E-16 : Steam_Generator_two_phase_fluid_v_out) - 1.0;
  } else if (X[35ULL] >= t553_idx_0) {
    intrm_sf_mf_459 = (X[35ULL] - 4000.0) / (4000.0 - t553_idx_0 == 0.0 ?
      1.0E-16 : 4000.0 - t553_idx_0) + 2.0;
  } else {
    t582 = t553_idx_0 - Steam_Generator_two_phase_fluid_v_out;
    intrm_sf_mf_459 = (X[35ULL] - Steam_Generator_two_phase_fluid_v_out) / (t582
      == 0.0 ? 1.0E-16 : t582);
  }

  t554[0ULL] = ((Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C < 0.0 ?
                 Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C : 0.0) +
                (intrm_sf_mf_459 < 0.0 ? intrm_sf_mf_459 : 0.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&jd_efOut.mField0[0ULL], &jd_efOut.mField1[0ULL],
    &jd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t57 = jd_efOut;
  t554[0ULL] = X[33ULL];
  tlu2_linear_nearest_prelookup(&kd_efOut.mField0[0ULL], &kd_efOut.mField1[0ULL],
    &kd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t554[0ULL],
    &t359[0ULL], &t79[0ULL]);
  t60 = kd_efOut;
  tlu2_2d_linear_nearest_value(&ld_efOut[0ULL], &t57.mField0[0ULL],
    &t57.mField2[0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = ld_efOut[0];
  intrm_sf_mf_645 = t553_idx_0;
  tlu2_2d_linear_nearest_value(&md_efOut[0ULL], &t57.mField0[0ULL],
    &t57.mField2[0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = md_efOut[0];
  t571 = t553_idx_0;
  tlu2_2d_linear_nearest_value(&nd_efOut[0ULL], &t57.mField0[0ULL],
    &t57.mField2[0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = nd_efOut[0];
  intrm_sf_mf_645 = intrm_sf_mf_645 * t571 / (t553_idx_0 == 0.0 ? 1.0E-16 :
    t553_idx_0);
  t571 = X[37ULL] >= 0.0 ? X[37ULL] : 0.0;
  t573 = X[38ULL] >= 0.0 ? X[38ULL] : 0.0;
  Mass_Energy_Flow_Rate_Sensor_2P1_M = t571 + X[198ULL];
  t582 = (t571 + X[198ULL]) * (1.0 - pmf_exp(-X[36ULL] /
    (Mass_Energy_Flow_Rate_Sensor_2P1_M == 0.0 ? 1.0E-16 :
     Mass_Energy_Flow_Rate_Sensor_2P1_M)));
  t728 = intrm_sf_mf_645 * t573 + X[198ULL];
  t574 = t582 / (t728 == 0.0 ? 1.0E-16 : t728);
  t554[0ULL] = Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C;
  tlu2_linear_linear_prelookup(&od_efOut.mField0[0ULL], &od_efOut.mField1[0ULL],
    &od_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t65 = od_efOut;
  tlu2_2d_linear_linear_value(&pd_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t59.mField0[0ULL], &t59.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = pd_efOut[0];
  t576 = X[33ULL] * t553_idx_0 * 100.0 + X[34ULL];
  tlu2_2d_linear_linear_value(&qd_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t59.mField0[0ULL], &t59.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = qd_efOut[0];
  Steam_Generator_two_phase_fluid_v_out = ((X[33ULL] * t553_idx_0 * 100.0 +
    Steam_Generator_two_phase_fluid_v_out) - t576) / (intrm_sf_mf_645 == 0.0 ?
    1.0E-16 : intrm_sf_mf_645);
  intrm_sf_mf_645 = (1.0 - pmf_exp(-(t574 <= 15.0 ? t574 : 15.0))) * X[197ULL];
  intrm_sf_mf_476 = (intrm_sf_mf_645 > Steam_Generator_two_phase_fluid_v_out *
                     1000.0);
  tlu2_2d_linear_linear_value(&rd_efOut[0ULL], &t5.mField0[0ULL], &t5.mField2
    [0ULL], &t59.mField0[0ULL], &t59.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = rd_efOut[0];
  intrm_sf_mf_645 = X[33ULL] * t553_idx_0 * 100.0 + intrm_sf_mf_475;
  t554[0ULL] = ((Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C > 1.0 ?
                 Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C : 1.0) +
                (intrm_sf_mf_459 > 1.0 ? intrm_sf_mf_459 : 1.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&sd_efOut.mField0[0ULL], &sd_efOut.mField1[0ULL],
    &sd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t54 = sd_efOut;
  tlu2_2d_linear_nearest_value(&td_efOut[0ULL], &t54.mField0[0ULL],
    &t54.mField2[0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = td_efOut[0];
  Steam_Generator_two_phase_fluid_v_out = t553_idx_0;
  tlu2_2d_linear_nearest_value(&ud_efOut[0ULL], &t54.mField0[0ULL],
    &t54.mField2[0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = ud_efOut[0];
  intrm_sf_mf_475 = t553_idx_0;
  tlu2_2d_linear_nearest_value(&vd_efOut[0ULL], &t54.mField0[0ULL],
    &t54.mField2[0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = vd_efOut[0];
  Steam_Generator_two_phase_fluid_v_out = Steam_Generator_two_phase_fluid_v_out *
    intrm_sf_mf_475 / (t553_idx_0 == 0.0 ? 1.0E-16 : t553_idx_0);
  t582 = (t571 + X[198ULL]) * (1.0 - pmf_exp(-X[39ULL] /
    (Mass_Energy_Flow_Rate_Sensor_2P1_M == 0.0 ? 1.0E-16 :
     Mass_Energy_Flow_Rate_Sensor_2P1_M)));
  t728 = X[198ULL] + Steam_Generator_two_phase_fluid_v_out * t573;
  intrm_sf_mf_475 = t582 / (t728 == 0.0 ? 1.0E-16 : t728);
  Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C = intrm_sf_mf_475 <= 15.0 ?
    intrm_sf_mf_475 : 15.0;
  intrm_sf_mf_475 = (intrm_sf_mf_645 - t576) /
    (Steam_Generator_two_phase_fluid_v_out == 0.0 ? 1.0E-16 :
     Steam_Generator_two_phase_fluid_v_out);
  Steam_Generator_two_phase_fluid_v_out = (1.0 - pmf_exp
    (-Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C)) * X[197ULL];
  intrm_sf_mf_479 = (Steam_Generator_two_phase_fluid_v_out < intrm_sf_mf_475 *
                     1000.0);
  t554[0ULL] = intrm_sf_mf_459;
  tlu2_linear_linear_prelookup(&wd_efOut.mField0[0ULL], &wd_efOut.mField1[0ULL],
    &wd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t5 = wd_efOut;
  tlu2_2d_linear_linear_value(&xd_efOut[0ULL], &t5.mField0[0ULL], &t5.mField2
    [0ULL], &t59.mField0[0ULL], &t59.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t362[0ULL], &t359[0ULL], &t79[0ULL]);
  t553_idx_0 = xd_efOut[0];
  Steam_Generator_two_phase_fluid_v_out = t553_idx_0;
  intrm_sf_mf_475 = U_idx_2 * -24.0 + 24.0;
  Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C = U_idx_2 * 24.0;
  t554[0ULL] = X[5ULL];
  t359[0] = 28ULL;
  tlu2_linear_linear_prelookup(&yd_efOut.mField0[0ULL], &yd_efOut.mField1[0ULL],
    &yd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t554[0ULL],
    &t359[0ULL], &t79[0ULL]);
  t60 = yd_efOut;
  t554[0ULL] = X[4ULL];
  t362[0] = 27ULL;
  tlu2_linear_linear_prelookup(&ae_efOut.mField0[0ULL], &ae_efOut.mField1[0ULL],
    &ae_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t65 = ae_efOut;
  tlu2_2d_linear_linear_value(&be_efOut[0ULL], &t60.mField0[0ULL], &t60.mField2
    [0ULL], &t65.mField0[0ULL], &t65.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t359[0ULL], &t362[0ULL], &t79[0ULL]);
  t553_idx_0 = be_efOut[0];
  intrm_sf_mf_645 = t553_idx_0;
  t554[0ULL] = X[56ULL];
  tlu2_linear_linear_prelookup(&ce_efOut.mField0[0ULL], &ce_efOut.mField1[0ULL],
    &ce_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t554[0ULL],
    &t359[0ULL], &t79[0ULL]);
  t65 = ce_efOut;
  t554[0] = 1.01325;
  tlu2_linear_linear_prelookup(&de_efOut.mField0[0ULL], &de_efOut.mField1[0ULL],
    &de_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t18 = de_efOut;
  tlu2_2d_linear_linear_value(&ee_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t359[0ULL], &t362[0ULL], &t79[0ULL]);
  t553_idx_0 = ee_efOut[0];
  intrm_sf_mf_459 = t553_idx_0;
  t554[0ULL] = X[59ULL];
  tlu2_linear_linear_prelookup(&fe_efOut.mField0[0ULL], &fe_efOut.mField1[0ULL],
    &fe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t554[0ULL],
    &t359[0ULL], &t79[0ULL]);
  t5 = fe_efOut;
  t554[0ULL] = X[60ULL];
  tlu2_linear_linear_prelookup(&ge_efOut.mField0[0ULL], &ge_efOut.mField1[0ULL],
    &ge_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t59 = ge_efOut;
  tlu2_2d_linear_linear_value(&he_efOut[0ULL], &t5.mField0[0ULL], &t5.mField2
    [0ULL], &t59.mField0[0ULL], &t59.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t359[0ULL], &t362[0ULL], &t79[0ULL]);
  t553_idx_0 = he_efOut[0];
  t571 = t553_idx_0;
  t554[0ULL] = X[117ULL];
  tlu2_linear_linear_prelookup(&ie_efOut.mField0[0ULL], &ie_efOut.mField1[0ULL],
    &ie_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t554[0ULL],
    &t359[0ULL], &t79[0ULL]);
  t65 = ie_efOut;
  t554[0] = 150.0;
  tlu2_linear_linear_prelookup(&je_efOut.mField0[0ULL], &je_efOut.mField1[0ULL],
    &je_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t59 = je_efOut;
  tlu2_2d_linear_linear_value(&ke_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t59.mField0[0ULL], &t59.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t359[0ULL], &t362[0ULL], &t79[0ULL]);
  t553_idx_0 = ke_efOut[0];
  t573 = t553_idx_0;
  t554[0ULL] = X[118ULL];
  tlu2_linear_linear_prelookup(&le_efOut.mField0[0ULL], &le_efOut.mField1[0ULL],
    &le_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t554[0ULL],
    &t359[0ULL], &t79[0ULL]);
  t54 = le_efOut;
  t554[0ULL] = X[119ULL];
  tlu2_linear_linear_prelookup(&me_efOut.mField0[0ULL], &me_efOut.mField1[0ULL],
    &me_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t65 = me_efOut;
  tlu2_2d_linear_linear_value(&ne_efOut[0ULL], &t54.mField0[0ULL], &t54.mField2
    [0ULL], &t65.mField0[0ULL], &t65.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t359[0ULL], &t362[0ULL], &t79[0ULL]);
  t553_idx_0 = ne_efOut[0];
  t574 = t553_idx_0;
  t554[0ULL] = X[133ULL];
  tlu2_linear_linear_prelookup(&oe_efOut.mField0[0ULL], &oe_efOut.mField1[0ULL],
    &oe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t554[0ULL],
    &t359[0ULL], &t79[0ULL]);
  t60 = oe_efOut;
  t554[0ULL] = X[134ULL];
  tlu2_linear_linear_prelookup(&pe_efOut.mField0[0ULL], &pe_efOut.mField1[0ULL],
    &pe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t65 = pe_efOut;
  tlu2_2d_linear_linear_value(&qe_efOut[0ULL], &t60.mField0[0ULL], &t60.mField2
    [0ULL], &t65.mField0[0ULL], &t65.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t359[0ULL], &t362[0ULL], &t79[0ULL]);
  t553_idx_0 = qe_efOut[0];
  U_idx_2 = t553_idx_0;
  t554[0ULL] = X[135ULL];
  tlu2_linear_linear_prelookup(&re_efOut.mField0[0ULL], &re_efOut.mField1[0ULL],
    &re_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t554[0ULL],
    &t359[0ULL], &t79[0ULL]);
  t5 = re_efOut;
  t554[0ULL] = X[136ULL];
  tlu2_linear_linear_prelookup(&se_efOut.mField0[0ULL], &se_efOut.mField1[0ULL],
    &se_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t60 = se_efOut;
  tlu2_2d_linear_linear_value(&te_efOut[0ULL], &t5.mField0[0ULL], &t5.mField2
    [0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t359[0ULL], &t362[0ULL], &t79[0ULL]);
  t553_idx_0 = te_efOut[0];
  t576 = t553_idx_0;
  t554[0ULL] = X[142ULL];
  tlu2_linear_linear_prelookup(&ue_efOut.mField0[0ULL], &ue_efOut.mField1[0ULL],
    &ue_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t554[0ULL],
    &t359[0ULL], &t79[0ULL]);
  t65 = ue_efOut;
  t554[0] = 2.0;
  tlu2_linear_linear_prelookup(&ve_efOut.mField0[0ULL], &ve_efOut.mField1[0ULL],
    &ve_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t54 = ve_efOut;
  tlu2_2d_linear_linear_value(&we_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t54.mField0[0ULL], &t54.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t359[0ULL], &t362[0ULL], &t79[0ULL]);
  t553_idx_0 = we_efOut[0];
  t577 = t553_idx_0;
  t554[0ULL] = X[147ULL];
  tlu2_linear_linear_prelookup(&xe_efOut.mField0[0ULL], &xe_efOut.mField1[0ULL],
    &xe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t554[0ULL],
    &t359[0ULL], &t79[0ULL]);
  t65 = xe_efOut;
  t554[0ULL] = X[148ULL];
  tlu2_linear_linear_prelookup(&ye_efOut.mField0[0ULL], &ye_efOut.mField1[0ULL],
    &ye_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t54 = ye_efOut;
  tlu2_2d_linear_linear_value(&af_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t54.mField0[0ULL], &t54.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t359[0ULL], &t362[0ULL], &t79[0ULL]);
  t553_idx_0 = af_efOut[0];
  t578 = t553_idx_0;
  t554[0ULL] = X[149ULL];
  tlu2_linear_linear_prelookup(&bf_efOut.mField0[0ULL], &bf_efOut.mField1[0ULL],
    &bf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t554[0ULL],
    &t359[0ULL], &t79[0ULL]);
  t60 = bf_efOut;
  t554[0ULL] = X[150ULL];
  tlu2_linear_linear_prelookup(&cf_efOut.mField0[0ULL], &cf_efOut.mField1[0ULL],
    &cf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t54 = cf_efOut;
  tlu2_2d_linear_linear_value(&df_efOut[0ULL], &t60.mField0[0ULL], &t60.mField2
    [0ULL], &t54.mField0[0ULL], &t54.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t359[0ULL], &t362[0ULL], &t79[0ULL]);
  t553_idx_0 = df_efOut[0];
  t579 = t553_idx_0;
  t554[0ULL] = X[16ULL];
  tlu2_linear_linear_prelookup(&ef_efOut.mField0[0ULL], &ef_efOut.mField1[0ULL],
    &ef_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t554[0ULL],
    &t359[0ULL], &t79[0ULL]);
  t54 = ef_efOut;
  t554[0ULL] = X[15ULL];
  tlu2_linear_linear_prelookup(&ff_efOut.mField0[0ULL], &ff_efOut.mField1[0ULL],
    &ff_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t59 = ff_efOut;
  tlu2_2d_linear_linear_value(&gf_efOut[0ULL], &t54.mField0[0ULL], &t54.mField2
    [0ULL], &t59.mField0[0ULL], &t59.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t359[0ULL], &t362[0ULL], &t79[0ULL]);
  t553_idx_0 = gf_efOut[0];
  t580 = t553_idx_0;
  t554[0ULL] = X[18ULL];
  tlu2_linear_linear_prelookup(&hf_efOut.mField0[0ULL], &hf_efOut.mField1[0ULL],
    &hf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t554[0ULL],
    &t359[0ULL], &t79[0ULL]);
  t60 = hf_efOut;
  t554[0ULL] = X[17ULL];
  tlu2_linear_linear_prelookup(&if_efOut.mField0[0ULL], &if_efOut.mField1[0ULL],
    &if_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t65 = if_efOut;
  tlu2_2d_linear_linear_value(&jf_efOut[0ULL], &t60.mField0[0ULL], &t60.mField2
    [0ULL], &t65.mField0[0ULL], &t65.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t359[0ULL], &t362[0ULL], &t79[0ULL]);
  t553_idx_0 = jf_efOut[0];
  t581 = t553_idx_0;
  t554[0ULL] = X[20ULL];
  tlu2_linear_linear_prelookup(&kf_efOut.mField0[0ULL], &kf_efOut.mField1[0ULL],
    &kf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t554[0ULL],
    &t359[0ULL], &t79[0ULL]);
  t65 = kf_efOut;
  t554[0ULL] = X[19ULL];
  tlu2_linear_linear_prelookup(&lf_efOut.mField0[0ULL], &lf_efOut.mField1[0ULL],
    &lf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t60 = lf_efOut;
  tlu2_2d_linear_linear_value(&mf_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t359[0ULL], &t362[0ULL], &t79[0ULL]);
  t553_idx_0 = mf_efOut[0];
  t554[0ULL] = X[32ULL];
  tlu2_linear_linear_prelookup(&nf_efOut.mField0[0ULL], &nf_efOut.mField1[0ULL],
    &nf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t554[0ULL],
    &t359[0ULL], &t79[0ULL]);
  t60 = nf_efOut;
  t554[0ULL] = X[31ULL];
  tlu2_linear_linear_prelookup(&of_efOut.mField0[0ULL], &of_efOut.mField1[0ULL],
    &of_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t554[0ULL],
    &t362[0ULL], &t79[0ULL]);
  t65 = of_efOut;
  tlu2_2d_linear_linear_value(&pf_efOut[0ULL], &t60.mField0[0ULL], &t60.mField2
    [0ULL], &t65.mField0[0ULL], &t65.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField33, &t359[0ULL], &t362[0ULL], &t79[0ULL]);
  t554[0] = pf_efOut[0];
  t583 = t554[0ULL];
  t584 = T_idx_0 - D_idx_1;
  t73 = (t584 - D_idx_2 * 0.33333333333333331) * (t584 - D_idx_2 *
    0.33333333333333331) * D_idx_0 * 0.5 + D_idx_3;
  Mass_Energy_Flow_Rate_Sensor_2P1_M = (D_idx_0 * D_idx_2 * D_idx_2 *
    0.055555555555555552 + (t584 - D_idx_2 * 0.66666666666666663) * D_idx_0 *
    D_idx_2 * 0.33333333333333331) + D_idx_3;
  t582 = T_idx_0 - D_idx_5;
  t728 = (t582 - D_idx_6 * 0.33333333333333331) * (t582 - D_idx_6 *
    0.33333333333333331) * D_idx_4 * 0.5 + D_idx_7;
  t593 = (D_idx_4 * D_idx_6 * D_idx_6 * 0.055555555555555552 + (t582 - D_idx_6 *
           0.66666666666666663) * D_idx_4 * D_idx_6 * 0.33333333333333331) +
    D_idx_7;
  if (t584 <= D_idx_2 * 0.33333333333333331) {
    t591 = D_idx_3;
  } else {
    t591 = t584 <= D_idx_2 * 0.66666666666666663 ? t73 :
      Mass_Energy_Flow_Rate_Sensor_2P1_M;
  }

  if (t584 <= D_idx_2 * 0.33333333333333331) {
    t592 = D_idx_3;
  } else {
    t592 = t584 <= D_idx_2 * 0.66666666666666663 ? t73 :
      Mass_Energy_Flow_Rate_Sensor_2P1_M;
  }

  if (M[37ULL] == 0) {
    t73 = D_idx_2 * 0.66666666666666663 - t584;
  } else {
    t73 = 0.0;
  }

  if (t582 <= D_idx_6 * 0.33333333333333331) {
    Mass_Energy_Flow_Rate_Sensor_2P1_M = D_idx_7;
  } else {
    Mass_Energy_Flow_Rate_Sensor_2P1_M = t582 <= D_idx_6 * 0.66666666666666663 ?
      t728 : t593;
  }

  if (t582 <= D_idx_6 * 0.33333333333333331) {
    t593 = D_idx_7;
  } else {
    t593 = t582 <= D_idx_6 * 0.66666666666666663 ? t728 : t593;
  }

  if (M[77ULL] == 0) {
    t728 = D_idx_6 * 0.66666666666666663 - t582;
  } else {
    t728 = 0.0;
  }

  t484[0ULL] = X[0ULL] - 0.01;
  t484[1ULL] = 950.0 - X[0ULL];
  t484[2ULL] = X[50ULL];
  t484[3ULL] = 4000.0 - X[50ULL];
  t484[4ULL] = X[51ULL] - 0.01;
  t484[5ULL] = 950.0 - X[51ULL];
  t484[6ULL] = X[52ULL];
  t484[7ULL] = 4000.0 - X[52ULL];
  t484[8ULL] = intrm_sf_mf_459;
  t484[9ULL] = X[56ULL] - 273.16;
  t484[10ULL] = 608.8024 - X[56ULL];
  t484[11ULL] = t571;
  t484[12ULL] = X[60ULL] - 0.018111;
  t484[13ULL] = 220.64 - X[60ULL];
  t484[14ULL] = X[59ULL] - 273.16;
  t484[15ULL] = 608.8024 - X[59ULL];
  t484[16ULL] = X[57ULL] - 0.01;
  t484[17ULL] = 950.0 - X[57ULL];
  t484[18ULL] = X[58ULL];
  t484[19ULL] = 4000.0 - X[58ULL];
  t484[20ULL] = X[61ULL] - 0.01;
  t484[21ULL] = 950.0 - X[61ULL];
  t484[22ULL] = X[62ULL];
  t484[23ULL] = 4000.0 - X[62ULL];
  t484[24ULL] = t574;
  t484[25ULL] = X[119ULL] - 0.018111;
  t484[26ULL] = 220.64 - X[119ULL];
  t484[27ULL] = X[118ULL] - 273.16;
  t484[28ULL] = 608.8024 - X[118ULL];
  t484[29ULL] = U_idx_2;
  t484[30ULL] = X[134ULL] - 0.018111;
  t484[31ULL] = 220.64 - X[134ULL];
  t484[32ULL] = X[133ULL] - 273.16;
  t484[33ULL] = 608.8024 - X[133ULL];
  t484[34ULL] = X[188ULL];
  t484[35ULL] = 4000.0 - X[188ULL];
  t484[36ULL] = intrm_sf_mf_645;
  t484[37ULL] = X[4ULL] - 0.018111;
  t484[38ULL] = 220.64 - X[4ULL];
  t484[39ULL] = X[5ULL] - 273.16;
  t484[40ULL] = 608.8024 - X[5ULL];
  t484[41ULL] = t583;
  t484[42ULL] = X[31ULL] - 0.018111;
  t484[43ULL] = 220.64 - X[31ULL];
  t484[44ULL] = X[32ULL] - 273.16;
  t484[45ULL] = 608.8024 - X[32ULL];
  t484[46ULL] = X[6ULL] - 0.01;
  t484[47ULL] = 950.0 - X[6ULL];
  t484[48ULL] = X[8ULL];
  t484[49ULL] = 4000.0 - X[8ULL];
  t484[50ULL] = t558;
  t484[51ULL] = X[33ULL] - 0.01;
  t484[52ULL] = 950.0 - X[33ULL];
  t484[53ULL] = X[35ULL];
  t484[54ULL] = 4000.0 - X[35ULL];
  t484[55ULL] = Steam_Generator_two_phase_fluid_v_out;
  t484[56ULL] = Fixed_Displacement_Pump_2P_v_out_A;
  t484[57ULL] = t563;
  t484[58ULL] = X[87ULL] - 0.01;
  t484[59ULL] = 950.0 - X[87ULL];
  t484[60ULL] = X[88ULL];
  t484[61ULL] = 4000.0 - X[88ULL];
  t484[62ULL] = X[100ULL];
  t484[63ULL] = X[98ULL];
  t484[64ULL] = 4000.0 - X[98ULL];
  t484[65ULL] = X[99ULL];
  t484[66ULL] = 4000.0 - X[99ULL];
  t484[67ULL] = 950.0 - Local_Restriction_2P_p_R;
  t484[68ULL] = Local_Restriction_2P_p_R - 0.01;
  t484[69ULL] = 4000.0 - X[107ULL];
  t484[70ULL] = X[107ULL];
  t484[71ULL] = X[109ULL];
  t484[72ULL] = X[108ULL];
  t484[73ULL] = 4000.0 - X[108ULL];
  t484[74ULL] = 950.0 - Local_Restriction_2P1_p_R;
  t484[75ULL] = Local_Restriction_2P1_p_R - 0.01;
  t484[76ULL] = 4000.0 - X[116ULL];
  t484[77ULL] = X[116ULL];
  t484[78ULL] = t573;
  t484[79ULL] = X[117ULL] - 273.16;
  t484[80ULL] = 608.8024 - X[117ULL];
  t484[81ULL] = t574;
  t484[82ULL] = U_idx_2;
  t484[83ULL] = t576;
  t484[84ULL] = X[136ULL] - 0.018111;
  t484[85ULL] = 220.64 - X[136ULL];
  t484[86ULL] = X[135ULL] - 273.16;
  t484[87ULL] = 608.8024 - X[135ULL];
  t484[88ULL] = t577;
  t484[89ULL] = X[142ULL] - 273.16;
  t484[90ULL] = 608.8024 - X[142ULL];
  t484[91ULL] = t571;
  t484[92ULL] = t578;
  t484[93ULL] = X[148ULL] - 0.018111;
  t484[94ULL] = 220.64 - X[148ULL];
  t484[95ULL] = X[147ULL] - 273.16;
  t484[96ULL] = 608.8024 - X[147ULL];
  t484[97ULL] = t579;
  t484[98ULL] = X[150ULL] - 0.018111;
  t484[99ULL] = 220.64 - X[150ULL];
  t484[100ULL] = X[149ULL] - 273.16;
  t484[101ULL] = 608.8024 - X[149ULL];
  t484[102ULL] = t580;
  t484[103ULL] = X[15ULL] - 0.018111;
  t484[104ULL] = 220.64 - X[15ULL];
  t484[105ULL] = X[16ULL] - 273.16;
  t484[106ULL] = 608.8024 - X[16ULL];
  t484[107ULL] = t576;
  t484[108ULL] = t578;
  t484[109ULL] = t581;
  t484[110ULL] = X[17ULL] - 0.018111;
  t484[111ULL] = 220.64 - X[17ULL];
  t484[112ULL] = X[18ULL] - 273.16;
  t484[113ULL] = 608.8024 - X[18ULL];
  t484[114ULL] = t579;
  t484[115ULL] = t574;
  t484[116ULL] = t553_idx_0;
  t484[117ULL] = X[19ULL] - 0.018111;
  t484[118ULL] = 220.64 - X[19ULL];
  t484[119ULL] = X[20ULL] - 273.16;
  t484[120ULL] = 608.8024 - X[20ULL];
  t484[121ULL] = 0.0063674739754068094 / (X[23ULL] == 0.0 ? 1.0E-16 : X[23ULL])
    + Preheating_Pipe_2P_v_A;
  t484[122ULL] = 0.0063674739754068094 / (X[23ULL] == 0.0 ? 1.0E-16 : X[23ULL])
    + Preheating_Pipe_2P_v_B;
  t484[123ULL] = X[21ULL] - 0.01;
  t484[124ULL] = 950.0 - X[21ULL];
  t484[125ULL] = X[22ULL];
  t484[126ULL] = 4000.0 - X[22ULL];
  t484[127ULL] = X[178ULL];
  t484[128ULL] = 4000.0 - X[178ULL];
  t484[129ULL] = -X[128ULL] + X[129ULL];
  t484[130ULL] = (X[126ULL] - X[57ULL]) - 0.01;
  t484[131ULL] = 220.64 - X[0ULL];
  t484[132ULL] = X[26ULL];
  t484[133ULL] = 4000.0 - X[26ULL];
  t484[134ULL] = X[27ULL];
  t484[135ULL] = 4000.0 - X[27ULL];
  t484[136ULL] = -(t591 > 0.01 ? 0.01 : t591);
  t484[137ULL] = D_idx_2 * 0.33333333333333331 - t584;
  t484[138ULL] = t592 - 0.01;
  t484[139ULL] = intrm_sf_mf_475 - 12.0;
  t484[140ULL] = t73;
  t484[141ULL] = 12.0 - intrm_sf_mf_475;
  t484[142ULL] = -(Mass_Energy_Flow_Rate_Sensor_2P1_M > 0.01 ? 0.01 :
                   Mass_Energy_Flow_Rate_Sensor_2P1_M);
  t484[143ULL] = D_idx_6 * 0.33333333333333331 - t582;
  t484[144ULL] = t593 - 0.01;
  t484[145ULL] = Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C - 12.0;
  t484[146ULL] = t728;
  t484[147ULL] = 12.0 - Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C;
  t484[148ULL] = X[126ULL] - 0.01;
  t484[149ULL] = 950.0 - X[126ULL];
  t484[150ULL] = X[127ULL];
  t484[151ULL] = 4000.0 - X[127ULL];
  t484[152ULL] = X[189ULL];
  t484[153ULL] = 4000.0 - X[189ULL];
  t484[154ULL] = Check_Valve_2P2_convection_A_v_in;
  t484[155ULL] = t557;
  t484[156ULL] = t561;
  t484[157ULL] = Condenser_two_phase_fluid_convection_B_v_in;
  t484[158ULL] = Condenser_two_phase_fluid_convection_B_v_in;
  t484[159ULL] = Fixed_Displacement_Pump_2P_convection_B_v_in;
  t484[160ULL] = t572;
  t484[161ULL] = Local_Restriction_2P_convection_B_v_in;
  t484[162ULL] = Local_Restriction_2P1_convection_A_v_in;
  t484[163ULL] = t561;
  t484[164ULL] = Fixed_Displacement_Pump_2P_convection_B_v_in;
  t484[165ULL] = t557;
  t484[166ULL] = Condenser_two_phase_fluid_convection_B_v_in;
  t484[167ULL] = Pressure_Relief_Valve_2P_convection_B_v_in;
  t484[168ULL] = Local_Restriction_2P_convection_B_v_in;
  t484[169ULL] = Local_Restriction_2P1_convection_A_v_in;
  t484[170ULL] = Pressure_Relief_Valve_2P_convection_B_v_in;
  t484[171ULL] = t556;
  t484[172ULL] = t561;
  t484[173ULL] = t572;
  t484[174ULL] = t565;
  t484[175ULL] = Check_Valve_2P2_convection_A_v_in;
  t484[176ULL] = Steam_Drum_v_BV_in;
  t484[177ULL] = t557;
  t484[178ULL] = t565;
  t484[179ULL] = t556;
  t484[180ULL] = t561;
  t484[181ULL] = t561;
  t484[182ULL] = t561;
  t484[183ULL] = Steam_Drum_v_BV_in;
  t484[184ULL] = t556;
  t484[185ULL] = Steam_Drum_v_BV_in;
  t484[186ULL] = t561;
  t484[187ULL] = (real_T)intrm_sf_mf_25;
  t484[188ULL] = (real_T)intrm_sf_mf_52;
  t484[189ULL] = (real_T)intrm_sf_mf_476;
  t484[190ULL] = (real_T)intrm_sf_mf_479;
  for (b = 0; b < 191; b++) {
    out.mX[b] = t484[b];
  }

  (void)LC;
  (void)t732;
  return 0;
}
