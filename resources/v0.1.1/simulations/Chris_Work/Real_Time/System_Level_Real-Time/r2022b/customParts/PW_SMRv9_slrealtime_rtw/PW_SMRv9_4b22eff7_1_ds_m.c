/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv9/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_sys_struct.h"
#include "PW_SMRv9_4b22eff7_1_ds_m.h"
#include "PW_SMRv9_4b22eff7_1_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_externals.h"
#include "PW_SMRv9_4b22eff7_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv9_4b22eff7_1_ds_m(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t751, NeDsMethodOutput *t752)
{
  ETTS0 bb_efOut;
  ETTS0 bc_efOut;
  ETTS0 bd_efOut;
  ETTS0 be_efOut;
  ETTS0 ce_efOut;
  ETTS0 d_efOut;
  ETTS0 dc_efOut;
  ETTS0 df_efOut;
  ETTS0 e_efOut;
  ETTS0 ed_efOut;
  ETTS0 efOut;
  ETTS0 fc_efOut;
  ETTS0 ff_efOut;
  ETTS0 g_efOut;
  ETTS0 gc_efOut;
  ETTS0 gd_efOut;
  ETTS0 ge_efOut;
  ETTS0 i_efOut;
  ETTS0 id_efOut;
  ETTS0 jb_efOut;
  ETTS0 kd_efOut;
  ETTS0 ke_efOut;
  ETTS0 l_efOut;
  ETTS0 lb_efOut;
  ETTS0 m_efOut;
  ETTS0 mc_efOut;
  ETTS0 md_efOut;
  ETTS0 nb_efOut;
  ETTS0 nc_efOut;
  ETTS0 pb_efOut;
  ETTS0 q_efOut;
  ETTS0 rb_efOut;
  ETTS0 s_efOut;
  ETTS0 sd_efOut;
  ETTS0 t0;
  ETTS0 t12;
  ETTS0 t13;
  ETTS0 t18;
  ETTS0 t25;
  ETTS0 t27;
  ETTS0 t29;
  ETTS0 t35;
  ETTS0 t38;
  ETTS0 t39;
  ETTS0 t41;
  ETTS0 t42;
  ETTS0 t46;
  ETTS0 tb_efOut;
  ETTS0 tc_efOut;
  ETTS0 td_efOut;
  ETTS0 u_efOut;
  ETTS0 uc_efOut;
  ETTS0 ue_efOut;
  ETTS0 vb_efOut;
  ETTS0 vd_efOut;
  ETTS0 w_efOut;
  ETTS0 we_efOut;
  ETTS0 xd_efOut;
  ETTS0 yb_efOut;
  ETTS0 ye_efOut;
  PmRealVector out;
  real_T X[250];
  real_T ab_efOut[1];
  real_T ac_efOut[1];
  real_T ad_efOut[1];
  real_T ae_efOut[1];
  real_T af_efOut[1];
  real_T b_efOut[1];
  real_T bf_efOut[1];
  real_T c_efOut[1];
  real_T cb_efOut[1];
  real_T cc_efOut[1];
  real_T cd_efOut[1];
  real_T cf_efOut[1];
  real_T db_efOut[1];
  real_T dd_efOut[1];
  real_T de_efOut[1];
  real_T eb_efOut[1];
  real_T ec_efOut[1];
  real_T ee_efOut[1];
  real_T ef_efOut[1];
  real_T f_efOut[1];
  real_T fb_efOut[1];
  real_T fd_efOut[1];
  real_T fe_efOut[1];
  real_T gb_efOut[1];
  real_T gf_efOut[1];
  real_T h_efOut[1];
  real_T hb_efOut[1];
  real_T hc_efOut[1];
  real_T hd_efOut[1];
  real_T he_efOut[1];
  real_T ib_efOut[1];
  real_T ic_efOut[1];
  real_T ie_efOut[1];
  real_T j_efOut[1];
  real_T jc_efOut[1];
  real_T jd_efOut[1];
  real_T je_efOut[1];
  real_T k_efOut[1];
  real_T kb_efOut[1];
  real_T kc_efOut[1];
  real_T lc_efOut[1];
  real_T ld_efOut[1];
  real_T le_efOut[1];
  real_T mb_efOut[1];
  real_T me_efOut[1];
  real_T n_efOut[1];
  real_T nd_efOut[1];
  real_T ne_efOut[1];
  real_T o_efOut[1];
  real_T ob_efOut[1];
  real_T oc_efOut[1];
  real_T od_efOut[1];
  real_T oe_efOut[1];
  real_T p_efOut[1];
  real_T pc_efOut[1];
  real_T pd_efOut[1];
  real_T pe_efOut[1];
  real_T qb_efOut[1];
  real_T qc_efOut[1];
  real_T qd_efOut[1];
  real_T qe_efOut[1];
  real_T r_efOut[1];
  real_T rc_efOut[1];
  real_T rd_efOut[1];
  real_T re_efOut[1];
  real_T sb_efOut[1];
  real_T sc_efOut[1];
  real_T se_efOut[1];
  real_T t459[1];
  real_T t510[1];
  real_T t518[1];
  real_T t_efOut[1];
  real_T te_efOut[1];
  real_T ub_efOut[1];
  real_T ud_efOut[1];
  real_T v_efOut[1];
  real_T vc_efOut[1];
  real_T ve_efOut[1];
  real_T wb_efOut[1];
  real_T wc_efOut[1];
  real_T wd_efOut[1];
  real_T x_efOut[1];
  real_T xb_efOut[1];
  real_T xc_efOut[1];
  real_T xe_efOut[1];
  real_T y_efOut[1];
  real_T yc_efOut[1];
  real_T yd_efOut[1];
  real_T Condenser_thermal_liquid_alpha_out;
  real_T Pipe_TL_rho_I;
  real_T Steam_Drum_mass_liq_dead;
  real_T Steam_Generator_thermal_liquid_DuDp_in;
  real_T intrm_sf_mf_127;
  real_T intrm_sf_mf_512;
  real_T t457_idx_0;
  real_T t544;
  real_T t545;
  real_T t546;
  real_T t548;
  real_T t550;
  real_T t551;
  real_T t553;
  real_T t559;
  real_T t561;
  real_T t562;
  real_T t565;
  real_T t576;
  real_T t578;
  real_T t579;
  real_T t580;
  real_T t583;
  real_T t584;
  real_T t586;
  real_T t587;
  real_T t590;
  real_T t591;
  real_T t593;
  real_T t594;
  real_T t598;
  real_T t599;
  real_T t601;
  real_T t602;
  real_T t603;
  real_T t604;
  real_T t605;
  real_T t606;
  real_T t609;
  real_T t610;
  real_T t612;
  real_T t613;
  real_T t614;
  real_T t615;
  real_T t616;
  real_T t618;
  real_T t623;
  real_T t626;
  real_T t627;
  real_T t628;
  real_T t629;
  real_T t630;
  real_T t631;
  real_T t632;
  real_T t633;
  real_T t635;
  real_T t636;
  real_T t637;
  real_T t639;
  real_T t640;
  real_T t642;
  real_T t643;
  real_T t644;
  real_T t645;
  real_T t646;
  real_T t647;
  real_T t648;
  real_T t650;
  real_T t655;
  real_T t657;
  real_T t658;
  real_T t678;
  real_T t686;
  real_T t690;
  real_T t694;
  real_T t698;
  real_T t699;
  real_T t709;
  real_T t710;
  real_T t712;
  real_T t714;
  real_T t716;
  real_T t737;
  real_T t739;
  real_T t741;
  real_T t748;
  real_T t749;
  real_T t750;
  real_T zc_int12;
  real_T zc_int55;
  real_T zc_int62;
  size_t t146[1];
  size_t t48[1];
  size_t t49[1];
  size_t t55[1];
  size_t t58[1];
  size_t t77[1];
  int32_T M[163];
  int32_T b;
  boolean_T intrm_sf_mf_50;
  boolean_T intrm_sf_mf_500;
  boolean_T intrm_sf_mf_501;
  boolean_T intrm_sf_mf_502;
  boolean_T intrm_sf_mf_503;
  boolean_T intrm_sf_mf_51;
  boolean_T intrm_sf_mf_513;
  boolean_T intrm_sf_mf_514;
  boolean_T intrm_sf_mf_515;
  boolean_T intrm_sf_mf_517;
  boolean_T intrm_sf_mf_518;
  boolean_T intrm_sf_mf_519;
  boolean_T intrm_sf_mf_521;
  boolean_T intrm_sf_mf_522;
  boolean_T intrm_sf_mf_53;
  boolean_T intrm_sf_mf_532;
  boolean_T intrm_sf_mf_533;
  boolean_T intrm_sf_mf_534;
  boolean_T intrm_sf_mf_54;
  boolean_T intrm_sf_mf_55;
  boolean_T intrm_sf_mf_57;
  boolean_T intrm_sf_mf_58;
  boolean_T intrm_sf_mf_67;
  boolean_T intrm_sf_mf_68;
  boolean_T intrm_sf_mf_69;
  boolean_T intrm_sf_mf_70;
  for (b = 0; b < 163; b++) {
    M[b] = t751->mM.mX[b];
  }

  for (b = 0; b < 250; b++) {
    X[b] = t751->mX.mX[b];
  }

  out = t752->mM;
  t518[0ULL] = X[0ULL];
  t48[0] = 100ULL;
  t49[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t518[0ULL], &t48
    [0ULL], &t49[0ULL]);
  t46 = efOut;
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t46.mField0[0ULL], &t46.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t48[0ULL], &t49[0ULL]);
  t510[0] = b_efOut[0];
  t749 = t510[0ULL];
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t46.mField0[0ULL], &t46.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t48[0ULL], &t49[0ULL]);
  t459[0] = c_efOut[0];
  t750 = t459[0ULL];
  t518[0ULL] = X[3ULL];
  t55[0] = 28ULL;
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t518[0ULL],
    &t55[0ULL], &t49[0ULL]);
  t42 = d_efOut;
  t518[0ULL] = X[4ULL];
  t58[0] = 27ULL;
  tlu2_linear_linear_prelookup(&e_efOut.mField0[0ULL], &e_efOut.mField1[0ULL],
    &e_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t518[0ULL],
    &t58[0ULL], &t49[0ULL]);
  t41 = e_efOut;
  tlu2_2d_linear_linear_value(&f_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], &t41.mField0[0ULL], &t41.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField11, &t55[0ULL], &t58[0ULL], &t49[0ULL]);
  t457_idx_0 = f_efOut[0];
  t748 = t457_idx_0;
  t518[0ULL] = X[5ULL];
  tlu2_linear_linear_prelookup(&g_efOut.mField0[0ULL], &g_efOut.mField1[0ULL],
    &g_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t518[0ULL],
    &t55[0ULL], &t49[0ULL]);
  t38 = g_efOut;
  tlu2_2d_linear_linear_value(&h_efOut[0ULL], &t38.mField0[0ULL], &t38.mField2
    [0ULL], &t41.mField0[0ULL], &t41.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField11, &t55[0ULL], &t58[0ULL], &t49[0ULL]);
  t457_idx_0 = h_efOut[0];
  t741 = t457_idx_0;
  t518[0ULL] = X[6ULL];
  tlu2_linear_linear_prelookup(&i_efOut.mField0[0ULL], &i_efOut.mField1[0ULL],
    &i_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t518[0ULL],
    &t48[0ULL], &t49[0ULL]);
  t35 = i_efOut;
  tlu2_1d_linear_linear_value(&j_efOut[0ULL], &t35.mField0[0ULL], &t35.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t48[0ULL], &t49[0ULL]);
  t457_idx_0 = j_efOut[0];
  zc_int62 = t457_idx_0;
  tlu2_1d_linear_linear_value(&k_efOut[0ULL], &t35.mField0[0ULL], &t35.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t48[0ULL], &t49[0ULL]);
  t457_idx_0 = k_efOut[0];
  zc_int12 = t457_idx_0;
  if (X[7ULL] <= zc_int62) {
    t544 = X[7ULL] / (zc_int62 == 0.0 ? 1.0E-16 : zc_int62) - 1.0;
  } else if (X[7ULL] >= t457_idx_0) {
    t544 = (X[7ULL] - 4000.0) / (4000.0 - t457_idx_0 == 0.0 ? 1.0E-16 : 4000.0 -
      t457_idx_0) + 2.0;
  } else {
    t548 = t457_idx_0 - zc_int62;
    t544 = (X[7ULL] - zc_int62) / (t548 == 0.0 ? 1.0E-16 : t548);
  }

  t545 = t544 < 0.0 ? t544 : 0.0;
  if (X[8ULL] <= zc_int62) {
    t546 = X[8ULL] / (zc_int62 == 0.0 ? 1.0E-16 : zc_int62) - 1.0;
  } else if (X[8ULL] >= t457_idx_0) {
    t546 = (X[8ULL] - 4000.0) / (4000.0 - t457_idx_0 == 0.0 ? 1.0E-16 : 4000.0 -
      t457_idx_0) + 2.0;
  } else {
    t578 = t457_idx_0 - zc_int62;
    t546 = (X[8ULL] - zc_int62) / (t578 == 0.0 ? 1.0E-16 : t578);
  }

  intrm_sf_mf_127 = t546 < 0.0 ? t546 : 0.0;
  t518[0ULL] = (t545 + intrm_sf_mf_127) / 2.0;
  t77[0] = 50ULL;
  tlu2_linear_nearest_prelookup(&l_efOut.mField0[0ULL], &l_efOut.mField1[0ULL],
    &l_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t518[0ULL],
    &t77[0ULL], &t49[0ULL]);
  t29 = l_efOut;
  t518[0ULL] = X[6ULL];
  tlu2_linear_nearest_prelookup(&m_efOut.mField0[0ULL], &m_efOut.mField1[0ULL],
    &m_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t518[0ULL],
    &t48[0ULL], &t49[0ULL]);
  t0 = m_efOut;
  tlu2_2d_linear_nearest_value(&n_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField12, &t77[0ULL], &t48[0ULL], &t49[0ULL]);
  t457_idx_0 = n_efOut[0];
  zc_int55 = t457_idx_0;
  tlu2_2d_linear_nearest_value(&o_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField10, &t77[0ULL], &t48[0ULL], &t49[0ULL]);
  t457_idx_0 = o_efOut[0];
  t548 = t457_idx_0;
  tlu2_2d_linear_nearest_value(&p_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField13, &t77[0ULL], &t48[0ULL], &t49[0ULL]);
  t457_idx_0 = p_efOut[0];
  zc_int55 = zc_int55 * t548 / (t457_idx_0 == 0.0 ? 1.0E-16 : t457_idx_0);
  t548 = X[9ULL] >= 0.0 ? X[9ULL] : 0.0;
  t550 = X[10ULL] >= 0.0 ? X[10ULL] : 0.0;
  t551 = zc_int55 * t550;
  t714 = t551 + X[98ULL];
  Condenser_thermal_liquid_alpha_out = t548 + X[98ULL];
  t576 = t714 / (Condenser_thermal_liquid_alpha_out == 0.0 ? 1.0E-16 :
                 Condenser_thermal_liquid_alpha_out);
  if (t576 <= 1.0) {
    t553 = 1.0 - t576 * 0.999999;
  } else {
    t553 = 1.0E-6;
  }

  if (t576 >= 1.0) {
    t578 = t576 * 1.000001 - 1.0;
  } else {
    t578 = 1.0E-6;
  }

  if (t551 + X[98ULL] >= t548 + X[98ULL]) {
    t583 = t548 + X[98ULL];
    t584 = t551 + X[98ULL];
    t579 = (1.000001 / (t583 == 0.0 ? 1.0E-16 : t583) - 0.999999 / (t584 == 0.0 ?
             1.0E-16 : t584)) * X[11ULL];
  } else {
    t559 = t551 + X[98ULL];
    t586 = t548 + X[98ULL];
    t579 = (1.000001 / (t559 == 0.0 ? 1.0E-16 : t559) - 0.999999 / (t586 == 0.0 ?
             1.0E-16 : t586)) * X[11ULL];
  }

  t551 = t579 <= 15.0 ? t579 : 15.0;
  t518[0ULL] = t544;
  tlu2_linear_linear_prelookup(&q_efOut.mField0[0ULL], &q_efOut.mField1[0ULL],
    &q_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t518[0ULL],
    &t77[0ULL], &t49[0ULL]);
  t29 = q_efOut;
  tlu2_2d_linear_linear_value(&r_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t77[0ULL], &t48[0ULL], &t49[0ULL]);
  t457_idx_0 = r_efOut[0];
  t579 = t457_idx_0;
  t580 = X[6ULL] * t457_idx_0 * 100.0 + X[7ULL];
  t518[0] = 0.0;
  tlu2_linear_linear_prelookup(&s_efOut.mField0[0ULL], &s_efOut.mField1[0ULL],
    &s_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t518[0ULL],
    &t77[0ULL], &t49[0ULL]);
  t27 = s_efOut;
  tlu2_2d_linear_linear_value(&t_efOut[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t77[0ULL], &t48[0ULL], &t49[0ULL]);
  t457_idx_0 = t_efOut[0];
  t583 = t457_idx_0;
  t584 = X[6ULL] * t457_idx_0 * 100.0 + zc_int62;
  zc_int62 = (t584 - t580) / (zc_int55 == 0.0 ? 1.0E-16 : zc_int55);
  t561 = (1.0 - pmf_exp(-t551)) * X[97ULL];
  t562 = pmf_exp(-t551) * t578 + t553;
  t559 = t561 / (t562 == 0.0 ? 1.0E-16 : t562);
  intrm_sf_mf_67 = (t559 > zc_int62 * 1000.0);
  intrm_sf_mf_51 = (t580 < t584);
  intrm_sf_mf_53 = (t580 > t584);
  t510[0] = 1.0;
  tlu2_linear_linear_prelookup(&u_efOut.mField0[0ULL], &u_efOut.mField1[0ULL],
    &u_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t510[0ULL],
    &t77[0ULL], &t49[0ULL]);
  t25 = u_efOut;
  tlu2_2d_linear_linear_value(&v_efOut[0ULL], &t25.mField0[0ULL], &t25.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t77[0ULL], &t48[0ULL], &t49[0ULL]);
  t457_idx_0 = v_efOut[0];
  t586 = t457_idx_0;
  t587 = X[6ULL] * t457_idx_0 * 100.0 + zc_int12;
  intrm_sf_mf_54 = (t580 > t587);
  intrm_sf_mf_57 = (X[97ULL] < 0.0);
  intrm_sf_mf_58 = (X[97ULL] > 0.0);
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (intrm_sf_mf_67) {
        t591 = X[97ULL] - t553 * zc_int62 * 1000.0;
        t565 = pmf_log((t578 * zc_int62 * 1000.0 + X[97ULL]) / (t591 == 0.0 ?
          1.0E-16 : t591));
        zc_int12 = t565 / (t551 == 0.0 ? 1.0E-16 : t551);
      } else {
        zc_int12 = 1.0;
      }
    } else {
      zc_int12 = 0.0;
    }
  } else {
    zc_int12 = intrm_sf_mf_57 ? intrm_sf_mf_54 ? 0.0 : (real_T)!intrm_sf_mf_53 :
      (real_T)intrm_sf_mf_51;
  }

  t561 = t544 > 1.0 ? t544 : 1.0;
  t562 = t546 > 1.0 ? t546 : 1.0;
  t459[0ULL] = (t561 + t562) / 2.0;
  tlu2_linear_nearest_prelookup(&w_efOut.mField0[0ULL], &w_efOut.mField1[0ULL],
    &w_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t459[0ULL],
    &t77[0ULL], &t49[0ULL]);
  t39 = w_efOut;
  tlu2_2d_linear_nearest_value(&x_efOut[0ULL], &t39.mField0[0ULL], &t39.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField12, &t77[0ULL], &t48[0ULL], &t49[0ULL]);
  t457_idx_0 = x_efOut[0];
  t590 = t457_idx_0;
  tlu2_2d_linear_nearest_value(&y_efOut[0ULL], &t39.mField0[0ULL], &t39.mField2
    [0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField10, &t77[0ULL], &t48[0ULL], &t49[0ULL]);
  t457_idx_0 = y_efOut[0];
  t591 = t457_idx_0;
  tlu2_2d_linear_nearest_value(&ab_efOut[0ULL], &t39.mField0[0ULL],
    &t39.mField2[0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)
    (LC))->mField13, &t77[0ULL], &t48[0ULL], &t49[0ULL]);
  t457_idx_0 = ab_efOut[0];
  t590 = t590 * t591 / (t457_idx_0 == 0.0 ? 1.0E-16 : t457_idx_0);
  t591 = t590 * t550;
  t550 = (X[98ULL] + t591) / (Condenser_thermal_liquid_alpha_out == 0.0 ?
    1.0E-16 : Condenser_thermal_liquid_alpha_out);
  if (t550 <= 1.0) {
    t565 = 1.0 - t550 * 0.999999;
  } else {
    t565 = 1.0E-6;
  }

  if (t550 >= 1.0) {
    t593 = t550 * 1.000001 - 1.0;
  } else {
    t593 = 1.0E-6;
  }

  if (X[98ULL] + t591 >= t548 + X[98ULL]) {
    t737 = t548 + X[98ULL];
    t598 = X[98ULL] + t591;
    t594 = (1.000001 / (t737 == 0.0 ? 1.0E-16 : t737) - 0.999999 / (t598 == 0.0 ?
             1.0E-16 : t598)) * X[12ULL];
  } else {
    t599 = X[98ULL] + t591;
    Pipe_TL_rho_I = t548 + X[98ULL];
    t594 = (1.000001 / (t599 == 0.0 ? 1.0E-16 : t599) - 0.999999 /
            (Pipe_TL_rho_I == 0.0 ? 1.0E-16 : Pipe_TL_rho_I)) * X[12ULL];
  }

  t548 = t594 <= 15.0 ? t594 : 15.0;
  t591 = (t587 - t580) / (t590 == 0.0 ? 1.0E-16 : t590);
  intrm_sf_mf_50 = (t580 < t587);
  t602 = (1.0 - pmf_exp(-t548)) * X[97ULL];
  t603 = pmf_exp(-t548) * t593 + t565;
  t594 = t602 / (t603 == 0.0 ? 1.0E-16 : t603);
  intrm_sf_mf_68 = (t594 < t591 * 1000.0);
  intrm_sf_mf_55 = (t580 <= t587);
  if (intrm_sf_mf_58) {
    t739 = intrm_sf_mf_51 ? 0.0 : (real_T)!intrm_sf_mf_50;
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (intrm_sf_mf_68) {
        t605 = X[97ULL] - t565 * t591 * 1000.0;
        t606 = pmf_log((t593 * t591 * 1000.0 + X[97ULL]) / (t605 == 0.0 ?
          1.0E-16 : t605));
        t739 = t606 / (t548 == 0.0 ? 1.0E-16 : t548);
      } else {
        t739 = 1.0;
      }
    } else {
      t739 = 0.0;
    }
  } else {
    t739 = intrm_sf_mf_51 ? 0.0 : (real_T)!intrm_sf_mf_55;
  }

  t737 = (1.0 - zc_int12) - t739;
  zc_int12 = t714 / (Condenser_thermal_liquid_alpha_out == 0.0 ? 1.0E-16 :
                     Condenser_thermal_liquid_alpha_out) / (zc_int55 == 0.0 ?
    1.0E-16 : zc_int55);
  t739 = X[13ULL] / (Condenser_thermal_liquid_alpha_out == 0.0 ? 1.0E-16 :
                     Condenser_thermal_liquid_alpha_out);
  t714 = t739 <= 15.0 ? t739 : 15.0;
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (intrm_sf_mf_67) {
        t739 = (t576 - 1.0) * zc_int62 * 1000.0 + X[97ULL];
      } else {
        t739 = (t576 * t559 + X[97ULL]) - zc_int62 * 1000.0;
      }
    } else if (intrm_sf_mf_50) {
      t739 = X[97ULL];
    } else {
      t739 = (t550 * t594 + X[97ULL]) - t591 * 1000.0;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (intrm_sf_mf_68) {
        t739 = (t550 - 1.0) * t591 * 1000.0 + X[97ULL];
      } else {
        t739 = (t550 * t594 + X[97ULL]) - t591 * 1000.0;
      }
    } else if (intrm_sf_mf_53) {
      t739 = X[97ULL];
    } else {
      t739 = (t576 * t559 + X[97ULL]) - zc_int62 * 1000.0;
    }
  } else if (intrm_sf_mf_51) {
    t739 = (t576 * t559 + X[97ULL]) - zc_int62 * 1000.0;
  } else if (intrm_sf_mf_55) {
    t739 = X[97ULL];
  } else {
    t739 = (t550 * t594 + X[97ULL]) - t591 * 1000.0;
  }

  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (intrm_sf_mf_67) {
        Condenser_thermal_liquid_alpha_out = t584;
      } else {
        Condenser_thermal_liquid_alpha_out = zc_int55 * t559 * 0.001 + t580;
      }
    } else if (intrm_sf_mf_50) {
      Condenser_thermal_liquid_alpha_out = t580;
    } else {
      Condenser_thermal_liquid_alpha_out = t590 * t594 * 0.001 + t580;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (intrm_sf_mf_68) {
        Condenser_thermal_liquid_alpha_out = t587;
      } else {
        Condenser_thermal_liquid_alpha_out = t590 * t594 * 0.001 + t580;
      }
    } else if (intrm_sf_mf_53) {
      Condenser_thermal_liquid_alpha_out = t580;
    } else {
      Condenser_thermal_liquid_alpha_out = zc_int55 * t559 * 0.001 + t580;
    }
  } else if (intrm_sf_mf_51) {
    Condenser_thermal_liquid_alpha_out = zc_int55 * t559 * 0.001 + t580;
  } else if (intrm_sf_mf_55) {
    Condenser_thermal_liquid_alpha_out = t580;
  } else {
    Condenser_thermal_liquid_alpha_out = t590 * t594 * 0.001 + t580;
  }

  t612 = (pmf_exp(t714 * t737) - 1.0) * t739;
  t739 = t612 / (zc_int12 == 0.0 ? 1.0E-16 : zc_int12);
  intrm_sf_mf_67 = (t739 * 0.001 > t587 - Condenser_thermal_liquid_alpha_out);
  intrm_sf_mf_68 = (Condenser_thermal_liquid_alpha_out < t587);
  intrm_sf_mf_69 = (t739 * 0.001 < t584 - Condenser_thermal_liquid_alpha_out);
  intrm_sf_mf_70 = (Condenser_thermal_liquid_alpha_out > t584);
  intrm_sf_mf_513 = (t544 >= 1.0);
  intrm_sf_mf_515 = (t544 <= 0.0);
  intrm_sf_mf_517 = (t546 >= 1.0);
  intrm_sf_mf_518 = (t546 <= 0.0);
  t459[0ULL] = t546;
  tlu2_linear_linear_prelookup(&bb_efOut.mField0[0ULL], &bb_efOut.mField1[0ULL],
    &bb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t459[0ULL],
    &t77[0ULL], &t49[0ULL]);
  t0 = bb_efOut;
  tlu2_2d_linear_linear_value(&cb_efOut[0ULL], &t0.mField0[0ULL], &t0.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t77[0ULL], &t48[0ULL], &t49[0ULL]);
  t457_idx_0 = cb_efOut[0];
  t544 = t457_idx_0;
  tlu2_2d_linear_linear_value(&db_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], &t41.mField0[0ULL], &t41.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField17, &t55[0ULL], &t58[0ULL], &t49[0ULL]);
  t457_idx_0 = db_efOut[0];
  t546 = t457_idx_0;
  tlu2_2d_linear_linear_value(&eb_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], &t41.mField0[0ULL], &t41.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t55[0ULL], &t58[0ULL], &t49[0ULL]);
  t457_idx_0 = eb_efOut[0];
  t739 = t457_idx_0;
  t737 = -t457_idx_0 * t546;
  tlu2_2d_linear_linear_value(&fb_efOut[0ULL], &t38.mField0[0ULL], &t38.mField2
    [0ULL], &t41.mField0[0ULL], &t41.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField17, &t55[0ULL], &t58[0ULL], &t49[0ULL]);
  t457_idx_0 = fb_efOut[0];
  Condenser_thermal_liquid_alpha_out = t457_idx_0;
  tlu2_2d_linear_linear_value(&gb_efOut[0ULL], &t38.mField0[0ULL], &t38.mField2
    [0ULL], &t41.mField0[0ULL], &t41.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t55[0ULL], &t58[0ULL], &t49[0ULL]);
  t457_idx_0 = gb_efOut[0];
  t598 = t457_idx_0;
  t599 = -t457_idx_0 * Condenser_thermal_liquid_alpha_out;
  tlu2_2d_linear_linear_value(&hb_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], &t41.mField0[0ULL], &t41.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField18, &t55[0ULL], &t58[0ULL], &t49[0ULL]);
  t457_idx_0 = hb_efOut[0];
  Pipe_TL_rho_I = t457_idx_0;
  t601 = t739 / (t457_idx_0 == 0.0 ? 1.0E-16 : t457_idx_0);
  tlu2_2d_linear_linear_value(&ib_efOut[0ULL], &t38.mField0[0ULL], &t38.mField2
    [0ULL], &t41.mField0[0ULL], &t41.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField18, &t55[0ULL], &t58[0ULL], &t49[0ULL]);
  t457_idx_0 = ib_efOut[0];
  t603 = t598 / (t457_idx_0 == 0.0 ? 1.0E-16 : t457_idx_0);
  t604 = t748 - t546 * X[4ULL] / (t739 == 0.0 ? 1.0E-16 : t739) * 100000.0;
  t748 = t741 - Condenser_thermal_liquid_alpha_out * X[4ULL] / (t598 == 0.0 ?
    1.0E-16 : t598) * 100000.0;
  t741 = (X[4ULL] / (Pipe_TL_rho_I == 0.0 ? 1.0E-16 : Pipe_TL_rho_I) - X[3ULL] *
          t546) / (t739 == 0.0 ? 1.0E-16 : t739);
  t546 = (X[4ULL] / (t457_idx_0 == 0.0 ? 1.0E-16 : t457_idx_0) - X[5ULL] *
          Condenser_thermal_liquid_alpha_out) / (t598 == 0.0 ? 1.0E-16 : t598);
  t739 = (t739 + t598) / 2.0 * 0.092765046668672663;
  t459[0ULL] = t545;
  t146[0] = 25ULL;
  tlu2_linear_linear_prelookup(&jb_efOut.mField0[0ULL], &jb_efOut.mField1[0ULL],
    &jb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t459[0ULL],
    &t146[0ULL], &t49[0ULL]);
  t41 = jb_efOut;
  tlu2_2d_linear_linear_value(&kb_efOut[0ULL], &t41.mField0[0ULL], &t41.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField19, &t146[0ULL], &t48[0ULL], &t49[0ULL]);
  t457_idx_0 = kb_efOut[0];
  t545 = t457_idx_0;
  t459[0ULL] = t561;
  tlu2_linear_linear_prelookup(&lb_efOut.mField0[0ULL], &lb_efOut.mField1[0ULL],
    &lb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t459[0ULL],
    &t146[0ULL], &t49[0ULL]);
  t29 = lb_efOut;
  tlu2_2d_linear_linear_value(&mb_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField21, &t146[0ULL], &t48[0ULL], &t49[0ULL]);
  t457_idx_0 = mb_efOut[0];
  t459[0ULL] = intrm_sf_mf_127;
  tlu2_linear_linear_prelookup(&nb_efOut.mField0[0ULL], &nb_efOut.mField1[0ULL],
    &nb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t459[0ULL],
    &t146[0ULL], &t49[0ULL]);
  t38 = nb_efOut;
  tlu2_2d_linear_linear_value(&ob_efOut[0ULL], &t38.mField0[0ULL], &t38.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField19, &t146[0ULL], &t48[0ULL], &t49[0ULL]);
  t459[0] = ob_efOut[0];
  intrm_sf_mf_127 = t459[0ULL];
  t545 = (t545 + intrm_sf_mf_127) / 2.0;
  tlu2_linear_linear_prelookup(&pb_efOut.mField0[0ULL], &pb_efOut.mField1[0ULL],
    &pb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t518[0ULL],
    &t146[0ULL], &t49[0ULL]);
  t18 = pb_efOut;
  tlu2_2d_linear_linear_value(&qb_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField19, &t146[0ULL], &t48[0ULL], &t49[0ULL]);
  t459[0] = qb_efOut[0];
  intrm_sf_mf_127 = t459[0ULL];
  tlu2_linear_linear_prelookup(&rb_efOut.mField0[0ULL], &rb_efOut.mField1[0ULL],
    &rb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t510[0ULL],
    &t146[0ULL], &t49[0ULL]);
  t41 = rb_efOut;
  tlu2_2d_linear_linear_value(&sb_efOut[0ULL], &t41.mField0[0ULL], &t41.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField21, &t146[0ULL], &t48[0ULL], &t49[0ULL]);
  t510[0] = sb_efOut[0];
  Condenser_thermal_liquid_alpha_out = t510[0ULL];
  t598 = intrm_sf_mf_515 ? t583 : intrm_sf_mf_513 ? t586 : t579;
  t579 = intrm_sf_mf_518 ? t583 : intrm_sf_mf_517 ? t586 : t544;
  t544 = t598 <= t579 ? t598 : t579;
  if (t579 / (t598 == 0.0 ? 1.0E-16 : t598) >= 1.000001) {
    Pipe_TL_rho_I = t579 / (t598 == 0.0 ? 1.0E-16 : t598);
  } else if (t598 / (t579 == 0.0 ? 1.0E-16 : t579) >= 1.000001) {
    Pipe_TL_rho_I = t598 / (t579 == 0.0 ? 1.0E-16 : t579);
  } else {
    Pipe_TL_rho_I = 1.000001;
  }

  t709 = pmf_log(Pipe_TL_rho_I);
  Steam_Generator_thermal_liquid_DuDp_in = 1.000001 / (t583 == 0.0 ? 1.0E-16 :
    t583) - 1.0 / (t586 == 0.0 ? 1.0E-16 : t586);
  t544 = (1.000001 / (t583 == 0.0 ? 1.0E-16 : t583) - t709 / (Pipe_TL_rho_I -
           1.0 == 0.0 ? 1.0E-16 : Pipe_TL_rho_I - 1.0) / (t544 == 0.0 ? 1.0E-16 :
           t544)) / (Steam_Generator_thermal_liquid_DuDp_in == 0.0 ? 1.0E-16 :
                     Steam_Generator_thermal_liquid_DuDp_in);
  t579 = (1.0 - t544) * intrm_sf_mf_127 + Condenser_thermal_liquid_alpha_out *
    t544;
  t518[0ULL] = t562;
  tlu2_linear_linear_prelookup(&tb_efOut.mField0[0ULL], &tb_efOut.mField1[0ULL],
    &tb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t518[0ULL],
    &t146[0ULL], &t49[0ULL]);
  t29 = tb_efOut;
  tlu2_2d_linear_linear_value(&ub_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField21, &t146[0ULL], &t48[0ULL], &t49[0ULL]);
  t510[0] = ub_efOut[0];
  t544 = t510[0ULL];
  t544 = (t457_idx_0 + t544) / 2.0;
  t518[0ULL] = X[15ULL];
  tlu2_linear_linear_prelookup(&vb_efOut.mField0[0ULL], &vb_efOut.mField1[0ULL],
    &vb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t518[0ULL],
    &t48[0ULL], &t49[0ULL]);
  t35 = vb_efOut;
  tlu2_1d_linear_linear_value(&wb_efOut[0ULL], &t35.mField0[0ULL], &t35.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t48[0ULL], &t49[0ULL]);
  t510[0] = wb_efOut[0];
  intrm_sf_mf_127 = t510[0ULL];
  tlu2_1d_linear_linear_value(&xb_efOut[0ULL], &t35.mField0[0ULL], &t35.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t48[0ULL], &t49[0ULL]);
  t510[0] = xb_efOut[0];
  t583 = t510[0ULL];
  if (X[16ULL] <= intrm_sf_mf_127) {
    t586 = X[16ULL] / (intrm_sf_mf_127 == 0.0 ? 1.0E-16 : intrm_sf_mf_127) - 1.0;
  } else if (X[16ULL] >= t583) {
    t586 = (X[16ULL] - 4000.0) / (4000.0 - t583 == 0.0 ? 1.0E-16 : 4000.0 - t583)
      + 2.0;
  } else {
    t631 = t583 - intrm_sf_mf_127;
    t586 = (X[16ULL] - intrm_sf_mf_127) / (t631 == 0.0 ? 1.0E-16 : t631);
  }

  t518[0ULL] = t586;
  tlu2_linear_linear_prelookup(&yb_efOut.mField0[0ULL], &yb_efOut.mField1[0ULL],
    &yb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t518[0ULL],
    &t146[0ULL], &t49[0ULL]);
  t38 = yb_efOut;
  tlu2_2d_linear_linear_value(&ac_efOut[0ULL], &t38.mField0[0ULL], &t38.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField19, &t146[0ULL], &t48[0ULL], &t49[0ULL]);
  t510[0] = ac_efOut[0];
  intrm_sf_mf_127 = t510[0ULL];
  t518[0ULL] = t586;
  tlu2_linear_linear_prelookup(&bc_efOut.mField0[0ULL], &bc_efOut.mField1[0ULL],
    &bc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField26, &t518[0ULL],
    &t77[0ULL], &t49[0ULL]);
  t29 = bc_efOut;
  tlu2_2d_linear_linear_value(&cc_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField25, &t77[0ULL], &t48[0ULL], &t49[0ULL]);
  t510[0] = cc_efOut[0];
  t583 = t510[0ULL];
  t518[0ULL] = t586;
  tlu2_linear_linear_prelookup(&dc_efOut.mField0[0ULL], &dc_efOut.mField1[0ULL],
    &dc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t518[0ULL],
    &t146[0ULL], &t49[0ULL]);
  t0 = dc_efOut;
  tlu2_2d_linear_linear_value(&ec_efOut[0ULL], &t0.mField0[0ULL], &t0.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField21, &t146[0ULL], &t48[0ULL], &t49[0ULL]);
  t510[0] = ec_efOut[0];
  t561 = t510[0ULL];
  t518[0ULL] = X[20ULL];
  tlu2_linear_linear_prelookup(&fc_efOut.mField0[0ULL], &fc_efOut.mField1[0ULL],
    &fc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t518[0ULL],
    &t55[0ULL], &t49[0ULL]);
  t13 = fc_efOut;
  t518[0ULL] = X[19ULL];
  tlu2_linear_linear_prelookup(&gc_efOut.mField0[0ULL], &gc_efOut.mField1[0ULL],
    &gc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t518[0ULL],
    &t58[0ULL], &t49[0ULL]);
  t12 = gc_efOut;
  tlu2_2d_linear_linear_value(&hc_efOut[0ULL], &t13.mField0[0ULL], &t13.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField17, &t55[0ULL], &t58[0ULL], &t49[0ULL]);
  t510[0] = hc_efOut[0];
  t562 = t510[0ULL];
  tlu2_2d_linear_linear_value(&ic_efOut[0ULL], &t13.mField0[0ULL], &t13.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField18, &t55[0ULL], &t58[0ULL], &t49[0ULL]);
  t510[0] = ic_efOut[0];
  Condenser_thermal_liquid_alpha_out = t510[0ULL];
  tlu2_2d_linear_linear_value(&jc_efOut[0ULL], &t13.mField0[0ULL], &t13.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField11, &t55[0ULL], &t58[0ULL], &t49[0ULL]);
  t510[0] = jc_efOut[0];
  t598 = t510[0ULL];
  tlu2_2d_linear_linear_value(&kc_efOut[0ULL], &t13.mField0[0ULL], &t13.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t55[0ULL], &t58[0ULL], &t49[0ULL]);
  t510[0] = kc_efOut[0];
  Pipe_TL_rho_I = t510[0ULL];
  tlu2_2d_linear_linear_value(&lc_efOut[0ULL], &t13.mField0[0ULL], &t13.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField3, &t55[0ULL], &t58[0ULL], &t49[0ULL]);
  t510[0] = lc_efOut[0];
  t602 = t510[0ULL];
  t605 = X[19ULL] / (Pipe_TL_rho_I == 0.0 ? 1.0E-16 : Pipe_TL_rho_I) * 100.0 +
    t602;
  t602 = (t598 - t562 * t605 * 1000.0) * Pipe_TL_rho_I * 0.01368;
  t598 = (t605 * Pipe_TL_rho_I / (Condenser_thermal_liquid_alpha_out == 0.0 ?
           1.0E-16 : Condenser_thermal_liquid_alpha_out) * 0.01 - X[20ULL] *
          t562) * 0.01368;
  t518[0ULL] = X[22ULL];
  tlu2_linear_linear_prelookup(&mc_efOut.mField0[0ULL], &mc_efOut.mField1[0ULL],
    &mc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t518[0ULL],
    &t55[0ULL], &t49[0ULL]);
  t0 = mc_efOut;
  t518[0ULL] = X[21ULL];
  tlu2_linear_linear_prelookup(&nc_efOut.mField0[0ULL], &nc_efOut.mField1[0ULL],
    &nc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t518[0ULL],
    &t58[0ULL], &t49[0ULL]);
  t29 = nc_efOut;
  tlu2_2d_linear_linear_value(&oc_efOut[0ULL], &t0.mField0[0ULL], &t0.mField2
    [0ULL], &t29.mField0[0ULL], &t29.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField17, &t55[0ULL], &t58[0ULL], &t49[0ULL]);
  t510[0] = oc_efOut[0];
  t605 = t510[0ULL];
  tlu2_2d_linear_linear_value(&pc_efOut[0ULL], &t0.mField0[0ULL], &t0.mField2
    [0ULL], &t29.mField0[0ULL], &t29.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField18, &t55[0ULL], &t58[0ULL], &t49[0ULL]);
  t510[0] = pc_efOut[0];
  t606 = t510[0ULL];
  tlu2_2d_linear_linear_value(&qc_efOut[0ULL], &t0.mField0[0ULL], &t0.mField2
    [0ULL], &t29.mField0[0ULL], &t29.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField11, &t55[0ULL], &t58[0ULL], &t49[0ULL]);
  t510[0] = qc_efOut[0];
  t609 = t510[0ULL];
  tlu2_2d_linear_linear_value(&rc_efOut[0ULL], &t0.mField0[0ULL], &t0.mField2
    [0ULL], &t29.mField0[0ULL], &t29.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t55[0ULL], &t58[0ULL], &t49[0ULL]);
  t510[0] = rc_efOut[0];
  t610 = t510[0ULL];
  tlu2_2d_linear_linear_value(&sc_efOut[0ULL], &t0.mField0[0ULL], &t0.mField2
    [0ULL], &t29.mField0[0ULL], &t29.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField3, &t55[0ULL], &t58[0ULL], &t49[0ULL]);
  t510[0] = sc_efOut[0];
  t612 = t510[0ULL];
  t613 = X[21ULL] / (t610 == 0.0 ? 1.0E-16 : t610) * 100.0 + t612;
  t612 = (t609 - t605 * t613 * 1000.0) * t610 * 0.02736;
  t609 = (t613 * t610 / (t606 == 0.0 ? 1.0E-16 : t606) * 0.01 - X[22ULL] * t605)
    * 0.02736;
  t518[0ULL] = X[24ULL];
  tlu2_linear_linear_prelookup(&tc_efOut.mField0[0ULL], &tc_efOut.mField1[0ULL],
    &tc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t518[0ULL],
    &t55[0ULL], &t49[0ULL]);
  t29 = tc_efOut;
  t518[0ULL] = X[23ULL];
  tlu2_linear_linear_prelookup(&uc_efOut.mField0[0ULL], &uc_efOut.mField1[0ULL],
    &uc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t518[0ULL],
    &t58[0ULL], &t49[0ULL]);
  t35 = uc_efOut;
  tlu2_2d_linear_linear_value(&vc_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField17, &t55[0ULL], &t58[0ULL], &t49[0ULL]);
  t510[0] = vc_efOut[0];
  t613 = t510[0ULL];
  tlu2_2d_linear_linear_value(&wc_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField18, &t55[0ULL], &t58[0ULL], &t49[0ULL]);
  t510[0] = wc_efOut[0];
  t614 = t510[0ULL];
  tlu2_2d_linear_linear_value(&xc_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField11, &t55[0ULL], &t58[0ULL], &t49[0ULL]);
  t510[0] = xc_efOut[0];
  t615 = t510[0ULL];
  tlu2_2d_linear_linear_value(&yc_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t55[0ULL], &t58[0ULL], &t49[0ULL]);
  t510[0] = yc_efOut[0];
  t616 = t510[0ULL];
  tlu2_2d_linear_linear_value(&ad_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField3, &t55[0ULL], &t58[0ULL], &t49[0ULL]);
  t510[0] = ad_efOut[0];
  t618 = t510[0ULL];
  t712 = X[23ULL] / (t616 == 0.0 ? 1.0E-16 : t616) * 100.0 + t618;
  t618 = (t615 - t613 * t712 * 1000.0) * t616 * 0.02736;
  t615 = (t712 * t616 / (t614 == 0.0 ? 1.0E-16 : t614) * 0.01 - X[24ULL] * t613)
    * 0.02736;
  t518[0ULL] = X[25ULL];
  tlu2_linear_linear_prelookup(&bd_efOut.mField0[0ULL], &bd_efOut.mField1[0ULL],
    &bd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t518[0ULL],
    &t48[0ULL], &t49[0ULL]);
  t39 = bd_efOut;
  tlu2_1d_linear_linear_value(&cd_efOut[0ULL], &t39.mField0[0ULL], &t39.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t48[0ULL], &t49[0ULL]);
  t510[0] = cd_efOut[0];
  t712 = t510[0ULL];
  tlu2_1d_linear_linear_value(&dd_efOut[0ULL], &t39.mField0[0ULL], &t39.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t48[0ULL], &t49[0ULL]);
  t510[0] = dd_efOut[0];
  t716 = t510[0ULL];
  if (X[26ULL] <= t712) {
    t709 = X[26ULL] / (t712 == 0.0 ? 1.0E-16 : t712) - 1.0;
  } else if (X[26ULL] >= t716) {
    t709 = (X[26ULL] - 4000.0) / (4000.0 - t716 == 0.0 ? 1.0E-16 : 4000.0 - t716)
      + 2.0;
  } else {
    t642 = t716 - t712;
    t709 = (X[26ULL] - t712) / (t642 == 0.0 ? 1.0E-16 : t642);
  }

  t518[0ULL] = t709;
  tlu2_linear_linear_prelookup(&ed_efOut.mField0[0ULL], &ed_efOut.mField1[0ULL],
    &ed_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t518[0ULL],
    &t146[0ULL], &t49[0ULL]);
  t29 = ed_efOut;
  tlu2_2d_linear_linear_value(&fd_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], &t39.mField0[0ULL], &t39.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField19, &t146[0ULL], &t48[0ULL], &t49[0ULL]);
  t510[0] = fd_efOut[0];
  t712 = t510[0ULL];
  t518[0ULL] = t709;
  tlu2_linear_linear_prelookup(&gd_efOut.mField0[0ULL], &gd_efOut.mField1[0ULL],
    &gd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField26, &t518[0ULL],
    &t77[0ULL], &t49[0ULL]);
  t13 = gd_efOut;
  tlu2_2d_linear_linear_value(&hd_efOut[0ULL], &t13.mField0[0ULL], &t13.mField2
    [0ULL], &t39.mField0[0ULL], &t39.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField25, &t77[0ULL], &t48[0ULL], &t49[0ULL]);
  t510[0] = hd_efOut[0];
  t716 = t510[0ULL];
  t518[0ULL] = t709;
  tlu2_linear_linear_prelookup(&id_efOut.mField0[0ULL], &id_efOut.mField1[0ULL],
    &id_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t518[0ULL],
    &t146[0ULL], &t49[0ULL]);
  t38 = id_efOut;
  tlu2_2d_linear_linear_value(&jd_efOut[0ULL], &t38.mField0[0ULL], &t38.mField2
    [0ULL], &t39.mField0[0ULL], &t39.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField21, &t146[0ULL], &t48[0ULL], &t49[0ULL]);
  t510[0] = jd_efOut[0];
  t710 = t510[0ULL];
  if (X[32ULL] < t749) {
    t623 = X[32ULL] / (t749 == 0.0 ? 1.0E-16 : t749) - 1.0;
  } else {
    t623 = 0.0;
  }

  t518[0ULL] = t623;
  tlu2_linear_linear_prelookup(&kd_efOut.mField0[0ULL], &kd_efOut.mField1[0ULL],
    &kd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t518[0ULL],
    &t146[0ULL], &t49[0ULL]);
  t42 = kd_efOut;
  tlu2_2d_linear_linear_value(&ld_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], &t46.mField0[0ULL], &t46.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField19, &t146[0ULL], &t48[0ULL], &t49[0ULL]);
  t510[0] = ld_efOut[0];
  t749 = t510[0ULL];
  if (X[33ULL] > t750) {
    t623 = (X[33ULL] - 4000.0) / (4000.0 - t750 == 0.0 ? 1.0E-16 : 4000.0 - t750)
      + 2.0;
  } else {
    t623 = 1.0;
  }

  t518[0ULL] = t623;
  tlu2_linear_linear_prelookup(&md_efOut.mField0[0ULL], &md_efOut.mField1[0ULL],
    &md_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t518[0ULL],
    &t146[0ULL], &t49[0ULL]);
  t29 = md_efOut;
  tlu2_2d_linear_linear_value(&nd_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], &t46.mField0[0ULL], &t46.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField21, &t146[0ULL], &t48[0ULL], &t49[0ULL]);
  t510[0] = nd_efOut[0];
  t750 = t510[0ULL];
  tlu2_2d_linear_linear_value(&od_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], &t46.mField0[0ULL], &t46.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField31, &t146[0ULL], &t48[0ULL], &t49[0ULL]);
  t510[0] = od_efOut[0];
  t623 = t510[0ULL];
  tlu2_2d_linear_linear_value(&pd_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], &t46.mField0[0ULL], &t46.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField32, &t146[0ULL], &t48[0ULL], &t49[0ULL]);
  t510[0] = pd_efOut[0];
  Steam_Drum_mass_liq_dead = t510[0ULL];
  t647 = X[34ULL] * t623 + X[35ULL] * Steam_Drum_mass_liq_dead;
  t623 = t749 * (X[34ULL] * t623 / (t647 == 0.0 ? 1.0E-16 : t647) * 3.0) + t750 *
    (X[35ULL] * Steam_Drum_mass_liq_dead / (t647 == 0.0 ? 1.0E-16 : t647) * 3.0);
  tlu2_2d_linear_linear_value(&qd_efOut[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], &t46.mField0[0ULL], &t46.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t77[0ULL], &t48[0ULL], &t49[0ULL]);
  t510[0] = qd_efOut[0];
  t749 = t510[0ULL];
  tlu2_2d_linear_linear_value(&rd_efOut[0ULL], &t25.mField0[0ULL], &t25.mField2
    [0ULL], &t46.mField0[0ULL], &t46.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t77[0ULL], &t48[0ULL], &t49[0ULL]);
  t510[0] = rd_efOut[0];
  t750 = t510[0ULL];
  Steam_Drum_mass_liq_dead = 0.00030000000000000003 / (t749 == 0.0 ? 1.0E-16 :
    t749);
  t749 = 0.00030000000000000003 / (t750 == 0.0 ? 1.0E-16 : t750);
  t518[0ULL] = X[36ULL];
  tlu2_linear_linear_prelookup(&sd_efOut.mField0[0ULL], &sd_efOut.mField1[0ULL],
    &sd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t518[0ULL],
    &t55[0ULL], &t49[0ULL]);
  t39 = sd_efOut;
  t518[0ULL] = X[37ULL];
  tlu2_linear_linear_prelookup(&td_efOut.mField0[0ULL], &td_efOut.mField1[0ULL],
    &td_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t518[0ULL],
    &t58[0ULL], &t49[0ULL]);
  t42 = td_efOut;
  tlu2_2d_linear_linear_value(&ud_efOut[0ULL], &t39.mField0[0ULL], &t39.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField11, &t55[0ULL], &t58[0ULL], &t49[0ULL]);
  t510[0] = ud_efOut[0];
  t750 = t510[0ULL];
  t518[0ULL] = X[38ULL];
  tlu2_linear_linear_prelookup(&vd_efOut.mField0[0ULL], &vd_efOut.mField1[0ULL],
    &vd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t518[0ULL],
    &t55[0ULL], &t49[0ULL]);
  t38 = vd_efOut;
  tlu2_2d_linear_linear_value(&wd_efOut[0ULL], &t38.mField0[0ULL], &t38.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField11, &t55[0ULL], &t58[0ULL], &t49[0ULL]);
  t510[0] = wd_efOut[0];
  Steam_Generator_thermal_liquid_DuDp_in = t510[0ULL];
  t518[0ULL] = X[39ULL];
  tlu2_linear_linear_prelookup(&xd_efOut.mField0[0ULL], &xd_efOut.mField1[0ULL],
    &xd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t518[0ULL],
    &t48[0ULL], &t49[0ULL]);
  t35 = xd_efOut;
  tlu2_1d_linear_linear_value(&yd_efOut[0ULL], &t35.mField0[0ULL], &t35.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t48[0ULL], &t49[0ULL]);
  t510[0] = yd_efOut[0];
  t626 = t510[0ULL];
  tlu2_1d_linear_linear_value(&ae_efOut[0ULL], &t35.mField0[0ULL], &t35.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t48[0ULL], &t49[0ULL]);
  t510[0] = ae_efOut[0];
  t627 = t510[0ULL];
  if (X[40ULL] <= t626) {
    t628 = X[40ULL] / (t626 == 0.0 ? 1.0E-16 : t626) - 1.0;
  } else if (X[40ULL] >= t627) {
    t628 = (X[40ULL] - 4000.0) / (4000.0 - t627 == 0.0 ? 1.0E-16 : 4000.0 - t627)
      + 2.0;
  } else {
    t457_idx_0 = t627 - t626;
    t628 = (X[40ULL] - t626) / (t457_idx_0 == 0.0 ? 1.0E-16 : t457_idx_0);
  }

  t629 = t628 < 0.0 ? t628 : 0.0;
  if (X[41ULL] <= t626) {
    t630 = X[41ULL] / (t626 == 0.0 ? 1.0E-16 : t626) - 1.0;
  } else if (X[41ULL] >= t627) {
    t630 = (X[41ULL] - 4000.0) / (4000.0 - t627 == 0.0 ? 1.0E-16 : 4000.0 - t627)
      + 2.0;
  } else {
    t686 = t627 - t626;
    t630 = (X[41ULL] - t626) / (t686 == 0.0 ? 1.0E-16 : t686);
  }

  t631 = t630 < 0.0 ? t630 : 0.0;
  t518[0ULL] = (t629 + t631) / 2.0;
  tlu2_linear_nearest_prelookup(&be_efOut.mField0[0ULL], &be_efOut.mField1[0ULL],
    &be_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t518[0ULL],
    &t77[0ULL], &t49[0ULL]);
  t29 = be_efOut;
  t518[0ULL] = X[39ULL];
  tlu2_linear_nearest_prelookup(&ce_efOut.mField0[0ULL], &ce_efOut.mField1[0ULL],
    &ce_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t518[0ULL],
    &t48[0ULL], &t49[0ULL]);
  t0 = ce_efOut;
  tlu2_2d_linear_nearest_value(&de_efOut[0ULL], &t29.mField0[0ULL],
    &t29.mField2[0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)
    (LC))->mField12, &t77[0ULL], &t48[0ULL], &t49[0ULL]);
  t510[0] = de_efOut[0];
  t632 = t510[0ULL];
  tlu2_2d_linear_nearest_value(&ee_efOut[0ULL], &t29.mField0[0ULL],
    &t29.mField2[0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)
    (LC))->mField10, &t77[0ULL], &t48[0ULL], &t49[0ULL]);
  t510[0] = ee_efOut[0];
  t633 = t510[0ULL];
  tlu2_2d_linear_nearest_value(&fe_efOut[0ULL], &t29.mField0[0ULL],
    &t29.mField2[0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)
    (LC))->mField13, &t77[0ULL], &t48[0ULL], &t49[0ULL]);
  t510[0] = fe_efOut[0];
  intrm_sf_mf_512 = t510[0ULL];
  t632 = t632 * t633 / (intrm_sf_mf_512 == 0.0 ? 1.0E-16 : intrm_sf_mf_512);
  t633 = X[43ULL] >= 0.0 ? X[43ULL] : 0.0;
  intrm_sf_mf_512 = X[44ULL] >= 0.0 ? X[44ULL] : 0.0;
  t690 = t633 + X[216ULL];
  t457_idx_0 = (t633 + X[216ULL]) * (1.0 - pmf_exp(-X[42ULL] / (t690 == 0.0 ?
    1.0E-16 : t690)));
  t686 = t632 * intrm_sf_mf_512 + X[216ULL];
  t635 = t457_idx_0 / (t686 == 0.0 ? 1.0E-16 : t686);
  t636 = t635 <= 15.0 ? t635 : 15.0;
  t518[0ULL] = t628;
  tlu2_linear_linear_prelookup(&ge_efOut.mField0[0ULL], &ge_efOut.mField1[0ULL],
    &ge_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t518[0ULL],
    &t77[0ULL], &t49[0ULL]);
  t29 = ge_efOut;
  tlu2_2d_linear_linear_value(&he_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t77[0ULL], &t48[0ULL], &t49[0ULL]);
  t510[0] = he_efOut[0];
  t635 = t510[0ULL];
  t637 = X[39ULL] * t635 * 100.0 + X[40ULL];
  tlu2_2d_linear_linear_value(&ie_efOut[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t77[0ULL], &t48[0ULL], &t49[0ULL]);
  t510[0] = ie_efOut[0];
  t699 = t510[0ULL];
  t639 = X[39ULL] * t699 * 100.0 + t626;
  t626 = (t639 - t637) / (t632 == 0.0 ? 1.0E-16 : t632);
  t640 = (1.0 - pmf_exp(-t636)) * X[215ULL];
  intrm_sf_mf_513 = (t640 > t626 * 1000.0);
  intrm_sf_mf_515 = (t637 < t639);
  intrm_sf_mf_517 = (t637 > t639);
  tlu2_2d_linear_linear_value(&je_efOut[0ULL], &t25.mField0[0ULL], &t25.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t77[0ULL], &t48[0ULL], &t49[0ULL]);
  t510[0] = je_efOut[0];
  t698 = t510[0ULL];
  t642 = X[39ULL] * t698 * 100.0 + t627;
  intrm_sf_mf_518 = (t637 > t642);
  intrm_sf_mf_521 = (X[215ULL] < 0.0);
  intrm_sf_mf_522 = (X[215ULL] > 0.0);
  if (intrm_sf_mf_522) {
    if (intrm_sf_mf_515) {
      if (intrm_sf_mf_513) {
        t457_idx_0 = -pmf_log((X[215ULL] - t626 * 1000.0) / (X[215ULL] == 0.0 ?
          1.0E-16 : X[215ULL]));
        t627 = t457_idx_0 / (t636 == 0.0 ? 1.0E-16 : t636);
      } else {
        t627 = 1.0;
      }
    } else {
      t627 = 0.0;
    }
  } else {
    t627 = intrm_sf_mf_521 ? intrm_sf_mf_518 ? 0.0 : (real_T)!intrm_sf_mf_517 :
      (real_T)intrm_sf_mf_515;
  }

  t643 = t628 > 1.0 ? t628 : 1.0;
  t644 = t630 > 1.0 ? t630 : 1.0;
  t518[0ULL] = (t643 + t644) / 2.0;
  tlu2_linear_nearest_prelookup(&ke_efOut.mField0[0ULL], &ke_efOut.mField1[0ULL],
    &ke_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t518[0ULL],
    &t77[0ULL], &t49[0ULL]);
  t25 = ke_efOut;
  tlu2_2d_linear_nearest_value(&le_efOut[0ULL], &t25.mField0[0ULL],
    &t25.mField2[0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)
    (LC))->mField12, &t77[0ULL], &t48[0ULL], &t49[0ULL]);
  t510[0] = le_efOut[0];
  t645 = t510[0ULL];
  tlu2_2d_linear_nearest_value(&me_efOut[0ULL], &t25.mField0[0ULL],
    &t25.mField2[0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)
    (LC))->mField10, &t77[0ULL], &t48[0ULL], &t49[0ULL]);
  t510[0] = me_efOut[0];
  t646 = t510[0ULL];
  tlu2_2d_linear_nearest_value(&ne_efOut[0ULL], &t25.mField0[0ULL],
    &t25.mField2[0ULL], &t0.mField0[0ULL], &t0.mField2[0ULL], ((_NeDynamicSystem*)
    (LC))->mField13, &t77[0ULL], &t48[0ULL], &t49[0ULL]);
  t510[0] = ne_efOut[0];
  t647 = t510[0ULL];
  t645 = t645 * t646 / (t647 == 0.0 ? 1.0E-16 : t647);
  t678 = (t633 + X[216ULL]) * (1.0 - pmf_exp(-X[45ULL] / (t690 == 0.0 ? 1.0E-16 :
    t690)));
  t457_idx_0 = X[216ULL] + t645 * intrm_sf_mf_512;
  intrm_sf_mf_512 = t678 / (t457_idx_0 == 0.0 ? 1.0E-16 : t457_idx_0);
  t646 = intrm_sf_mf_512 <= 15.0 ? intrm_sf_mf_512 : 15.0;
  intrm_sf_mf_512 = (t642 - t637) / (t645 == 0.0 ? 1.0E-16 : t645);
  intrm_sf_mf_514 = (t637 < t642);
  t647 = (1.0 - pmf_exp(-t646)) * X[215ULL];
  intrm_sf_mf_532 = (t647 < intrm_sf_mf_512 * 1000.0);
  intrm_sf_mf_519 = (t637 <= t642);
  if (intrm_sf_mf_522) {
    t648 = intrm_sf_mf_515 ? 0.0 : (real_T)!intrm_sf_mf_514;
  } else if (intrm_sf_mf_521) {
    if (intrm_sf_mf_518) {
      if (intrm_sf_mf_532) {
        t457_idx_0 = -pmf_log((X[215ULL] - intrm_sf_mf_512 * 1000.0) / (X[215ULL]
          == 0.0 ? 1.0E-16 : X[215ULL]));
        t648 = t457_idx_0 / (t646 == 0.0 ? 1.0E-16 : t646);
      } else {
        t648 = 1.0;
      }
    } else {
      t648 = 0.0;
    }
  } else {
    t648 = intrm_sf_mf_515 ? 0.0 : (real_T)!intrm_sf_mf_519;
  }

  t650 = (1.0 - t627) - t648;
  t678 = (t633 + X[216ULL]) * (1.0 - pmf_exp(-X[46ULL] / (t690 == 0.0 ? 1.0E-16 :
    t690)));
  t690 = t686 / (t632 == 0.0 ? 1.0E-16 : t632);
  t627 = t678 / (t690 == 0.0 ? 1.0E-16 : t690);
  if (intrm_sf_mf_522) {
    if (intrm_sf_mf_515) {
      t633 = X[215ULL] - t626 * 1000.0;
    } else if (intrm_sf_mf_514) {
      t633 = X[215ULL];
    } else {
      t633 = X[215ULL] - intrm_sf_mf_512 * 1000.0;
    }
  } else if (intrm_sf_mf_521) {
    if (intrm_sf_mf_518) {
      t633 = X[215ULL] - intrm_sf_mf_512 * 1000.0;
    } else if (intrm_sf_mf_517) {
      t633 = X[215ULL];
    } else {
      t633 = X[215ULL] - t626 * 1000.0;
    }
  } else if (intrm_sf_mf_515) {
    t633 = t626 * 1000.0 + X[215ULL];
  } else if (intrm_sf_mf_519) {
    t633 = X[215ULL];
  } else {
    t633 = intrm_sf_mf_512 * 1000.0 + X[215ULL];
  }

  if (intrm_sf_mf_522) {
    if (intrm_sf_mf_515) {
      if (intrm_sf_mf_513) {
        t648 = t639;
      } else {
        t648 = t632 * t640 * 0.001 + t637;
      }
    } else if (intrm_sf_mf_514) {
      t648 = t637;
    } else {
      t648 = t645 * t647 * 0.001 + t637;
    }
  } else if (intrm_sf_mf_521) {
    if (intrm_sf_mf_518) {
      if (intrm_sf_mf_532) {
        t648 = t642;
      } else {
        t648 = t645 * t647 * 0.001 + t637;
      }
    } else if (intrm_sf_mf_517) {
      t648 = t637;
    } else {
      t648 = t632 * t640 * 0.001 + t637;
    }
  } else if (intrm_sf_mf_515) {
    t648 = t632 * t640 * 0.001 + t637;
  } else if (intrm_sf_mf_519) {
    t648 = t637;
  } else {
    t648 = t645 * t647 * 0.001 + t637;
  }

  t678 = t627 * t633 * t650;
  intrm_sf_mf_513 = (t678 * 0.001 > t642 - t648);
  intrm_sf_mf_532 = (t648 < t642);
  intrm_sf_mf_533 = (t678 * 0.001 < t639 - t648);
  intrm_sf_mf_534 = (t648 > t639);
  intrm_sf_mf_500 = (t628 >= 1.0);
  intrm_sf_mf_501 = (t628 <= 0.0);
  intrm_sf_mf_502 = (t630 >= 1.0);
  intrm_sf_mf_503 = (t630 <= 0.0);
  tlu2_2d_linear_linear_value(&oe_efOut[0ULL], &t39.mField0[0ULL], &t39.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField17, &t55[0ULL], &t58[0ULL], &t49[0ULL]);
  t510[0] = oe_efOut[0];
  t628 = t510[0ULL];
  tlu2_2d_linear_linear_value(&pe_efOut[0ULL], &t39.mField0[0ULL], &t39.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t55[0ULL], &t58[0ULL], &t49[0ULL]);
  t510[0] = pe_efOut[0];
  t648 = t510[0ULL];
  t650 = -t648 * t628;
  tlu2_2d_linear_linear_value(&qe_efOut[0ULL], &t38.mField0[0ULL], &t38.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField17, &t55[0ULL], &t58[0ULL], &t49[0ULL]);
  t510[0] = qe_efOut[0];
  t686 = t510[0ULL];
  tlu2_2d_linear_linear_value(&re_efOut[0ULL], &t38.mField0[0ULL], &t38.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t55[0ULL], &t58[0ULL], &t49[0ULL]);
  t510[0] = re_efOut[0];
  t690 = t510[0ULL];
  t678 = -t690 * t686;
  tlu2_2d_linear_linear_value(&se_efOut[0ULL], &t39.mField0[0ULL], &t39.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField18, &t55[0ULL], &t58[0ULL], &t49[0ULL]);
  t510[0] = se_efOut[0];
  t457_idx_0 = t510[0ULL];
  t655 = t648 / (t457_idx_0 == 0.0 ? 1.0E-16 : t457_idx_0);
  tlu2_2d_linear_linear_value(&te_efOut[0ULL], &t38.mField0[0ULL], &t38.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField18, &t55[0ULL], &t58[0ULL], &t49[0ULL]);
  t510[0] = te_efOut[0];
  t694 = t510[0ULL];
  t657 = t690 / (t694 == 0.0 ? 1.0E-16 : t694);
  t658 = t750 - t628 * X[37ULL] / (t648 == 0.0 ? 1.0E-16 : t648) * 100000.0;
  t750 = Steam_Generator_thermal_liquid_DuDp_in - t686 * X[37ULL] / (t690 == 0.0
    ? 1.0E-16 : t690) * 100000.0;
  Steam_Generator_thermal_liquid_DuDp_in = (X[37ULL] / (t457_idx_0 == 0.0 ?
    1.0E-16 : t457_idx_0) - X[36ULL] * t628) / (t648 == 0.0 ? 1.0E-16 : t648);
  t628 = (X[37ULL] / (t694 == 0.0 ? 1.0E-16 : t694) - X[38ULL] * t686) / (t690 ==
    0.0 ? 1.0E-16 : t690);
  t648 = (t648 + t690) / 2.0 * 0.36562301792487523;
  t518[0ULL] = t629;
  tlu2_linear_linear_prelookup(&ue_efOut.mField0[0ULL], &ue_efOut.mField1[0ULL],
    &ue_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t518[0ULL],
    &t146[0ULL], &t49[0ULL]);
  t0 = ue_efOut;
  tlu2_2d_linear_linear_value(&ve_efOut[0ULL], &t0.mField0[0ULL], &t0.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField19, &t146[0ULL], &t48[0ULL], &t49[0ULL]);
  t510[0] = ve_efOut[0];
  t629 = t510[0ULL];
  t518[0ULL] = t643;
  tlu2_linear_linear_prelookup(&we_efOut.mField0[0ULL], &we_efOut.mField1[0ULL],
    &we_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t518[0ULL],
    &t146[0ULL], &t49[0ULL]);
  t29 = we_efOut;
  tlu2_2d_linear_linear_value(&xe_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField21, &t146[0ULL], &t48[0ULL], &t49[0ULL]);
  t510[0] = xe_efOut[0];
  t643 = t510[0ULL];
  t518[0ULL] = t631;
  tlu2_linear_linear_prelookup(&ye_efOut.mField0[0ULL], &ye_efOut.mField1[0ULL],
    &ye_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t518[0ULL],
    &t146[0ULL], &t49[0ULL]);
  t29 = ye_efOut;
  tlu2_2d_linear_linear_value(&af_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField19, &t146[0ULL], &t48[0ULL], &t49[0ULL]);
  t510[0] = af_efOut[0];
  t631 = t510[0ULL];
  t629 = (t629 + t631) / 2.0;
  tlu2_2d_linear_linear_value(&bf_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField19, &t146[0ULL], &t48[0ULL], &t49[0ULL]);
  t510[0] = bf_efOut[0];
  t631 = t510[0ULL];
  tlu2_2d_linear_linear_value(&cf_efOut[0ULL], &t41.mField0[0ULL], &t41.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField21, &t146[0ULL], &t48[0ULL], &t49[0ULL]);
  t510[0] = cf_efOut[0];
  t686 = t510[0ULL];
  t690 = intrm_sf_mf_501 ? t699 : intrm_sf_mf_500 ? t698 : t635;
  t518[0ULL] = t630;
  tlu2_linear_linear_prelookup(&df_efOut.mField0[0ULL], &df_efOut.mField1[0ULL],
    &df_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t518[0ULL],
    &t77[0ULL], &t49[0ULL]);
  t0 = df_efOut;
  tlu2_2d_linear_linear_value(&ef_efOut[0ULL], &t0.mField0[0ULL], &t0.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t77[0ULL], &t48[0ULL], &t49[0ULL]);
  t510[0] = ef_efOut[0];
  t630 = t510[0ULL];
  t635 = intrm_sf_mf_503 ? t699 : intrm_sf_mf_502 ? t698 : t630;
  t630 = t690 <= t635 ? t690 : t635;
  if (t635 / (t690 == 0.0 ? 1.0E-16 : t690) >= 1.000001) {
    t457_idx_0 = t635 / (t690 == 0.0 ? 1.0E-16 : t690);
  } else if (t690 / (t635 == 0.0 ? 1.0E-16 : t635) >= 1.000001) {
    t457_idx_0 = t690 / (t635 == 0.0 ? 1.0E-16 : t635);
  } else {
    t457_idx_0 = 1.000001;
  }

  t690 = pmf_log(t457_idx_0);
  t694 = t457_idx_0 - 1.0;
  t457_idx_0 = 1.000001 / (t699 == 0.0 ? 1.0E-16 : t699) - 1.0 / (t698 == 0.0 ?
    1.0E-16 : t698);
  t630 = (1.000001 / (t699 == 0.0 ? 1.0E-16 : t699) - t690 / (t694 == 0.0 ?
           1.0E-16 : t694) / (t630 == 0.0 ? 1.0E-16 : t630)) / (t457_idx_0 ==
    0.0 ? 1.0E-16 : t457_idx_0);
  t635 = (1.0 - t630) * t631 + t686 * t630;
  t518[0ULL] = t644;
  tlu2_linear_linear_prelookup(&ff_efOut.mField0[0ULL], &ff_efOut.mField1[0ULL],
    &ff_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t518[0ULL],
    &t146[0ULL], &t49[0ULL]);
  t29 = ff_efOut;
  tlu2_2d_linear_linear_value(&gf_efOut[0ULL], &t29.mField0[0ULL], &t29.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField21, &t146[0ULL], &t48[0ULL], &t49[0ULL]);
  t518[0] = gf_efOut[0];
  t630 = t518[0ULL];
  t631 = t586 / 0.1;
  t699 = t631 * t631 * 3.0 - t631 * t631 * t631 * 2.0;
  if (t586 <= 0.0) {
    t631 = intrm_sf_mf_127;
  } else if (t586 >= 0.1) {
    t631 = t583;
  } else {
    t631 = (1.0 - t699) * intrm_sf_mf_127 + t583 * t699;
  }

  intrm_sf_mf_127 = (t586 - 0.9) / 0.099999999999999978;
  t583 = intrm_sf_mf_127 * intrm_sf_mf_127 * 3.0 - intrm_sf_mf_127 *
    intrm_sf_mf_127 * intrm_sf_mf_127 * 2.0;
  if (t586 <= 0.9) {
    intrm_sf_mf_127 = t631;
  } else if (t586 >= 1.0) {
    intrm_sf_mf_127 = t561;
  } else {
    intrm_sf_mf_127 = (1.0 - t583) * t631 + t561 * t583;
  }

  t583 = t709 / 0.1;
  t586 = t583 * t583 * 3.0 - t583 * t583 * t583 * 2.0;
  if (t709 <= 0.0) {
    t583 = t712;
  } else if (t709 >= 0.1) {
    t583 = t716;
  } else {
    t583 = (1.0 - t586) * t712 + t716 * t586;
  }

  t586 = (t709 - 0.9) / 0.099999999999999978;
  t561 = t586 * t586 * 3.0 - t586 * t586 * t586 * 2.0;
  if (t709 <= 0.9) {
    t586 = t583;
  } else if (t709 >= 1.0) {
    t586 = t710;
  } else {
    t586 = (1.0 - t561) * t583 + t710 * t561;
  }

  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (M[101ULL] != 0) {
        t716 = X[97ULL] - t553 * zc_int62 * 1000.0;
        t709 = pmf_log((t578 * zc_int62 * 1000.0 + X[97ULL]) / (t716 == 0.0 ?
          1.0E-16 : t716));
        t583 = t709 / (t551 == 0.0 ? 1.0E-16 : t551);
      } else {
        t583 = 1.0;
      }
    } else {
      t583 = 0.0;
    }
  } else {
    t583 = intrm_sf_mf_57 ? intrm_sf_mf_54 ? 0.0 : (real_T)!intrm_sf_mf_53 :
      (real_T)intrm_sf_mf_51;
  }

  if (intrm_sf_mf_58) {
    t551 = intrm_sf_mf_51 ? 0.0 : (real_T)!intrm_sf_mf_50;
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (M[102ULL] != 0) {
        t716 = X[97ULL] - t565 * t591 * 1000.0;
        t709 = pmf_log((t593 * t591 * 1000.0 + X[97ULL]) / (t716 == 0.0 ?
          1.0E-16 : t716));
        t551 = t709 / (t548 == 0.0 ? 1.0E-16 : t548);
      } else {
        t551 = 1.0;
      }
    } else {
      t551 = 0.0;
    }
  } else {
    t551 = intrm_sf_mf_51 ? 0.0 : (real_T)!intrm_sf_mf_55;
  }

  t548 = (1.0 - t583) - t551;
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (M[101ULL] != 0) {
        t553 = (t576 - 1.0) * zc_int62 * 1000.0 + X[97ULL];
      } else {
        t553 = (t576 * t559 + X[97ULL]) - zc_int62 * 1000.0;
      }
    } else if (intrm_sf_mf_50) {
      t553 = X[97ULL];
    } else {
      t553 = (t550 * t594 + X[97ULL]) - t591 * 1000.0;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (M[102ULL] != 0) {
        t553 = (t550 - 1.0) * t591 * 1000.0 + X[97ULL];
      } else {
        t553 = (t550 * t594 + X[97ULL]) - t591 * 1000.0;
      }
    } else if (intrm_sf_mf_53) {
      t553 = X[97ULL];
    } else {
      t553 = (t576 * t559 + X[97ULL]) - zc_int62 * 1000.0;
    }
  } else if (intrm_sf_mf_51) {
    t553 = (t576 * t559 + X[97ULL]) - zc_int62 * 1000.0;
  } else if (intrm_sf_mf_55) {
    t553 = X[97ULL];
  } else {
    t553 = (t550 * t594 + X[97ULL]) - t591 * 1000.0;
  }

  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (M[101ULL] != 0) {
        zc_int62 = t584;
      } else {
        zc_int62 = zc_int55 * t559 * 0.001 + t580;
      }
    } else if (intrm_sf_mf_50) {
      zc_int62 = t580;
    } else {
      zc_int62 = t590 * t594 * 0.001 + t580;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (M[102ULL] != 0) {
        zc_int62 = t587;
      } else {
        zc_int62 = t590 * t594 * 0.001 + t580;
      }
    } else if (intrm_sf_mf_53) {
      zc_int62 = t580;
    } else {
      zc_int62 = zc_int55 * t559 * 0.001 + t580;
    }
  } else if (intrm_sf_mf_51) {
    zc_int62 = zc_int55 * t559 * 0.001 + t580;
  } else if (intrm_sf_mf_55) {
    zc_int62 = t580;
  } else {
    zc_int62 = t590 * t594 * 0.001 + t580;
  }

  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_68) {
      if (intrm_sf_mf_67) {
        t712 = zc_int12 * (t587 - zc_int62) * 1000.0 + t553;
        t716 = -pmf_log(t553 / (t712 == 0.0 ? 1.0E-16 : t712));
        zc_int62 = t716 / (t714 == 0.0 ? 1.0E-16 : t714);
      } else {
        zc_int62 = t548;
      }
    } else {
      zc_int62 = 0.0;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_70) {
      if (intrm_sf_mf_69) {
        t709 = zc_int12 * (t584 - zc_int62) * 1000.0 + t553;
        t710 = -pmf_log(t553 / (t709 == 0.0 ? 1.0E-16 : t709));
        zc_int62 = t710 / (t714 == 0.0 ? 1.0E-16 : t714);
      } else {
        zc_int62 = t548;
      }
    } else {
      zc_int62 = 0.0;
    }
  } else {
    zc_int62 = t548;
  }

  zc_int12 = t548 - zc_int62;
  t548 = t583 + (intrm_sf_mf_58 ? 0.0 : intrm_sf_mf_57 ? zc_int12 : 0.0);
  zc_int12 = t551 + (intrm_sf_mf_58 ? zc_int12 : 0.0);
  if (intrm_sf_mf_522) {
    if (intrm_sf_mf_515) {
      if (M[111ULL] != 0) {
        t716 = -pmf_log((X[215ULL] - t626 * 1000.0) / (X[215ULL] == 0.0 ?
          1.0E-16 : X[215ULL]));
        zc_int55 = t716 / (t636 == 0.0 ? 1.0E-16 : t636);
      } else {
        zc_int55 = 1.0;
      }
    } else {
      zc_int55 = 0.0;
    }
  } else {
    zc_int55 = intrm_sf_mf_521 ? intrm_sf_mf_518 ? 0.0 : (real_T)
      !intrm_sf_mf_517 : (real_T)intrm_sf_mf_515;
  }

  if (intrm_sf_mf_522) {
    t550 = intrm_sf_mf_515 ? 0.0 : (real_T)!intrm_sf_mf_514;
  } else if (intrm_sf_mf_521) {
    if (intrm_sf_mf_518) {
      if (M[112ULL] != 0) {
        t716 = -pmf_log((X[215ULL] - intrm_sf_mf_512 * 1000.0) / (X[215ULL] ==
          0.0 ? 1.0E-16 : X[215ULL]));
        t550 = t716 / (t646 == 0.0 ? 1.0E-16 : t646);
      } else {
        t550 = 1.0;
      }
    } else {
      t550 = 0.0;
    }
  } else {
    t550 = intrm_sf_mf_515 ? 0.0 : (real_T)!intrm_sf_mf_519;
  }

  t551 = (1.0 - zc_int55) - t550;
  if (intrm_sf_mf_522) {
    if (intrm_sf_mf_515) {
      if (M[111ULL] != 0) {
        t576 = t639;
      } else {
        t576 = t632 * t640 * 0.001 + t637;
      }
    } else if (intrm_sf_mf_514) {
      t576 = t637;
    } else {
      t576 = t645 * t647 * 0.001 + t637;
    }
  } else if (intrm_sf_mf_521) {
    if (intrm_sf_mf_518) {
      if (M[112ULL] != 0) {
        t576 = t642;
      } else {
        t576 = t645 * t647 * 0.001 + t637;
      }
    } else if (intrm_sf_mf_517) {
      t576 = t637;
    } else {
      t576 = t632 * t640 * 0.001 + t637;
    }
  } else if (intrm_sf_mf_515) {
    t576 = t632 * t640 * 0.001 + t637;
  } else if (intrm_sf_mf_519) {
    t576 = t637;
  } else {
    t576 = t645 * t647 * 0.001 + t637;
  }

  if (intrm_sf_mf_522) {
    if (intrm_sf_mf_532) {
      if (intrm_sf_mf_513) {
        t576 = (t642 - t576) / (t633 == 0.0 ? 1.0E-16 : t633) / (t627 == 0.0 ?
          1.0E-16 : t627) * 1000.0;
      } else {
        t576 = t551;
      }
    } else {
      t576 = 0.0;
    }
  } else if (intrm_sf_mf_521) {
    if (intrm_sf_mf_534) {
      if (intrm_sf_mf_533) {
        t576 = (t639 - t576) / (t633 == 0.0 ? 1.0E-16 : t633) / (t627 == 0.0 ?
          1.0E-16 : t627) * 1000.0;
      } else {
        t576 = t551;
      }
    } else {
      t576 = 0.0;
    }
  } else {
    t576 = t551;
  }

  t553 = t551 - t576;
  t578 = zc_int55 + (intrm_sf_mf_522 ? 0.0 : intrm_sf_mf_521 ? t553 : 0.0);
  t546 = t546 * t739 * 100.0 / 387.46788154112568;
  t748 = t748 * t739 * 0.001 / 387.46788154112568;
  t750 = t750 * t648 * 0.001 / 1438.6494736621585;
  out.mX[0] = t623 * 100000.0 / 108.71896977918857;
  out.mX[1] = 0.1;
  out.mX[2] = 0.1;
  out.mX[3] = t737 / 2.0 * 0.092765046668672663;
  out.mX[4] = t604 * t739 / 5.0 * 0.001 / 83.887262122266435;
  out.mX[5] = (t601 + t603) / 2.0 * 0.092765046668672663;
  out.mX[6] = t546;
  out.mX[7] = t741 * t739 * 100000.0 / 5.0 * 0.001 / 83.887262122266435;
  out.mX[8] = t599 / 2.0 * 0.092765046668672663;
  out.mX[9] = t748;
  out.mX[10] = ((t545 * t548 + t544 * zc_int12) + t579 * zc_int62) *
    5183.627878423159;
  out.mX[11] = X[14ULL] / 5.0 / 5.9977547821489274;
  out.mX[12] = X[14ULL] / 761.01370552229014;
  out.mX[13] = 0.00047789058976114489;
  out.mX[14] = 1.0;
  out.mX[15] = 0.07625409237079242;
  out.mX[16] = 1.0;
  out.mX[17] = 0.082244075438587069;
  out.mX[18] = 1.0;
  out.mX[19] = intrm_sf_mf_127 * 5000.0 / 10.0;
  out.mX[20] = X[17ULL] / 2330.7500544624327;
  out.mX[21] = 1.0;
  out.mX[22] = -1.0;
  out.mX[23] = 1.0 / (Condenser_thermal_liquid_alpha_out == 0.0 ? 1.0E-16 :
                      Condenser_thermal_liquid_alpha_out) * Pipe_TL_rho_I *
    0.01368;
  out.mX[24] = t598 * 100.0 / 16.167885969318124;
  out.mX[25] = -t562 * Pipe_TL_rho_I * 0.01368;
  out.mX[26] = t602 * 0.001 / 16.167885969318124;
  out.mX[27] = 1.0 / (t606 == 0.0 ? 1.0E-16 : t606) * t610 * 0.02736;
  out.mX[28] = t609 * 100.0 / 32.335771938636249;
  out.mX[29] = -t605 * t610 * 0.02736;
  out.mX[30] = t612 * 0.001 / 32.335771938636249;
  out.mX[31] = 1.0 / (t614 == 0.0 ? 1.0E-16 : t614) * t616 * 0.02736;
  out.mX[32] = t615 * 100.0 / 32.335771938636249;
  out.mX[33] = -t613 * t616 * 0.02736;
  out.mX[34] = t618 * 0.001 / 32.335771938636249;
  out.mX[35] = t586 * 636.74739754068094 / 10.0;
  out.mX[36] = X[27ULL] / 985.665155301639;
  out.mX[37] = 1.0;
  out.mX[38] = 0.1;
  out.mX[39] = 0.1;
  out.mX[40] = 0.1;
  out.mX[41] = 0.1;
  out.mX[42] = (X[34ULL] + Steam_Drum_mass_liq_dead) / 34331.165013271377;
  out.mX[43] = (X[35ULL] + t749) / 4127.146978345314;
  out.mX[44] = 0.050216556016482658;
  out.mX[45] = 0.050216556016482658;
  out.mX[46] = t650 / 2.0 * 0.36562301792487523;
  out.mX[47] = t658 * t648 / 5.0 * 0.001 / 1317.9092866222509;
  out.mX[48] = (t655 + t657) / 2.0 * 0.36562301792487523;
  out.mX[49] = t628 * t648 * 100.0 / 1438.6494736621585;
  out.mX[50] = Steam_Generator_thermal_liquid_DuDp_in * t648 * 100000.0 / 5.0 *
    0.001 / 1317.9092866222509;
  out.mX[51] = t678 / 2.0 * 0.36562301792487523;
  out.mX[52] = t750;
  out.mX[53] = ((t629 * t578 + (t643 + t630) / 2.0 * (t550 + (intrm_sf_mf_522 ?
    t553 : 0.0))) + t635 * t576) * 90811.662642829964;
  out.mX[54] = X[47ULL] / 5.0 / 100.0945849063007;
  out.mX[55] = X[47ULL] / 962.454030634806;
  out.mX[56] = 0.88156019363597726;
  out.mX[57] = 1.0;
  out.mX[58] = 1.0;
  out.mX[59] = 0.2972734946622857;
  out.mX[60] = 0.88931452148009982;
  out.mX[61] = 1.0;
  out.mX[62] = -1.0;
  out.mX[63] = -1.0;
  out.mX[64] = -0.4285270411736547;
  out.mX[65] = -0.0934007881994691;
  out.mX[66] = -0.11201783719868762;
  out.mX[67] = -0.88419412828830757;
  out.mX[68] = -0.88419412828830757;
  out.mX[69] = 1.0;
  out.mX[70] = 1.0;
  out.mX[71] = 1.0;
  out.mX[72] = 1.0;
  out.mX[73] = 1.0;
  out.mX[74] = 1.0;
  (void)LC;
  (void)t752;
  return 0;
}
