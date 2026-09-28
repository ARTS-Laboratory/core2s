/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv7/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv7_d632b26e_1_ds_sys_struct.h"
#include "PW_SMRv7_d632b26e_1_ds_obs_all.h"
#include "PW_SMRv7_d632b26e_1_ds.h"
#include "PW_SMRv7_d632b26e_1_ds_externals.h"
#include "PW_SMRv7_d632b26e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv7_d632b26e_1_ds_obs_all(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t544, NeDsMethodOutput *t545)
{
  ETTS0 ad_efOut;
  ETTS0 bc_efOut;
  ETTS0 cb_efOut;
  ETTS0 d_efOut;
  ETTS0 dc_efOut;
  ETTS0 ed_efOut;
  ETTS0 efOut;
  ETTS0 fb_efOut;
  ETTS0 fc_efOut;
  ETTS0 g_efOut;
  ETTS0 ib_efOut;
  ETTS0 ic_efOut;
  ETTS0 j_efOut;
  ETTS0 jc_efOut;
  ETTS0 k_efOut;
  ETTS0 mb_efOut;
  ETTS0 nc_efOut;
  ETTS0 o_efOut;
  ETTS0 q_efOut;
  ETTS0 qb_efOut;
  ETTS0 rc_efOut;
  ETTS0 s_efOut;
  ETTS0 t13;
  ETTS0 t17;
  ETTS0 t18;
  ETTS0 t20;
  ETTS0 t24;
  ETTS0 t27;
  ETTS0 t28;
  ETTS0 t30;
  ETTS0 t31;
  ETTS0 tb_efOut;
  ETTS0 u_efOut;
  ETTS0 vb_efOut;
  ETTS0 vc_efOut;
  ETTS0 y_efOut;
  PmRealVector out;
  real_T t267[749];
  real_T X[183];
  real_T t329[2];
  real_T ab_efOut[1];
  real_T ac_efOut[1];
  real_T b_efOut[1];
  real_T bb_efOut[1];
  real_T bd_efOut[1];
  real_T c_efOut[1];
  real_T cc_efOut[1];
  real_T cd_efOut[1];
  real_T db_efOut[1];
  real_T dd_efOut[1];
  real_T e_efOut[1];
  real_T eb_efOut[1];
  real_T ec_efOut[1];
  real_T f_efOut[1];
  real_T fd_efOut[1];
  real_T gb_efOut[1];
  real_T gc_efOut[1];
  real_T gd_efOut[1];
  real_T h_efOut[1];
  real_T hb_efOut[1];
  real_T hc_efOut[1];
  real_T hd_efOut[1];
  real_T i_efOut[1];
  real_T jb_efOut[1];
  real_T kb_efOut[1];
  real_T kc_efOut[1];
  real_T l_efOut[1];
  real_T lb_efOut[1];
  real_T lc_efOut[1];
  real_T m_efOut[1];
  real_T mc_efOut[1];
  real_T n_efOut[1];
  real_T nb_efOut[1];
  real_T ob_efOut[1];
  real_T oc_efOut[1];
  real_T p_efOut[1];
  real_T pb_efOut[1];
  real_T pc_efOut[1];
  real_T qc_efOut[1];
  real_T r_efOut[1];
  real_T rb_efOut[1];
  real_T sb_efOut[1];
  real_T sc_efOut[1];
  real_T t269[1];
  real_T t314[1];
  real_T t317[1];
  real_T t318[1];
  real_T t_efOut[1];
  real_T tc_efOut[1];
  real_T ub_efOut[1];
  real_T uc_efOut[1];
  real_T v_efOut[1];
  real_T w_efOut[1];
  real_T wb_efOut[1];
  real_T wc_efOut[1];
  real_T x_efOut[1];
  real_T xb_efOut[1];
  real_T xc_efOut[1];
  real_T yb_efOut[1];
  real_T yc_efOut[1];
  real_T Pipe_TL2_convection_B_mdot;
  real_T Preheating_Thermodynamic_Properties_Sensor_2P1_V;
  real_T Simscape_Component_ideal_enthalpy_drop;
  real_T Simscape_Component_ideal_outlet_enthalpy;
  real_T Steam_Drum_V_frac_liq;
  real_T Steam_Generator_two_phase_fluid_cp_vap_;
  real_T Thermodynamic_Properties_Sensor_2P1_S;
  real_T Thermodynamic_Properties_Sensor_2P2_H;
  real_T U_idx_0;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T U_idx_3;
  real_T intrm_sf_mf_427;
  real_T t311_idx_0;
  real_T t333;
  real_T t337;
  real_T t346;
  real_T t348;
  real_T t349;
  real_T t350;
  real_T t353;
  real_T t354;
  real_T t355;
  real_T t360;
  real_T t361;
  real_T t362;
  real_T t363;
  real_T t364;
  real_T t366;
  real_T t367;
  real_T t368;
  real_T t370;
  real_T t372;
  real_T t373;
  real_T t375;
  real_T t376;
  real_T t377;
  real_T t379;
  real_T t380;
  real_T t382;
  real_T t383;
  real_T t398;
  real_T t399;
  real_T t400;
  real_T t403;
  real_T t404;
  real_T t406;
  real_T t407;
  real_T t408;
  real_T t409;
  real_T t411;
  real_T t413;
  real_T t414;
  real_T t415;
  real_T t417;
  real_T t418;
  real_T t419;
  real_T t420;
  real_T t421;
  real_T t422;
  real_T t425;
  real_T t426;
  real_T t428;
  real_T t429;
  real_T t430;
  real_T t431;
  real_T t432;
  real_T t433;
  real_T t434;
  real_T t521;
  real_T t522;
  real_T t526;
  real_T t530;
  real_T t534;
  real_T t538;
  real_T t539;
  real_T t543;
  real_T zc_int17;
  real_T zc_int20;
  real_T zc_int21;
  real_T zc_int35;
  size_t t174[1];
  size_t t33[1];
  size_t t331[1];
  size_t t34[1];
  size_t t54[1];
  int32_T M[128];
  int32_T b;
  boolean_T intrm_sf_mf_433;
  boolean_T intrm_sf_mf_434;
  boolean_T intrm_sf_mf_436;
  boolean_T intrm_sf_mf_437;
  boolean_T intrm_sf_mf_438;
  boolean_T intrm_sf_mf_440;
  boolean_T intrm_sf_mf_441;
  boolean_T intrm_sf_mf_450;
  boolean_T intrm_sf_mf_451;
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
  for (b = 0; b < 128; b++) {
    M[b] = t544->mM.mX[b];
  }

  U_idx_0 = t544->mU.mX[0];
  U_idx_1 = t544->mU.mX[1];
  U_idx_2 = t544->mU.mX[2];
  U_idx_3 = t544->mU.mX[3];
  for (b = 0; b < 183; b++) {
    X[b] = t544->mX.mX[b];
  }

  out = t545->mOBS_ALL;
  t318[0ULL] = X[0ULL];
  t33[0] = 100ULL;
  t34[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t318[0ULL], &t33
    [0ULL], &t34[0ULL]);
  t31 = efOut;
  t329[0ULL] = t31.mField0[0ULL];
  t329[1ULL] = t31.mField0[1ULL];
  t331[0ULL] = t31.mField2[0ULL];
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t329[0ULL], &t331[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t33[0ULL], &t34[0ULL]);
  t317[0] = b_efOut[0];
  zc_int17 = t317[0ULL];
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t329[0ULL], &t331[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t33[0ULL], &t34[0ULL]);
  t269[0] = c_efOut[0];
  zc_int35 = t269[0ULL];
  t317[0ULL] = X[43ULL];
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t317[0ULL],
    &t33[0ULL], &t34[0ULL]);
  t28 = d_efOut;
  tlu2_1d_linear_linear_value(&e_efOut[0ULL], &t28.mField0[0ULL], &t28.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t33[0ULL], &t34[0ULL]);
  t314[0] = e_efOut[0];
  zc_int20 = t314[0ULL];
  tlu2_1d_linear_linear_value(&f_efOut[0ULL], &t28.mField0[0ULL], &t28.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = f_efOut[0];
  if (X[44ULL] <= zc_int20) {
    Preheating_Thermodynamic_Properties_Sensor_2P1_V = X[44ULL] / (zc_int20 ==
      0.0 ? 1.0E-16 : zc_int20) - 1.0;
  } else if (X[44ULL] >= t311_idx_0) {
    Preheating_Thermodynamic_Properties_Sensor_2P1_V = (X[44ULL] - 4000.0) /
      (4000.0 - t311_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t311_idx_0) + 2.0;
  } else {
    t350 = t311_idx_0 - zc_int20;
    Preheating_Thermodynamic_Properties_Sensor_2P1_V = (X[44ULL] - zc_int20) /
      (t350 == 0.0 ? 1.0E-16 : t350);
  }

  t269[0ULL] = X[6ULL];
  tlu2_linear_linear_prelookup(&g_efOut.mField0[0ULL], &g_efOut.mField1[0ULL],
    &g_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t269[0ULL],
    &t33[0ULL], &t34[0ULL]);
  t24 = g_efOut;
  tlu2_1d_linear_linear_value(&h_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = h_efOut[0];
  zc_int20 = t311_idx_0;
  tlu2_1d_linear_linear_value(&i_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = i_efOut[0];
  zc_int21 = t311_idx_0;
  if (X[7ULL] <= zc_int20) {
    t346 = X[7ULL] / (zc_int20 == 0.0 ? 1.0E-16 : zc_int20) - 1.0;
  } else if (X[7ULL] >= t311_idx_0) {
    t346 = (X[7ULL] - 4000.0) / (4000.0 - t311_idx_0 == 0.0 ? 1.0E-16 : 4000.0 -
      t311_idx_0) + 2.0;
  } else {
    t355 = t311_idx_0 - zc_int20;
    t346 = (X[7ULL] - zc_int20) / (t355 == 0.0 ? 1.0E-16 : t355);
  }

  if (X[8ULL] <= zc_int20) {
    t348 = X[8ULL] / (zc_int20 == 0.0 ? 1.0E-16 : zc_int20) - 1.0;
  } else if (X[8ULL] >= t311_idx_0) {
    t348 = (X[8ULL] - 4000.0) / (4000.0 - t311_idx_0 == 0.0 ? 1.0E-16 : 4000.0 -
      t311_idx_0) + 2.0;
  } else {
    t360 = t311_idx_0 - zc_int20;
    t348 = (X[8ULL] - zc_int20) / (t360 == 0.0 ? 1.0E-16 : t360);
  }

  t314[0ULL] = ((t346 < 0.0 ? t346 : 0.0) + (t348 < 0.0 ? t348 : 0.0)) / 2.0;
  t54[0] = 50ULL;
  tlu2_linear_nearest_prelookup(&j_efOut.mField0[0ULL], &j_efOut.mField1[0ULL],
    &j_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t314[0ULL],
    &t54[0ULL], &t34[0ULL]);
  t20 = j_efOut;
  t314[0ULL] = X[6ULL];
  tlu2_linear_nearest_prelookup(&k_efOut.mField0[0ULL], &k_efOut.mField1[0ULL],
    &k_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t314[0ULL],
    &t33[0ULL], &t34[0ULL]);
  t27 = k_efOut;
  tlu2_2d_linear_nearest_value(&l_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t27.mField0[0ULL], &t27.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField10, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = l_efOut[0];
  t333 = t311_idx_0;
  tlu2_2d_linear_nearest_value(&m_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t27.mField0[0ULL], &t27.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField8, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = m_efOut[0];
  t349 = t311_idx_0;
  tlu2_2d_linear_nearest_value(&n_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t27.mField0[0ULL], &t27.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField11, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = n_efOut[0];
  t333 = t333 * t349 / (t311_idx_0 == 0.0 ? 1.0E-16 : t311_idx_0);
  t349 = X[9ULL] >= 0.0 ? X[9ULL] : 0.0;
  t350 = X[10ULL] >= 0.0 ? X[10ULL] : 0.0;
  t337 = t333 * t350;
  t363 = t337 + X[59ULL];
  t364 = t349 + X[59ULL];
  t543 = t363 / (t364 == 0.0 ? 1.0E-16 : t364);
  if (t543 <= 1.0) {
    t353 = 1.0 - t543 * 0.999999;
  } else {
    t353 = 1.0E-6;
  }

  if (t543 >= 1.0) {
    t354 = t543 * 1.000001 - 1.0;
  } else {
    t354 = 1.0E-6;
  }

  if (t337 + X[59ULL] >= t349 + X[59ULL]) {
    Simscape_Component_ideal_outlet_enthalpy = t349 + X[59ULL];
    t366 = t337 + X[59ULL];
    t355 = (1.000001 / (Simscape_Component_ideal_outlet_enthalpy == 0.0 ?
                        1.0E-16 : Simscape_Component_ideal_outlet_enthalpy) -
            0.999999 / (t366 == 0.0 ? 1.0E-16 : t366)) * X[11ULL];
  } else {
    t367 = t337 + X[59ULL];
    t368 = t349 + X[59ULL];
    t355 = (1.000001 / (t367 == 0.0 ? 1.0E-16 : t367) - 0.999999 / (t368 == 0.0 ?
             1.0E-16 : t368)) * X[11ULL];
  }

  t337 = t355 <= 15.0 ? t355 : 15.0;
  t314[0ULL] = t346;
  tlu2_linear_linear_prelookup(&o_efOut.mField0[0ULL], &o_efOut.mField1[0ULL],
    &o_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t314[0ULL],
    &t54[0ULL], &t34[0ULL]);
  t20 = o_efOut;
  tlu2_2d_linear_linear_value(&p_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = p_efOut[0];
  t538 = X[6ULL] * t311_idx_0 * 100.0 + X[7ULL];
  t314[0] = 0.0;
  tlu2_linear_linear_prelookup(&q_efOut.mField0[0ULL], &q_efOut.mField1[0ULL],
    &q_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t314[0ULL],
    &t54[0ULL], &t34[0ULL]);
  t17 = q_efOut;
  tlu2_2d_linear_linear_value(&r_efOut[0ULL], &t17.mField0[0ULL], &t17.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = r_efOut[0];
  t539 = X[6ULL] * t311_idx_0 * 100.0 + zc_int20;
  zc_int20 = (t539 - t538) / (t333 == 0.0 ? 1.0E-16 : t333);
  t370 = (1.0 - pmf_exp(-t337)) * X[58ULL];
  Pipe_TL2_convection_B_mdot = pmf_exp(-t337) * t354 + t353;
  t355 = t370 / (Pipe_TL2_convection_B_mdot == 0.0 ? 1.0E-16 :
                 Pipe_TL2_convection_B_mdot);
  intrm_sf_mf_67 = (t355 > zc_int20 * 1000.0);
  intrm_sf_mf_51 = (t538 < t539);
  intrm_sf_mf_53 = (t538 > t539);
  t314[0] = 1.0;
  tlu2_linear_linear_prelookup(&s_efOut.mField0[0ULL], &s_efOut.mField1[0ULL],
    &s_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t314[0ULL],
    &t54[0ULL], &t34[0ULL]);
  t18 = s_efOut;
  tlu2_2d_linear_linear_value(&t_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = t_efOut[0];
  t530 = X[6ULL] * t311_idx_0 * 100.0 + zc_int21;
  intrm_sf_mf_54 = (t538 > t530);
  intrm_sf_mf_57 = (X[58ULL] < 0.0);
  intrm_sf_mf_58 = (X[58ULL] > 0.0);
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (intrm_sf_mf_67) {
        t373 = X[58ULL] - t353 * zc_int20 * 1000.0;
        t367 = pmf_log((t354 * zc_int20 * 1000.0 + X[58ULL]) / (t373 == 0.0 ?
          1.0E-16 : t373));
        zc_int21 = t367 / (t337 == 0.0 ? 1.0E-16 : t337);
      } else {
        zc_int21 = 1.0;
      }
    } else {
      zc_int21 = 0.0;
    }
  } else {
    zc_int21 = intrm_sf_mf_57 ? intrm_sf_mf_54 ? 0.0 : (real_T)!intrm_sf_mf_53 :
      (real_T)intrm_sf_mf_51;
  }

  t314[0ULL] = ((t346 > 1.0 ? t346 : 1.0) + (t348 > 1.0 ? t348 : 1.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&u_efOut.mField0[0ULL], &u_efOut.mField1[0ULL],
    &u_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t314[0ULL],
    &t54[0ULL], &t34[0ULL]);
  t20 = u_efOut;
  tlu2_2d_linear_nearest_value(&v_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t27.mField0[0ULL], &t27.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField10, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = v_efOut[0];
  t346 = t311_idx_0;
  tlu2_2d_linear_nearest_value(&w_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t27.mField0[0ULL], &t27.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField8, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = w_efOut[0];
  t348 = t311_idx_0;
  tlu2_2d_linear_nearest_value(&x_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t27.mField0[0ULL], &t27.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField11, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = x_efOut[0];
  t346 = t346 * t348 / (t311_idx_0 == 0.0 ? 1.0E-16 : t311_idx_0);
  t348 = t346 * t350;
  t350 = (X[59ULL] + t348) / (t364 == 0.0 ? 1.0E-16 : t364);
  if (t350 <= 1.0) {
    t534 = 1.0 - t350 * 0.999999;
  } else {
    t534 = 1.0E-6;
  }

  if (t350 >= 1.0) {
    t360 = t350 * 1.000001 - 1.0;
  } else {
    t360 = 1.0E-6;
  }

  if (X[59ULL] + t348 >= t349 + X[59ULL]) {
    t379 = t349 + X[59ULL];
    t380 = X[59ULL] + t348;
    t361 = (1.000001 / (t379 == 0.0 ? 1.0E-16 : t379) - 0.999999 / (t380 == 0.0 ?
             1.0E-16 : t380)) * X[12ULL];
  } else {
    t367 = X[59ULL] + t348;
    t382 = t349 + X[59ULL];
    t361 = (1.000001 / (t367 == 0.0 ? 1.0E-16 : t367) - 0.999999 / (t382 == 0.0 ?
             1.0E-16 : t382)) * X[12ULL];
  }

  t348 = t361 <= 15.0 ? t361 : 15.0;
  t349 = (t530 - t538) / (t346 == 0.0 ? 1.0E-16 : t346);
  intrm_sf_mf_50 = (t538 < t530);
  t367 = (1.0 - pmf_exp(-t348)) * X[58ULL];
  t311_idx_0 = pmf_exp(-t348) * t360 + t534;
  t361 = t367 / (t311_idx_0 == 0.0 ? 1.0E-16 : t311_idx_0);
  intrm_sf_mf_68 = (t361 < t349 * 1000.0);
  intrm_sf_mf_55 = (t538 <= t530);
  if (intrm_sf_mf_58) {
    t362 = intrm_sf_mf_51 ? 0.0 : (real_T)!intrm_sf_mf_50;
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (intrm_sf_mf_68) {
        t367 = X[58ULL] - t534 * t349 * 1000.0;
        t367 = pmf_log((t360 * t349 * 1000.0 + X[58ULL]) / (t367 == 0.0 ?
          1.0E-16 : t367));
        t362 = t367 / (t348 == 0.0 ? 1.0E-16 : t348);
      } else {
        t362 = 1.0;
      }
    } else {
      t362 = 0.0;
    }
  } else {
    t362 = intrm_sf_mf_51 ? 0.0 : (real_T)!intrm_sf_mf_55;
  }

  Simscape_Component_ideal_outlet_enthalpy = (1.0 - zc_int21) - t362;
  zc_int21 = t363 / (t364 == 0.0 ? 1.0E-16 : t364) / (t333 == 0.0 ? 1.0E-16 :
    t333);
  t362 = X[13ULL] / (t364 == 0.0 ? 1.0E-16 : t364);
  t363 = t362 <= 15.0 ? t362 : 15.0;
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (intrm_sf_mf_67) {
        t362 = (t543 - 1.0) * zc_int20 * 1000.0 + X[58ULL];
      } else {
        t362 = (t543 * t355 + X[58ULL]) - zc_int20 * 1000.0;
      }
    } else if (intrm_sf_mf_50) {
      t362 = X[58ULL];
    } else {
      t362 = (t350 * t361 + X[58ULL]) - t349 * 1000.0;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (intrm_sf_mf_68) {
        t362 = (t350 - 1.0) * t349 * 1000.0 + X[58ULL];
      } else {
        t362 = (t350 * t361 + X[58ULL]) - t349 * 1000.0;
      }
    } else if (intrm_sf_mf_53) {
      t362 = X[58ULL];
    } else {
      t362 = (t543 * t355 + X[58ULL]) - zc_int20 * 1000.0;
    }
  } else if (intrm_sf_mf_51) {
    t362 = (t543 * t355 + X[58ULL]) - zc_int20 * 1000.0;
  } else if (intrm_sf_mf_55) {
    t362 = X[58ULL];
  } else {
    t362 = (t350 * t361 + X[58ULL]) - t349 * 1000.0;
  }

  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (intrm_sf_mf_67) {
        t364 = t539;
      } else {
        t364 = t333 * t355 * 0.001 + t538;
      }
    } else if (intrm_sf_mf_50) {
      t364 = t538;
    } else {
      t364 = t346 * t361 * 0.001 + t538;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (intrm_sf_mf_68) {
        t364 = t530;
      } else {
        t364 = t346 * t361 * 0.001 + t538;
      }
    } else if (intrm_sf_mf_53) {
      t364 = t538;
    } else {
      t364 = t333 * t355 * 0.001 + t538;
    }
  } else if (intrm_sf_mf_51) {
    t364 = t333 * t355 * 0.001 + t538;
  } else if (intrm_sf_mf_55) {
    t364 = t538;
  } else {
    t364 = t346 * t361 * 0.001 + t538;
  }

  t367 = (pmf_exp(t363 * Simscape_Component_ideal_outlet_enthalpy) - 1.0) * t362;
  t362 = t367 / (zc_int21 == 0.0 ? 1.0E-16 : zc_int21);
  intrm_sf_mf_67 = (t362 * 0.001 > t530 - t364);
  intrm_sf_mf_68 = (t364 < t530);
  intrm_sf_mf_69 = (t362 * 0.001 < t539 - t364);
  intrm_sf_mf_70 = (t364 > t539);
  t314[0ULL] = X[49ULL];
  tlu2_linear_linear_prelookup(&y_efOut.mField0[0ULL], &y_efOut.mField1[0ULL],
    &y_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t314[0ULL],
    &t33[0ULL], &t34[0ULL]);
  t13 = y_efOut;
  tlu2_1d_linear_linear_value(&ab_efOut[0ULL], &t13.mField0[0ULL], &t13.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = ab_efOut[0];
  t362 = t311_idx_0;
  tlu2_1d_linear_linear_value(&bb_efOut[0ULL], &t13.mField0[0ULL], &t13.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = bb_efOut[0];
  Simscape_Component_ideal_outlet_enthalpy = t311_idx_0;
  if (X[50ULL] <= t362) {
    t364 = X[50ULL] / (t362 == 0.0 ? 1.0E-16 : t362) - 1.0;
  } else if (X[50ULL] >= t311_idx_0) {
    t364 = (X[50ULL] - 4000.0) / (4000.0 - t311_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t311_idx_0) + 2.0;
  } else {
    t399 = t311_idx_0 - t362;
    t364 = (X[50ULL] - t362) / (t399 == 0.0 ? 1.0E-16 : t399);
  }

  t314[0ULL] = X[53ULL];
  tlu2_linear_linear_prelookup(&cb_efOut.mField0[0ULL], &cb_efOut.mField1[0ULL],
    &cb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t314[0ULL],
    &t33[0ULL], &t34[0ULL]);
  t24 = cb_efOut;
  tlu2_1d_linear_linear_value(&db_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = db_efOut[0];
  t366 = t311_idx_0;
  tlu2_1d_linear_linear_value(&eb_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = eb_efOut[0];
  if (X[54ULL] <= t366) {
    t368 = X[54ULL] / (t366 == 0.0 ? 1.0E-16 : t366) - 1.0;
  } else if (X[54ULL] >= t311_idx_0) {
    t368 = (X[54ULL] - 4000.0) / (4000.0 - t311_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t311_idx_0) + 2.0;
  } else {
    t404 = t311_idx_0 - t366;
    t368 = (X[54ULL] - t366) / (t404 == 0.0 ? 1.0E-16 : t404);
  }

  t366 = U_idx_0 * 1000.0;
  t314[0ULL] = X[79ULL];
  tlu2_linear_linear_prelookup(&fb_efOut.mField0[0ULL], &fb_efOut.mField1[0ULL],
    &fb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t314[0ULL],
    &t33[0ULL], &t34[0ULL]);
  t27 = fb_efOut;
  tlu2_1d_linear_linear_value(&gb_efOut[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = gb_efOut[0];
  t370 = t311_idx_0;
  tlu2_1d_linear_linear_value(&hb_efOut[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = hb_efOut[0];
  if (X[80ULL] <= t370) {
    t372 = X[80ULL] / (t370 == 0.0 ? 1.0E-16 : t370) - 1.0;
  } else if (X[80ULL] >= t311_idx_0) {
    t372 = (X[80ULL] - 4000.0) / (4000.0 - t311_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t311_idx_0) + 2.0;
  } else {
    Steam_Drum_V_frac_liq = t311_idx_0 - t370;
    t372 = (X[80ULL] - t370) / (Steam_Drum_V_frac_liq == 0.0 ? 1.0E-16 :
      Steam_Drum_V_frac_liq);
  }

  t370 = -X[134ULL] + X[91ULL];
  Pipe_TL2_convection_B_mdot = -X[135ULL] + X[93ULL];
  t373 = U_idx_2 * 1000.0;
  t375 = -X[141ULL] + X[47ULL];
  t376 = -X[142ULL] + X[45ULL];
  t314[0ULL] = Preheating_Thermodynamic_Properties_Sensor_2P1_V;
  tlu2_linear_linear_prelookup(&ib_efOut.mField0[0ULL], &ib_efOut.mField1[0ULL],
    &ib_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t314[0ULL],
    &t54[0ULL], &t34[0ULL]);
  t20 = ib_efOut;
  tlu2_2d_linear_linear_value(&jb_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t28.mField0[0ULL], &t28.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = jb_efOut[0];
  Preheating_Thermodynamic_Properties_Sensor_2P1_V = t311_idx_0;
  t377 = X[43ULL] * t311_idx_0 * 100.0 + X[44ULL];
  tlu2_2d_linear_linear_value(&kb_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t28.mField0[0ULL], &t28.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = kb_efOut[0];
  t379 = t311_idx_0;
  tlu2_2d_linear_linear_value(&lb_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t28.mField0[0ULL], &t28.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = lb_efOut[0];
  t380 = t311_idx_0;
  t314[0ULL] = t372;
  tlu2_linear_linear_prelookup(&mb_efOut.mField0[0ULL], &mb_efOut.mField1[0ULL],
    &mb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t314[0ULL],
    &t54[0ULL], &t34[0ULL]);
  t20 = mb_efOut;
  tlu2_2d_linear_linear_value(&nb_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t27.mField0[0ULL], &t27.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = nb_efOut[0];
  t372 = t311_idx_0;
  tlu2_2d_linear_linear_value(&ob_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t27.mField0[0ULL], &t27.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = ob_efOut[0];
  t382 = t311_idx_0;
  tlu2_2d_linear_linear_value(&pb_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t27.mField0[0ULL], &t27.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = pb_efOut[0];
  t383 = t311_idx_0;
  t398 = X[0ULL] - X[49ULL];
  if (X[97ULL] <= zc_int17) {
    t399 = X[97ULL] / (zc_int17 == 0.0 ? 1.0E-16 : zc_int17) - 1.0;
  } else if (X[97ULL] >= zc_int35) {
    t399 = (X[97ULL] - 4000.0) / (4000.0 - zc_int35 == 0.0 ? 1.0E-16 : 4000.0 -
      zc_int35) + 2.0;
  } else {
    t367 = zc_int35 - zc_int17;
    t399 = (X[97ULL] - zc_int17) / (t367 == 0.0 ? 1.0E-16 : t367);
  }

  t314[0ULL] = t399;
  tlu2_linear_linear_prelookup(&qb_efOut.mField0[0ULL], &qb_efOut.mField1[0ULL],
    &qb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t314[0ULL],
    &t54[0ULL], &t34[0ULL]);
  t30 = qb_efOut;
  tlu2_2d_linear_linear_value(&rb_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t31.mField0[0ULL], &t31.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t269[0] = rb_efOut[0];
  t399 = t269[0ULL];
  t521 = pmf_sqrt(t399 * 461.5);
  tlu2_2d_linear_linear_value(&sb_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t31.mField0[0ULL], &t31.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t317[0] = sb_efOut[0];
  Simscape_Component_ideal_enthalpy_drop = t317[0ULL];
  if (U_idx_3 <= 0.0) {
    t403 = 0.0;
  } else {
    t403 = U_idx_3 >= 1.0 ? 1.0 : U_idx_3;
  }

  t404 = t403 * 0.0002;
  t400 = X[49ULL] / (X[0ULL] == 0.0 ? 1.0E-16 : X[0ULL]);
  if (t400 <= 0.0) {
    t406 = 0.0;
  } else {
    t406 = t400 >= 1.0 ? 1.0 : t400;
  }

  t400 = (pmf_pow(t406, 1.5384615384615383) - pmf_pow(t406, 1.7692307692307689))
    * 8.6666666666666661;
  if (t400 <= 0.0) {
    t407 = 0.0;
  } else {
    t407 = t400 >= 1.0E+6 ? 1.0E+6 : t400;
  }

  t400 = t404 * X[0ULL] * 0.85 / (t521 == 0.0 ? 1.0E-16 : t521) * pmf_sqrt(t407);
  if (t406 < 0.545727733814065) {
    t407 = X[0ULL] * 0.85 / (t521 == 0.0 ? 1.0E-16 : t521) * 0.667262351240862 *
      t404 * 100000.0;
  } else {
    t407 = t400 * 100000.0;
  }

  t400 = t398 > 0.01 ? t407 : 0.0;
  t521 = fabs(t400);
  t367 = t521 / 1.5;
  t407 = (0.8 - (t367 - 0.8) * (t367 - 0.8) * 0.2) - (t406 - 0.25) * (t406 -
    0.25) * 0.35;
  t367 = Simscape_Component_ideal_enthalpy_drop * X[0ULL] * 100.0 + X[97ULL];
  if (t362 <= t362) {
    Simscape_Component_ideal_enthalpy_drop = t362 / (t362 == 0.0 ? 1.0E-16 :
      t362) - 1.0;
  } else if (t362 >= Simscape_Component_ideal_outlet_enthalpy) {
    Simscape_Component_ideal_enthalpy_drop = (t362 - 4000.0) / (4000.0 -
      Simscape_Component_ideal_outlet_enthalpy == 0.0 ? 1.0E-16 : 4000.0 -
      Simscape_Component_ideal_outlet_enthalpy) + 2.0;
  } else {
    t311_idx_0 = Simscape_Component_ideal_outlet_enthalpy - t362;
    Simscape_Component_ideal_enthalpy_drop = (t362 - t362) / (t311_idx_0 == 0.0 ?
      1.0E-16 : t311_idx_0);
  }

  t314[0ULL] = Simscape_Component_ideal_enthalpy_drop;
  tlu2_linear_linear_prelookup(&tb_efOut.mField0[0ULL], &tb_efOut.mField1[0ULL],
    &tb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t314[0ULL],
    &t54[0ULL], &t34[0ULL]);
  t27 = tb_efOut;
  tlu2_2d_linear_linear_value(&ub_efOut[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], &t13.mField0[0ULL], &t13.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = ub_efOut[0];
  t408 = X[49ULL] * t311_idx_0 * 100.0 + t362;
  if (Simscape_Component_ideal_outlet_enthalpy <= t362) {
    Simscape_Component_ideal_enthalpy_drop =
      Simscape_Component_ideal_outlet_enthalpy / (t362 == 0.0 ? 1.0E-16 : t362)
      - 1.0;
  } else if (Simscape_Component_ideal_outlet_enthalpy >=
             Simscape_Component_ideal_outlet_enthalpy) {
    Simscape_Component_ideal_enthalpy_drop =
      (Simscape_Component_ideal_outlet_enthalpy - 4000.0) / (4000.0 -
      Simscape_Component_ideal_outlet_enthalpy == 0.0 ? 1.0E-16 : 4000.0 -
      Simscape_Component_ideal_outlet_enthalpy) + 2.0;
  } else {
    t311_idx_0 = Simscape_Component_ideal_outlet_enthalpy - t362;
    Simscape_Component_ideal_enthalpy_drop =
      (Simscape_Component_ideal_outlet_enthalpy - t362) / (t311_idx_0 == 0.0 ?
      1.0E-16 : t311_idx_0);
  }

  t314[0ULL] = Simscape_Component_ideal_enthalpy_drop;
  tlu2_linear_linear_prelookup(&vb_efOut.mField0[0ULL], &vb_efOut.mField1[0ULL],
    &vb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t314[0ULL],
    &t54[0ULL], &t34[0ULL]);
  t20 = vb_efOut;
  tlu2_2d_linear_linear_value(&wb_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t13.mField0[0ULL], &t13.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = wb_efOut[0];
  Simscape_Component_ideal_enthalpy_drop = X[49ULL] * t311_idx_0 * 100.0 +
    Simscape_Component_ideal_outlet_enthalpy;
  tlu2_2d_linear_linear_value(&xb_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t31.mField0[0ULL], &t31.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t318[0] = xb_efOut[0];
  t362 = t318[0ULL];
  tlu2_2d_linear_linear_value(&yb_efOut[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], &t13.mField0[0ULL], &t13.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = yb_efOut[0];
  Simscape_Component_ideal_outlet_enthalpy = t311_idx_0;
  tlu2_2d_linear_linear_value(&ac_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t13.mField0[0ULL], &t13.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = ac_efOut[0];
  t522 = t311_idx_0 - Simscape_Component_ideal_outlet_enthalpy;
  Simscape_Component_ideal_outlet_enthalpy = (t362 -
    Simscape_Component_ideal_outlet_enthalpy) / (t522 == 0.0 ? 1.0E-16 : t522);
  if (Simscape_Component_ideal_outlet_enthalpy <= 0.0) {
    t409 = 0.0;
  } else {
    t409 = Simscape_Component_ideal_outlet_enthalpy >= 1.0 ? 1.0 :
      Simscape_Component_ideal_outlet_enthalpy;
  }

  Simscape_Component_ideal_outlet_enthalpy =
    (Simscape_Component_ideal_enthalpy_drop - t408) * t409 + t408;
  Simscape_Component_ideal_enthalpy_drop = t367 -
    Simscape_Component_ideal_outlet_enthalpy;
  t408 = t404;
  t404 = (real_T)(t406 < 0.545727733814065);
  if (X[26ULL] < zc_int17) {
    Steam_Drum_V_frac_liq = X[26ULL] / (zc_int17 == 0.0 ? 1.0E-16 : zc_int17) -
      1.0;
  } else {
    Steam_Drum_V_frac_liq = 0.0;
  }

  if (X[27ULL] > zc_int35) {
    t411 = (X[27ULL] - 4000.0) / (4000.0 - zc_int35 == 0.0 ? 1.0E-16 : 4000.0 -
      zc_int35) + 2.0;
  } else {
    t411 = 1.0;
  }

  t314[0ULL] = Steam_Drum_V_frac_liq;
  t174[0] = 25ULL;
  tlu2_linear_linear_prelookup(&bc_efOut.mField0[0ULL], &bc_efOut.mField1[0ULL],
    &bc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t314[0ULL],
    &t174[0ULL], &t34[0ULL]);
  t28 = bc_efOut;
  tlu2_2d_linear_linear_value(&cc_efOut[0ULL], &t28.mField0[0ULL], &t28.mField2
    [0ULL], &t329[0ULL], &t331[0ULL], ((_NeDynamicSystem*)(LC))->mField31,
    &t174[0ULL], &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = cc_efOut[0];
  Steam_Drum_V_frac_liq = t311_idx_0;
  t314[0ULL] = t411;
  tlu2_linear_linear_prelookup(&dc_efOut.mField0[0ULL], &dc_efOut.mField1[0ULL],
    &dc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t314[0ULL],
    &t174[0ULL], &t34[0ULL]);
  t20 = dc_efOut;
  tlu2_2d_linear_linear_value(&ec_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t329[0ULL], &t331[0ULL], ((_NeDynamicSystem*)(LC))->mField32,
    &t174[0ULL], &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = ec_efOut[0];
  t522 = X[28ULL] * Steam_Drum_V_frac_liq + X[29ULL] * t311_idx_0;
  Steam_Drum_V_frac_liq = X[28ULL] * Steam_Drum_V_frac_liq / (t522 == 0.0 ?
    1.0E-16 : t522);
  if (X[147ULL] <= zc_int17) {
    t411 = X[147ULL] / (zc_int17 == 0.0 ? 1.0E-16 : zc_int17) - 1.0;
  } else if (X[147ULL] >= zc_int35) {
    t411 = (X[147ULL] - 4000.0) / (4000.0 - zc_int35 == 0.0 ? 1.0E-16 : 4000.0 -
      zc_int35) + 2.0;
  } else {
    t367 = zc_int35 - zc_int17;
    t411 = (X[147ULL] - zc_int17) / (t367 == 0.0 ? 1.0E-16 : t367);
  }

  t314[0ULL] = X[33ULL];
  tlu2_linear_linear_prelookup(&fc_efOut.mField0[0ULL], &fc_efOut.mField1[0ULL],
    &fc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t314[0ULL],
    &t33[0ULL], &t34[0ULL]);
  t20 = fc_efOut;
  tlu2_1d_linear_linear_value(&gc_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = gc_efOut[0];
  zc_int17 = t311_idx_0;
  tlu2_1d_linear_linear_value(&hc_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = hc_efOut[0];
  zc_int35 = t311_idx_0;
  if (X[34ULL] <= zc_int17) {
    Steam_Generator_two_phase_fluid_cp_vap_ = X[34ULL] / (zc_int17 == 0.0 ?
      1.0E-16 : zc_int17) - 1.0;
  } else if (X[34ULL] >= t311_idx_0) {
    Steam_Generator_two_phase_fluid_cp_vap_ = (X[34ULL] - 4000.0) / (4000.0 -
      t311_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t311_idx_0) + 2.0;
  } else {
    t367 = t311_idx_0 - zc_int17;
    Steam_Generator_two_phase_fluid_cp_vap_ = (X[34ULL] - zc_int17) / (t367 ==
      0.0 ? 1.0E-16 : t367);
  }

  if (X[35ULL] <= zc_int17) {
    t414 = X[35ULL] / (zc_int17 == 0.0 ? 1.0E-16 : zc_int17) - 1.0;
  } else if (X[35ULL] >= t311_idx_0) {
    t414 = (X[35ULL] - 4000.0) / (4000.0 - t311_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t311_idx_0) + 2.0;
  } else {
    t367 = t311_idx_0 - zc_int17;
    t414 = (X[35ULL] - zc_int17) / (t367 == 0.0 ? 1.0E-16 : t367);
  }

  t314[0ULL] = ((Steam_Generator_two_phase_fluid_cp_vap_ < 0.0 ?
                 Steam_Generator_two_phase_fluid_cp_vap_ : 0.0) + (t414 < 0.0 ?
    t414 : 0.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&ic_efOut.mField0[0ULL], &ic_efOut.mField1[0ULL],
    &ic_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t314[0ULL],
    &t54[0ULL], &t34[0ULL]);
  t28 = ic_efOut;
  t314[0ULL] = X[33ULL];
  tlu2_linear_nearest_prelookup(&jc_efOut.mField0[0ULL], &jc_efOut.mField1[0ULL],
    &jc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t314[0ULL],
    &t33[0ULL], &t34[0ULL]);
  t27 = jc_efOut;
  tlu2_2d_linear_nearest_value(&kc_efOut[0ULL], &t28.mField0[0ULL],
    &t28.mField2[0ULL], &t27.mField0[0ULL], &t27.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = kc_efOut[0];
  t413 = t311_idx_0;
  tlu2_2d_linear_nearest_value(&lc_efOut[0ULL], &t28.mField0[0ULL],
    &t28.mField2[0ULL], &t27.mField0[0ULL], &t27.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = lc_efOut[0];
  t415 = t311_idx_0;
  tlu2_2d_linear_nearest_value(&mc_efOut[0ULL], &t28.mField0[0ULL],
    &t28.mField2[0ULL], &t27.mField0[0ULL], &t27.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = mc_efOut[0];
  t413 = t413 * t415 / (t311_idx_0 == 0.0 ? 1.0E-16 : t311_idx_0);
  t415 = X[37ULL] >= 0.0 ? X[37ULL] : 0.0;
  intrm_sf_mf_427 = X[38ULL] >= 0.0 ? X[38ULL] : 0.0;
  t522 = t415 + X[164ULL];
  t526 = (t415 + X[164ULL]) * (1.0 - pmf_exp(-X[36ULL] / (t522 == 0.0 ? 1.0E-16 :
    t522)));
  t521 = t413 * intrm_sf_mf_427 + X[164ULL];
  t417 = t526 / (t521 == 0.0 ? 1.0E-16 : t521);
  t418 = t417 <= 15.0 ? t417 : 15.0;
  t314[0ULL] = Steam_Generator_two_phase_fluid_cp_vap_;
  tlu2_linear_linear_prelookup(&nc_efOut.mField0[0ULL], &nc_efOut.mField1[0ULL],
    &nc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t314[0ULL],
    &t54[0ULL], &t34[0ULL]);
  t28 = nc_efOut;
  tlu2_2d_linear_linear_value(&oc_efOut[0ULL], &t28.mField0[0ULL], &t28.mField2
    [0ULL], &t20.mField0[0ULL], &t20.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = oc_efOut[0];
  t419 = X[33ULL] * t311_idx_0 * 100.0 + X[34ULL];
  tlu2_2d_linear_linear_value(&pc_efOut[0ULL], &t17.mField0[0ULL], &t17.mField2
    [0ULL], &t20.mField0[0ULL], &t20.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = pc_efOut[0];
  t420 = X[33ULL] * t311_idx_0 * 100.0 + zc_int17;
  zc_int17 = (t420 - t419) / (t413 == 0.0 ? 1.0E-16 : t413);
  t417 = (1.0 - pmf_exp(-t418)) * X[163ULL];
  intrm_sf_mf_450 = (t417 > zc_int17 * 1000.0);
  intrm_sf_mf_434 = (t419 < t420);
  intrm_sf_mf_436 = (t419 > t420);
  tlu2_2d_linear_linear_value(&qc_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t20.mField0[0ULL], &t20.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = qc_efOut[0];
  t422 = X[33ULL] * t311_idx_0 * 100.0 + zc_int35;
  intrm_sf_mf_437 = (t419 > t422);
  intrm_sf_mf_440 = (X[163ULL] < 0.0);
  intrm_sf_mf_441 = (X[163ULL] > 0.0);
  if (intrm_sf_mf_441) {
    if (intrm_sf_mf_434) {
      if (intrm_sf_mf_450) {
        t367 = -pmf_log((X[163ULL] - zc_int17 * 1000.0) / (X[163ULL] == 0.0 ?
          1.0E-16 : X[163ULL]));
        zc_int35 = t367 / (t418 == 0.0 ? 1.0E-16 : t418);
      } else {
        zc_int35 = 1.0;
      }
    } else {
      zc_int35 = 0.0;
    }
  } else {
    zc_int35 = intrm_sf_mf_440 ? intrm_sf_mf_437 ? 0.0 : (real_T)
      !intrm_sf_mf_436 : (real_T)intrm_sf_mf_434;
  }

  t314[0ULL] = ((Steam_Generator_two_phase_fluid_cp_vap_ > 1.0 ?
                 Steam_Generator_two_phase_fluid_cp_vap_ : 1.0) + (t414 > 1.0 ?
    t414 : 1.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&rc_efOut.mField0[0ULL], &rc_efOut.mField1[0ULL],
    &rc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t314[0ULL],
    &t54[0ULL], &t34[0ULL]);
  t20 = rc_efOut;
  tlu2_2d_linear_nearest_value(&sc_efOut[0ULL], &t20.mField0[0ULL],
    &t20.mField2[0ULL], &t27.mField0[0ULL], &t27.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = sc_efOut[0];
  Steam_Generator_two_phase_fluid_cp_vap_ = t311_idx_0;
  tlu2_2d_linear_nearest_value(&tc_efOut[0ULL], &t20.mField0[0ULL],
    &t20.mField2[0ULL], &t27.mField0[0ULL], &t27.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = tc_efOut[0];
  t414 = t311_idx_0;
  tlu2_2d_linear_nearest_value(&uc_efOut[0ULL], &t20.mField0[0ULL],
    &t20.mField2[0ULL], &t27.mField0[0ULL], &t27.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t311_idx_0 = uc_efOut[0];
  Steam_Generator_two_phase_fluid_cp_vap_ =
    Steam_Generator_two_phase_fluid_cp_vap_ * t414 / (t311_idx_0 == 0.0 ?
    1.0E-16 : t311_idx_0);
  t311_idx_0 = (t415 + X[164ULL]) * (1.0 - pmf_exp(-X[39ULL] / (t522 == 0.0 ?
    1.0E-16 : t522)));
  t526 = X[164ULL] + Steam_Generator_two_phase_fluid_cp_vap_ * intrm_sf_mf_427;
  t414 = t311_idx_0 / (t526 == 0.0 ? 1.0E-16 : t526);
  intrm_sf_mf_427 = t414 <= 15.0 ? t414 : 15.0;
  t414 = (t422 - t419) / (Steam_Generator_two_phase_fluid_cp_vap_ == 0.0 ?
    1.0E-16 : Steam_Generator_two_phase_fluid_cp_vap_);
  intrm_sf_mf_433 = (t419 < t422);
  t421 = (1.0 - pmf_exp(-intrm_sf_mf_427)) * X[163ULL];
  intrm_sf_mf_451 = (t421 < t414 * 1000.0);
  intrm_sf_mf_438 = (t419 <= t422);
  if (intrm_sf_mf_441) {
    t311_idx_0 = intrm_sf_mf_434 ? 0.0 : (real_T)!intrm_sf_mf_433;
  } else if (intrm_sf_mf_440) {
    if (intrm_sf_mf_437) {
      if (intrm_sf_mf_451) {
        t367 = -pmf_log((X[163ULL] - t414 * 1000.0) / (X[163ULL] == 0.0 ?
          1.0E-16 : X[163ULL]));
        t311_idx_0 = t367 / (intrm_sf_mf_427 == 0.0 ? 1.0E-16 : intrm_sf_mf_427);
      } else {
        t311_idx_0 = 1.0;
      }
    } else {
      t311_idx_0 = 0.0;
    }
  } else {
    t311_idx_0 = intrm_sf_mf_434 ? 0.0 : (real_T)!intrm_sf_mf_438;
  }

  Thermodynamic_Properties_Sensor_2P1_S = (1.0 - zc_int35) - t311_idx_0;
  t311_idx_0 = (t415 + X[164ULL]) * (1.0 - pmf_exp(-X[40ULL] / (t522 == 0.0 ?
    1.0E-16 : t522)));
  t522 = t521 / (t413 == 0.0 ? 1.0E-16 : t413);
  zc_int35 = t311_idx_0 / (t522 == 0.0 ? 1.0E-16 : t522);
  if (intrm_sf_mf_441) {
    if (intrm_sf_mf_434) {
      t415 = X[163ULL] - zc_int17 * 1000.0;
    } else if (intrm_sf_mf_433) {
      t415 = X[163ULL];
    } else {
      t415 = X[163ULL] - t414 * 1000.0;
    }
  } else if (intrm_sf_mf_440) {
    if (intrm_sf_mf_437) {
      t415 = X[163ULL] - t414 * 1000.0;
    } else if (intrm_sf_mf_436) {
      t415 = X[163ULL];
    } else {
      t415 = X[163ULL] - zc_int17 * 1000.0;
    }
  } else if (intrm_sf_mf_434) {
    t415 = zc_int17 * 1000.0 + X[163ULL];
  } else if (intrm_sf_mf_438) {
    t415 = X[163ULL];
  } else {
    t415 = t414 * 1000.0 + X[163ULL];
  }

  if (intrm_sf_mf_441) {
    if (intrm_sf_mf_434) {
      if (intrm_sf_mf_450) {
        t311_idx_0 = t420;
      } else {
        t311_idx_0 = t413 * t417 * 0.001 + t419;
      }
    } else if (intrm_sf_mf_433) {
      t311_idx_0 = t419;
    } else {
      t311_idx_0 = Steam_Generator_two_phase_fluid_cp_vap_ * t421 * 0.001 + t419;
    }
  } else if (intrm_sf_mf_440) {
    if (intrm_sf_mf_437) {
      if (intrm_sf_mf_451) {
        t311_idx_0 = t422;
      } else {
        t311_idx_0 = Steam_Generator_two_phase_fluid_cp_vap_ * t421 * 0.001 +
          t419;
      }
    } else if (intrm_sf_mf_436) {
      t311_idx_0 = t419;
    } else {
      t311_idx_0 = t413 * t417 * 0.001 + t419;
    }
  } else if (intrm_sf_mf_434) {
    t311_idx_0 = t413 * t417 * 0.001 + t419;
  } else if (intrm_sf_mf_438) {
    t311_idx_0 = t419;
  } else {
    t311_idx_0 = Steam_Generator_two_phase_fluid_cp_vap_ * t421 * 0.001 + t419;
  }

  Thermodynamic_Properties_Sensor_2P2_H = zc_int35 * t415 *
    Thermodynamic_Properties_Sensor_2P1_S;
  intrm_sf_mf_450 = (Thermodynamic_Properties_Sensor_2P2_H * 0.001 > t422 -
                     t311_idx_0);
  intrm_sf_mf_451 = (Thermodynamic_Properties_Sensor_2P2_H * 0.001 < t420 -
                     t311_idx_0);
  t314[0ULL] = t411;
  tlu2_linear_linear_prelookup(&vc_efOut.mField0[0ULL], &vc_efOut.mField1[0ULL],
    &vc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t314[0ULL],
    &t54[0ULL], &t34[0ULL]);
  t20 = vc_efOut;
  tlu2_2d_linear_linear_value(&wc_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t329[0ULL], &t331[0ULL], ((_NeDynamicSystem*)(LC))->mField0, &t54
    [0ULL], &t33[0ULL], &t34[0ULL]);
  t314[0] = wc_efOut[0];
  t521 = -t314[0ULL];
  t411 = -t521;
  tlu2_2d_linear_linear_value(&xc_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t329[0ULL], &t331[0ULL], ((_NeDynamicSystem*)(LC))->mField30, &t54
    [0ULL], &t33[0ULL], &t34[0ULL]);
  t314[0] = xc_efOut[0];
  t521 = -t314[0ULL];
  Thermodynamic_Properties_Sensor_2P1_S = -t521;
  tlu2_2d_linear_linear_value(&yc_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t329[0ULL], &t331[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t54
    [0ULL], &t33[0ULL], &t34[0ULL]);
  t314[0] = yc_efOut[0];
  t521 = -t314[0ULL];
  t425 = -t521;
  t521 = -t317[0ULL];
  t426 = -t521;
  Thermodynamic_Properties_Sensor_2P2_H = X[0ULL] * -t521 * 100.0 + X[97ULL];
  t521 = -t318[0ULL];
  t428 = -t521;
  t521 = -t269[0ULL];
  t429 = -t521;
  t318[0ULL] = t364;
  tlu2_linear_linear_prelookup(&ad_efOut.mField0[0ULL], &ad_efOut.mField1[0ULL],
    &ad_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t318[0ULL],
    &t54[0ULL], &t34[0ULL]);
  t20 = ad_efOut;
  tlu2_2d_linear_linear_value(&bd_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t13.mField0[0ULL], &t13.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t317[0] = bd_efOut[0];
  t521 = -t317[0ULL];
  t364 = -t521;
  t430 = X[49ULL] * -t521 * 100.0 + X[50ULL];
  tlu2_2d_linear_linear_value(&cd_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t13.mField0[0ULL], &t13.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t317[0] = cd_efOut[0];
  t521 = -t317[0ULL];
  t431 = -t521;
  tlu2_2d_linear_linear_value(&dd_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t13.mField0[0ULL], &t13.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t317[0] = dd_efOut[0];
  t521 = -t317[0ULL];
  t432 = -t521;
  t318[0ULL] = t368;
  tlu2_linear_linear_prelookup(&ed_efOut.mField0[0ULL], &ed_efOut.mField1[0ULL],
    &ed_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t318[0ULL],
    &t54[0ULL], &t34[0ULL]);
  t20 = ed_efOut;
  tlu2_2d_linear_linear_value(&fd_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t318[0] = fd_efOut[0];
  t521 = -t318[0ULL];
  t368 = -t521;
  t433 = X[53ULL] * -t521 * 100.0 + X[54ULL];
  tlu2_2d_linear_linear_value(&gd_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t318[0] = gd_efOut[0];
  t521 = -t318[0ULL];
  t434 = -t521;
  tlu2_2d_linear_linear_value(&hd_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t54[0ULL], &t33[0ULL], &t34[0ULL]);
  t318[0] = hd_efOut[0];
  t521 = -t318[0ULL];
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (M[0ULL] != 0) {
        t522 = X[58ULL] - t353 * zc_int20 * 1000.0;
        t526 = pmf_log((t354 * zc_int20 * 1000.0 + X[58ULL]) / (t522 == 0.0 ?
          1.0E-16 : t522));
        t367 = t526 / (t337 == 0.0 ? 1.0E-16 : t337);
      } else {
        t367 = 1.0;
      }
    } else {
      t367 = 0.0;
    }
  } else {
    t367 = intrm_sf_mf_57 ? intrm_sf_mf_54 ? 0.0 : (real_T)!intrm_sf_mf_53 :
      (real_T)intrm_sf_mf_51;
  }

  if (intrm_sf_mf_58) {
    t337 = intrm_sf_mf_51 ? 0.0 : (real_T)!intrm_sf_mf_50;
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (M[1ULL] != 0) {
        t522 = X[58ULL] - t534 * t349 * 1000.0;
        t526 = pmf_log((t360 * t349 * 1000.0 + X[58ULL]) / (t522 == 0.0 ?
          1.0E-16 : t522));
        t337 = t526 / (t348 == 0.0 ? 1.0E-16 : t348);
      } else {
        t337 = 1.0;
      }
    } else {
      t337 = 0.0;
    }
  } else {
    t337 = intrm_sf_mf_51 ? 0.0 : (real_T)!intrm_sf_mf_55;
  }

  t348 = (1.0 - t367) - t337;
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (M[0ULL] != 0) {
        t353 = (t543 - 1.0) * zc_int20 * 1000.0 + X[58ULL];
      } else {
        t353 = (t543 * t355 + X[58ULL]) - zc_int20 * 1000.0;
      }
    } else if (intrm_sf_mf_50) {
      t353 = X[58ULL];
    } else {
      t353 = (t350 * t361 + X[58ULL]) - t349 * 1000.0;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (M[1ULL] != 0) {
        t353 = (t350 - 1.0) * t349 * 1000.0 + X[58ULL];
      } else {
        t353 = (t350 * t361 + X[58ULL]) - t349 * 1000.0;
      }
    } else if (intrm_sf_mf_53) {
      t353 = X[58ULL];
    } else {
      t353 = (t543 * t355 + X[58ULL]) - zc_int20 * 1000.0;
    }
  } else if (intrm_sf_mf_51) {
    t353 = (t543 * t355 + X[58ULL]) - zc_int20 * 1000.0;
  } else if (intrm_sf_mf_55) {
    t353 = X[58ULL];
  } else {
    t353 = (t350 * t361 + X[58ULL]) - t349 * 1000.0;
  }

  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (M[0ULL] != 0) {
        zc_int20 = t539;
      } else {
        zc_int20 = t333 * t355 * 0.001 + t538;
      }
    } else if (intrm_sf_mf_50) {
      zc_int20 = t538;
    } else {
      zc_int20 = t346 * t361 * 0.001 + t538;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (M[1ULL] != 0) {
        zc_int20 = t530;
      } else {
        zc_int20 = t346 * t361 * 0.001 + t538;
      }
    } else if (intrm_sf_mf_53) {
      zc_int20 = t538;
    } else {
      zc_int20 = t333 * t355 * 0.001 + t538;
    }
  } else if (intrm_sf_mf_51) {
    zc_int20 = t333 * t355 * 0.001 + t538;
  } else if (intrm_sf_mf_55) {
    zc_int20 = t538;
  } else {
    zc_int20 = t346 * t361 * 0.001 + t538;
  }

  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_68) {
      if (intrm_sf_mf_67) {
        t538 = zc_int21 * (t530 - zc_int20) * 1000.0 + t353;
        t539 = -pmf_log(t353 / (t538 == 0.0 ? 1.0E-16 : t538));
        zc_int20 = t539 / (t363 == 0.0 ? 1.0E-16 : t363);
      } else {
        zc_int20 = t348;
      }
    } else {
      zc_int20 = 0.0;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_70) {
      if (intrm_sf_mf_69) {
        t534 = zc_int21 * (t539 - zc_int20) * 1000.0 + t353;
        t530 = -pmf_log(t353 / (t534 == 0.0 ? 1.0E-16 : t534));
        zc_int20 = t530 / (t363 == 0.0 ? 1.0E-16 : t363);
      } else {
        zc_int20 = t348;
      }
    } else {
      zc_int20 = 0.0;
    }
  } else {
    zc_int20 = t348;
  }

  zc_int21 = t348 - zc_int20;
  t333 = t367 + (intrm_sf_mf_58 ? 0.0 : intrm_sf_mf_57 ? zc_int21 : 0.0);
  t346 = ((real_T)(M[55ULL] != 0) * 2.0 - 1.0) * t400 / 1.5;
  if (t407 <= 0.0) {
    t349 = 0.0;
  } else {
    t349 = t407 >= 1.0 ? 1.0 : (0.8 - (t346 - 0.8) * (t346 - 0.8) * 0.2) - (t406
      - 0.25) * (t406 - 0.25) * 0.35;
  }

  t350 = t398 > 0.01 ? Simscape_Component_ideal_enthalpy_drop * t349 : 0.0;
  t348 = intrm_sf_mf_58 ? zc_int21 : 0.0;
  if (intrm_sf_mf_441) {
    if (intrm_sf_mf_434) {
      if (M[72ULL] != 0) {
        t534 = -pmf_log((X[163ULL] - zc_int17 * 1000.0) / (X[163ULL] == 0.0 ?
          1.0E-16 : X[163ULL]));
        zc_int21 = t534 / (t418 == 0.0 ? 1.0E-16 : t418);
      } else {
        zc_int21 = 1.0;
      }
    } else {
      zc_int21 = 0.0;
    }
  } else {
    zc_int21 = intrm_sf_mf_440 ? intrm_sf_mf_437 ? 0.0 : (real_T)
      !intrm_sf_mf_436 : (real_T)intrm_sf_mf_434;
  }

  if (intrm_sf_mf_441) {
    zc_int17 = intrm_sf_mf_434 ? 0.0 : (real_T)!intrm_sf_mf_433;
  } else if (intrm_sf_mf_440) {
    if (intrm_sf_mf_437) {
      if (M[83ULL] != 0) {
        t534 = -pmf_log((X[163ULL] - t414 * 1000.0) / (X[163ULL] == 0.0 ?
          1.0E-16 : X[163ULL]));
        zc_int17 = t534 / (intrm_sf_mf_427 == 0.0 ? 1.0E-16 : intrm_sf_mf_427);
      } else {
        zc_int17 = 1.0;
      }
    } else {
      zc_int17 = 0.0;
    }
  } else {
    zc_int17 = intrm_sf_mf_434 ? 0.0 : (real_T)!intrm_sf_mf_438;
  }

  t543 = (1.0 - zc_int21) - zc_int17;
  if (intrm_sf_mf_441) {
    if (intrm_sf_mf_434) {
      if (M[72ULL] != 0) {
        t353 = t420;
      } else {
        t353 = t413 * t417 * 0.001 + t419;
      }
    } else if (intrm_sf_mf_433) {
      t353 = t419;
    } else {
      t353 = Steam_Generator_two_phase_fluid_cp_vap_ * t421 * 0.001 + t419;
    }
  } else if (intrm_sf_mf_440) {
    if (intrm_sf_mf_437) {
      if (M[83ULL] != 0) {
        t353 = t422;
      } else {
        t353 = Steam_Generator_two_phase_fluid_cp_vap_ * t421 * 0.001 + t419;
      }
    } else if (intrm_sf_mf_436) {
      t353 = t419;
    } else {
      t353 = t413 * t417 * 0.001 + t419;
    }
  } else if (intrm_sf_mf_434) {
    t353 = t413 * t417 * 0.001 + t419;
  } else if (intrm_sf_mf_438) {
    t353 = t419;
  } else {
    t353 = Steam_Generator_two_phase_fluid_cp_vap_ * t421 * 0.001 + t419;
  }

  if (intrm_sf_mf_441) {
    if (t311_idx_0 < t422) {
      if (intrm_sf_mf_450) {
        t353 = (t422 - t353) / (t415 == 0.0 ? 1.0E-16 : t415) / (zc_int35 == 0.0
          ? 1.0E-16 : zc_int35) * 1000.0;
      } else {
        t353 = t543;
      }
    } else {
      t353 = 0.0;
    }
  } else if (intrm_sf_mf_440) {
    if (t311_idx_0 > t420) {
      if (intrm_sf_mf_451) {
        t353 = (t420 - t353) / (t415 == 0.0 ? 1.0E-16 : t415) / (zc_int35 == 0.0
          ? 1.0E-16 : zc_int35) * 1000.0;
      } else {
        t353 = t543;
      }
    } else {
      t353 = 0.0;
    }
  } else {
    t353 = t543;
  }

  zc_int35 = t543 - t353;
  t543 = t337 + t348;
  t337 = zc_int21 + (intrm_sf_mf_441 ? 0.0 : intrm_sf_mf_440 ? zc_int35 : 0.0);
  zc_int35 = zc_int17 + (intrm_sf_mf_441 ? zc_int35 : 0.0);
  t354 = t543;
  t543 = -(((real_T)(M[61ULL] != 0) * 2.0 - 1.0) * X[56ULL] * t350);
  t267[0ULL] = 0.0;
  t267[1ULL] = 0.0;
  t267[2ULL] = 0.0;
  t267[3ULL] = 0.0;
  t267[4ULL] = 0.0;
  t267[5ULL] = 0.0;
  t267[6ULL] = 0.0;
  t267[7ULL] = 0.0;
  t267[8ULL] = 0.0;
  t267[9ULL] = 0.0;
  t267[10ULL] = 0.0;
  t267[11ULL] = 0.0;
  t267[12ULL] = 0.0;
  t267[13ULL] = 0.0;
  t267[14ULL] = X[0ULL] * 0.1;
  t267[15ULL] = X[42ULL];
  t267[16ULL] = X[43ULL] * 0.1;
  t267[17ULL] = X[44ULL];
  t267[18ULL] = X[45ULL];
  t267[19ULL] = -X[45ULL];
  t267[20ULL] = X[0ULL] * 0.1;
  t267[21ULL] = X[42ULL];
  t267[22ULL] = X[45ULL];
  t267[23ULL] = X[46ULL];
  t267[24ULL] = X[47ULL];
  t267[25ULL] = X[43ULL] * 0.1;
  t267[26ULL] = X[44ULL];
  t267[27ULL] = -X[45ULL];
  t267[28ULL] = X[46ULL];
  t267[29ULL] = -X[47ULL];
  t267[30ULL] = X[47ULL];
  t267[31ULL] = -X[47ULL];
  t267[32ULL] = X[1ULL];
  t267[33ULL] = X[2ULL];
  t267[34ULL] = X[48ULL];
  t267[35ULL] = 0.101325;
  t267[36ULL] = X[49ULL] * 0.1;
  t267[37ULL] = X[50ULL];
  t267[38ULL] = X[51ULL];
  t267[39ULL] = X[52ULL] * 0.1;
  t267[40ULL] = X[53ULL] * 0.1;
  t267[41ULL] = X[54ULL];
  t267[42ULL] = X[48ULL];
  t267[43ULL] = 0.101325;
  t267[44ULL] = X[51ULL];
  t267[45ULL] = X[52ULL] * 0.1;
  t267[46ULL] = X[3ULL];
  t267[47ULL] = X[4ULL] * 0.1;
  t267[48ULL] = X[5ULL];
  t267[49ULL] = X[55ULL];
  t267[50ULL] = 10.0;
  t267[51ULL] = X[60ULL];
  t267[52ULL] = X[61ULL];
  t267[53ULL] = X[62ULL];
  t267[54ULL] = X[48ULL];
  t267[55ULL] = 0.101325;
  t267[56ULL] = X[63ULL];
  t267[57ULL] = X[64ULL];
  t267[58ULL] = X[55ULL];
  t267[59ULL] = X[65ULL];
  t267[60ULL] = X[48ULL];
  t267[61ULL] = 0.101325;
  t267[62ULL] = X[60ULL];
  t267[63ULL] = X[66ULL];
  t267[64ULL] = X[55ULL];
  t267[65ULL] = X[67ULL];
  t267[66ULL] = X[51ULL];
  t267[67ULL] = X[52ULL] * 0.1;
  t267[68ULL] = X[68ULL];
  t267[69ULL] = X[69ULL];
  t267[70ULL] = 10.0;
  t267[71ULL] = X[70ULL];
  t267[72ULL] = X[51ULL];
  t267[73ULL] = X[52ULL] * 0.1;
  t267[74ULL] = X[61ULL];
  t267[75ULL] = X[71ULL];
  t267[76ULL] = 10.0;
  t267[77ULL] = X[72ULL];
  t267[78ULL] = X[49ULL] * 0.1;
  t267[79ULL] = X[50ULL];
  t267[80ULL] = X[53ULL] * 0.1;
  t267[81ULL] = X[54ULL];
  t267[82ULL] = X[9ULL] * 0.001;
  t267[83ULL] = X[6ULL] * 0.1;
  t267[84ULL] = X[7ULL];
  t267[85ULL] = X[8ULL];
  t267[86ULL] = X[10ULL];
  t267[87ULL] = X[59ULL] * 0.001;
  t267[88ULL] = X[11ULL] * 0.001;
  t267[89ULL] = X[13ULL] * 0.001;
  t267[90ULL] = X[12ULL] * 0.001;
  t267[91ULL] = X[58ULL];
  t267[92ULL] = X[56ULL];
  t267[93ULL] = X[57ULL];
  t267[94ULL] = X[73ULL];
  t267[95ULL] = X[74ULL];
  t267[96ULL] = X[75ULL];
  t267[97ULL] = X[49ULL] * 0.1;
  t267[98ULL] = X[50ULL];
  t267[99ULL] = X[73ULL];
  t267[100ULL] = X[76ULL];
  t267[101ULL] = X[56ULL];
  t267[102ULL] = X[53ULL] * 0.1;
  t267[103ULL] = X[54ULL];
  t267[104ULL] = X[74ULL];
  t267[105ULL] = X[77ULL];
  t267[106ULL] = X[57ULL];
  t267[107ULL] = X[14ULL];
  t267[108ULL] = X[9ULL] * 0.001;
  t267[109ULL] = X[11ULL] * 0.001;
  t267[110ULL] = X[13ULL] * 0.001;
  t267[111ULL] = X[12ULL] * 0.001;
  t267[112ULL] = t333;
  t267[113ULL] = zc_int20;
  t267[114ULL] = t354;
  t267[115ULL] = X[10ULL];
  t267[116ULL] = 0.0;
  t267[117ULL] = X[78ULL];
  t267[118ULL] = t366 * 1000.0;
  t267[119ULL] = t366 * 1000.0;
  t267[120ULL] = -X[78ULL];
  t267[121ULL] = X[53ULL] * 0.1;
  t267[122ULL] = X[54ULL];
  t267[123ULL] = X[79ULL] * 0.1;
  t267[124ULL] = X[80ULL];
  t267[125ULL] = 0.0;
  t267[126ULL] = 0.0;
  t267[127ULL] = 0.0;
  t267[128ULL] = 0.0;
  t267[129ULL] = 0.0;
  t267[130ULL] = -X[74ULL];
  t267[131ULL] = X[81ULL];
  t267[132ULL] = U_idx_1;
  t267[133ULL] = X[53ULL] * 0.1;
  t267[134ULL] = X[54ULL];
  t267[135ULL] = -X[74ULL];
  t267[136ULL] = X[82ULL];
  t267[137ULL] = -X[57ULL];
  t267[138ULL] = X[79ULL] * 0.1;
  t267[139ULL] = X[80ULL];
  t267[140ULL] = X[81ULL];
  t267[141ULL] = X[82ULL];
  t267[142ULL] = X[57ULL];
  t267[143ULL] = X[87ULL];
  t267[144ULL] = X[83ULL];
  t267[145ULL] = X[84ULL];
  t267[146ULL] = X[85ULL];
  t267[147ULL] = X[86ULL];
  t267[148ULL] = -X[57ULL];
  t267[149ULL] = X[57ULL];
  t267[150ULL] = X[78ULL];
  t267[151ULL] = X[78ULL];
  t267[152ULL] = t366 * 1000.0;
  t267[153ULL] = t366 * 1000.0;
  t267[154ULL] = t366 * 0.001;
  t267[155ULL] = 0.0;
  t267[156ULL] = U_idx_1;
  t267[157ULL] = U_idx_1;
  t267[158ULL] = -X[87ULL];
  t267[159ULL] = U_idx_1;
  t267[160ULL] = X[88ULL];
  t267[161ULL] = 15.0;
  t267[162ULL] = X[89ULL];
  t267[163ULL] = X[90ULL] * 0.1;
  t267[164ULL] = X[91ULL];
  t267[165ULL] = -X[91ULL];
  t267[166ULL] = X[88ULL];
  t267[167ULL] = 15.0;
  t267[168ULL] = X[91ULL];
  t267[169ULL] = X[92ULL];
  t267[170ULL] = X[93ULL];
  t267[171ULL] = X[94ULL];
  t267[172ULL] = X[89ULL];
  t267[173ULL] = X[90ULL] * 0.1;
  t267[174ULL] = -X[91ULL];
  t267[175ULL] = X[95ULL];
  t267[176ULL] = -X[93ULL];
  t267[177ULL] = X[94ULL];
  t267[178ULL] = 0.0;
  t267[179ULL] = X[93ULL];
  t267[180ULL] = -X[93ULL];
  t267[181ULL] = X[96ULL];
  t267[182ULL] = X[79ULL] * 0.1;
  t267[183ULL] = X[80ULL];
  t267[184ULL] = X[79ULL] * 0.1;
  t267[185ULL] = X[80ULL];
  t267[186ULL] = -X[57ULL];
  t267[187ULL] = -X[81ULL];
  t267[188ULL] = -X[81ULL];
  t267[189ULL] = -X[57ULL];
  t267[190ULL] = X[0ULL] * 0.1;
  t267[191ULL] = X[97ULL];
  t267[192ULL] = X[0ULL] * 0.1;
  t267[193ULL] = X[97ULL];
  t267[194ULL] = X[56ULL];
  t267[195ULL] = X[98ULL];
  t267[196ULL] = X[98ULL];
  t267[197ULL] = X[56ULL];
  t267[198ULL] = X[56ULL];
  t267[199ULL] = X[49ULL] * 0.1;
  t267[200ULL] = X[50ULL];
  t267[201ULL] = X[49ULL] * 0.1;
  t267[202ULL] = X[50ULL];
  t267[203ULL] = X[56ULL];
  t267[204ULL] = X[73ULL];
  t267[205ULL] = X[73ULL];
  t267[206ULL] = X[56ULL];
  t267[207ULL] = X[56ULL];
  t267[208ULL] = X[0ULL] * 0.1;
  t267[209ULL] = X[99ULL];
  t267[210ULL] = X[0ULL] * 0.1;
  t267[211ULL] = X[99ULL];
  t267[212ULL] = X[100ULL];
  t267[213ULL] = X[101ULL];
  t267[214ULL] = X[101ULL];
  t267[215ULL] = X[100ULL];
  t267[216ULL] = X[100ULL];
  t267[217ULL] = -X[57ULL];
  t267[218ULL] = X[102ULL];
  t267[219ULL] = X[103ULL] * 0.1;
  t267[220ULL] = X[104ULL];
  t267[221ULL] = X[105ULL] * 0.1;
  t267[222ULL] = X[106ULL];
  t267[223ULL] = X[107ULL];
  t267[224ULL] = X[102ULL];
  t267[225ULL] = X[103ULL] * 0.1;
  t267[226ULL] = X[106ULL];
  t267[227ULL] = X[108ULL];
  t267[228ULL] = 7.5;
  t267[229ULL] = X[109ULL];
  t267[230ULL] = X[104ULL];
  t267[231ULL] = X[105ULL] * 0.1;
  t267[232ULL] = X[107ULL];
  t267[233ULL] = X[110ULL];
  t267[234ULL] = -7.5;
  t267[235ULL] = X[109ULL];
  t267[236ULL] = 7.5;
  t267[237ULL] = -7.5;
  t267[238ULL] = X[111ULL];
  t267[239ULL] = 0.2;
  t267[240ULL] = X[51ULL];
  t267[241ULL] = X[52ULL] * 0.1;
  t267[242ULL] = X[112ULL];
  t267[243ULL] = -X[61ULL];
  t267[244ULL] = X[111ULL];
  t267[245ULL] = 0.2;
  t267[246ULL] = X[112ULL];
  t267[247ULL] = X[113ULL];
  t267[248ULL] = 10.0;
  t267[249ULL] = X[114ULL];
  t267[250ULL] = X[51ULL];
  t267[251ULL] = X[52ULL] * 0.1;
  t267[252ULL] = -X[61ULL];
  t267[253ULL] = X[115ULL];
  t267[254ULL] = -10.0;
  t267[255ULL] = X[114ULL];
  t267[256ULL] = 10.0;
  t267[257ULL] = -10.0;
  t267[258ULL] = 0.0;
  t267[259ULL] = 0.0;
  t267[260ULL] = X[116ULL];
  t267[261ULL] = X[117ULL] * 0.1;
  t267[262ULL] = X[118ULL];
  t267[263ULL] = X[119ULL] * 0.1;
  t267[264ULL] = X[78ULL];
  t267[265ULL] = X[120ULL];
  t267[266ULL] = X[121ULL];
  t267[267ULL] = X[15ULL] * 0.1;
  t267[268ULL] = X[16ULL];
  t267[269ULL] = X[122ULL];
  t267[270ULL] = X[123ULL];
  t267[271ULL] = t366;
  t267[272ULL] = X[116ULL];
  t267[273ULL] = X[117ULL] * 0.1;
  t267[274ULL] = X[120ULL];
  t267[275ULL] = X[124ULL];
  t267[276ULL] = X[122ULL];
  t267[277ULL] = X[125ULL];
  t267[278ULL] = X[118ULL];
  t267[279ULL] = X[119ULL] * 0.1;
  t267[280ULL] = X[121ULL];
  t267[281ULL] = X[126ULL];
  t267[282ULL] = X[123ULL];
  t267[283ULL] = X[127ULL];
  t267[284ULL] = X[104ULL];
  t267[285ULL] = X[105ULL] * 0.1;
  t267[286ULL] = X[116ULL];
  t267[287ULL] = X[117ULL] * 0.1;
  t267[288ULL] = X[128ULL];
  t267[289ULL] = -X[107ULL];
  t267[290ULL] = -X[120ULL];
  t267[291ULL] = X[17ULL] * 0.1;
  t267[292ULL] = X[18ULL];
  t267[293ULL] = 7.5;
  t267[294ULL] = -X[122ULL];
  t267[295ULL] = 0.0;
  t267[296ULL] = X[104ULL];
  t267[297ULL] = X[105ULL] * 0.1;
  t267[298ULL] = -X[107ULL];
  t267[299ULL] = X[129ULL];
  t267[300ULL] = 7.5;
  t267[301ULL] = X[130ULL];
  t267[302ULL] = X[116ULL];
  t267[303ULL] = X[117ULL] * 0.1;
  t267[304ULL] = -X[120ULL];
  t267[305ULL] = X[131ULL];
  t267[306ULL] = -X[122ULL];
  t267[307ULL] = X[132ULL];
  t267[308ULL] = X[118ULL];
  t267[309ULL] = X[119ULL] * 0.1;
  t267[310ULL] = X[89ULL];
  t267[311ULL] = X[90ULL] * 0.1;
  t267[312ULL] = X[133ULL];
  t267[313ULL] = -X[121ULL];
  t267[314ULL] = t370;
  t267[315ULL] = X[19ULL] * 0.1;
  t267[316ULL] = X[20ULL];
  t267[317ULL] = -X[123ULL];
  t267[318ULL] = Pipe_TL2_convection_B_mdot;
  t267[319ULL] = 0.0;
  t267[320ULL] = X[118ULL];
  t267[321ULL] = X[119ULL] * 0.1;
  t267[322ULL] = -X[121ULL];
  t267[323ULL] = X[136ULL];
  t267[324ULL] = -X[123ULL];
  t267[325ULL] = X[137ULL];
  t267[326ULL] = X[89ULL];
  t267[327ULL] = X[90ULL] * 0.1;
  t267[328ULL] = t370;
  t267[329ULL] = X[138ULL];
  t267[330ULL] = Pipe_TL2_convection_B_mdot;
  t267[331ULL] = X[139ULL];
  t267[332ULL] = X[79ULL] * 0.1;
  t267[333ULL] = X[80ULL];
  t267[334ULL] = X[43ULL] * 0.1;
  t267[335ULL] = X[44ULL];
  t267[336ULL] = 0.0;
  t267[337ULL] = X[140ULL];
  t267[338ULL] = t373 * 1000.0;
  t267[339ULL] = t373 * 1000.0;
  t267[340ULL] = -X[140ULL];
  t267[341ULL] = X[140ULL];
  t267[342ULL] = X[140ULL];
  t267[343ULL] = t373 * 1000.0;
  t267[344ULL] = t373 * 1000.0;
  t267[345ULL] = X[79ULL] * 0.1;
  t267[346ULL] = X[80ULL];
  t267[347ULL] = X[43ULL] * 0.1;
  t267[348ULL] = X[44ULL];
  t267[349ULL] = X[21ULL] * 0.1;
  t267[350ULL] = X[22ULL];
  t267[351ULL] = X[140ULL];
  t267[352ULL] = -X[57ULL];
  t267[353ULL] = t375;
  t267[354ULL] = -X[81ULL];
  t267[355ULL] = t376;
  t267[356ULL] = t373;
  t267[357ULL] = X[79ULL] * 0.1;
  t267[358ULL] = X[80ULL];
  t267[359ULL] = -X[81ULL];
  t267[360ULL] = X[143ULL];
  t267[361ULL] = -X[57ULL];
  t267[362ULL] = X[43ULL] * 0.1;
  t267[363ULL] = X[44ULL];
  t267[364ULL] = t376;
  t267[365ULL] = X[144ULL];
  t267[366ULL] = t375;
  t267[367ULL] = X[23ULL] * 1550.0031000062004;
  t267[368ULL] = X[145ULL];
  t267[369ULL] = X[146ULL];
  t267[370ULL] = U_idx_2;
  t267[371ULL] = 0.0;
  t267[372ULL] = X[43ULL] * 0.1;
  t267[373ULL] = X[44ULL];
  t267[374ULL] = t377;
  t267[375ULL] = t379 * 0.001;
  t267[376ULL] = t380;
  t267[377ULL] = Preheating_Thermodynamic_Properties_Sensor_2P1_V;
  t267[378ULL] = t380 - 273.15;
  t267[379ULL] = X[79ULL] * 0.1;
  t267[380ULL] = X[80ULL];
  t267[381ULL] = X[79ULL] * t372 * 100.0 + X[80ULL];
  t267[382ULL] = t382 * 0.001;
  t267[383ULL] = t383;
  t267[384ULL] = t372;
  t267[385ULL] = t383 - 273.15;
  t267[386ULL] = X[79ULL] * 0.1;
  t267[387ULL] = X[80ULL];
  t267[388ULL] = 0.0;
  t267[389ULL] = 0.0;
  t267[390ULL] = X[79ULL] * 0.1;
  t267[391ULL] = X[80ULL];
  t267[392ULL] = X[49ULL] * 0.1;
  t267[393ULL] = X[50ULL];
  t267[394ULL] = 0.0;
  t267[395ULL] = 0.0;
  t267[396ULL] = X[49ULL] * 0.1;
  t267[397ULL] = X[50ULL];
  t267[398ULL] = X[49ULL] * 0.1;
  t267[399ULL] = X[50ULL];
  t267[400ULL] = X[53ULL] * 0.1;
  t267[401ULL] = X[54ULL];
  t267[402ULL] = 0.0;
  t267[403ULL] = 0.0;
  t267[404ULL] = X[53ULL] * 0.1;
  t267[405ULL] = X[54ULL];
  t267[406ULL] = X[53ULL] * 0.1;
  t267[407ULL] = X[54ULL];
  t267[408ULL] = X[0ULL] * 0.1;
  t267[409ULL] = X[147ULL];
  t267[410ULL] = 0.0;
  t267[411ULL] = 0.0;
  t267[412ULL] = X[0ULL] * 0.1;
  t267[413ULL] = X[147ULL];
  t267[414ULL] = X[0ULL] * 0.1;
  t267[415ULL] = X[147ULL];
  t267[416ULL] = X[53ULL] * 0.1;
  t267[417ULL] = X[54ULL];
  t267[418ULL] = 0.0;
  t267[419ULL] = 0.0;
  t267[420ULL] = X[53ULL] * 0.1;
  t267[421ULL] = X[54ULL];
  t267[422ULL] = X[53ULL] * 0.1;
  t267[423ULL] = X[0ULL] * 0.1;
  t267[424ULL] = X[97ULL];
  t267[425ULL] = 0.0;
  t267[426ULL] = 0.0;
  t267[427ULL] = X[0ULL] * 0.1;
  t267[428ULL] = X[97ULL];
  t267[429ULL] = X[0ULL] * 0.1;
  t267[430ULL] = X[97ULL];
  t267[431ULL] = X[79ULL] * 0.1;
  t267[432ULL] = X[0ULL] * 0.1;
  t267[433ULL] = X[99ULL];
  t267[434ULL] = 4.0;
  t267[435ULL] = X[148ULL];
  t267[436ULL] = -X[101ULL];
  t267[437ULL] = X[101ULL];
  t267[438ULL] = 0.0;
  t267[439ULL] = X[0ULL] * 0.1;
  t267[440ULL] = X[99ULL];
  t267[441ULL] = -X[101ULL];
  t267[442ULL] = X[149ULL];
  t267[443ULL] = -X[100ULL];
  t267[444ULL] = 4.0;
  t267[445ULL] = X[148ULL];
  t267[446ULL] = X[101ULL];
  t267[447ULL] = X[149ULL];
  t267[448ULL] = X[100ULL];
  t267[449ULL] = -X[100ULL];
  t267[450ULL] = X[100ULL];
  t267[451ULL] = X[24ULL];
  t267[452ULL] = X[25ULL];
  t267[453ULL] = X[118ULL];
  t267[454ULL] = X[119ULL] * 0.1;
  t267[455ULL] = 0.0;
  t267[456ULL] = 0.0;
  t267[457ULL] = X[119ULL] * 99999.999999999985;
  t267[458ULL] = X[118ULL];
  t267[459ULL] = X[119ULL] * 0.099999999999999992;
  t267[460ULL] = X[118ULL] - 273.15;
  t267[461ULL] = 4.0;
  t267[462ULL] = X[148ULL];
  t267[463ULL] = -X[101ULL];
  t267[464ULL] = 4.0;
  t267[465ULL] = X[148ULL];
  t267[466ULL] = -X[101ULL];
  t267[467ULL] = X[150ULL];
  t267[468ULL] = -X[100ULL];
  t267[469ULL] = -X[100ULL];
  t267[470ULL] = 4.0;
  t267[471ULL] = 502.26708950739749;
  t267[472ULL] = X[88ULL];
  t267[473ULL] = 15.0;
  t267[474ULL] = -X[91ULL];
  t267[475ULL] = 588.15;
  t267[476ULL] = X[88ULL];
  t267[477ULL] = 15.0;
  t267[478ULL] = -X[91ULL];
  t267[479ULL] = X[151ULL];
  t267[480ULL] = -X[93ULL];
  t267[481ULL] = 1402.7179873660207;
  t267[482ULL] = 15.0;
  t267[483ULL] = -X[93ULL];
  t267[484ULL] = X[111ULL];
  t267[485ULL] = 0.2;
  t267[486ULL] = -X[112ULL];
  t267[487ULL] = 293.15;
  t267[488ULL] = X[111ULL];
  t267[489ULL] = 0.2;
  t267[490ULL] = -X[112ULL];
  t267[491ULL] = X[152ULL];
  t267[492ULL] = -10.0;
  t267[493ULL] = 83.887262122266435;
  t267[494ULL] = 0.2;
  t267[495ULL] = -10.0;
  t267[496ULL] = X[48ULL];
  t267[497ULL] = 0.101325;
  t267[498ULL] = -X[60ULL];
  t267[499ULL] = 293.15;
  t267[500ULL] = X[48ULL];
  t267[501ULL] = 0.101325;
  t267[502ULL] = -X[60ULL];
  t267[503ULL] = X[153ULL];
  t267[504ULL] = -X[55ULL];
  t267[505ULL] = 83.893856050917179;
  t267[506ULL] = 0.101325;
  t267[507ULL] = -X[55ULL];
  t267[508ULL] = X[0ULL] * 0.1;
  t267[509ULL] = X[97ULL];
  t267[510ULL] = X[49ULL] * 0.1;
  t267[511ULL] = X[50ULL];
  t267[512ULL] = X[98ULL];
  t267[513ULL] = -X[73ULL];
  t267[514ULL] = U_idx_3;
  t267[515ULL] = X[0ULL] * 0.1;
  t267[516ULL] = X[97ULL];
  t267[517ULL] = X[98ULL];
  t267[518ULL] = X[154ULL];
  t267[519ULL] = X[56ULL];
  t267[520ULL] = X[49ULL] * 0.1;
  t267[521ULL] = X[50ULL];
  t267[522ULL] = -X[73ULL];
  t267[523ULL] = X[155ULL];
  t267[524ULL] = -X[56ULL];
  t267[525ULL] = t349;
  t267[526ULL] = t350;
  t267[527ULL] = Simscape_Component_ideal_outlet_enthalpy;
  t267[528ULL] = t409;
  t267[529ULL] = t362 * 0.001;
  t267[530ULL] = t399;
  t267[531ULL] = X[56ULL];
  t267[532ULL] = t346;
  t267[533ULL] = X[56ULL];
  t267[534ULL] = -X[56ULL];
  t267[535ULL] = t408;
  t267[536ULL] = t404;
  t267[537ULL] = t403;
  t267[538ULL] = -t543;
  t267[539ULL] = t406;
  t267[540ULL] = X[97ULL];
  t267[541ULL] = t349;
  t267[542ULL] = t350;
  t267[543ULL] = Simscape_Component_ideal_outlet_enthalpy;
  t267[544ULL] = t409;
  t267[545ULL] = t362 * 0.001;
  t267[546ULL] = t399 - 273.15;
  t267[547ULL] = X[56ULL];
  t267[548ULL] = t346;
  t267[549ULL] = t408;
  t267[550ULL] = t404;
  t267[551ULL] = t403;
  t267[552ULL] = -t543 * 0.001;
  t267[553ULL] = t406;
  t267[554ULL] = U_idx_1;
  t267[555ULL] = X[0ULL] * 0.1;
  t267[556ULL] = X[99ULL];
  t267[557ULL] = X[0ULL] * 0.1;
  t267[558ULL] = X[147ULL];
  t267[559ULL] = X[0ULL] * 0.1;
  t267[560ULL] = X[42ULL];
  t267[561ULL] = X[0ULL] * 0.1;
  t267[562ULL] = X[97ULL];
  t267[563ULL] = X[0ULL] * 0.1;
  t267[564ULL] = X[26ULL];
  t267[565ULL] = X[27ULL];
  t267[566ULL] = X[28ULL];
  t267[567ULL] = X[29ULL];
  t267[568ULL] = X[156ULL];
  t267[569ULL] = Steam_Drum_V_frac_liq;
  t267[570ULL] = X[101ULL];
  t267[571ULL] = X[100ULL];
  t267[572ULL] = -X[47ULL];
  t267[573ULL] = -X[45ULL];
  t267[574ULL] = X[157ULL];
  t267[575ULL] = X[158ULL];
  t267[576ULL] = -X[56ULL];
  t267[577ULL] = -X[98ULL];
  t267[578ULL] = 0.0;
  t267[579ULL] = X[0ULL] * 0.1;
  t267[580ULL] = X[99ULL];
  t267[581ULL] = X[101ULL];
  t267[582ULL] = X[159ULL];
  t267[583ULL] = X[100ULL];
  t267[584ULL] = X[0ULL] * 0.1;
  t267[585ULL] = X[147ULL];
  t267[586ULL] = X[157ULL];
  t267[587ULL] = X[160ULL];
  t267[588ULL] = X[158ULL];
  t267[589ULL] = X[0ULL] * 0.1;
  t267[590ULL] = X[42ULL];
  t267[591ULL] = -X[45ULL];
  t267[592ULL] = X[161ULL];
  t267[593ULL] = -X[47ULL];
  t267[594ULL] = X[0ULL] * 0.1;
  t267[595ULL] = X[97ULL];
  t267[596ULL] = -X[98ULL];
  t267[597ULL] = X[162ULL];
  t267[598ULL] = -X[56ULL];
  t267[599ULL] = Steam_Drum_V_frac_liq;
  t267[600ULL] = X[89ULL];
  t267[601ULL] = X[90ULL] * 0.1;
  t267[602ULL] = X[43ULL] * 0.1;
  t267[603ULL] = X[44ULL];
  t267[604ULL] = X[102ULL];
  t267[605ULL] = X[103ULL] * 0.1;
  t267[606ULL] = X[0ULL] * 0.1;
  t267[607ULL] = X[147ULL];
  t267[608ULL] = X[89ULL];
  t267[609ULL] = X[90ULL] * 0.1;
  t267[610ULL] = X[102ULL];
  t267[611ULL] = X[103ULL] * 0.1;
  t267[612ULL] = X[30ULL];
  t267[613ULL] = X[31ULL] * 0.1;
  t267[614ULL] = X[32ULL];
  t267[615ULL] = X[135ULL];
  t267[616ULL] = -7.5;
  t267[617ULL] = X[134ULL];
  t267[618ULL] = -X[106ULL];
  t267[619ULL] = X[165ULL];
  t267[620ULL] = X[89ULL];
  t267[621ULL] = X[90ULL] * 0.1;
  t267[622ULL] = X[166ULL];
  t267[623ULL] = X[167ULL];
  t267[624ULL] = X[135ULL];
  t267[625ULL] = X[168ULL];
  t267[626ULL] = X[89ULL];
  t267[627ULL] = X[90ULL] * 0.1;
  t267[628ULL] = X[134ULL];
  t267[629ULL] = X[169ULL];
  t267[630ULL] = X[135ULL];
  t267[631ULL] = X[170ULL];
  t267[632ULL] = X[102ULL];
  t267[633ULL] = X[103ULL] * 0.1;
  t267[634ULL] = X[171ULL];
  t267[635ULL] = X[172ULL];
  t267[636ULL] = -7.5;
  t267[637ULL] = X[173ULL];
  t267[638ULL] = X[102ULL];
  t267[639ULL] = X[103ULL] * 0.1;
  t267[640ULL] = -X[106ULL];
  t267[641ULL] = X[174ULL];
  t267[642ULL] = -7.5;
  t267[643ULL] = X[175ULL];
  t267[644ULL] = X[43ULL] * 0.1;
  t267[645ULL] = X[44ULL];
  t267[646ULL] = X[0ULL] * 0.1;
  t267[647ULL] = X[147ULL];
  t267[648ULL] = X[37ULL] * 0.001;
  t267[649ULL] = X[33ULL] * 0.1;
  t267[650ULL] = X[34ULL];
  t267[651ULL] = X[35ULL];
  t267[652ULL] = X[38ULL];
  t267[653ULL] = X[164ULL] * 0.001;
  t267[654ULL] = X[36ULL] * 0.001;
  t267[655ULL] = X[40ULL] * 0.001;
  t267[656ULL] = X[39ULL] * 0.001;
  t267[657ULL] = X[163ULL];
  t267[658ULL] = X[141ULL];
  t267[659ULL] = -X[158ULL];
  t267[660ULL] = X[142ULL];
  t267[661ULL] = -X[157ULL];
  t267[662ULL] = X[176ULL];
  t267[663ULL] = X[43ULL] * 0.1;
  t267[664ULL] = X[44ULL];
  t267[665ULL] = X[142ULL];
  t267[666ULL] = X[177ULL];
  t267[667ULL] = X[141ULL];
  t267[668ULL] = X[0ULL] * 0.1;
  t267[669ULL] = X[147ULL];
  t267[670ULL] = -X[157ULL];
  t267[671ULL] = X[178ULL];
  t267[672ULL] = -X[158ULL];
  t267[673ULL] = X[41ULL];
  t267[674ULL] = X[37ULL] * 0.001;
  t267[675ULL] = X[36ULL] * 0.001;
  t267[676ULL] = X[40ULL] * 0.001;
  t267[677ULL] = X[39ULL] * 0.001;
  t267[678ULL] = t337;
  t267[679ULL] = t353;
  t267[680ULL] = zc_int35;
  t267[681ULL] = X[38ULL];
  t267[682ULL] = U_idx_3;
  t267[683ULL] = U_idx_3;
  t267[684ULL] = U_idx_0;
  t267[685ULL] = t366 * 0.001;
  t267[686ULL] = X[102ULL];
  t267[687ULL] = X[103ULL] * 0.1;
  t267[688ULL] = X[51ULL];
  t267[689ULL] = X[52ULL] * 0.1;
  t267[690ULL] = 0.0;
  t267[691ULL] = X[43ULL] * 0.1;
  t267[692ULL] = X[44ULL];
  t267[693ULL] = t377;
  t267[694ULL] = t379 * 0.001;
  t267[695ULL] = t380;
  t267[696ULL] = Preheating_Thermodynamic_Properties_Sensor_2P1_V;
  t267[697ULL] = X[0ULL] * 0.1;
  t267[698ULL] = X[147ULL];
  t267[699ULL] = X[0ULL] * t411 * 100.0 + X[147ULL];
  t267[700ULL] = Thermodynamic_Properties_Sensor_2P1_S * 0.001;
  t267[701ULL] = t425;
  t267[702ULL] = t411;
  t267[703ULL] = t425 - 273.15;
  t267[704ULL] = X[0ULL] * 0.1;
  t267[705ULL] = X[97ULL];
  t267[706ULL] = Thermodynamic_Properties_Sensor_2P2_H;
  t267[707ULL] = t428 * 0.001;
  t267[708ULL] = t429;
  t267[709ULL] = t426;
  t267[710ULL] = Thermodynamic_Properties_Sensor_2P2_H;
  t267[711ULL] = t428 * 0.001;
  t267[712ULL] = t429 - 273.15;
  t267[713ULL] = X[49ULL] * 0.1;
  t267[714ULL] = X[50ULL];
  t267[715ULL] = t430;
  t267[716ULL] = t431 * 0.001;
  t267[717ULL] = t432;
  t267[718ULL] = t364;
  t267[719ULL] = t430;
  t267[720ULL] = t431 * 0.001;
  t267[721ULL] = t432 - 273.15;
  t267[722ULL] = X[53ULL] * 0.1;
  t267[723ULL] = X[54ULL];
  t267[724ULL] = t433;
  t267[725ULL] = t434 * 0.001;
  t267[726ULL] = -t521;
  t267[727ULL] = t368;
  t267[728ULL] = t433;
  t267[729ULL] = -t521 - 273.15;
  t267[730ULL] = t380 - 273.15;
  t267[731ULL] = X[0ULL] * 0.1;
  t267[732ULL] = X[147ULL];
  t267[733ULL] = X[0ULL] * 0.1;
  t267[734ULL] = X[147ULL];
  t267[735ULL] = X[179ULL];
  t267[736ULL] = X[179ULL];
  t267[737ULL] = X[53ULL] * 0.1;
  t267[738ULL] = X[54ULL];
  t267[739ULL] = X[180ULL];
  t267[740ULL] = X[180ULL];
  t267[741ULL] = X[0ULL] * 0.1;
  t267[742ULL] = X[97ULL];
  t267[743ULL] = X[181ULL];
  t267[744ULL] = X[181ULL];
  t267[745ULL] = X[49ULL] * 0.1;
  t267[746ULL] = X[50ULL];
  t267[747ULL] = X[182ULL];
  t267[748ULL] = X[182ULL];
  for (b = 0; b < 749; b++) {
    out.mX[b] = t267[b];
  }

  (void)LC;
  (void)t545;
  return 0;
}
