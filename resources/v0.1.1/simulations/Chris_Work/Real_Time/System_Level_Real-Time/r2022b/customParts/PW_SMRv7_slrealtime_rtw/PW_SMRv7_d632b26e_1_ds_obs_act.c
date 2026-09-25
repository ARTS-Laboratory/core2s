/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv7/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv7_d632b26e_1_ds_sys_struct.h"
#include "PW_SMRv7_d632b26e_1_ds_obs_act.h"
#include "PW_SMRv7_d632b26e_1_ds.h"
#include "PW_SMRv7_d632b26e_1_ds_externals.h"
#include "PW_SMRv7_d632b26e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv7_d632b26e_1_ds_obs_act(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t541, NeDsMethodOutput *t542)
{
  ETTS0 ac_efOut;
  ETTS0 ad_efOut;
  ETTS0 cb_efOut;
  ETTS0 cc_efOut;
  ETTS0 d_efOut;
  ETTS0 ec_efOut;
  ETTS0 ed_efOut;
  ETTS0 efOut;
  ETTS0 fb_efOut;
  ETTS0 g_efOut;
  ETTS0 hc_efOut;
  ETTS0 ib_efOut;
  ETTS0 ic_efOut;
  ETTS0 j_efOut;
  ETTS0 k_efOut;
  ETTS0 mb_efOut;
  ETTS0 mc_efOut;
  ETTS0 o_efOut;
  ETTS0 q_efOut;
  ETTS0 qb_efOut;
  ETTS0 qc_efOut;
  ETTS0 s_efOut;
  ETTS0 sb_efOut;
  ETTS0 t1;
  ETTS0 t10;
  ETTS0 t12;
  ETTS0 t15;
  ETTS0 t16;
  ETTS0 t22;
  ETTS0 t23;
  ETTS0 t26;
  ETTS0 t29;
  ETTS0 t30;
  ETTS0 u_efOut;
  ETTS0 ub_efOut;
  ETTS0 uc_efOut;
  ETTS0 y_efOut;
  PmRealVector out;
  real_T t266[739];
  real_T X[183];
  real_T t331[2];
  real_T t334[2];
  real_T ab_efOut[1];
  real_T b_efOut[1];
  real_T bb_efOut[1];
  real_T bc_efOut[1];
  real_T bd_efOut[1];
  real_T c_efOut[1];
  real_T cd_efOut[1];
  real_T db_efOut[1];
  real_T dc_efOut[1];
  real_T dd_efOut[1];
  real_T e_efOut[1];
  real_T eb_efOut[1];
  real_T f_efOut[1];
  real_T fc_efOut[1];
  real_T fd_efOut[1];
  real_T gb_efOut[1];
  real_T gc_efOut[1];
  real_T gd_efOut[1];
  real_T h_efOut[1];
  real_T hb_efOut[1];
  real_T hd_efOut[1];
  real_T i_efOut[1];
  real_T jb_efOut[1];
  real_T jc_efOut[1];
  real_T kb_efOut[1];
  real_T kc_efOut[1];
  real_T l_efOut[1];
  real_T lb_efOut[1];
  real_T lc_efOut[1];
  real_T m_efOut[1];
  real_T n_efOut[1];
  real_T nb_efOut[1];
  real_T nc_efOut[1];
  real_T ob_efOut[1];
  real_T oc_efOut[1];
  real_T p_efOut[1];
  real_T pb_efOut[1];
  real_T pc_efOut[1];
  real_T r_efOut[1];
  real_T rb_efOut[1];
  real_T rc_efOut[1];
  real_T sc_efOut[1];
  real_T t311[1];
  real_T t317[1];
  real_T t320[1];
  real_T t_efOut[1];
  real_T tb_efOut[1];
  real_T tc_efOut[1];
  real_T v_efOut[1];
  real_T vb_efOut[1];
  real_T vc_efOut[1];
  real_T w_efOut[1];
  real_T wb_efOut[1];
  real_T wc_efOut[1];
  real_T x_efOut[1];
  real_T xb_efOut[1];
  real_T xc_efOut[1];
  real_T yb_efOut[1];
  real_T yc_efOut[1];
  real_T Condenser_two_phase_fluid_Pr_liq;
  real_T Controlled_Heat_Flow_Rate_Source_Q;
  real_T Preheating_Thermodynamic_Properties_Sensor_2P1_V;
  real_T Simscape_Component_nozzle_opening_out;
  real_T Thermodynamic_Properties_Sensor_2P1_T;
  real_T U_idx_0;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T U_idx_3;
  real_T intrm_sf_mf_373;
  real_T intrm_sf_mf_424;
  real_T intrm_sf_mf_426;
  real_T intrm_sf_mf_430;
  real_T intrm_sf_mf_444;
  real_T t310_idx_0;
  real_T t337;
  real_T t340;
  real_T t342;
  real_T t356;
  real_T t357;
  real_T t366;
  real_T t367;
  real_T t368;
  real_T t369;
  real_T t370;
  real_T t371;
  real_T t372;
  real_T t375;
  real_T t377;
  real_T t378;
  real_T t379;
  real_T t380;
  real_T t382;
  real_T t383;
  real_T t384;
  real_T t386;
  real_T t387;
  real_T t389;
  real_T t390;
  real_T t392;
  real_T t405;
  real_T t406;
  real_T t407;
  real_T t409;
  real_T t410;
  real_T t411;
  real_T t414;
  real_T t415;
  real_T t419;
  real_T t420;
  real_T t421;
  real_T t422;
  real_T t423;
  real_T t424;
  real_T t426;
  real_T t428;
  real_T t429;
  real_T t430;
  real_T t431;
  real_T t432;
  real_T t433;
  real_T t434;
  real_T t435;
  real_T t436;
  real_T t502;
  real_T t519;
  real_T t524;
  real_T t528;
  real_T t535;
  real_T t536;
  real_T t537;
  real_T t540;
  real_T zc_int17;
  real_T zc_int20;
  real_T zc_int22;
  real_T zc_int29;
  real_T zc_int3;
  size_t t170[1];
  size_t t32[1];
  size_t t33[1];
  size_t t336[1];
  size_t t53[1];
  int32_T M[129];
  int32_T b;
  boolean_T intrm_sf_mf_417;
  boolean_T intrm_sf_mf_433;
  boolean_T intrm_sf_mf_435;
  boolean_T intrm_sf_mf_436;
  boolean_T intrm_sf_mf_437;
  boolean_T intrm_sf_mf_439;
  boolean_T intrm_sf_mf_440;
  boolean_T intrm_sf_mf_449;
  boolean_T intrm_sf_mf_450;
  boolean_T intrm_sf_mf_50;
  boolean_T intrm_sf_mf_51;
  boolean_T intrm_sf_mf_53;
  boolean_T intrm_sf_mf_54;
  boolean_T intrm_sf_mf_55;
  boolean_T intrm_sf_mf_57;
  boolean_T intrm_sf_mf_58;
  boolean_T intrm_sf_mf_67;
  boolean_T intrm_sf_mf_68;
  boolean_T intrm_sf_mf_69;
  boolean_T intrm_sf_mf_70;
  for (b = 0; b < 129; b++) {
    M[b] = t541->mM.mX[b];
  }

  U_idx_0 = t541->mU.mX[0];
  U_idx_1 = t541->mU.mX[1];
  U_idx_2 = t541->mU.mX[2];
  U_idx_3 = t541->mU.mX[3];
  for (b = 0; b < 183; b++) {
    X[b] = t541->mX.mX[b];
  }

  out = t542->mOBS_ACT;
  t320[0ULL] = X[0ULL];
  t32[0] = 100ULL;
  t33[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t320[0ULL], &t32
    [0ULL], &t33[0ULL]);
  t30 = efOut;
  t334[0ULL] = t30.mField0[0ULL];
  t334[1ULL] = t30.mField0[1ULL];
  t336[0ULL] = t30.mField2[0ULL];
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t334[0ULL], &t336[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t32[0ULL], &t33[0ULL]);
  t317[0] = b_efOut[0];
  zc_int17 = t317[0ULL];
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t334[0ULL], &t336[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t32[0ULL], &t33[0ULL]);
  t311[0] = c_efOut[0];
  intrm_sf_mf_424 = t311[0ULL];
  t317[0ULL] = X[43ULL];
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t317[0ULL],
    &t32[0ULL], &t33[0ULL]);
  t26 = d_efOut;
  tlu2_1d_linear_linear_value(&e_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = e_efOut[0];
  zc_int20 = t310_idx_0;
  tlu2_1d_linear_linear_value(&f_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = f_efOut[0];
  if (X[44ULL] <= zc_int20) {
    Preheating_Thermodynamic_Properties_Sensor_2P1_V = X[44ULL] / (zc_int20 ==
      0.0 ? 1.0E-16 : zc_int20) - 1.0;
  } else if (X[44ULL] >= t310_idx_0) {
    Preheating_Thermodynamic_Properties_Sensor_2P1_V = (X[44ULL] - 4000.0) /
      (4000.0 - t310_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t310_idx_0) + 2.0;
  } else {
    t357 = t310_idx_0 - zc_int20;
    Preheating_Thermodynamic_Properties_Sensor_2P1_V = (X[44ULL] - zc_int20) /
      (t357 == 0.0 ? 1.0E-16 : t357);
  }

  t311[0ULL] = X[6ULL];
  tlu2_linear_linear_prelookup(&g_efOut.mField0[0ULL], &g_efOut.mField1[0ULL],
    &g_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t311[0ULL],
    &t32[0ULL], &t33[0ULL]);
  t22 = g_efOut;
  tlu2_1d_linear_linear_value(&h_efOut[0ULL], &t22.mField0[0ULL], &t22.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = h_efOut[0];
  zc_int20 = t310_idx_0;
  tlu2_1d_linear_linear_value(&i_efOut[0ULL], &t22.mField0[0ULL], &t22.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = i_efOut[0];
  zc_int22 = t310_idx_0;
  if (X[7ULL] <= zc_int20) {
    t340 = X[7ULL] / (zc_int20 == 0.0 ? 1.0E-16 : zc_int20) - 1.0;
  } else if (X[7ULL] >= t310_idx_0) {
    t340 = (X[7ULL] - 4000.0) / (4000.0 - t310_idx_0 == 0.0 ? 1.0E-16 : 4000.0 -
      t310_idx_0) + 2.0;
  } else {
    t536 = t310_idx_0 - zc_int20;
    t340 = (X[7ULL] - zc_int20) / (t536 == 0.0 ? 1.0E-16 : t536);
  }

  if (X[8ULL] <= zc_int20) {
    t337 = X[8ULL] / (zc_int20 == 0.0 ? 1.0E-16 : zc_int20) - 1.0;
  } else if (X[8ULL] >= t310_idx_0) {
    t337 = (X[8ULL] - 4000.0) / (4000.0 - t310_idx_0 == 0.0 ? 1.0E-16 : 4000.0 -
      t310_idx_0) + 2.0;
  } else {
    t367 = t310_idx_0 - zc_int20;
    t337 = (X[8ULL] - zc_int20) / (t367 == 0.0 ? 1.0E-16 : t367);
  }

  t311[0ULL] = ((t340 < 0.0 ? t340 : 0.0) + (t337 < 0.0 ? t337 : 0.0)) / 2.0;
  t53[0] = 50ULL;
  tlu2_linear_nearest_prelookup(&j_efOut.mField0[0ULL], &j_efOut.mField1[0ULL],
    &j_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t311[0ULL],
    &t53[0ULL], &t33[0ULL]);
  t23 = j_efOut;
  t311[0ULL] = X[6ULL];
  tlu2_linear_nearest_prelookup(&k_efOut.mField0[0ULL], &k_efOut.mField1[0ULL],
    &k_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t311[0ULL],
    &t32[0ULL], &t33[0ULL]);
  t1 = k_efOut;
  tlu2_2d_linear_nearest_value(&l_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t1.mField0[0ULL], &t1.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField10, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = l_efOut[0];
  Condenser_two_phase_fluid_Pr_liq = t310_idx_0;
  tlu2_2d_linear_nearest_value(&m_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t1.mField0[0ULL], &t1.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField8, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = m_efOut[0];
  t356 = t310_idx_0;
  tlu2_2d_linear_nearest_value(&n_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t1.mField0[0ULL], &t1.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField11, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = n_efOut[0];
  Condenser_two_phase_fluid_Pr_liq = Condenser_two_phase_fluid_Pr_liq * t356 /
    (t310_idx_0 == 0.0 ? 1.0E-16 : t310_idx_0);
  t356 = X[9ULL] >= 0.0 ? X[9ULL] : 0.0;
  t357 = X[10ULL] >= 0.0 ? X[10ULL] : 0.0;
  t342 = Condenser_two_phase_fluid_Pr_liq * t357;
  t370 = t342 + X[59ULL];
  t371 = t356 + X[59ULL];
  zc_int29 = t370 / (t371 == 0.0 ? 1.0E-16 : t371);
  if (zc_int29 <= 1.0) {
    zc_int3 = 1.0 - zc_int29 * 0.999999;
  } else {
    zc_int3 = 1.0E-6;
  }

  if (zc_int29 >= 1.0) {
    t540 = zc_int29 * 1.000001 - 1.0;
  } else {
    t540 = 1.0E-6;
  }

  if (t342 + X[59ULL] >= t356 + X[59ULL]) {
    t372 = t356 + X[59ULL];
    Controlled_Heat_Flow_Rate_Source_Q = t342 + X[59ULL];
    t536 = (1.000001 / (t372 == 0.0 ? 1.0E-16 : t372) - 0.999999 /
            (Controlled_Heat_Flow_Rate_Source_Q == 0.0 ? 1.0E-16 :
             Controlled_Heat_Flow_Rate_Source_Q)) * X[11ULL];
  } else {
    t310_idx_0 = t342 + X[59ULL];
    t375 = t356 + X[59ULL];
    t536 = (1.000001 / (t310_idx_0 == 0.0 ? 1.0E-16 : t310_idx_0) - 0.999999 /
            (t375 == 0.0 ? 1.0E-16 : t375)) * X[11ULL];
  }

  t342 = t536 <= 15.0 ? t536 : 15.0;
  t311[0ULL] = t340;
  tlu2_linear_linear_prelookup(&o_efOut.mField0[0ULL], &o_efOut.mField1[0ULL],
    &o_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t311[0ULL],
    &t53[0ULL], &t33[0ULL]);
  t23 = o_efOut;
  tlu2_2d_linear_linear_value(&p_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t22.mField0[0ULL], &t22.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = p_efOut[0];
  t537 = X[6ULL] * t310_idx_0 * 100.0 + X[7ULL];
  t311[0] = 0.0;
  tlu2_linear_linear_prelookup(&q_efOut.mField0[0ULL], &q_efOut.mField1[0ULL],
    &q_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t311[0ULL],
    &t53[0ULL], &t33[0ULL]);
  t15 = q_efOut;
  tlu2_2d_linear_linear_value(&r_efOut[0ULL], &t15.mField0[0ULL], &t15.mField2
    [0ULL], &t22.mField0[0ULL], &t22.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = r_efOut[0];
  t535 = X[6ULL] * t310_idx_0 * 100.0 + zc_int20;
  zc_int20 = (t535 - t537) / (Condenser_two_phase_fluid_Pr_liq == 0.0 ? 1.0E-16 :
    Condenser_two_phase_fluid_Pr_liq);
  t377 = (1.0 - pmf_exp(-t342)) * X[58ULL];
  t378 = pmf_exp(-t342) * t540 + zc_int3;
  t536 = t377 / (t378 == 0.0 ? 1.0E-16 : t378);
  intrm_sf_mf_67 = (t536 > zc_int20 * 1000.0);
  intrm_sf_mf_51 = (t537 < t535);
  intrm_sf_mf_53 = (t537 > t535);
  t311[0] = 1.0;
  tlu2_linear_linear_prelookup(&s_efOut.mField0[0ULL], &s_efOut.mField1[0ULL],
    &s_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t311[0ULL],
    &t53[0ULL], &t33[0ULL]);
  t16 = s_efOut;
  tlu2_2d_linear_linear_value(&t_efOut[0ULL], &t16.mField0[0ULL], &t16.mField2
    [0ULL], &t22.mField0[0ULL], &t22.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = t_efOut[0];
  t366 = X[6ULL] * t310_idx_0 * 100.0 + zc_int22;
  intrm_sf_mf_54 = (t537 > t366);
  intrm_sf_mf_57 = (X[58ULL] < 0.0);
  intrm_sf_mf_58 = (X[58ULL] > 0.0);
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (intrm_sf_mf_67) {
        t380 = X[58ULL] - zc_int3 * zc_int20 * 1000.0;
        t310_idx_0 = pmf_log((t540 * zc_int20 * 1000.0 + X[58ULL]) / (t380 ==
          0.0 ? 1.0E-16 : t380));
        zc_int22 = t310_idx_0 / (t342 == 0.0 ? 1.0E-16 : t342);
      } else {
        zc_int22 = 1.0;
      }
    } else {
      zc_int22 = 0.0;
    }
  } else {
    zc_int22 = intrm_sf_mf_57 ? intrm_sf_mf_54 ? 0.0 : (real_T)!intrm_sf_mf_53 :
      (real_T)intrm_sf_mf_51;
  }

  t311[0ULL] = ((t340 > 1.0 ? t340 : 1.0) + (t337 > 1.0 ? t337 : 1.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&u_efOut.mField0[0ULL], &u_efOut.mField1[0ULL],
    &u_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t311[0ULL],
    &t53[0ULL], &t33[0ULL]);
  t23 = u_efOut;
  tlu2_2d_linear_nearest_value(&v_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t1.mField0[0ULL], &t1.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField10, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = v_efOut[0];
  t340 = t310_idx_0;
  tlu2_2d_linear_nearest_value(&w_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t1.mField0[0ULL], &t1.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField8, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = w_efOut[0];
  t337 = t310_idx_0;
  tlu2_2d_linear_nearest_value(&x_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t1.mField0[0ULL], &t1.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField11, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = x_efOut[0];
  t340 = t340 * t337 / (t310_idx_0 == 0.0 ? 1.0E-16 : t310_idx_0);
  t337 = t340 * t357;
  t357 = (X[59ULL] + t337) / (t371 == 0.0 ? 1.0E-16 : t371);
  if (t357 <= 1.0) {
    t528 = 1.0 - t357 * 0.999999;
  } else {
    t528 = 1.0E-6;
  }

  if (t357 >= 1.0) {
    t367 = t357 * 1.000001 - 1.0;
  } else {
    t367 = 1.0E-6;
  }

  if (X[59ULL] + t337 >= t356 + X[59ULL]) {
    t386 = t356 + X[59ULL];
    t387 = X[59ULL] + t337;
    t368 = (1.000001 / (t386 == 0.0 ? 1.0E-16 : t386) - 0.999999 / (t387 == 0.0 ?
             1.0E-16 : t387)) * X[12ULL];
  } else {
    t310_idx_0 = X[59ULL] + t337;
    t389 = t356 + X[59ULL];
    t368 = (1.000001 / (t310_idx_0 == 0.0 ? 1.0E-16 : t310_idx_0) - 0.999999 /
            (t389 == 0.0 ? 1.0E-16 : t389)) * X[12ULL];
  }

  t337 = t368 <= 15.0 ? t368 : 15.0;
  t356 = (t366 - t537) / (t340 == 0.0 ? 1.0E-16 : t340);
  intrm_sf_mf_50 = (t537 < t366);
  t310_idx_0 = (1.0 - pmf_exp(-t337)) * X[58ULL];
  t392 = pmf_exp(-t337) * t367 + t528;
  t368 = t310_idx_0 / (t392 == 0.0 ? 1.0E-16 : t392);
  intrm_sf_mf_68 = (t368 < t356 * 1000.0);
  intrm_sf_mf_55 = (t537 <= t366);
  if (intrm_sf_mf_58) {
    t369 = intrm_sf_mf_51 ? 0.0 : (real_T)!intrm_sf_mf_50;
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (intrm_sf_mf_68) {
        t310_idx_0 = X[58ULL] - t528 * t356 * 1000.0;
        t310_idx_0 = pmf_log((t367 * t356 * 1000.0 + X[58ULL]) / (t310_idx_0 ==
          0.0 ? 1.0E-16 : t310_idx_0));
        t369 = t310_idx_0 / (t337 == 0.0 ? 1.0E-16 : t337);
      } else {
        t369 = 1.0;
      }
    } else {
      t369 = 0.0;
    }
  } else {
    t369 = intrm_sf_mf_51 ? 0.0 : (real_T)!intrm_sf_mf_55;
  }

  t372 = (1.0 - zc_int22) - t369;
  zc_int22 = t370 / (t371 == 0.0 ? 1.0E-16 : t371) /
    (Condenser_two_phase_fluid_Pr_liq == 0.0 ? 1.0E-16 :
     Condenser_two_phase_fluid_Pr_liq);
  t369 = X[13ULL] / (t371 == 0.0 ? 1.0E-16 : t371);
  t370 = t369 <= 15.0 ? t369 : 15.0;
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (intrm_sf_mf_67) {
        t369 = (zc_int29 - 1.0) * zc_int20 * 1000.0 + X[58ULL];
      } else {
        t369 = (zc_int29 * t536 + X[58ULL]) - zc_int20 * 1000.0;
      }
    } else if (intrm_sf_mf_50) {
      t369 = X[58ULL];
    } else {
      t369 = (t357 * t368 + X[58ULL]) - t356 * 1000.0;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (intrm_sf_mf_68) {
        t369 = (t357 - 1.0) * t356 * 1000.0 + X[58ULL];
      } else {
        t369 = (t357 * t368 + X[58ULL]) - t356 * 1000.0;
      }
    } else if (intrm_sf_mf_53) {
      t369 = X[58ULL];
    } else {
      t369 = (zc_int29 * t536 + X[58ULL]) - zc_int20 * 1000.0;
    }
  } else if (intrm_sf_mf_51) {
    t369 = (zc_int29 * t536 + X[58ULL]) - zc_int20 * 1000.0;
  } else if (intrm_sf_mf_55) {
    t369 = X[58ULL];
  } else {
    t369 = (t357 * t368 + X[58ULL]) - t356 * 1000.0;
  }

  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (intrm_sf_mf_67) {
        t371 = t535;
      } else {
        t371 = Condenser_two_phase_fluid_Pr_liq * t536 * 0.001 + t537;
      }
    } else if (intrm_sf_mf_50) {
      t371 = t537;
    } else {
      t371 = t340 * t368 * 0.001 + t537;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (intrm_sf_mf_68) {
        t371 = t366;
      } else {
        t371 = t340 * t368 * 0.001 + t537;
      }
    } else if (intrm_sf_mf_53) {
      t371 = t537;
    } else {
      t371 = Condenser_two_phase_fluid_Pr_liq * t536 * 0.001 + t537;
    }
  } else if (intrm_sf_mf_51) {
    t371 = Condenser_two_phase_fluid_Pr_liq * t536 * 0.001 + t537;
  } else if (intrm_sf_mf_55) {
    t371 = t537;
  } else {
    t371 = t340 * t368 * 0.001 + t537;
  }

  t310_idx_0 = (pmf_exp(t370 * t372) - 1.0) * t369;
  t369 = t310_idx_0 / (zc_int22 == 0.0 ? 1.0E-16 : zc_int22);
  intrm_sf_mf_67 = (t369 * 0.001 > t366 - t371);
  intrm_sf_mf_68 = (t371 < t366);
  intrm_sf_mf_69 = (t369 * 0.001 < t535 - t371);
  intrm_sf_mf_70 = (t371 > t535);
  t311[0ULL] = X[49ULL];
  tlu2_linear_linear_prelookup(&y_efOut.mField0[0ULL], &y_efOut.mField1[0ULL],
    &y_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t311[0ULL],
    &t32[0ULL], &t33[0ULL]);
  t12 = y_efOut;
  tlu2_1d_linear_linear_value(&ab_efOut[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = ab_efOut[0];
  t369 = t310_idx_0;
  tlu2_1d_linear_linear_value(&bb_efOut[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = bb_efOut[0];
  t372 = t310_idx_0;
  if (X[50ULL] <= t369) {
    t371 = X[50ULL] / (t369 == 0.0 ? 1.0E-16 : t369) - 1.0;
  } else if (X[50ULL] >= t310_idx_0) {
    t371 = (X[50ULL] - 4000.0) / (4000.0 - t310_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t310_idx_0) + 2.0;
  } else {
    t406 = t310_idx_0 - t369;
    t371 = (X[50ULL] - t369) / (t406 == 0.0 ? 1.0E-16 : t406);
  }

  t311[0ULL] = X[53ULL];
  tlu2_linear_linear_prelookup(&cb_efOut.mField0[0ULL], &cb_efOut.mField1[0ULL],
    &cb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t311[0ULL],
    &t32[0ULL], &t33[0ULL]);
  t10 = cb_efOut;
  tlu2_1d_linear_linear_value(&db_efOut[0ULL], &t10.mField0[0ULL], &t10.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = db_efOut[0];
  Controlled_Heat_Flow_Rate_Source_Q = t310_idx_0;
  tlu2_1d_linear_linear_value(&eb_efOut[0ULL], &t10.mField0[0ULL], &t10.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = eb_efOut[0];
  if (X[54ULL] <= Controlled_Heat_Flow_Rate_Source_Q) {
    t375 = X[54ULL] / (Controlled_Heat_Flow_Rate_Source_Q == 0.0 ? 1.0E-16 :
                       Controlled_Heat_Flow_Rate_Source_Q) - 1.0;
  } else if (X[54ULL] >= t310_idx_0) {
    t375 = (X[54ULL] - 4000.0) / (4000.0 - t310_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t310_idx_0) + 2.0;
  } else {
    t411 = t310_idx_0 - Controlled_Heat_Flow_Rate_Source_Q;
    t375 = (X[54ULL] - Controlled_Heat_Flow_Rate_Source_Q) / (t411 == 0.0 ?
      1.0E-16 : t411);
  }

  Controlled_Heat_Flow_Rate_Source_Q = U_idx_0 * 1000.0;
  t311[0ULL] = X[79ULL];
  tlu2_linear_linear_prelookup(&fb_efOut.mField0[0ULL], &fb_efOut.mField1[0ULL],
    &fb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t311[0ULL],
    &t32[0ULL], &t33[0ULL]);
  t1 = fb_efOut;
  tlu2_1d_linear_linear_value(&gb_efOut[0ULL], &t1.mField0[0ULL], &t1.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = gb_efOut[0];
  t377 = t310_idx_0;
  tlu2_1d_linear_linear_value(&hb_efOut[0ULL], &t1.mField0[0ULL], &t1.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = hb_efOut[0];
  if (X[80ULL] <= t377) {
    t379 = X[80ULL] / (t377 == 0.0 ? 1.0E-16 : t377) - 1.0;
  } else if (X[80ULL] >= t310_idx_0) {
    t379 = (X[80ULL] - 4000.0) / (4000.0 - t310_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t310_idx_0) + 2.0;
  } else {
    intrm_sf_mf_444 = t310_idx_0 - t377;
    t379 = (X[80ULL] - t377) / (intrm_sf_mf_444 == 0.0 ? 1.0E-16 :
      intrm_sf_mf_444);
  }

  t377 = -X[134ULL] + X[91ULL];
  t378 = -X[135ULL] + X[93ULL];
  t380 = U_idx_2 * 1000.0;
  t382 = -X[141ULL] + X[47ULL];
  t383 = -X[142ULL] + X[45ULL];
  t311[0ULL] = Preheating_Thermodynamic_Properties_Sensor_2P1_V;
  tlu2_linear_linear_prelookup(&ib_efOut.mField0[0ULL], &ib_efOut.mField1[0ULL],
    &ib_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t311[0ULL],
    &t53[0ULL], &t33[0ULL]);
  t23 = ib_efOut;
  tlu2_2d_linear_linear_value(&jb_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t26.mField0[0ULL], &t26.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = jb_efOut[0];
  Preheating_Thermodynamic_Properties_Sensor_2P1_V = t310_idx_0;
  t384 = X[43ULL] * t310_idx_0 * 100.0 + X[44ULL];
  tlu2_2d_linear_linear_value(&kb_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t26.mField0[0ULL], &t26.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = kb_efOut[0];
  t386 = t310_idx_0;
  tlu2_2d_linear_linear_value(&lb_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t26.mField0[0ULL], &t26.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = lb_efOut[0];
  t387 = t310_idx_0;
  t311[0ULL] = t379;
  tlu2_linear_linear_prelookup(&mb_efOut.mField0[0ULL], &mb_efOut.mField1[0ULL],
    &mb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t311[0ULL],
    &t53[0ULL], &t33[0ULL]);
  t23 = mb_efOut;
  tlu2_2d_linear_linear_value(&nb_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t1.mField0[0ULL], &t1.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = nb_efOut[0];
  t379 = t310_idx_0;
  tlu2_2d_linear_linear_value(&ob_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t1.mField0[0ULL], &t1.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = ob_efOut[0];
  t389 = t310_idx_0;
  tlu2_2d_linear_linear_value(&pb_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t1.mField0[0ULL], &t1.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = pb_efOut[0];
  t390 = t310_idx_0;
  t405 = X[0ULL] - X[49ULL];
  if (X[97ULL] <= zc_int17) {
    t406 = X[97ULL] / (zc_int17 == 0.0 ? 1.0E-16 : zc_int17) - 1.0;
  } else if (X[97ULL] >= intrm_sf_mf_424) {
    t406 = (X[97ULL] - 4000.0) / (4000.0 - intrm_sf_mf_424 == 0.0 ? 1.0E-16 :
      4000.0 - intrm_sf_mf_424) + 2.0;
  } else {
    t392 = intrm_sf_mf_424 - zc_int17;
    t406 = (X[97ULL] - zc_int17) / (t392 == 0.0 ? 1.0E-16 : t392);
  }

  t311[0ULL] = t406;
  tlu2_linear_linear_prelookup(&qb_efOut.mField0[0ULL], &qb_efOut.mField1[0ULL],
    &qb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t311[0ULL],
    &t53[0ULL], &t33[0ULL]);
  t29 = qb_efOut;
  tlu2_2d_linear_linear_value(&rb_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], &t30.mField0[0ULL], &t30.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t320[0] = rb_efOut[0];
  t406 = t320[0ULL];
  t407 = t405 / 30.0;
  if (t407 <= 0.0) {
    t310_idx_0 = 0.0;
  } else {
    t310_idx_0 = t407 >= 1.0E+6 ? 1.0E+6 : t407;
  }

  t407 = pmf_sqrt(t310_idx_0) * 0.5;
  if (U_idx_3 <= 0.0) {
    t409 = 0.0;
  } else {
    t409 = U_idx_3 >= 1.0 ? 1.0 : U_idx_3;
  }

  t410 = t407 * t409;
  t519 = fabs(t410);
  t407 = t519 / 0.5;
  t411 = 0.8 - (t407 - 0.8) * (t407 - 0.8) * 0.2;
  t407 = t406 * X[0ULL] * 100.0 + X[97ULL];
  if (t369 <= t369) {
    t406 = t369 / (t369 == 0.0 ? 1.0E-16 : t369) - 1.0;
  } else if (t369 >= t372) {
    t406 = (t369 - 4000.0) / (4000.0 - t372 == 0.0 ? 1.0E-16 : 4000.0 - t372) +
      2.0;
  } else {
    t392 = t372 - t369;
    t406 = (t369 - t369) / (t392 == 0.0 ? 1.0E-16 : t392);
  }

  t311[0ULL] = t406;
  tlu2_linear_linear_prelookup(&sb_efOut.mField0[0ULL], &sb_efOut.mField1[0ULL],
    &sb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t311[0ULL],
    &t53[0ULL], &t33[0ULL]);
  t22 = sb_efOut;
  tlu2_2d_linear_linear_value(&tb_efOut[0ULL], &t22.mField0[0ULL], &t22.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = tb_efOut[0];
  Simscape_Component_nozzle_opening_out = X[49ULL] * t310_idx_0 * 100.0 + t369;
  if (t372 <= t369) {
    t406 = t372 / (t369 == 0.0 ? 1.0E-16 : t369) - 1.0;
  } else if (t372 >= t372) {
    t406 = (t372 - 4000.0) / (4000.0 - t372 == 0.0 ? 1.0E-16 : 4000.0 - t372) +
      2.0;
  } else {
    t392 = t372 - t369;
    t406 = (t372 - t369) / (t392 == 0.0 ? 1.0E-16 : t392);
  }

  t311[0ULL] = t406;
  tlu2_linear_linear_prelookup(&ub_efOut.mField0[0ULL], &ub_efOut.mField1[0ULL],
    &ub_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t311[0ULL],
    &t53[0ULL], &t33[0ULL]);
  t23 = ub_efOut;
  tlu2_2d_linear_linear_value(&vb_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = vb_efOut[0];
  t406 = X[49ULL] * t310_idx_0 * 100.0 + t372;
  tlu2_2d_linear_linear_value(&wb_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], &t30.mField0[0ULL], &t30.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t317[0] = wb_efOut[0];
  t369 = t317[0ULL];
  tlu2_2d_linear_linear_value(&xb_efOut[0ULL], &t22.mField0[0ULL], &t22.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = xb_efOut[0];
  t372 = t310_idx_0;
  tlu2_2d_linear_linear_value(&yb_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = yb_efOut[0];
  t502 = t310_idx_0 - t372;
  t372 = (t369 - t372) / (t502 == 0.0 ? 1.0E-16 : t502);
  if (t372 <= 0.0) {
    intrm_sf_mf_373 = 0.0;
  } else {
    intrm_sf_mf_373 = t372 >= 1.0 ? 1.0 : t372;
  }

  t372 = (t406 - Simscape_Component_nozzle_opening_out) * intrm_sf_mf_373 +
    Simscape_Component_nozzle_opening_out;
  t406 = t407 - t372;
  t407 = intrm_sf_mf_373;
  Simscape_Component_nozzle_opening_out = t409;
  if (X[26ULL] < zc_int17) {
    t409 = X[26ULL] / (zc_int17 == 0.0 ? 1.0E-16 : zc_int17) - 1.0;
  } else {
    t409 = 0.0;
  }

  if (X[27ULL] > intrm_sf_mf_424) {
    intrm_sf_mf_373 = (X[27ULL] - 4000.0) / (4000.0 - intrm_sf_mf_424 == 0.0 ?
      1.0E-16 : 4000.0 - intrm_sf_mf_424) + 2.0;
  } else {
    intrm_sf_mf_373 = 1.0;
  }

  t311[0ULL] = t409;
  t170[0] = 25ULL;
  tlu2_linear_linear_prelookup(&ac_efOut.mField0[0ULL], &ac_efOut.mField1[0ULL],
    &ac_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t311[0ULL],
    &t170[0ULL], &t33[0ULL]);
  t26 = ac_efOut;
  tlu2_2d_linear_linear_value(&bc_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], &t334[0ULL], &t336[0ULL], ((_NeDynamicSystem*)(LC))->mField31,
    &t170[0ULL], &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = bc_efOut[0];
  t409 = t310_idx_0;
  t311[0ULL] = intrm_sf_mf_373;
  tlu2_linear_linear_prelookup(&cc_efOut.mField0[0ULL], &cc_efOut.mField1[0ULL],
    &cc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t311[0ULL],
    &t170[0ULL], &t33[0ULL]);
  t23 = cc_efOut;
  tlu2_2d_linear_linear_value(&dc_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t334[0ULL], &t336[0ULL], ((_NeDynamicSystem*)(LC))->mField32,
    &t170[0ULL], &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = dc_efOut[0];
  t502 = X[28ULL] * t409 + X[29ULL] * t310_idx_0;
  t409 = X[28ULL] * t409 / (t502 == 0.0 ? 1.0E-16 : t502);
  if (X[147ULL] <= zc_int17) {
    intrm_sf_mf_373 = X[147ULL] / (zc_int17 == 0.0 ? 1.0E-16 : zc_int17) - 1.0;
  } else if (X[147ULL] >= intrm_sf_mf_424) {
    intrm_sf_mf_373 = (X[147ULL] - 4000.0) / (4000.0 - intrm_sf_mf_424 == 0.0 ?
      1.0E-16 : 4000.0 - intrm_sf_mf_424) + 2.0;
  } else {
    t392 = intrm_sf_mf_424 - zc_int17;
    intrm_sf_mf_373 = (X[147ULL] - zc_int17) / (t392 == 0.0 ? 1.0E-16 : t392);
  }

  t311[0ULL] = X[33ULL];
  tlu2_linear_linear_prelookup(&ec_efOut.mField0[0ULL], &ec_efOut.mField1[0ULL],
    &ec_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t311[0ULL],
    &t32[0ULL], &t33[0ULL]);
  t23 = ec_efOut;
  tlu2_1d_linear_linear_value(&fc_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = fc_efOut[0];
  zc_int17 = t310_idx_0;
  tlu2_1d_linear_linear_value(&gc_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = gc_efOut[0];
  intrm_sf_mf_424 = t310_idx_0;
  if (X[34ULL] <= zc_int17) {
    t414 = X[34ULL] / (zc_int17 == 0.0 ? 1.0E-16 : zc_int17) - 1.0;
  } else if (X[34ULL] >= t310_idx_0) {
    t414 = (X[34ULL] - 4000.0) / (4000.0 - t310_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t310_idx_0) + 2.0;
  } else {
    t392 = t310_idx_0 - zc_int17;
    t414 = (X[34ULL] - zc_int17) / (t392 == 0.0 ? 1.0E-16 : t392);
  }

  if (X[35ULL] <= zc_int17) {
    intrm_sf_mf_430 = X[35ULL] / (zc_int17 == 0.0 ? 1.0E-16 : zc_int17) - 1.0;
  } else if (X[35ULL] >= t310_idx_0) {
    intrm_sf_mf_430 = (X[35ULL] - 4000.0) / (4000.0 - t310_idx_0 == 0.0 ?
      1.0E-16 : 4000.0 - t310_idx_0) + 2.0;
  } else {
    t392 = t310_idx_0 - zc_int17;
    intrm_sf_mf_430 = (X[35ULL] - zc_int17) / (t392 == 0.0 ? 1.0E-16 : t392);
  }

  t311[0ULL] = ((t414 < 0.0 ? t414 : 0.0) + (intrm_sf_mf_430 < 0.0 ?
    intrm_sf_mf_430 : 0.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&hc_efOut.mField0[0ULL], &hc_efOut.mField1[0ULL],
    &hc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t311[0ULL],
    &t53[0ULL], &t33[0ULL]);
  t26 = hc_efOut;
  t311[0ULL] = X[33ULL];
  tlu2_linear_nearest_prelookup(&ic_efOut.mField0[0ULL], &ic_efOut.mField1[0ULL],
    &ic_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t311[0ULL],
    &t32[0ULL], &t33[0ULL]);
  t22 = ic_efOut;
  tlu2_2d_linear_nearest_value(&jc_efOut[0ULL], &t26.mField0[0ULL],
    &t26.mField2[0ULL], &t22.mField0[0ULL], &t22.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = jc_efOut[0];
  t415 = t310_idx_0;
  tlu2_2d_linear_nearest_value(&kc_efOut[0ULL], &t26.mField0[0ULL],
    &t26.mField2[0ULL], &t22.mField0[0ULL], &t22.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = kc_efOut[0];
  intrm_sf_mf_444 = t310_idx_0;
  tlu2_2d_linear_nearest_value(&lc_efOut[0ULL], &t26.mField0[0ULL],
    &t26.mField2[0ULL], &t22.mField0[0ULL], &t22.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = lc_efOut[0];
  t415 = t415 * intrm_sf_mf_444 / (t310_idx_0 == 0.0 ? 1.0E-16 : t310_idx_0);
  intrm_sf_mf_444 = X[37ULL] >= 0.0 ? X[37ULL] : 0.0;
  intrm_sf_mf_426 = X[38ULL] >= 0.0 ? X[38ULL] : 0.0;
  t502 = intrm_sf_mf_444 + X[164ULL];
  t524 = (intrm_sf_mf_444 + X[164ULL]) * (1.0 - pmf_exp(-X[36ULL] / (t502 == 0.0
    ? 1.0E-16 : t502)));
  t519 = t415 * intrm_sf_mf_426 + X[164ULL];
  t419 = t524 / (t519 == 0.0 ? 1.0E-16 : t519);
  t420 = t419 <= 15.0 ? t419 : 15.0;
  t311[0ULL] = t414;
  tlu2_linear_linear_prelookup(&mc_efOut.mField0[0ULL], &mc_efOut.mField1[0ULL],
    &mc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t311[0ULL],
    &t53[0ULL], &t33[0ULL]);
  t1 = mc_efOut;
  tlu2_2d_linear_linear_value(&nc_efOut[0ULL], &t1.mField0[0ULL], &t1.mField2
    [0ULL], &t23.mField0[0ULL], &t23.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = nc_efOut[0];
  t421 = X[33ULL] * t310_idx_0 * 100.0 + X[34ULL];
  tlu2_2d_linear_linear_value(&oc_efOut[0ULL], &t15.mField0[0ULL], &t15.mField2
    [0ULL], &t23.mField0[0ULL], &t23.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = oc_efOut[0];
  t422 = X[33ULL] * t310_idx_0 * 100.0 + zc_int17;
  zc_int17 = (t422 - t421) / (t415 == 0.0 ? 1.0E-16 : t415);
  t419 = (1.0 - pmf_exp(-t420)) * X[163ULL];
  intrm_sf_mf_449 = (t419 > zc_int17 * 1000.0);
  intrm_sf_mf_433 = (t421 < t422);
  intrm_sf_mf_435 = (t421 > t422);
  tlu2_2d_linear_linear_value(&pc_efOut[0ULL], &t16.mField0[0ULL], &t16.mField2
    [0ULL], &t23.mField0[0ULL], &t23.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = pc_efOut[0];
  t424 = X[33ULL] * t310_idx_0 * 100.0 + intrm_sf_mf_424;
  intrm_sf_mf_436 = (t421 > t424);
  intrm_sf_mf_439 = (X[163ULL] < 0.0);
  intrm_sf_mf_440 = (X[163ULL] > 0.0);
  if (intrm_sf_mf_440) {
    if (intrm_sf_mf_433) {
      if (intrm_sf_mf_449) {
        t392 = -pmf_log((X[163ULL] - zc_int17 * 1000.0) / (X[163ULL] == 0.0 ?
          1.0E-16 : X[163ULL]));
        intrm_sf_mf_424 = t392 / (t420 == 0.0 ? 1.0E-16 : t420);
      } else {
        intrm_sf_mf_424 = 1.0;
      }
    } else {
      intrm_sf_mf_424 = 0.0;
    }
  } else {
    intrm_sf_mf_424 = intrm_sf_mf_439 ? intrm_sf_mf_436 ? 0.0 : (real_T)
      !intrm_sf_mf_435 : (real_T)intrm_sf_mf_433;
  }

  t311[0ULL] = ((t414 > 1.0 ? t414 : 1.0) + (intrm_sf_mf_430 > 1.0 ?
    intrm_sf_mf_430 : 1.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&qc_efOut.mField0[0ULL], &qc_efOut.mField1[0ULL],
    &qc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t311[0ULL],
    &t53[0ULL], &t33[0ULL]);
  t23 = qc_efOut;
  tlu2_2d_linear_nearest_value(&rc_efOut[0ULL], &t23.mField0[0ULL],
    &t23.mField2[0ULL], &t22.mField0[0ULL], &t22.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = rc_efOut[0];
  t414 = t310_idx_0;
  tlu2_2d_linear_nearest_value(&sc_efOut[0ULL], &t23.mField0[0ULL],
    &t23.mField2[0ULL], &t22.mField0[0ULL], &t22.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = sc_efOut[0];
  intrm_sf_mf_430 = t310_idx_0;
  tlu2_2d_linear_nearest_value(&tc_efOut[0ULL], &t23.mField0[0ULL],
    &t23.mField2[0ULL], &t22.mField0[0ULL], &t22.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t310_idx_0 = tc_efOut[0];
  t414 = t414 * intrm_sf_mf_430 / (t310_idx_0 == 0.0 ? 1.0E-16 : t310_idx_0);
  t392 = (intrm_sf_mf_444 + X[164ULL]) * (1.0 - pmf_exp(-X[39ULL] / (t502 == 0.0
    ? 1.0E-16 : t502)));
  t524 = X[164ULL] + t414 * intrm_sf_mf_426;
  intrm_sf_mf_430 = t392 / (t524 == 0.0 ? 1.0E-16 : t524);
  intrm_sf_mf_426 = intrm_sf_mf_430 <= 15.0 ? intrm_sf_mf_430 : 15.0;
  intrm_sf_mf_430 = (t424 - t421) / (t414 == 0.0 ? 1.0E-16 : t414);
  intrm_sf_mf_417 = (t421 < t424);
  t423 = (1.0 - pmf_exp(-intrm_sf_mf_426)) * X[163ULL];
  intrm_sf_mf_450 = (t423 < intrm_sf_mf_430 * 1000.0);
  intrm_sf_mf_437 = (t421 <= t424);
  if (intrm_sf_mf_440) {
    t310_idx_0 = intrm_sf_mf_433 ? 0.0 : (real_T)!intrm_sf_mf_417;
  } else if (intrm_sf_mf_439) {
    if (intrm_sf_mf_436) {
      if (intrm_sf_mf_450) {
        t392 = -pmf_log((X[163ULL] - intrm_sf_mf_430 * 1000.0) / (X[163ULL] ==
          0.0 ? 1.0E-16 : X[163ULL]));
        t310_idx_0 = t392 / (intrm_sf_mf_426 == 0.0 ? 1.0E-16 : intrm_sf_mf_426);
      } else {
        t310_idx_0 = 1.0;
      }
    } else {
      t310_idx_0 = 0.0;
    }
  } else {
    t310_idx_0 = intrm_sf_mf_433 ? 0.0 : (real_T)!intrm_sf_mf_437;
  }

  t426 = (1.0 - intrm_sf_mf_424) - t310_idx_0;
  t392 = (intrm_sf_mf_444 + X[164ULL]) * (1.0 - pmf_exp(-X[40ULL] / (t502 == 0.0
    ? 1.0E-16 : t502)));
  t502 = t519 / (t415 == 0.0 ? 1.0E-16 : t415);
  intrm_sf_mf_424 = t392 / (t502 == 0.0 ? 1.0E-16 : t502);
  if (intrm_sf_mf_440) {
    if (intrm_sf_mf_433) {
      intrm_sf_mf_444 = X[163ULL] - zc_int17 * 1000.0;
    } else if (intrm_sf_mf_417) {
      intrm_sf_mf_444 = X[163ULL];
    } else {
      intrm_sf_mf_444 = X[163ULL] - intrm_sf_mf_430 * 1000.0;
    }
  } else if (intrm_sf_mf_439) {
    if (intrm_sf_mf_436) {
      intrm_sf_mf_444 = X[163ULL] - intrm_sf_mf_430 * 1000.0;
    } else if (intrm_sf_mf_435) {
      intrm_sf_mf_444 = X[163ULL];
    } else {
      intrm_sf_mf_444 = X[163ULL] - zc_int17 * 1000.0;
    }
  } else if (intrm_sf_mf_433) {
    intrm_sf_mf_444 = zc_int17 * 1000.0 + X[163ULL];
  } else if (intrm_sf_mf_437) {
    intrm_sf_mf_444 = X[163ULL];
  } else {
    intrm_sf_mf_444 = intrm_sf_mf_430 * 1000.0 + X[163ULL];
  }

  if (intrm_sf_mf_440) {
    if (intrm_sf_mf_433) {
      if (intrm_sf_mf_449) {
        t310_idx_0 = t422;
      } else {
        t310_idx_0 = t415 * t419 * 0.001 + t421;
      }
    } else if (intrm_sf_mf_417) {
      t310_idx_0 = t421;
    } else {
      t310_idx_0 = t414 * t423 * 0.001 + t421;
    }
  } else if (intrm_sf_mf_439) {
    if (intrm_sf_mf_436) {
      if (intrm_sf_mf_450) {
        t310_idx_0 = t424;
      } else {
        t310_idx_0 = t414 * t423 * 0.001 + t421;
      }
    } else if (intrm_sf_mf_435) {
      t310_idx_0 = t421;
    } else {
      t310_idx_0 = t415 * t419 * 0.001 + t421;
    }
  } else if (intrm_sf_mf_433) {
    t310_idx_0 = t415 * t419 * 0.001 + t421;
  } else if (intrm_sf_mf_437) {
    t310_idx_0 = t421;
  } else {
    t310_idx_0 = t414 * t423 * 0.001 + t421;
  }

  t429 = intrm_sf_mf_424 * intrm_sf_mf_444 * t426;
  intrm_sf_mf_449 = (t429 * 0.001 > t424 - t310_idx_0);
  intrm_sf_mf_450 = (t429 * 0.001 < t422 - t310_idx_0);
  t311[0ULL] = intrm_sf_mf_373;
  tlu2_linear_linear_prelookup(&uc_efOut.mField0[0ULL], &uc_efOut.mField1[0ULL],
    &uc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t311[0ULL],
    &t53[0ULL], &t33[0ULL]);
  t1 = uc_efOut;
  tlu2_2d_linear_linear_value(&vc_efOut[0ULL], &t1.mField0[0ULL], &t1.mField2
    [0ULL], &t334[0ULL], &t336[0ULL], ((_NeDynamicSystem*)(LC))->mField0, &t53
    [0ULL], &t32[0ULL], &t33[0ULL]);
  t311[0] = vc_efOut[0];
  t519 = -t311[0ULL];
  intrm_sf_mf_373 = -t519;
  tlu2_2d_linear_linear_value(&wc_efOut[0ULL], &t1.mField0[0ULL], &t1.mField2
    [0ULL], &t334[0ULL], &t336[0ULL], ((_NeDynamicSystem*)(LC))->mField30, &t53
    [0ULL], &t32[0ULL], &t33[0ULL]);
  t311[0] = wc_efOut[0];
  t519 = -t311[0ULL];
  t426 = -t519;
  tlu2_2d_linear_linear_value(&xc_efOut[0ULL], &t1.mField0[0ULL], &t1.mField2
    [0ULL], &t334[0ULL], &t336[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t53
    [0ULL], &t32[0ULL], &t33[0ULL]);
  t311[0] = xc_efOut[0];
  t519 = -t311[0ULL];
  Thermodynamic_Properties_Sensor_2P1_T = -t519;
  t519 = -t320[0ULL];
  t428 = -t519;
  t429 = X[0ULL] * -t519 * 100.0 + X[97ULL];
  t519 = -t317[0ULL];
  t430 = -t519;
  t331[0ULL] = t29.mField0[0ULL];
  t331[1ULL] = t29.mField0[1ULL];
  t170[0ULL] = t29.mField2[0ULL];
  tlu2_2d_linear_linear_value(&yc_efOut[0ULL], &t331[0ULL], &t170[0ULL], &t334
    [0ULL], &t336[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t53[0ULL], &t32
    [0ULL], &t33[0ULL]);
  t317[0] = yc_efOut[0];
  t519 = -t317[0ULL];
  t431 = -t519;
  t320[0ULL] = t371;
  tlu2_linear_linear_prelookup(&ad_efOut.mField0[0ULL], &ad_efOut.mField1[0ULL],
    &ad_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t320[0ULL],
    &t53[0ULL], &t33[0ULL]);
  t23 = ad_efOut;
  tlu2_2d_linear_linear_value(&bd_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t317[0] = bd_efOut[0];
  t519 = -t317[0ULL];
  t371 = -t519;
  t432 = X[49ULL] * -t519 * 100.0 + X[50ULL];
  tlu2_2d_linear_linear_value(&cd_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t317[0] = cd_efOut[0];
  t519 = -t317[0ULL];
  t433 = -t519;
  tlu2_2d_linear_linear_value(&dd_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t317[0] = dd_efOut[0];
  t519 = -t317[0ULL];
  t434 = -t519;
  t320[0ULL] = t375;
  tlu2_linear_linear_prelookup(&ed_efOut.mField0[0ULL], &ed_efOut.mField1[0ULL],
    &ed_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t320[0ULL],
    &t53[0ULL], &t33[0ULL]);
  t23 = ed_efOut;
  tlu2_2d_linear_linear_value(&fd_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t10.mField0[0ULL], &t10.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t320[0] = fd_efOut[0];
  t519 = -t320[0ULL];
  t375 = -t519;
  t435 = X[53ULL] * -t519 * 100.0 + X[54ULL];
  tlu2_2d_linear_linear_value(&gd_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t10.mField0[0ULL], &t10.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t320[0] = gd_efOut[0];
  t519 = -t320[0ULL];
  t436 = -t519;
  tlu2_2d_linear_linear_value(&hd_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t10.mField0[0ULL], &t10.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t53[0ULL], &t32[0ULL], &t33[0ULL]);
  t320[0] = hd_efOut[0];
  t519 = -t320[0ULL];
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (M[0ULL] != 0) {
        t502 = X[58ULL] - zc_int3 * zc_int20 * 1000.0;
        t524 = pmf_log((t540 * zc_int20 * 1000.0 + X[58ULL]) / (t502 == 0.0 ?
          1.0E-16 : t502));
        t392 = t524 / (t342 == 0.0 ? 1.0E-16 : t342);
      } else {
        t392 = 1.0;
      }
    } else {
      t392 = 0.0;
    }
  } else {
    t392 = intrm_sf_mf_57 ? intrm_sf_mf_54 ? 0.0 : (real_T)!intrm_sf_mf_53 :
      (real_T)intrm_sf_mf_51;
  }

  if (intrm_sf_mf_58) {
    t342 = intrm_sf_mf_51 ? 0.0 : (real_T)!intrm_sf_mf_50;
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (M[1ULL] != 0) {
        t502 = X[58ULL] - t528 * t356 * 1000.0;
        t524 = pmf_log((t367 * t356 * 1000.0 + X[58ULL]) / (t502 == 0.0 ?
          1.0E-16 : t502));
        t342 = t524 / (t337 == 0.0 ? 1.0E-16 : t337);
      } else {
        t342 = 1.0;
      }
    } else {
      t342 = 0.0;
    }
  } else {
    t342 = intrm_sf_mf_51 ? 0.0 : (real_T)!intrm_sf_mf_55;
  }

  t337 = (1.0 - t392) - t342;
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (M[0ULL] != 0) {
        zc_int3 = (zc_int29 - 1.0) * zc_int20 * 1000.0 + X[58ULL];
      } else {
        zc_int3 = (zc_int29 * t536 + X[58ULL]) - zc_int20 * 1000.0;
      }
    } else if (intrm_sf_mf_50) {
      zc_int3 = X[58ULL];
    } else {
      zc_int3 = (t357 * t368 + X[58ULL]) - t356 * 1000.0;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (M[1ULL] != 0) {
        zc_int3 = (t357 - 1.0) * t356 * 1000.0 + X[58ULL];
      } else {
        zc_int3 = (t357 * t368 + X[58ULL]) - t356 * 1000.0;
      }
    } else if (intrm_sf_mf_53) {
      zc_int3 = X[58ULL];
    } else {
      zc_int3 = (zc_int29 * t536 + X[58ULL]) - zc_int20 * 1000.0;
    }
  } else if (intrm_sf_mf_51) {
    zc_int3 = (zc_int29 * t536 + X[58ULL]) - zc_int20 * 1000.0;
  } else if (intrm_sf_mf_55) {
    zc_int3 = X[58ULL];
  } else {
    zc_int3 = (t357 * t368 + X[58ULL]) - t356 * 1000.0;
  }

  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (M[0ULL] != 0) {
        zc_int20 = t535;
      } else {
        zc_int20 = Condenser_two_phase_fluid_Pr_liq * t536 * 0.001 + t537;
      }
    } else if (intrm_sf_mf_50) {
      zc_int20 = t537;
    } else {
      zc_int20 = t340 * t368 * 0.001 + t537;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (M[1ULL] != 0) {
        zc_int20 = t366;
      } else {
        zc_int20 = t340 * t368 * 0.001 + t537;
      }
    } else if (intrm_sf_mf_53) {
      zc_int20 = t537;
    } else {
      zc_int20 = Condenser_two_phase_fluid_Pr_liq * t536 * 0.001 + t537;
    }
  } else if (intrm_sf_mf_51) {
    zc_int20 = Condenser_two_phase_fluid_Pr_liq * t536 * 0.001 + t537;
  } else if (intrm_sf_mf_55) {
    zc_int20 = t537;
  } else {
    zc_int20 = t340 * t368 * 0.001 + t537;
  }

  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_68) {
      if (intrm_sf_mf_67) {
        t536 = zc_int22 * (t366 - zc_int20) * 1000.0 + zc_int3;
        t537 = -pmf_log(zc_int3 / (t536 == 0.0 ? 1.0E-16 : t536));
        zc_int20 = t537 / (t370 == 0.0 ? 1.0E-16 : t370);
      } else {
        zc_int20 = t337;
      }
    } else {
      zc_int20 = 0.0;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_70) {
      if (intrm_sf_mf_69) {
        t535 = zc_int22 * (t535 - zc_int20) * 1000.0 + zc_int3;
        t528 = -pmf_log(zc_int3 / (t535 == 0.0 ? 1.0E-16 : t535));
        zc_int20 = t528 / (t370 == 0.0 ? 1.0E-16 : t370);
      } else {
        zc_int20 = t337;
      }
    } else {
      zc_int20 = 0.0;
    }
  } else {
    zc_int20 = t337;
  }

  zc_int22 = t337 - zc_int20;
  Condenser_two_phase_fluid_Pr_liq = t392 + (intrm_sf_mf_58 ? 0.0 :
    intrm_sf_mf_57 ? zc_int22 : 0.0);
  t340 = ((real_T)(M[56ULL] != 0) * 2.0 - 1.0) * t410 / 0.5;
  if (t411 <= 0.0) {
    t340 = 0.0;
  } else {
    t340 = t411 >= 1.0 ? 1.0 : 0.8 - (t340 - 0.8) * (t340 - 0.8) * 0.2;
  }

  t356 = t405 > 0.01 ? t406 * t340 : 0.0;
  t337 = intrm_sf_mf_58 ? zc_int22 : 0.0;
  if (intrm_sf_mf_440) {
    if (intrm_sf_mf_433) {
      if (M[73ULL] != 0) {
        t535 = -pmf_log((X[163ULL] - zc_int17 * 1000.0) / (X[163ULL] == 0.0 ?
          1.0E-16 : X[163ULL]));
        zc_int22 = t535 / (t420 == 0.0 ? 1.0E-16 : t420);
      } else {
        zc_int22 = 1.0;
      }
    } else {
      zc_int22 = 0.0;
    }
  } else {
    zc_int22 = intrm_sf_mf_439 ? intrm_sf_mf_436 ? 0.0 : (real_T)
      !intrm_sf_mf_435 : (real_T)intrm_sf_mf_433;
  }

  if (intrm_sf_mf_440) {
    zc_int17 = intrm_sf_mf_433 ? 0.0 : (real_T)!intrm_sf_mf_417;
  } else if (intrm_sf_mf_439) {
    if (intrm_sf_mf_436) {
      if (M[84ULL] != 0) {
        t535 = -pmf_log((X[163ULL] - intrm_sf_mf_430 * 1000.0) / (X[163ULL] ==
          0.0 ? 1.0E-16 : X[163ULL]));
        zc_int17 = t535 / (intrm_sf_mf_426 == 0.0 ? 1.0E-16 : intrm_sf_mf_426);
      } else {
        zc_int17 = 1.0;
      }
    } else {
      zc_int17 = 0.0;
    }
  } else {
    zc_int17 = intrm_sf_mf_433 ? 0.0 : (real_T)!intrm_sf_mf_437;
  }

  t357 = (1.0 - zc_int22) - zc_int17;
  if (intrm_sf_mf_440) {
    if (intrm_sf_mf_433) {
      if (M[73ULL] != 0) {
        zc_int29 = t422;
      } else {
        zc_int29 = t415 * t419 * 0.001 + t421;
      }
    } else if (intrm_sf_mf_417) {
      zc_int29 = t421;
    } else {
      zc_int29 = t414 * t423 * 0.001 + t421;
    }
  } else if (intrm_sf_mf_439) {
    if (intrm_sf_mf_436) {
      if (M[84ULL] != 0) {
        zc_int29 = t424;
      } else {
        zc_int29 = t414 * t423 * 0.001 + t421;
      }
    } else if (intrm_sf_mf_435) {
      zc_int29 = t421;
    } else {
      zc_int29 = t415 * t419 * 0.001 + t421;
    }
  } else if (intrm_sf_mf_433) {
    zc_int29 = t415 * t419 * 0.001 + t421;
  } else if (intrm_sf_mf_437) {
    zc_int29 = t421;
  } else {
    zc_int29 = t414 * t423 * 0.001 + t421;
  }

  if (intrm_sf_mf_440) {
    if (t310_idx_0 < t424) {
      if (intrm_sf_mf_449) {
        zc_int29 = (t424 - zc_int29) / (intrm_sf_mf_444 == 0.0 ? 1.0E-16 :
          intrm_sf_mf_444) / (intrm_sf_mf_424 == 0.0 ? 1.0E-16 : intrm_sf_mf_424)
          * 1000.0;
      } else {
        zc_int29 = t357;
      }
    } else {
      zc_int29 = 0.0;
    }
  } else if (intrm_sf_mf_439) {
    if (t310_idx_0 > t422) {
      if (intrm_sf_mf_450) {
        zc_int29 = (t422 - zc_int29) / (intrm_sf_mf_444 == 0.0 ? 1.0E-16 :
          intrm_sf_mf_444) / (intrm_sf_mf_424 == 0.0 ? 1.0E-16 : intrm_sf_mf_424)
          * 1000.0;
      } else {
        zc_int29 = t357;
      }
    } else {
      zc_int29 = 0.0;
    }
  } else {
    zc_int29 = t357;
  }

  intrm_sf_mf_424 = t357 - zc_int29;
  zc_int3 = zc_int22 + (intrm_sf_mf_440 ? 0.0 : intrm_sf_mf_439 ?
                        intrm_sf_mf_424 : 0.0);
  intrm_sf_mf_424 = zc_int17 + (intrm_sf_mf_440 ? intrm_sf_mf_424 : 0.0);
  t540 = -(((real_T)(M[63ULL] != 0) * 2.0 - 1.0) * X[56ULL] * t356);
  t266[0ULL] = 0.0;
  t266[1ULL] = 0.0;
  t266[2ULL] = 0.0;
  t266[3ULL] = 0.0;
  t266[4ULL] = 0.0;
  t266[5ULL] = 0.0;
  t266[6ULL] = 0.0;
  t266[7ULL] = 0.0;
  t266[8ULL] = 0.0;
  t266[9ULL] = 0.0;
  t266[10ULL] = 0.0;
  t266[11ULL] = 0.0;
  t266[12ULL] = 0.0;
  t266[13ULL] = 0.0;
  t266[14ULL] = X[0ULL] * 0.1;
  t266[15ULL] = X[42ULL];
  t266[16ULL] = X[43ULL] * 0.1;
  t266[17ULL] = X[44ULL];
  t266[18ULL] = X[45ULL];
  t266[19ULL] = -X[45ULL];
  t266[20ULL] = X[0ULL] * 0.1;
  t266[21ULL] = X[42ULL];
  t266[22ULL] = X[45ULL];
  t266[23ULL] = X[46ULL];
  t266[24ULL] = X[47ULL];
  t266[25ULL] = X[43ULL] * 0.1;
  t266[26ULL] = X[44ULL];
  t266[27ULL] = -X[45ULL];
  t266[28ULL] = X[46ULL];
  t266[29ULL] = -X[47ULL];
  t266[30ULL] = X[47ULL];
  t266[31ULL] = -X[47ULL];
  t266[32ULL] = X[1ULL];
  t266[33ULL] = X[2ULL];
  t266[34ULL] = X[48ULL];
  t266[35ULL] = 0.101325;
  t266[36ULL] = X[49ULL] * 0.1;
  t266[37ULL] = X[50ULL];
  t266[38ULL] = X[51ULL];
  t266[39ULL] = X[52ULL] * 0.1;
  t266[40ULL] = X[53ULL] * 0.1;
  t266[41ULL] = X[54ULL];
  t266[42ULL] = X[48ULL];
  t266[43ULL] = 0.101325;
  t266[44ULL] = X[51ULL];
  t266[45ULL] = X[52ULL] * 0.1;
  t266[46ULL] = X[3ULL];
  t266[47ULL] = X[4ULL] * 0.1;
  t266[48ULL] = X[5ULL];
  t266[49ULL] = X[55ULL];
  t266[50ULL] = 10.0;
  t266[51ULL] = X[60ULL];
  t266[52ULL] = X[61ULL];
  t266[53ULL] = X[62ULL];
  t266[54ULL] = X[48ULL];
  t266[55ULL] = 0.101325;
  t266[56ULL] = X[63ULL];
  t266[57ULL] = X[64ULL];
  t266[58ULL] = X[55ULL];
  t266[59ULL] = X[65ULL];
  t266[60ULL] = X[48ULL];
  t266[61ULL] = 0.101325;
  t266[62ULL] = X[60ULL];
  t266[63ULL] = X[66ULL];
  t266[64ULL] = X[55ULL];
  t266[65ULL] = X[67ULL];
  t266[66ULL] = X[51ULL];
  t266[67ULL] = X[52ULL] * 0.1;
  t266[68ULL] = X[68ULL];
  t266[69ULL] = X[69ULL];
  t266[70ULL] = 10.0;
  t266[71ULL] = X[70ULL];
  t266[72ULL] = X[51ULL];
  t266[73ULL] = X[52ULL] * 0.1;
  t266[74ULL] = X[61ULL];
  t266[75ULL] = X[71ULL];
  t266[76ULL] = 10.0;
  t266[77ULL] = X[72ULL];
  t266[78ULL] = X[49ULL] * 0.1;
  t266[79ULL] = X[50ULL];
  t266[80ULL] = X[53ULL] * 0.1;
  t266[81ULL] = X[54ULL];
  t266[82ULL] = X[9ULL] * 0.001;
  t266[83ULL] = X[6ULL] * 0.1;
  t266[84ULL] = X[7ULL];
  t266[85ULL] = X[8ULL];
  t266[86ULL] = X[10ULL];
  t266[87ULL] = X[59ULL] * 0.001;
  t266[88ULL] = X[11ULL] * 0.001;
  t266[89ULL] = X[13ULL] * 0.001;
  t266[90ULL] = X[12ULL] * 0.001;
  t266[91ULL] = X[58ULL];
  t266[92ULL] = X[56ULL];
  t266[93ULL] = X[57ULL];
  t266[94ULL] = X[73ULL];
  t266[95ULL] = X[74ULL];
  t266[96ULL] = X[75ULL];
  t266[97ULL] = X[49ULL] * 0.1;
  t266[98ULL] = X[50ULL];
  t266[99ULL] = X[73ULL];
  t266[100ULL] = X[76ULL];
  t266[101ULL] = X[56ULL];
  t266[102ULL] = X[53ULL] * 0.1;
  t266[103ULL] = X[54ULL];
  t266[104ULL] = X[74ULL];
  t266[105ULL] = X[77ULL];
  t266[106ULL] = X[57ULL];
  t266[107ULL] = X[14ULL];
  t266[108ULL] = X[9ULL] * 0.001;
  t266[109ULL] = X[11ULL] * 0.001;
  t266[110ULL] = X[13ULL] * 0.001;
  t266[111ULL] = X[12ULL] * 0.001;
  t266[112ULL] = Condenser_two_phase_fluid_Pr_liq;
  t266[113ULL] = zc_int20;
  t266[114ULL] = t342 + t337;
  t266[115ULL] = X[10ULL];
  t266[116ULL] = 0.0;
  t266[117ULL] = X[78ULL];
  t266[118ULL] = Controlled_Heat_Flow_Rate_Source_Q * 1000.0;
  t266[119ULL] = Controlled_Heat_Flow_Rate_Source_Q * 1000.0;
  t266[120ULL] = -X[78ULL];
  t266[121ULL] = X[53ULL] * 0.1;
  t266[122ULL] = X[54ULL];
  t266[123ULL] = X[79ULL] * 0.1;
  t266[124ULL] = X[80ULL];
  t266[125ULL] = 0.0;
  t266[126ULL] = 0.0;
  t266[127ULL] = 0.0;
  t266[128ULL] = 0.0;
  t266[129ULL] = 0.0;
  t266[130ULL] = -X[74ULL];
  t266[131ULL] = X[81ULL];
  t266[132ULL] = U_idx_1;
  t266[133ULL] = X[53ULL] * 0.1;
  t266[134ULL] = X[54ULL];
  t266[135ULL] = -X[74ULL];
  t266[136ULL] = X[82ULL];
  t266[137ULL] = -X[57ULL];
  t266[138ULL] = X[79ULL] * 0.1;
  t266[139ULL] = X[80ULL];
  t266[140ULL] = X[81ULL];
  t266[141ULL] = X[82ULL];
  t266[142ULL] = X[57ULL];
  t266[143ULL] = X[87ULL];
  t266[144ULL] = X[83ULL];
  t266[145ULL] = X[84ULL];
  t266[146ULL] = X[85ULL];
  t266[147ULL] = X[86ULL];
  t266[148ULL] = -X[57ULL];
  t266[149ULL] = X[57ULL];
  t266[150ULL] = X[78ULL];
  t266[151ULL] = X[78ULL];
  t266[152ULL] = Controlled_Heat_Flow_Rate_Source_Q * 1000.0;
  t266[153ULL] = Controlled_Heat_Flow_Rate_Source_Q * 1000.0;
  t266[154ULL] = Controlled_Heat_Flow_Rate_Source_Q * 0.001;
  t266[155ULL] = 0.0;
  t266[156ULL] = U_idx_1;
  t266[157ULL] = U_idx_1;
  t266[158ULL] = -X[87ULL];
  t266[159ULL] = U_idx_1;
  t266[160ULL] = X[88ULL];
  t266[161ULL] = 15.0;
  t266[162ULL] = X[89ULL];
  t266[163ULL] = X[90ULL] * 0.1;
  t266[164ULL] = X[91ULL];
  t266[165ULL] = -X[91ULL];
  t266[166ULL] = X[88ULL];
  t266[167ULL] = 15.0;
  t266[168ULL] = X[91ULL];
  t266[169ULL] = X[92ULL];
  t266[170ULL] = X[93ULL];
  t266[171ULL] = X[94ULL];
  t266[172ULL] = X[89ULL];
  t266[173ULL] = X[90ULL] * 0.1;
  t266[174ULL] = -X[91ULL];
  t266[175ULL] = X[95ULL];
  t266[176ULL] = -X[93ULL];
  t266[177ULL] = X[94ULL];
  t266[178ULL] = 0.0;
  t266[179ULL] = X[93ULL];
  t266[180ULL] = -X[93ULL];
  t266[181ULL] = X[96ULL];
  t266[182ULL] = X[79ULL] * 0.1;
  t266[183ULL] = X[80ULL];
  t266[184ULL] = X[79ULL] * 0.1;
  t266[185ULL] = X[80ULL];
  t266[186ULL] = -X[57ULL];
  t266[187ULL] = -X[81ULL];
  t266[188ULL] = -X[81ULL];
  t266[189ULL] = -X[57ULL];
  t266[190ULL] = X[0ULL] * 0.1;
  t266[191ULL] = X[97ULL];
  t266[192ULL] = X[0ULL] * 0.1;
  t266[193ULL] = X[97ULL];
  t266[194ULL] = X[56ULL];
  t266[195ULL] = X[98ULL];
  t266[196ULL] = X[98ULL];
  t266[197ULL] = X[56ULL];
  t266[198ULL] = X[56ULL];
  t266[199ULL] = X[49ULL] * 0.1;
  t266[200ULL] = X[50ULL];
  t266[201ULL] = X[49ULL] * 0.1;
  t266[202ULL] = X[50ULL];
  t266[203ULL] = X[56ULL];
  t266[204ULL] = X[73ULL];
  t266[205ULL] = X[73ULL];
  t266[206ULL] = X[56ULL];
  t266[207ULL] = X[56ULL];
  t266[208ULL] = X[0ULL] * 0.1;
  t266[209ULL] = X[99ULL];
  t266[210ULL] = X[0ULL] * 0.1;
  t266[211ULL] = X[99ULL];
  t266[212ULL] = X[100ULL];
  t266[213ULL] = X[101ULL];
  t266[214ULL] = X[101ULL];
  t266[215ULL] = X[100ULL];
  t266[216ULL] = X[100ULL];
  t266[217ULL] = -X[57ULL];
  t266[218ULL] = X[102ULL];
  t266[219ULL] = X[103ULL] * 0.1;
  t266[220ULL] = X[104ULL];
  t266[221ULL] = X[105ULL] * 0.1;
  t266[222ULL] = X[106ULL];
  t266[223ULL] = X[107ULL];
  t266[224ULL] = X[102ULL];
  t266[225ULL] = X[103ULL] * 0.1;
  t266[226ULL] = X[106ULL];
  t266[227ULL] = X[108ULL];
  t266[228ULL] = 3.5;
  t266[229ULL] = X[109ULL];
  t266[230ULL] = X[104ULL];
  t266[231ULL] = X[105ULL] * 0.1;
  t266[232ULL] = X[107ULL];
  t266[233ULL] = X[110ULL];
  t266[234ULL] = -3.5;
  t266[235ULL] = X[109ULL];
  t266[236ULL] = 3.5;
  t266[237ULL] = -3.5;
  t266[238ULL] = X[111ULL];
  t266[239ULL] = 0.2;
  t266[240ULL] = X[51ULL];
  t266[241ULL] = X[52ULL] * 0.1;
  t266[242ULL] = X[112ULL];
  t266[243ULL] = -X[61ULL];
  t266[244ULL] = X[111ULL];
  t266[245ULL] = 0.2;
  t266[246ULL] = X[112ULL];
  t266[247ULL] = X[113ULL];
  t266[248ULL] = 10.0;
  t266[249ULL] = X[114ULL];
  t266[250ULL] = X[51ULL];
  t266[251ULL] = X[52ULL] * 0.1;
  t266[252ULL] = -X[61ULL];
  t266[253ULL] = X[115ULL];
  t266[254ULL] = -10.0;
  t266[255ULL] = X[114ULL];
  t266[256ULL] = 10.0;
  t266[257ULL] = -10.0;
  t266[258ULL] = 0.0;
  t266[259ULL] = 0.0;
  t266[260ULL] = X[116ULL];
  t266[261ULL] = X[117ULL] * 0.1;
  t266[262ULL] = X[118ULL];
  t266[263ULL] = X[119ULL] * 0.1;
  t266[264ULL] = X[78ULL];
  t266[265ULL] = X[120ULL];
  t266[266ULL] = X[121ULL];
  t266[267ULL] = X[15ULL] * 0.1;
  t266[268ULL] = X[16ULL];
  t266[269ULL] = X[122ULL];
  t266[270ULL] = X[123ULL];
  t266[271ULL] = Controlled_Heat_Flow_Rate_Source_Q;
  t266[272ULL] = X[116ULL];
  t266[273ULL] = X[117ULL] * 0.1;
  t266[274ULL] = X[120ULL];
  t266[275ULL] = X[124ULL];
  t266[276ULL] = X[122ULL];
  t266[277ULL] = X[125ULL];
  t266[278ULL] = X[118ULL];
  t266[279ULL] = X[119ULL] * 0.1;
  t266[280ULL] = X[121ULL];
  t266[281ULL] = X[126ULL];
  t266[282ULL] = X[123ULL];
  t266[283ULL] = X[127ULL];
  t266[284ULL] = X[104ULL];
  t266[285ULL] = X[105ULL] * 0.1;
  t266[286ULL] = X[116ULL];
  t266[287ULL] = X[117ULL] * 0.1;
  t266[288ULL] = X[128ULL];
  t266[289ULL] = -X[107ULL];
  t266[290ULL] = -X[120ULL];
  t266[291ULL] = X[17ULL] * 0.1;
  t266[292ULL] = X[18ULL];
  t266[293ULL] = 3.5;
  t266[294ULL] = -X[122ULL];
  t266[295ULL] = 0.0;
  t266[296ULL] = X[104ULL];
  t266[297ULL] = X[105ULL] * 0.1;
  t266[298ULL] = -X[107ULL];
  t266[299ULL] = X[129ULL];
  t266[300ULL] = 3.5;
  t266[301ULL] = X[130ULL];
  t266[302ULL] = X[116ULL];
  t266[303ULL] = X[117ULL] * 0.1;
  t266[304ULL] = -X[120ULL];
  t266[305ULL] = X[131ULL];
  t266[306ULL] = -X[122ULL];
  t266[307ULL] = X[132ULL];
  t266[308ULL] = X[118ULL];
  t266[309ULL] = X[119ULL] * 0.1;
  t266[310ULL] = X[89ULL];
  t266[311ULL] = X[90ULL] * 0.1;
  t266[312ULL] = X[133ULL];
  t266[313ULL] = -X[121ULL];
  t266[314ULL] = t377;
  t266[315ULL] = X[19ULL] * 0.1;
  t266[316ULL] = X[20ULL];
  t266[317ULL] = -X[123ULL];
  t266[318ULL] = t378;
  t266[319ULL] = 0.0;
  t266[320ULL] = X[118ULL];
  t266[321ULL] = X[119ULL] * 0.1;
  t266[322ULL] = -X[121ULL];
  t266[323ULL] = X[136ULL];
  t266[324ULL] = -X[123ULL];
  t266[325ULL] = X[137ULL];
  t266[326ULL] = X[89ULL];
  t266[327ULL] = X[90ULL] * 0.1;
  t266[328ULL] = t377;
  t266[329ULL] = X[138ULL];
  t266[330ULL] = t378;
  t266[331ULL] = X[139ULL];
  t266[332ULL] = X[79ULL] * 0.1;
  t266[333ULL] = X[80ULL];
  t266[334ULL] = X[43ULL] * 0.1;
  t266[335ULL] = X[44ULL];
  t266[336ULL] = 0.0;
  t266[337ULL] = X[140ULL];
  t266[338ULL] = t380 * 1000.0;
  t266[339ULL] = t380 * 1000.0;
  t266[340ULL] = -X[140ULL];
  t266[341ULL] = X[140ULL];
  t266[342ULL] = X[140ULL];
  t266[343ULL] = t380 * 1000.0;
  t266[344ULL] = t380 * 1000.0;
  t266[345ULL] = X[79ULL] * 0.1;
  t266[346ULL] = X[80ULL];
  t266[347ULL] = X[43ULL] * 0.1;
  t266[348ULL] = X[44ULL];
  t266[349ULL] = X[21ULL] * 0.1;
  t266[350ULL] = X[22ULL];
  t266[351ULL] = X[140ULL];
  t266[352ULL] = -X[57ULL];
  t266[353ULL] = t382;
  t266[354ULL] = -X[81ULL];
  t266[355ULL] = t383;
  t266[356ULL] = t380;
  t266[357ULL] = X[79ULL] * 0.1;
  t266[358ULL] = X[80ULL];
  t266[359ULL] = -X[81ULL];
  t266[360ULL] = X[143ULL];
  t266[361ULL] = -X[57ULL];
  t266[362ULL] = X[43ULL] * 0.1;
  t266[363ULL] = X[44ULL];
  t266[364ULL] = t383;
  t266[365ULL] = X[144ULL];
  t266[366ULL] = t382;
  t266[367ULL] = X[23ULL] * 1550.0031000062004;
  t266[368ULL] = X[145ULL];
  t266[369ULL] = X[146ULL];
  t266[370ULL] = U_idx_2;
  t266[371ULL] = 0.0;
  t266[372ULL] = X[43ULL] * 0.1;
  t266[373ULL] = X[44ULL];
  t266[374ULL] = t384;
  t266[375ULL] = t386 * 0.001;
  t266[376ULL] = t387;
  t266[377ULL] = Preheating_Thermodynamic_Properties_Sensor_2P1_V;
  t266[378ULL] = t387 - 273.15;
  t266[379ULL] = X[79ULL] * 0.1;
  t266[380ULL] = X[80ULL];
  t266[381ULL] = X[79ULL] * t379 * 100.0 + X[80ULL];
  t266[382ULL] = t389 * 0.001;
  t266[383ULL] = t390;
  t266[384ULL] = t379;
  t266[385ULL] = t390 - 273.15;
  t266[386ULL] = X[79ULL] * 0.1;
  t266[387ULL] = X[80ULL];
  t266[388ULL] = 0.0;
  t266[389ULL] = 0.0;
  t266[390ULL] = X[79ULL] * 0.1;
  t266[391ULL] = X[80ULL];
  t266[392ULL] = X[49ULL] * 0.1;
  t266[393ULL] = X[50ULL];
  t266[394ULL] = 0.0;
  t266[395ULL] = 0.0;
  t266[396ULL] = X[49ULL] * 0.1;
  t266[397ULL] = X[50ULL];
  t266[398ULL] = X[49ULL] * 0.1;
  t266[399ULL] = X[50ULL];
  t266[400ULL] = X[53ULL] * 0.1;
  t266[401ULL] = X[54ULL];
  t266[402ULL] = 0.0;
  t266[403ULL] = 0.0;
  t266[404ULL] = X[53ULL] * 0.1;
  t266[405ULL] = X[54ULL];
  t266[406ULL] = X[53ULL] * 0.1;
  t266[407ULL] = X[54ULL];
  t266[408ULL] = X[0ULL] * 0.1;
  t266[409ULL] = X[147ULL];
  t266[410ULL] = 0.0;
  t266[411ULL] = 0.0;
  t266[412ULL] = X[0ULL] * 0.1;
  t266[413ULL] = X[147ULL];
  t266[414ULL] = X[0ULL] * 0.1;
  t266[415ULL] = X[147ULL];
  t266[416ULL] = X[53ULL] * 0.1;
  t266[417ULL] = X[54ULL];
  t266[418ULL] = 0.0;
  t266[419ULL] = 0.0;
  t266[420ULL] = X[53ULL] * 0.1;
  t266[421ULL] = X[54ULL];
  t266[422ULL] = X[53ULL] * 0.1;
  t266[423ULL] = X[0ULL] * 0.1;
  t266[424ULL] = X[97ULL];
  t266[425ULL] = 0.0;
  t266[426ULL] = 0.0;
  t266[427ULL] = X[0ULL] * 0.1;
  t266[428ULL] = X[97ULL];
  t266[429ULL] = X[0ULL] * 0.1;
  t266[430ULL] = X[97ULL];
  t266[431ULL] = X[79ULL] * 0.1;
  t266[432ULL] = X[0ULL] * 0.1;
  t266[433ULL] = X[99ULL];
  t266[434ULL] = 4.0;
  t266[435ULL] = X[148ULL];
  t266[436ULL] = -X[101ULL];
  t266[437ULL] = X[101ULL];
  t266[438ULL] = 0.0;
  t266[439ULL] = X[0ULL] * 0.1;
  t266[440ULL] = X[99ULL];
  t266[441ULL] = -X[101ULL];
  t266[442ULL] = X[149ULL];
  t266[443ULL] = -X[100ULL];
  t266[444ULL] = 4.0;
  t266[445ULL] = X[148ULL];
  t266[446ULL] = X[101ULL];
  t266[447ULL] = X[149ULL];
  t266[448ULL] = X[100ULL];
  t266[449ULL] = -X[100ULL];
  t266[450ULL] = X[100ULL];
  t266[451ULL] = X[24ULL];
  t266[452ULL] = X[25ULL];
  t266[453ULL] = X[118ULL];
  t266[454ULL] = X[119ULL] * 0.1;
  t266[455ULL] = 0.0;
  t266[456ULL] = 0.0;
  t266[457ULL] = X[119ULL] * 99999.999999999985;
  t266[458ULL] = X[118ULL];
  t266[459ULL] = X[119ULL] * 0.099999999999999992;
  t266[460ULL] = X[118ULL] - 273.15;
  t266[461ULL] = 4.0;
  t266[462ULL] = X[148ULL];
  t266[463ULL] = -X[101ULL];
  t266[464ULL] = 4.0;
  t266[465ULL] = X[148ULL];
  t266[466ULL] = -X[101ULL];
  t266[467ULL] = X[150ULL];
  t266[468ULL] = -X[100ULL];
  t266[469ULL] = -X[100ULL];
  t266[470ULL] = 4.0;
  t266[471ULL] = 502.26708950739749;
  t266[472ULL] = X[88ULL];
  t266[473ULL] = 15.0;
  t266[474ULL] = -X[91ULL];
  t266[475ULL] = 588.15;
  t266[476ULL] = X[88ULL];
  t266[477ULL] = 15.0;
  t266[478ULL] = -X[91ULL];
  t266[479ULL] = X[151ULL];
  t266[480ULL] = -X[93ULL];
  t266[481ULL] = 1402.7179873660207;
  t266[482ULL] = 15.0;
  t266[483ULL] = -X[93ULL];
  t266[484ULL] = X[111ULL];
  t266[485ULL] = 0.2;
  t266[486ULL] = -X[112ULL];
  t266[487ULL] = 293.15;
  t266[488ULL] = X[111ULL];
  t266[489ULL] = 0.2;
  t266[490ULL] = -X[112ULL];
  t266[491ULL] = X[152ULL];
  t266[492ULL] = -10.0;
  t266[493ULL] = 83.887262122266435;
  t266[494ULL] = 0.2;
  t266[495ULL] = -10.0;
  t266[496ULL] = X[48ULL];
  t266[497ULL] = 0.101325;
  t266[498ULL] = -X[60ULL];
  t266[499ULL] = 293.15;
  t266[500ULL] = X[48ULL];
  t266[501ULL] = 0.101325;
  t266[502ULL] = -X[60ULL];
  t266[503ULL] = X[153ULL];
  t266[504ULL] = -X[55ULL];
  t266[505ULL] = 83.893856050917179;
  t266[506ULL] = 0.101325;
  t266[507ULL] = -X[55ULL];
  t266[508ULL] = X[0ULL] * 0.1;
  t266[509ULL] = X[97ULL];
  t266[510ULL] = X[49ULL] * 0.1;
  t266[511ULL] = X[50ULL];
  t266[512ULL] = X[98ULL];
  t266[513ULL] = -X[73ULL];
  t266[514ULL] = U_idx_3;
  t266[515ULL] = X[0ULL] * 0.1;
  t266[516ULL] = X[97ULL];
  t266[517ULL] = X[98ULL];
  t266[518ULL] = X[154ULL];
  t266[519ULL] = X[56ULL];
  t266[520ULL] = X[49ULL] * 0.1;
  t266[521ULL] = X[50ULL];
  t266[522ULL] = -X[73ULL];
  t266[523ULL] = X[155ULL];
  t266[524ULL] = -X[56ULL];
  t266[525ULL] = t340;
  t266[526ULL] = t356;
  t266[527ULL] = t372;
  t266[528ULL] = t407;
  t266[529ULL] = t369 * 0.001;
  t266[530ULL] = X[56ULL];
  t266[531ULL] = X[56ULL];
  t266[532ULL] = -X[56ULL];
  t266[533ULL] = Simscape_Component_nozzle_opening_out;
  t266[534ULL] = -t540;
  t266[535ULL] = X[97ULL];
  t266[536ULL] = t340;
  t266[537ULL] = t356;
  t266[538ULL] = t372;
  t266[539ULL] = t407;
  t266[540ULL] = t369 * 0.001;
  t266[541ULL] = X[56ULL];
  t266[542ULL] = Simscape_Component_nozzle_opening_out;
  t266[543ULL] = -t540 * 0.001;
  t266[544ULL] = U_idx_1;
  t266[545ULL] = X[0ULL] * 0.1;
  t266[546ULL] = X[99ULL];
  t266[547ULL] = X[0ULL] * 0.1;
  t266[548ULL] = X[147ULL];
  t266[549ULL] = X[0ULL] * 0.1;
  t266[550ULL] = X[42ULL];
  t266[551ULL] = X[0ULL] * 0.1;
  t266[552ULL] = X[97ULL];
  t266[553ULL] = X[0ULL] * 0.1;
  t266[554ULL] = X[26ULL];
  t266[555ULL] = X[27ULL];
  t266[556ULL] = X[28ULL];
  t266[557ULL] = X[29ULL];
  t266[558ULL] = X[156ULL];
  t266[559ULL] = t409;
  t266[560ULL] = X[101ULL];
  t266[561ULL] = X[100ULL];
  t266[562ULL] = -X[47ULL];
  t266[563ULL] = -X[45ULL];
  t266[564ULL] = X[157ULL];
  t266[565ULL] = X[158ULL];
  t266[566ULL] = -X[56ULL];
  t266[567ULL] = -X[98ULL];
  t266[568ULL] = 0.0;
  t266[569ULL] = X[0ULL] * 0.1;
  t266[570ULL] = X[99ULL];
  t266[571ULL] = X[101ULL];
  t266[572ULL] = X[159ULL];
  t266[573ULL] = X[100ULL];
  t266[574ULL] = X[0ULL] * 0.1;
  t266[575ULL] = X[147ULL];
  t266[576ULL] = X[157ULL];
  t266[577ULL] = X[160ULL];
  t266[578ULL] = X[158ULL];
  t266[579ULL] = X[0ULL] * 0.1;
  t266[580ULL] = X[42ULL];
  t266[581ULL] = -X[45ULL];
  t266[582ULL] = X[161ULL];
  t266[583ULL] = -X[47ULL];
  t266[584ULL] = X[0ULL] * 0.1;
  t266[585ULL] = X[97ULL];
  t266[586ULL] = -X[98ULL];
  t266[587ULL] = X[162ULL];
  t266[588ULL] = -X[56ULL];
  t266[589ULL] = t409;
  t266[590ULL] = X[89ULL];
  t266[591ULL] = X[90ULL] * 0.1;
  t266[592ULL] = X[43ULL] * 0.1;
  t266[593ULL] = X[44ULL];
  t266[594ULL] = X[102ULL];
  t266[595ULL] = X[103ULL] * 0.1;
  t266[596ULL] = X[0ULL] * 0.1;
  t266[597ULL] = X[147ULL];
  t266[598ULL] = X[89ULL];
  t266[599ULL] = X[90ULL] * 0.1;
  t266[600ULL] = X[102ULL];
  t266[601ULL] = X[103ULL] * 0.1;
  t266[602ULL] = X[30ULL];
  t266[603ULL] = X[31ULL] * 0.1;
  t266[604ULL] = X[32ULL];
  t266[605ULL] = X[135ULL];
  t266[606ULL] = -3.5;
  t266[607ULL] = X[134ULL];
  t266[608ULL] = -X[106ULL];
  t266[609ULL] = X[165ULL];
  t266[610ULL] = X[89ULL];
  t266[611ULL] = X[90ULL] * 0.1;
  t266[612ULL] = X[166ULL];
  t266[613ULL] = X[167ULL];
  t266[614ULL] = X[135ULL];
  t266[615ULL] = X[168ULL];
  t266[616ULL] = X[89ULL];
  t266[617ULL] = X[90ULL] * 0.1;
  t266[618ULL] = X[134ULL];
  t266[619ULL] = X[169ULL];
  t266[620ULL] = X[135ULL];
  t266[621ULL] = X[170ULL];
  t266[622ULL] = X[102ULL];
  t266[623ULL] = X[103ULL] * 0.1;
  t266[624ULL] = X[171ULL];
  t266[625ULL] = X[172ULL];
  t266[626ULL] = -3.5;
  t266[627ULL] = X[173ULL];
  t266[628ULL] = X[102ULL];
  t266[629ULL] = X[103ULL] * 0.1;
  t266[630ULL] = -X[106ULL];
  t266[631ULL] = X[174ULL];
  t266[632ULL] = -3.5;
  t266[633ULL] = X[175ULL];
  t266[634ULL] = X[43ULL] * 0.1;
  t266[635ULL] = X[44ULL];
  t266[636ULL] = X[0ULL] * 0.1;
  t266[637ULL] = X[147ULL];
  t266[638ULL] = X[37ULL] * 0.001;
  t266[639ULL] = X[33ULL] * 0.1;
  t266[640ULL] = X[34ULL];
  t266[641ULL] = X[35ULL];
  t266[642ULL] = X[38ULL];
  t266[643ULL] = X[164ULL] * 0.001;
  t266[644ULL] = X[36ULL] * 0.001;
  t266[645ULL] = X[40ULL] * 0.001;
  t266[646ULL] = X[39ULL] * 0.001;
  t266[647ULL] = X[163ULL];
  t266[648ULL] = X[141ULL];
  t266[649ULL] = -X[158ULL];
  t266[650ULL] = X[142ULL];
  t266[651ULL] = -X[157ULL];
  t266[652ULL] = X[176ULL];
  t266[653ULL] = X[43ULL] * 0.1;
  t266[654ULL] = X[44ULL];
  t266[655ULL] = X[142ULL];
  t266[656ULL] = X[177ULL];
  t266[657ULL] = X[141ULL];
  t266[658ULL] = X[0ULL] * 0.1;
  t266[659ULL] = X[147ULL];
  t266[660ULL] = -X[157ULL];
  t266[661ULL] = X[178ULL];
  t266[662ULL] = -X[158ULL];
  t266[663ULL] = X[41ULL];
  t266[664ULL] = X[37ULL] * 0.001;
  t266[665ULL] = X[36ULL] * 0.001;
  t266[666ULL] = X[40ULL] * 0.001;
  t266[667ULL] = X[39ULL] * 0.001;
  t266[668ULL] = zc_int3;
  t266[669ULL] = zc_int29;
  t266[670ULL] = intrm_sf_mf_424;
  t266[671ULL] = X[38ULL];
  t266[672ULL] = U_idx_3;
  t266[673ULL] = U_idx_3;
  t266[674ULL] = U_idx_0;
  t266[675ULL] = Controlled_Heat_Flow_Rate_Source_Q * 0.001;
  t266[676ULL] = X[102ULL];
  t266[677ULL] = X[103ULL] * 0.1;
  t266[678ULL] = X[51ULL];
  t266[679ULL] = X[52ULL] * 0.1;
  t266[680ULL] = 0.0;
  t266[681ULL] = X[43ULL] * 0.1;
  t266[682ULL] = X[44ULL];
  t266[683ULL] = t384;
  t266[684ULL] = t386 * 0.001;
  t266[685ULL] = t387;
  t266[686ULL] = Preheating_Thermodynamic_Properties_Sensor_2P1_V;
  t266[687ULL] = X[0ULL] * 0.1;
  t266[688ULL] = X[147ULL];
  t266[689ULL] = X[0ULL] * intrm_sf_mf_373 * 100.0 + X[147ULL];
  t266[690ULL] = t426 * 0.001;
  t266[691ULL] = Thermodynamic_Properties_Sensor_2P1_T;
  t266[692ULL] = intrm_sf_mf_373;
  t266[693ULL] = Thermodynamic_Properties_Sensor_2P1_T - 273.15;
  t266[694ULL] = X[0ULL] * 0.1;
  t266[695ULL] = X[97ULL];
  t266[696ULL] = t429;
  t266[697ULL] = t430 * 0.001;
  t266[698ULL] = t431;
  t266[699ULL] = t428;
  t266[700ULL] = t429;
  t266[701ULL] = t430 * 0.001;
  t266[702ULL] = t431 - 273.15;
  t266[703ULL] = X[49ULL] * 0.1;
  t266[704ULL] = X[50ULL];
  t266[705ULL] = t432;
  t266[706ULL] = t433 * 0.001;
  t266[707ULL] = t434;
  t266[708ULL] = t371;
  t266[709ULL] = t432;
  t266[710ULL] = t433 * 0.001;
  t266[711ULL] = t434 - 273.15;
  t266[712ULL] = X[53ULL] * 0.1;
  t266[713ULL] = X[54ULL];
  t266[714ULL] = t435;
  t266[715ULL] = t436 * 0.001;
  t266[716ULL] = -t519;
  t266[717ULL] = t375;
  t266[718ULL] = t435;
  t266[719ULL] = -t519 - 273.15;
  t266[720ULL] = t387 - 273.15;
  t266[721ULL] = X[0ULL] * 0.1;
  t266[722ULL] = X[147ULL];
  t266[723ULL] = X[0ULL] * 0.1;
  t266[724ULL] = X[147ULL];
  t266[725ULL] = X[179ULL];
  t266[726ULL] = X[179ULL];
  t266[727ULL] = X[53ULL] * 0.1;
  t266[728ULL] = X[54ULL];
  t266[729ULL] = X[180ULL];
  t266[730ULL] = X[180ULL];
  t266[731ULL] = X[0ULL] * 0.1;
  t266[732ULL] = X[97ULL];
  t266[733ULL] = X[181ULL];
  t266[734ULL] = X[181ULL];
  t266[735ULL] = X[49ULL] * 0.1;
  t266[736ULL] = X[50ULL];
  t266[737ULL] = X[182ULL];
  t266[738ULL] = X[182ULL];
  for (b = 0; b < 739; b++) {
    out.mX[b] = t266[b];
  }

  (void)LC;
  (void)t542;
  return 0;
}
