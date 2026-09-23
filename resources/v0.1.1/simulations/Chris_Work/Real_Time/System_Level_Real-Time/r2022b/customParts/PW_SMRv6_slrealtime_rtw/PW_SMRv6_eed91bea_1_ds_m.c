/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv6/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_sys_struct.h"
#include "PW_SMRv6_eed91bea_1_ds_m.h"
#include "PW_SMRv6_eed91bea_1_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_externals.h"
#include "PW_SMRv6_eed91bea_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv6_eed91bea_1_ds_m(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t708, NeDsMethodOutput *t709)
{
  ETTS0 bb_efOut;
  ETTS0 bd_efOut;
  ETTS0 be_efOut;
  ETTS0 d_efOut;
  ETTS0 dc_efOut;
  ETTS0 dd_efOut;
  ETTS0 e_efOut;
  ETTS0 ec_efOut;
  ETTS0 efOut;
  ETTS0 g_efOut;
  ETTS0 i_efOut;
  ETTS0 jb_efOut;
  ETTS0 jd_efOut;
  ETTS0 kc_efOut;
  ETTS0 kd_efOut;
  ETTS0 l_efOut;
  ETTS0 lb_efOut;
  ETTS0 lc_efOut;
  ETTS0 le_efOut;
  ETTS0 m_efOut;
  ETTS0 md_efOut;
  ETTS0 nb_efOut;
  ETTS0 ne_efOut;
  ETTS0 od_efOut;
  ETTS0 pb_efOut;
  ETTS0 pe_efOut;
  ETTS0 q_efOut;
  ETTS0 rb_efOut;
  ETTS0 rc_efOut;
  ETTS0 rd_efOut;
  ETTS0 s_efOut;
  ETTS0 sd_efOut;
  ETTS0 t14;
  ETTS0 t17;
  ETTS0 t23;
  ETTS0 t24;
  ETTS0 t26;
  ETTS0 t29;
  ETTS0 t32;
  ETTS0 t35;
  ETTS0 t36;
  ETTS0 t39;
  ETTS0 t42;
  ETTS0 t8;
  ETTS0 tb_efOut;
  ETTS0 te_efOut;
  ETTS0 u_efOut;
  ETTS0 uc_efOut;
  ETTS0 vb_efOut;
  ETTS0 ve_efOut;
  ETTS0 w_efOut;
  ETTS0 wb_efOut;
  ETTS0 wc_efOut;
  ETTS0 wd_efOut;
  ETTS0 yc_efOut;
  PmRealVector out;
  real_T X[222];
  real_T ab_efOut[1];
  real_T ac_efOut[1];
  real_T ad_efOut[1];
  real_T ae_efOut[1];
  real_T b_efOut[1];
  real_T bc_efOut[1];
  real_T c_efOut[1];
  real_T cb_efOut[1];
  real_T cc_efOut[1];
  real_T cd_efOut[1];
  real_T ce_efOut[1];
  real_T db_efOut[1];
  real_T de_efOut[1];
  real_T eb_efOut[1];
  real_T ed_efOut[1];
  real_T ee_efOut[1];
  real_T f_efOut[1];
  real_T fb_efOut[1];
  real_T fc_efOut[1];
  real_T fd_efOut[1];
  real_T fe_efOut[1];
  real_T gb_efOut[1];
  real_T gc_efOut[1];
  real_T gd_efOut[1];
  real_T ge_efOut[1];
  real_T h_efOut[1];
  real_T hb_efOut[1];
  real_T hc_efOut[1];
  real_T hd_efOut[1];
  real_T he_efOut[1];
  real_T ib_efOut[1];
  real_T ic_efOut[1];
  real_T id_efOut[1];
  real_T ie_efOut[1];
  real_T j_efOut[1];
  real_T jc_efOut[1];
  real_T je_efOut[1];
  real_T k_efOut[1];
  real_T kb_efOut[1];
  real_T ke_efOut[1];
  real_T ld_efOut[1];
  real_T mb_efOut[1];
  real_T mc_efOut[1];
  real_T me_efOut[1];
  real_T n_efOut[1];
  real_T nc_efOut[1];
  real_T nd_efOut[1];
  real_T o_efOut[1];
  real_T ob_efOut[1];
  real_T oc_efOut[1];
  real_T oe_efOut[1];
  real_T p_efOut[1];
  real_T pc_efOut[1];
  real_T pd_efOut[1];
  real_T qb_efOut[1];
  real_T qc_efOut[1];
  real_T qd_efOut[1];
  real_T qe_efOut[1];
  real_T r_efOut[1];
  real_T re_efOut[1];
  real_T sb_efOut[1];
  real_T sc_efOut[1];
  real_T se_efOut[1];
  real_T t429[1];
  real_T t480[1];
  real_T t484[1];
  real_T t_efOut[1];
  real_T tc_efOut[1];
  real_T td_efOut[1];
  real_T ub_efOut[1];
  real_T ud_efOut[1];
  real_T ue_efOut[1];
  real_T v_efOut[1];
  real_T vc_efOut[1];
  real_T vd_efOut[1];
  real_T we_efOut[1];
  real_T x_efOut[1];
  real_T xb_efOut[1];
  real_T xc_efOut[1];
  real_T xd_efOut[1];
  real_T y_efOut[1];
  real_T yb_efOut[1];
  real_T yd_efOut[1];
  real_T Pipe_TL1_alpha_I;
  real_T Pipe_TL1_rho_I;
  real_T Steam_Generator_two_phase_fluid_DrhoDp_out_vap;
  real_T Steam_Generator_two_phase_fluid_Pr_liq;
  real_T Steam_Generator_two_phase_fluid_cp_vap_;
  real_T Steam_Generator_two_phase_fluid_mdot_hc_lag_pos;
  real_T intrm_sf_mf_18;
  real_T t428_idx_0;
  real_T t509;
  real_T t510;
  real_T t513;
  real_T t517;
  real_T t520;
  real_T t522;
  real_T t524;
  real_T t533;
  real_T t534;
  real_T t535;
  real_T t536;
  real_T t537;
  real_T t538;
  real_T t539;
  real_T t544;
  real_T t546;
  real_T t550;
  real_T t551;
  real_T t552;
  real_T t553;
  real_T t554;
  real_T t555;
  real_T t556;
  real_T t557;
  real_T t561;
  real_T t563;
  real_T t564;
  real_T t565;
  real_T t566;
  real_T t567;
  real_T t569;
  real_T t570;
  real_T t571;
  real_T t572;
  real_T t575;
  real_T t576;
  real_T t578;
  real_T t579;
  real_T t580;
  real_T t581;
  real_T t585;
  real_T t586;
  real_T t587;
  real_T t588;
  real_T t589;
  real_T t590;
  real_T t591;
  real_T t595;
  real_T t597;
  real_T t598;
  real_T t599;
  real_T t601;
  real_T t602;
  real_T t604;
  real_T t605;
  real_T t606;
  real_T t608;
  real_T t609;
  real_T t611;
  real_T t612;
  real_T t617;
  real_T t619;
  real_T t620;
  real_T t647;
  real_T t651;
  real_T t655;
  real_T t658;
  real_T t659;
  real_T t660;
  real_T t663;
  real_T t669;
  real_T t670;
  real_T t676;
  real_T t684;
  real_T t699;
  real_T t706;
  real_T t707;
  real_T zc_int23;
  real_T zc_int28;
  size_t t142[1];
  size_t t44[1];
  size_t t45[1];
  size_t t51[1];
  size_t t54[1];
  size_t t73[1];
  int32_T M[163];
  int32_T b;
  boolean_T intrm_sf_mf_463;
  boolean_T intrm_sf_mf_464;
  boolean_T intrm_sf_mf_465;
  boolean_T intrm_sf_mf_466;
  boolean_T intrm_sf_mf_477;
  boolean_T intrm_sf_mf_478;
  boolean_T intrm_sf_mf_480;
  boolean_T intrm_sf_mf_481;
  boolean_T intrm_sf_mf_482;
  boolean_T intrm_sf_mf_484;
  boolean_T intrm_sf_mf_485;
  boolean_T intrm_sf_mf_494;
  boolean_T intrm_sf_mf_495;
  boolean_T intrm_sf_mf_496;
  boolean_T intrm_sf_mf_497;
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
  for (b = 0; b < 163; b++) {
    M[b] = t708->mM.mX[b];
  }

  for (b = 0; b < 222; b++) {
    X[b] = t708->mX.mX[b];
  }

  out = t709->mM;
  t484[0ULL] = X[0ULL];
  t44[0] = 100ULL;
  t45[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t484[0ULL], &t44
    [0ULL], &t45[0ULL]);
  t42 = efOut;
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t44[0ULL], &t45[0ULL]);
  t480[0] = b_efOut[0];
  t707 = t480[0ULL];
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t44[0ULL], &t45[0ULL]);
  t429[0] = c_efOut[0];
  t534 = t429[0ULL];
  t484[0ULL] = X[3ULL];
  t51[0] = 28ULL;
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t484[0ULL],
    &t51[0ULL], &t45[0ULL]);
  t39 = d_efOut;
  t484[0ULL] = X[4ULL];
  t54[0] = 27ULL;
  tlu2_linear_linear_prelookup(&e_efOut.mField0[0ULL], &e_efOut.mField1[0ULL],
    &e_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t484[0ULL],
    &t54[0ULL], &t45[0ULL]);
  t17 = e_efOut;
  tlu2_2d_linear_linear_value(&f_efOut[0ULL], &t39.mField0[0ULL], &t39.mField2
    [0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField9, &t51[0ULL], &t54[0ULL], &t45[0ULL]);
  t428_idx_0 = f_efOut[0];
  t706 = t428_idx_0;
  t484[0ULL] = X[5ULL];
  tlu2_linear_linear_prelookup(&g_efOut.mField0[0ULL], &g_efOut.mField1[0ULL],
    &g_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t484[0ULL],
    &t51[0ULL], &t45[0ULL]);
  t36 = g_efOut;
  tlu2_2d_linear_linear_value(&h_efOut[0ULL], &t36.mField0[0ULL], &t36.mField2
    [0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField9, &t51[0ULL], &t54[0ULL], &t45[0ULL]);
  t428_idx_0 = h_efOut[0];
  t513 = t428_idx_0;
  t484[0ULL] = X[6ULL];
  tlu2_linear_linear_prelookup(&i_efOut.mField0[0ULL], &i_efOut.mField1[0ULL],
    &i_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t484[0ULL],
    &t44[0ULL], &t45[0ULL]);
  t24 = i_efOut;
  tlu2_1d_linear_linear_value(&j_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t44[0ULL], &t45[0ULL]);
  t428_idx_0 = j_efOut[0];
  intrm_sf_mf_18 = t428_idx_0;
  tlu2_1d_linear_linear_value(&k_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t44[0ULL], &t45[0ULL]);
  t428_idx_0 = k_efOut[0];
  t509 = t428_idx_0;
  if (X[7ULL] <= intrm_sf_mf_18) {
    t510 = X[7ULL] / (intrm_sf_mf_18 == 0.0 ? 1.0E-16 : intrm_sf_mf_18) - 1.0;
  } else if (X[7ULL] >= t428_idx_0) {
    t510 = (X[7ULL] - 4000.0) / (4000.0 - t428_idx_0 == 0.0 ? 1.0E-16 : 4000.0 -
      t428_idx_0) + 2.0;
  } else {
    t539 = t428_idx_0 - intrm_sf_mf_18;
    t510 = (X[7ULL] - intrm_sf_mf_18) / (t539 == 0.0 ? 1.0E-16 : t539);
  }

  t535 = t510 < 0.0 ? t510 : 0.0;
  if (X[8ULL] <= intrm_sf_mf_18) {
    t536 = X[8ULL] / (intrm_sf_mf_18 == 0.0 ? 1.0E-16 : intrm_sf_mf_18) - 1.0;
  } else if (X[8ULL] >= t428_idx_0) {
    t536 = (X[8ULL] - 4000.0) / (4000.0 - t428_idx_0 == 0.0 ? 1.0E-16 : 4000.0 -
      t428_idx_0) + 2.0;
  } else {
    t544 = t428_idx_0 - intrm_sf_mf_18;
    t536 = (X[8ULL] - intrm_sf_mf_18) / (t544 == 0.0 ? 1.0E-16 : t544);
  }

  t537 = t536 < 0.0 ? t536 : 0.0;
  t484[0ULL] = (t535 + t537) / 2.0;
  t73[0] = 50ULL;
  tlu2_linear_nearest_prelookup(&l_efOut.mField0[0ULL], &l_efOut.mField1[0ULL],
    &l_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t484[0ULL],
    &t73[0ULL], &t45[0ULL]);
  t32 = l_efOut;
  t484[0ULL] = X[6ULL];
  tlu2_linear_nearest_prelookup(&m_efOut.mField0[0ULL], &m_efOut.mField1[0ULL],
    &m_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t484[0ULL],
    &t44[0ULL], &t45[0ULL]);
  t35 = m_efOut;
  tlu2_2d_linear_nearest_value(&n_efOut[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField10, &t73[0ULL], &t44[0ULL], &t45[0ULL]);
  t428_idx_0 = n_efOut[0];
  t538 = t428_idx_0;
  tlu2_2d_linear_nearest_value(&o_efOut[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField8, &t73[0ULL], &t44[0ULL], &t45[0ULL]);
  t428_idx_0 = o_efOut[0];
  t539 = t428_idx_0;
  tlu2_2d_linear_nearest_value(&p_efOut[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField11, &t73[0ULL], &t44[0ULL], &t45[0ULL]);
  t428_idx_0 = p_efOut[0];
  t538 = t538 * t539 / (t428_idx_0 == 0.0 ? 1.0E-16 : t428_idx_0);
  t539 = X[9ULL] >= 0.0 ? X[9ULL] : 0.0;
  zc_int23 = X[10ULL] >= 0.0 ? X[10ULL] : 0.0;
  t517 = t538 * zc_int23;
  t676 = t517 + X[67ULL];
  Pipe_TL1_alpha_I = t539 + X[67ULL];
  zc_int28 = t676 / (Pipe_TL1_alpha_I == 0.0 ? 1.0E-16 : Pipe_TL1_alpha_I);
  if (zc_int28 <= 1.0) {
    t520 = 1.0 - zc_int28 * 0.999999;
  } else {
    t520 = 1.0E-6;
  }

  if (zc_int28 >= 1.0) {
    t544 = zc_int28 * 1.000001 - 1.0;
  } else {
    t544 = 1.0E-6;
  }

  if (t517 + X[67ULL] >= t539 + X[67ULL]) {
    t524 = t539 + X[67ULL];
    t550 = t517 + X[67ULL];
    t522 = (1.000001 / (t524 == 0.0 ? 1.0E-16 : t524) - 0.999999 / (t550 == 0.0 ?
             1.0E-16 : t550)) * X[11ULL];
  } else {
    t551 = t517 + X[67ULL];
    t552 = t539 + X[67ULL];
    t522 = (1.000001 / (t551 == 0.0 ? 1.0E-16 : t551) - 0.999999 / (t552 == 0.0 ?
             1.0E-16 : t552)) * X[11ULL];
  }

  t517 = t522 <= 15.0 ? t522 : 15.0;
  t484[0ULL] = t510;
  tlu2_linear_linear_prelookup(&q_efOut.mField0[0ULL], &q_efOut.mField1[0ULL],
    &q_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t484[0ULL],
    &t73[0ULL], &t45[0ULL]);
  t32 = q_efOut;
  tlu2_2d_linear_linear_value(&r_efOut[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t73[0ULL], &t44[0ULL], &t45[0ULL]);
  t428_idx_0 = r_efOut[0];
  t522 = t428_idx_0;
  t546 = X[6ULL] * t428_idx_0 * 100.0 + X[7ULL];
  t484[0] = 0.0;
  tlu2_linear_linear_prelookup(&s_efOut.mField0[0ULL], &s_efOut.mField1[0ULL],
    &s_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t484[0ULL],
    &t73[0ULL], &t45[0ULL]);
  t23 = s_efOut;
  tlu2_2d_linear_linear_value(&t_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t73[0ULL], &t44[0ULL], &t45[0ULL]);
  t428_idx_0 = t_efOut[0];
  t524 = t428_idx_0;
  t550 = X[6ULL] * t428_idx_0 * 100.0 + intrm_sf_mf_18;
  intrm_sf_mf_18 = (t550 - t546) / (t538 == 0.0 ? 1.0E-16 : t538);
  t554 = (1.0 - pmf_exp(-t517)) * X[66ULL];
  t555 = pmf_exp(-t517) * t544 + t520;
  t551 = t554 / (t555 == 0.0 ? 1.0E-16 : t555);
  intrm_sf_mf_67 = (t551 > intrm_sf_mf_18 * 1000.0);
  intrm_sf_mf_51 = (t546 < t550);
  intrm_sf_mf_53 = (t546 > t550);
  t480[0] = 1.0;
  tlu2_linear_linear_prelookup(&u_efOut.mField0[0ULL], &u_efOut.mField1[0ULL],
    &u_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t480[0ULL],
    &t73[0ULL], &t45[0ULL]);
  t26 = u_efOut;
  tlu2_2d_linear_linear_value(&v_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t73[0ULL], &t44[0ULL], &t45[0ULL]);
  t428_idx_0 = v_efOut[0];
  t552 = t428_idx_0;
  t553 = X[6ULL] * t428_idx_0 * 100.0 + t509;
  intrm_sf_mf_54 = (t546 > t553);
  intrm_sf_mf_57 = (X[66ULL] < 0.0);
  intrm_sf_mf_58 = (X[66ULL] > 0.0);
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (intrm_sf_mf_67) {
        t557 = X[66ULL] - t520 * intrm_sf_mf_18 * 1000.0;
        t533 = pmf_log((t544 * intrm_sf_mf_18 * 1000.0 + X[66ULL]) / (t557 ==
          0.0 ? 1.0E-16 : t557));
        t509 = t533 / (t517 == 0.0 ? 1.0E-16 : t517);
      } else {
        t509 = 1.0;
      }
    } else {
      t509 = 0.0;
    }
  } else {
    t509 = intrm_sf_mf_57 ? intrm_sf_mf_54 ? 0.0 : (real_T)!intrm_sf_mf_53 :
      (real_T)intrm_sf_mf_51;
  }

  t554 = t510 > 1.0 ? t510 : 1.0;
  t555 = t536 > 1.0 ? t536 : 1.0;
  t429[0ULL] = (t554 + t555) / 2.0;
  tlu2_linear_nearest_prelookup(&w_efOut.mField0[0ULL], &w_efOut.mField1[0ULL],
    &w_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t429[0ULL],
    &t73[0ULL], &t45[0ULL]);
  t32 = w_efOut;
  tlu2_2d_linear_nearest_value(&x_efOut[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField10, &t73[0ULL], &t44[0ULL], &t45[0ULL]);
  t428_idx_0 = x_efOut[0];
  t556 = t428_idx_0;
  tlu2_2d_linear_nearest_value(&y_efOut[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField8, &t73[0ULL], &t44[0ULL], &t45[0ULL]);
  t428_idx_0 = y_efOut[0];
  t557 = t428_idx_0;
  tlu2_2d_linear_nearest_value(&ab_efOut[0ULL], &t32.mField0[0ULL],
    &t32.mField2[0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t73[0ULL], &t44[0ULL], &t45[0ULL]);
  t428_idx_0 = ab_efOut[0];
  t556 = t556 * t557 / (t428_idx_0 == 0.0 ? 1.0E-16 : t428_idx_0);
  t557 = t556 * zc_int23;
  zc_int23 = (X[67ULL] + t557) / (Pipe_TL1_alpha_I == 0.0 ? 1.0E-16 :
    Pipe_TL1_alpha_I);
  if (zc_int23 <= 1.0) {
    t533 = 1.0 - zc_int23 * 0.999999;
  } else {
    t533 = 1.0E-6;
  }

  if (zc_int23 >= 1.0) {
    t699 = zc_int23 * 1.000001 - 1.0;
  } else {
    t699 = 1.0E-6;
  }

  if (X[67ULL] + t557 >= t539 + X[67ULL]) {
    t563 = t539 + X[67ULL];
    t564 = X[67ULL] + t557;
    t684 = (1.000001 / (t563 == 0.0 ? 1.0E-16 : t563) - 0.999999 / (t564 == 0.0 ?
             1.0E-16 : t564)) * X[12ULL];
  } else {
    t565 = X[67ULL] + t557;
    t566 = t539 + X[67ULL];
    t684 = (1.000001 / (t565 == 0.0 ? 1.0E-16 : t565) - 0.999999 / (t566 == 0.0 ?
             1.0E-16 : t566)) * X[12ULL];
  }

  t539 = t684 <= 15.0 ? t684 : 15.0;
  t557 = (t553 - t546) / (t556 == 0.0 ? 1.0E-16 : t556);
  intrm_sf_mf_50 = (t546 < t553);
  Pipe_TL1_rho_I = (1.0 - pmf_exp(-t539)) * X[66ULL];
  t569 = pmf_exp(-t539) * t699 + t533;
  t684 = Pipe_TL1_rho_I / (t569 == 0.0 ? 1.0E-16 : t569);
  intrm_sf_mf_68 = (t684 < t557 * 1000.0);
  intrm_sf_mf_55 = (t546 <= t553);
  if (intrm_sf_mf_58) {
    t561 = intrm_sf_mf_51 ? 0.0 : (real_T)!intrm_sf_mf_50;
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (intrm_sf_mf_68) {
        t571 = X[66ULL] - t533 * t557 * 1000.0;
        t572 = pmf_log((t699 * t557 * 1000.0 + X[66ULL]) / (t571 == 0.0 ?
          1.0E-16 : t571));
        t561 = t572 / (t539 == 0.0 ? 1.0E-16 : t539);
      } else {
        t561 = 1.0;
      }
    } else {
      t561 = 0.0;
    }
  } else {
    t561 = intrm_sf_mf_51 ? 0.0 : (real_T)!intrm_sf_mf_55;
  }

  t563 = (1.0 - t509) - t561;
  t509 = t676 / (Pipe_TL1_alpha_I == 0.0 ? 1.0E-16 : Pipe_TL1_alpha_I) / (t538 ==
    0.0 ? 1.0E-16 : t538);
  t561 = X[13ULL] / (Pipe_TL1_alpha_I == 0.0 ? 1.0E-16 : Pipe_TL1_alpha_I);
  t676 = t561 <= 15.0 ? t561 : 15.0;
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (intrm_sf_mf_67) {
        t561 = (zc_int28 - 1.0) * intrm_sf_mf_18 * 1000.0 + X[66ULL];
      } else {
        t561 = (zc_int28 * t551 + X[66ULL]) - intrm_sf_mf_18 * 1000.0;
      }
    } else if (intrm_sf_mf_50) {
      t561 = X[66ULL];
    } else {
      t561 = (zc_int23 * t684 + X[66ULL]) - t557 * 1000.0;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (intrm_sf_mf_68) {
        t561 = (zc_int23 - 1.0) * t557 * 1000.0 + X[66ULL];
      } else {
        t561 = (zc_int23 * t684 + X[66ULL]) - t557 * 1000.0;
      }
    } else if (intrm_sf_mf_53) {
      t561 = X[66ULL];
    } else {
      t561 = (zc_int28 * t551 + X[66ULL]) - intrm_sf_mf_18 * 1000.0;
    }
  } else if (intrm_sf_mf_51) {
    t561 = (zc_int28 * t551 + X[66ULL]) - intrm_sf_mf_18 * 1000.0;
  } else if (intrm_sf_mf_55) {
    t561 = X[66ULL];
  } else {
    t561 = (zc_int23 * t684 + X[66ULL]) - t557 * 1000.0;
  }

  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (intrm_sf_mf_67) {
        Pipe_TL1_alpha_I = t550;
      } else {
        Pipe_TL1_alpha_I = t538 * t551 * 0.001 + t546;
      }
    } else if (intrm_sf_mf_50) {
      Pipe_TL1_alpha_I = t546;
    } else {
      Pipe_TL1_alpha_I = t556 * t684 * 0.001 + t546;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (intrm_sf_mf_68) {
        Pipe_TL1_alpha_I = t553;
      } else {
        Pipe_TL1_alpha_I = t556 * t684 * 0.001 + t546;
      }
    } else if (intrm_sf_mf_53) {
      Pipe_TL1_alpha_I = t546;
    } else {
      Pipe_TL1_alpha_I = t538 * t551 * 0.001 + t546;
    }
  } else if (intrm_sf_mf_51) {
    Pipe_TL1_alpha_I = t538 * t551 * 0.001 + t546;
  } else if (intrm_sf_mf_55) {
    Pipe_TL1_alpha_I = t546;
  } else {
    Pipe_TL1_alpha_I = t556 * t684 * 0.001 + t546;
  }

  t578 = (pmf_exp(t676 * t563) - 1.0) * t561;
  t561 = t578 / (t509 == 0.0 ? 1.0E-16 : t509);
  intrm_sf_mf_67 = (t561 * 0.001 > t553 - Pipe_TL1_alpha_I);
  intrm_sf_mf_68 = (Pipe_TL1_alpha_I < t553);
  intrm_sf_mf_69 = (t561 * 0.001 < t550 - Pipe_TL1_alpha_I);
  intrm_sf_mf_70 = (Pipe_TL1_alpha_I > t550);
  intrm_sf_mf_494 = (t510 >= 1.0);
  intrm_sf_mf_478 = (t510 <= 0.0);
  intrm_sf_mf_480 = (t536 >= 1.0);
  intrm_sf_mf_481 = (t536 <= 0.0);
  t429[0ULL] = t536;
  tlu2_linear_linear_prelookup(&bb_efOut.mField0[0ULL], &bb_efOut.mField1[0ULL],
    &bb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t429[0ULL],
    &t73[0ULL], &t45[0ULL]);
  t32 = bb_efOut;
  tlu2_2d_linear_linear_value(&cb_efOut[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t73[0ULL], &t44[0ULL], &t45[0ULL]);
  t428_idx_0 = cb_efOut[0];
  t510 = t428_idx_0;
  tlu2_2d_linear_linear_value(&db_efOut[0ULL], &t39.mField0[0ULL], &t39.mField2
    [0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField15, &t51[0ULL], &t54[0ULL], &t45[0ULL]);
  t428_idx_0 = db_efOut[0];
  t536 = t428_idx_0;
  tlu2_2d_linear_linear_value(&eb_efOut[0ULL], &t39.mField0[0ULL], &t39.mField2
    [0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t51[0ULL], &t54[0ULL], &t45[0ULL]);
  t428_idx_0 = eb_efOut[0];
  t561 = t428_idx_0;
  t563 = -t428_idx_0 * t536;
  tlu2_2d_linear_linear_value(&fb_efOut[0ULL], &t36.mField0[0ULL], &t36.mField2
    [0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField15, &t51[0ULL], &t54[0ULL], &t45[0ULL]);
  t428_idx_0 = fb_efOut[0];
  Pipe_TL1_alpha_I = t428_idx_0;
  tlu2_2d_linear_linear_value(&gb_efOut[0ULL], &t36.mField0[0ULL], &t36.mField2
    [0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t51[0ULL], &t54[0ULL], &t45[0ULL]);
  t428_idx_0 = gb_efOut[0];
  t564 = t428_idx_0;
  t565 = -t428_idx_0 * Pipe_TL1_alpha_I;
  tlu2_2d_linear_linear_value(&hb_efOut[0ULL], &t39.mField0[0ULL], &t39.mField2
    [0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField17, &t51[0ULL], &t54[0ULL], &t45[0ULL]);
  t428_idx_0 = hb_efOut[0];
  t566 = t428_idx_0;
  t567 = t561 / (t428_idx_0 == 0.0 ? 1.0E-16 : t428_idx_0);
  tlu2_2d_linear_linear_value(&ib_efOut[0ULL], &t36.mField0[0ULL], &t36.mField2
    [0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField17, &t51[0ULL], &t54[0ULL], &t45[0ULL]);
  t428_idx_0 = ib_efOut[0];
  t569 = t564 / (t428_idx_0 == 0.0 ? 1.0E-16 : t428_idx_0);
  t570 = t706 - t536 * X[4ULL] / (t561 == 0.0 ? 1.0E-16 : t561) * 100000.0;
  t706 = t513 - Pipe_TL1_alpha_I * X[4ULL] / (t564 == 0.0 ? 1.0E-16 : t564) *
    100000.0;
  t513 = (X[4ULL] / (t566 == 0.0 ? 1.0E-16 : t566) - X[3ULL] * t536) / (t561 ==
    0.0 ? 1.0E-16 : t561);
  t536 = (X[4ULL] / (t428_idx_0 == 0.0 ? 1.0E-16 : t428_idx_0) - X[5ULL] *
          Pipe_TL1_alpha_I) / (t564 == 0.0 ? 1.0E-16 : t564);
  t561 = (t561 + t564) / 2.0 * 0.092765046668672663;
  t429[0ULL] = t535;
  t142[0] = 25ULL;
  tlu2_linear_linear_prelookup(&jb_efOut.mField0[0ULL], &jb_efOut.mField1[0ULL],
    &jb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t429[0ULL],
    &t142[0ULL], &t45[0ULL]);
  t35 = jb_efOut;
  tlu2_2d_linear_linear_value(&kb_efOut[0ULL], &t35.mField0[0ULL], &t35.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField19, &t142[0ULL], &t44[0ULL], &t45[0ULL]);
  t428_idx_0 = kb_efOut[0];
  t535 = t428_idx_0;
  t429[0ULL] = t554;
  tlu2_linear_linear_prelookup(&lb_efOut.mField0[0ULL], &lb_efOut.mField1[0ULL],
    &lb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t429[0ULL],
    &t142[0ULL], &t45[0ULL]);
  t17 = lb_efOut;
  tlu2_2d_linear_linear_value(&mb_efOut[0ULL], &t17.mField0[0ULL], &t17.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField21, &t142[0ULL], &t44[0ULL], &t45[0ULL]);
  t428_idx_0 = mb_efOut[0];
  t429[0ULL] = t537;
  tlu2_linear_linear_prelookup(&nb_efOut.mField0[0ULL], &nb_efOut.mField1[0ULL],
    &nb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t429[0ULL],
    &t142[0ULL], &t45[0ULL]);
  t35 = nb_efOut;
  tlu2_2d_linear_linear_value(&ob_efOut[0ULL], &t35.mField0[0ULL], &t35.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField19, &t142[0ULL], &t44[0ULL], &t45[0ULL]);
  t429[0] = ob_efOut[0];
  t537 = t429[0ULL];
  t535 = (t535 + t537) / 2.0;
  tlu2_linear_linear_prelookup(&pb_efOut.mField0[0ULL], &pb_efOut.mField1[0ULL],
    &pb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t484[0ULL],
    &t142[0ULL], &t45[0ULL]);
  t29 = pb_efOut;
  tlu2_2d_linear_linear_value(&qb_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField19, &t142[0ULL], &t44[0ULL], &t45[0ULL]);
  t429[0] = qb_efOut[0];
  t537 = t429[0ULL];
  tlu2_linear_linear_prelookup(&rb_efOut.mField0[0ULL], &rb_efOut.mField1[0ULL],
    &rb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t480[0ULL],
    &t142[0ULL], &t45[0ULL]);
  t39 = rb_efOut;
  tlu2_2d_linear_linear_value(&sb_efOut[0ULL], &t39.mField0[0ULL], &t39.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField21, &t142[0ULL], &t44[0ULL], &t45[0ULL]);
  t480[0] = sb_efOut[0];
  Pipe_TL1_alpha_I = t480[0ULL];
  t564 = intrm_sf_mf_478 ? t524 : intrm_sf_mf_494 ? t552 : t522;
  t522 = intrm_sf_mf_481 ? t524 : intrm_sf_mf_480 ? t552 : t510;
  t510 = t564 <= t522 ? t564 : t522;
  if (t522 / (t564 == 0.0 ? 1.0E-16 : t564) >= 1.000001) {
    t566 = t522 / (t564 == 0.0 ? 1.0E-16 : t564);
  } else if (t564 / (t522 == 0.0 ? 1.0E-16 : t522) >= 1.000001) {
    t566 = t564 / (t522 == 0.0 ? 1.0E-16 : t522);
  } else {
    t566 = 1.000001;
  }

  t587 = pmf_log(t566);
  t591 = 1.000001 / (t524 == 0.0 ? 1.0E-16 : t524) - 1.0 / (t552 == 0.0 ?
    1.0E-16 : t552);
  t510 = (1.000001 / (t524 == 0.0 ? 1.0E-16 : t524) - t587 / (t566 - 1.0 == 0.0 ?
           1.0E-16 : t566 - 1.0) / (t510 == 0.0 ? 1.0E-16 : t510)) / (t591 ==
    0.0 ? 1.0E-16 : t591);
  t522 = (1.0 - t510) * t537 + Pipe_TL1_alpha_I * t510;
  t484[0ULL] = t555;
  tlu2_linear_linear_prelookup(&tb_efOut.mField0[0ULL], &tb_efOut.mField1[0ULL],
    &tb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t484[0ULL],
    &t142[0ULL], &t45[0ULL]);
  t14 = tb_efOut;
  tlu2_2d_linear_linear_value(&ub_efOut[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField21, &t142[0ULL], &t44[0ULL], &t45[0ULL]);
  t480[0] = ub_efOut[0];
  t510 = t480[0ULL];
  t510 = (t428_idx_0 + t510) / 2.0;
  t484[0ULL] = X[16ULL];
  tlu2_linear_linear_prelookup(&vb_efOut.mField0[0ULL], &vb_efOut.mField1[0ULL],
    &vb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t484[0ULL],
    &t51[0ULL], &t45[0ULL]);
  t24 = vb_efOut;
  t484[0ULL] = X[15ULL];
  tlu2_linear_linear_prelookup(&wb_efOut.mField0[0ULL], &wb_efOut.mField1[0ULL],
    &wb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t484[0ULL],
    &t54[0ULL], &t45[0ULL]);
  t36 = wb_efOut;
  tlu2_2d_linear_linear_value(&xb_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], &t36.mField0[0ULL], &t36.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField15, &t51[0ULL], &t54[0ULL], &t45[0ULL]);
  t480[0] = xb_efOut[0];
  t537 = t480[0ULL];
  tlu2_2d_linear_linear_value(&yb_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], &t36.mField0[0ULL], &t36.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField17, &t51[0ULL], &t54[0ULL], &t45[0ULL]);
  t480[0] = yb_efOut[0];
  t524 = t480[0ULL];
  tlu2_2d_linear_linear_value(&ac_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], &t36.mField0[0ULL], &t36.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField9, &t51[0ULL], &t54[0ULL], &t45[0ULL]);
  t480[0] = ac_efOut[0];
  t552 = t480[0ULL];
  tlu2_2d_linear_linear_value(&bc_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], &t36.mField0[0ULL], &t36.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t51[0ULL], &t54[0ULL], &t45[0ULL]);
  t480[0] = bc_efOut[0];
  t554 = t480[0ULL];
  tlu2_2d_linear_linear_value(&cc_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], &t36.mField0[0ULL], &t36.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField18, &t51[0ULL], &t54[0ULL], &t45[0ULL]);
  t480[0] = cc_efOut[0];
  t555 = t480[0ULL];
  Pipe_TL1_alpha_I = X[15ULL] / (t554 == 0.0 ? 1.0E-16 : t554) * 100.0 + t555;
  t555 = (t552 - t537 * Pipe_TL1_alpha_I * 1000.0) * t554 * 0.029847534259719415;
  t552 = (Pipe_TL1_alpha_I * t554 / (t524 == 0.0 ? 1.0E-16 : t524) * 0.01 - X
          [16ULL] * t537) * 0.029847534259719415;
  t484[0ULL] = X[18ULL];
  tlu2_linear_linear_prelookup(&dc_efOut.mField0[0ULL], &dc_efOut.mField1[0ULL],
    &dc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t484[0ULL],
    &t51[0ULL], &t45[0ULL]);
  t35 = dc_efOut;
  t484[0ULL] = X[17ULL];
  tlu2_linear_linear_prelookup(&ec_efOut.mField0[0ULL], &ec_efOut.mField1[0ULL],
    &ec_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t484[0ULL],
    &t54[0ULL], &t45[0ULL]);
  t32 = ec_efOut;
  tlu2_2d_linear_linear_value(&fc_efOut[0ULL], &t35.mField0[0ULL], &t35.mField2
    [0ULL], &t32.mField0[0ULL], &t32.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField15, &t51[0ULL], &t54[0ULL], &t45[0ULL]);
  t480[0] = fc_efOut[0];
  Pipe_TL1_alpha_I = t480[0ULL];
  tlu2_2d_linear_linear_value(&gc_efOut[0ULL], &t35.mField0[0ULL], &t35.mField2
    [0ULL], &t32.mField0[0ULL], &t32.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField17, &t51[0ULL], &t54[0ULL], &t45[0ULL]);
  t480[0] = gc_efOut[0];
  t564 = t480[0ULL];
  tlu2_2d_linear_linear_value(&hc_efOut[0ULL], &t35.mField0[0ULL], &t35.mField2
    [0ULL], &t32.mField0[0ULL], &t32.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField9, &t51[0ULL], &t54[0ULL], &t45[0ULL]);
  t480[0] = hc_efOut[0];
  t566 = t480[0ULL];
  tlu2_2d_linear_linear_value(&ic_efOut[0ULL], &t35.mField0[0ULL], &t35.mField2
    [0ULL], &t32.mField0[0ULL], &t32.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t51[0ULL], &t54[0ULL], &t45[0ULL]);
  t480[0] = ic_efOut[0];
  Pipe_TL1_rho_I = t480[0ULL];
  tlu2_2d_linear_linear_value(&jc_efOut[0ULL], &t35.mField0[0ULL], &t35.mField2
    [0ULL], &t32.mField0[0ULL], &t32.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField18, &t51[0ULL], &t54[0ULL], &t45[0ULL]);
  t480[0] = jc_efOut[0];
  t571 = t480[0ULL];
  t572 = X[17ULL] / (Pipe_TL1_rho_I == 0.0 ? 1.0E-16 : Pipe_TL1_rho_I) * 100.0 +
    t571;
  t571 = (t566 - Pipe_TL1_alpha_I * t572 * 1000.0) * Pipe_TL1_rho_I *
    0.059695068519438829;
  t566 = (t572 * Pipe_TL1_rho_I / (t564 == 0.0 ? 1.0E-16 : t564) * 0.01 - X
          [18ULL] * Pipe_TL1_alpha_I) * 0.059695068519438829;
  t484[0ULL] = X[20ULL];
  tlu2_linear_linear_prelookup(&kc_efOut.mField0[0ULL], &kc_efOut.mField1[0ULL],
    &kc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t484[0ULL],
    &t51[0ULL], &t45[0ULL]);
  t32 = kc_efOut;
  t484[0ULL] = X[19ULL];
  tlu2_linear_linear_prelookup(&lc_efOut.mField0[0ULL], &lc_efOut.mField1[0ULL],
    &lc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t484[0ULL],
    &t54[0ULL], &t45[0ULL]);
  t24 = lc_efOut;
  tlu2_2d_linear_linear_value(&mc_efOut[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField15, &t51[0ULL], &t54[0ULL], &t45[0ULL]);
  t480[0] = mc_efOut[0];
  t572 = t480[0ULL];
  tlu2_2d_linear_linear_value(&nc_efOut[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField17, &t51[0ULL], &t54[0ULL], &t45[0ULL]);
  t480[0] = nc_efOut[0];
  t575 = t480[0ULL];
  tlu2_2d_linear_linear_value(&oc_efOut[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField9, &t51[0ULL], &t54[0ULL], &t45[0ULL]);
  t480[0] = oc_efOut[0];
  t576 = t480[0ULL];
  tlu2_2d_linear_linear_value(&pc_efOut[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t51[0ULL], &t54[0ULL], &t45[0ULL]);
  t480[0] = pc_efOut[0];
  t578 = t480[0ULL];
  tlu2_2d_linear_linear_value(&qc_efOut[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField18, &t51[0ULL], &t54[0ULL], &t45[0ULL]);
  t480[0] = qc_efOut[0];
  t579 = t480[0ULL];
  t580 = X[19ULL] / (t578 == 0.0 ? 1.0E-16 : t578) * 100.0 + t579;
  t579 = (t576 - t572 * t580 * 1000.0) * t578 * 0.059695068519438829;
  t576 = (t580 * t578 / (t575 == 0.0 ? 1.0E-16 : t575) * 0.01 - X[20ULL] * t572)
    * 0.059695068519438829;
  t484[0ULL] = X[21ULL];
  tlu2_linear_linear_prelookup(&rc_efOut.mField0[0ULL], &rc_efOut.mField1[0ULL],
    &rc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t484[0ULL],
    &t44[0ULL], &t45[0ULL]);
  t17 = rc_efOut;
  tlu2_1d_linear_linear_value(&sc_efOut[0ULL], &t17.mField0[0ULL], &t17.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t44[0ULL], &t45[0ULL]);
  t480[0] = sc_efOut[0];
  t580 = t480[0ULL];
  tlu2_1d_linear_linear_value(&tc_efOut[0ULL], &t17.mField0[0ULL], &t17.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t44[0ULL], &t45[0ULL]);
  t480[0] = tc_efOut[0];
  t581 = t480[0ULL];
  if (X[22ULL] <= t580) {
    t669 = X[22ULL] / (t580 == 0.0 ? 1.0E-16 : t580) - 1.0;
  } else if (X[22ULL] >= t581) {
    t669 = (X[22ULL] - 4000.0) / (4000.0 - t581 == 0.0 ? 1.0E-16 : 4000.0 - t581)
      + 2.0;
  } else {
    t659 = t581 - t580;
    t669 = (X[22ULL] - t580) / (t659 == 0.0 ? 1.0E-16 : t659);
  }

  t484[0ULL] = t669;
  tlu2_linear_linear_prelookup(&uc_efOut.mField0[0ULL], &uc_efOut.mField1[0ULL],
    &uc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t484[0ULL],
    &t142[0ULL], &t45[0ULL]);
  t14 = uc_efOut;
  tlu2_2d_linear_linear_value(&vc_efOut[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField19, &t142[0ULL], &t44[0ULL], &t45[0ULL]);
  t480[0] = vc_efOut[0];
  t580 = t480[0ULL];
  t484[0ULL] = t669;
  tlu2_linear_linear_prelookup(&wc_efOut.mField0[0ULL], &wc_efOut.mField1[0ULL],
    &wc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField27, &t484[0ULL],
    &t73[0ULL], &t45[0ULL]);
  t32 = wc_efOut;
  tlu2_2d_linear_linear_value(&xc_efOut[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField26, &t73[0ULL], &t44[0ULL], &t45[0ULL]);
  t480[0] = xc_efOut[0];
  t581 = t480[0ULL];
  t484[0ULL] = t669;
  tlu2_linear_linear_prelookup(&yc_efOut.mField0[0ULL], &yc_efOut.mField1[0ULL],
    &yc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t484[0ULL],
    &t142[0ULL], &t45[0ULL]);
  t32 = yc_efOut;
  tlu2_2d_linear_linear_value(&ad_efOut[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField21, &t142[0ULL], &t44[0ULL], &t45[0ULL]);
  t480[0] = ad_efOut[0];
  t670 = t480[0ULL];
  if (X[26ULL] < t707) {
    t585 = X[26ULL] / (t707 == 0.0 ? 1.0E-16 : t707) - 1.0;
  } else {
    t585 = 0.0;
  }

  t484[0ULL] = t585;
  tlu2_linear_linear_prelookup(&bd_efOut.mField0[0ULL], &bd_efOut.mField1[0ULL],
    &bd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t484[0ULL],
    &t142[0ULL], &t45[0ULL]);
  t36 = bd_efOut;
  tlu2_2d_linear_linear_value(&cd_efOut[0ULL], &t36.mField0[0ULL], &t36.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField19, &t142[0ULL], &t44[0ULL], &t45[0ULL]);
  t480[0] = cd_efOut[0];
  t707 = t480[0ULL];
  if (X[27ULL] > t534) {
    t585 = (X[27ULL] - 4000.0) / (4000.0 - t534 == 0.0 ? 1.0E-16 : 4000.0 - t534)
      + 2.0;
  } else {
    t585 = 1.0;
  }

  t484[0ULL] = t585;
  tlu2_linear_linear_prelookup(&dd_efOut.mField0[0ULL], &dd_efOut.mField1[0ULL],
    &dd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t484[0ULL],
    &t142[0ULL], &t45[0ULL]);
  t32 = dd_efOut;
  tlu2_2d_linear_linear_value(&ed_efOut[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField21, &t142[0ULL], &t44[0ULL], &t45[0ULL]);
  t480[0] = ed_efOut[0];
  t534 = t480[0ULL];
  tlu2_2d_linear_linear_value(&fd_efOut[0ULL], &t36.mField0[0ULL], &t36.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t142[0ULL], &t44[0ULL], &t45[0ULL]);
  t480[0] = fd_efOut[0];
  t585 = t480[0ULL];
  tlu2_2d_linear_linear_value(&gd_efOut[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField31, &t142[0ULL], &t44[0ULL], &t45[0ULL]);
  t480[0] = gd_efOut[0];
  t586 = t480[0ULL];
  t608 = X[28ULL] * t585 + X[29ULL] * t586;
  t585 = t707 * (X[28ULL] * t585 / (t608 == 0.0 ? 1.0E-16 : t608) * 1.5) + t534 *
    (X[29ULL] * t586 / (t608 == 0.0 ? 1.0E-16 : t608) * 1.5);
  tlu2_2d_linear_linear_value(&hd_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t73[0ULL], &t44[0ULL], &t45[0ULL]);
  t480[0] = hd_efOut[0];
  t707 = t480[0ULL];
  tlu2_2d_linear_linear_value(&id_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t73[0ULL], &t44[0ULL], &t45[0ULL]);
  t480[0] = id_efOut[0];
  t534 = t480[0ULL];
  t586 = 0.00015000000000000001 / (t707 == 0.0 ? 1.0E-16 : t707);
  t707 = 0.00015000000000000001 / (t534 == 0.0 ? 1.0E-16 : t534);
  t484[0ULL] = X[30ULL];
  tlu2_linear_linear_prelookup(&jd_efOut.mField0[0ULL], &jd_efOut.mField1[0ULL],
    &jd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t484[0ULL],
    &t51[0ULL], &t45[0ULL]);
  t8 = jd_efOut;
  t484[0ULL] = X[31ULL];
  tlu2_linear_linear_prelookup(&kd_efOut.mField0[0ULL], &kd_efOut.mField1[0ULL],
    &kd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t484[0ULL],
    &t54[0ULL], &t45[0ULL]);
  t17 = kd_efOut;
  tlu2_2d_linear_linear_value(&ld_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField9, &t51[0ULL], &t54[0ULL], &t45[0ULL]);
  t480[0] = ld_efOut[0];
  t534 = t480[0ULL];
  t484[0ULL] = X[32ULL];
  tlu2_linear_linear_prelookup(&md_efOut.mField0[0ULL], &md_efOut.mField1[0ULL],
    &md_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t484[0ULL],
    &t51[0ULL], &t45[0ULL]);
  t24 = md_efOut;
  tlu2_2d_linear_linear_value(&nd_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField9, &t51[0ULL], &t54[0ULL], &t45[0ULL]);
  t480[0] = nd_efOut[0];
  t587 = t480[0ULL];
  t484[0ULL] = X[33ULL];
  tlu2_linear_linear_prelookup(&od_efOut.mField0[0ULL], &od_efOut.mField1[0ULL],
    &od_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t484[0ULL],
    &t44[0ULL], &t45[0ULL]);
  t35 = od_efOut;
  tlu2_1d_linear_linear_value(&pd_efOut[0ULL], &t35.mField0[0ULL], &t35.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t44[0ULL], &t45[0ULL]);
  t480[0] = pd_efOut[0];
  t588 = t480[0ULL];
  tlu2_1d_linear_linear_value(&qd_efOut[0ULL], &t35.mField0[0ULL], &t35.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t44[0ULL], &t45[0ULL]);
  t480[0] = qd_efOut[0];
  t589 = t480[0ULL];
  if (X[34ULL] <= t588) {
    t590 = X[34ULL] / (t588 == 0.0 ? 1.0E-16 : t588) - 1.0;
  } else if (X[34ULL] >= t589) {
    t590 = (X[34ULL] - 4000.0) / (4000.0 - t589 == 0.0 ? 1.0E-16 : 4000.0 - t589)
      + 2.0;
  } else {
    t428_idx_0 = t589 - t588;
    t590 = (X[34ULL] - t588) / (t428_idx_0 == 0.0 ? 1.0E-16 : t428_idx_0);
  }

  t591 = t590 < 0.0 ? t590 : 0.0;
  if (X[35ULL] <= t588) {
    Steam_Generator_two_phase_fluid_DrhoDp_out_vap = X[35ULL] / (t588 == 0.0 ?
      1.0E-16 : t588) - 1.0;
  } else if (X[35ULL] >= t589) {
    Steam_Generator_two_phase_fluid_DrhoDp_out_vap = (X[35ULL] - 4000.0) /
      (4000.0 - t589 == 0.0 ? 1.0E-16 : 4000.0 - t589) + 2.0;
  } else {
    t620 = t589 - t588;
    Steam_Generator_two_phase_fluid_DrhoDp_out_vap = (X[35ULL] - t588) / (t620 ==
      0.0 ? 1.0E-16 : t620);
  }

  t663 = Steam_Generator_two_phase_fluid_DrhoDp_out_vap < 0.0 ?
    Steam_Generator_two_phase_fluid_DrhoDp_out_vap : 0.0;
  t484[0ULL] = (t591 + t663) / 2.0;
  tlu2_linear_nearest_prelookup(&rd_efOut.mField0[0ULL], &rd_efOut.mField1[0ULL],
    &rd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t484[0ULL],
    &t73[0ULL], &t45[0ULL]);
  t14 = rd_efOut;
  t484[0ULL] = X[33ULL];
  tlu2_linear_nearest_prelookup(&sd_efOut.mField0[0ULL], &sd_efOut.mField1[0ULL],
    &sd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t484[0ULL],
    &t44[0ULL], &t45[0ULL]);
  t42 = sd_efOut;
  tlu2_2d_linear_nearest_value(&td_efOut[0ULL], &t14.mField0[0ULL],
    &t14.mField2[0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t73[0ULL], &t44[0ULL], &t45[0ULL]);
  t480[0] = td_efOut[0];
  Steam_Generator_two_phase_fluid_Pr_liq = t480[0ULL];
  tlu2_2d_linear_nearest_value(&ud_efOut[0ULL], &t14.mField0[0ULL],
    &t14.mField2[0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t73[0ULL], &t44[0ULL], &t45[0ULL]);
  t480[0] = ud_efOut[0];
  t595 = t480[0ULL];
  tlu2_2d_linear_nearest_value(&vd_efOut[0ULL], &t14.mField0[0ULL],
    &t14.mField2[0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t73[0ULL], &t44[0ULL], &t45[0ULL]);
  t480[0] = vd_efOut[0];
  Steam_Generator_two_phase_fluid_mdot_hc_lag_pos = t480[0ULL];
  Steam_Generator_two_phase_fluid_Pr_liq =
    Steam_Generator_two_phase_fluid_Pr_liq * t595 /
    (Steam_Generator_two_phase_fluid_mdot_hc_lag_pos == 0.0 ? 1.0E-16 :
     Steam_Generator_two_phase_fluid_mdot_hc_lag_pos);
  t595 = X[37ULL] >= 0.0 ? X[37ULL] : 0.0;
  Steam_Generator_two_phase_fluid_mdot_hc_lag_pos = X[38ULL] >= 0.0 ? X[38ULL] :
    0.0;
  t651 = t595 + X[198ULL];
  t428_idx_0 = (t595 + X[198ULL]) * (1.0 - pmf_exp(-X[36ULL] / (t651 == 0.0 ?
    1.0E-16 : t651)));
  t647 = Steam_Generator_two_phase_fluid_Pr_liq *
    Steam_Generator_two_phase_fluid_mdot_hc_lag_pos + X[198ULL];
  t597 = t428_idx_0 / (t647 == 0.0 ? 1.0E-16 : t647);
  t598 = t597 <= 15.0 ? t597 : 15.0;
  t484[0ULL] = t590;
  tlu2_linear_linear_prelookup(&wd_efOut.mField0[0ULL], &wd_efOut.mField1[0ULL],
    &wd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t484[0ULL],
    &t73[0ULL], &t45[0ULL]);
  t36 = wd_efOut;
  tlu2_2d_linear_linear_value(&xd_efOut[0ULL], &t36.mField0[0ULL], &t36.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t73[0ULL], &t44[0ULL], &t45[0ULL]);
  t480[0] = xd_efOut[0];
  t597 = t480[0ULL];
  t599 = X[33ULL] * t597 * 100.0 + X[34ULL];
  tlu2_2d_linear_linear_value(&yd_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t73[0ULL], &t44[0ULL], &t45[0ULL]);
  t480[0] = yd_efOut[0];
  t660 = t480[0ULL];
  t601 = X[33ULL] * t660 * 100.0 + t588;
  t588 = (t601 - t599) / (Steam_Generator_two_phase_fluid_Pr_liq == 0.0 ?
    1.0E-16 : Steam_Generator_two_phase_fluid_Pr_liq);
  t602 = (1.0 - pmf_exp(-t598)) * X[197ULL];
  intrm_sf_mf_494 = (t602 > t588 * 1000.0);
  intrm_sf_mf_478 = (t599 < t601);
  intrm_sf_mf_480 = (t599 > t601);
  tlu2_2d_linear_linear_value(&ae_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t73[0ULL], &t44[0ULL], &t45[0ULL]);
  t480[0] = ae_efOut[0];
  t659 = t480[0ULL];
  t604 = X[33ULL] * t659 * 100.0 + t589;
  intrm_sf_mf_481 = (t599 > t604);
  intrm_sf_mf_484 = (X[197ULL] < 0.0);
  intrm_sf_mf_485 = (X[197ULL] > 0.0);
  if (intrm_sf_mf_485) {
    if (intrm_sf_mf_478) {
      if (intrm_sf_mf_494) {
        t428_idx_0 = -pmf_log((X[197ULL] - t588 * 1000.0) / (X[197ULL] == 0.0 ?
          1.0E-16 : X[197ULL]));
        t589 = t428_idx_0 / (t598 == 0.0 ? 1.0E-16 : t598);
      } else {
        t589 = 1.0;
      }
    } else {
      t589 = 0.0;
    }
  } else {
    t589 = intrm_sf_mf_484 ? intrm_sf_mf_481 ? 0.0 : (real_T)!intrm_sf_mf_480 :
      (real_T)intrm_sf_mf_478;
  }

  t605 = t590 > 1.0 ? t590 : 1.0;
  t606 = Steam_Generator_two_phase_fluid_DrhoDp_out_vap > 1.0 ?
    Steam_Generator_two_phase_fluid_DrhoDp_out_vap : 1.0;
  t484[0ULL] = (t605 + t606) / 2.0;
  tlu2_linear_nearest_prelookup(&be_efOut.mField0[0ULL], &be_efOut.mField1[0ULL],
    &be_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t484[0ULL],
    &t73[0ULL], &t45[0ULL]);
  t32 = be_efOut;
  tlu2_2d_linear_nearest_value(&ce_efOut[0ULL], &t32.mField0[0ULL],
    &t32.mField2[0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t73[0ULL], &t44[0ULL], &t45[0ULL]);
  t480[0] = ce_efOut[0];
  Steam_Generator_two_phase_fluid_cp_vap_ = t480[0ULL];
  tlu2_2d_linear_nearest_value(&de_efOut[0ULL], &t32.mField0[0ULL],
    &t32.mField2[0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t73[0ULL], &t44[0ULL], &t45[0ULL]);
  t480[0] = de_efOut[0];
  t608 = t480[0ULL];
  tlu2_2d_linear_nearest_value(&ee_efOut[0ULL], &t32.mField0[0ULL],
    &t32.mField2[0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t73[0ULL], &t44[0ULL], &t45[0ULL]);
  t480[0] = ee_efOut[0];
  t609 = t480[0ULL];
  Steam_Generator_two_phase_fluid_cp_vap_ =
    Steam_Generator_two_phase_fluid_cp_vap_ * t608 / (t609 == 0.0 ? 1.0E-16 :
    t609);
  t620 = (t595 + X[198ULL]) * (1.0 - pmf_exp(-X[39ULL] / (t651 == 0.0 ? 1.0E-16 :
    t651)));
  t428_idx_0 = X[198ULL] + Steam_Generator_two_phase_fluid_cp_vap_ *
    Steam_Generator_two_phase_fluid_mdot_hc_lag_pos;
  Steam_Generator_two_phase_fluid_mdot_hc_lag_pos = t620 / (t428_idx_0 == 0.0 ?
    1.0E-16 : t428_idx_0);
  t608 = Steam_Generator_two_phase_fluid_mdot_hc_lag_pos <= 15.0 ?
    Steam_Generator_two_phase_fluid_mdot_hc_lag_pos : 15.0;
  Steam_Generator_two_phase_fluid_mdot_hc_lag_pos = (t604 - t599) /
    (Steam_Generator_two_phase_fluid_cp_vap_ == 0.0 ? 1.0E-16 :
     Steam_Generator_two_phase_fluid_cp_vap_);
  intrm_sf_mf_477 = (t599 < t604);
  t609 = (1.0 - pmf_exp(-t608)) * X[197ULL];
  intrm_sf_mf_495 = (t609 < Steam_Generator_two_phase_fluid_mdot_hc_lag_pos *
                     1000.0);
  intrm_sf_mf_482 = (t599 <= t604);
  if (intrm_sf_mf_485) {
    t611 = intrm_sf_mf_478 ? 0.0 : (real_T)!intrm_sf_mf_477;
  } else if (intrm_sf_mf_484) {
    if (intrm_sf_mf_481) {
      if (intrm_sf_mf_495) {
        t428_idx_0 = -pmf_log((X[197ULL] -
          Steam_Generator_two_phase_fluid_mdot_hc_lag_pos * 1000.0) / (X[197ULL]
          == 0.0 ? 1.0E-16 : X[197ULL]));
        t611 = t428_idx_0 / (t608 == 0.0 ? 1.0E-16 : t608);
      } else {
        t611 = 1.0;
      }
    } else {
      t611 = 0.0;
    }
  } else {
    t611 = intrm_sf_mf_478 ? 0.0 : (real_T)!intrm_sf_mf_482;
  }

  t612 = (1.0 - t589) - t611;
  t620 = (t595 + X[198ULL]) * (1.0 - pmf_exp(-X[40ULL] / (t651 == 0.0 ? 1.0E-16 :
    t651)));
  t651 = t647 / (Steam_Generator_two_phase_fluid_Pr_liq == 0.0 ? 1.0E-16 :
                 Steam_Generator_two_phase_fluid_Pr_liq);
  t589 = t620 / (t651 == 0.0 ? 1.0E-16 : t651);
  if (intrm_sf_mf_485) {
    if (intrm_sf_mf_478) {
      t595 = X[197ULL] - t588 * 1000.0;
    } else if (intrm_sf_mf_477) {
      t595 = X[197ULL];
    } else {
      t595 = X[197ULL] - Steam_Generator_two_phase_fluid_mdot_hc_lag_pos *
        1000.0;
    }
  } else if (intrm_sf_mf_484) {
    if (intrm_sf_mf_481) {
      t595 = X[197ULL] - Steam_Generator_two_phase_fluid_mdot_hc_lag_pos *
        1000.0;
    } else if (intrm_sf_mf_480) {
      t595 = X[197ULL];
    } else {
      t595 = X[197ULL] - t588 * 1000.0;
    }
  } else if (intrm_sf_mf_478) {
    t595 = t588 * 1000.0 + X[197ULL];
  } else if (intrm_sf_mf_482) {
    t595 = X[197ULL];
  } else {
    t595 = Steam_Generator_two_phase_fluid_mdot_hc_lag_pos * 1000.0 + X[197ULL];
  }

  if (intrm_sf_mf_485) {
    if (intrm_sf_mf_478) {
      if (intrm_sf_mf_494) {
        t611 = t601;
      } else {
        t611 = Steam_Generator_two_phase_fluid_Pr_liq * t602 * 0.001 + t599;
      }
    } else if (intrm_sf_mf_477) {
      t611 = t599;
    } else {
      t611 = Steam_Generator_two_phase_fluid_cp_vap_ * t609 * 0.001 + t599;
    }
  } else if (intrm_sf_mf_484) {
    if (intrm_sf_mf_481) {
      if (intrm_sf_mf_495) {
        t611 = t604;
      } else {
        t611 = Steam_Generator_two_phase_fluid_cp_vap_ * t609 * 0.001 + t599;
      }
    } else if (intrm_sf_mf_480) {
      t611 = t599;
    } else {
      t611 = Steam_Generator_two_phase_fluid_Pr_liq * t602 * 0.001 + t599;
    }
  } else if (intrm_sf_mf_478) {
    t611 = Steam_Generator_two_phase_fluid_Pr_liq * t602 * 0.001 + t599;
  } else if (intrm_sf_mf_482) {
    t611 = t599;
  } else {
    t611 = Steam_Generator_two_phase_fluid_cp_vap_ * t609 * 0.001 + t599;
  }

  t428_idx_0 = t589 * t595 * t612;
  intrm_sf_mf_494 = (t428_idx_0 * 0.001 > t604 - t611);
  intrm_sf_mf_495 = (t611 < t604);
  intrm_sf_mf_496 = (t428_idx_0 * 0.001 < t601 - t611);
  intrm_sf_mf_497 = (t611 > t601);
  intrm_sf_mf_463 = (t590 >= 1.0);
  intrm_sf_mf_464 = (t590 <= 0.0);
  intrm_sf_mf_465 = (Steam_Generator_two_phase_fluid_DrhoDp_out_vap >= 1.0);
  intrm_sf_mf_466 = (Steam_Generator_two_phase_fluid_DrhoDp_out_vap <= 0.0);
  tlu2_2d_linear_linear_value(&fe_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField15, &t51[0ULL], &t54[0ULL], &t45[0ULL]);
  t480[0] = fe_efOut[0];
  t590 = t480[0ULL];
  tlu2_2d_linear_linear_value(&ge_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t51[0ULL], &t54[0ULL], &t45[0ULL]);
  t480[0] = ge_efOut[0];
  t611 = t480[0ULL];
  t612 = -t611 * t590;
  tlu2_2d_linear_linear_value(&he_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField15, &t51[0ULL], &t54[0ULL], &t45[0ULL]);
  t480[0] = he_efOut[0];
  t651 = t480[0ULL];
  tlu2_2d_linear_linear_value(&ie_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t51[0ULL], &t54[0ULL], &t45[0ULL]);
  t480[0] = ie_efOut[0];
  t647 = t480[0ULL];
  t428_idx_0 = -t647 * t651;
  tlu2_2d_linear_linear_value(&je_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField17, &t51[0ULL], &t54[0ULL], &t45[0ULL]);
  t480[0] = je_efOut[0];
  t658 = t480[0ULL];
  t617 = t611 / (t658 == 0.0 ? 1.0E-16 : t658);
  tlu2_2d_linear_linear_value(&ke_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField17, &t51[0ULL], &t54[0ULL], &t45[0ULL]);
  t480[0] = ke_efOut[0];
  t655 = t480[0ULL];
  t619 = t647 / (t655 == 0.0 ? 1.0E-16 : t655);
  t620 = t534 - t590 * X[31ULL] / (t611 == 0.0 ? 1.0E-16 : t611) * 100000.0;
  t534 = t587 - t651 * X[31ULL] / (t647 == 0.0 ? 1.0E-16 : t647) * 100000.0;
  t587 = (X[31ULL] / (t658 == 0.0 ? 1.0E-16 : t658) - X[30ULL] * t590) / (t611 ==
    0.0 ? 1.0E-16 : t611);
  t590 = (X[31ULL] / (t655 == 0.0 ? 1.0E-16 : t655) - X[32ULL] * t651) / (t647 ==
    0.0 ? 1.0E-16 : t647);
  t611 = (t611 + t647) / 2.0 * 0.36562301792487523;
  t484[0ULL] = t591;
  tlu2_linear_linear_prelookup(&le_efOut.mField0[0ULL], &le_efOut.mField1[0ULL],
    &le_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t484[0ULL],
    &t142[0ULL], &t45[0ULL]);
  t32 = le_efOut;
  tlu2_2d_linear_linear_value(&me_efOut[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField19, &t142[0ULL], &t44[0ULL], &t45[0ULL]);
  t480[0] = me_efOut[0];
  t591 = t480[0ULL];
  t484[0ULL] = t605;
  tlu2_linear_linear_prelookup(&ne_efOut.mField0[0ULL], &ne_efOut.mField1[0ULL],
    &ne_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t484[0ULL],
    &t142[0ULL], &t45[0ULL]);
  t24 = ne_efOut;
  tlu2_2d_linear_linear_value(&oe_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField21, &t142[0ULL], &t44[0ULL], &t45[0ULL]);
  t480[0] = oe_efOut[0];
  t605 = t480[0ULL];
  t484[0ULL] = t663;
  tlu2_linear_linear_prelookup(&pe_efOut.mField0[0ULL], &pe_efOut.mField1[0ULL],
    &pe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t484[0ULL],
    &t142[0ULL], &t45[0ULL]);
  t32 = pe_efOut;
  tlu2_2d_linear_linear_value(&qe_efOut[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField19, &t142[0ULL], &t44[0ULL], &t45[0ULL]);
  t480[0] = qe_efOut[0];
  t663 = t480[0ULL];
  t591 = (t591 + t663) / 2.0;
  tlu2_2d_linear_linear_value(&re_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField19, &t142[0ULL], &t44[0ULL], &t45[0ULL]);
  t480[0] = re_efOut[0];
  t663 = t480[0ULL];
  tlu2_2d_linear_linear_value(&se_efOut[0ULL], &t39.mField0[0ULL], &t39.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField21, &t142[0ULL], &t44[0ULL], &t45[0ULL]);
  t480[0] = se_efOut[0];
  t651 = t480[0ULL];
  t647 = intrm_sf_mf_464 ? t660 : intrm_sf_mf_463 ? t659 : t597;
  t484[0ULL] = Steam_Generator_two_phase_fluid_DrhoDp_out_vap;
  tlu2_linear_linear_prelookup(&te_efOut.mField0[0ULL], &te_efOut.mField1[0ULL],
    &te_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t484[0ULL],
    &t73[0ULL], &t45[0ULL]);
  t24 = te_efOut;
  tlu2_2d_linear_linear_value(&ue_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t73[0ULL], &t44[0ULL], &t45[0ULL]);
  t480[0] = ue_efOut[0];
  Steam_Generator_two_phase_fluid_DrhoDp_out_vap = t480[0ULL];
  t597 = intrm_sf_mf_466 ? t660 : intrm_sf_mf_465 ? t659 :
    Steam_Generator_two_phase_fluid_DrhoDp_out_vap;
  Steam_Generator_two_phase_fluid_DrhoDp_out_vap = t647 <= t597 ? t647 : t597;
  if (t597 / (t647 == 0.0 ? 1.0E-16 : t647) >= 1.000001) {
    t658 = t597 / (t647 == 0.0 ? 1.0E-16 : t647);
  } else if (t647 / (t597 == 0.0 ? 1.0E-16 : t597) >= 1.000001) {
    t658 = t647 / (t597 == 0.0 ? 1.0E-16 : t597);
  } else {
    t658 = 1.000001;
  }

  t647 = pmf_log(t658);
  t655 = t658 - 1.0;
  t658 = 1.000001 / (t660 == 0.0 ? 1.0E-16 : t660) - 1.0 / (t659 == 0.0 ?
    1.0E-16 : t659);
  Steam_Generator_two_phase_fluid_DrhoDp_out_vap = (1.000001 / (t660 == 0.0 ?
    1.0E-16 : t660) - t647 / (t655 == 0.0 ? 1.0E-16 : t655) /
    (Steam_Generator_two_phase_fluid_DrhoDp_out_vap == 0.0 ? 1.0E-16 :
     Steam_Generator_two_phase_fluid_DrhoDp_out_vap)) / (t658 == 0.0 ? 1.0E-16 :
    t658);
  t597 = (1.0 - Steam_Generator_two_phase_fluid_DrhoDp_out_vap) * t663 + t651 *
    Steam_Generator_two_phase_fluid_DrhoDp_out_vap;
  t484[0ULL] = t606;
  tlu2_linear_linear_prelookup(&ve_efOut.mField0[0ULL], &ve_efOut.mField1[0ULL],
    &ve_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t484[0ULL],
    &t142[0ULL], &t45[0ULL]);
  t32 = ve_efOut;
  tlu2_2d_linear_linear_value(&we_efOut[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField21, &t142[0ULL], &t44[0ULL], &t45[0ULL]);
  t484[0] = we_efOut[0];
  Steam_Generator_two_phase_fluid_DrhoDp_out_vap = t484[0ULL];
  t663 = t669 / 0.1;
  t660 = t663 * t663 * 3.0 - t663 * t663 * t663 * 2.0;
  if (t669 <= 0.0) {
    t663 = t580;
  } else if (t669 >= 0.1) {
    t663 = t581;
  } else {
    t663 = (1.0 - t660) * t580 + t581 * t660;
  }

  t580 = (t669 - 0.9) / 0.099999999999999978;
  t581 = t580 * t580 * 3.0 - t580 * t580 * t580 * 2.0;
  if (t669 <= 0.9) {
    t580 = t663;
  } else if (t669 >= 1.0) {
    t580 = t670;
  } else {
    t580 = (1.0 - t581) * t663 + t670 * t581;
  }

  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (M[112ULL] != 0) {
        t670 = X[66ULL] - t520 * intrm_sf_mf_18 * 1000.0;
        t663 = pmf_log((t544 * intrm_sf_mf_18 * 1000.0 + X[66ULL]) / (t670 ==
          0.0 ? 1.0E-16 : t670));
        t581 = t663 / (t517 == 0.0 ? 1.0E-16 : t517);
      } else {
        t581 = 1.0;
      }
    } else {
      t581 = 0.0;
    }
  } else {
    t581 = intrm_sf_mf_57 ? intrm_sf_mf_54 ? 0.0 : (real_T)!intrm_sf_mf_53 :
      (real_T)intrm_sf_mf_51;
  }

  if (intrm_sf_mf_58) {
    t517 = intrm_sf_mf_51 ? 0.0 : (real_T)!intrm_sf_mf_50;
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (M[117ULL] != 0) {
        t670 = X[66ULL] - t533 * t557 * 1000.0;
        t663 = pmf_log((t699 * t557 * 1000.0 + X[66ULL]) / (t670 == 0.0 ?
          1.0E-16 : t670));
        t517 = t663 / (t539 == 0.0 ? 1.0E-16 : t539);
      } else {
        t517 = 1.0;
      }
    } else {
      t517 = 0.0;
    }
  } else {
    t517 = intrm_sf_mf_51 ? 0.0 : (real_T)!intrm_sf_mf_55;
  }

  t539 = (1.0 - t581) - t517;
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (M[112ULL] != 0) {
        t520 = (zc_int28 - 1.0) * intrm_sf_mf_18 * 1000.0 + X[66ULL];
      } else {
        t520 = (zc_int28 * t551 + X[66ULL]) - intrm_sf_mf_18 * 1000.0;
      }
    } else if (intrm_sf_mf_50) {
      t520 = X[66ULL];
    } else {
      t520 = (zc_int23 * t684 + X[66ULL]) - t557 * 1000.0;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (M[117ULL] != 0) {
        t520 = (zc_int23 - 1.0) * t557 * 1000.0 + X[66ULL];
      } else {
        t520 = (zc_int23 * t684 + X[66ULL]) - t557 * 1000.0;
      }
    } else if (intrm_sf_mf_53) {
      t520 = X[66ULL];
    } else {
      t520 = (zc_int28 * t551 + X[66ULL]) - intrm_sf_mf_18 * 1000.0;
    }
  } else if (intrm_sf_mf_51) {
    t520 = (zc_int28 * t551 + X[66ULL]) - intrm_sf_mf_18 * 1000.0;
  } else if (intrm_sf_mf_55) {
    t520 = X[66ULL];
  } else {
    t520 = (zc_int23 * t684 + X[66ULL]) - t557 * 1000.0;
  }

  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (M[112ULL] != 0) {
        intrm_sf_mf_18 = t550;
      } else {
        intrm_sf_mf_18 = t538 * t551 * 0.001 + t546;
      }
    } else if (intrm_sf_mf_50) {
      intrm_sf_mf_18 = t546;
    } else {
      intrm_sf_mf_18 = t556 * t684 * 0.001 + t546;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (M[117ULL] != 0) {
        intrm_sf_mf_18 = t553;
      } else {
        intrm_sf_mf_18 = t556 * t684 * 0.001 + t546;
      }
    } else if (intrm_sf_mf_53) {
      intrm_sf_mf_18 = t546;
    } else {
      intrm_sf_mf_18 = t538 * t551 * 0.001 + t546;
    }
  } else if (intrm_sf_mf_51) {
    intrm_sf_mf_18 = t538 * t551 * 0.001 + t546;
  } else if (intrm_sf_mf_55) {
    intrm_sf_mf_18 = t546;
  } else {
    intrm_sf_mf_18 = t556 * t684 * 0.001 + t546;
  }

  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_68) {
      if (intrm_sf_mf_67) {
        t699 = t509 * (t553 - intrm_sf_mf_18) * 1000.0 + t520;
        t684 = -pmf_log(t520 / (t699 == 0.0 ? 1.0E-16 : t699));
        intrm_sf_mf_18 = t684 / (t676 == 0.0 ? 1.0E-16 : t676);
      } else {
        intrm_sf_mf_18 = t539;
      }
    } else {
      intrm_sf_mf_18 = 0.0;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_70) {
      if (intrm_sf_mf_69) {
        t669 = t509 * (t550 - intrm_sf_mf_18) * 1000.0 + t520;
        t670 = -pmf_log(t520 / (t669 == 0.0 ? 1.0E-16 : t669));
        intrm_sf_mf_18 = t670 / (t676 == 0.0 ? 1.0E-16 : t676);
      } else {
        intrm_sf_mf_18 = t539;
      }
    } else {
      intrm_sf_mf_18 = 0.0;
    }
  } else {
    intrm_sf_mf_18 = t539;
  }

  t509 = t539 - intrm_sf_mf_18;
  t539 = t581 + (intrm_sf_mf_58 ? 0.0 : intrm_sf_mf_57 ? t509 : 0.0);
  t509 = t517 + (intrm_sf_mf_58 ? t509 : 0.0);
  if (intrm_sf_mf_485) {
    if (intrm_sf_mf_478) {
      if (M[152ULL] != 0) {
        t676 = -pmf_log((X[197ULL] - t588 * 1000.0) / (X[197ULL] == 0.0 ?
          1.0E-16 : X[197ULL]));
        t538 = t676 / (t598 == 0.0 ? 1.0E-16 : t598);
      } else {
        t538 = 1.0;
      }
    } else {
      t538 = 0.0;
    }
  } else {
    t538 = intrm_sf_mf_484 ? intrm_sf_mf_481 ? 0.0 : (real_T)!intrm_sf_mf_480 :
      (real_T)intrm_sf_mf_478;
  }

  if (intrm_sf_mf_485) {
    zc_int23 = intrm_sf_mf_478 ? 0.0 : (real_T)!intrm_sf_mf_477;
  } else if (intrm_sf_mf_484) {
    if (intrm_sf_mf_481) {
      if (M[4ULL] != 0) {
        t676 = -pmf_log((X[197ULL] -
                         Steam_Generator_two_phase_fluid_mdot_hc_lag_pos *
                         1000.0) / (X[197ULL] == 0.0 ? 1.0E-16 : X[197ULL]));
        zc_int23 = t676 / (t608 == 0.0 ? 1.0E-16 : t608);
      } else {
        zc_int23 = 1.0;
      }
    } else {
      zc_int23 = 0.0;
    }
  } else {
    zc_int23 = intrm_sf_mf_478 ? 0.0 : (real_T)!intrm_sf_mf_482;
  }

  t517 = (1.0 - t538) - zc_int23;
  if (intrm_sf_mf_485) {
    if (intrm_sf_mf_478) {
      if (M[152ULL] != 0) {
        zc_int28 = t601;
      } else {
        zc_int28 = Steam_Generator_two_phase_fluid_Pr_liq * t602 * 0.001 + t599;
      }
    } else if (intrm_sf_mf_477) {
      zc_int28 = t599;
    } else {
      zc_int28 = Steam_Generator_two_phase_fluid_cp_vap_ * t609 * 0.001 + t599;
    }
  } else if (intrm_sf_mf_484) {
    if (intrm_sf_mf_481) {
      if (M[4ULL] != 0) {
        zc_int28 = t604;
      } else {
        zc_int28 = Steam_Generator_two_phase_fluid_cp_vap_ * t609 * 0.001 + t599;
      }
    } else if (intrm_sf_mf_480) {
      zc_int28 = t599;
    } else {
      zc_int28 = Steam_Generator_two_phase_fluid_Pr_liq * t602 * 0.001 + t599;
    }
  } else if (intrm_sf_mf_478) {
    zc_int28 = Steam_Generator_two_phase_fluid_Pr_liq * t602 * 0.001 + t599;
  } else if (intrm_sf_mf_482) {
    zc_int28 = t599;
  } else {
    zc_int28 = Steam_Generator_two_phase_fluid_cp_vap_ * t609 * 0.001 + t599;
  }

  if (intrm_sf_mf_485) {
    if (intrm_sf_mf_495) {
      if (intrm_sf_mf_494) {
        zc_int28 = (t604 - zc_int28) / (t595 == 0.0 ? 1.0E-16 : t595) / (t589 ==
          0.0 ? 1.0E-16 : t589) * 1000.0;
      } else {
        zc_int28 = t517;
      }
    } else {
      zc_int28 = 0.0;
    }
  } else if (intrm_sf_mf_484) {
    if (intrm_sf_mf_497) {
      if (intrm_sf_mf_496) {
        zc_int28 = (t601 - zc_int28) / (t595 == 0.0 ? 1.0E-16 : t595) / (t589 ==
          0.0 ? 1.0E-16 : t589) * 1000.0;
      } else {
        zc_int28 = t517;
      }
    } else {
      zc_int28 = 0.0;
    }
  } else {
    zc_int28 = t517;
  }

  t520 = t517 - zc_int28;
  t544 = t538 + (intrm_sf_mf_485 ? 0.0 : intrm_sf_mf_484 ? t520 : 0.0);
  t538 = (t535 * t539 + t510 * t509) + t522 * intrm_sf_mf_18;
  t536 = t536 * t561 * 100.0 / 387.46788154112568;
  t513 = t513 * t561 * 100000.0 / 5.0 * 0.001 / 83.887262122266435;
  t706 = t706 * t561 * 0.001 / 387.46788154112568;
  t534 = t534 * t611 * 0.001 / 1491.3876676289765;
  out.mX[0] = t585 * 100000.0 / 141.89810237237077;
  out.mX[1] = 0.1;
  out.mX[2] = 0.1;
  out.mX[3] = t563 / 2.0 * 0.092765046668672663;
  out.mX[4] = t570 * t561 / 5.0 * 0.001 / 83.887262122266435;
  out.mX[5] = (t567 + t569) / 2.0 * 0.092765046668672663;
  out.mX[6] = t536;
  out.mX[7] = t513;
  out.mX[8] = t565 / 2.0 * 0.092765046668672663;
  out.mX[9] = t706;
  out.mX[10] = t538 * 2827.4333882308138;
  out.mX[11] = X[14ULL] / 5.0 / 3.4815858762092824;
  out.mX[12] = X[14ULL] / 503.40779458459991;
  out.mX[13] = 0.00047789058976114489;
  out.mX[14] = 1.0;
  out.mX[15] = 0.20913872444039316;
  out.mX[16] = 1.0;
  out.mX[17] = 0.21256753441374493;
  out.mX[18] = 1.0;
  out.mX[19] = 1.0 / (t524 == 0.0 ? 1.0E-16 : t524) * t554 *
    0.029847534259719415;
  out.mX[20] = t552 * 100.0 / 16.716469317431478;
  out.mX[21] = -t537 * t554 * 0.029847534259719415;
  out.mX[22] = t555 * 0.001 / 16.716469317431478;
  out.mX[23] = 1.0 / (t564 == 0.0 ? 1.0E-16 : t564) * Pipe_TL1_rho_I *
    0.059695068519438829;
  out.mX[24] = t566 * 100.0 / 33.432938634862957;
  out.mX[25] = -Pipe_TL1_alpha_I * Pipe_TL1_rho_I * 0.059695068519438829;
  out.mX[26] = t571 * 0.001 / 33.432938634862957;
  out.mX[27] = 1.0 / (t575 == 0.0 ? 1.0E-16 : t575) * t578 *
    0.059695068519438829;
  out.mX[28] = t576 * 100.0 / 33.432938634862957;
  out.mX[29] = -t572 * t578 * 0.059695068519438829;
  out.mX[30] = t579 * 0.001 / 33.432938634862957;
  out.mX[31] = t580 * 636.74739754068094 / 10.0;
  out.mX[32] = X[23ULL] / 502.45269176965843;
  out.mX[33] = 1.0;
  out.mX[34] = 0.1;
  out.mX[35] = 0.1;
  out.mX[36] = (X[28ULL] + t586) / 27341.394903093591;
  out.mX[37] = (X[29ULL] + t707) / 3120.2482559943965;
  out.mX[38] = 0.064210202741397715;
  out.mX[39] = 0.064210202741397715;
  out.mX[40] = t612 / 2.0 * 0.36562301792487523;
  out.mX[41] = t620 * t611 / 5.0 * 0.001 / 1402.7179873660207;
  out.mX[42] = (t617 + t619) / 2.0 * 0.36562301792487523;
  out.mX[43] = t590 * t611 * 100.0 / 1491.3876676289765;
  out.mX[44] = t587 * t611 * 100000.0 / 5.0 * 0.001 / 1402.7179873660207;
  out.mX[45] = t428_idx_0 / 2.0 * 0.36562301792487523;
  out.mX[46] = t534;
  out.mX[47] = ((t591 * t544 + (t605 +
    Steam_Generator_two_phase_fluid_DrhoDp_out_vap) / 2.0 * (zc_int23 +
    (intrm_sf_mf_485 ? t520 : 0.0))) + t597 * zc_int28) * 25770.87723647878;
  out.mX[48] = X[41ULL] / 5.0 / 30.442447051403633;
  out.mX[49] = X[41ULL] / 502.45269176965843;
  out.mX[50] = 0.00703301243581711;
  out.mX[51] = 0.00033433928409673172;
  out.mX[52] = 1.0;
  out.mX[53] = 0.382952672446287;
  out.mX[54] = 0.0081040950470290685;
  out.mX[55] = 1.0;
  out.mX[56] = 0.1;
  out.mX[57] = 0.1;
  out.mX[58] = 0.1;
  out.mX[59] = 0.1;
  out.mX[60] = 0.1;
  out.mX[61] = 0.1;
  out.mX[62] = 0.1;
  out.mX[63] = 0.1;
  (void)LC;
  (void)t709;
  return 0;
}
