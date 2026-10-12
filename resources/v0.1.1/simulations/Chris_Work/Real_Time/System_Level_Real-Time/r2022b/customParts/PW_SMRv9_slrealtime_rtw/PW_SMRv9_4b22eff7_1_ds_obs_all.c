/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv9/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_sys_struct.h"
#include "PW_SMRv9_4b22eff7_1_ds_obs_all.h"
#include "PW_SMRv9_4b22eff7_1_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_externals.h"
#include "PW_SMRv9_4b22eff7_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv9_4b22eff7_1_ds_obs_all(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t824, NeDsMethodOutput *t825)
{
  ETTS0 ae_efOut;
  ETTS0 bd_efOut;
  ETTS0 cb_efOut;
  ETTS0 d_efOut;
  ETTS0 dd_efOut;
  ETTS0 ee_efOut;
  ETTS0 efOut;
  ETTS0 fb_efOut;
  ETTS0 fc_efOut;
  ETTS0 fd_efOut;
  ETTS0 g_efOut;
  ETTS0 ib_efOut;
  ETTS0 ic_efOut;
  ETTS0 id_efOut;
  ETTS0 j_efOut;
  ETTS0 jd_efOut;
  ETTS0 k_efOut;
  ETTS0 kb_efOut;
  ETTS0 kc_efOut;
  ETTS0 mb_efOut;
  ETTS0 nd_efOut;
  ETTS0 o_efOut;
  ETTS0 pb_efOut;
  ETTS0 q_efOut;
  ETTS0 qc_efOut;
  ETTS0 rd_efOut;
  ETTS0 s_efOut;
  ETTS0 t18;
  ETTS0 t19;
  ETTS0 t21;
  ETTS0 t24;
  ETTS0 t27;
  ETTS0 t30;
  ETTS0 t32;
  ETTS0 t35;
  ETTS0 t37;
  ETTS0 t38;
  ETTS0 t8;
  ETTS0 t9;
  ETTS0 tb_efOut;
  ETTS0 tc_efOut;
  ETTS0 u_efOut;
  ETTS0 vc_efOut;
  ETTS0 vd_efOut;
  ETTS0 xb_efOut;
  ETTS0 y_efOut;
  PmRealVector out;
  real_T t343[1347];
  real_T X[250];
  real_T t485[2];
  real_T ab_efOut[1];
  real_T ac_efOut[1];
  real_T ad_efOut[1];
  real_T b_efOut[1];
  real_T bb_efOut[1];
  real_T bc_efOut[1];
  real_T be_efOut[1];
  real_T c_efOut[1];
  real_T cc_efOut[1];
  real_T cd_efOut[1];
  real_T ce_efOut[1];
  real_T db_efOut[1];
  real_T dc_efOut[1];
  real_T de_efOut[1];
  real_T e_efOut[1];
  real_T eb_efOut[1];
  real_T ec_efOut[1];
  real_T ed_efOut[1];
  real_T f_efOut[1];
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
  real_T i_efOut[1];
  real_T jb_efOut[1];
  real_T jc_efOut[1];
  real_T kd_efOut[1];
  real_T l_efOut[1];
  real_T lb_efOut[1];
  real_T lc_efOut[1];
  real_T ld_efOut[1];
  real_T m_efOut[1];
  real_T mc_efOut[1];
  real_T md_efOut[1];
  real_T n_efOut[1];
  real_T nb_efOut[1];
  real_T nc_efOut[1];
  real_T ob_efOut[1];
  real_T oc_efOut[1];
  real_T od_efOut[1];
  real_T p_efOut[1];
  real_T pc_efOut[1];
  real_T pd_efOut[1];
  real_T qb_efOut[1];
  real_T qd_efOut[1];
  real_T r_efOut[1];
  real_T rb_efOut[1];
  real_T rc_efOut[1];
  real_T sb_efOut[1];
  real_T sc_efOut[1];
  real_T sd_efOut[1];
  real_T t345[1];
  real_T t413[1];
  real_T t417[1];
  real_T t421[1];
  real_T t_efOut[1];
  real_T td_efOut[1];
  real_T ub_efOut[1];
  real_T uc_efOut[1];
  real_T ud_efOut[1];
  real_T v_efOut[1];
  real_T vb_efOut[1];
  real_T w_efOut[1];
  real_T wb_efOut[1];
  real_T wc_efOut[1];
  real_T wd_efOut[1];
  real_T x_efOut[1];
  real_T xc_efOut[1];
  real_T xd_efOut[1];
  real_T yb_efOut[1];
  real_T yc_efOut[1];
  real_T yd_efOut[1];
  real_T Circuit_Breaker_Three_Phase_breakerA_i;
  real_T Circuit_Breaker_Three_Phase_breakerC_i;
  real_T Controlled_Heat_Flow_Rate_Source_Q;
  real_T D_idx_0;
  real_T Power_Sensor_Three_Phase_Pm;
  real_T Preheating_Thermodynamic_Properties_Sensor_2P1_V;
  real_T Simscape_Component1_inlet_entropy;
  real_T Simscape_Component1_mdot_nozzle;
  real_T Simscape_Component1_nozzle_choked_out;
  real_T Simscape_Component1_s_g_B;
  real_T Simscape_Component_h_A;
  real_T Simscape_Component_ideal_outlet_quality;
  real_T Steam_Generator_two_phase_fluid_v_sat_liq;
  real_T Thermodynamic_Properties_Sensor_2P4_V;
  real_T U_idx_0;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T U_idx_3;
  real_T U_idx_4;
  real_T U_idx_5;
  real_T U_idx_6;
  real_T U_idx_7;
  real_T intrm_sf_mf_435;
  real_T intrm_sf_mf_510;
  real_T intrm_sf_mf_526;
  real_T t412_idx_0;
  real_T t532;
  real_T t533;
  real_T t534;
  real_T t535;
  real_T t536;
  real_T t537;
  real_T t541;
  real_T t542;
  real_T t543;
  real_T t544;
  real_T t545;
  real_T t546;
  real_T t564;
  real_T t566;
  real_T t567;
  real_T t568;
  real_T t569;
  real_T t570;
  real_T t571;
  real_T t572;
  real_T t573;
  real_T t574;
  real_T t576;
  real_T t577;
  real_T t578;
  real_T t579;
  real_T t580;
  real_T t587;
  real_T t588;
  real_T t590;
  real_T t591;
  real_T t596;
  real_T t597;
  real_T t598;
  real_T t599;
  real_T t600;
  real_T t601;
  real_T t602;
  real_T t607;
  real_T t610;
  real_T t611;
  real_T t612;
  real_T t614;
  real_T t615;
  real_T t627;
  real_T t634;
  real_T t635;
  real_T t636;
  real_T t637;
  real_T t638;
  real_T t639;
  real_T t640;
  real_T t641;
  real_T t642;
  real_T t644;
  real_T t645;
  real_T t647;
  real_T t648;
  real_T t650;
  real_T t655;
  real_T t656;
  real_T t657;
  real_T t658;
  real_T t659;
  real_T t661;
  real_T t663;
  real_T t664;
  real_T t666;
  real_T t670;
  real_T t671;
  real_T t672;
  real_T t673;
  real_T t674;
  real_T t676;
  real_T t678;
  real_T t679;
  real_T t680;
  real_T t682;
  real_T t684;
  real_T t689;
  real_T t690;
  real_T t691;
  real_T t692;
  real_T t693;
  real_T t694;
  real_T t695;
  real_T t696;
  real_T t697;
  real_T t698;
  real_T t699;
  real_T t701;
  real_T t702;
  real_T t704;
  real_T t706;
  real_T t708;
  real_T t709;
  real_T t716;
  real_T t717;
  real_T t718;
  real_T t719;
  real_T t720;
  real_T t721;
  real_T t722;
  real_T t723;
  real_T t766;
  real_T t770;
  real_T t804;
  real_T t806;
  real_T t809;
  real_T t817;
  real_T t823;
  real_T zc_int0;
  real_T zc_int19;
  real_T zc_int21;
  real_T zc_int27;
  real_T zc_int53;
  real_T zc_int9;
  size_t t250[1];
  size_t t40[1];
  size_t t41[1];
  size_t t487[1];
  size_t t61[1];
  size_t t460;
  int32_T M[163];
  int32_T Q_idx_0;
  int32_T Q_idx_1;
  int32_T Q_idx_2;
  int32_T b;
  boolean_T intrm_sf_mf_50;
  boolean_T intrm_sf_mf_51;
  boolean_T intrm_sf_mf_514;
  boolean_T intrm_sf_mf_515;
  boolean_T intrm_sf_mf_517;
  boolean_T intrm_sf_mf_518;
  boolean_T intrm_sf_mf_519;
  boolean_T intrm_sf_mf_521;
  boolean_T intrm_sf_mf_522;
  boolean_T intrm_sf_mf_53;
  boolean_T intrm_sf_mf_531;
  boolean_T intrm_sf_mf_532;
  boolean_T intrm_sf_mf_54;
  boolean_T intrm_sf_mf_55;
  boolean_T intrm_sf_mf_57;
  boolean_T intrm_sf_mf_58;
  boolean_T intrm_sf_mf_67;
  boolean_T intrm_sf_mf_68;
  boolean_T intrm_sf_mf_69;
  boolean_T intrm_sf_mf_70;
  Q_idx_0 = t824->mQ.mX[0];
  Q_idx_1 = t824->mQ.mX[1];
  Q_idx_2 = t824->mQ.mX[2];
  for (b = 0; b < 163; b++) {
    M[b] = t824->mM.mX[b];
  }

  U_idx_0 = t824->mU.mX[0];
  U_idx_1 = t824->mU.mX[1];
  U_idx_2 = t824->mU.mX[2];
  U_idx_3 = t824->mU.mX[3];
  U_idx_4 = t824->mU.mX[4];
  U_idx_5 = t824->mU.mX[5];
  U_idx_6 = t824->mU.mX[6];
  U_idx_7 = t824->mU.mX[7];
  for (b = 0; b < 250; b++) {
    X[b] = t824->mX.mX[b];
  }

  D_idx_0 = t824->mD.mX[0];
  out = t825->mOBS_ALL;
  t421[0ULL] = X[0ULL];
  t40[0] = 100ULL;
  t41[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t421[0ULL], &t40
    [0ULL], &t41[0ULL]);
  t38 = efOut;
  t485[0ULL] = t38.mField0[0ULL];
  t485[1ULL] = t38.mField0[1ULL];
  t487[0ULL] = t38.mField2[0ULL];
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t485[0ULL], &t487[0ULL],
    ((_NeDynamicSystem*)(LC))->mField7, &t40[0ULL], &t41[0ULL]);
  t417[0] = b_efOut[0];
  zc_int19 = t417[0ULL];
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t485[0ULL], &t487[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t40[0ULL], &t41[0ULL]);
  t345[0] = c_efOut[0];
  zc_int53 = t345[0ULL];
  t417[0ULL] = X[73ULL];
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t417[0ULL],
    &t40[0ULL], &t41[0ULL]);
  t35 = d_efOut;
  tlu2_1d_linear_linear_value(&e_efOut[0ULL], &t35.mField0[0ULL], &t35.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t40[0ULL], &t41[0ULL]);
  t413[0] = e_efOut[0];
  Circuit_Breaker_Three_Phase_breakerA_i = t413[0ULL];
  tlu2_1d_linear_linear_value(&f_efOut[0ULL], &t35.mField0[0ULL], &t35.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = f_efOut[0];
  if (X[74ULL] <= Circuit_Breaker_Three_Phase_breakerA_i) {
    Preheating_Thermodynamic_Properties_Sensor_2P1_V = X[74ULL] /
      (Circuit_Breaker_Three_Phase_breakerA_i == 0.0 ? 1.0E-16 :
       Circuit_Breaker_Three_Phase_breakerA_i) - 1.0;
  } else if (X[74ULL] >= t412_idx_0) {
    Preheating_Thermodynamic_Properties_Sensor_2P1_V = (X[74ULL] - 4000.0) /
      (4000.0 - t412_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t412_idx_0) + 2.0;
  } else {
    t566 = t412_idx_0 - Circuit_Breaker_Three_Phase_breakerA_i;
    Preheating_Thermodynamic_Properties_Sensor_2P1_V = (X[74ULL] -
      Circuit_Breaker_Three_Phase_breakerA_i) / (t566 == 0.0 ? 1.0E-16 : t566);
  }

  Circuit_Breaker_Three_Phase_breakerA_i = X[84ULL] * -0.0012548887771113527;
  t564 = X[85ULL] * -0.0012548887771113527;
  Circuit_Breaker_Three_Phase_breakerC_i = X[86ULL] * -0.0012548887771113527;
  t532 = X[84ULL] * 0.0012548887771113527;
  t533 = X[85ULL] * 0.0012548887771113527;
  t534 = X[86ULL] * 0.0012548887771113527;
  t345[0ULL] = X[6ULL];
  tlu2_linear_linear_prelookup(&g_efOut.mField0[0ULL], &g_efOut.mField1[0ULL],
    &g_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t345[0ULL],
    &t40[0ULL], &t41[0ULL]);
  t8 = g_efOut;
  tlu2_1d_linear_linear_value(&h_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = h_efOut[0];
  zc_int27 = t412_idx_0;
  tlu2_1d_linear_linear_value(&i_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = i_efOut[0];
  zc_int21 = t412_idx_0;
  if (X[7ULL] <= zc_int27) {
    zc_int9 = X[7ULL] / (zc_int27 == 0.0 ? 1.0E-16 : zc_int27) - 1.0;
  } else if (X[7ULL] >= t412_idx_0) {
    zc_int9 = (X[7ULL] - 4000.0) / (4000.0 - t412_idx_0 == 0.0 ? 1.0E-16 :
      4000.0 - t412_idx_0) + 2.0;
  } else {
    t571 = t412_idx_0 - zc_int27;
    zc_int9 = (X[7ULL] - zc_int27) / (t571 == 0.0 ? 1.0E-16 : t571);
  }

  if (X[8ULL] <= zc_int27) {
    t568 = X[8ULL] / (zc_int27 == 0.0 ? 1.0E-16 : zc_int27) - 1.0;
  } else if (X[8ULL] >= t412_idx_0) {
    t568 = (X[8ULL] - 4000.0) / (4000.0 - t412_idx_0 == 0.0 ? 1.0E-16 : 4000.0 -
      t412_idx_0) + 2.0;
  } else {
    t576 = t412_idx_0 - zc_int27;
    t568 = (X[8ULL] - zc_int27) / (t576 == 0.0 ? 1.0E-16 : t576);
  }

  t413[0ULL] = ((zc_int9 < 0.0 ? zc_int9 : 0.0) + (t568 < 0.0 ? t568 : 0.0)) /
    2.0;
  t61[0] = 50ULL;
  tlu2_linear_nearest_prelookup(&j_efOut.mField0[0ULL], &j_efOut.mField1[0ULL],
    &j_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t413[0ULL],
    &t61[0ULL], &t41[0ULL]);
  t30 = j_efOut;
  t413[0ULL] = X[6ULL];
  tlu2_linear_nearest_prelookup(&k_efOut.mField0[0ULL], &k_efOut.mField1[0ULL],
    &k_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t413[0ULL],
    &t40[0ULL], &t41[0ULL]);
  t18 = k_efOut;
  tlu2_2d_linear_nearest_value(&l_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField12, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = l_efOut[0];
  t567 = t412_idx_0;
  tlu2_2d_linear_nearest_value(&m_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField10, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = m_efOut[0];
  t569 = t412_idx_0;
  tlu2_2d_linear_nearest_value(&n_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField13, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = n_efOut[0];
  t567 = t567 * t569 / (t412_idx_0 == 0.0 ? 1.0E-16 : t412_idx_0);
  t569 = X[9ULL] >= 0.0 ? X[9ULL] : 0.0;
  t570 = X[10ULL] >= 0.0 ? X[10ULL] : 0.0;
  t571 = t567 * t570;
  t579 = t571 + X[98ULL];
  t580 = t569 + X[98ULL];
  t572 = t579 / (t580 == 0.0 ? 1.0E-16 : t580);
  if (t572 <= 1.0) {
    t573 = 1.0 - t572 * 0.999999;
  } else {
    t573 = 1.0E-6;
  }

  if (t572 >= 1.0) {
    t574 = t572 * 1.000001 - 1.0;
  } else {
    t574 = 1.0E-6;
  }

  if (t571 + X[98ULL] >= t569 + X[98ULL]) {
    t806 = t569 + X[98ULL];
    t817 = t571 + X[98ULL];
    t823 = (1.000001 / (t806 == 0.0 ? 1.0E-16 : t806) - 0.999999 / (t817 == 0.0 ?
             1.0E-16 : t817)) * X[11ULL];
  } else {
    t809 = t571 + X[98ULL];
    Simscape_Component1_inlet_entropy = t569 + X[98ULL];
    t823 = (1.000001 / (t809 == 0.0 ? 1.0E-16 : t809) - 0.999999 /
            (Simscape_Component1_inlet_entropy == 0.0 ? 1.0E-16 :
             Simscape_Component1_inlet_entropy)) * X[11ULL];
  }

  t571 = t823 <= 15.0 ? t823 : 15.0;
  t413[0ULL] = zc_int9;
  tlu2_linear_linear_prelookup(&o_efOut.mField0[0ULL], &o_efOut.mField1[0ULL],
    &o_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t413[0ULL],
    &t61[0ULL], &t41[0ULL]);
  t30 = o_efOut;
  tlu2_2d_linear_linear_value(&p_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = p_efOut[0];
  t576 = X[6ULL] * t412_idx_0 * 100.0 + X[7ULL];
  t413[0] = 0.0;
  tlu2_linear_linear_prelookup(&q_efOut.mField0[0ULL], &q_efOut.mField1[0ULL],
    &q_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t413[0ULL],
    &t61[0ULL], &t41[0ULL]);
  t27 = q_efOut;
  tlu2_2d_linear_linear_value(&r_efOut[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = r_efOut[0];
  t577 = X[6ULL] * t412_idx_0 * 100.0 + zc_int27;
  zc_int27 = (t577 - t576) / (t567 == 0.0 ? 1.0E-16 : t567);
  Thermodynamic_Properties_Sensor_2P4_V = (1.0 - pmf_exp(-t571)) * X[97ULL];
  t587 = pmf_exp(-t571) * t574 + t573;
  t823 = Thermodynamic_Properties_Sensor_2P4_V / (t587 == 0.0 ? 1.0E-16 : t587);
  intrm_sf_mf_67 = (t823 > zc_int27 * 1000.0);
  intrm_sf_mf_51 = (t576 < t577);
  intrm_sf_mf_53 = (t576 > t577);
  t413[0] = 1.0;
  tlu2_linear_linear_prelookup(&s_efOut.mField0[0ULL], &s_efOut.mField1[0ULL],
    &s_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t413[0ULL],
    &t61[0ULL], &t41[0ULL]);
  t24 = s_efOut;
  tlu2_2d_linear_linear_value(&t_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = t_efOut[0];
  t806 = X[6ULL] * t412_idx_0 * 100.0 + zc_int21;
  intrm_sf_mf_54 = (t576 > t806);
  intrm_sf_mf_57 = (X[97ULL] < 0.0);
  intrm_sf_mf_58 = (X[97ULL] > 0.0);
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (intrm_sf_mf_67) {
        t566 = X[97ULL] - t573 * zc_int27 * 1000.0;
        t590 = pmf_log((t574 * zc_int27 * 1000.0 + X[97ULL]) / (t566 == 0.0 ?
          1.0E-16 : t566));
        zc_int21 = t590 / (t571 == 0.0 ? 1.0E-16 : t571);
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

  t413[0ULL] = ((zc_int9 > 1.0 ? zc_int9 : 1.0) + (t568 > 1.0 ? t568 : 1.0)) /
    2.0;
  tlu2_linear_nearest_prelookup(&u_efOut.mField0[0ULL], &u_efOut.mField1[0ULL],
    &u_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t413[0ULL],
    &t61[0ULL], &t41[0ULL]);
  t30 = u_efOut;
  tlu2_2d_linear_nearest_value(&v_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField12, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = v_efOut[0];
  zc_int9 = t412_idx_0;
  tlu2_2d_linear_nearest_value(&w_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField10, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = w_efOut[0];
  t568 = t412_idx_0;
  tlu2_2d_linear_nearest_value(&x_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField13, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = x_efOut[0];
  zc_int9 = zc_int9 * t568 / (t412_idx_0 == 0.0 ? 1.0E-16 : t412_idx_0);
  t568 = zc_int9 * t570;
  t570 = (X[98ULL] + t568) / (t580 == 0.0 ? 1.0E-16 : t580);
  if (t570 <= 1.0) {
    t578 = 1.0 - t570 * 0.999999;
  } else {
    t578 = 1.0E-6;
  }

  if (t570 >= 1.0) {
    t817 = t570 * 1.000001 - 1.0;
  } else {
    t817 = 1.0E-6;
  }

  if (X[98ULL] + t568 >= t569 + X[98ULL]) {
    t566 = t569 + X[98ULL];
    t596 = X[98ULL] + t568;
    t809 = (1.000001 / (t566 == 0.0 ? 1.0E-16 : t566) - 0.999999 / (t596 == 0.0 ?
             1.0E-16 : t596)) * X[12ULL];
  } else {
    t597 = X[98ULL] + t568;
    t598 = t569 + X[98ULL];
    t809 = (1.000001 / (t597 == 0.0 ? 1.0E-16 : t597) - 0.999999 / (t598 == 0.0 ?
             1.0E-16 : t598)) * X[12ULL];
  }

  t568 = t809 <= 15.0 ? t809 : 15.0;
  t569 = (t806 - t576) / (zc_int9 == 0.0 ? 1.0E-16 : zc_int9);
  intrm_sf_mf_50 = (t576 < t806);
  t600 = (1.0 - pmf_exp(-t568)) * X[97ULL];
  t601 = pmf_exp(-t568) * t817 + t578;
  t809 = t600 / (t601 == 0.0 ? 1.0E-16 : t601);
  intrm_sf_mf_68 = (t809 < t569 * 1000.0);
  intrm_sf_mf_55 = (t576 <= t806);
  if (intrm_sf_mf_58) {
    Simscape_Component1_inlet_entropy = intrm_sf_mf_51 ? 0.0 : (real_T)
      !intrm_sf_mf_50;
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (intrm_sf_mf_68) {
        Power_Sensor_Three_Phase_Pm = X[97ULL] - t578 * t569 * 1000.0;
        t566 = pmf_log((t817 * t569 * 1000.0 + X[97ULL]) /
                       (Power_Sensor_Three_Phase_Pm == 0.0 ? 1.0E-16 :
                        Power_Sensor_Three_Phase_Pm));
        Simscape_Component1_inlet_entropy = t566 / (t568 == 0.0 ? 1.0E-16 : t568);
      } else {
        Simscape_Component1_inlet_entropy = 1.0;
      }
    } else {
      Simscape_Component1_inlet_entropy = 0.0;
    }
  } else {
    Simscape_Component1_inlet_entropy = intrm_sf_mf_51 ? 0.0 : (real_T)
      !intrm_sf_mf_55;
  }

  Controlled_Heat_Flow_Rate_Source_Q = (1.0 - zc_int21) -
    Simscape_Component1_inlet_entropy;
  zc_int21 = t579 / (t580 == 0.0 ? 1.0E-16 : t580) / (t567 == 0.0 ? 1.0E-16 :
    t567);
  Simscape_Component1_inlet_entropy = X[13ULL] / (t580 == 0.0 ? 1.0E-16 : t580);
  t579 = Simscape_Component1_inlet_entropy <= 15.0 ?
    Simscape_Component1_inlet_entropy : 15.0;
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (intrm_sf_mf_67) {
        Simscape_Component1_inlet_entropy = (t572 - 1.0) * zc_int27 * 1000.0 +
          X[97ULL];
      } else {
        Simscape_Component1_inlet_entropy = (t572 * t823 + X[97ULL]) - zc_int27 *
          1000.0;
      }
    } else if (intrm_sf_mf_50) {
      Simscape_Component1_inlet_entropy = X[97ULL];
    } else {
      Simscape_Component1_inlet_entropy = (t570 * t809 + X[97ULL]) - t569 *
        1000.0;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (intrm_sf_mf_68) {
        Simscape_Component1_inlet_entropy = (t570 - 1.0) * t569 * 1000.0 + X
          [97ULL];
      } else {
        Simscape_Component1_inlet_entropy = (t570 * t809 + X[97ULL]) - t569 *
          1000.0;
      }
    } else if (intrm_sf_mf_53) {
      Simscape_Component1_inlet_entropy = X[97ULL];
    } else {
      Simscape_Component1_inlet_entropy = (t572 * t823 + X[97ULL]) - zc_int27 *
        1000.0;
    }
  } else if (intrm_sf_mf_51) {
    Simscape_Component1_inlet_entropy = (t572 * t823 + X[97ULL]) - zc_int27 *
      1000.0;
  } else if (intrm_sf_mf_55) {
    Simscape_Component1_inlet_entropy = X[97ULL];
  } else {
    Simscape_Component1_inlet_entropy = (t570 * t809 + X[97ULL]) - t569 * 1000.0;
  }

  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (intrm_sf_mf_67) {
        t580 = t577;
      } else {
        t580 = t567 * t823 * 0.001 + t576;
      }
    } else if (intrm_sf_mf_50) {
      t580 = t576;
    } else {
      t580 = zc_int9 * t809 * 0.001 + t576;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (intrm_sf_mf_68) {
        t580 = t806;
      } else {
        t580 = zc_int9 * t809 * 0.001 + t576;
      }
    } else if (intrm_sf_mf_53) {
      t580 = t576;
    } else {
      t580 = t567 * t823 * 0.001 + t576;
    }
  } else if (intrm_sf_mf_51) {
    t580 = t567 * t823 * 0.001 + t576;
  } else if (intrm_sf_mf_55) {
    t580 = t576;
  } else {
    t580 = zc_int9 * t809 * 0.001 + t576;
  }

  t610 = (pmf_exp(t579 * Controlled_Heat_Flow_Rate_Source_Q) - 1.0) *
    Simscape_Component1_inlet_entropy;
  Simscape_Component1_inlet_entropy = t610 / (zc_int21 == 0.0 ? 1.0E-16 :
    zc_int21);
  intrm_sf_mf_67 = (Simscape_Component1_inlet_entropy * 0.001 > t806 - t580);
  intrm_sf_mf_68 = (t580 < t806);
  intrm_sf_mf_69 = (Simscape_Component1_inlet_entropy * 0.001 < t577 - t580);
  intrm_sf_mf_70 = (t580 > t577);
  t413[0ULL] = X[88ULL];
  tlu2_linear_linear_prelookup(&y_efOut.mField0[0ULL], &y_efOut.mField1[0ULL],
    &y_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t413[0ULL],
    &t40[0ULL], &t41[0ULL]);
  t21 = y_efOut;
  tlu2_1d_linear_linear_value(&ab_efOut[0ULL], &t21.mField0[0ULL], &t21.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = ab_efOut[0];
  Simscape_Component1_inlet_entropy = t412_idx_0;
  tlu2_1d_linear_linear_value(&bb_efOut[0ULL], &t21.mField0[0ULL], &t21.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = bb_efOut[0];
  if (X[89ULL] <= Simscape_Component1_inlet_entropy) {
    t580 = X[89ULL] / (Simscape_Component1_inlet_entropy == 0.0 ? 1.0E-16 :
                       Simscape_Component1_inlet_entropy) - 1.0;
  } else if (X[89ULL] >= t412_idx_0) {
    t580 = (X[89ULL] - 4000.0) / (4000.0 - t412_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t412_idx_0) + 2.0;
  } else {
    t615 = t412_idx_0 - Simscape_Component1_inlet_entropy;
    t580 = (X[89ULL] - Simscape_Component1_inlet_entropy) / (t615 == 0.0 ?
      1.0E-16 : t615);
  }

  t413[0ULL] = X[92ULL];
  tlu2_linear_linear_prelookup(&cb_efOut.mField0[0ULL], &cb_efOut.mField1[0ULL],
    &cb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t413[0ULL],
    &t40[0ULL], &t41[0ULL]);
  t19 = cb_efOut;
  tlu2_1d_linear_linear_value(&db_efOut[0ULL], &t19.mField0[0ULL], &t19.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = db_efOut[0];
  Simscape_Component1_inlet_entropy = t412_idx_0;
  tlu2_1d_linear_linear_value(&eb_efOut[0ULL], &t19.mField0[0ULL], &t19.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = eb_efOut[0];
  if (X[93ULL] <= Simscape_Component1_inlet_entropy) {
    Thermodynamic_Properties_Sensor_2P4_V = X[93ULL] /
      (Simscape_Component1_inlet_entropy == 0.0 ? 1.0E-16 :
       Simscape_Component1_inlet_entropy) - 1.0;
  } else if (X[93ULL] >= t412_idx_0) {
    Thermodynamic_Properties_Sensor_2P4_V = (X[93ULL] - 4000.0) / (4000.0 -
      t412_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t412_idx_0) + 2.0;
  } else {
    t566 = t412_idx_0 - Simscape_Component1_inlet_entropy;
    Thermodynamic_Properties_Sensor_2P4_V = (X[93ULL] -
      Simscape_Component1_inlet_entropy) / (t566 == 0.0 ? 1.0E-16 : t566);
  }

  t413[0ULL] = X[15ULL];
  tlu2_linear_linear_prelookup(&fb_efOut.mField0[0ULL], &fb_efOut.mField1[0ULL],
    &fb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t413[0ULL],
    &t40[0ULL], &t41[0ULL]);
  t32 = fb_efOut;
  tlu2_1d_linear_linear_value(&gb_efOut[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = gb_efOut[0];
  Simscape_Component1_inlet_entropy = t412_idx_0;
  tlu2_1d_linear_linear_value(&hb_efOut[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = hb_efOut[0];
  Controlled_Heat_Flow_Rate_Source_Q = t412_idx_0;
  if (X[16ULL] <= Simscape_Component1_inlet_entropy) {
    t587 = X[16ULL] / (Simscape_Component1_inlet_entropy == 0.0 ? 1.0E-16 :
                       Simscape_Component1_inlet_entropy) - 1.0;
  } else if (X[16ULL] >= t412_idx_0) {
    t587 = (X[16ULL] - 4000.0) / (4000.0 - t412_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t412_idx_0) + 2.0;
  } else {
    t566 = t412_idx_0 - Simscape_Component1_inlet_entropy;
    t587 = (X[16ULL] - Simscape_Component1_inlet_entropy) / (t566 == 0.0 ?
      1.0E-16 : t566);
  }

  t413[0ULL] = t587;
  tlu2_linear_linear_prelookup(&ib_efOut.mField0[0ULL], &ib_efOut.mField1[0ULL],
    &ib_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t413[0ULL],
    &t61[0ULL], &t41[0ULL]);
  t30 = ib_efOut;
  tlu2_2d_linear_linear_value(&jb_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t32.mField0[0ULL], &t32.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = jb_efOut[0];
  t587 = t412_idx_0;
  t588 = (-X[95ULL] - X[122ULL]) + X[124ULL];
  if (X[118ULL] <= Simscape_Component1_inlet_entropy) {
    t566 = X[118ULL] / (Simscape_Component1_inlet_entropy == 0.0 ? 1.0E-16 :
                        Simscape_Component1_inlet_entropy) - 1.0;
  } else if (X[118ULL] >= Controlled_Heat_Flow_Rate_Source_Q) {
    t566 = (X[118ULL] - 4000.0) / (4000.0 - Controlled_Heat_Flow_Rate_Source_Q ==
      0.0 ? 1.0E-16 : 4000.0 - Controlled_Heat_Flow_Rate_Source_Q) + 2.0;
  } else {
    t566 = Controlled_Heat_Flow_Rate_Source_Q -
      Simscape_Component1_inlet_entropy;
    t566 = (X[118ULL] - Simscape_Component1_inlet_entropy) / (t566 == 0.0 ?
      1.0E-16 : t566);
  }

  t413[0ULL] = t566;
  tlu2_linear_linear_prelookup(&kb_efOut.mField0[0ULL], &kb_efOut.mField1[0ULL],
    &kb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t413[0ULL],
    &t61[0ULL], &t41[0ULL]);
  t8 = kb_efOut;
  tlu2_2d_linear_linear_value(&lb_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], &t32.mField0[0ULL], &t32.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = lb_efOut[0];
  Simscape_Component1_inlet_entropy = t412_idx_0;
  Controlled_Heat_Flow_Rate_Source_Q = U_idx_2 * 1000.0;
  t535 = X[84ULL] * -0.0041659346462926084 + X[86ULL] * 0.0041659346462926084;
  t536 = X[84ULL] * 0.0041659346462926084 + X[85ULL] * -0.0041659346462926084;
  t537 = X[85ULL] * 0.0041659346462926084 + X[86ULL] * -0.0041659346462926084;
  t541 = -X[127ULL] + X[126ULL];
  t542 = -X[128ULL] + X[127ULL];
  t543 = -X[126ULL] + X[128ULL];
  t544 = -X[82ULL] + X[81ULL];
  t545 = -X[83ULL] + X[82ULL];
  t546 = -X[81ULL] + X[83ULL];
  t590 = (X[81ULL] / 3.0 + X[82ULL] / 3.0) + X[83ULL] / 3.0;
  t591 = pmf_sqrt(((X[81ULL] - t590) * (X[81ULL] - t590) + (X[82ULL] - t590) *
                   (X[82ULL] - t590)) + (X[83ULL] - t590) * (X[83ULL] - t590));
  t413[0ULL] = X[133ULL];
  tlu2_linear_linear_prelookup(&mb_efOut.mField0[0ULL], &mb_efOut.mField1[0ULL],
    &mb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t413[0ULL],
    &t40[0ULL], &t41[0ULL]);
  t18 = mb_efOut;
  tlu2_1d_linear_linear_value(&nb_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = nb_efOut[0];
  t566 = t412_idx_0;
  tlu2_1d_linear_linear_value(&ob_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = ob_efOut[0];
  if (X[134ULL] <= t566) {
    t597 = X[134ULL] / (t566 == 0.0 ? 1.0E-16 : t566) - 1.0;
  } else if (X[134ULL] >= t412_idx_0) {
    t597 = (X[134ULL] - 4000.0) / (4000.0 - t412_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t412_idx_0) + 2.0;
  } else {
    t637 = t412_idx_0 - t566;
    t597 = (X[134ULL] - t566) / (t637 == 0.0 ? 1.0E-16 : t637);
  }

  t596 = -X[122ULL] + X[124ULL];
  t598 = -X[159ULL] + X[155ULL];
  t599 = -X[77ULL] + X[163ULL];
  t600 = -X[75ULL] + X[164ULL];
  t601 = -X[188ULL] + X[145ULL];
  t602 = -X[189ULL] + X[147ULL];
  Power_Sensor_Three_Phase_Pm = ((-(X[81ULL] * t532) - X[82ULL] * t533) - X
    [83ULL] * t534) * 0.001;
  t607 = U_idx_4 * 1000.0;
  t413[0ULL] = Preheating_Thermodynamic_Properties_Sensor_2P1_V;
  tlu2_linear_linear_prelookup(&pb_efOut.mField0[0ULL], &pb_efOut.mField1[0ULL],
    &pb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t413[0ULL],
    &t61[0ULL], &t41[0ULL]);
  t9 = pb_efOut;
  tlu2_2d_linear_linear_value(&qb_efOut[0ULL], &t9.mField0[0ULL], &t9.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = qb_efOut[0];
  Preheating_Thermodynamic_Properties_Sensor_2P1_V = t412_idx_0;
  t610 = X[73ULL] * t412_idx_0 * 100.0 + X[74ULL];
  tlu2_2d_linear_linear_value(&rb_efOut[0ULL], &t9.mField0[0ULL], &t9.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = rb_efOut[0];
  t611 = t412_idx_0;
  tlu2_2d_linear_linear_value(&sb_efOut[0ULL], &t9.mField0[0ULL], &t9.mField2
    [0ULL], &t35.mField0[0ULL], &t35.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = sb_efOut[0];
  t612 = t412_idx_0;
  t413[0ULL] = t597;
  tlu2_linear_linear_prelookup(&tb_efOut.mField0[0ULL], &tb_efOut.mField1[0ULL],
    &tb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t413[0ULL],
    &t61[0ULL], &t41[0ULL]);
  t30 = tb_efOut;
  tlu2_2d_linear_linear_value(&ub_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = ub_efOut[0];
  t597 = t412_idx_0;
  tlu2_2d_linear_linear_value(&vb_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = vb_efOut[0];
  t614 = t412_idx_0;
  tlu2_2d_linear_linear_value(&wb_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = wb_efOut[0];
  t615 = t412_idx_0;
  if (X[154ULL] <= zc_int19) {
    t627 = X[154ULL] / (zc_int19 == 0.0 ? 1.0E-16 : zc_int19) - 1.0;
  } else if (X[154ULL] >= zc_int53) {
    t627 = (X[154ULL] - 4000.0) / (4000.0 - zc_int53 == 0.0 ? 1.0E-16 : 4000.0 -
      zc_int53) + 2.0;
  } else {
    Simscape_Component1_mdot_nozzle = zc_int53 - zc_int19;
    t627 = (X[154ULL] - zc_int19) / (Simscape_Component1_mdot_nozzle == 0.0 ?
      1.0E-16 : Simscape_Component1_mdot_nozzle);
  }

  t413[0ULL] = t627;
  tlu2_linear_linear_prelookup(&xb_efOut.mField0[0ULL], &xb_efOut.mField1[0ULL],
    &xb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t413[0ULL],
    &t61[0ULL], &t41[0ULL]);
  t37 = xb_efOut;
  tlu2_2d_linear_linear_value(&yb_efOut[0ULL], &t37.mField0[0ULL], &t37.mField2
    [0ULL], &t38.mField0[0ULL], &t38.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t417[0] = yb_efOut[0];
  t627 = t417[0ULL];
  tlu2_2d_linear_linear_value(&ac_efOut[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], &t485[0ULL], &t487[0ULL], ((_NeDynamicSystem*)(LC))->mField16, &t61
    [0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = ac_efOut[0];
  t634 = t412_idx_0;
  tlu2_2d_linear_linear_value(&bc_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], &t485[0ULL], &t487[0ULL], ((_NeDynamicSystem*)(LC))->mField16, &t61
    [0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = bc_efOut[0];
  t635 = t412_idx_0;
  tlu2_2d_linear_linear_value(&cc_efOut[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], &t485[0ULL], &t487[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t61
    [0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = cc_efOut[0];
  t636 = t412_idx_0;
  t637 = 1.0 / (t412_idx_0 == 0.0 ? 1.0E-16 : t412_idx_0);
  tlu2_2d_linear_linear_value(&dc_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], &t485[0ULL], &t487[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t61
    [0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = dc_efOut[0];
  t638 = t412_idx_0;
  t639 = 1.0 / (t412_idx_0 == 0.0 ? 1.0E-16 : t412_idx_0);
  t640 = X[0ULL] - X[15ULL];
  tlu2_2d_linear_linear_value(&ec_efOut[0ULL], &t37.mField0[0ULL], &t37.mField2
    [0ULL], &t38.mField0[0ULL], &t38.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t345[0] = ec_efOut[0];
  t641 = t345[0ULL];
  t679 = pmf_sqrt(t641 * 461.5);
  if (U_idx_5 <= 0.0) {
    t644 = 0.0;
  } else {
    t644 = U_idx_5 >= 1.0 ? 1.0 : U_idx_5;
  }

  t645 = t644 * 0.0002;
  t642 = X[15ULL] / (X[0ULL] == 0.0 ? 1.0E-16 : X[0ULL]);
  if (t642 <= 0.0) {
    t647 = 0.0;
  } else {
    t647 = t642 >= 1.0 ? 1.0 : t642;
  }

  t642 = (pmf_pow(t647, 1.5384615384615383) - pmf_pow(t647, 1.7692307692307689))
    * 8.6666666666666661;
  if (t642 <= 0.0) {
    t648 = 0.0;
  } else {
    t648 = t642 >= 1.0E+6 ? 1.0E+6 : t642;
  }

  t642 = t645 * X[0ULL] * 0.85 / (t679 == 0.0 ? 1.0E-16 : t679) * pmf_sqrt(t648);
  if (t647 < 0.545727733814065) {
    t648 = X[0ULL] * 0.85 / (t679 == 0.0 ? 1.0E-16 : t679) * 0.667262351240862 *
      t645 * 100000.0;
  } else {
    t648 = t642 * 100000.0;
  }

  t642 = t640 > 0.01 ? t648 : 0.0;
  t684 = fabs(t642);
  Simscape_Component_h_A = t684 / 0.5;
  t648 = 0.8 - (Simscape_Component_h_A - 0.8) * (Simscape_Component_h_A - 0.8) *
    0.2;
  Simscape_Component_h_A = t627 * X[0ULL] * 100.0 + X[154ULL];
  if (X[15ULL] <= 1.0) {
    t627 = 1.0;
  } else {
    t627 = X[15ULL] >= 1000.0 ? 1000.0 : X[15ULL];
  }

  t413[0ULL] = t627;
  tlu2_linear_linear_prelookup(&fc_efOut.mField0[0ULL], &fc_efOut.mField1[0ULL],
    &fc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t413[0ULL],
    &t40[0ULL], &t41[0ULL]);
  t18 = fc_efOut;
  tlu2_1d_linear_linear_value(&gc_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = gc_efOut[0];
  Simscape_Component_ideal_outlet_quality = t412_idx_0;
  tlu2_1d_linear_linear_value(&hc_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = hc_efOut[0];
  t650 = t412_idx_0;
  if (Simscape_Component_ideal_outlet_quality <=
      Simscape_Component_ideal_outlet_quality) {
    intrm_sf_mf_435 = Simscape_Component_ideal_outlet_quality /
      (Simscape_Component_ideal_outlet_quality == 0.0 ? 1.0E-16 :
       Simscape_Component_ideal_outlet_quality) - 1.0;
  } else if (Simscape_Component_ideal_outlet_quality >= t412_idx_0) {
    intrm_sf_mf_435 = (Simscape_Component_ideal_outlet_quality - 4000.0) /
      (4000.0 - t412_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t412_idx_0) + 2.0;
  } else {
    t566 = t412_idx_0 - Simscape_Component_ideal_outlet_quality;
    intrm_sf_mf_435 = (Simscape_Component_ideal_outlet_quality -
                       Simscape_Component_ideal_outlet_quality) / (t566 == 0.0 ?
      1.0E-16 : t566);
  }

  t413[0ULL] = intrm_sf_mf_435;
  tlu2_linear_linear_prelookup(&ic_efOut.mField0[0ULL], &ic_efOut.mField1[0ULL],
    &ic_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t413[0ULL],
    &t61[0ULL], &t41[0ULL]);
  t35 = ic_efOut;
  tlu2_2d_linear_linear_value(&jc_efOut[0ULL], &t35.mField0[0ULL], &t35.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = jc_efOut[0];
  t566 = t412_idx_0 * t627 * 100.0 + Simscape_Component_ideal_outlet_quality;
  if (t650 <= Simscape_Component_ideal_outlet_quality) {
    intrm_sf_mf_435 = t650 / (Simscape_Component_ideal_outlet_quality == 0.0 ?
      1.0E-16 : Simscape_Component_ideal_outlet_quality) - 1.0;
  } else if (t650 >= t650) {
    intrm_sf_mf_435 = (t650 - 4000.0) / (4000.0 - t650 == 0.0 ? 1.0E-16 : 4000.0
      - t650) + 2.0;
  } else {
    t692 = t650 - Simscape_Component_ideal_outlet_quality;
    intrm_sf_mf_435 = (t650 - Simscape_Component_ideal_outlet_quality) / (t692 ==
      0.0 ? 1.0E-16 : t692);
  }

  t413[0ULL] = intrm_sf_mf_435;
  tlu2_linear_linear_prelookup(&kc_efOut.mField0[0ULL], &kc_efOut.mField1[0ULL],
    &kc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t413[0ULL],
    &t61[0ULL], &t41[0ULL]);
  t30 = kc_efOut;
  tlu2_2d_linear_linear_value(&lc_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = lc_efOut[0];
  intrm_sf_mf_435 = t412_idx_0 * t627 * 100.0 + t650;
  tlu2_2d_linear_linear_value(&mc_efOut[0ULL], &t37.mField0[0ULL], &t37.mField2
    [0ULL], &t38.mField0[0ULL], &t38.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t421[0] = mc_efOut[0];
  t627 = t421[0ULL];
  tlu2_2d_linear_linear_value(&nc_efOut[0ULL], &t35.mField0[0ULL], &t35.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = nc_efOut[0];
  Simscape_Component_ideal_outlet_quality = t412_idx_0;
  tlu2_2d_linear_linear_value(&oc_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = oc_efOut[0];
  t694 = t412_idx_0 - Simscape_Component_ideal_outlet_quality;
  Simscape_Component_ideal_outlet_quality = (t627 -
    Simscape_Component_ideal_outlet_quality) / (t694 == 0.0 ? 1.0E-16 : t694);
  if (Simscape_Component_ideal_outlet_quality <= 0.0) {
    t650 = 0.0;
  } else {
    t650 = Simscape_Component_ideal_outlet_quality >= 1.0 ? 1.0 :
      Simscape_Component_ideal_outlet_quality;
  }

  Simscape_Component_ideal_outlet_quality = (intrm_sf_mf_435 - t566) * t650 +
    t566;
  intrm_sf_mf_435 = Simscape_Component_h_A -
    Simscape_Component_ideal_outlet_quality;
  Simscape_Component_h_A = Simscape_Component_ideal_outlet_quality;
  Simscape_Component_ideal_outlet_quality = t650;
  t650 = t645;
  t645 = (real_T)(t647 < 0.545727733814065);
  t655 = pmf_sqrt(X[18ULL] * X[18ULL] + 1.0);
  t656 = X[15ULL] - X[88ULL];
  t657 = -X[112ULL] + X[159ULL];
  tlu2_2d_linear_linear_value(&pc_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], &t32.mField0[0ULL], &t32.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = pc_efOut[0];
  t658 = t412_idx_0;
  t412_idx_0 = pmf_sqrt(t412_idx_0 * 461.5);
  if (U_idx_6 <= 0.0) {
    t661 = 0.0;
  } else {
    t661 = U_idx_6 >= 1.0 ? 1.0 : U_idx_6;
  }

  Simscape_Component1_nozzle_choked_out = t661 * 0.0002;
  t659 = X[88ULL] / (X[15ULL] == 0.0 ? 1.0E-16 : X[15ULL]);
  if (t659 <= 0.0) {
    t664 = 0.0;
  } else {
    t664 = t659 >= 1.0 ? 1.0 : t659;
  }

  t659 = (pmf_pow(t664, 1.5384615384615383) - pmf_pow(t664, 1.7692307692307689))
    * 8.6666666666666661;
  if (t659 <= 0.0) {
    Simscape_Component1_mdot_nozzle = 0.0;
  } else {
    Simscape_Component1_mdot_nozzle = t659 >= 1.0E+6 ? 1.0E+6 : t659;
  }

  t659 = X[15ULL] * Simscape_Component1_nozzle_choked_out * 0.85 / (t412_idx_0 ==
    0.0 ? 1.0E-16 : t412_idx_0) * pmf_sqrt(Simscape_Component1_mdot_nozzle);
  if (t664 < 0.545727733814065) {
    Simscape_Component1_mdot_nozzle = X[15ULL] * 0.85 / (t412_idx_0 == 0.0 ?
      1.0E-16 : t412_idx_0) * 0.667262351240862 *
      Simscape_Component1_nozzle_choked_out * 100000.0;
  } else {
    Simscape_Component1_mdot_nozzle = t659 * 100000.0;
  }

  t659 = t656 > 0.01 ? Simscape_Component1_mdot_nozzle : 0.0;
  t708 = fabs(t659);
  t663 = t708 / 0.5;
  Simscape_Component1_mdot_nozzle = 0.8 - (t663 - 0.8) * (t663 - 0.8) * 0.2;
  t663 = Simscape_Component1_inlet_entropy * X[15ULL] * 100.0 + X[118ULL];
  if (X[88ULL] <= 1.0) {
    Simscape_Component1_inlet_entropy = 1.0;
  } else {
    Simscape_Component1_inlet_entropy = X[88ULL] >= 1000.0 ? 1000.0 : X[88ULL];
  }

  t413[0ULL] = Simscape_Component1_inlet_entropy;
  tlu2_linear_linear_prelookup(&qc_efOut.mField0[0ULL], &qc_efOut.mField1[0ULL],
    &qc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t413[0ULL],
    &t40[0ULL], &t41[0ULL]);
  t9 = qc_efOut;
  tlu2_1d_linear_linear_value(&rc_efOut[0ULL], &t9.mField0[0ULL], &t9.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = rc_efOut[0];
  t666 = t412_idx_0;
  tlu2_1d_linear_linear_value(&sc_efOut[0ULL], &t9.mField0[0ULL], &t9.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = sc_efOut[0];
  Simscape_Component1_s_g_B = t412_idx_0;
  if (t666 <= t666) {
    zc_int0 = t666 / (t666 == 0.0 ? 1.0E-16 : t666) - 1.0;
  } else if (t666 >= t412_idx_0) {
    zc_int0 = (t666 - 4000.0) / (4000.0 - t412_idx_0 == 0.0 ? 1.0E-16 : 4000.0 -
      t412_idx_0) + 2.0;
  } else {
    t566 = t412_idx_0 - t666;
    zc_int0 = (t666 - t666) / (t566 == 0.0 ? 1.0E-16 : t566);
  }

  t413[0ULL] = zc_int0;
  tlu2_linear_linear_prelookup(&tc_efOut.mField0[0ULL], &tc_efOut.mField1[0ULL],
    &tc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t413[0ULL],
    &t61[0ULL], &t41[0ULL]);
  t18 = tc_efOut;
  tlu2_2d_linear_linear_value(&uc_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t9.mField0[0ULL], &t9.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = uc_efOut[0];
  t566 = t412_idx_0 * Simscape_Component1_inlet_entropy * 100.0 + t666;
  if (Simscape_Component1_s_g_B <= t666) {
    zc_int0 = Simscape_Component1_s_g_B / (t666 == 0.0 ? 1.0E-16 : t666) - 1.0;
  } else if (Simscape_Component1_s_g_B >= Simscape_Component1_s_g_B) {
    zc_int0 = (Simscape_Component1_s_g_B - 4000.0) / (4000.0 -
      Simscape_Component1_s_g_B == 0.0 ? 1.0E-16 : 4000.0 -
      Simscape_Component1_s_g_B) + 2.0;
  } else {
    t716 = Simscape_Component1_s_g_B - t666;
    zc_int0 = (Simscape_Component1_s_g_B - t666) / (t716 == 0.0 ? 1.0E-16 : t716);
  }

  t413[0ULL] = zc_int0;
  tlu2_linear_linear_prelookup(&vc_efOut.mField0[0ULL], &vc_efOut.mField1[0ULL],
    &vc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t413[0ULL],
    &t61[0ULL], &t41[0ULL]);
  t30 = vc_efOut;
  tlu2_2d_linear_linear_value(&wc_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t9.mField0[0ULL], &t9.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = wc_efOut[0];
  zc_int0 = t412_idx_0 * Simscape_Component1_inlet_entropy * 100.0 +
    Simscape_Component1_s_g_B;
  tlu2_2d_linear_linear_value(&xc_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], &t32.mField0[0ULL], &t32.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = xc_efOut[0];
  Simscape_Component1_inlet_entropy = t412_idx_0;
  tlu2_2d_linear_linear_value(&yc_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t9.mField0[0ULL], &t9.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = yc_efOut[0];
  t666 = t412_idx_0;
  tlu2_2d_linear_linear_value(&ad_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t9.mField0[0ULL], &t9.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = ad_efOut[0];
  t718 = t412_idx_0 - t666;
  t666 = (Simscape_Component1_inlet_entropy - t666) / (t718 == 0.0 ? 1.0E-16 :
    t718);
  if (t666 <= 0.0) {
    Simscape_Component1_s_g_B = 0.0;
  } else {
    Simscape_Component1_s_g_B = t666 >= 1.0 ? 1.0 : t666;
  }

  t666 = (zc_int0 - t566) * Simscape_Component1_s_g_B + t566;
  zc_int0 = t663 - t666;
  t663 = t666;
  t666 = Simscape_Component1_s_g_B;
  Simscape_Component1_s_g_B = Simscape_Component1_nozzle_choked_out;
  Simscape_Component1_nozzle_choked_out = (real_T)(t664 < 0.545727733814065);
  if (X[32ULL] < zc_int19) {
    t670 = X[32ULL] / (zc_int19 == 0.0 ? 1.0E-16 : zc_int19) - 1.0;
  } else {
    t670 = 0.0;
  }

  if (X[33ULL] > zc_int53) {
    t671 = (X[33ULL] - 4000.0) / (4000.0 - zc_int53 == 0.0 ? 1.0E-16 : 4000.0 -
      zc_int53) + 2.0;
  } else {
    t671 = 1.0;
  }

  t413[0ULL] = t670;
  t250[0] = 25ULL;
  tlu2_linear_linear_prelookup(&bd_efOut.mField0[0ULL], &bd_efOut.mField1[0ULL],
    &bd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t413[0ULL],
    &t250[0ULL], &t41[0ULL]);
  t8 = bd_efOut;
  tlu2_2d_linear_linear_value(&cd_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], &t485[0ULL], &t487[0ULL], ((_NeDynamicSystem*)(LC))->mField31,
    &t250[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = cd_efOut[0];
  t670 = t412_idx_0;
  t413[0ULL] = t671;
  tlu2_linear_linear_prelookup(&dd_efOut.mField0[0ULL], &dd_efOut.mField1[0ULL],
    &dd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t413[0ULL],
    &t250[0ULL], &t41[0ULL]);
  t32 = dd_efOut;
  tlu2_2d_linear_linear_value(&ed_efOut[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &t485[0ULL], &t487[0ULL], ((_NeDynamicSystem*)(LC))->mField32,
    &t250[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = ed_efOut[0];
  t770 = X[34ULL] * t670 + X[35ULL] * t412_idx_0;
  t670 = X[34ULL] * t670 / (t770 == 0.0 ? 1.0E-16 : t770);
  if (X[160ULL] <= zc_int19) {
    t671 = X[160ULL] / (zc_int19 == 0.0 ? 1.0E-16 : zc_int19) - 1.0;
  } else if (X[160ULL] >= zc_int53) {
    t671 = (X[160ULL] - 4000.0) / (4000.0 - zc_int53 == 0.0 ? 1.0E-16 : 4000.0 -
      zc_int53) + 2.0;
  } else {
    t566 = zc_int53 - zc_int19;
    t671 = (X[160ULL] - zc_int19) / (t566 == 0.0 ? 1.0E-16 : t566);
  }

  t413[0ULL] = X[39ULL];
  tlu2_linear_linear_prelookup(&fd_efOut.mField0[0ULL], &fd_efOut.mField1[0ULL],
    &fd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t413[0ULL],
    &t40[0ULL], &t41[0ULL]);
  t30 = fd_efOut;
  tlu2_1d_linear_linear_value(&gd_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = gd_efOut[0];
  zc_int19 = t412_idx_0;
  tlu2_1d_linear_linear_value(&hd_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = hd_efOut[0];
  zc_int53 = t412_idx_0;
  if (X[40ULL] <= zc_int19) {
    t672 = X[40ULL] / (zc_int19 == 0.0 ? 1.0E-16 : zc_int19) - 1.0;
  } else if (X[40ULL] >= t412_idx_0) {
    t672 = (X[40ULL] - 4000.0) / (4000.0 - t412_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t412_idx_0) + 2.0;
  } else {
    t566 = t412_idx_0 - zc_int19;
    t672 = (X[40ULL] - zc_int19) / (t566 == 0.0 ? 1.0E-16 : t566);
  }

  if (X[41ULL] <= zc_int19) {
    t674 = X[41ULL] / (zc_int19 == 0.0 ? 1.0E-16 : zc_int19) - 1.0;
  } else if (X[41ULL] >= t412_idx_0) {
    t674 = (X[41ULL] - 4000.0) / (4000.0 - t412_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t412_idx_0) + 2.0;
  } else {
    t566 = t412_idx_0 - zc_int19;
    t674 = (X[41ULL] - zc_int19) / (t566 == 0.0 ? 1.0E-16 : t566);
  }

  t413[0ULL] = ((t672 < 0.0 ? t672 : 0.0) + (t674 < 0.0 ? t674 : 0.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&id_efOut.mField0[0ULL], &id_efOut.mField1[0ULL],
    &id_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t413[0ULL],
    &t61[0ULL], &t41[0ULL]);
  t18 = id_efOut;
  t413[0ULL] = X[39ULL];
  tlu2_linear_nearest_prelookup(&jd_efOut.mField0[0ULL], &jd_efOut.mField1[0ULL],
    &jd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t413[0ULL],
    &t40[0ULL], &t41[0ULL]);
  t8 = jd_efOut;
  tlu2_2d_linear_nearest_value(&kd_efOut[0ULL], &t18.mField0[0ULL],
    &t18.mField2[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL], ((_NeDynamicSystem*)
    (LC))->mField12, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = kd_efOut[0];
  t673 = t412_idx_0;
  tlu2_2d_linear_nearest_value(&ld_efOut[0ULL], &t18.mField0[0ULL],
    &t18.mField2[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL], ((_NeDynamicSystem*)
    (LC))->mField10, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = ld_efOut[0];
  intrm_sf_mf_526 = t412_idx_0;
  tlu2_2d_linear_nearest_value(&md_efOut[0ULL], &t18.mField0[0ULL],
    &t18.mField2[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL], ((_NeDynamicSystem*)
    (LC))->mField13, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = md_efOut[0];
  t673 = t673 * intrm_sf_mf_526 / (t412_idx_0 == 0.0 ? 1.0E-16 : t412_idx_0);
  intrm_sf_mf_526 = X[43ULL] >= 0.0 ? X[43ULL] : 0.0;
  t676 = X[44ULL] >= 0.0 ? X[44ULL] : 0.0;
  t770 = intrm_sf_mf_526 + X[216ULL];
  t766 = (intrm_sf_mf_526 + X[216ULL]) * (1.0 - pmf_exp(-X[42ULL] / (t770 == 0.0
    ? 1.0E-16 : t770)));
  t804 = t673 * t676 + X[216ULL];
  Steam_Generator_two_phase_fluid_v_sat_liq = t766 / (t804 == 0.0 ? 1.0E-16 :
    t804);
  t678 = Steam_Generator_two_phase_fluid_v_sat_liq <= 15.0 ?
    Steam_Generator_two_phase_fluid_v_sat_liq : 15.0;
  t413[0ULL] = t672;
  tlu2_linear_linear_prelookup(&nd_efOut.mField0[0ULL], &nd_efOut.mField1[0ULL],
    &nd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t413[0ULL],
    &t61[0ULL], &t41[0ULL]);
  t18 = nd_efOut;
  tlu2_2d_linear_linear_value(&od_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t30.mField0[0ULL], &t30.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = od_efOut[0];
  t679 = X[39ULL] * t412_idx_0 * 100.0 + X[40ULL];
  tlu2_2d_linear_linear_value(&pd_efOut[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], &t30.mField0[0ULL], &t30.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = pd_efOut[0];
  t680 = X[39ULL] * t412_idx_0 * 100.0 + zc_int19;
  zc_int19 = (t680 - t679) / (t673 == 0.0 ? 1.0E-16 : t673);
  Steam_Generator_two_phase_fluid_v_sat_liq = (1.0 - pmf_exp(-t678)) * X[215ULL];
  intrm_sf_mf_531 = (Steam_Generator_two_phase_fluid_v_sat_liq > zc_int19 *
                     1000.0);
  intrm_sf_mf_515 = (t679 < t680);
  intrm_sf_mf_517 = (t679 > t680);
  tlu2_2d_linear_linear_value(&qd_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], &t30.mField0[0ULL], &t30.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = qd_efOut[0];
  t682 = X[39ULL] * t412_idx_0 * 100.0 + zc_int53;
  intrm_sf_mf_518 = (t679 > t682);
  intrm_sf_mf_521 = (X[215ULL] < 0.0);
  intrm_sf_mf_522 = (X[215ULL] > 0.0);
  if (intrm_sf_mf_522) {
    if (intrm_sf_mf_515) {
      if (intrm_sf_mf_531) {
        t566 = -pmf_log((X[215ULL] - zc_int19 * 1000.0) / (X[215ULL] == 0.0 ?
          1.0E-16 : X[215ULL]));
        zc_int53 = t566 / (t678 == 0.0 ? 1.0E-16 : t678);
      } else {
        zc_int53 = 1.0;
      }
    } else {
      zc_int53 = 0.0;
    }
  } else {
    zc_int53 = intrm_sf_mf_521 ? intrm_sf_mf_518 ? 0.0 : (real_T)
      !intrm_sf_mf_517 : (real_T)intrm_sf_mf_515;
  }

  t413[0ULL] = ((t672 > 1.0 ? t672 : 1.0) + (t674 > 1.0 ? t674 : 1.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&rd_efOut.mField0[0ULL], &rd_efOut.mField1[0ULL],
    &rd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t413[0ULL],
    &t61[0ULL], &t41[0ULL]);
  t30 = rd_efOut;
  tlu2_2d_linear_nearest_value(&sd_efOut[0ULL], &t30.mField0[0ULL],
    &t30.mField2[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL], ((_NeDynamicSystem*)
    (LC))->mField12, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = sd_efOut[0];
  t672 = t412_idx_0;
  tlu2_2d_linear_nearest_value(&td_efOut[0ULL], &t30.mField0[0ULL],
    &t30.mField2[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL], ((_NeDynamicSystem*)
    (LC))->mField10, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = td_efOut[0];
  t674 = t412_idx_0;
  tlu2_2d_linear_nearest_value(&ud_efOut[0ULL], &t30.mField0[0ULL],
    &t30.mField2[0ULL], &t8.mField0[0ULL], &t8.mField2[0ULL], ((_NeDynamicSystem*)
    (LC))->mField13, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t412_idx_0 = ud_efOut[0];
  t672 = t672 * t674 / (t412_idx_0 == 0.0 ? 1.0E-16 : t412_idx_0);
  t566 = (intrm_sf_mf_526 + X[216ULL]) * (1.0 - pmf_exp(-X[45ULL] / (t770 == 0.0
    ? 1.0E-16 : t770)));
  t766 = X[216ULL] + t672 * t676;
  t674 = t566 / (t766 == 0.0 ? 1.0E-16 : t766);
  t676 = t674 <= 15.0 ? t674 : 15.0;
  t674 = (t682 - t679) / (t672 == 0.0 ? 1.0E-16 : t672);
  intrm_sf_mf_514 = (t679 < t682);
  intrm_sf_mf_510 = (1.0 - pmf_exp(-t676)) * X[215ULL];
  intrm_sf_mf_532 = (intrm_sf_mf_510 < t674 * 1000.0);
  intrm_sf_mf_519 = (t679 <= t682);
  if (intrm_sf_mf_522) {
    t684 = intrm_sf_mf_515 ? 0.0 : (real_T)!intrm_sf_mf_514;
  } else if (intrm_sf_mf_521) {
    if (intrm_sf_mf_518) {
      if (intrm_sf_mf_532) {
        t566 = -pmf_log((X[215ULL] - t674 * 1000.0) / (X[215ULL] == 0.0 ?
          1.0E-16 : X[215ULL]));
        t684 = t566 / (t676 == 0.0 ? 1.0E-16 : t676);
      } else {
        t684 = 1.0;
      }
    } else {
      t684 = 0.0;
    }
  } else {
    t684 = intrm_sf_mf_515 ? 0.0 : (real_T)!intrm_sf_mf_519;
  }

  t412_idx_0 = (1.0 - zc_int53) - t684;
  t566 = (intrm_sf_mf_526 + X[216ULL]) * (1.0 - pmf_exp(-X[46ULL] / (t770 == 0.0
    ? 1.0E-16 : t770)));
  t770 = t804 / (t673 == 0.0 ? 1.0E-16 : t673);
  zc_int53 = t566 / (t770 == 0.0 ? 1.0E-16 : t770);
  if (intrm_sf_mf_522) {
    if (intrm_sf_mf_515) {
      intrm_sf_mf_526 = X[215ULL] - zc_int19 * 1000.0;
    } else if (intrm_sf_mf_514) {
      intrm_sf_mf_526 = X[215ULL];
    } else {
      intrm_sf_mf_526 = X[215ULL] - t674 * 1000.0;
    }
  } else if (intrm_sf_mf_521) {
    if (intrm_sf_mf_518) {
      intrm_sf_mf_526 = X[215ULL] - t674 * 1000.0;
    } else if (intrm_sf_mf_517) {
      intrm_sf_mf_526 = X[215ULL];
    } else {
      intrm_sf_mf_526 = X[215ULL] - zc_int19 * 1000.0;
    }
  } else if (intrm_sf_mf_515) {
    intrm_sf_mf_526 = zc_int19 * 1000.0 + X[215ULL];
  } else if (intrm_sf_mf_519) {
    intrm_sf_mf_526 = X[215ULL];
  } else {
    intrm_sf_mf_526 = t674 * 1000.0 + X[215ULL];
  }

  if (intrm_sf_mf_522) {
    if (intrm_sf_mf_515) {
      if (intrm_sf_mf_531) {
        t684 = t680;
      } else {
        t684 = t673 * Steam_Generator_two_phase_fluid_v_sat_liq * 0.001 + t679;
      }
    } else if (intrm_sf_mf_514) {
      t684 = t679;
    } else {
      t684 = t672 * intrm_sf_mf_510 * 0.001 + t679;
    }
  } else if (intrm_sf_mf_521) {
    if (intrm_sf_mf_518) {
      if (intrm_sf_mf_532) {
        t684 = t682;
      } else {
        t684 = t672 * intrm_sf_mf_510 * 0.001 + t679;
      }
    } else if (intrm_sf_mf_517) {
      t684 = t679;
    } else {
      t684 = t673 * Steam_Generator_two_phase_fluid_v_sat_liq * 0.001 + t679;
    }
  } else if (intrm_sf_mf_515) {
    t684 = t673 * Steam_Generator_two_phase_fluid_v_sat_liq * 0.001 + t679;
  } else if (intrm_sf_mf_519) {
    t684 = t679;
  } else {
    t684 = t672 * intrm_sf_mf_510 * 0.001 + t679;
  }

  t566 = zc_int53 * intrm_sf_mf_526 * t412_idx_0;
  intrm_sf_mf_531 = (t566 * 0.001 > t682 - t684);
  intrm_sf_mf_532 = (t566 * 0.001 < t680 - t684);
  t413[0ULL] = t671;
  tlu2_linear_linear_prelookup(&vd_efOut.mField0[0ULL], &vd_efOut.mField1[0ULL],
    &vd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t413[0ULL],
    &t61[0ULL], &t41[0ULL]);
  t30 = vd_efOut;
  tlu2_2d_linear_linear_value(&wd_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t485[0ULL], &t487[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t61
    [0ULL], &t40[0ULL], &t41[0ULL]);
  t413[0] = wd_efOut[0];
  t804 = -t413[0ULL];
  t671 = -t804;
  tlu2_2d_linear_linear_value(&xd_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t485[0ULL], &t487[0ULL], ((_NeDynamicSystem*)(LC))->mField30, &t61
    [0ULL], &t40[0ULL], &t41[0ULL]);
  t413[0] = xd_efOut[0];
  t804 = -t413[0ULL];
  t566 = -t804;
  tlu2_2d_linear_linear_value(&yd_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t485[0ULL], &t487[0ULL], ((_NeDynamicSystem*)(LC))->mField16, &t61
    [0ULL], &t40[0ULL], &t41[0ULL]);
  t413[0] = yd_efOut[0];
  t804 = -t413[0ULL];
  t689 = -t804;
  t804 = -t417[0ULL];
  t690 = -t804;
  t691 = X[0ULL] * -t804 * 100.0 + X[154ULL];
  t804 = -t421[0ULL];
  t692 = -t804;
  t804 = -t345[0ULL];
  t693 = -t804;
  t421[0ULL] = t580;
  tlu2_linear_linear_prelookup(&ae_efOut.mField0[0ULL], &ae_efOut.mField1[0ULL],
    &ae_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t421[0ULL],
    &t61[0ULL], &t41[0ULL]);
  t30 = ae_efOut;
  tlu2_2d_linear_linear_value(&be_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t21.mField0[0ULL], &t21.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t417[0] = be_efOut[0];
  t804 = -t417[0ULL];
  t580 = -t804;
  t694 = X[88ULL] * -t804 * 100.0 + X[89ULL];
  tlu2_2d_linear_linear_value(&ce_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t21.mField0[0ULL], &t21.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t417[0] = ce_efOut[0];
  t804 = -t417[0ULL];
  t695 = -t804;
  tlu2_2d_linear_linear_value(&de_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t21.mField0[0ULL], &t21.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t417[0] = de_efOut[0];
  t804 = -t417[0ULL];
  t696 = -t804;
  t421[0ULL] = Thermodynamic_Properties_Sensor_2P4_V;
  tlu2_linear_linear_prelookup(&ee_efOut.mField0[0ULL], &ee_efOut.mField1[0ULL],
    &ee_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t421[0ULL],
    &t61[0ULL], &t41[0ULL]);
  t30 = ee_efOut;
  tlu2_2d_linear_linear_value(&fe_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t19.mField0[0ULL], &t19.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t421[0] = fe_efOut[0];
  t804 = -t421[0ULL];
  Thermodynamic_Properties_Sensor_2P4_V = -t804;
  t697 = X[92ULL] * -t804 * 100.0 + X[93ULL];
  tlu2_2d_linear_linear_value(&ge_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t19.mField0[0ULL], &t19.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t421[0] = ge_efOut[0];
  t804 = -t421[0ULL];
  t698 = -t804;
  tlu2_2d_linear_linear_value(&he_efOut[0ULL], &t30.mField0[0ULL], &t30.mField2
    [0ULL], &t19.mField0[0ULL], &t19.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t61[0ULL], &t40[0ULL], &t41[0ULL]);
  t421[0] = he_efOut[0];
  t804 = -t421[0ULL];
  t699 = -t804;
  t721 = X[245ULL] * 0.0041659346462926084 + X[84ULL] * -0.0041659346462926084;
  t722 = X[245ULL] * 0.0041659346462926084 + X[85ULL] * -0.0041659346462926084;
  t723 = X[245ULL] * 0.0041659346462926084 + X[86ULL] * -0.0041659346462926084;
  t701 = t721 * t721 * 0.0011520000000000002;
  t702 = t722 * t722 * 0.0011520000000000002;
  t412_idx_0 = t723 * t723 * 0.0011520000000000002;
  t704 = t532 * t532 * 0.012696;
  t706 = t533 * t533 * 0.012696;
  t708 = t534 * t534 * 0.012696;
  t709 = ((((t701 + t702) + t412_idx_0) + t704) + t706) + t708;
  t716 = ((((X[81ULL] * X[81ULL] - X[81ULL] * X[82ULL]) - X[81ULL] * X[83ULL]) +
           X[82ULL] * X[82ULL]) - X[82ULL] * X[83ULL]) + X[83ULL] * X[83ULL];
  if (t716 >= 0.0) {
    t717 = pmf_sqrt(t716);
  } else {
    t717 = -pmf_sqrt(-t716);
  }

  t716 = X[81ULL] - t590;
  t718 = X[82ULL] - t590;
  t719 = X[83ULL] - t590;
  if (U_idx_7 <= 1.0E-6) {
    t590 = 1.0E-6;
  } else {
    t590 = U_idx_7 >= pmf_get_inf() ? pmf_get_inf() : U_idx_7;
  }

  if (intrm_sf_mf_435 <= 0.0) {
    t720 = 0.0;
  } else {
    t720 = intrm_sf_mf_435 >= 500.0 ? 500.0 : intrm_sf_mf_435;
  }

  if (zc_int0 <= 0.0) {
    intrm_sf_mf_435 = 0.0;
  } else {
    intrm_sf_mf_435 = zc_int0 >= 500.0 ? 500.0 : zc_int0;
  }

  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (M[101ULL] != 0) {
        t770 = X[97ULL] - t573 * zc_int27 * 1000.0;
        t766 = pmf_log((t574 * zc_int27 * 1000.0 + X[97ULL]) / (t770 == 0.0 ?
          1.0E-16 : t770));
        zc_int0 = t766 / (t571 == 0.0 ? 1.0E-16 : t571);
      } else {
        zc_int0 = 1.0;
      }
    } else {
      zc_int0 = 0.0;
    }
  } else {
    zc_int0 = intrm_sf_mf_57 ? intrm_sf_mf_54 ? 0.0 : (real_T)!intrm_sf_mf_53 :
      (real_T)intrm_sf_mf_51;
  }

  if (intrm_sf_mf_58) {
    t571 = intrm_sf_mf_51 ? 0.0 : (real_T)!intrm_sf_mf_50;
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (M[102ULL] != 0) {
        t770 = X[97ULL] - t578 * t569 * 1000.0;
        t766 = pmf_log((t817 * t569 * 1000.0 + X[97ULL]) / (t770 == 0.0 ?
          1.0E-16 : t770));
        t571 = t766 / (t568 == 0.0 ? 1.0E-16 : t568);
      } else {
        t571 = 1.0;
      }
    } else {
      t571 = 0.0;
    }
  } else {
    t571 = intrm_sf_mf_51 ? 0.0 : (real_T)!intrm_sf_mf_55;
  }

  t568 = (1.0 - zc_int0) - t571;
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (M[101ULL] != 0) {
        t573 = (t572 - 1.0) * zc_int27 * 1000.0 + X[97ULL];
      } else {
        t573 = (t572 * t823 + X[97ULL]) - zc_int27 * 1000.0;
      }
    } else if (intrm_sf_mf_50) {
      t573 = X[97ULL];
    } else {
      t573 = (t570 * t809 + X[97ULL]) - t569 * 1000.0;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (M[102ULL] != 0) {
        t573 = (t570 - 1.0) * t569 * 1000.0 + X[97ULL];
      } else {
        t573 = (t570 * t809 + X[97ULL]) - t569 * 1000.0;
      }
    } else if (intrm_sf_mf_53) {
      t573 = X[97ULL];
    } else {
      t573 = (t572 * t823 + X[97ULL]) - zc_int27 * 1000.0;
    }
  } else if (intrm_sf_mf_51) {
    t573 = (t572 * t823 + X[97ULL]) - zc_int27 * 1000.0;
  } else if (intrm_sf_mf_55) {
    t573 = X[97ULL];
  } else {
    t573 = (t570 * t809 + X[97ULL]) - t569 * 1000.0;
  }

  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (M[101ULL] != 0) {
        zc_int27 = t577;
      } else {
        zc_int27 = t567 * t823 * 0.001 + t576;
      }
    } else if (intrm_sf_mf_50) {
      zc_int27 = t576;
    } else {
      zc_int27 = zc_int9 * t809 * 0.001 + t576;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (M[102ULL] != 0) {
        zc_int27 = t806;
      } else {
        zc_int27 = zc_int9 * t809 * 0.001 + t576;
      }
    } else if (intrm_sf_mf_53) {
      zc_int27 = t576;
    } else {
      zc_int27 = t567 * t823 * 0.001 + t576;
    }
  } else if (intrm_sf_mf_51) {
    zc_int27 = t567 * t823 * 0.001 + t576;
  } else if (intrm_sf_mf_55) {
    zc_int27 = t576;
  } else {
    zc_int27 = zc_int9 * t809 * 0.001 + t576;
  }

  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_68) {
      if (intrm_sf_mf_67) {
        t806 = zc_int21 * (t806 - zc_int27) * 1000.0 + t573;
        t817 = -pmf_log(t573 / (t806 == 0.0 ? 1.0E-16 : t806));
        zc_int27 = t817 / (t579 == 0.0 ? 1.0E-16 : t579);
      } else {
        zc_int27 = t568;
      }
    } else {
      zc_int27 = 0.0;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_70) {
      if (intrm_sf_mf_69) {
        t809 = zc_int21 * (t577 - zc_int27) * 1000.0 + t573;
        t804 = -pmf_log(t573 / (t809 == 0.0 ? 1.0E-16 : t809));
        zc_int27 = t804 / (t579 == 0.0 ? 1.0E-16 : t579);
      } else {
        zc_int27 = t568;
      }
    } else {
      zc_int27 = 0.0;
    }
  } else {
    zc_int27 = t568;
  }

  zc_int21 = t568 - zc_int27;
  t576 = zc_int0 + (intrm_sf_mf_58 ? 0.0 : intrm_sf_mf_57 ? zc_int21 : 0.0);
  t577 = zc_int27;
  t578 = t571 + (intrm_sf_mf_58 ? zc_int21 : 0.0);
  zc_int27 = ((real_T)(M[107ULL] != 0) * 2.0 - 1.0) * t642 / 0.5;
  if (t648 <= 0.0) {
    zc_int9 = 0.0;
  } else {
    zc_int9 = t648 >= 1.0 ? 1.0 : 0.8 - (zc_int27 - 0.8) * (zc_int27 - 0.8) *
      0.2;
  }

  if (t640 > 0.01) {
    t567 = (boolean_T)(real_T)(X[15ULL] > 1.0) ? t720 * zc_int9 : 0.0;
  } else {
    t567 = 0.0;
  }

  zc_int21 = ((real_T)(M[109ULL] != 0) * 2.0 - 1.0) * t659 / 0.5;
  if (Simscape_Component1_mdot_nozzle <= 0.0) {
    t569 = 0.0;
  } else {
    t569 = Simscape_Component1_mdot_nozzle >= 1.0 ? 1.0 : 0.8 - (zc_int21 - 0.8)
      * (zc_int21 - 0.8) * 0.2;
  }

  if (t656 > 0.01) {
    t570 = (boolean_T)(real_T)(X[88ULL] > 1.0) ? intrm_sf_mf_435 * t569 : 0.0;
  } else {
    t570 = 0.0;
  }

  if (fabs(t716) > t591 * 0.8 / 2.0) {
    t568 = (atan2(fabs((t717 * 2.0 + X[82ULL] * 1.7320508075688772) - X[83ULL] *
                       1.7320508075688772), (X[82ULL] - X[81ULL] * 2.0) + X
                  [83ULL]) * (real_T)(M[104ULL] != 0) + -atan2(fabs((t717 * 2.0
               + X[82ULL] * 1.7320508075688772) - X[83ULL] * 1.7320508075688772),
             (X[82ULL] - X[81ULL] * 2.0) + X[83ULL]) * (real_T)(M[104ULL] == 0))
      * -2.0;
  } else if (fabs(t718) > t591 * 0.8 / 2.0) {
    t568 = -2.0943951023931953 - (atan2(fabs((t717 * 2.0 + X[81ULL] *
      1.7320508075688772) - X[82ULL] * 1.7320508075688772), (X[81ULL] - X[83ULL]
      * 2.0) + X[82ULL]) * (real_T)(M[105ULL] != 0) + -atan2(fabs((t717 * 2.0 +
      X[81ULL] * 1.7320508075688772) - X[82ULL] * 1.7320508075688772), (X[81ULL]
      - X[83ULL] * 2.0) + X[82ULL]) * (real_T)(M[105ULL] == 0)) * 2.0;
  } else if (fabs(t719) > t591 * 0.8 / 2.0) {
    t568 = 2.0943951023931953 - (atan2(fabs((t717 * 2.0 + X[83ULL] *
      1.7320508075688772) - X[81ULL] * 1.7320508075688772), (X[83ULL] - X[82ULL]
      * 2.0) + X[81ULL]) * (real_T)(M[106ULL] != 0) + -atan2(fabs((t717 * 2.0 +
      X[83ULL] * 1.7320508075688772) - X[81ULL] * 1.7320508075688772), (X[83ULL]
      - X[82ULL] * 2.0) + X[81ULL]) * (real_T)(M[106ULL] == 0)) * 2.0;
  } else {
    t568 = 0.0;
  }

  if (intrm_sf_mf_522) {
    if (intrm_sf_mf_515) {
      if (M[111ULL] != 0) {
        t809 = -pmf_log((X[215ULL] - zc_int19 * 1000.0) / (X[215ULL] == 0.0 ?
          1.0E-16 : X[215ULL]));
        t571 = t809 / (t678 == 0.0 ? 1.0E-16 : t678);
      } else {
        t571 = 1.0;
      }
    } else {
      t571 = 0.0;
    }
  } else {
    t571 = intrm_sf_mf_521 ? intrm_sf_mf_518 ? 0.0 : (real_T)!intrm_sf_mf_517 :
      (real_T)intrm_sf_mf_515;
  }

  if (intrm_sf_mf_522) {
    zc_int19 = intrm_sf_mf_515 ? 0.0 : (real_T)!intrm_sf_mf_514;
  } else if (intrm_sf_mf_521) {
    if (intrm_sf_mf_518) {
      if (M[112ULL] != 0) {
        t809 = -pmf_log((X[215ULL] - t674 * 1000.0) / (X[215ULL] == 0.0 ?
          1.0E-16 : X[215ULL]));
        zc_int19 = t809 / (t676 == 0.0 ? 1.0E-16 : t676);
      } else {
        zc_int19 = 1.0;
      }
    } else {
      zc_int19 = 0.0;
    }
  } else {
    zc_int19 = intrm_sf_mf_515 ? 0.0 : (real_T)!intrm_sf_mf_519;
  }

  t572 = (1.0 - t571) - zc_int19;
  if (intrm_sf_mf_522) {
    if (intrm_sf_mf_515) {
      if (M[111ULL] != 0) {
        t573 = t680;
      } else {
        t573 = t673 * Steam_Generator_two_phase_fluid_v_sat_liq * 0.001 + t679;
      }
    } else if (intrm_sf_mf_514) {
      t573 = t679;
    } else {
      t573 = t672 * intrm_sf_mf_510 * 0.001 + t679;
    }
  } else if (intrm_sf_mf_521) {
    if (intrm_sf_mf_518) {
      if (M[112ULL] != 0) {
        t573 = t682;
      } else {
        t573 = t672 * intrm_sf_mf_510 * 0.001 + t679;
      }
    } else if (intrm_sf_mf_517) {
      t573 = t679;
    } else {
      t573 = t673 * Steam_Generator_two_phase_fluid_v_sat_liq * 0.001 + t679;
    }
  } else if (intrm_sf_mf_515) {
    t573 = t673 * Steam_Generator_two_phase_fluid_v_sat_liq * 0.001 + t679;
  } else if (intrm_sf_mf_519) {
    t573 = t679;
  } else {
    t573 = t672 * intrm_sf_mf_510 * 0.001 + t679;
  }

  if (intrm_sf_mf_522) {
    if (t684 < t682) {
      if (intrm_sf_mf_531) {
        t573 = (t682 - t573) / (intrm_sf_mf_526 == 0.0 ? 1.0E-16 :
          intrm_sf_mf_526) / (zc_int53 == 0.0 ? 1.0E-16 : zc_int53) * 1000.0;
      } else {
        t573 = t572;
      }
    } else {
      t573 = 0.0;
    }
  } else if (intrm_sf_mf_521) {
    if (t684 > t680) {
      if (intrm_sf_mf_532) {
        t573 = (t680 - t573) / (intrm_sf_mf_526 == 0.0 ? 1.0E-16 :
          intrm_sf_mf_526) / (zc_int53 == 0.0 ? 1.0E-16 : zc_int53) * 1000.0;
      } else {
        t573 = t572;
      }
    } else {
      t573 = 0.0;
    }
  } else {
    t573 = t572;
  }

  zc_int53 = t572 - t573;
  t574 = t571 + (intrm_sf_mf_522 ? 0.0 : intrm_sf_mf_521 ? zc_int53 : 0.0);
  zc_int53 = zc_int19 + (intrm_sf_mf_522 ? zc_int53 : 0.0);
  zc_int19 = atan(tan(t568 / 2.0)) * 2.0;
  t568 = atan2(fabs(0.0), t590) + -atan2(fabs(0.0), t590) * 0.0;
  t823 = (real_T)(M[103ULL] != 0) * 1.0E-7 + X[130ULL];
  t568 = t591 * 0.816496580927726 / (t823 == 0.0 ? 1.0E-16 : t823) * cos
    (zc_int19 - (zc_int19 - t568));
  zc_int19 = ((t532 * t532 + t533 * t533) + t534 * t534) * t568 * 0.001;
  t568 = t567;
  t567 = ((real_T)(M[108ULL] != 0) * 2.0 - 1.0) * X[122ULL] * t567 / (t655 ==
    0.0 ? 1.0E-16 : t655);
  t567 *= 1000.0;
  t823 = -(-(((real_T)(M[110ULL] != 0) * 2.0 - 1.0) * t588 * t570) / (t655 ==
            0.0 ? 1.0E-16 : t655) * 1000.0);
  t343[0ULL] = 0.0;
  t343[1ULL] = 0.0;
  t343[2ULL] = 0.0;
  t343[3ULL] = 0.0;
  t343[4ULL] = 0.0;
  t343[5ULL] = 0.0;
  t343[6ULL] = 0.0;
  t343[7ULL] = 0.0;
  t343[8ULL] = 0.0;
  t343[9ULL] = 0.0;
  t343[10ULL] = 0.0;
  t343[11ULL] = 0.0;
  t343[12ULL] = 0.0;
  t343[13ULL] = 0.0;
  t343[14ULL] = 0.0;
  t343[15ULL] = 0.0;
  t343[16ULL] = 0.0;
  t343[17ULL] = 0.0;
  t343[18ULL] = 0.0;
  t343[19ULL] = 0.0;
  t343[20ULL] = X[61ULL];
  t343[21ULL] = X[62ULL] * 0.1;
  t343[22ULL] = X[63ULL];
  t343[23ULL] = X[64ULL] * 0.1;
  t343[24ULL] = 0.0;
  t343[25ULL] = X[65ULL];
  t343[26ULL] = X[66ULL];
  t343[27ULL] = U_idx_0;
  t343[28ULL] = X[61ULL];
  t343[29ULL] = X[62ULL] * 0.1;
  t343[30ULL] = X[65ULL];
  t343[31ULL] = X[67ULL];
  t343[32ULL] = X[68ULL];
  t343[33ULL] = X[69ULL];
  t343[34ULL] = X[63ULL];
  t343[35ULL] = X[64ULL] * 0.1;
  t343[36ULL] = X[66ULL];
  t343[37ULL] = X[70ULL];
  t343[38ULL] = -X[68ULL];
  t343[39ULL] = X[69ULL];
  t343[40ULL] = X[68ULL];
  t343[41ULL] = X[71ULL];
  t343[42ULL] = -X[68ULL];
  t343[43ULL] = X[0ULL] * 0.1;
  t343[44ULL] = X[72ULL];
  t343[45ULL] = X[73ULL] * 0.1;
  t343[46ULL] = X[74ULL];
  t343[47ULL] = X[75ULL];
  t343[48ULL] = -X[75ULL];
  t343[49ULL] = X[0ULL] * 0.1;
  t343[50ULL] = X[72ULL];
  t343[51ULL] = X[75ULL];
  t343[52ULL] = X[76ULL];
  t343[53ULL] = X[77ULL];
  t343[54ULL] = X[73ULL] * 0.1;
  t343[55ULL] = X[74ULL];
  t343[56ULL] = -X[75ULL];
  t343[57ULL] = X[76ULL];
  t343[58ULL] = -X[77ULL];
  t343[59ULL] = X[77ULL];
  t343[60ULL] = -X[77ULL];
  t343[61ULL] = X[1ULL];
  t343[62ULL] = X[2ULL];
  t343[63ULL] = X[78ULL];
  t343[64ULL] = X[79ULL];
  t343[65ULL] = X[80ULL];
  t343[66ULL] = X[81ULL];
  t343[67ULL] = X[82ULL];
  t343[68ULL] = X[83ULL];
  t343[69ULL] = Circuit_Breaker_Three_Phase_breakerA_i;
  t343[70ULL] = X[78ULL];
  t343[71ULL] = X[81ULL];
  t343[72ULL] = -X[81ULL] + X[78ULL];
  t343[73ULL] = U_idx_1;
  t343[74ULL] = (real_T)(size_t)Q_idx_0;
  t343[75ULL] = t564;
  t343[76ULL] = X[79ULL];
  t343[77ULL] = X[82ULL];
  t343[78ULL] = -X[82ULL] + X[79ULL];
  t343[79ULL] = U_idx_1;
  t343[80ULL] = (real_T)(size_t)Q_idx_1;
  t343[81ULL] = Circuit_Breaker_Three_Phase_breakerC_i;
  t343[82ULL] = X[80ULL];
  t343[83ULL] = X[83ULL];
  t343[84ULL] = -X[83ULL] + X[80ULL];
  t343[85ULL] = U_idx_1;
  t343[86ULL] = (real_T)(size_t)Q_idx_2;
  t343[87ULL] = Circuit_Breaker_Three_Phase_breakerA_i;
  t343[88ULL] = t564;
  t343[89ULL] = Circuit_Breaker_Three_Phase_breakerC_i;
  t343[90ULL] = X[78ULL];
  t343[91ULL] = X[79ULL];
  t343[92ULL] = X[80ULL];
  t343[93ULL] = X[78ULL];
  t343[94ULL] = X[79ULL];
  t343[95ULL] = X[80ULL];
  t343[96ULL] = -Circuit_Breaker_Three_Phase_breakerA_i;
  t343[97ULL] = -t564;
  t343[98ULL] = -Circuit_Breaker_Three_Phase_breakerC_i;
  t343[99ULL] = t532;
  t343[100ULL] = t533;
  t343[101ULL] = t534;
  t343[102ULL] = X[81ULL];
  t343[103ULL] = X[82ULL];
  t343[104ULL] = X[83ULL];
  t343[105ULL] = X[81ULL];
  t343[106ULL] = X[82ULL];
  t343[107ULL] = X[83ULL];
  t343[108ULL] = Circuit_Breaker_Three_Phase_breakerA_i;
  t343[109ULL] = t564;
  t343[110ULL] = Circuit_Breaker_Three_Phase_breakerC_i;
  t343[111ULL] = U_idx_1;
  t343[112ULL] = X[87ULL];
  t343[113ULL] = 0.101325;
  t343[114ULL] = X[88ULL] * 0.1;
  t343[115ULL] = X[89ULL];
  t343[116ULL] = X[90ULL];
  t343[117ULL] = X[91ULL] * 0.1;
  t343[118ULL] = X[92ULL] * 0.1;
  t343[119ULL] = X[93ULL];
  t343[120ULL] = X[87ULL];
  t343[121ULL] = 0.101325;
  t343[122ULL] = X[90ULL];
  t343[123ULL] = X[91ULL] * 0.1;
  t343[124ULL] = X[3ULL];
  t343[125ULL] = X[4ULL] * 0.1;
  t343[126ULL] = X[5ULL];
  t343[127ULL] = X[94ULL];
  t343[128ULL] = 10.0;
  t343[129ULL] = X[99ULL];
  t343[130ULL] = X[100ULL];
  t343[131ULL] = X[101ULL];
  t343[132ULL] = X[87ULL];
  t343[133ULL] = 0.101325;
  t343[134ULL] = X[102ULL];
  t343[135ULL] = X[103ULL];
  t343[136ULL] = X[94ULL];
  t343[137ULL] = X[104ULL];
  t343[138ULL] = X[87ULL];
  t343[139ULL] = 0.101325;
  t343[140ULL] = X[99ULL];
  t343[141ULL] = X[105ULL];
  t343[142ULL] = X[94ULL];
  t343[143ULL] = X[106ULL];
  t343[144ULL] = X[90ULL];
  t343[145ULL] = X[91ULL] * 0.1;
  t343[146ULL] = X[107ULL];
  t343[147ULL] = X[108ULL];
  t343[148ULL] = 10.0;
  t343[149ULL] = X[109ULL];
  t343[150ULL] = X[90ULL];
  t343[151ULL] = X[91ULL] * 0.1;
  t343[152ULL] = X[100ULL];
  t343[153ULL] = X[110ULL];
  t343[154ULL] = 10.0;
  t343[155ULL] = X[111ULL];
  t343[156ULL] = X[88ULL] * 0.1;
  t343[157ULL] = X[89ULL];
  t343[158ULL] = X[92ULL] * 0.1;
  t343[159ULL] = X[93ULL];
  t343[160ULL] = X[9ULL] * 0.001;
  t343[161ULL] = X[6ULL] * 0.1;
  t343[162ULL] = X[7ULL];
  t343[163ULL] = X[8ULL];
  t343[164ULL] = X[10ULL];
  t343[165ULL] = X[98ULL] * 0.001;
  t343[166ULL] = X[11ULL] * 0.001;
  t343[167ULL] = X[13ULL] * 0.001;
  t343[168ULL] = X[12ULL] * 0.001;
  t343[169ULL] = X[97ULL];
  t343[170ULL] = X[95ULL];
  t343[171ULL] = X[96ULL];
  t343[172ULL] = X[112ULL];
  t343[173ULL] = X[113ULL];
  t343[174ULL] = X[114ULL];
  t343[175ULL] = X[88ULL] * 0.1;
  t343[176ULL] = X[89ULL];
  t343[177ULL] = X[112ULL];
  t343[178ULL] = X[115ULL];
  t343[179ULL] = X[95ULL];
  t343[180ULL] = X[92ULL] * 0.1;
  t343[181ULL] = X[93ULL];
  t343[182ULL] = X[113ULL];
  t343[183ULL] = X[116ULL];
  t343[184ULL] = X[96ULL];
  t343[185ULL] = X[14ULL];
  t343[186ULL] = X[9ULL] * 0.001;
  t343[187ULL] = X[11ULL] * 0.001;
  t343[188ULL] = X[13ULL] * 0.001;
  t343[189ULL] = X[12ULL] * 0.001;
  t343[190ULL] = t576;
  t343[191ULL] = t577;
  t343[192ULL] = t578;
  t343[193ULL] = X[10ULL];
  t343[194ULL] = X[15ULL] * 0.1;
  t343[195ULL] = X[117ULL];
  t343[196ULL] = X[15ULL] * 0.1;
  t343[197ULL] = X[118ULL];
  t343[198ULL] = X[15ULL] * 0.1;
  t343[199ULL] = X[16ULL];
  t343[200ULL] = X[15ULL] * 0.1;
  t343[201ULL] = X[16ULL];
  t343[202ULL] = X[15ULL] * 0.1;
  t343[203ULL] = X[16ULL];
  t343[204ULL] = t587;
  t343[205ULL] = X[119ULL];
  t343[206ULL] = X[120ULL];
  t343[207ULL] = 0.0;
  t343[208ULL] = 0.0;
  t343[209ULL] = 0.0;
  t343[210ULL] = X[15ULL] * 0.1;
  t343[211ULL] = X[117ULL];
  t343[212ULL] = X[119ULL];
  t343[213ULL] = X[121ULL];
  t343[214ULL] = X[122ULL];
  t343[215ULL] = X[15ULL] * 0.1;
  t343[216ULL] = X[118ULL];
  t343[217ULL] = X[120ULL];
  t343[218ULL] = X[123ULL];
  t343[219ULL] = t588;
  t343[220ULL] = X[17ULL];
  t343[221ULL] = X[122ULL];
  t343[222ULL] = t588;
  t343[223ULL] = 0.0;
  t343[224ULL] = 0.0;
  t343[225ULL] = 0.0;
  t343[226ULL] = X[125ULL];
  t343[227ULL] = Controlled_Heat_Flow_Rate_Source_Q * 1000.0;
  t343[228ULL] = Controlled_Heat_Flow_Rate_Source_Q * 1000.0;
  t343[229ULL] = -X[125ULL];
  t343[230ULL] = t535;
  t343[231ULL] = t536;
  t343[232ULL] = t537;
  t343[233ULL] = t535;
  t343[234ULL] = t536;
  t343[235ULL] = t537;
  t343[236ULL] = X[126ULL];
  t343[237ULL] = X[127ULL];
  t343[238ULL] = X[128ULL];
  t343[239ULL] = X[126ULL];
  t343[240ULL] = X[127ULL];
  t343[241ULL] = X[128ULL];
  t343[242ULL] = t541;
  t343[243ULL] = t542;
  t343[244ULL] = t543;
  t343[245ULL] = t541;
  t343[246ULL] = t542;
  t343[247ULL] = t543;
  t343[248ULL] = -t532;
  t343[249ULL] = -t533;
  t343[250ULL] = -t534;
  t343[251ULL] = -t532;
  t343[252ULL] = -t533;
  t343[253ULL] = -t534;
  t343[254ULL] = X[81ULL];
  t343[255ULL] = X[82ULL];
  t343[256ULL] = X[83ULL];
  t343[257ULL] = X[81ULL];
  t343[258ULL] = X[82ULL];
  t343[259ULL] = X[83ULL];
  t343[260ULL] = t544;
  t343[261ULL] = t545;
  t343[262ULL] = t546;
  t343[263ULL] = t544;
  t343[264ULL] = t545;
  t343[265ULL] = t546;
  t343[266ULL] = -t532;
  t343[267ULL] = -t533;
  t343[268ULL] = -t534;
  t343[269ULL] = t544;
  t343[270ULL] = t545;
  t343[271ULL] = t546;
  t343[272ULL] = t535;
  t343[273ULL] = t536;
  t343[274ULL] = t537;
  t343[275ULL] = t541;
  t343[276ULL] = t542;
  t343[277ULL] = t543;
  t343[278ULL] = X[129ULL];
  t343[279ULL] = 0.0;
  t343[280ULL] = 10.0;
  t343[281ULL] = 10.0;
  t343[282ULL] = -t532;
  t343[283ULL] = -t533;
  t343[284ULL] = -t534;
  t343[285ULL] = X[81ULL];
  t343[286ULL] = X[82ULL];
  t343[287ULL] = X[83ULL];
  t343[288ULL] = U_idx_7 * 1000.0;
  t343[289ULL] = 0.0;
  t343[290ULL] = X[130ULL];
  t343[291ULL] = X[131ULL] * 1000.0;
  t343[292ULL] = X[132ULL] * 1000.0;
  t343[293ULL] = D_idx_0;
  t343[294ULL] = zc_int19 * 1000.0;
  t343[295ULL] = 0.0;
  t343[296ULL] = X[92ULL] * 0.1;
  t343[297ULL] = X[93ULL];
  t343[298ULL] = X[133ULL] * 0.1;
  t343[299ULL] = X[134ULL];
  t343[300ULL] = 0.0;
  t343[301ULL] = 0.0;
  t343[302ULL] = 0.0;
  t343[303ULL] = 0.0;
  t343[304ULL] = 0.0;
  t343[305ULL] = -X[113ULL];
  t343[306ULL] = X[135ULL];
  t343[307ULL] = U_idx_3;
  t343[308ULL] = X[92ULL] * 0.1;
  t343[309ULL] = X[93ULL];
  t343[310ULL] = -X[113ULL];
  t343[311ULL] = X[136ULL];
  t343[312ULL] = -X[96ULL];
  t343[313ULL] = X[133ULL] * 0.1;
  t343[314ULL] = X[134ULL];
  t343[315ULL] = X[135ULL];
  t343[316ULL] = X[136ULL];
  t343[317ULL] = X[96ULL];
  t343[318ULL] = X[141ULL];
  t343[319ULL] = X[137ULL];
  t343[320ULL] = X[138ULL];
  t343[321ULL] = X[139ULL];
  t343[322ULL] = X[140ULL];
  t343[323ULL] = -X[96ULL];
  t343[324ULL] = X[96ULL];
  t343[325ULL] = X[125ULL];
  t343[326ULL] = X[125ULL];
  t343[327ULL] = Controlled_Heat_Flow_Rate_Source_Q * 1000.0;
  t343[328ULL] = Controlled_Heat_Flow_Rate_Source_Q * 1000.0;
  t343[329ULL] = Controlled_Heat_Flow_Rate_Source_Q * 0.001;
  t343[330ULL] = 0.0;
  t343[331ULL] = U_idx_3;
  t343[332ULL] = U_idx_3;
  t343[333ULL] = -X[141ULL];
  t343[334ULL] = U_idx_3;
  t343[335ULL] = 0.0;
  t343[336ULL] = U_idx_0;
  t343[337ULL] = U_idx_0;
  t343[338ULL] = -X[71ULL];
  t343[339ULL] = U_idx_0;
  t343[340ULL] = X[142ULL];
  t343[341ULL] = 15.0;
  t343[342ULL] = X[143ULL];
  t343[343ULL] = X[144ULL] * 0.1;
  t343[344ULL] = X[145ULL];
  t343[345ULL] = -X[145ULL];
  t343[346ULL] = X[142ULL];
  t343[347ULL] = 15.0;
  t343[348ULL] = X[145ULL];
  t343[349ULL] = X[146ULL];
  t343[350ULL] = X[147ULL];
  t343[351ULL] = X[148ULL];
  t343[352ULL] = X[143ULL];
  t343[353ULL] = X[144ULL] * 0.1;
  t343[354ULL] = -X[145ULL];
  t343[355ULL] = X[149ULL];
  t343[356ULL] = -X[147ULL];
  t343[357ULL] = X[148ULL];
  t343[358ULL] = 0.0;
  t343[359ULL] = X[147ULL];
  t343[360ULL] = -X[147ULL];
  t343[361ULL] = X[150ULL];
  t343[362ULL] = X[18ULL];
  t343[363ULL] = (-X[151ULL] - X[152ULL]) - X[153ULL];
  t343[364ULL] = X[18ULL];
  t343[365ULL] = X[133ULL] * 0.1;
  t343[366ULL] = X[134ULL];
  t343[367ULL] = X[133ULL] * 0.1;
  t343[368ULL] = X[134ULL];
  t343[369ULL] = -X[96ULL];
  t343[370ULL] = -X[135ULL];
  t343[371ULL] = -X[135ULL];
  t343[372ULL] = -X[96ULL];
  t343[373ULL] = X[0ULL] * 0.1;
  t343[374ULL] = X[154ULL];
  t343[375ULL] = X[0ULL] * 0.1;
  t343[376ULL] = X[154ULL];
  t343[377ULL] = X[124ULL];
  t343[378ULL] = X[155ULL];
  t343[379ULL] = X[155ULL];
  t343[380ULL] = X[124ULL];
  t343[381ULL] = X[124ULL];
  t343[382ULL] = X[88ULL] * 0.1;
  t343[383ULL] = X[89ULL];
  t343[384ULL] = X[88ULL] * 0.1;
  t343[385ULL] = X[89ULL];
  t343[386ULL] = X[95ULL];
  t343[387ULL] = X[112ULL];
  t343[388ULL] = X[112ULL];
  t343[389ULL] = X[95ULL];
  t343[390ULL] = X[112ULL];
  t343[391ULL] = X[0ULL] * 0.1;
  t343[392ULL] = X[156ULL];
  t343[393ULL] = X[0ULL] * 0.1;
  t343[394ULL] = X[156ULL];
  t343[395ULL] = X[157ULL];
  t343[396ULL] = X[158ULL];
  t343[397ULL] = X[158ULL];
  t343[398ULL] = X[157ULL];
  t343[399ULL] = X[157ULL];
  t343[400ULL] = X[88ULL] * 0.1;
  t343[401ULL] = X[89ULL];
  t343[402ULL] = X[88ULL] * 0.1;
  t343[403ULL] = X[89ULL];
  t343[404ULL] = t596;
  t343[405ULL] = X[159ULL];
  t343[406ULL] = X[159ULL];
  t343[407ULL] = t596;
  t343[408ULL] = t596;
  t343[409ULL] = X[0ULL] * 0.1;
  t343[410ULL] = X[154ULL];
  t343[411ULL] = X[0ULL] * 0.1;
  t343[412ULL] = X[154ULL];
  t343[413ULL] = X[122ULL];
  t343[414ULL] = t598;
  t343[415ULL] = t598;
  t343[416ULL] = X[122ULL];
  t343[417ULL] = X[122ULL];
  t343[418ULL] = X[0ULL] * 0.1;
  t343[419ULL] = X[72ULL];
  t343[420ULL] = X[0ULL] * 0.1;
  t343[421ULL] = X[72ULL];
  t343[422ULL] = X[77ULL];
  t343[423ULL] = X[75ULL];
  t343[424ULL] = X[75ULL];
  t343[425ULL] = X[77ULL];
  t343[426ULL] = X[77ULL];
  t343[427ULL] = X[0ULL] * 0.1;
  t343[428ULL] = X[160ULL];
  t343[429ULL] = X[0ULL] * 0.1;
  t343[430ULL] = X[160ULL];
  t343[431ULL] = X[161ULL];
  t343[432ULL] = X[162ULL];
  t343[433ULL] = X[162ULL];
  t343[434ULL] = X[161ULL];
  t343[435ULL] = X[162ULL];
  t343[436ULL] = X[73ULL] * 0.1;
  t343[437ULL] = X[74ULL];
  t343[438ULL] = X[73ULL] * 0.1;
  t343[439ULL] = X[74ULL];
  t343[440ULL] = t599;
  t343[441ULL] = t600;
  t343[442ULL] = t600;
  t343[443ULL] = t599;
  t343[444ULL] = t600;
  t343[445ULL] = X[92ULL] * 0.1;
  t343[446ULL] = X[93ULL];
  t343[447ULL] = X[92ULL] * 0.1;
  t343[448ULL] = X[93ULL];
  t343[449ULL] = -X[96ULL];
  t343[450ULL] = -X[113ULL];
  t343[451ULL] = -X[113ULL];
  t343[452ULL] = -X[96ULL];
  t343[453ULL] = -X[113ULL];
  t343[454ULL] = -X[96ULL];
  t343[455ULL] = X[90ULL];
  t343[456ULL] = X[91ULL] * 0.1;
  t343[457ULL] = X[90ULL];
  t343[458ULL] = X[91ULL] * 0.1;
  t343[459ULL] = 10.0;
  t343[460ULL] = X[100ULL] * 1000.0;
  t343[461ULL] = X[100ULL];
  t343[462ULL] = 10.0;
  t343[463ULL] = X[87ULL];
  t343[464ULL] = 0.101325;
  t343[465ULL] = X[87ULL];
  t343[466ULL] = 0.101325;
  t343[467ULL] = -X[94ULL];
  t343[468ULL] = X[99ULL] * -1000.0;
  t343[469ULL] = -X[99ULL];
  t343[470ULL] = -X[94ULL];
  t343[471ULL] = -X[99ULL];
  t343[472ULL] = X[63ULL];
  t343[473ULL] = X[64ULL] * 0.1;
  t343[474ULL] = X[63ULL];
  t343[475ULL] = X[64ULL] * 0.1;
  t343[476ULL] = X[68ULL];
  t343[477ULL] = X[66ULL] * -1000.0;
  t343[478ULL] = -X[66ULL];
  t343[479ULL] = X[68ULL];
  t343[480ULL] = X[68ULL];
  t343[481ULL] = X[100ULL];
  t343[482ULL] = X[165ULL];
  t343[483ULL] = 0.2;
  t343[484ULL] = X[90ULL];
  t343[485ULL] = X[91ULL] * 0.1;
  t343[486ULL] = X[166ULL];
  t343[487ULL] = -X[100ULL];
  t343[488ULL] = X[165ULL];
  t343[489ULL] = 0.2;
  t343[490ULL] = X[166ULL];
  t343[491ULL] = X[167ULL];
  t343[492ULL] = 10.0;
  t343[493ULL] = X[168ULL];
  t343[494ULL] = X[90ULL];
  t343[495ULL] = X[91ULL] * 0.1;
  t343[496ULL] = -X[100ULL];
  t343[497ULL] = X[169ULL];
  t343[498ULL] = -10.0;
  t343[499ULL] = X[168ULL];
  t343[500ULL] = 10.0;
  t343[501ULL] = -10.0;
  t343[502ULL] = 0.0;
  t343[503ULL] = 0.0;
  t343[504ULL] = 0.0;
  t343[505ULL] = 0.0;
  t343[506ULL] = 0.0;
  t343[507ULL] = 0.0;
  t343[508ULL] = X[170ULL];
  t343[509ULL] = X[171ULL] * 0.1;
  t343[510ULL] = X[172ULL];
  t343[511ULL] = X[173ULL] * 0.1;
  t343[512ULL] = X[125ULL];
  t343[513ULL] = X[174ULL];
  t343[514ULL] = X[175ULL];
  t343[515ULL] = X[19ULL] * 0.1;
  t343[516ULL] = X[20ULL];
  t343[517ULL] = X[176ULL];
  t343[518ULL] = X[177ULL];
  t343[519ULL] = Controlled_Heat_Flow_Rate_Source_Q;
  t343[520ULL] = X[170ULL];
  t343[521ULL] = X[171ULL] * 0.1;
  t343[522ULL] = X[174ULL];
  t343[523ULL] = X[178ULL];
  t343[524ULL] = X[176ULL];
  t343[525ULL] = X[179ULL];
  t343[526ULL] = X[172ULL];
  t343[527ULL] = X[173ULL] * 0.1;
  t343[528ULL] = X[175ULL];
  t343[529ULL] = X[180ULL];
  t343[530ULL] = X[177ULL];
  t343[531ULL] = X[181ULL];
  t343[532ULL] = X[63ULL];
  t343[533ULL] = X[64ULL] * 0.1;
  t343[534ULL] = X[170ULL];
  t343[535ULL] = X[171ULL] * 0.1;
  t343[536ULL] = X[182ULL];
  t343[537ULL] = -X[66ULL];
  t343[538ULL] = -X[174ULL];
  t343[539ULL] = X[21ULL] * 0.1;
  t343[540ULL] = X[22ULL];
  t343[541ULL] = X[68ULL];
  t343[542ULL] = -X[176ULL];
  t343[543ULL] = 0.0;
  t343[544ULL] = X[63ULL];
  t343[545ULL] = X[64ULL] * 0.1;
  t343[546ULL] = -X[66ULL];
  t343[547ULL] = X[183ULL];
  t343[548ULL] = X[68ULL];
  t343[549ULL] = X[184ULL];
  t343[550ULL] = X[170ULL];
  t343[551ULL] = X[171ULL] * 0.1;
  t343[552ULL] = -X[174ULL];
  t343[553ULL] = X[185ULL];
  t343[554ULL] = -X[176ULL];
  t343[555ULL] = X[186ULL];
  t343[556ULL] = X[172ULL];
  t343[557ULL] = X[173ULL] * 0.1;
  t343[558ULL] = X[143ULL];
  t343[559ULL] = X[144ULL] * 0.1;
  t343[560ULL] = X[187ULL];
  t343[561ULL] = -X[175ULL];
  t343[562ULL] = t601;
  t343[563ULL] = X[23ULL] * 0.1;
  t343[564ULL] = X[24ULL];
  t343[565ULL] = -X[177ULL];
  t343[566ULL] = t602;
  t343[567ULL] = 0.0;
  t343[568ULL] = X[172ULL];
  t343[569ULL] = X[173ULL] * 0.1;
  t343[570ULL] = -X[175ULL];
  t343[571ULL] = X[190ULL];
  t343[572ULL] = -X[177ULL];
  t343[573ULL] = X[191ULL];
  t343[574ULL] = X[143ULL];
  t343[575ULL] = X[144ULL] * 0.1;
  t343[576ULL] = t601;
  t343[577ULL] = X[192ULL];
  t343[578ULL] = t602;
  t343[579ULL] = X[193ULL];
  t343[580ULL] = -t532;
  t343[581ULL] = -t533;
  t343[582ULL] = -t534;
  t343[583ULL] = X[81ULL];
  t343[584ULL] = X[82ULL];
  t343[585ULL] = X[83ULL];
  t343[586ULL] = X[81ULL];
  t343[587ULL] = X[82ULL];
  t343[588ULL] = X[83ULL];
  t343[589ULL] = Power_Sensor_Three_Phase_Pm * 1000.0;
  t343[590ULL] = (((-(X[82ULL] * t532) - X[83ULL] * t533) - X[81ULL] * t534) -
                  ((-(X[83ULL] * t532) - X[81ULL] * t533) - X[82ULL] * t534)) /
    1.7320508075688772 * 0.001 * 1000.0;
  t343[591ULL] = Power_Sensor_Three_Phase_Pm * 1000.0;
  t343[592ULL] = X[133ULL] * 0.1;
  t343[593ULL] = X[134ULL];
  t343[594ULL] = X[73ULL] * 0.1;
  t343[595ULL] = X[74ULL];
  t343[596ULL] = 0.0;
  t343[597ULL] = X[194ULL];
  t343[598ULL] = t607 * 1000.0;
  t343[599ULL] = t607 * 1000.0;
  t343[600ULL] = -X[194ULL];
  t343[601ULL] = X[194ULL];
  t343[602ULL] = X[194ULL];
  t343[603ULL] = t607 * 1000.0;
  t343[604ULL] = t607 * 1000.0;
  t343[605ULL] = t607;
  t343[606ULL] = X[133ULL] * 0.1;
  t343[607ULL] = X[134ULL];
  t343[608ULL] = X[73ULL] * 0.1;
  t343[609ULL] = X[74ULL];
  t343[610ULL] = X[25ULL] * 0.1;
  t343[611ULL] = X[26ULL];
  t343[612ULL] = X[194ULL];
  t343[613ULL] = -X[96ULL];
  t343[614ULL] = -t599;
  t343[615ULL] = -X[135ULL];
  t343[616ULL] = -t600;
  t343[617ULL] = t607;
  t343[618ULL] = X[133ULL] * 0.1;
  t343[619ULL] = X[134ULL];
  t343[620ULL] = -X[135ULL];
  t343[621ULL] = X[195ULL];
  t343[622ULL] = -X[96ULL];
  t343[623ULL] = X[73ULL] * 0.1;
  t343[624ULL] = X[74ULL];
  t343[625ULL] = -t600;
  t343[626ULL] = X[196ULL];
  t343[627ULL] = -t599;
  t343[628ULL] = X[27ULL] * 1550.0031000062004;
  t343[629ULL] = X[197ULL];
  t343[630ULL] = X[198ULL];
  t343[631ULL] = U_idx_4;
  t343[632ULL] = 0.0;
  t343[633ULL] = X[73ULL] * 0.1;
  t343[634ULL] = X[74ULL];
  t343[635ULL] = t610;
  t343[636ULL] = t611 * 0.001;
  t343[637ULL] = t612;
  t343[638ULL] = Preheating_Thermodynamic_Properties_Sensor_2P1_V;
  t343[639ULL] = t612 - 273.15;
  t343[640ULL] = X[133ULL] * 0.1;
  t343[641ULL] = X[134ULL];
  t343[642ULL] = X[133ULL] * t597 * 100.0 + X[134ULL];
  t343[643ULL] = t614 * 0.001;
  t343[644ULL] = t615;
  t343[645ULL] = t597;
  t343[646ULL] = t615 - 273.15;
  t343[647ULL] = X[133ULL] * 0.1;
  t343[648ULL] = X[134ULL];
  t343[649ULL] = 0.0;
  t343[650ULL] = 0.0;
  t343[651ULL] = X[133ULL] * 0.1;
  t343[652ULL] = X[134ULL];
  t343[653ULL] = X[88ULL] * 0.1;
  t343[654ULL] = X[89ULL];
  t343[655ULL] = 0.0;
  t343[656ULL] = 0.0;
  t343[657ULL] = X[88ULL] * 0.1;
  t343[658ULL] = X[89ULL];
  t343[659ULL] = X[88ULL] * 0.1;
  t343[660ULL] = X[89ULL];
  t343[661ULL] = X[15ULL] * 0.1;
  t343[662ULL] = X[117ULL];
  t343[663ULL] = 0.0;
  t343[664ULL] = 0.0;
  t343[665ULL] = X[15ULL] * 0.1;
  t343[666ULL] = X[117ULL];
  t343[667ULL] = X[15ULL] * 0.1;
  t343[668ULL] = X[117ULL];
  t343[669ULL] = X[92ULL] * 0.1;
  t343[670ULL] = X[93ULL];
  t343[671ULL] = 0.0;
  t343[672ULL] = 0.0;
  t343[673ULL] = X[92ULL] * 0.1;
  t343[674ULL] = X[93ULL];
  t343[675ULL] = X[92ULL] * 0.1;
  t343[676ULL] = X[93ULL];
  t343[677ULL] = X[0ULL] * 0.1;
  t343[678ULL] = X[160ULL];
  t343[679ULL] = 0.0;
  t343[680ULL] = 0.0;
  t343[681ULL] = X[0ULL] * 0.1;
  t343[682ULL] = X[160ULL];
  t343[683ULL] = X[0ULL] * 0.1;
  t343[684ULL] = X[160ULL];
  t343[685ULL] = X[92ULL] * 0.1;
  t343[686ULL] = X[93ULL];
  t343[687ULL] = 0.0;
  t343[688ULL] = 0.0;
  t343[689ULL] = X[92ULL] * 0.1;
  t343[690ULL] = X[93ULL];
  t343[691ULL] = X[92ULL] * 0.1;
  t343[692ULL] = X[0ULL] * 0.1;
  t343[693ULL] = X[154ULL];
  t343[694ULL] = 0.0;
  t343[695ULL] = 0.0;
  t343[696ULL] = X[0ULL] * 0.1;
  t343[697ULL] = X[154ULL];
  t343[698ULL] = X[0ULL] * 0.1;
  t343[699ULL] = X[154ULL];
  t343[700ULL] = X[133ULL] * 0.1;
  t343[701ULL] = X[0ULL] * 0.1;
  t343[702ULL] = X[154ULL];
  t343[703ULL] = X[88ULL] * 0.1;
  t343[704ULL] = X[89ULL];
  t343[705ULL] = X[159ULL];
  t343[706ULL] = -X[159ULL];
  t343[707ULL] = 0.0;
  t343[708ULL] = X[0ULL] * 0.1;
  t343[709ULL] = X[154ULL];
  t343[710ULL] = X[159ULL];
  t343[711ULL] = X[199ULL];
  t343[712ULL] = t596;
  t343[713ULL] = X[88ULL] * 0.1;
  t343[714ULL] = X[89ULL];
  t343[715ULL] = -X[159ULL];
  t343[716ULL] = X[199ULL];
  t343[717ULL] = -t596;
  t343[718ULL] = t596;
  t343[719ULL] = -t596;
  t343[720ULL] = X[28ULL];
  t343[721ULL] = X[29ULL];
  t343[722ULL] = X[0ULL] * 0.1;
  t343[723ULL] = X[156ULL];
  t343[724ULL] = 4.0;
  t343[725ULL] = X[200ULL];
  t343[726ULL] = -X[158ULL];
  t343[727ULL] = X[158ULL];
  t343[728ULL] = 0.0;
  t343[729ULL] = X[0ULL] * 0.1;
  t343[730ULL] = X[156ULL];
  t343[731ULL] = -X[158ULL];
  t343[732ULL] = X[201ULL];
  t343[733ULL] = -X[157ULL];
  t343[734ULL] = 4.0;
  t343[735ULL] = X[200ULL];
  t343[736ULL] = X[158ULL];
  t343[737ULL] = X[201ULL];
  t343[738ULL] = X[157ULL];
  t343[739ULL] = -X[157ULL];
  t343[740ULL] = X[157ULL];
  t343[741ULL] = X[30ULL];
  t343[742ULL] = X[31ULL];
  t343[743ULL] = X[172ULL];
  t343[744ULL] = X[173ULL] * 0.1;
  t343[745ULL] = 0.0;
  t343[746ULL] = 0.0;
  t343[747ULL] = X[173ULL] * 99999.999999999985;
  t343[748ULL] = X[172ULL];
  t343[749ULL] = X[61ULL];
  t343[750ULL] = X[62ULL] * 0.1;
  t343[751ULL] = 0.0;
  t343[752ULL] = 0.0;
  t343[753ULL] = X[62ULL] * 99999.999999999985;
  t343[754ULL] = X[61ULL];
  t343[755ULL] = X[61ULL] - 273.15;
  t343[756ULL] = X[143ULL];
  t343[757ULL] = X[144ULL] * 0.1;
  t343[758ULL] = 0.0;
  t343[759ULL] = 0.0;
  t343[760ULL] = X[144ULL] * 99999.999999999985;
  t343[761ULL] = X[143ULL];
  t343[762ULL] = X[143ULL] - 273.15;
  t343[763ULL] = X[173ULL] * 0.099999999999999992;
  t343[764ULL] = X[172ULL] - 273.15;
  t343[765ULL] = 4.0;
  t343[766ULL] = X[200ULL];
  t343[767ULL] = -X[158ULL];
  t343[768ULL] = 4.0;
  t343[769ULL] = X[200ULL];
  t343[770ULL] = -X[158ULL];
  t343[771ULL] = X[202ULL];
  t343[772ULL] = -X[157ULL];
  t343[773ULL] = -X[157ULL];
  t343[774ULL] = 4.0;
  t343[775ULL] = 502.26708950739749;
  t343[776ULL] = X[142ULL];
  t343[777ULL] = 15.0;
  t343[778ULL] = -X[145ULL];
  t343[779ULL] = 588.15;
  t343[780ULL] = X[142ULL];
  t343[781ULL] = 15.0;
  t343[782ULL] = -X[145ULL];
  t343[783ULL] = X[203ULL];
  t343[784ULL] = -X[147ULL];
  t343[785ULL] = 1402.7179873660207;
  t343[786ULL] = 15.0;
  t343[787ULL] = -X[147ULL];
  t343[788ULL] = X[165ULL];
  t343[789ULL] = 0.2;
  t343[790ULL] = -X[166ULL];
  t343[791ULL] = 293.15;
  t343[792ULL] = X[165ULL];
  t343[793ULL] = 0.2;
  t343[794ULL] = -X[166ULL];
  t343[795ULL] = X[204ULL];
  t343[796ULL] = -10.0;
  t343[797ULL] = 83.887262122266435;
  t343[798ULL] = 0.2;
  t343[799ULL] = -10.0;
  t343[800ULL] = X[87ULL];
  t343[801ULL] = 0.101325;
  t343[802ULL] = -X[99ULL];
  t343[803ULL] = 293.15;
  t343[804ULL] = X[87ULL];
  t343[805ULL] = 0.101325;
  t343[806ULL] = -X[99ULL];
  t343[807ULL] = X[205ULL];
  t343[808ULL] = -X[94ULL];
  t343[809ULL] = 83.893856050917179;
  t343[810ULL] = 0.101325;
  t343[811ULL] = -X[94ULL];
  t343[812ULL] = X[0ULL] * 0.1;
  t343[813ULL] = X[154ULL];
  t343[814ULL] = t634;
  t343[815ULL] = t635;
  t343[816ULL] = 0.0;
  t343[817ULL] = 0.0;
  t343[818ULL] = 0.0;
  t343[819ULL] = 0.0;
  t343[820ULL] = t637;
  t343[821ULL] = t639;
  t343[822ULL] = 0.0;
  t343[823ULL] = 0.0;
  t343[824ULL] = t636;
  t343[825ULL] = t638;
  t343[826ULL] = t637;
  t343[827ULL] = t639;
  t343[828ULL] = X[0ULL] * 0.1;
  t343[829ULL] = X[154ULL];
  t343[830ULL] = X[15ULL] * 0.1;
  t343[831ULL] = X[117ULL];
  t343[832ULL] = 0.0;
  t343[833ULL] = t598;
  t343[834ULL] = -X[119ULL];
  t343[835ULL] = X[18ULL];
  t343[836ULL] = U_idx_5;
  t343[837ULL] = X[0ULL] * 0.1;
  t343[838ULL] = X[154ULL];
  t343[839ULL] = t598;
  t343[840ULL] = X[206ULL];
  t343[841ULL] = X[122ULL];
  t343[842ULL] = X[15ULL] * 0.1;
  t343[843ULL] = X[117ULL];
  t343[844ULL] = -X[119ULL];
  t343[845ULL] = X[207ULL];
  t343[846ULL] = -X[122ULL];
  t343[847ULL] = zc_int9;
  t343[848ULL] = t568;
  t343[849ULL] = Simscape_Component_h_A;
  t343[850ULL] = Simscape_Component_ideal_outlet_quality;
  t343[851ULL] = t627 * 0.001;
  t343[852ULL] = t641;
  t343[853ULL] = X[122ULL];
  t343[854ULL] = zc_int27;
  t343[855ULL] = X[122ULL];
  t343[856ULL] = -X[122ULL];
  t343[857ULL] = t650;
  t343[858ULL] = t645;
  t343[859ULL] = t644;
  t343[860ULL] = t647;
  t343[861ULL] = X[18ULL];
  t343[862ULL] = t567;
  t343[863ULL] = X[151ULL];
  t343[864ULL] = X[154ULL];
  t343[865ULL] = X[15ULL] * 0.1;
  t343[866ULL] = X[118ULL];
  t343[867ULL] = X[88ULL] * 0.1;
  t343[868ULL] = X[89ULL];
  t343[869ULL] = 0.0;
  t343[870ULL] = -X[120ULL];
  t343[871ULL] = t657;
  t343[872ULL] = X[18ULL];
  t343[873ULL] = U_idx_6;
  t343[874ULL] = X[15ULL] * 0.1;
  t343[875ULL] = X[118ULL];
  t343[876ULL] = -X[120ULL];
  t343[877ULL] = X[208ULL];
  t343[878ULL] = -t588;
  t343[879ULL] = X[88ULL] * 0.1;
  t343[880ULL] = X[89ULL];
  t343[881ULL] = t657;
  t343[882ULL] = X[209ULL];
  t343[883ULL] = t588;
  t343[884ULL] = t569;
  t343[885ULL] = t570;
  t343[886ULL] = t663;
  t343[887ULL] = t666;
  t343[888ULL] = Simscape_Component1_inlet_entropy * 0.001;
  t343[889ULL] = t658;
  t343[890ULL] = -t588;
  t343[891ULL] = zc_int21;
  t343[892ULL] = -t588;
  t343[893ULL] = t588;
  t343[894ULL] = Simscape_Component1_s_g_B;
  t343[895ULL] = Simscape_Component1_nozzle_choked_out;
  t343[896ULL] = t661;
  t343[897ULL] = t664;
  t343[898ULL] = X[18ULL];
  t343[899ULL] = -t823;
  t343[900ULL] = X[152ULL];
  t343[901ULL] = X[118ULL];
  t343[902ULL] = t569;
  t343[903ULL] = t570;
  t343[904ULL] = t663;
  t343[905ULL] = t666;
  t343[906ULL] = Simscape_Component1_inlet_entropy * 0.001;
  t343[907ULL] = t658 - 273.15;
  t343[908ULL] = -t588;
  t343[909ULL] = zc_int21;
  t343[910ULL] = Simscape_Component1_s_g_B;
  t343[911ULL] = Simscape_Component1_nozzle_choked_out;
  t343[912ULL] = t661;
  t343[913ULL] = t664;
  t343[914ULL] = X[18ULL];
  t343[915ULL] = -t823;
  t343[916ULL] = zc_int9;
  t343[917ULL] = t568;
  t343[918ULL] = Simscape_Component_h_A;
  t343[919ULL] = Simscape_Component_ideal_outlet_quality;
  t343[920ULL] = t627 * 0.001;
  t343[921ULL] = t641 - 273.15;
  t343[922ULL] = X[122ULL];
  t343[923ULL] = zc_int27;
  t343[924ULL] = t650;
  t343[925ULL] = t645;
  t343[926ULL] = t644;
  t343[927ULL] = t647;
  t343[928ULL] = X[18ULL];
  t343[929ULL] = t567;
  t343[930ULL] = U_idx_7;
  t343[931ULL] = U_idx_1;
  t343[932ULL] = U_idx_6;
  t343[933ULL] = U_idx_3;
  t343[934ULL] = U_idx_5;
  t343[935ULL] = U_idx_5;
  t343[936ULL] = X[0ULL] * 0.1;
  t343[937ULL] = X[156ULL];
  t343[938ULL] = X[0ULL] * 0.1;
  t343[939ULL] = X[160ULL];
  t343[940ULL] = X[0ULL] * 0.1;
  t343[941ULL] = X[72ULL];
  t343[942ULL] = X[0ULL] * 0.1;
  t343[943ULL] = X[154ULL];
  t343[944ULL] = X[0ULL] * 0.1;
  t343[945ULL] = X[32ULL];
  t343[946ULL] = X[33ULL];
  t343[947ULL] = X[34ULL];
  t343[948ULL] = X[35ULL];
  t343[949ULL] = X[210ULL];
  t343[950ULL] = t670;
  t343[951ULL] = X[158ULL];
  t343[952ULL] = X[157ULL];
  t343[953ULL] = -X[77ULL];
  t343[954ULL] = -X[75ULL];
  t343[955ULL] = X[162ULL];
  t343[956ULL] = X[161ULL];
  t343[957ULL] = -X[124ULL];
  t343[958ULL] = -X[155ULL];
  t343[959ULL] = 0.0;
  t343[960ULL] = X[0ULL] * 0.1;
  t343[961ULL] = X[156ULL];
  t343[962ULL] = X[158ULL];
  t343[963ULL] = X[211ULL];
  t343[964ULL] = X[157ULL];
  t343[965ULL] = X[0ULL] * 0.1;
  t343[966ULL] = X[160ULL];
  t343[967ULL] = X[162ULL];
  t343[968ULL] = X[212ULL];
  t343[969ULL] = X[161ULL];
  t343[970ULL] = X[0ULL] * 0.1;
  t343[971ULL] = X[72ULL];
  t343[972ULL] = -X[75ULL];
  t343[973ULL] = X[213ULL];
  t343[974ULL] = -X[77ULL];
  t343[975ULL] = X[0ULL] * 0.1;
  t343[976ULL] = X[154ULL];
  t343[977ULL] = -X[155ULL];
  t343[978ULL] = X[214ULL];
  t343[979ULL] = -X[124ULL];
  t343[980ULL] = t670;
  t343[981ULL] = X[143ULL];
  t343[982ULL] = X[144ULL] * 0.1;
  t343[983ULL] = X[73ULL] * 0.1;
  t343[984ULL] = X[74ULL];
  t343[985ULL] = X[61ULL];
  t343[986ULL] = X[62ULL] * 0.1;
  t343[987ULL] = X[0ULL] * 0.1;
  t343[988ULL] = X[160ULL];
  t343[989ULL] = X[143ULL];
  t343[990ULL] = X[144ULL] * 0.1;
  t343[991ULL] = X[61ULL];
  t343[992ULL] = X[62ULL] * 0.1;
  t343[993ULL] = X[36ULL];
  t343[994ULL] = X[37ULL] * 0.1;
  t343[995ULL] = X[38ULL];
  t343[996ULL] = X[189ULL];
  t343[997ULL] = -X[68ULL];
  t343[998ULL] = X[188ULL];
  t343[999ULL] = -X[65ULL];
  t343[1000ULL] = X[217ULL];
  t343[1001ULL] = X[143ULL];
  t343[1002ULL] = X[144ULL] * 0.1;
  t343[1003ULL] = X[218ULL];
  t343[1004ULL] = X[219ULL];
  t343[1005ULL] = X[189ULL];
  t343[1006ULL] = X[220ULL];
  t343[1007ULL] = X[143ULL];
  t343[1008ULL] = X[144ULL] * 0.1;
  t343[1009ULL] = X[188ULL];
  t343[1010ULL] = X[221ULL];
  t343[1011ULL] = X[189ULL];
  t343[1012ULL] = X[222ULL];
  t343[1013ULL] = X[61ULL];
  t343[1014ULL] = X[62ULL] * 0.1;
  t343[1015ULL] = X[223ULL];
  t343[1016ULL] = X[224ULL];
  t343[1017ULL] = -X[68ULL];
  t343[1018ULL] = X[225ULL];
  t343[1019ULL] = X[61ULL];
  t343[1020ULL] = X[62ULL] * 0.1;
  t343[1021ULL] = -X[65ULL];
  t343[1022ULL] = X[226ULL];
  t343[1023ULL] = -X[68ULL];
  t343[1024ULL] = X[227ULL];
  t343[1025ULL] = X[73ULL] * 0.1;
  t343[1026ULL] = X[74ULL];
  t343[1027ULL] = X[0ULL] * 0.1;
  t343[1028ULL] = X[160ULL];
  t343[1029ULL] = X[43ULL] * 0.001;
  t343[1030ULL] = X[39ULL] * 0.1;
  t343[1031ULL] = X[40ULL];
  t343[1032ULL] = X[41ULL];
  t343[1033ULL] = X[44ULL];
  t343[1034ULL] = X[216ULL] * 0.001;
  t343[1035ULL] = X[42ULL] * 0.001;
  t343[1036ULL] = X[46ULL] * 0.001;
  t343[1037ULL] = X[45ULL] * 0.001;
  t343[1038ULL] = X[215ULL];
  t343[1039ULL] = X[163ULL];
  t343[1040ULL] = -X[161ULL];
  t343[1041ULL] = X[164ULL];
  t343[1042ULL] = -X[162ULL];
  t343[1043ULL] = X[228ULL];
  t343[1044ULL] = X[73ULL] * 0.1;
  t343[1045ULL] = X[74ULL];
  t343[1046ULL] = X[164ULL];
  t343[1047ULL] = X[229ULL];
  t343[1048ULL] = X[163ULL];
  t343[1049ULL] = X[0ULL] * 0.1;
  t343[1050ULL] = X[160ULL];
  t343[1051ULL] = -X[162ULL];
  t343[1052ULL] = X[230ULL];
  t343[1053ULL] = -X[161ULL];
  t343[1054ULL] = X[47ULL];
  t343[1055ULL] = X[43ULL] * 0.001;
  t343[1056ULL] = X[42ULL] * 0.001;
  t343[1057ULL] = X[46ULL] * 0.001;
  t343[1058ULL] = X[45ULL] * 0.001;
  t343[1059ULL] = t574;
  t343[1060ULL] = t573;
  t343[1061ULL] = zc_int53;
  t343[1062ULL] = X[44ULL];
  t343[1063ULL] = U_idx_0;
  t343[1064ULL] = U_idx_0;
  t343[1065ULL] = U_idx_2;
  t343[1066ULL] = Controlled_Heat_Flow_Rate_Source_Q * 0.001;
  for (t460 = 231ULL; t460 - 231ULL < 11ULL; t460++) {
    t343[t460 + 836ULL] = X[t460];
  }

  t343[1078ULL] = X[233ULL];
  t343[1079ULL] = X[233ULL];
  t343[1080ULL] = 0.0;
  t343[1081ULL] = -t535;
  t343[1082ULL] = -t536;
  t343[1083ULL] = -t537;
  t343[1084ULL] = 1.66;
  t343[1085ULL] = 1.61;
  t343[1086ULL] = X[126ULL];
  t343[1087ULL] = X[127ULL];
  t343[1088ULL] = X[128ULL];
  t343[1089ULL] = X[18ULL];
  t343[1090ULL] = 0.11520000000000002;
  t343[1091ULL] = 0.11520000000000002;
  t343[1092ULL] = 0.11520000000000002;
  t343[1093ULL] = 0.0019325895583474555;
  t343[1094ULL] = X[126ULL];
  t343[1095ULL] = X[127ULL];
  t343[1096ULL] = X[128ULL];
  t343[1097ULL] = 0.0;
  t343[1098ULL] = X[48ULL] * 57.295779513082323;
  t343[1099ULL] = X[153ULL];
  t343[1100ULL] = X[18ULL];
  t343[1101ULL] = 0.0;
  t343[1102ULL] = 0.0;
  t343[1103ULL] = 10.0;
  t343[1104ULL] = 0.0;
  t343[1105ULL] = 10.0;
  t343[1106ULL] = 0.0;
  t343[1107ULL] = -X[129ULL];
  t343[1108ULL] = 0.0;
  t343[1109ULL] = 3.9803111111111109;
  t343[1110ULL] = X[129ULL] * -0.00076923076923076923;
  t343[1111ULL] = (X[49ULL] * 0.60240963855421692 + X[129ULL] *
                   0.00050945208079770433) + X[242ULL];
  t343[1112ULL] = (X[50ULL] * 0.42822884549503254 + X[243ULL] *
                   -0.68944844124700244) + X[244ULL] * 0.68944844124700244;
  t343[1113ULL] = X[243ULL];
  t343[1114ULL] = X[242ULL];
  t343[1115ULL] = X[244ULL];
  for (t460 = 231ULL; t460 - 231ULL < 11ULL; t460++) {
    t343[t460 + 885ULL] = X[t460];
  }

  t343[1127ULL] = 0.0;
  t343[1128ULL] = X[51ULL];
  t343[1129ULL] = X[50ULL];
  t343[1130ULL] = X[52ULL];
  t343[1131ULL] = X[53ULL];
  t343[1132ULL] = X[49ULL];
  t343[1133ULL] = X[54ULL];
  t343[1134ULL] = X[153ULL] * 2.5132741228718343E-5;
  t343[1135ULL] = X[18ULL] * 0.0026525823848649226;
  t343[1136ULL] = X[61ULL];
  t343[1137ULL] = X[62ULL] * 0.1;
  t343[1138ULL] = X[90ULL];
  t343[1139ULL] = X[91ULL] * 0.1;
  t343[1140ULL] = 0.0;
  t343[1141ULL] = X[73ULL] * 0.1;
  t343[1142ULL] = X[74ULL];
  t343[1143ULL] = t610;
  t343[1144ULL] = t611 * 0.001;
  t343[1145ULL] = t612;
  t343[1146ULL] = Preheating_Thermodynamic_Properties_Sensor_2P1_V;
  t343[1147ULL] = X[0ULL] * 0.1;
  t343[1148ULL] = X[160ULL];
  t343[1149ULL] = X[0ULL] * t671 * 100.0 + X[160ULL];
  t343[1150ULL] = t566 * 0.001;
  t343[1151ULL] = t689;
  t343[1152ULL] = t671;
  t343[1153ULL] = t689 - 273.15;
  t343[1154ULL] = X[0ULL] * 0.1;
  t343[1155ULL] = X[154ULL];
  t343[1156ULL] = t691;
  t343[1157ULL] = t692 * 0.001;
  t343[1158ULL] = t693;
  t343[1159ULL] = t690;
  t343[1160ULL] = t691;
  t343[1161ULL] = t692 * 0.001;
  t343[1162ULL] = t693 - 273.15;
  t343[1163ULL] = X[88ULL] * 0.1;
  t343[1164ULL] = X[89ULL];
  t343[1165ULL] = t694;
  t343[1166ULL] = t695 * 0.001;
  t343[1167ULL] = t696;
  t343[1168ULL] = t580;
  t343[1169ULL] = t694;
  t343[1170ULL] = t695 * 0.001;
  t343[1171ULL] = t696 - 273.15;
  t343[1172ULL] = X[92ULL] * 0.1;
  t343[1173ULL] = X[93ULL];
  t343[1174ULL] = t697;
  t343[1175ULL] = t698 * 0.001;
  t343[1176ULL] = t699;
  t343[1177ULL] = Thermodynamic_Properties_Sensor_2P4_V;
  t343[1178ULL] = t697;
  t343[1179ULL] = t699 - 273.15;
  t343[1180ULL] = t612 - 273.15;
  t343[1181ULL] = X[0ULL] * 0.1;
  t343[1182ULL] = X[160ULL];
  t343[1183ULL] = X[126ULL];
  t343[1184ULL] = X[127ULL];
  t343[1185ULL] = X[128ULL];
  t343[1186ULL] = X[78ULL];
  t343[1187ULL] = X[79ULL];
  t343[1188ULL] = X[80ULL];
  t343[1189ULL] = X[245ULL];
  t343[1190ULL] = 0.0;
  t343[1191ULL] = X[245ULL];
  t343[1192ULL] = X[245ULL] * 7.9549512883486637E-6;
  t343[1193ULL] = X[126ULL];
  t343[1194ULL] = X[78ULL];
  t343[1195ULL] = X[127ULL];
  t343[1196ULL] = X[79ULL];
  t343[1197ULL] = X[128ULL];
  t343[1198ULL] = X[80ULL];
  t343[1199ULL] = 0.0;
  t343[1200ULL] = 0.0;
  t343[1201ULL] = 0.0;
  t343[1202ULL] = t721;
  t343[1203ULL] = t722;
  t343[1204ULL] = t723;
  t343[1205ULL] = t532;
  t343[1206ULL] = t533;
  t343[1207ULL] = t534;
  t343[1208ULL] = 0.0;
  t343[1209ULL] = 0.0;
  t343[1210ULL] = 0.0;
  t343[1211ULL] = 0.0;
  t343[1212ULL] = 0.0;
  t343[1213ULL] = 0.0;
  t343[1214ULL] = t709 * 1000.0;
  t343[1215ULL] = 0.0;
  t343[1216ULL] = X[245ULL];
  t343[1217ULL] = X[84ULL];
  t343[1218ULL] = -273.15;
  t343[1219ULL] = t721;
  t343[1220ULL] = t721 * 240.0421717824907;
  t343[1221ULL] = X[127ULL];
  t343[1222ULL] = X[126ULL];
  t343[1223ULL] = X[55ULL];
  t343[1224ULL] = 0.0;
  t343[1225ULL] = X[55ULL];
  t343[1226ULL] = t701 * 1000.0;
  t343[1227ULL] = t541;
  t343[1228ULL] = 0.0;
  t343[1229ULL] = X[245ULL];
  t343[1230ULL] = X[85ULL];
  t343[1231ULL] = -273.15;
  t343[1232ULL] = t722;
  t343[1233ULL] = t722 * 240.0421717824907;
  t343[1234ULL] = X[128ULL];
  t343[1235ULL] = X[127ULL];
  t343[1236ULL] = X[56ULL];
  t343[1237ULL] = 0.0;
  t343[1238ULL] = X[56ULL];
  t343[1239ULL] = t702 * 1000.0;
  t343[1240ULL] = t542;
  t343[1241ULL] = 0.0;
  t343[1242ULL] = X[245ULL];
  t343[1243ULL] = X[86ULL];
  t343[1244ULL] = -273.15;
  t343[1245ULL] = t723;
  t343[1246ULL] = t723 * 240.0421717824907;
  t343[1247ULL] = X[126ULL];
  t343[1248ULL] = X[128ULL];
  t343[1249ULL] = X[57ULL];
  t343[1250ULL] = 0.0;
  t343[1251ULL] = X[57ULL];
  t343[1252ULL] = t412_idx_0 * 1000.0;
  t343[1253ULL] = t543;
  t343[1254ULL] = 0.0;
  t343[1255ULL] = X[84ULL];
  t343[1256ULL] = 0.0;
  t343[1257ULL] = -273.15;
  t343[1258ULL] = t532;
  t343[1259ULL] = t532 * 796.88337184902957;
  t343[1260ULL] = 0.0;
  t343[1261ULL] = X[78ULL];
  t343[1262ULL] = X[55ULL];
  t343[1263ULL] = 0.0;
  t343[1264ULL] = X[58ULL];
  t343[1265ULL] = t704 * 1000.0;
  t343[1266ULL] = X[78ULL];
  t343[1267ULL] = 0.0;
  t343[1268ULL] = X[85ULL];
  t343[1269ULL] = 0.0;
  t343[1270ULL] = -273.15;
  t343[1271ULL] = t533;
  t343[1272ULL] = t533 * 796.88337184902957;
  t343[1273ULL] = 0.0;
  t343[1274ULL] = X[79ULL];
  t343[1275ULL] = X[56ULL];
  t343[1276ULL] = 0.0;
  t343[1277ULL] = X[59ULL];
  t343[1278ULL] = t706 * 1000.0;
  t343[1279ULL] = X[79ULL];
  t343[1280ULL] = 0.0;
  t343[1281ULL] = X[86ULL];
  t343[1282ULL] = 0.0;
  t343[1283ULL] = -273.15;
  t343[1284ULL] = t534;
  t343[1285ULL] = t534 * 796.88337184902957;
  t343[1286ULL] = 0.0;
  t343[1287ULL] = X[80ULL];
  t343[1288ULL] = X[57ULL];
  t343[1289ULL] = 0.0;
  t343[1290ULL] = X[60ULL];
  t343[1291ULL] = t708 * 1000.0;
  t343[1292ULL] = X[80ULL];
  t343[1293ULL] = 0.0;
  t343[1294ULL] = 0.0;
  t343[1295ULL] = t721;
  t343[1296ULL] = t722;
  t343[1297ULL] = t723;
  t343[1298ULL] = t532;
  t343[1299ULL] = t533;
  t343[1300ULL] = t534;
  t343[1301ULL] = 0.0;
  t343[1302ULL] = 0.0;
  t343[1303ULL] = t535;
  t343[1304ULL] = t536;
  t343[1305ULL] = t537;
  t343[1306ULL] = X[126ULL];
  t343[1307ULL] = X[127ULL];
  t343[1308ULL] = X[128ULL];
  t343[1309ULL] = X[126ULL];
  t343[1310ULL] = X[127ULL];
  t343[1311ULL] = X[128ULL];
  t343[1312ULL] = X[84ULL] * 0.0041659346462926084 + X[86ULL] *
    -0.0041659346462926084;
  t343[1313ULL] = X[84ULL] * -0.0041659346462926084 + X[85ULL] *
    0.0041659346462926084;
  t343[1314ULL] = X[85ULL] * -0.0041659346462926084 + X[86ULL] *
    0.0041659346462926084;
  t343[1315ULL] = -Circuit_Breaker_Three_Phase_breakerA_i;
  t343[1316ULL] = -t564;
  t343[1317ULL] = -Circuit_Breaker_Three_Phase_breakerC_i;
  t343[1318ULL] = X[78ULL];
  t343[1319ULL] = X[79ULL];
  t343[1320ULL] = X[80ULL];
  t343[1321ULL] = X[78ULL];
  t343[1322ULL] = X[79ULL];
  t343[1323ULL] = X[80ULL];
  t343[1324ULL] = -t532;
  t343[1325ULL] = -t533;
  t343[1326ULL] = -t534;
  t343[1327ULL] = 0.0;
  t343[1328ULL] = 0.0;
  t343[1329ULL] = 0.0;
  t343[1330ULL] = t709 * 1000.0;
  t343[1331ULL] = X[0ULL] * 0.1;
  t343[1332ULL] = X[160ULL];
  t343[1333ULL] = X[246ULL];
  t343[1334ULL] = X[246ULL];
  t343[1335ULL] = X[92ULL] * 0.1;
  t343[1336ULL] = X[93ULL];
  t343[1337ULL] = X[247ULL];
  t343[1338ULL] = X[247ULL];
  t343[1339ULL] = X[0ULL] * 0.1;
  t343[1340ULL] = X[154ULL];
  t343[1341ULL] = X[248ULL];
  t343[1342ULL] = X[248ULL];
  t343[1343ULL] = X[88ULL] * 0.1;
  t343[1344ULL] = X[89ULL];
  t343[1345ULL] = X[249ULL];
  t343[1346ULL] = X[249ULL];
  for (b = 0; b < 1347; b++) {
    out.mX[b] = t343[b];
  }

  (void)LC;
  (void)t825;
  return 0;
}
