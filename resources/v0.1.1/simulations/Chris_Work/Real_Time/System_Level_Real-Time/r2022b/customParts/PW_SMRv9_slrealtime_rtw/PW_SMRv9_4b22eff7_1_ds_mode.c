/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv9/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_sys_struct.h"
#include "PW_SMRv9_4b22eff7_1_ds_mode.h"
#include "PW_SMRv9_4b22eff7_1_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_externals.h"
#include "PW_SMRv9_4b22eff7_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv9_4b22eff7_1_ds_mode(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t653, NeDsMethodOutput *t654)
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
  PmIntVector out;
  real_T X[250];
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
  real_T Fixed_Displacement_Pump_2P_v_out_A;
  real_T Preheating_Pipe_2P_v_A;
  real_T Pressure_Relief_Valve_2P1_convection_B_v_in;
  real_T Steam_Generator_two_phase_fluid_v_out;
  real_T U_idx_1;
  real_T U_idx_5;
  real_T U_idx_6;
  real_T intrm_sf_mf_145;
  real_T intrm_sf_mf_149;
  real_T intrm_sf_mf_623;
  real_T intrm_sf_mf_634;
  real_T intrm_sf_mf_92;
  real_T t502_idx_0;
  real_T t509;
  real_T t510;
  real_T t511;
  real_T t512;
  real_T t513;
  real_T t514;
  real_T t515;
  real_T t516;
  real_T t519;
  real_T t520;
  real_T t521;
  real_T t522;
  real_T t523;
  real_T t525;
  real_T t528;
  real_T t529;
  real_T t530;
  real_T t531;
  real_T t534;
  real_T t535;
  real_T t536;
  real_T t538;
  real_T t544;
  real_T t546;
  real_T t652;
  size_t t316[1];
  size_t t319[1];
  size_t t66[1];
  int32_T t441[163];
  int32_T Q_idx_0;
  int32_T Q_idx_1;
  int32_T Q_idx_2;
  int32_T b;
  boolean_T intrm_sf_mf_25;
  boolean_T intrm_sf_mf_497;
  boolean_T intrm_sf_mf_516;
  boolean_T intrm_sf_mf_52;
  Q_idx_0 = t653->mQ.mX[0];
  Q_idx_1 = t653->mQ.mX[1];
  Q_idx_2 = t653->mQ.mX[2];
  U_idx_1 = t653->mU.mX[1];
  U_idx_5 = t653->mU.mX[5];
  U_idx_6 = t653->mU.mX[6];
  for (b = 0; b < 250; b++) {
    X[b] = t653->mX.mX[b];
  }

  out = t654->mMODE;
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
  Steam_Generator_two_phase_fluid_v_out = t502_idx_0;
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t63.mField0[0ULL], &t63.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = c_efOut[0];
  t652 = t502_idx_0;
  if (X[72ULL] <= Steam_Generator_two_phase_fluid_v_out) {
    Check_Valve_2P2_convection_A_v_in = X[72ULL] /
      (Steam_Generator_two_phase_fluid_v_out == 0.0 ? 1.0E-16 :
       Steam_Generator_two_phase_fluid_v_out) - 1.0;
  } else if (X[72ULL] >= t502_idx_0) {
    Check_Valve_2P2_convection_A_v_in = (X[72ULL] - 4000.0) / (4000.0 -
      t502_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t502_idx_0) + 2.0;
  } else {
    t513 = t502_idx_0 - Steam_Generator_two_phase_fluid_v_out;
    Check_Valve_2P2_convection_A_v_in = (X[72ULL] -
      Steam_Generator_two_phase_fluid_v_out) / (t513 == 0.0 ? 1.0E-16 : t513);
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
  t509 = t502_idx_0;
  tlu2_1d_linear_linear_value(&h_efOut[0ULL], &t22.mField0[0ULL], &t22.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = h_efOut[0];
  t510 = t502_idx_0;
  if (X[74ULL] <= t509) {
    t511 = X[74ULL] / (t509 == 0.0 ? 1.0E-16 : t509) - 1.0;
  } else if (X[74ULL] >= t502_idx_0) {
    t511 = (X[74ULL] - 4000.0) / (4000.0 - t502_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t502_idx_0) + 2.0;
  } else {
    Fixed_Displacement_Pump_2P_v_out_A = t502_idx_0 - t509;
    t511 = (X[74ULL] - t509) / (Fixed_Displacement_Pump_2P_v_out_A == 0.0 ?
      1.0E-16 : Fixed_Displacement_Pump_2P_v_out_A);
  }

  t508[0ULL] = t511;
  tlu2_linear_linear_prelookup(&i_efOut.mField0[0ULL], &i_efOut.mField1[0ULL],
    &i_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t51 = i_efOut;
  tlu2_2d_linear_linear_value(&j_efOut[0ULL], &t51.mField0[0ULL], &t51.mField2
    [0ULL], &t22.mField0[0ULL], &t22.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = j_efOut[0];
  t511 = t502_idx_0;
  t512 = X[84ULL] * -0.0012548887771113527;
  t514 = X[85ULL] * -0.0012548887771113527;
  t515 = X[86ULL] * -0.0012548887771113527;
  t508[0ULL] = X[6ULL];
  tlu2_linear_linear_prelookup(&k_efOut.mField0[0ULL], &k_efOut.mField1[0ULL],
    &k_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t508[0ULL],
    &t316[0ULL], &t66[0ULL]);
  t58 = k_efOut;
  tlu2_1d_linear_linear_value(&l_efOut[0ULL], &t58.mField0[0ULL], &t58.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = l_efOut[0];
  t516 = t502_idx_0;
  tlu2_1d_linear_linear_value(&m_efOut[0ULL], &t58.mField0[0ULL], &t58.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = m_efOut[0];
  intrm_sf_mf_92 = t502_idx_0;
  if (X[7ULL] <= t516) {
    Fixed_Displacement_Pump_2P_v_out_A = X[7ULL] / (t516 == 0.0 ? 1.0E-16 : t516)
      - 1.0;
  } else if (X[7ULL] >= t502_idx_0) {
    Fixed_Displacement_Pump_2P_v_out_A = (X[7ULL] - 4000.0) / (4000.0 -
      t502_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t502_idx_0) + 2.0;
  } else {
    t523 = t502_idx_0 - t516;
    Fixed_Displacement_Pump_2P_v_out_A = (X[7ULL] - t516) / (t523 == 0.0 ?
      1.0E-16 : t523);
  }

  if (X[8ULL] <= t516) {
    t520 = X[8ULL] / (t516 == 0.0 ? 1.0E-16 : t516) - 1.0;
  } else if (X[8ULL] >= t502_idx_0) {
    t520 = (X[8ULL] - 4000.0) / (4000.0 - t502_idx_0 == 0.0 ? 1.0E-16 : 4000.0 -
      t502_idx_0) + 2.0;
  } else {
    t528 = t502_idx_0 - t516;
    t520 = (X[8ULL] - t516) / (t528 == 0.0 ? 1.0E-16 : t528);
  }

  t508[0ULL] = ((Fixed_Displacement_Pump_2P_v_out_A < 0.0 ?
                 Fixed_Displacement_Pump_2P_v_out_A : 0.0) + (t520 < 0.0 ? t520 :
    0.0)) / 2.0;
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
  t519 = t502_idx_0;
  tlu2_2d_linear_nearest_value(&q_efOut[0ULL], &t51.mField0[0ULL], &t51.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField10, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = q_efOut[0];
  t521 = t502_idx_0;
  tlu2_2d_linear_nearest_value(&r_efOut[0ULL], &t51.mField0[0ULL], &t51.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField13, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = r_efOut[0];
  t519 = t519 * t521 / (t502_idx_0 == 0.0 ? 1.0E-16 : t502_idx_0);
  t521 = X[9ULL] >= 0.0 ? X[9ULL] : 0.0;
  t522 = X[10ULL] >= 0.0 ? X[10ULL] : 0.0;
  t523 = t519 * t522;
  intrm_sf_mf_149 = t521 + X[98ULL];
  t513 = (t523 + X[98ULL]) / (intrm_sf_mf_149 == 0.0 ? 1.0E-16 : intrm_sf_mf_149);
  if (t513 <= 1.0) {
    t525 = 1.0 - t513 * 0.999999;
  } else {
    t525 = 1.0E-6;
  }

  if (t513 >= 1.0) {
    intrm_sf_mf_145 = t513 * 1.000001 - 1.0;
  } else {
    intrm_sf_mf_145 = 1.0E-6;
  }

  if (t523 + X[98ULL] >= t521 + X[98ULL]) {
    intrm_sf_mf_623 = t521 + X[98ULL];
    t534 = t523 + X[98ULL];
    t513 = (1.000001 / (intrm_sf_mf_623 == 0.0 ? 1.0E-16 : intrm_sf_mf_623) -
            0.999999 / (t534 == 0.0 ? 1.0E-16 : t534)) * X[11ULL];
  } else {
    t535 = t523 + X[98ULL];
    t536 = t521 + X[98ULL];
    t513 = (1.000001 / (t535 == 0.0 ? 1.0E-16 : t535) - 0.999999 / (t536 == 0.0 ?
             1.0E-16 : t536)) * X[11ULL];
  }

  t523 = t513 <= 15.0 ? t513 : 15.0;
  t508[0ULL] = Fixed_Displacement_Pump_2P_v_out_A;
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
  t538 = (1.0 - pmf_exp(-t523)) * X[97ULL];
  intrm_sf_mf_634 = pmf_exp(-t523) * intrm_sf_mf_145 + t525;
  intrm_sf_mf_25 = (t538 / (intrm_sf_mf_634 == 0.0 ? 1.0E-16 : intrm_sf_mf_634) >
                    ((X[6ULL] * t502_idx_0 * 100.0 + t516) -
                     Preheating_Pipe_2P_v_A) / (t519 == 0.0 ? 1.0E-16 : t519) *
                    1000.0);
  t508[0] = 1.0;
  tlu2_linear_linear_prelookup(&w_efOut.mField0[0ULL], &w_efOut.mField1[0ULL],
    &w_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t59 = w_efOut;
  tlu2_2d_linear_linear_value(&x_efOut[0ULL], &t59.mField0[0ULL], &t59.mField2
    [0ULL], &t58.mField0[0ULL], &t58.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = x_efOut[0];
  t519 = X[6ULL] * t502_idx_0 * 100.0 + intrm_sf_mf_92;
  t508[0ULL] = ((Fixed_Displacement_Pump_2P_v_out_A > 1.0 ?
                 Fixed_Displacement_Pump_2P_v_out_A : 1.0) + (t520 > 1.0 ? t520 :
    1.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&y_efOut.mField0[0ULL], &y_efOut.mField1[0ULL],
    &y_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t52 = y_efOut;
  tlu2_2d_linear_nearest_value(&ab_efOut[0ULL], &t52.mField0[0ULL],
    &t52.mField2[0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)
    (LC))->mField12, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = ab_efOut[0];
  t516 = t502_idx_0;
  tlu2_2d_linear_nearest_value(&bb_efOut[0ULL], &t52.mField0[0ULL],
    &t52.mField2[0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)
    (LC))->mField10, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = bb_efOut[0];
  intrm_sf_mf_92 = t502_idx_0;
  tlu2_2d_linear_nearest_value(&cb_efOut[0ULL], &t52.mField0[0ULL],
    &t52.mField2[0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)
    (LC))->mField13, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = cb_efOut[0];
  t516 = t516 * intrm_sf_mf_92 / (t502_idx_0 == 0.0 ? 1.0E-16 : t502_idx_0);
  intrm_sf_mf_92 = t516 * t522;
  Fixed_Displacement_Pump_2P_v_out_A = (X[98ULL] + intrm_sf_mf_92) /
    (intrm_sf_mf_149 == 0.0 ? 1.0E-16 : intrm_sf_mf_149);
  if (Fixed_Displacement_Pump_2P_v_out_A <= 1.0) {
    t522 = 1.0 - Fixed_Displacement_Pump_2P_v_out_A * 0.999999;
  } else {
    t522 = 1.0E-6;
  }

  if (Fixed_Displacement_Pump_2P_v_out_A >= 1.0) {
    t523 = Fixed_Displacement_Pump_2P_v_out_A * 1.000001 - 1.0;
  } else {
    t523 = 1.0E-6;
  }

  if (X[98ULL] + intrm_sf_mf_92 >= t521 + X[98ULL]) {
    t544 = t521 + X[98ULL];
    t513 = X[98ULL] + intrm_sf_mf_92;
    Fixed_Displacement_Pump_2P_v_out_A = (1.000001 / (t544 == 0.0 ? 1.0E-16 :
      t544) - 0.999999 / (t513 == 0.0 ? 1.0E-16 : t513)) * X[12ULL];
  } else {
    t546 = X[98ULL] + intrm_sf_mf_92;
    t525 = t521 + X[98ULL];
    Fixed_Displacement_Pump_2P_v_out_A = (1.000001 / (t546 == 0.0 ? 1.0E-16 :
      t546) - 0.999999 / (t525 == 0.0 ? 1.0E-16 : t525)) * X[12ULL];
  }

  intrm_sf_mf_92 = Fixed_Displacement_Pump_2P_v_out_A <= 15.0 ?
    Fixed_Displacement_Pump_2P_v_out_A : 15.0;
  t525 = (1.0 - pmf_exp(-intrm_sf_mf_92)) * X[97ULL];
  intrm_sf_mf_145 = pmf_exp(-intrm_sf_mf_92) * t523 + t522;
  intrm_sf_mf_52 = (t525 / (intrm_sf_mf_145 == 0.0 ? 1.0E-16 : intrm_sf_mf_145) <
                    (t519 - Preheating_Pipe_2P_v_A) / (t516 == 0.0 ? 1.0E-16 :
    t516) * 1000.0);
  t508[0ULL] = t520;
  tlu2_linear_linear_prelookup(&db_efOut.mField0[0ULL], &db_efOut.mField1[0ULL],
    &db_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t0 = db_efOut;
  tlu2_2d_linear_linear_value(&eb_efOut[0ULL], &t0.mField0[0ULL], &t0.mField2
    [0ULL], &t58.mField0[0ULL], &t58.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = eb_efOut[0];
  t516 = t502_idx_0;
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
    t519 = X[89ULL] / (intrm_sf_mf_92 == 0.0 ? 1.0E-16 : intrm_sf_mf_92) - 1.0;
  } else if (X[89ULL] >= t502_idx_0) {
    t519 = (X[89ULL] - 4000.0) / (4000.0 - t502_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t502_idx_0) + 2.0;
  } else {
    t513 = t502_idx_0 - intrm_sf_mf_92;
    t519 = (X[89ULL] - intrm_sf_mf_92) / (t513 == 0.0 ? 1.0E-16 : t513);
  }

  t508[0ULL] = t519;
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
  Fixed_Displacement_Pump_2P_v_out_A = t502_idx_0;
  tlu2_1d_linear_linear_value(&mb_efOut[0ULL], &t52.mField0[0ULL], &t52.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = mb_efOut[0];
  t519 = t502_idx_0;
  if (X[93ULL] <= Fixed_Displacement_Pump_2P_v_out_A) {
    t520 = X[93ULL] / (Fixed_Displacement_Pump_2P_v_out_A == 0.0 ? 1.0E-16 :
                       Fixed_Displacement_Pump_2P_v_out_A) - 1.0;
  } else if (X[93ULL] >= t502_idx_0) {
    t520 = (X[93ULL] - 4000.0) / (4000.0 - t502_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t502_idx_0) + 2.0;
  } else {
    t513 = t502_idx_0 - Fixed_Displacement_Pump_2P_v_out_A;
    t520 = (X[93ULL] - Fixed_Displacement_Pump_2P_v_out_A) / (t513 == 0.0 ?
      1.0E-16 : t513);
  }

  t508[0ULL] = t520;
  tlu2_linear_linear_prelookup(&nb_efOut.mField0[0ULL], &nb_efOut.mField1[0ULL],
    &nb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t58 = nb_efOut;
  tlu2_2d_linear_linear_value(&ob_efOut[0ULL], &t58.mField0[0ULL], &t58.mField2
    [0ULL], &t52.mField0[0ULL], &t52.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = ob_efOut[0];
  t520 = t502_idx_0;
  t508[0ULL] = X[15ULL];
  tlu2_linear_linear_prelookup(&pb_efOut.mField0[0ULL], &pb_efOut.mField1[0ULL],
    &pb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t508[0ULL],
    &t316[0ULL], &t66[0ULL]);
  t55 = pb_efOut;
  tlu2_1d_linear_linear_value(&qb_efOut[0ULL], &t55.mField0[0ULL], &t55.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = qb_efOut[0];
  t521 = t502_idx_0;
  tlu2_1d_linear_linear_value(&rb_efOut[0ULL], &t55.mField0[0ULL], &t55.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = rb_efOut[0];
  t522 = t502_idx_0;
  if (X[117ULL] <= t521) {
    t523 = X[117ULL] / (t521 == 0.0 ? 1.0E-16 : t521) - 1.0;
  } else if (X[117ULL] >= t502_idx_0) {
    t523 = (X[117ULL] - 4000.0) / (4000.0 - t502_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t502_idx_0) + 2.0;
  } else {
    t513 = t502_idx_0 - t521;
    t523 = (X[117ULL] - t521) / (t513 == 0.0 ? 1.0E-16 : t513);
  }

  t508[0ULL] = t523;
  tlu2_linear_linear_prelookup(&sb_efOut.mField0[0ULL], &sb_efOut.mField1[0ULL],
    &sb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t51 = sb_efOut;
  tlu2_2d_linear_linear_value(&tb_efOut[0ULL], &t51.mField0[0ULL], &t51.mField2
    [0ULL], &t55.mField0[0ULL], &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = tb_efOut[0];
  t523 = t502_idx_0;
  if (X[118ULL] <= t521) {
    t525 = X[118ULL] / (t521 == 0.0 ? 1.0E-16 : t521) - 1.0;
  } else if (X[118ULL] >= t522) {
    t525 = (X[118ULL] - 4000.0) / (4000.0 - t522 == 0.0 ? 1.0E-16 : 4000.0 -
      t522) + 2.0;
  } else {
    t513 = t522 - t521;
    t525 = (X[118ULL] - t521) / (t513 == 0.0 ? 1.0E-16 : t513);
  }

  t508[0ULL] = t525;
  tlu2_linear_linear_prelookup(&ub_efOut.mField0[0ULL], &ub_efOut.mField1[0ULL],
    &ub_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t58 = ub_efOut;
  tlu2_2d_linear_linear_value(&vb_efOut[0ULL], &t58.mField0[0ULL], &t58.mField2
    [0ULL], &t55.mField0[0ULL], &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = vb_efOut[0];
  t521 = t502_idx_0;
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
  t528 = t502_idx_0;
  if (X[134ULL] <= Preheating_Pipe_2P_v_A) {
    t529 = X[134ULL] / (Preheating_Pipe_2P_v_A == 0.0 ? 1.0E-16 :
                        Preheating_Pipe_2P_v_A) - 1.0;
  } else if (X[134ULL] >= t502_idx_0) {
    t529 = (X[134ULL] - 4000.0) / (4000.0 - t502_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t502_idx_0) + 2.0;
  } else {
    t513 = t502_idx_0 - Preheating_Pipe_2P_v_A;
    t529 = (X[134ULL] - Preheating_Pipe_2P_v_A) / (t513 == 0.0 ? 1.0E-16 : t513);
  }

  t508[0ULL] = t529;
  tlu2_linear_linear_prelookup(&ac_efOut.mField0[0ULL], &ac_efOut.mField1[0ULL],
    &ac_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t51 = ac_efOut;
  tlu2_2d_linear_linear_value(&bc_efOut[0ULL], &t51.mField0[0ULL], &t51.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = bc_efOut[0];
  t529 = t502_idx_0;
  if (X[139ULL] <= Fixed_Displacement_Pump_2P_v_out_A) {
    t530 = X[139ULL] / (Fixed_Displacement_Pump_2P_v_out_A == 0.0 ? 1.0E-16 :
                        Fixed_Displacement_Pump_2P_v_out_A) - 1.0;
  } else if (X[139ULL] >= t519) {
    t530 = (X[139ULL] - 4000.0) / (4000.0 - t519 == 0.0 ? 1.0E-16 : 4000.0 -
      t519) + 2.0;
  } else {
    t513 = t519 - Fixed_Displacement_Pump_2P_v_out_A;
    t530 = (X[139ULL] - Fixed_Displacement_Pump_2P_v_out_A) / (t513 == 0.0 ?
      1.0E-16 : t513);
  }

  t508[0ULL] = t530;
  tlu2_linear_linear_prelookup(&cc_efOut.mField0[0ULL], &cc_efOut.mField1[0ULL],
    &cc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t51 = cc_efOut;
  tlu2_2d_linear_linear_value(&dc_efOut[0ULL], &t51.mField0[0ULL], &t51.mField2
    [0ULL], &t52.mField0[0ULL], &t52.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = dc_efOut[0];
  Fixed_Displacement_Pump_2P_v_out_A = t502_idx_0;
  if (X[140ULL] <= Preheating_Pipe_2P_v_A) {
    t519 = X[140ULL] / (Preheating_Pipe_2P_v_A == 0.0 ? 1.0E-16 :
                        Preheating_Pipe_2P_v_A) - 1.0;
  } else if (X[140ULL] >= t528) {
    t519 = (X[140ULL] - 4000.0) / (4000.0 - t528 == 0.0 ? 1.0E-16 : 4000.0 -
      t528) + 2.0;
  } else {
    t513 = t528 - Preheating_Pipe_2P_v_A;
    t519 = (X[140ULL] - Preheating_Pipe_2P_v_A) / (t513 == 0.0 ? 1.0E-16 : t513);
  }

  t508[0ULL] = t519;
  tlu2_linear_linear_prelookup(&ec_efOut.mField0[0ULL], &ec_efOut.mField1[0ULL],
    &ec_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t23 = ec_efOut;
  tlu2_2d_linear_linear_value(&fc_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = fc_efOut[0];
  t519 = t502_idx_0;
  if (X[197ULL] <= Preheating_Pipe_2P_v_A) {
    t530 = X[197ULL] / (Preheating_Pipe_2P_v_A == 0.0 ? 1.0E-16 :
                        Preheating_Pipe_2P_v_A) - 1.0;
  } else if (X[197ULL] >= t528) {
    t530 = (X[197ULL] - 4000.0) / (4000.0 - t528 == 0.0 ? 1.0E-16 : 4000.0 -
      t528) + 2.0;
  } else {
    t513 = t528 - Preheating_Pipe_2P_v_A;
    t530 = (X[197ULL] - Preheating_Pipe_2P_v_A) / (t513 == 0.0 ? 1.0E-16 : t513);
  }

  t508[0ULL] = t530;
  tlu2_linear_linear_prelookup(&gc_efOut.mField0[0ULL], &gc_efOut.mField1[0ULL],
    &gc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t57 = gc_efOut;
  tlu2_2d_linear_linear_value(&hc_efOut[0ULL], &t57.mField0[0ULL], &t57.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = hc_efOut[0];
  Preheating_Pipe_2P_v_A = t502_idx_0;
  if (X[198ULL] <= t509) {
    t528 = X[198ULL] / (t509 == 0.0 ? 1.0E-16 : t509) - 1.0;
  } else if (X[198ULL] >= t510) {
    t528 = (X[198ULL] - 4000.0) / (4000.0 - t510 == 0.0 ? 1.0E-16 : 4000.0 -
      t510) + 2.0;
  } else {
    t513 = t510 - t509;
    t528 = (X[198ULL] - t509) / (t513 == 0.0 ? 1.0E-16 : t513);
  }

  t508[0ULL] = t528;
  tlu2_linear_linear_prelookup(&ic_efOut.mField0[0ULL], &ic_efOut.mField1[0ULL],
    &ic_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t51 = ic_efOut;
  tlu2_2d_linear_linear_value(&jc_efOut[0ULL], &t51.mField0[0ULL], &t51.mField2
    [0ULL], &t22.mField0[0ULL], &t22.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = jc_efOut[0];
  t509 = t502_idx_0;
  if (X[154ULL] <= Steam_Generator_two_phase_fluid_v_out) {
    t510 = X[154ULL] / (Steam_Generator_two_phase_fluid_v_out == 0.0 ? 1.0E-16 :
                        Steam_Generator_two_phase_fluid_v_out) - 1.0;
  } else if (X[154ULL] >= t652) {
    t510 = (X[154ULL] - 4000.0) / (4000.0 - t652 == 0.0 ? 1.0E-16 : 4000.0 -
      t652) + 2.0;
  } else {
    t513 = t652 - Steam_Generator_two_phase_fluid_v_out;
    t510 = (X[154ULL] - Steam_Generator_two_phase_fluid_v_out) / (t513 == 0.0 ?
      1.0E-16 : t513);
  }

  t508[0ULL] = t510;
  tlu2_linear_linear_prelookup(&kc_efOut.mField0[0ULL], &kc_efOut.mField1[0ULL],
    &kc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t57 = kc_efOut;
  tlu2_2d_linear_linear_value(&lc_efOut[0ULL], &t57.mField0[0ULL], &t57.mField2
    [0ULL], &t63.mField0[0ULL], &t63.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = lc_efOut[0];
  t510 = t502_idx_0;
  if (X[156ULL] <= Steam_Generator_two_phase_fluid_v_out) {
    t528 = X[156ULL] / (Steam_Generator_two_phase_fluid_v_out == 0.0 ? 1.0E-16 :
                        Steam_Generator_two_phase_fluid_v_out) - 1.0;
  } else if (X[156ULL] >= t652) {
    t528 = (X[156ULL] - 4000.0) / (4000.0 - t652 == 0.0 ? 1.0E-16 : 4000.0 -
      t652) + 2.0;
  } else {
    t513 = t652 - Steam_Generator_two_phase_fluid_v_out;
    t528 = (X[156ULL] - Steam_Generator_two_phase_fluid_v_out) / (t513 == 0.0 ?
      1.0E-16 : t513);
  }

  t508[0ULL] = t528;
  tlu2_linear_linear_prelookup(&mc_efOut.mField0[0ULL], &mc_efOut.mField1[0ULL],
    &mc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t22 = mc_efOut;
  tlu2_2d_linear_linear_value(&nc_efOut[0ULL], &t22.mField0[0ULL], &t22.mField2
    [0ULL], &t63.mField0[0ULL], &t63.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = nc_efOut[0];
  t528 = t502_idx_0;
  if (X[200ULL] <= 1082.1904733151327) {
    t530 = X[200ULL] / 1082.1904733151327 - 1.0;
  } else if (X[200ULL] >= 2601.6367101330361) {
    t530 = (X[200ULL] - 4000.0) / 1398.3632898669639 + 2.0;
  } else {
    t530 = (X[200ULL] - 1082.1904733151327) / 1519.4462368179034;
  }

  t508[0ULL] = t530;
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
  intrm_sf_mf_145 = pmf_sqrt(t502_idx_0 * 461.5);
  if (U_idx_5 <= 0.0) {
    intrm_sf_mf_149 = 0.0;
  } else {
    intrm_sf_mf_149 = U_idx_5 >= 1.0 ? 1.0 : U_idx_5;
  }

  t531 = intrm_sf_mf_149 * 0.0002;
  t530 = X[15ULL] / (X[0ULL] == 0.0 ? 1.0E-16 : X[0ULL]);
  if (t530 <= 0.0) {
    intrm_sf_mf_623 = 0.0;
  } else {
    intrm_sf_mf_623 = t530 >= 1.0 ? 1.0 : t530;
  }

  t530 = (pmf_pow(intrm_sf_mf_623, 1.5384615384615383) - pmf_pow(intrm_sf_mf_623,
           1.7692307692307689)) * 8.6666666666666661;
  if (t530 <= 0.0) {
    t534 = 0.0;
  } else {
    t534 = t530 >= 1.0E+6 ? 1.0E+6 : t530;
  }

  t530 = t531 * X[0ULL] * 0.85 / (intrm_sf_mf_145 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_145) * pmf_sqrt(t534);
  if (intrm_sf_mf_623 < 0.545727733814065) {
    t531 = X[0ULL] * 0.85 / (intrm_sf_mf_145 == 0.0 ? 1.0E-16 : intrm_sf_mf_145)
      * 0.667262351240862 * t531 * 100000.0;
  } else {
    t531 = t530 * 100000.0;
  }

  t530 = X[0ULL] - X[15ULL] > 0.01 ? t531 : 0.0;
  tlu2_2d_linear_linear_value(&sc_efOut[0ULL], &t58.mField0[0ULL], &t58.mField2
    [0ULL], &t55.mField0[0ULL], &t55.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = sc_efOut[0];
  t513 = pmf_sqrt(t502_idx_0 * 461.5);
  if (U_idx_6 <= 0.0) {
    intrm_sf_mf_623 = 0.0;
  } else {
    intrm_sf_mf_623 = U_idx_6 >= 1.0 ? 1.0 : U_idx_6;
  }

  intrm_sf_mf_149 = intrm_sf_mf_623 * 0.0002;
  t531 = X[88ULL] / (X[15ULL] == 0.0 ? 1.0E-16 : X[15ULL]);
  if (t531 <= 0.0) {
    t534 = 0.0;
  } else {
    t534 = t531 >= 1.0 ? 1.0 : t531;
  }

  t531 = (pmf_pow(t534, 1.5384615384615383) - pmf_pow(t534, 1.7692307692307689))
    * 8.6666666666666661;
  if (t531 <= 0.0) {
    t535 = 0.0;
  } else {
    t535 = t531 >= 1.0E+6 ? 1.0E+6 : t531;
  }

  t531 = X[15ULL] * intrm_sf_mf_149 * 0.85 / (t513 == 0.0 ? 1.0E-16 : t513) *
    pmf_sqrt(t535);
  if (t534 < 0.545727733814065) {
    intrm_sf_mf_149 = X[15ULL] * 0.85 / (t513 == 0.0 ? 1.0E-16 : t513) *
      0.667262351240862 * intrm_sf_mf_149 * 100000.0;
  } else {
    intrm_sf_mf_149 = t531 * 100000.0;
  }

  t531 = X[15ULL] - X[88ULL] > 0.01 ? intrm_sf_mf_149 : 0.0;
  if (X[160ULL] <= Steam_Generator_two_phase_fluid_v_out) {
    U_idx_5 = X[160ULL] / (Steam_Generator_two_phase_fluid_v_out == 0.0 ?
      1.0E-16 : Steam_Generator_two_phase_fluid_v_out) - 1.0;
  } else if (X[160ULL] >= t652) {
    U_idx_5 = (X[160ULL] - 4000.0) / (4000.0 - t652 == 0.0 ? 1.0E-16 : 4000.0 -
      t652) + 2.0;
  } else {
    t513 = t652 - Steam_Generator_two_phase_fluid_v_out;
    U_idx_5 = (X[160ULL] - Steam_Generator_two_phase_fluid_v_out) / (t513 == 0.0
      ? 1.0E-16 : t513);
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
  Steam_Generator_two_phase_fluid_v_out = t502_idx_0;
  tlu2_1d_linear_linear_value(&xc_efOut[0ULL], &t58.mField0[0ULL], &t58.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = xc_efOut[0];
  t652 = t502_idx_0;
  if (X[40ULL] <= Steam_Generator_two_phase_fluid_v_out) {
    intrm_sf_mf_149 = X[40ULL] / (Steam_Generator_two_phase_fluid_v_out == 0.0 ?
      1.0E-16 : Steam_Generator_two_phase_fluid_v_out) - 1.0;
  } else if (X[40ULL] >= t502_idx_0) {
    intrm_sf_mf_149 = (X[40ULL] - 4000.0) / (4000.0 - t502_idx_0 == 0.0 ?
      1.0E-16 : 4000.0 - t502_idx_0) + 2.0;
  } else {
    t513 = t502_idx_0 - Steam_Generator_two_phase_fluid_v_out;
    intrm_sf_mf_149 = (X[40ULL] - Steam_Generator_two_phase_fluid_v_out) / (t513
      == 0.0 ? 1.0E-16 : t513);
  }

  if (X[41ULL] <= Steam_Generator_two_phase_fluid_v_out) {
    t534 = X[41ULL] / (Steam_Generator_two_phase_fluid_v_out == 0.0 ? 1.0E-16 :
                       Steam_Generator_two_phase_fluid_v_out) - 1.0;
  } else if (X[41ULL] >= t502_idx_0) {
    t534 = (X[41ULL] - 4000.0) / (4000.0 - t502_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t502_idx_0) + 2.0;
  } else {
    t513 = t502_idx_0 - Steam_Generator_two_phase_fluid_v_out;
    t534 = (X[41ULL] - Steam_Generator_two_phase_fluid_v_out) / (t513 == 0.0 ?
      1.0E-16 : t513);
  }

  t508[0ULL] = ((intrm_sf_mf_149 < 0.0 ? intrm_sf_mf_149 : 0.0) + (t534 < 0.0 ?
    t534 : 0.0)) / 2.0;
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
  intrm_sf_mf_623 = t502_idx_0;
  tlu2_2d_linear_nearest_value(&cd_efOut[0ULL], &t52.mField0[0ULL],
    &t52.mField2[0ULL], &t51.mField0[0ULL], &t51.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = cd_efOut[0];
  t535 = t502_idx_0;
  tlu2_2d_linear_nearest_value(&dd_efOut[0ULL], &t52.mField0[0ULL],
    &t52.mField2[0ULL], &t51.mField0[0ULL], &t51.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField13, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = dd_efOut[0];
  intrm_sf_mf_623 = intrm_sf_mf_623 * t535 / (t502_idx_0 == 0.0 ? 1.0E-16 :
    t502_idx_0);
  t535 = X[43ULL] >= 0.0 ? X[43ULL] : 0.0;
  t536 = X[44ULL] >= 0.0 ? X[44ULL] : 0.0;
  intrm_sf_mf_145 = t535 + X[216ULL];
  t513 = (t535 + X[216ULL]) * (1.0 - pmf_exp(-X[42ULL] / (intrm_sf_mf_145 == 0.0
    ? 1.0E-16 : intrm_sf_mf_145)));
  t525 = intrm_sf_mf_623 * t536 + X[216ULL];
  t522 = t513 / (t525 == 0.0 ? 1.0E-16 : t525);
  t508[0ULL] = intrm_sf_mf_149;
  tlu2_linear_linear_prelookup(&ed_efOut.mField0[0ULL], &ed_efOut.mField1[0ULL],
    &ed_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t52 = ed_efOut;
  tlu2_2d_linear_linear_value(&fd_efOut[0ULL], &t52.mField0[0ULL], &t52.mField2
    [0ULL], &t58.mField0[0ULL], &t58.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = fd_efOut[0];
  intrm_sf_mf_634 = X[39ULL] * t502_idx_0 * 100.0 + X[40ULL];
  tlu2_2d_linear_linear_value(&gd_efOut[0ULL], &t45.mField0[0ULL], &t45.mField2
    [0ULL], &t58.mField0[0ULL], &t58.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = gd_efOut[0];
  Steam_Generator_two_phase_fluid_v_out = ((X[39ULL] * t502_idx_0 * 100.0 +
    Steam_Generator_two_phase_fluid_v_out) - intrm_sf_mf_634) / (intrm_sf_mf_623
    == 0.0 ? 1.0E-16 : intrm_sf_mf_623);
  intrm_sf_mf_623 = (1.0 - pmf_exp(-(t522 <= 15.0 ? t522 : 15.0))) * X[215ULL];
  intrm_sf_mf_497 = (intrm_sf_mf_623 > Steam_Generator_two_phase_fluid_v_out *
                     1000.0);
  tlu2_2d_linear_linear_value(&hd_efOut[0ULL], &t59.mField0[0ULL], &t59.mField2
    [0ULL], &t58.mField0[0ULL], &t58.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = hd_efOut[0];
  intrm_sf_mf_623 = X[39ULL] * t502_idx_0 * 100.0 + t652;
  t508[0ULL] = ((intrm_sf_mf_149 > 1.0 ? intrm_sf_mf_149 : 1.0) + (t534 > 1.0 ?
    t534 : 1.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&id_efOut.mField0[0ULL], &id_efOut.mField1[0ULL],
    &id_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t59 = id_efOut;
  tlu2_2d_linear_nearest_value(&jd_efOut[0ULL], &t59.mField0[0ULL],
    &t59.mField2[0ULL], &t51.mField0[0ULL], &t51.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = jd_efOut[0];
  Steam_Generator_two_phase_fluid_v_out = t502_idx_0;
  tlu2_2d_linear_nearest_value(&kd_efOut[0ULL], &t59.mField0[0ULL],
    &t59.mField2[0ULL], &t51.mField0[0ULL], &t51.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = kd_efOut[0];
  t652 = t502_idx_0;
  tlu2_2d_linear_nearest_value(&ld_efOut[0ULL], &t59.mField0[0ULL],
    &t59.mField2[0ULL], &t51.mField0[0ULL], &t51.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField13, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = ld_efOut[0];
  Steam_Generator_two_phase_fluid_v_out = Steam_Generator_two_phase_fluid_v_out *
    t652 / (t502_idx_0 == 0.0 ? 1.0E-16 : t502_idx_0);
  t513 = (t535 + X[216ULL]) * (1.0 - pmf_exp(-X[45ULL] / (intrm_sf_mf_145 == 0.0
    ? 1.0E-16 : intrm_sf_mf_145)));
  t525 = X[216ULL] + Steam_Generator_two_phase_fluid_v_out * t536;
  t652 = t513 / (t525 == 0.0 ? 1.0E-16 : t525);
  intrm_sf_mf_149 = t652 <= 15.0 ? t652 : 15.0;
  t652 = (intrm_sf_mf_623 - intrm_sf_mf_634) /
    (Steam_Generator_two_phase_fluid_v_out == 0.0 ? 1.0E-16 :
     Steam_Generator_two_phase_fluid_v_out);
  Steam_Generator_two_phase_fluid_v_out = (1.0 - pmf_exp(-intrm_sf_mf_149)) * X
    [215ULL];
  intrm_sf_mf_516 = (Steam_Generator_two_phase_fluid_v_out < t652 * 1000.0);
  t508[0ULL] = t534;
  tlu2_linear_linear_prelookup(&md_efOut.mField0[0ULL], &md_efOut.mField1[0ULL],
    &md_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t508[0ULL],
    &t319[0ULL], &t66[0ULL]);
  t51 = md_efOut;
  tlu2_2d_linear_linear_value(&nd_efOut[0ULL], &t51.mField0[0ULL], &t51.mField2
    [0ULL], &t58.mField0[0ULL], &t58.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t319[0ULL], &t316[0ULL], &t66[0ULL]);
  t502_idx_0 = nd_efOut[0];
  Steam_Generator_two_phase_fluid_v_out = t502_idx_0;
  t652 = ((((X[81ULL] * X[81ULL] - X[81ULL] * X[82ULL]) - X[81ULL] * X[83ULL]) +
           X[82ULL] * X[82ULL]) - X[82ULL] * X[83ULL]) + X[83ULL] * X[83ULL];
  if (t652 >= 0.0) {
    intrm_sf_mf_149 = pmf_sqrt(t652);
  } else {
    intrm_sf_mf_149 = -pmf_sqrt(-t652);
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
  t652 = t502_idx_0;
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
  intrm_sf_mf_623 = t502_idx_0;
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
  t534 = t502_idx_0;
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
  t535 = t502_idx_0;
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
  t536 = t502_idx_0;
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
  t522 = t502_idx_0;
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
  t538 = t502_idx_0;
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
  intrm_sf_mf_634 = t502_idx_0;
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
  t513 = t502_idx_0;
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
  t525 = t502_idx_0;
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
  intrm_sf_mf_145 = t502_idx_0;
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
  t544 = t502_idx_0;
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
  t546 = t508[0ULL];
  t441[0ULL] = (int32_T)((t512 <= 0.0) && ((size_t)Q_idx_0 == 5ULL));
  t441[1ULL] = (int32_T)((t512 >= 0.0) && ((size_t)Q_idx_0 == 4ULL));
  t441[2ULL] = (int32_T)((t514 < 0.0) && ((size_t)Q_idx_1 == 3ULL));
  t441[3ULL] = (int32_T)((t514 == 0.0) && ((size_t)Q_idx_1 == 3ULL));
  t441[4ULL] = (int32_T)((U_idx_1 >= 0.5) && ((size_t)Q_idx_1 == 2ULL));
  t441[5ULL] = (int32_T)((U_idx_1 < 0.5) && ((size_t)Q_idx_1 == 1ULL));
  t441[6ULL] = (int32_T)((t515 <= 0.0) && ((size_t)Q_idx_2 == 5ULL));
  t441[7ULL] = (int32_T)((t515 >= 0.0) && ((size_t)Q_idx_2 == 4ULL));
  t441[8ULL] = (int32_T)((t515 > 0.0) && ((size_t)Q_idx_2 == 3ULL));
  t441[9ULL] = (int32_T)((t515 < 0.0) && ((size_t)Q_idx_2 == 3ULL));
  t441[10ULL] = (int32_T)((t515 == 0.0) && ((size_t)Q_idx_2 == 3ULL));
  t441[11ULL] = (int32_T)((U_idx_1 >= 0.5) && ((size_t)Q_idx_2 == 2ULL));
  t441[12ULL] = (int32_T)((t512 > 0.0) && ((size_t)Q_idx_0 == 3ULL));
  t441[13ULL] = (int32_T)((U_idx_1 < 0.5) && ((size_t)Q_idx_2 == 1ULL));
  t441[14ULL] = (int32_T)((t512 < 0.0) && ((size_t)Q_idx_0 == 3ULL));
  t441[15ULL] = (int32_T)((t512 == 0.0) && ((size_t)Q_idx_0 == 3ULL));
  t441[16ULL] = (int32_T)((U_idx_1 >= 0.5) && ((size_t)Q_idx_0 == 2ULL));
  t441[17ULL] = (int32_T)((U_idx_1 < 0.5) && ((size_t)Q_idx_0 == 1ULL));
  t441[18ULL] = (int32_T)((t514 <= 0.0) && ((size_t)Q_idx_1 == 5ULL));
  t441[19ULL] = (int32_T)((t514 >= 0.0) && ((size_t)Q_idx_1 == 4ULL));
  t441[20ULL] = (int32_T)((t514 > 0.0) && ((size_t)Q_idx_1 == 3ULL));
  t441[21ULL] = (int32_T)(X[88ULL] <= 950.0);
  t441[22ULL] = (int32_T)(X[89ULL] >= 0.0);
  t441[23ULL] = (int32_T)(X[89ULL] <= 4000.0);
  t441[24ULL] = (int32_T)(X[92ULL] >= 0.01);
  t441[25ULL] = (int32_T)(X[92ULL] <= 950.0);
  t441[26ULL] = (int32_T)(X[93ULL] >= 0.0);
  t441[27ULL] = (int32_T)(X[93ULL] <= 4000.0);
  t441[28ULL] = (int32_T)(X[15ULL] >= 0.01);
  t441[29ULL] = (int32_T)(X[15ULL] <= 950.0);
  t441[30ULL] = (int32_T)(X[16ULL] >= 0.0);
  t441[31ULL] = (int32_T)(X[16ULL] <= 4000.0);
  t441[32ULL] = (int32_T)(X[133ULL] >= 0.01);
  t441[33ULL] = (int32_T)(X[133ULL] <= 950.0);
  t441[34ULL] = (int32_T)(X[134ULL] >= 0.0);
  t441[35ULL] = (int32_T)(X[134ULL] <= 4000.0);
  t441[36ULL] = (int32_T)(t522 > 0.0);
  t441[37ULL] = (int32_T)(X[142ULL] >= 273.16);
  t441[38ULL] = (int32_T)(X[142ULL] <= 608.8024);
  t441[39ULL] = (int32_T)(t538 > 0.0);
  t441[40ULL] = (int32_T)(X[144ULL] >= 0.018111);
  t441[41ULL] = (int32_T)(X[144ULL] <= 220.64);
  t441[42ULL] = (int32_T)(X[143ULL] >= 273.16);
  t441[43ULL] = (int32_T)(X[143ULL] <= 608.8024);
  t441[44ULL] = (int32_T)(intrm_sf_mf_634 > 0.0);
  t441[45ULL] = (int32_T)(X[165ULL] >= 273.16);
  t441[46ULL] = (int32_T)(X[165ULL] <= 608.8024);
  t441[47ULL] = (int32_T)(t536 > 0.0);
  t441[48ULL] = (int32_T)(t513 > 0.0);
  t441[49ULL] = (int32_T)(X[171ULL] >= 0.018111);
  t441[50ULL] = (int32_T)(X[171ULL] <= 220.64);
  t441[51ULL] = (int32_T)(X[170ULL] >= 273.16);
  t441[52ULL] = (int32_T)(X[170ULL] <= 608.8024);
  t441[53ULL] = (int32_T)(t525 > 0.0);
  t441[54ULL] = (int32_T)(X[173ULL] >= 0.018111);
  t441[55ULL] = (int32_T)(X[173ULL] <= 220.64);
  t441[56ULL] = (int32_T)(X[172ULL] >= 273.16);
  t441[57ULL] = (int32_T)(X[172ULL] <= 608.8024);
  t441[58ULL] = (int32_T)(intrm_sf_mf_145 > 0.0);
  t441[59ULL] = (int32_T)(X[19ULL] >= 0.018111);
  t441[60ULL] = (int32_T)(X[19ULL] <= 220.64);
  t441[61ULL] = (int32_T)(X[20ULL] >= 273.16);
  t441[62ULL] = (int32_T)(X[20ULL] <= 608.8024);
  t441[63ULL] = (int32_T)(intrm_sf_mf_623 > 0.0);
  t441[64ULL] = (int32_T)(t544 > 0.0);
  t441[65ULL] = (int32_T)(X[21ULL] >= 0.018111);
  t441[66ULL] = (int32_T)(X[21ULL] <= 220.64);
  t441[67ULL] = (int32_T)(X[22ULL] >= 273.16);
  t441[68ULL] = (int32_T)(X[22ULL] <= 608.8024);
  t441[69ULL] = (int32_T)(t502_idx_0 > 0.0);
  t441[70ULL] = (int32_T)(X[23ULL] >= 0.018111);
  t441[71ULL] = (int32_T)(X[23ULL] <= 220.64);
  t441[72ULL] = (int32_T)(X[24ULL] >= 273.16);
  t441[73ULL] = (int32_T)(X[24ULL] <= 608.8024);
  t441[74ULL] = (int32_T)(X[25ULL] >= 0.01);
  t441[75ULL] = (int32_T)(X[25ULL] <= 950.0);
  t441[76ULL] = (int32_T)(X[26ULL] >= 0.0);
  t441[77ULL] = (int32_T)(X[26ULL] <= 4000.0);
  t441[78ULL] = (int32_T)(X[154ULL] >= 0.0);
  t441[79ULL] = (int32_T)(X[154ULL] <= 4000.0);
  t441[80ULL] = (int32_T)(X[156ULL] >= 0.0);
  t441[81ULL] = (int32_T)(X[156ULL] <= 4000.0);
  t441[82ULL] = (int32_T)(X[200ULL] >= 0.0);
  t441[83ULL] = (int32_T)(X[200ULL] <= 4000.0);
  t441[84ULL] = (int32_T)(X[0ULL] < 220.64);
  t441[85ULL] = (int32_T)(X[32ULL] >= 0.0);
  t441[86ULL] = (int32_T)(X[32ULL] <= 4000.0);
  t441[87ULL] = (int32_T)(X[33ULL] >= 0.0);
  t441[88ULL] = (int32_T)(X[33ULL] <= 4000.0);
  t441[89ULL] = (int32_T)(t546 > 0.0);
  t441[90ULL] = (int32_T)(X[37ULL] >= 0.018111);
  t441[91ULL] = (int32_T)(X[37ULL] <= 220.64);
  t441[92ULL] = (int32_T)(X[38ULL] >= 273.16);
  t441[93ULL] = (int32_T)(X[38ULL] <= 608.8024);
  t441[94ULL] = (int32_T)(X[39ULL] >= 0.01);
  t441[95ULL] = (int32_T)(X[39ULL] <= 950.0);
  t441[96ULL] = (int32_T)(X[41ULL] >= 0.0);
  t441[97ULL] = (int32_T)(X[41ULL] <= 4000.0);
  t441[98ULL] = (int32_T)(t652 > 0.0);
  t441[99ULL] = (int32_T)(X[160ULL] >= 0.0);
  t441[100ULL] = (int32_T)(X[160ULL] <= 4000.0);
  t441[101ULL] = (int32_T)intrm_sf_mf_25;
  t441[102ULL] = (int32_T)intrm_sf_mf_52;
  t441[103ULL] = (int32_T)(X[130ULL] == 0.0);
  t441[104ULL] = (int32_T)((intrm_sf_mf_149 * 2.0 + X[82ULL] *
    1.7320508075688772) - X[83ULL] * 1.7320508075688772 >= 0.0);
  t441[105ULL] = (int32_T)((intrm_sf_mf_149 * 2.0 + X[81ULL] *
    1.7320508075688772) - X[82ULL] * 1.7320508075688772 >= 0.0);
  t441[106ULL] = (int32_T)((intrm_sf_mf_149 * 2.0 + X[83ULL] *
    1.7320508075688772) - X[81ULL] * 1.7320508075688772 >= 0.0);
  t441[107ULL] = (int32_T)(t530 >= 0.0);
  t441[108ULL] = (int32_T)(X[122ULL] >= 0.0);
  t441[109ULL] = (int32_T)(t531 >= 0.0);
  t441[110ULL] = (int32_T)(-((-X[95ULL] - X[122ULL]) + X[124ULL]) >= 0.0);
  t441[111ULL] = (int32_T)intrm_sf_mf_497;
  t441[112ULL] = (int32_T)intrm_sf_mf_516;
  t441[113ULL] = (int32_T)(Check_Valve_2P2_convection_A_v_in >= 0.0);
  t441[114ULL] = (int32_T)(t511 >= 0.0);
  t441[115ULL] = (int32_T)(intrm_sf_mf_92 >= 0.0);
  t441[116ULL] = (int32_T)(t520 >= 0.0);
  t441[117ULL] = (int32_T)(t516 >= 0.0);
  t441[118ULL] = (int32_T)(t523 >= 0.0);
  t441[119ULL] = (int32_T)(t521 >= 0.0);
  t441[120ULL] = (int32_T)(t529 >= 0.0);
  t441[121ULL] = (int32_T)(Fixed_Displacement_Pump_2P_v_out_A >= 0.0);
  t441[122ULL] = (int32_T)(t519 >= 0.0);
  t441[123ULL] = (int32_T)(0.0063674739754068094 / (X[27ULL] == 0.0 ? 1.0E-16 :
    X[27ULL]) + Preheating_Pipe_2P_v_A >= 0.0);
  t441[124ULL] = (int32_T)(0.0063674739754068094 / (X[27ULL] == 0.0 ? 1.0E-16 :
    X[27ULL]) + t509 >= 0.0);
  t441[125ULL] = (int32_T)(t510 >= 0.0);
  t441[126ULL] = (int32_T)(t528 >= 0.0);
  t441[127ULL] = (int32_T)(Pressure_Relief_Valve_2P1_convection_B_v_in >= 0.0);
  t441[128ULL] = (int32_T)(U_idx_5 >= 0.0);
  t441[129ULL] = (int32_T)(Steam_Generator_two_phase_fluid_v_out >= 0.0);
  t441[130ULL] = (int32_T)(X[62ULL] >= 0.018111);
  t441[131ULL] = (int32_T)(X[62ULL] <= 220.64);
  t441[132ULL] = (int32_T)(X[61ULL] >= 273.16);
  t441[133ULL] = (int32_T)(X[61ULL] <= 608.8024);
  t441[134ULL] = (int32_T)(X[64ULL] >= 0.018111);
  t441[135ULL] = (int32_T)(X[64ULL] <= 220.64);
  t441[136ULL] = (int32_T)(X[63ULL] >= 273.16);
  t441[137ULL] = (int32_T)(X[63ULL] <= 608.8024);
  t441[138ULL] = (int32_T)(X[0ULL] >= 0.01);
  t441[139ULL] = (int32_T)(X[0ULL] <= 950.0);
  t441[140ULL] = (int32_T)(X[72ULL] >= 0.0);
  t441[141ULL] = (int32_T)(X[72ULL] <= 4000.0);
  t441[142ULL] = (int32_T)(X[73ULL] >= 0.01);
  t441[143ULL] = (int32_T)(X[73ULL] <= 950.0);
  t441[144ULL] = (int32_T)(X[74ULL] >= 0.0);
  t441[145ULL] = (int32_T)(X[74ULL] <= 4000.0);
  t441[146ULL] = (int32_T)(t534 > 0.0);
  t441[147ULL] = (int32_T)(X[4ULL] >= 0.018111);
  t441[148ULL] = (int32_T)(X[4ULL] <= 220.64);
  t441[149ULL] = (int32_T)(X[5ULL] >= 273.16);
  t441[150ULL] = (int32_T)(X[5ULL] <= 608.8024);
  t441[151ULL] = (int32_T)(X[6ULL] >= 0.01);
  t441[152ULL] = (int32_T)(X[6ULL] <= 950.0);
  t441[153ULL] = (int32_T)(X[8ULL] >= 0.0);
  t441[154ULL] = (int32_T)(X[8ULL] <= 4000.0);
  t441[155ULL] = (int32_T)(t535 > 0.0);
  t441[156ULL] = (int32_T)(X[87ULL] >= 273.16);
  t441[157ULL] = (int32_T)(X[87ULL] <= 608.8024);
  t441[158ULL] = (int32_T)(X[91ULL] >= 0.018111);
  t441[159ULL] = (int32_T)(X[91ULL] <= 220.64);
  t441[160ULL] = (int32_T)(X[90ULL] >= 273.16);
  t441[161ULL] = (int32_T)(X[90ULL] <= 608.8024);
  t441[162ULL] = (int32_T)(X[88ULL] >= 0.01);
  for (b = 0; b < 163; b++) {
    out.mX[b] = t441[b];
  }

  (void)LC;
  (void)t654;
  return 0;
}
