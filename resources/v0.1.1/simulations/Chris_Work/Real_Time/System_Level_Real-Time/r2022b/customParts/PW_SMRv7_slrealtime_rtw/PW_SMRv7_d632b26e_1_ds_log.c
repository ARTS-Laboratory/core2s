/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv7/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv7_d632b26e_1_ds_sys_struct.h"
#include "PW_SMRv7_d632b26e_1_ds_log.h"
#include "PW_SMRv7_d632b26e_1_ds.h"
#include "PW_SMRv7_d632b26e_1_ds_externals.h"
#include "PW_SMRv7_d632b26e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv7_d632b26e_1_ds_log(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1293, NeDsMethodOutput *t1294)
{
  ETTS0 ad_efOut;
  ETTS0 ae_efOut;
  ETTS0 bb_efOut;
  ETTS0 bh_efOut;
  ETTS0 bi_efOut;
  ETTS0 cd_efOut;
  ETTS0 cf_efOut;
  ETTS0 d_efOut;
  ETTS0 db_efOut;
  ETTS0 dd_efOut;
  ETTS0 de_efOut;
  ETTS0 dg_efOut;
  ETTS0 ec_efOut;
  ETTS0 ee_efOut;
  ETTS0 efOut;
  ETTS0 eg_efOut;
  ETTS0 fb_efOut;
  ETTS0 fd_efOut;
  ETTS0 fi_efOut;
  ETTS0 g_efOut;
  ETTS0 ge_efOut;
  ETTS0 gf_efOut;
  ETTS0 gg_efOut;
  ETTS0 h_efOut;
  ETTS0 hb_efOut;
  ETTS0 hc_efOut;
  ETTS0 hd_efOut;
  ETTS0 he_efOut;
  ETTS0 ig_efOut;
  ETTS0 j_efOut;
  ETTS0 jd_efOut;
  ETTS0 jf_efOut;
  ETTS0 kc_efOut;
  ETTS0 kd_efOut;
  ETTS0 ke_efOut;
  ETTS0 kg_efOut;
  ETTS0 l_efOut;
  ETTS0 lc_efOut;
  ETTS0 le_efOut;
  ETTS0 lf_efOut;
  ETTS0 lg_efOut;
  ETTS0 m_efOut;
  ETTS0 md_efOut;
  ETTS0 mh_efOut;
  ETTS0 nc_efOut;
  ETTS0 nd_efOut;
  ETTS0 ne_efOut;
  ETTS0 ng_efOut;
  ETTS0 o_efOut;
  ETTS0 oe_efOut;
  ETTS0 p_efOut;
  ETTS0 pb_efOut;
  ETTS0 pd_efOut;
  ETTS0 pg_efOut;
  ETTS0 qc_efOut;
  ETTS0 qd_efOut;
  ETTS0 qf_efOut;
  ETTS0 r_efOut;
  ETTS0 re_efOut;
  ETTS0 sc_efOut;
  ETTS0 sd_efOut;
  ETTS0 sf_efOut;
  ETTS0 sg_efOut;
  ETTS0 t23;
  ETTS0 t28;
  ETTS0 t43;
  ETTS0 t50;
  ETTS0 t53;
  ETTS0 t54;
  ETTS0 t57;
  ETTS0 t62;
  ETTS0 t64;
  ETTS0 t65;
  ETTS0 t67;
  ETTS0 t69;
  ETTS0 t71;
  ETTS0 t72;
  ETTS0 t76;
  ETTS0 t79;
  ETTS0 t82;
  ETTS0 t83;
  ETTS0 t_efOut;
  ETTS0 tb_efOut;
  ETTS0 td_efOut;
  ETTS0 uc_efOut;
  ETTS0 ue_efOut;
  ETTS0 vd_efOut;
  ETTS0 w_efOut;
  ETTS0 wc_efOut;
  ETTS0 wd_efOut;
  ETTS0 wf_efOut;
  ETTS0 wg_efOut;
  ETTS0 wh_efOut;
  ETTS0 xe_efOut;
  ETTS0 yc_efOut;
  ETTS0 yd_efOut;
  ETTS0 yf_efOut;
  PmRealVector out;
  real_T t695[772];
  real_T X[183];
  real_T t831[2];
  real_T ab_efOut[1];
  real_T ac_efOut[1];
  real_T af_efOut[1];
  real_T ag_efOut[1];
  real_T ah_efOut[1];
  real_T ai_efOut[1];
  real_T b_efOut[1];
  real_T bc_efOut[1];
  real_T bd_efOut[1];
  real_T be_efOut[1];
  real_T bf_efOut[1];
  real_T bg_efOut[1];
  real_T c_efOut[1];
  real_T cb_efOut[1];
  real_T cc_efOut[1];
  real_T ce_efOut[1];
  real_T cg_efOut[1];
  real_T ch_efOut[1];
  real_T ci_efOut[1];
  real_T dc_efOut[1];
  real_T df_efOut[1];
  real_T dh_efOut[1];
  real_T di_efOut[1];
  real_T e_efOut[1];
  real_T eb_efOut[1];
  real_T ed_efOut[1];
  real_T ef_efOut[1];
  real_T eh_efOut[1];
  real_T ei_efOut[1];
  real_T f_efOut[1];
  real_T fc_efOut[1];
  real_T fe_efOut[1];
  real_T ff_efOut[1];
  real_T fg_efOut[1];
  real_T fh_efOut[1];
  real_T gb_efOut[1];
  real_T gc_efOut[1];
  real_T gd_efOut[1];
  real_T gh_efOut[1];
  real_T gi_efOut[1];
  real_T hf_efOut[1];
  real_T hg_efOut[1];
  real_T hh_efOut[1];
  real_T hi_efOut[1];
  real_T i_efOut[1];
  real_T ib_efOut[1];
  real_T ic_efOut[1];
  real_T id_efOut[1];
  real_T ie_efOut[1];
  real_T if_efOut[1];
  real_T ih_efOut[1];
  real_T ii_efOut[1];
  real_T jb_efOut[1];
  real_T jc_efOut[1];
  real_T je_efOut[1];
  real_T jg_efOut[1];
  real_T jh_efOut[1];
  real_T k_efOut[1];
  real_T kb_efOut[1];
  real_T kf_efOut[1];
  real_T kh_efOut[1];
  real_T lb_efOut[1];
  real_T ld_efOut[1];
  real_T lh_efOut[1];
  real_T mb_efOut[1];
  real_T mc_efOut[1];
  real_T me_efOut[1];
  real_T mf_efOut[1];
  real_T mg_efOut[1];
  real_T n_efOut[1];
  real_T nb_efOut[1];
  real_T nf_efOut[1];
  real_T nh_efOut[1];
  real_T ob_efOut[1];
  real_T oc_efOut[1];
  real_T od_efOut[1];
  real_T of_efOut[1];
  real_T og_efOut[1];
  real_T oh_efOut[1];
  real_T pc_efOut[1];
  real_T pe_efOut[1];
  real_T pf_efOut[1];
  real_T ph_efOut[1];
  real_T q_efOut[1];
  real_T qb_efOut[1];
  real_T qe_efOut[1];
  real_T qg_efOut[1];
  real_T qh_efOut[1];
  real_T rb_efOut[1];
  real_T rc_efOut[1];
  real_T rd_efOut[1];
  real_T rf_efOut[1];
  real_T rg_efOut[1];
  real_T rh_efOut[1];
  real_T s_efOut[1];
  real_T sb_efOut[1];
  real_T se_efOut[1];
  real_T sh_efOut[1];
  real_T t697[1];
  real_T t812[1];
  real_T t816[1];
  real_T t819[1];
  real_T t821[1];
  real_T tc_efOut[1];
  real_T te_efOut[1];
  real_T tf_efOut[1];
  real_T tg_efOut[1];
  real_T th_efOut[1];
  real_T u_efOut[1];
  real_T ub_efOut[1];
  real_T ud_efOut[1];
  real_T uf_efOut[1];
  real_T ug_efOut[1];
  real_T uh_efOut[1];
  real_T v_efOut[1];
  real_T vb_efOut[1];
  real_T vc_efOut[1];
  real_T ve_efOut[1];
  real_T vf_efOut[1];
  real_T vg_efOut[1];
  real_T vh_efOut[1];
  real_T wb_efOut[1];
  real_T we_efOut[1];
  real_T x_efOut[1];
  real_T xb_efOut[1];
  real_T xc_efOut[1];
  real_T xd_efOut[1];
  real_T xf_efOut[1];
  real_T xg_efOut[1];
  real_T xh_efOut[1];
  real_T y_efOut[1];
  real_T yb_efOut[1];
  real_T ye_efOut[1];
  real_T yg_efOut[1];
  real_T yh_efOut[1];
  real_T Condenser_NTU_mix;
  real_T Condenser_Q_cond;
  real_T Condenser_T_in_vap_TL;
  real_T Condenser_delta_h_2P;
  real_T Condenser_effectiveness_vap;
  real_T Condenser_two_phase_fluid_Re_liq_limited;
  real_T Condenser_two_phase_fluid_Rth_conv_vap;
  real_T Condenser_two_phase_fluid_T_out;
  real_T Condenser_two_phase_fluid_h_out;
  real_T Fixed_Displacement_Pump_2P_mdot_leakage;
  real_T Pipe_TL_u_I;
  real_T Preheating_Thermodynamic_Properties_Sensor_2P1_V;
  real_T Simscape_Component_ideal_outlet_enthalpy;
  real_T Simscape_Component_mdot_forward;
  real_T Simscape_Component_nozzle_area_out;
  real_T Steam_Drum_h_liq;
  real_T Steam_Generator_NTU_vap;
  real_T Steam_Generator_Q_cond;
  real_T Steam_Generator_Q_mix;
  real_T Steam_Generator_Q_mix_;
  real_T Steam_Generator_e_vap_;
  real_T Steam_Generator_effectiveness_mix;
  real_T Steam_Generator_thermal_liquid_h_in;
  real_T Steam_Generator_thermal_liquid_u_out;
  real_T Steam_Generator_two_phase_fluid_Cdot_ext_lag_pos;
  real_T Steam_Generator_two_phase_fluid_T_out;
  real_T Steam_Generator_two_phase_fluid_T_sat_vap;
  real_T Steam_Generator_two_phase_fluid_mass_liq;
  real_T Steam_Generator_two_phase_fluid_mass_mix;
  real_T Steam_Generator_two_phase_fluid_mass_vap;
  real_T Thermodynamic_Properties_Sensor_2P4_V;
  real_T U_idx_0;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T U_idx_3;
  real_T intrm_sf_mf_313;
  real_T intrm_sf_mf_327;
  real_T intrm_sf_mf_329;
  real_T intrm_sf_mf_427;
  real_T intrm_sf_mf_456;
  real_T intrm_sf_mf_499;
  real_T intrm_sf_mf_512;
  real_T intrm_sf_mf_59;
  real_T t1000;
  real_T t1003;
  real_T t1005;
  real_T t1006;
  real_T t1009;
  real_T t1010;
  real_T t1012;
  real_T t1018;
  real_T t1020;
  real_T t1021;
  real_T t1022;
  real_T t1023;
  real_T t1025;
  real_T t1026;
  real_T t1028;
  real_T t1032;
  real_T t1034;
  real_T t1035;
  real_T t1036;
  real_T t1037;
  real_T t1039;
  real_T t1040;
  real_T t1041;
  real_T t1042;
  real_T t1043;
  real_T t1044;
  real_T t1045;
  real_T t1046;
  real_T t1047;
  real_T t1048;
  real_T t1049;
  real_T t1050;
  real_T t1086;
  real_T t1253;
  real_T t1265;
  real_T t1272;
  real_T t1281;
  real_T t1287;
  real_T t1288;
  real_T t1289;
  real_T t1292;
  real_T t834;
  real_T t835;
  real_T t848;
  real_T t849;
  real_T t850;
  real_T t851;
  real_T t856;
  real_T t859;
  real_T t862;
  real_T t864;
  real_T t865;
  real_T t867;
  real_T t869;
  real_T t871;
  real_T t872;
  real_T t873;
  real_T t874;
  real_T t877;
  real_T t878;
  real_T t879;
  real_T t881;
  real_T t882;
  real_T t883;
  real_T t888;
  real_T t889;
  real_T t890;
  real_T t892;
  real_T t893;
  real_T t894;
  real_T t895;
  real_T t898;
  real_T t901;
  real_T t904;
  real_T t910;
  real_T t912;
  real_T t913;
  real_T t914;
  real_T t915;
  real_T t916;
  real_T t917;
  real_T t918;
  real_T t920;
  real_T t921;
  real_T t922;
  real_T t923;
  real_T t925;
  real_T t926;
  real_T t928;
  real_T t929;
  real_T t932;
  real_T t934;
  real_T t935;
  real_T t936;
  real_T t937;
  real_T t938;
  real_T t941;
  real_T t942;
  real_T t943;
  real_T t945;
  real_T t946;
  real_T t960;
  real_T t961;
  real_T t963;
  real_T t965;
  real_T t966;
  real_T t968;
  real_T t969;
  real_T t971;
  real_T t972;
  real_T t973;
  real_T t974;
  real_T t975;
  real_T t976;
  real_T t979;
  real_T t980;
  real_T t981;
  real_T t982;
  real_T t983;
  real_T t984;
  real_T t985;
  real_T t986;
  real_T t990;
  real_T t992;
  real_T t993;
  real_T t997;
  real_T t999;
  real_T zc_int14;
  real_T zc_int16;
  real_T zc_int17;
  real_T zc_int20;
  real_T zc_int23;
  real_T zc_int29;
  size_t t102[1];
  size_t t114[1];
  size_t t494[1];
  size_t t833[1];
  size_t t85[1];
  size_t t86[1];
  size_t t99[1];
  int32_T M[128];
  int32_T b;
  boolean_T intrm_sf_mf_412;
  boolean_T intrm_sf_mf_416;
  boolean_T intrm_sf_mf_417;
  boolean_T intrm_sf_mf_418;
  boolean_T intrm_sf_mf_419;
  boolean_T intrm_sf_mf_420;
  boolean_T intrm_sf_mf_421;
  boolean_T intrm_sf_mf_422;
  boolean_T intrm_sf_mf_433;
  boolean_T intrm_sf_mf_434;
  boolean_T intrm_sf_mf_436;
  boolean_T intrm_sf_mf_437;
  boolean_T intrm_sf_mf_438;
  boolean_T intrm_sf_mf_440;
  boolean_T intrm_sf_mf_441;
  boolean_T intrm_sf_mf_450;
  boolean_T intrm_sf_mf_451;
  boolean_T intrm_sf_mf_452;
  boolean_T intrm_sf_mf_453;
  boolean_T intrm_sf_mf_50;
  boolean_T intrm_sf_mf_504;
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
    M[b] = t1293->mM.mX[b];
  }

  U_idx_0 = t1293->mU.mX[0];
  U_idx_1 = t1293->mU.mX[1];
  U_idx_2 = t1293->mU.mX[2];
  U_idx_3 = t1293->mU.mX[3];
  for (b = 0; b < 183; b++) {
    X[b] = t1293->mX.mX[b];
  }

  out = t1294->mLOG;
  t821[0ULL] = X[0ULL];
  t85[0] = 100ULL;
  t86[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t821[0ULL], &t85
    [0ULL], &t86[0ULL]);
  t83 = efOut;
  t831[0ULL] = t83.mField0[0ULL];
  t831[1ULL] = t83.mField0[1ULL];
  t833[0ULL] = t83.mField2[0ULL];
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t831[0ULL], &t833[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t85[0ULL], &t86[0ULL]);
  t819[0] = b_efOut[0];
  Steam_Drum_h_liq = t819[0ULL];
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t831[0ULL], &t833[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t85[0ULL], &t86[0ULL]);
  t697[0] = c_efOut[0];
  Steam_Generator_two_phase_fluid_T_out = t697[0ULL];
  t819[0ULL] = X[43ULL];
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t819[0ULL],
    &t85[0ULL], &t86[0ULL]);
  t82 = d_efOut;
  tlu2_1d_linear_linear_value(&e_efOut[0ULL], &t82.mField0[0ULL], &t82.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t85[0ULL], &t86[0ULL]);
  t816[0] = e_efOut[0];
  zc_int14 = t816[0ULL];
  tlu2_1d_linear_linear_value(&f_efOut[0ULL], &t82.mField0[0ULL], &t82.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t85[0ULL], &t86[0ULL]);
  t812[0] = f_efOut[0];
  Condenser_two_phase_fluid_T_out = t812[0ULL];
  if (X[44ULL] <= zc_int14) {
    Preheating_Thermodynamic_Properties_Sensor_2P1_V = X[44ULL] / (zc_int14 ==
      0.0 ? 1.0E-16 : zc_int14) - 1.0;
  } else if (X[44ULL] >= Condenser_two_phase_fluid_T_out) {
    Preheating_Thermodynamic_Properties_Sensor_2P1_V = (X[44ULL] - 4000.0) /
      (4000.0 - Condenser_two_phase_fluid_T_out == 0.0 ? 1.0E-16 : 4000.0 -
       Condenser_two_phase_fluid_T_out) + 2.0;
  } else {
    zc_int17 = Condenser_two_phase_fluid_T_out - zc_int14;
    Preheating_Thermodynamic_Properties_Sensor_2P1_V = (X[44ULL] - zc_int14) /
      (zc_int17 == 0.0 ? 1.0E-16 : zc_int17);
  }

  t697[0ULL] = X[3ULL];
  t99[0] = 28ULL;
  tlu2_linear_nearest_prelookup(&g_efOut.mField0[0ULL], &g_efOut.mField1[0ULL],
    &g_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t697[0ULL],
    &t99[0ULL], &t86[0ULL]);
  t72 = g_efOut;
  t816[0ULL] = X[4ULL];
  t102[0] = 27ULL;
  tlu2_linear_nearest_prelookup(&h_efOut.mField0[0ULL], &h_efOut.mField1[0ULL],
    &h_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t816[0ULL],
    &t102[0ULL], &t86[0ULL]);
  t23 = h_efOut;
  tlu2_2d_linear_nearest_value(&i_efOut[0ULL], &t72.mField0[0ULL], &t72.mField2
    [0ULL], &t23.mField0[0ULL], &t23.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField5, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  zc_int14 = i_efOut[0];
  Condenser_two_phase_fluid_T_out = zc_int14;
  t816[0ULL] = X[5ULL];
  tlu2_linear_nearest_prelookup(&j_efOut.mField0[0ULL], &j_efOut.mField1[0ULL],
    &j_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t816[0ULL],
    &t99[0ULL], &t86[0ULL]);
  t79 = j_efOut;
  tlu2_2d_linear_nearest_value(&k_efOut[0ULL], &t79.mField0[0ULL], &t79.mField2
    [0ULL], &t23.mField0[0ULL], &t23.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField5, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  zc_int14 = k_efOut[0];
  Condenser_two_phase_fluid_T_out = (Condenser_two_phase_fluid_T_out + zc_int14)
    / 2.0;
  t848 = Condenser_two_phase_fluid_T_out * 0.11700000000000003 / 0.022;
  t816[0] = 1.0;
  t114[0] = 50ULL;
  tlu2_linear_nearest_prelookup(&l_efOut.mField0[0ULL], &l_efOut.mField1[0ULL],
    &l_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t816[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t64 = l_efOut;
  t812[0ULL] = X[6ULL];
  tlu2_linear_nearest_prelookup(&m_efOut.mField0[0ULL], &m_efOut.mField1[0ULL],
    &m_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t812[0ULL],
    &t85[0ULL], &t86[0ULL]);
  t67 = m_efOut;
  tlu2_2d_linear_nearest_value(&n_efOut[0ULL], &t64.mField0[0ULL], &t64.mField2
    [0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField8, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  zc_int14 = n_efOut[0];
  t849 = zc_int14;
  t850 = zc_int14 * 0.02356194490192345 / 0.02;
  t851 = (t848 + t850) / 2.0;
  t812[0ULL] = X[3ULL];
  tlu2_linear_linear_prelookup(&o_efOut.mField0[0ULL], &o_efOut.mField1[0ULL],
    &o_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t812[0ULL],
    &t99[0ULL], &t86[0ULL]);
  t53 = o_efOut;
  t812[0ULL] = X[4ULL];
  tlu2_linear_linear_prelookup(&p_efOut.mField0[0ULL], &p_efOut.mField1[0ULL],
    &p_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t812[0ULL],
    &t102[0ULL], &t86[0ULL]);
  t76 = p_efOut;
  tlu2_2d_linear_linear_value(&q_efOut[0ULL], &t53.mField0[0ULL], &t53.mField2
    [0ULL], &t76.mField0[0ULL], &t76.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField9, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  zc_int14 = q_efOut[0];
  zc_int17 = zc_int14;
  t812[0ULL] = X[5ULL];
  tlu2_linear_linear_prelookup(&r_efOut.mField0[0ULL], &r_efOut.mField1[0ULL],
    &r_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t812[0ULL],
    &t99[0ULL], &t86[0ULL]);
  t43 = r_efOut;
  tlu2_2d_linear_linear_value(&s_efOut[0ULL], &t43.mField0[0ULL], &t43.mField2
    [0ULL], &t76.mField0[0ULL], &t76.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField9, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  zc_int14 = s_efOut[0];
  zc_int17 = (zc_int17 + zc_int14) / 2.0;
  Condenser_Q_cond = (X[55ULL] - 10.0) / 2.0;
  Condenser_T_in_vap_TL = tanh(zc_int17 * Condenser_Q_cond * 3.0 / (t848 == 0.0 ?
    1.0E-16 : t848)) * zc_int17 * Condenser_Q_cond;
  t848 = t851 + Condenser_T_in_vap_TL;
  t812[0ULL] = X[6ULL];
  tlu2_linear_linear_prelookup(&t_efOut.mField0[0ULL], &t_efOut.mField1[0ULL],
    &t_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t812[0ULL],
    &t85[0ULL], &t86[0ULL]);
  t65 = t_efOut;
  tlu2_1d_linear_linear_value(&u_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t85[0ULL], &t86[0ULL]);
  zc_int14 = u_efOut[0];
  zc_int17 = zc_int14;
  tlu2_1d_linear_linear_value(&v_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t85[0ULL], &t86[0ULL]);
  zc_int14 = v_efOut[0];
  intrm_sf_mf_59 = zc_int14;
  if (X[7ULL] <= zc_int17) {
    t856 = X[7ULL] / (zc_int17 == 0.0 ? 1.0E-16 : zc_int17) - 1.0;
  } else if (X[7ULL] >= zc_int14) {
    t856 = (X[7ULL] - 4000.0) / (4000.0 - zc_int14 == 0.0 ? 1.0E-16 : 4000.0 -
      zc_int14) + 2.0;
  } else {
    t865 = zc_int14 - zc_int17;
    t856 = (X[7ULL] - zc_int17) / (t865 == 0.0 ? 1.0E-16 : t865);
  }

  intrm_sf_mf_412 = (t856 < 0.0);
  if (X[8ULL] <= zc_int17) {
    intrm_sf_mf_327 = X[8ULL] / (zc_int17 == 0.0 ? 1.0E-16 : zc_int17) - 1.0;
  } else if (X[8ULL] >= zc_int14) {
    intrm_sf_mf_327 = (X[8ULL] - 4000.0) / (4000.0 - zc_int14 == 0.0 ? 1.0E-16 :
      4000.0 - zc_int14) + 2.0;
  } else {
    t834 = zc_int14 - zc_int17;
    intrm_sf_mf_327 = (X[8ULL] - zc_int17) / (t834 == 0.0 ? 1.0E-16 : t834);
  }

  intrm_sf_mf_416 = (intrm_sf_mf_327 < 0.0);
  t812[0ULL] = ((intrm_sf_mf_412 ? t856 : 0.0) + (intrm_sf_mf_416 ?
    intrm_sf_mf_327 : 0.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&w_efOut.mField0[0ULL], &w_efOut.mField1[0ULL],
    &w_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t812[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t62 = w_efOut;
  tlu2_2d_linear_nearest_value(&x_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField10, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  zc_int14 = x_efOut[0];
  Condenser_two_phase_fluid_Re_liq_limited = zc_int14;
  tlu2_2d_linear_nearest_value(&y_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField8, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  zc_int14 = y_efOut[0];
  t859 = zc_int14;
  tlu2_2d_linear_nearest_value(&ab_efOut[0ULL], &t62.mField0[0ULL],
    &t62.mField2[0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  zc_int14 = ab_efOut[0];
  Condenser_NTU_mix = zc_int14;
  zc_int20 = Condenser_two_phase_fluid_Re_liq_limited * t859 / (zc_int14 == 0.0 ?
    1.0E-16 : zc_int14);
  t864 = tanh((X[56ULL] - X[57ULL]) * zc_int20 * 3.0 / (t850 == 0.0 ? 1.0E-16 :
    t850));
  t850 = (t864 + 1.0) / 2.0 * (X[56ULL] > 0.0 ? X[56ULL] : 0.0) + (1.0 - t864) /
    2.0 * (X[57ULL] > 0.0 ? X[57ULL] : 0.0);
  t862 = zc_int20 * t850;
  Condenser_effectiveness_vap = t862 + t851;
  intrm_sf_mf_450 = (Condenser_effectiveness_vap <= t848);
  if (intrm_sf_mf_450) {
    t864 = Condenser_effectiveness_vap / (t848 == 0.0 ? 1.0E-16 : t848);
  } else {
    t864 = t848 / (Condenser_effectiveness_vap == 0.0 ? 1.0E-16 :
                   Condenser_effectiveness_vap);
  }

  t865 = X[9ULL] >= 0.0 ? X[9ULL] : 0.0;
  zc_int23 = X[10ULL] >= 0.0 ? X[10ULL] : 0.0;
  t867 = zc_int20 * zc_int23;
  t1288 = t867 + X[59ULL];
  t877 = t865 + X[59ULL];
  zc_int16 = t1288 / (t877 == 0.0 ? 1.0E-16 : t877);
  if (zc_int16 <= 1.0) {
    t869 = 1.0 - zc_int16 * 0.999999;
  } else {
    t869 = 1.0E-6;
  }

  if (zc_int16 >= 1.0) {
    t834 = zc_int16 * 1.000001 - 1.0;
  } else {
    t834 = 1.0E-6;
  }

  if (t867 + X[59ULL] >= t865 + X[59ULL]) {
    t878 = t865 + X[59ULL];
    t879 = t867 + X[59ULL];
    t871 = (1.000001 / (t878 == 0.0 ? 1.0E-16 : t878) - 0.999999 / (t879 == 0.0 ?
             1.0E-16 : t879)) * X[11ULL];
  } else {
    Condenser_two_phase_fluid_Rth_conv_vap = t867 + X[59ULL];
    t881 = t865 + X[59ULL];
    t871 = (1.000001 / (Condenser_two_phase_fluid_Rth_conv_vap == 0.0 ? 1.0E-16 :
                        Condenser_two_phase_fluid_Rth_conv_vap) - 0.999999 /
            (t881 == 0.0 ? 1.0E-16 : t881)) * X[11ULL];
  }

  t867 = t871 <= 15.0 ? t871 : 15.0;
  t812[0ULL] = t856;
  tlu2_linear_linear_prelookup(&bb_efOut.mField0[0ULL], &bb_efOut.mField1[0ULL],
    &bb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t812[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t57 = bb_efOut;
  tlu2_2d_linear_linear_value(&cb_efOut[0ULL], &t57.mField0[0ULL], &t57.mField2
    [0ULL], &t65.mField0[0ULL], &t65.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  zc_int14 = cb_efOut[0];
  t871 = zc_int14;
  t872 = X[6ULL] * zc_int14 * 100.0 + X[7ULL];
  t812[0] = 0.0;
  tlu2_linear_linear_prelookup(&db_efOut.mField0[0ULL], &db_efOut.mField1[0ULL],
    &db_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t812[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t69 = db_efOut;
  tlu2_2d_linear_linear_value(&eb_efOut[0ULL], &t69.mField0[0ULL], &t69.mField2
    [0ULL], &t65.mField0[0ULL], &t65.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  zc_int14 = eb_efOut[0];
  t873 = zc_int14;
  t874 = X[6ULL] * zc_int14 * 100.0 + zc_int17;
  zc_int17 = (t874 - t872) / (zc_int20 == 0.0 ? 1.0E-16 : zc_int20);
  t883 = (1.0 - pmf_exp(-t867)) * X[58ULL];
  t835 = pmf_exp(-t867) * t834 + t869;
  t1292 = t883 / (t835 == 0.0 ? 1.0E-16 : t835);
  intrm_sf_mf_67 = (t1292 > zc_int17 * 1000.0);
  intrm_sf_mf_51 = (t872 < t874);
  intrm_sf_mf_53 = (t872 > t874);
  tlu2_linear_linear_prelookup(&fb_efOut.mField0[0ULL], &fb_efOut.mField1[0ULL],
    &fb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t816[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t54 = fb_efOut;
  tlu2_2d_linear_linear_value(&gb_efOut[0ULL], &t54.mField0[0ULL], &t54.mField2
    [0ULL], &t65.mField0[0ULL], &t65.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  zc_int14 = gb_efOut[0];
  t878 = zc_int14;
  t879 = X[6ULL] * zc_int14 * 100.0 + intrm_sf_mf_59;
  intrm_sf_mf_54 = (t872 > t879);
  intrm_sf_mf_57 = (X[58ULL] < 0.0);
  intrm_sf_mf_58 = (X[58ULL] > 0.0);
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (intrm_sf_mf_67) {
        t1289 = X[58ULL] - t869 * zc_int17 * 1000.0;
        t1287 = pmf_log((t834 * zc_int17 * 1000.0 + X[58ULL]) / (t1289 == 0.0 ?
          1.0E-16 : t1289));
        intrm_sf_mf_59 = t1287 / (t867 == 0.0 ? 1.0E-16 : t867);
      } else {
        intrm_sf_mf_59 = 1.0;
      }
    } else {
      intrm_sf_mf_59 = 0.0;
    }
  } else {
    intrm_sf_mf_59 = intrm_sf_mf_57 ? intrm_sf_mf_54 ? 0.0 : (real_T)
      !intrm_sf_mf_53 : (real_T)intrm_sf_mf_51;
  }

  intrm_sf_mf_434 = (t856 > 1.0);
  intrm_sf_mf_436 = (intrm_sf_mf_327 > 1.0);
  t816[0ULL] = ((intrm_sf_mf_434 ? t856 : 1.0) + (intrm_sf_mf_436 ?
    intrm_sf_mf_327 : 1.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&hb_efOut.mField0[0ULL], &hb_efOut.mField1[0ULL],
    &hb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t816[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t62 = hb_efOut;
  tlu2_2d_linear_nearest_value(&ib_efOut[0ULL], &t62.mField0[0ULL],
    &t62.mField2[0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  zc_int14 = ib_efOut[0];
  Condenser_two_phase_fluid_Rth_conv_vap = zc_int14;
  tlu2_2d_linear_nearest_value(&jb_efOut[0ULL], &t62.mField0[0ULL],
    &t62.mField2[0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  zc_int14 = jb_efOut[0];
  t881 = zc_int14;
  tlu2_2d_linear_nearest_value(&kb_efOut[0ULL], &t62.mField0[0ULL],
    &t62.mField2[0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  zc_int14 = kb_efOut[0];
  t882 = zc_int14;
  t883 = Condenser_two_phase_fluid_Rth_conv_vap * t881 / (zc_int14 == 0.0 ?
    1.0E-16 : zc_int14);
  t835 = t883 * zc_int23;
  zc_int23 = (X[59ULL] + t835) / (t877 == 0.0 ? 1.0E-16 : t877);
  if (zc_int23 <= 1.0) {
    zc_int29 = 1.0 - zc_int23 * 0.999999;
  } else {
    zc_int29 = 1.0E-6;
  }

  if (zc_int23 >= 1.0) {
    t1289 = zc_int23 * 1.000001 - 1.0;
  } else {
    t1289 = 1.0E-6;
  }

  if (X[59ULL] + t835 >= t865 + X[59ULL]) {
    t892 = t865 + X[59ULL];
    t893 = X[59ULL] + t835;
    t1287 = (1.000001 / (t892 == 0.0 ? 1.0E-16 : t892) - 0.999999 / (t893 == 0.0
              ? 1.0E-16 : t893)) * X[12ULL];
  } else {
    t894 = X[59ULL] + t835;
    t895 = t865 + X[59ULL];
    t1287 = (1.000001 / (t894 == 0.0 ? 1.0E-16 : t894) - 0.999999 / (t895 == 0.0
              ? 1.0E-16 : t895)) * X[12ULL];
  }

  t865 = t1287 <= 15.0 ? t1287 : 15.0;
  t835 = (t879 - t872) / (t883 == 0.0 ? 1.0E-16 : t883);
  intrm_sf_mf_50 = (t872 < t879);
  Condenser_delta_h_2P = (1.0 - pmf_exp(-t865)) * X[58ULL];
  t898 = pmf_exp(-t865) * t1289 + zc_int29;
  t1287 = Condenser_delta_h_2P / (t898 == 0.0 ? 1.0E-16 : t898);
  intrm_sf_mf_68 = (t1287 < t835 * 1000.0);
  intrm_sf_mf_55 = (t872 <= t879);
  if (intrm_sf_mf_58) {
    t888 = intrm_sf_mf_51 ? 0.0 : (real_T)!intrm_sf_mf_50;
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (intrm_sf_mf_68) {
        Simscape_Component_ideal_outlet_enthalpy = X[58ULL] - zc_int29 * t835 *
          1000.0;
        t901 = pmf_log((t1289 * t835 * 1000.0 + X[58ULL]) /
                       (Simscape_Component_ideal_outlet_enthalpy == 0.0 ?
                        1.0E-16 : Simscape_Component_ideal_outlet_enthalpy));
        t888 = t901 / (t865 == 0.0 ? 1.0E-16 : t865);
      } else {
        t888 = 1.0;
      }
    } else {
      t888 = 0.0;
    }
  } else {
    t888 = intrm_sf_mf_51 ? 0.0 : (real_T)!intrm_sf_mf_55;
  }

  t889 = (1.0 - intrm_sf_mf_59) - t888;
  t1288 = t1288 / (t877 == 0.0 ? 1.0E-16 : t877) / (zc_int20 == 0.0 ? 1.0E-16 :
    zc_int20);
  t890 = X[13ULL] / (t877 == 0.0 ? 1.0E-16 : t877);
  t877 = t890 <= 15.0 ? t890 : 15.0;
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (intrm_sf_mf_67) {
        t890 = (zc_int16 - 1.0) * zc_int17 * 1000.0 + X[58ULL];
      } else {
        t890 = (zc_int16 * t1292 + X[58ULL]) - zc_int17 * 1000.0;
      }
    } else if (intrm_sf_mf_50) {
      t890 = X[58ULL];
    } else {
      t890 = (zc_int23 * t1287 + X[58ULL]) - t835 * 1000.0;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (intrm_sf_mf_68) {
        t890 = (zc_int23 - 1.0) * t835 * 1000.0 + X[58ULL];
      } else {
        t890 = (zc_int23 * t1287 + X[58ULL]) - t835 * 1000.0;
      }
    } else if (intrm_sf_mf_53) {
      t890 = X[58ULL];
    } else {
      t890 = (zc_int16 * t1292 + X[58ULL]) - zc_int17 * 1000.0;
    }
  } else if (intrm_sf_mf_51) {
    t890 = (zc_int16 * t1292 + X[58ULL]) - zc_int17 * 1000.0;
  } else if (intrm_sf_mf_55) {
    t890 = X[58ULL];
  } else {
    t890 = (zc_int23 * t1287 + X[58ULL]) - t835 * 1000.0;
  }

  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (intrm_sf_mf_67) {
        t892 = t874;
      } else {
        t892 = zc_int20 * t1292 * 0.001 + t872;
      }
    } else if (intrm_sf_mf_50) {
      t892 = t872;
    } else {
      t892 = t883 * t1287 * 0.001 + t872;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (intrm_sf_mf_68) {
        t892 = t879;
      } else {
        t892 = t883 * t1287 * 0.001 + t872;
      }
    } else if (intrm_sf_mf_53) {
      t892 = t872;
    } else {
      t892 = zc_int20 * t1292 * 0.001 + t872;
    }
  } else if (intrm_sf_mf_51) {
    t892 = zc_int20 * t1292 * 0.001 + t872;
  } else if (intrm_sf_mf_55) {
    t892 = t872;
  } else {
    t892 = t883 * t1287 * 0.001 + t872;
  }

  t893 = t874 - t892;
  t894 = t879 - t892;
  Fixed_Displacement_Pump_2P_mdot_leakage = (pmf_exp(t877 * t889) - 1.0) * t890;
  t895 = Fixed_Displacement_Pump_2P_mdot_leakage / (t1288 == 0.0 ? 1.0E-16 :
    t1288);
  intrm_sf_mf_67 = (t895 * 0.001 > t894);
  intrm_sf_mf_68 = (t892 < t879);
  intrm_sf_mf_69 = (t895 * 0.001 < t893);
  intrm_sf_mf_70 = (t892 > t874);
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_68) {
      if (intrm_sf_mf_67) {
        Thermodynamic_Properties_Sensor_2P4_V = t1288 * t894 * 1000.0 + t890;
        zc_int14 = -pmf_log(t890 / (Thermodynamic_Properties_Sensor_2P4_V == 0.0
          ? 1.0E-16 : Thermodynamic_Properties_Sensor_2P4_V));
        t892 = zc_int14 / (t877 == 0.0 ? 1.0E-16 : t877);
      } else {
        t892 = t889;
      }
    } else {
      t892 = 0.0;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_70) {
      if (intrm_sf_mf_69) {
        t910 = t1288 * t893 * 1000.0 + t890;
        zc_int14 = -pmf_log(t890 / (t910 == 0.0 ? 1.0E-16 : t910));
        t892 = zc_int14 / (t877 == 0.0 ? 1.0E-16 : t877);
      } else {
        t892 = t889;
      }
    } else {
      t892 = 0.0;
    }
  } else {
    t892 = t889;
  }

  t890 = t889 - t892;
  t893 = intrm_sf_mf_59 + (intrm_sf_mf_58 ? 0.0 : intrm_sf_mf_57 ? t890 : 0.0);
  intrm_sf_mf_59 = t893 >= 0.001 ? t864 : 0.0;
  t889 = t883 * t850;
  t894 = t851 + t889;
  intrm_sf_mf_437 = (t894 <= t848);
  if (intrm_sf_mf_437) {
    t851 = t894 / (t848 == 0.0 ? 1.0E-16 : t848);
  } else {
    t851 = t848 / (t894 == 0.0 ? 1.0E-16 : t894);
  }

  t890 = t888 + (intrm_sf_mf_58 ? t890 : 0.0);
  t888 = t890 >= 0.001 ? t851 : 0.0;
  t895 = intrm_sf_mf_450 ? t862 : Condenser_T_in_vap_TL;
  t862 = intrm_sf_mf_437 ? t889 : Condenser_T_in_vap_TL;
  tlu2_2d_linear_nearest_value(&lb_efOut[0ULL], &t72.mField0[0ULL],
    &t72.mField2[0ULL], &t23.mField0[0ULL], &t23.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  zc_int14 = lb_efOut[0];
  t889 = zc_int14;
  tlu2_2d_linear_nearest_value(&mb_efOut[0ULL], &t79.mField0[0ULL],
    &t79.mField2[0ULL], &t23.mField0[0ULL], &t23.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  zc_int14 = mb_efOut[0];
  t914 = (t889 + zc_int14) / 2.0 * 0.11700000000000003;
  Condenser_Q_cond = Condenser_Q_cond * 0.022 / (t914 == 0.0 ? 1.0E-16 : t914);
  t889 = pmf_sqrt(Condenser_Q_cond * Condenser_Q_cond + 100.0);
  Condenser_Q_cond = t889 * 35.580755206091233;
  Condenser_two_phase_fluid_h_out = t889 * pmf_sqrt(t889) * pmf_sqrt(pmf_sqrt
    (t889)) * 2.0794784986224468;
  if (t889 > 250000.0) {
    Condenser_delta_h_2P = (t889 - 250000.0) / 325000.0 + 1.0;
  } else {
    Condenser_delta_h_2P = 1.0;
  }

  t889 = 1.0 - pmf_exp(-(t889 + 200.0) / 1000.0);
  t898 = Condenser_two_phase_fluid_h_out * Condenser_delta_h_2P * t889 +
    Condenser_Q_cond;
  tlu2_2d_linear_nearest_value(&nb_efOut[0ULL], &t72.mField0[0ULL],
    &t72.mField2[0ULL], &t23.mField0[0ULL], &t23.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField13, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  zc_int14 = nb_efOut[0];
  Condenser_Q_cond = zc_int14;
  tlu2_2d_linear_nearest_value(&ob_efOut[0ULL], &t79.mField0[0ULL],
    &t79.mField2[0ULL], &t23.mField0[0ULL], &t23.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField13, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  zc_int14 = ob_efOut[0];
  Condenser_Q_cond = (Condenser_Q_cond + zc_int14) / 2.0;
  Condenser_Q_cond = pmf_pow(t898 * Condenser_Q_cond * 0.53047999688613334,
    0.33333333333333331) * 0.404;
  Pipe_TL_u_I = Condenser_Q_cond * Condenser_two_phase_fluid_T_out / 0.022 *
    5.1836278784231586;
  Condenser_Q_cond = 1.0 / (Pipe_TL_u_I == 0.0 ? 1.0E-16 : Pipe_TL_u_I);
  t889 = Condenser_two_phase_fluid_Re_liq_limited > 0.5 ?
    Condenser_two_phase_fluid_Re_liq_limited : 0.5;
  t920 = t850 * 0.02;
  t921 = Condenser_NTU_mix * 0.02356194490192345;
  t850 = t920 / (t921 == 0.0 ? 1.0E-16 : t921);
  Condenser_two_phase_fluid_Re_liq_limited = t850 > 1000.0 ? t850 : 1000.0;
  t922 = pmf_log10(6.9 / (Condenser_two_phase_fluid_Re_liq_limited == 0.0 ?
    1.0E-16 : Condenser_two_phase_fluid_Re_liq_limited) + 7.9545220244797035E-5)
    * pmf_log10(6.9 / (Condenser_two_phase_fluid_Re_liq_limited == 0.0 ? 1.0E-16
                       : Condenser_two_phase_fluid_Re_liq_limited) +
                7.9545220244797035E-5) * 3.24;
  Condenser_NTU_mix = 1.0 / (t922 == 0.0 ? 1.0E-16 : t922);
  Condenser_delta_h_2P = (pmf_pow(t889, 0.66666666666666663) - 1.0) * pmf_sqrt
    (Condenser_NTU_mix / 8.0) * 12.7 + 1.0;
  Condenser_two_phase_fluid_Re_liq_limited =
    (Condenser_two_phase_fluid_Re_liq_limited - 1000.0) * (Condenser_NTU_mix /
    8.0) * t889 / (Condenser_delta_h_2P == 0.0 ? 1.0E-16 : Condenser_delta_h_2P);
  Condenser_NTU_mix = (t850 - 2000.0) / 2000.0;
  t889 = Condenser_NTU_mix * Condenser_NTU_mix * 3.0 - Condenser_NTU_mix *
    Condenser_NTU_mix * Condenser_NTU_mix * 2.0;
  if (t850 <= 2000.0) {
    Condenser_NTU_mix = 3.66;
  } else if (t850 >= 4000.0) {
    Condenser_NTU_mix = Condenser_two_phase_fluid_Re_liq_limited;
  } else {
    Condenser_NTU_mix = (1.0 - t889) * 3.66 +
      Condenser_two_phase_fluid_Re_liq_limited * t889;
  }

  intrm_sf_mf_329 = t859 * Condenser_NTU_mix / 0.02 * 7.0685834705770345;
  Condenser_two_phase_fluid_Re_liq_limited = Condenser_Q_cond + 1.0 /
    (intrm_sf_mf_329 == 0.0 ? 1.0E-16 : intrm_sf_mf_329);
  if (intrm_sf_mf_450) {
    t850 = t893 / (Condenser_two_phase_fluid_Re_liq_limited == 0.0 ? 1.0E-16 :
                   Condenser_two_phase_fluid_Re_liq_limited) /
      (Condenser_effectiveness_vap == 0.0 ? 1.0E-16 :
       Condenser_effectiveness_vap);
  } else {
    t850 = t893 / (Condenser_two_phase_fluid_Re_liq_limited == 0.0 ? 1.0E-16 :
                   Condenser_two_phase_fluid_Re_liq_limited) / (t848 == 0.0 ?
      1.0E-16 : t848);
  }

  Condenser_two_phase_fluid_Re_liq_limited = t893 >= 0.001 ? t850 : 0.0;
  tlu2_linear_nearest_prelookup(&pb_efOut.mField0[0ULL], &pb_efOut.mField1[0ULL],
    &pb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t812[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t50 = pb_efOut;
  tlu2_2d_linear_nearest_value(&qb_efOut[0ULL], &t50.mField0[0ULL],
    &t50.mField2[0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = qb_efOut[0];
  t859 = t812[0ULL];
  tlu2_2d_linear_nearest_value(&rb_efOut[0ULL], &t50.mField0[0ULL],
    &t50.mField2[0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = rb_efOut[0];
  Condenser_NTU_mix = t812[0ULL];
  zc_int14 = Condenser_NTU_mix * 0.02356194490192345;
  Condenser_NTU_mix = t920 / (zc_int14 == 0.0 ? 1.0E-16 : zc_int14);
  t889 = Condenser_NTU_mix > 1.0 ? Condenser_NTU_mix : 1.0;
  intrm_sf_mf_440 = (t856 >= 1.0);
  intrm_sf_mf_441 = (t856 <= 0.0);
  Condenser_NTU_mix = intrm_sf_mf_441 ? 0.0 : intrm_sf_mf_440 ? 1.0 : t856;
  intrm_sf_mf_417 = (intrm_sf_mf_327 >= 1.0);
  intrm_sf_mf_418 = (intrm_sf_mf_327 <= 0.0);
  Condenser_two_phase_fluid_h_out = intrm_sf_mf_418 ? 0.0 : intrm_sf_mf_417 ?
    1.0 : intrm_sf_mf_327;
  if (Condenser_two_phase_fluid_h_out - Condenser_NTU_mix > 1.0E-6) {
    Condenser_delta_h_2P = Condenser_two_phase_fluid_h_out - Condenser_NTU_mix;
  } else if (Condenser_NTU_mix - Condenser_two_phase_fluid_h_out > 1.0E-6) {
    Condenser_delta_h_2P = Condenser_NTU_mix - Condenser_two_phase_fluid_h_out;
  } else {
    Condenser_delta_h_2P = 1.0E-6;
  }

  if (t878 / (t873 == 0.0 ? 1.0E-16 : t873) > 1.000001) {
    t898 = pmf_sqrt(t878 / (t873 == 0.0 ? 1.0E-16 : t873));
  } else {
    t898 = 1.0000004999998751;
  }

  zc_int14 = Condenser_NTU_mix <= Condenser_two_phase_fluid_h_out ?
    Condenser_NTU_mix : Condenser_two_phase_fluid_h_out;
  t932 = pmf_pow(t889, 0.8) * pmf_pow(t859, 0.33) * 0.05;
  t935 = (pmf_pow((Condenser_delta_h_2P + zc_int14) * (t898 - 1.0) + 1.0, 1.8) -
          pmf_pow((t898 - 1.0) * zc_int14 + 1.0, 1.8)) * (t932 / 1.8 / (t898 -
    1.0 == 0.0 ? 1.0E-16 : t898 - 1.0));
  t859 = t935 / (Condenser_delta_h_2P == 0.0 ? 1.0E-16 : Condenser_delta_h_2P);
  Condenser_NTU_mix = t859 > 3.66 ? t859 : 3.66;
  tlu2_2d_linear_nearest_value(&sb_efOut[0ULL], &t50.mField0[0ULL],
    &t50.mField2[0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = sb_efOut[0];
  t859 = t812[0ULL];
  t937 = Condenser_NTU_mix * t859 / 0.02 * 7.0685834705770345;
  Condenser_NTU_mix = Condenser_Q_cond + 1.0 / (t937 == 0.0 ? 1.0E-16 : t937);
  t859 = t892 / (Condenser_NTU_mix == 0.0 ? 1.0E-16 : Condenser_NTU_mix) / (t848
    == 0.0 ? 1.0E-16 : t848);
  Condenser_NTU_mix = t892 >= 0.001 ? t859 : 0.0;
  t889 = Condenser_two_phase_fluid_Rth_conv_vap > 0.5 ?
    Condenser_two_phase_fluid_Rth_conv_vap : 0.5;
  zc_int14 = t882 * 0.02356194490192345;
  Condenser_two_phase_fluid_Rth_conv_vap = t920 / (zc_int14 == 0.0 ? 1.0E-16 :
    zc_int14);
  t882 = Condenser_two_phase_fluid_Rth_conv_vap > 1000.0 ?
    Condenser_two_phase_fluid_Rth_conv_vap : 1000.0;
  t941 = pmf_log10(6.9 / (t882 == 0.0 ? 1.0E-16 : t882) + 7.9545220244797035E-5)
    * pmf_log10(6.9 / (t882 == 0.0 ? 1.0E-16 : t882) + 7.9545220244797035E-5) *
    3.24;
  Condenser_two_phase_fluid_h_out = 1.0 / (t941 == 0.0 ? 1.0E-16 : t941);
  t943 = (pmf_pow(t889, 0.66666666666666663) - 1.0) * pmf_sqrt
    (Condenser_two_phase_fluid_h_out / 8.0) * 12.7 + 1.0;
  t882 = (t882 - 1000.0) * (Condenser_two_phase_fluid_h_out / 8.0) * t889 /
    (t943 == 0.0 ? 1.0E-16 : t943);
  t889 = (Condenser_two_phase_fluid_Rth_conv_vap - 2000.0) / 2000.0;
  Condenser_two_phase_fluid_h_out = t889 * t889 * 3.0 - t889 * t889 * t889 * 2.0;
  if (Condenser_two_phase_fluid_Rth_conv_vap <= 2000.0) {
    t889 = 3.66;
  } else if (Condenser_two_phase_fluid_Rth_conv_vap >= 4000.0) {
    t889 = t882;
  } else {
    t889 = (1.0 - Condenser_two_phase_fluid_h_out) * 3.66 + t882 *
      Condenser_two_phase_fluid_h_out;
  }

  t946 = t881 * t889 / 0.02 * 7.0685834705770345;
  t881 = Condenser_Q_cond + 1.0 / (t946 == 0.0 ? 1.0E-16 : t946);
  if (intrm_sf_mf_437) {
    Condenser_Q_cond = t890 / (t881 == 0.0 ? 1.0E-16 : t881) / (t894 == 0.0 ?
      1.0E-16 : t894);
  } else {
    Condenser_Q_cond = t890 / (t881 == 0.0 ? 1.0E-16 : t881) / (t848 == 0.0 ?
      1.0E-16 : t848);
  }

  Condenser_two_phase_fluid_Rth_conv_vap = t890 >= 0.001 ? Condenser_Q_cond :
    0.0;
  if (intrm_sf_mf_450) {
    t881 = Condenser_effectiveness_vap / (t848 == 0.0 ? 1.0E-16 : t848);
  } else {
    t881 = 1.0;
  }

  intrm_sf_mf_450 = (t850 >= 0.0);
  Condenser_effectiveness_vap = intrm_sf_mf_450 ? t850 : -t850;
  Condenser_delta_h_2P = (1.0 - pmf_exp(-Condenser_effectiveness_vap * (1.0 -
    t864 * 0.999))) * (intrm_sf_mf_450 ? 1.0 : -1.0);
  zc_int14 = 1.0 - pmf_exp(-Condenser_effectiveness_vap * (1.0 - t864 * 0.999)) *
    t864 * 0.999;
  t850 = Condenser_delta_h_2P / (zc_int14 == 0.0 ? 1.0E-16 : zc_int14);
  Condenser_effectiveness_vap = t881 * t850;
  intrm_sf_mf_450 = (t859 >= 0.0);
  t881 = (1.0 - pmf_exp(-(intrm_sf_mf_450 ? t859 : -t859))) * (intrm_sf_mf_450 ?
    1.0 : -1.0);
  if (intrm_sf_mf_437) {
    t859 = t894 / (t848 == 0.0 ? 1.0E-16 : t848);
  } else {
    t859 = 1.0;
  }

  intrm_sf_mf_450 = (Condenser_Q_cond >= 0.0);
  t848 = intrm_sf_mf_450 ? Condenser_Q_cond : -Condenser_Q_cond;
  Condenser_delta_h_2P = (1.0 - pmf_exp(-t848 * (1.0 - t851 * 0.999))) *
    (intrm_sf_mf_450 ? 1.0 : -1.0);
  zc_int14 = 1.0 - pmf_exp(-t848 * (1.0 - t851 * 0.999)) * t851 * 0.999;
  t848 = Condenser_delta_h_2P / (zc_int14 == 0.0 ? 1.0E-16 : zc_int14);
  t851 = t859 * t848;
  t849 = 0.0067520278887470758 / (Condenser_two_phase_fluid_T_out == 0.0 ?
    1.0E-16 : Condenser_two_phase_fluid_T_out) + 0.0028294212105225841 / (t849 ==
    0.0 ? 1.0E-16 : t849);
  t816[0ULL] = intrm_sf_mf_327;
  tlu2_linear_linear_prelookup(&tb_efOut.mField0[0ULL], &tb_efOut.mField1[0ULL],
    &tb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t816[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t62 = tb_efOut;
  tlu2_2d_linear_linear_value(&ub_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], &t65.mField0[0ULL], &t65.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = ub_efOut[0];
  Condenser_two_phase_fluid_T_out = t812[0ULL];
  Condenser_Q_cond = (X[5ULL] - Condenser_two_phase_fluid_T_out) / (t849 == 0.0 ?
    1.0E-16 : t849);
  tlu2_2d_linear_linear_value(&vb_efOut[0ULL], &t57.mField0[0ULL], &t57.mField2
    [0ULL], &t65.mField0[0ULL], &t65.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = vb_efOut[0];
  t849 = t812[0ULL];
  tlu2_2d_linear_linear_value(&wb_efOut[0ULL], &t69.mField0[0ULL], &t69.mField2
    [0ULL], &t65.mField0[0ULL], &t65.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = wb_efOut[0];
  t859 = t812[0ULL];
  tlu2_2d_linear_linear_value(&xb_efOut[0ULL], &t54.mField0[0ULL], &t54.mField2
    [0ULL], &t65.mField0[0ULL], &t65.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = xb_efOut[0];
  t864 = t812[0ULL];
  t882 = intrm_sf_mf_441 ? t859 : intrm_sf_mf_440 ? t864 : t849;
  t889 = intrm_sf_mf_434 ? t849 : t864;
  tlu2_2d_linear_linear_value(&yb_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], &t65.mField0[0ULL], &t65.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = yb_efOut[0];
  t894 = t812[0ULL];
  Condenser_two_phase_fluid_h_out = X[6ULL] * t894 * 100.0 + X[8ULL];
  intrm_sf_mf_450 = (t872 - Condenser_two_phase_fluid_h_out >= 0.0);
  if (intrm_sf_mf_450) {
    Condenser_delta_h_2P = X[3ULL];
  } else {
    Condenser_delta_h_2P = ((1.0 - t881) * (1.0 - t851) * X[3ULL] + (1.0 - t881)
      * t851 * t889) + t881 * t882;
  }

  t898 = intrm_sf_mf_412 ? t849 : t859;
  zc_int14 = (Condenser_delta_h_2P - t898) * t895 * t850;
  if (intrm_sf_mf_450) {
    t895 = (t898 - X[3ULL]) * Condenser_effectiveness_vap + X[3ULL];
  } else {
    t895 = (t889 - X[3ULL]) * t851 + X[3ULL];
  }

  t851 = (t895 - t882) * Condenser_T_in_vap_TL * t881;
  if (intrm_sf_mf_450) {
    Condenser_T_in_vap_TL = ((1.0 - t881) * (1.0 - Condenser_effectiveness_vap) *
      X[3ULL] + (1.0 - t881) * Condenser_effectiveness_vap * t898) + t881 * t882;
  } else {
    Condenser_T_in_vap_TL = X[3ULL];
  }

  Condenser_effectiveness_vap = (Condenser_T_in_vap_TL - t889) * t862 * t848;
  t862 = Condenser_Q_cond + ((zc_int14 + t851) + Condenser_effectiveness_vap);
  Condenser_T_in_vap_TL = Condenser_Q_cond * t893 + zc_int14;
  t882 = Condenser_Q_cond * t892 + t851;
  t851 = Condenser_Q_cond * t890 + Condenser_effectiveness_vap;
  Condenser_Q_cond = t893 >= 0.001 ? t850 : 0.0;
  t850 = t892 >= 0.001 ? t881 : 0.0;
  Condenser_effectiveness_vap = t890 >= 0.001 ? t848 : 0.0;
  tlu2_2d_linear_linear_value(&ac_efOut[0ULL], &t53.mField0[0ULL], &t53.mField2
    [0ULL], &t76.mField0[0ULL], &t76.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  t812[0] = ac_efOut[0];
  t848 = t812[0ULL];
  tlu2_2d_linear_linear_value(&bc_efOut[0ULL], &t43.mField0[0ULL], &t43.mField2
    [0ULL], &t76.mField0[0ULL], &t76.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  t812[0] = bc_efOut[0];
  t881 = t812[0ULL];
  tlu2_2d_linear_linear_value(&cc_efOut[0ULL], &t53.mField0[0ULL], &t53.mField2
    [0ULL], &t76.mField0[0ULL], &t76.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField18, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  t812[0] = cc_efOut[0];
  t895 = t812[0ULL];
  tlu2_2d_linear_linear_value(&dc_efOut[0ULL], &t43.mField0[0ULL], &t43.mField2
    [0ULL], &t76.mField0[0ULL], &t76.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField18, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  t812[0] = dc_efOut[0];
  t898 = t812[0ULL];
  Simscape_Component_ideal_outlet_enthalpy = intrm_sf_mf_441 ? t873 :
    intrm_sf_mf_440 ? t878 : t871;
  t901 = intrm_sf_mf_418 ? t873 : intrm_sf_mf_417 ? t878 : t894;
  t904 = Simscape_Component_ideal_outlet_enthalpy <= t901 ?
    Simscape_Component_ideal_outlet_enthalpy : t901;
  if (t901 / (Simscape_Component_ideal_outlet_enthalpy == 0.0 ? 1.0E-16 :
              Simscape_Component_ideal_outlet_enthalpy) >= 1.000001) {
    Condenser_delta_h_2P = t901 / (Simscape_Component_ideal_outlet_enthalpy ==
      0.0 ? 1.0E-16 : Simscape_Component_ideal_outlet_enthalpy);
  } else if (Simscape_Component_ideal_outlet_enthalpy / (t901 == 0.0 ? 1.0E-16 :
              t901) >= 1.000001) {
    Condenser_delta_h_2P = Simscape_Component_ideal_outlet_enthalpy / (t901 ==
      0.0 ? 1.0E-16 : t901);
  } else {
    Condenser_delta_h_2P = 1.000001;
  }

  zc_int14 = pmf_log(Condenser_delta_h_2P);
  Simscape_Component_ideal_outlet_enthalpy = zc_int14 / (Condenser_delta_h_2P -
    1.0 == 0.0 ? 1.0E-16 : Condenser_delta_h_2P - 1.0) / (t904 == 0.0 ? 1.0E-16 :
    t904);
  t901 = intrm_sf_mf_412 ? t871 : t873;
  t904 = intrm_sf_mf_416 ? t894 : t873;
  t901 = (1.0 / (t901 == 0.0 ? 1.0E-16 : t901) + 1.0 / (t904 == 0.0 ? 1.0E-16 :
           t904)) / 2.0 * t893 * 0.035342917352885174;
  t873 = Simscape_Component_ideal_outlet_enthalpy * t892 * 0.035342917352885174;
  Simscape_Component_ideal_outlet_enthalpy = intrm_sf_mf_434 ? t871 : t878;
  t871 = intrm_sf_mf_436 ? t894 : t878;
  t878 = (1.0 / (Simscape_Component_ideal_outlet_enthalpy == 0.0 ? 1.0E-16 :
                 Simscape_Component_ideal_outlet_enthalpy) + 1.0 / (t871 == 0.0 ?
           1.0E-16 : t871)) / 2.0 * t890 * 0.035342917352885174;
  t871 = (t901 + t873) + t878;
  t816[0ULL] = X[49ULL];
  tlu2_linear_linear_prelookup(&ec_efOut.mField0[0ULL], &ec_efOut.mField1[0ULL],
    &ec_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t816[0ULL],
    &t85[0ULL], &t86[0ULL]);
  t76 = ec_efOut;
  tlu2_1d_linear_linear_value(&fc_efOut[0ULL], &t76.mField0[0ULL], &t76.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t85[0ULL], &t86[0ULL]);
  t812[0] = fc_efOut[0];
  t894 = t812[0ULL];
  tlu2_1d_linear_linear_value(&gc_efOut[0ULL], &t76.mField0[0ULL], &t76.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t85[0ULL], &t86[0ULL]);
  t812[0] = gc_efOut[0];
  Simscape_Component_ideal_outlet_enthalpy = t812[0ULL];
  if (X[50ULL] <= t894) {
    t904 = X[50ULL] / (t894 == 0.0 ? 1.0E-16 : t894) - 1.0;
  } else if (X[50ULL] >= Simscape_Component_ideal_outlet_enthalpy) {
    t904 = (X[50ULL] - 4000.0) / (4000.0 -
      Simscape_Component_ideal_outlet_enthalpy == 0.0 ? 1.0E-16 : 4000.0 -
      Simscape_Component_ideal_outlet_enthalpy) + 2.0;
  } else {
    t966 = Simscape_Component_ideal_outlet_enthalpy - t894;
    t904 = (X[50ULL] - t894) / (t966 == 0.0 ? 1.0E-16 : t966);
  }

  t816[0ULL] = X[53ULL];
  tlu2_linear_linear_prelookup(&hc_efOut.mField0[0ULL], &hc_efOut.mField1[0ULL],
    &hc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t816[0ULL],
    &t85[0ULL], &t86[0ULL]);
  t72 = hc_efOut;
  tlu2_1d_linear_linear_value(&ic_efOut[0ULL], &t72.mField0[0ULL], &t72.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t85[0ULL], &t86[0ULL]);
  t812[0] = ic_efOut[0];
  Condenser_delta_h_2P = t812[0ULL];
  tlu2_1d_linear_linear_value(&jc_efOut[0ULL], &t72.mField0[0ULL], &t72.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t85[0ULL], &t86[0ULL]);
  t812[0] = jc_efOut[0];
  Fixed_Displacement_Pump_2P_mdot_leakage = t812[0ULL];
  if (X[54ULL] <= Condenser_delta_h_2P) {
    Thermodynamic_Properties_Sensor_2P4_V = X[54ULL] / (Condenser_delta_h_2P ==
      0.0 ? 1.0E-16 : Condenser_delta_h_2P) - 1.0;
  } else if (X[54ULL] >= Fixed_Displacement_Pump_2P_mdot_leakage) {
    Thermodynamic_Properties_Sensor_2P4_V = (X[54ULL] - 4000.0) / (4000.0 -
      Fixed_Displacement_Pump_2P_mdot_leakage == 0.0 ? 1.0E-16 : 4000.0 -
      Fixed_Displacement_Pump_2P_mdot_leakage) + 2.0;
  } else {
    t971 = Fixed_Displacement_Pump_2P_mdot_leakage - Condenser_delta_h_2P;
    Thermodynamic_Properties_Sensor_2P4_V = (X[54ULL] - Condenser_delta_h_2P) /
      (t971 == 0.0 ? 1.0E-16 : t971);
  }

  t901 = t901 * X[14ULL] / (t871 == 0.0 ? 1.0E-16 : t871);
  t873 = t873 * X[14ULL] / (t871 == 0.0 ? 1.0E-16 : t871);
  t878 = t878 * X[14ULL] / (t871 == 0.0 ? 1.0E-16 : t871);
  t871 = U_idx_0 * 1000.0;
  t816[0] = 0.5;
  tlu2_linear_linear_prelookup(&kc_efOut.mField0[0ULL], &kc_efOut.mField1[0ULL],
    &kc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t816[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t43 = kc_efOut;
  t816[0ULL] = (X[53ULL] + X[79ULL]) / 2.0;
  tlu2_linear_linear_prelookup(&lc_efOut.mField0[0ULL], &lc_efOut.mField1[0ULL],
    &lc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t816[0ULL],
    &t85[0ULL], &t86[0ULL]);
  t62 = lc_efOut;
  tlu2_2d_linear_linear_value(&mc_efOut[0ULL], &t43.mField0[0ULL], &t43.mField2
    [0ULL], &t62.mField0[0ULL], &t62.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = mc_efOut[0];
  t910 = t812[0ULL];
  t816[0ULL] = X[79ULL];
  tlu2_linear_linear_prelookup(&nc_efOut.mField0[0ULL], &nc_efOut.mField1[0ULL],
    &nc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t816[0ULL],
    &t85[0ULL], &t86[0ULL]);
  t67 = nc_efOut;
  tlu2_1d_linear_linear_value(&oc_efOut[0ULL], &t67.mField0[0ULL], &t67.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t85[0ULL], &t86[0ULL]);
  t812[0] = oc_efOut[0];
  t912 = t812[0ULL];
  tlu2_1d_linear_linear_value(&pc_efOut[0ULL], &t67.mField0[0ULL], &t67.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t85[0ULL], &t86[0ULL]);
  t812[0] = pc_efOut[0];
  t913 = t812[0ULL];
  if (X[80ULL] <= t912) {
    t914 = X[80ULL] / (t912 == 0.0 ? 1.0E-16 : t912) - 1.0;
  } else if (X[80ULL] >= t913) {
    t914 = (X[80ULL] - 4000.0) / (4000.0 - t913 == 0.0 ? 1.0E-16 : 4000.0 - t913)
      + 2.0;
  } else {
    t982 = t913 - t912;
    t914 = (X[80ULL] - t912) / (t982 == 0.0 ? 1.0E-16 : t982);
  }

  t915 = tanh(U_idx_1 * 4.0 / 0.025);
  t916 = X[79ULL] - X[53ULL];
  t917 = fabs(t916) * t915 * 0.018078554672120287;
  if (X[83ULL] <= Condenser_delta_h_2P) {
    t915 = X[83ULL] / (Condenser_delta_h_2P == 0.0 ? 1.0E-16 :
                       Condenser_delta_h_2P) - 1.0;
  } else if (X[83ULL] >= Fixed_Displacement_Pump_2P_mdot_leakage) {
    t915 = (X[83ULL] - 4000.0) / (4000.0 -
      Fixed_Displacement_Pump_2P_mdot_leakage == 0.0 ? 1.0E-16 : 4000.0 -
      Fixed_Displacement_Pump_2P_mdot_leakage) + 2.0;
  } else {
    Steam_Generator_effectiveness_mix = Fixed_Displacement_Pump_2P_mdot_leakage
      - Condenser_delta_h_2P;
    t915 = (X[83ULL] - Condenser_delta_h_2P) /
      (Steam_Generator_effectiveness_mix == 0.0 ? 1.0E-16 :
       Steam_Generator_effectiveness_mix);
  }

  t816[0ULL] = t915;
  tlu2_linear_linear_prelookup(&qc_efOut.mField0[0ULL], &qc_efOut.mField1[0ULL],
    &qc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t816[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t62 = qc_efOut;
  tlu2_2d_linear_linear_value(&rc_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], &t72.mField0[0ULL], &t72.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = rc_efOut[0];
  t918 = t812[0ULL];
  if (X[84ULL] <= t912) {
    Pipe_TL_u_I = X[84ULL] / (t912 == 0.0 ? 1.0E-16 : t912) - 1.0;
  } else if (X[84ULL] >= t913) {
    Pipe_TL_u_I = (X[84ULL] - 4000.0) / (4000.0 - t913 == 0.0 ? 1.0E-16 : 4000.0
      - t913) + 2.0;
  } else {
    t993 = t913 - t912;
    Pipe_TL_u_I = (X[84ULL] - t912) / (t993 == 0.0 ? 1.0E-16 : t993);
  }

  t816[0ULL] = Pipe_TL_u_I;
  tlu2_linear_linear_prelookup(&sc_efOut.mField0[0ULL], &sc_efOut.mField1[0ULL],
    &sc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t816[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t43 = sc_efOut;
  tlu2_2d_linear_linear_value(&tc_efOut[0ULL], &t43.mField0[0ULL], &t43.mField2
    [0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = tc_efOut[0];
  t920 = t812[0ULL];
  if (X[85ULL] <= Condenser_delta_h_2P) {
    t921 = X[85ULL] / (Condenser_delta_h_2P == 0.0 ? 1.0E-16 :
                       Condenser_delta_h_2P) - 1.0;
  } else if (X[85ULL] >= Fixed_Displacement_Pump_2P_mdot_leakage) {
    t921 = (X[85ULL] - 4000.0) / (4000.0 -
      Fixed_Displacement_Pump_2P_mdot_leakage == 0.0 ? 1.0E-16 : 4000.0 -
      Fixed_Displacement_Pump_2P_mdot_leakage) + 2.0;
  } else {
    Steam_Generator_NTU_vap = Fixed_Displacement_Pump_2P_mdot_leakage -
      Condenser_delta_h_2P;
    t921 = (X[85ULL] - Condenser_delta_h_2P) / (Steam_Generator_NTU_vap == 0.0 ?
      1.0E-16 : Steam_Generator_NTU_vap);
  }

  t816[0ULL] = t921;
  tlu2_linear_linear_prelookup(&uc_efOut.mField0[0ULL], &uc_efOut.mField1[0ULL],
    &uc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t816[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t62 = uc_efOut;
  tlu2_2d_linear_linear_value(&vc_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], &t72.mField0[0ULL], &t72.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = vc_efOut[0];
  Condenser_delta_h_2P = t812[0ULL];
  if (X[86ULL] <= t912) {
    Fixed_Displacement_Pump_2P_mdot_leakage = X[86ULL] / (t912 == 0.0 ? 1.0E-16 :
      t912) - 1.0;
  } else if (X[86ULL] >= t913) {
    Fixed_Displacement_Pump_2P_mdot_leakage = (X[86ULL] - 4000.0) / (4000.0 -
      t913 == 0.0 ? 1.0E-16 : 4000.0 - t913) + 2.0;
  } else {
    t1003 = t913 - t912;
    Fixed_Displacement_Pump_2P_mdot_leakage = (X[86ULL] - t912) / (t1003 == 0.0 ?
      1.0E-16 : t1003);
  }

  t816[0ULL] = Fixed_Displacement_Pump_2P_mdot_leakage;
  tlu2_linear_linear_prelookup(&wc_efOut.mField0[0ULL], &wc_efOut.mField1[0ULL],
    &wc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t816[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t62 = wc_efOut;
  tlu2_2d_linear_linear_value(&xc_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = xc_efOut[0];
  t912 = t812[0ULL];
  t922 = pmf_sqrt(1.0000000000000001E-7 / (t910 == 0.0 ? 1.0E-16 : t910) *
                  4.1209000000000006E-6 / 2.0 * 400000.0 + X[57ULL] * X[57ULL]);
  t816[0ULL] = t915;
  tlu2_linear_nearest_prelookup(&yc_efOut.mField0[0ULL], &yc_efOut.mField1[0ULL],
    &yc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t816[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t62 = yc_efOut;
  t816[0ULL] = X[53ULL];
  tlu2_linear_nearest_prelookup(&ad_efOut.mField0[0ULL], &ad_efOut.mField1[0ULL],
    &ad_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t816[0ULL],
    &t85[0ULL], &t86[0ULL]);
  t57 = ad_efOut;
  tlu2_2d_linear_nearest_value(&bd_efOut[0ULL], &t62.mField0[0ULL],
    &t62.mField2[0ULL], &t57.mField0[0ULL], &t57.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = bd_efOut[0];
  t910 = t812[0ULL];
  t816[0ULL] = Fixed_Displacement_Pump_2P_mdot_leakage;
  tlu2_linear_nearest_prelookup(&cd_efOut.mField0[0ULL], &cd_efOut.mField1[0ULL],
    &cd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t816[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t65 = cd_efOut;
  t816[0ULL] = X[79ULL];
  tlu2_linear_nearest_prelookup(&dd_efOut.mField0[0ULL], &dd_efOut.mField1[0ULL],
    &dd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t816[0ULL],
    &t85[0ULL], &t86[0ULL]);
  t43 = dd_efOut;
  tlu2_2d_linear_nearest_value(&ed_efOut[0ULL], &t65.mField0[0ULL],
    &t65.mField2[0ULL], &t43.mField0[0ULL], &t43.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = ed_efOut[0];
  Fixed_Displacement_Pump_2P_mdot_leakage = t812[0ULL];
  Fixed_Displacement_Pump_2P_mdot_leakage = (t910 +
    Fixed_Displacement_Pump_2P_mdot_leakage) / 2.0;
  t816[0ULL] = Pipe_TL_u_I;
  tlu2_linear_nearest_prelookup(&fd_efOut.mField0[0ULL], &fd_efOut.mField1[0ULL],
    &fd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t816[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t62 = fd_efOut;
  tlu2_2d_linear_nearest_value(&gd_efOut[0ULL], &t62.mField0[0ULL],
    &t62.mField2[0ULL], &t43.mField0[0ULL], &t43.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = gd_efOut[0];
  t910 = t812[0ULL];
  t816[0ULL] = t921;
  tlu2_linear_nearest_prelookup(&hd_efOut.mField0[0ULL], &hd_efOut.mField1[0ULL],
    &hd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t816[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t62 = hd_efOut;
  tlu2_2d_linear_nearest_value(&id_efOut[0ULL], &t62.mField0[0ULL],
    &t62.mField2[0ULL], &t57.mField0[0ULL], &t57.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = id_efOut[0];
  t915 = t812[0ULL];
  t910 = (t910 + t915) / 2.0;
  Fixed_Displacement_Pump_2P_mdot_leakage = (-X[57ULL] / (t922 == 0.0 ? 1.0E-16 :
    t922) + 1.0) * Fixed_Displacement_Pump_2P_mdot_leakage / 2.0 + (1.0 - -X
    [57ULL] / (t922 == 0.0 ? 1.0E-16 : t922)) * t910 / 2.0;
  t910 = t916 * 6.36365124458634E-15 / (Fixed_Displacement_Pump_2P_mdot_leakage ==
    0.0 ? 1.0E-16 : Fixed_Displacement_Pump_2P_mdot_leakage);
  t913 = t916 * (U_idx_1 * 1.3257606759554879E-6 * 1.0E+6 - t910 * 1.0E+11);
  Condenser_delta_h_2P = (t920 + Condenser_delta_h_2P) / 2.0;
  Condenser_delta_h_2P = (-X[57ULL] / (t922 == 0.0 ? 1.0E-16 : t922) + 1.0) *
    ((t918 + t912) / 2.0) / 2.0 + (1.0 - -X[57ULL] / (t922 == 0.0 ? 1.0E-16 :
    t922)) * Condenser_delta_h_2P / 2.0;
  Fixed_Displacement_Pump_2P_mdot_leakage = t910 / (Condenser_delta_h_2P == 0.0 ?
    1.0E-16 : Condenser_delta_h_2P);
  t816[0ULL] = X[108ULL];
  tlu2_linear_linear_prelookup(&jd_efOut.mField0[0ULL], &jd_efOut.mField1[0ULL],
    &jd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t816[0ULL],
    &t99[0ULL], &t86[0ULL]);
  t62 = jd_efOut;
  t816[0ULL] = X[103ULL];
  tlu2_linear_linear_prelookup(&kd_efOut.mField0[0ULL], &kd_efOut.mField1[0ULL],
    &kd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t816[0ULL],
    &t102[0ULL], &t86[0ULL]);
  t28 = kd_efOut;
  tlu2_2d_linear_linear_value(&ld_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], &t28.mField0[0ULL], &t28.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  t812[0] = ld_efOut[0];
  t910 = t812[0ULL];
  t816[0ULL] = X[110ULL];
  tlu2_linear_linear_prelookup(&md_efOut.mField0[0ULL], &md_efOut.mField1[0ULL],
    &md_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t816[0ULL],
    &t99[0ULL], &t86[0ULL]);
  t43 = md_efOut;
  t816[0ULL] = X[105ULL];
  tlu2_linear_linear_prelookup(&nd_efOut.mField0[0ULL], &nd_efOut.mField1[0ULL],
    &nd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t816[0ULL],
    &t102[0ULL], &t86[0ULL]);
  t65 = nd_efOut;
  tlu2_2d_linear_linear_value(&od_efOut[0ULL], &t43.mField0[0ULL], &t43.mField2
    [0ULL], &t65.mField0[0ULL], &t65.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  t812[0] = od_efOut[0];
  t912 = t812[0ULL];
  t910 = (t910 + t912) / 2.0;
  t912 = (X[105ULL] - X[103ULL]) * 7.5 / (t910 == 0.0 ? 1.0E-16 : t910);
  t816[0ULL] = X[113ULL];
  tlu2_linear_linear_prelookup(&pd_efOut.mField0[0ULL], &pd_efOut.mField1[0ULL],
    &pd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t816[0ULL],
    &t99[0ULL], &t86[0ULL]);
  t65 = pd_efOut;
  t816[0] = 2.0;
  tlu2_linear_linear_prelookup(&qd_efOut.mField0[0ULL], &qd_efOut.mField1[0ULL],
    &qd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t816[0ULL],
    &t102[0ULL], &t86[0ULL]);
  t62 = qd_efOut;
  tlu2_2d_linear_linear_value(&rd_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], &t62.mField0[0ULL], &t62.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  t812[0] = rd_efOut[0];
  t910 = t812[0ULL];
  t816[0ULL] = X[115ULL];
  tlu2_linear_linear_prelookup(&sd_efOut.mField0[0ULL], &sd_efOut.mField1[0ULL],
    &sd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t816[0ULL],
    &t99[0ULL], &t86[0ULL]);
  t62 = sd_efOut;
  t816[0ULL] = X[52ULL];
  tlu2_linear_linear_prelookup(&td_efOut.mField0[0ULL], &td_efOut.mField1[0ULL],
    &td_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t816[0ULL],
    &t102[0ULL], &t86[0ULL]);
  t23 = td_efOut;
  tlu2_2d_linear_linear_value(&ud_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], &t23.mField0[0ULL], &t23.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  t812[0] = ud_efOut[0];
  t915 = t812[0ULL];
  t910 = (t910 + t915) / 2.0;
  t915 = (X[52ULL] - 2.0) * 10.0 / (t910 == 0.0 ? 1.0E-16 : t910);
  t816[0ULL] = X[16ULL];
  tlu2_linear_nearest_prelookup(&vd_efOut.mField0[0ULL], &vd_efOut.mField1[0ULL],
    &vd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t816[0ULL],
    &t99[0ULL], &t86[0ULL]);
  t53 = vd_efOut;
  t816[0ULL] = X[15ULL];
  tlu2_linear_nearest_prelookup(&wd_efOut.mField0[0ULL], &wd_efOut.mField1[0ULL],
    &wd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t816[0ULL],
    &t102[0ULL], &t86[0ULL]);
  t28 = wd_efOut;
  tlu2_2d_linear_nearest_value(&xd_efOut[0ULL], &t53.mField0[0ULL],
    &t53.mField2[0ULL], &t28.mField0[0ULL], &t28.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  t812[0] = xd_efOut[0];
  t910 = t812[0ULL];
  t816[0ULL] = X[16ULL];
  tlu2_linear_linear_prelookup(&yd_efOut.mField0[0ULL], &yd_efOut.mField1[0ULL],
    &yd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t816[0ULL],
    &t99[0ULL], &t86[0ULL]);
  t71 = yd_efOut;
  t816[0ULL] = X[15ULL];
  tlu2_linear_linear_prelookup(&ae_efOut.mField0[0ULL], &ae_efOut.mField1[0ULL],
    &ae_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t816[0ULL],
    &t102[0ULL], &t86[0ULL]);
  t79 = ae_efOut;
  tlu2_2d_linear_linear_value(&be_efOut[0ULL], &t71.mField0[0ULL], &t71.mField2
    [0ULL], &t79.mField0[0ULL], &t79.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  t812[0] = be_efOut[0];
  t918 = t812[0ULL];
  tlu2_2d_linear_linear_value(&ce_efOut[0ULL], &t71.mField0[0ULL], &t71.mField2
    [0ULL], &t79.mField0[0ULL], &t79.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField18, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  t812[0] = ce_efOut[0];
  Pipe_TL_u_I = t812[0ULL];
  t816[0ULL] = X[18ULL];
  tlu2_linear_nearest_prelookup(&de_efOut.mField0[0ULL], &de_efOut.mField1[0ULL],
    &de_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t816[0ULL],
    &t99[0ULL], &t86[0ULL]);
  t53 = de_efOut;
  t816[0ULL] = X[17ULL];
  tlu2_linear_nearest_prelookup(&ee_efOut.mField0[0ULL], &ee_efOut.mField1[0ULL],
    &ee_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t816[0ULL],
    &t102[0ULL], &t86[0ULL]);
  t62 = ee_efOut;
  tlu2_2d_linear_nearest_value(&fe_efOut[0ULL], &t53.mField0[0ULL],
    &t53.mField2[0ULL], &t62.mField0[0ULL], &t62.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  t812[0] = fe_efOut[0];
  t921 = t812[0ULL];
  t816[0ULL] = X[18ULL];
  tlu2_linear_linear_prelookup(&ge_efOut.mField0[0ULL], &ge_efOut.mField1[0ULL],
    &ge_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t816[0ULL],
    &t99[0ULL], &t86[0ULL]);
  t62 = ge_efOut;
  t816[0ULL] = X[17ULL];
  tlu2_linear_linear_prelookup(&he_efOut.mField0[0ULL], &he_efOut.mField1[0ULL],
    &he_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t816[0ULL],
    &t102[0ULL], &t86[0ULL]);
  t79 = he_efOut;
  tlu2_2d_linear_linear_value(&ie_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], &t79.mField0[0ULL], &t79.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  t812[0] = ie_efOut[0];
  t922 = t812[0ULL];
  tlu2_2d_linear_linear_value(&je_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], &t79.mField0[0ULL], &t79.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField18, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  t812[0] = je_efOut[0];
  t923 = t812[0ULL];
  t925 = -X[134ULL] + X[91ULL];
  t926 = -X[135ULL] + X[93ULL];
  t816[0ULL] = X[20ULL];
  tlu2_linear_nearest_prelookup(&ke_efOut.mField0[0ULL], &ke_efOut.mField1[0ULL],
    &ke_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t816[0ULL],
    &t99[0ULL], &t86[0ULL]);
  t43 = ke_efOut;
  t816[0ULL] = X[19ULL];
  tlu2_linear_nearest_prelookup(&le_efOut.mField0[0ULL], &le_efOut.mField1[0ULL],
    &le_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t816[0ULL],
    &t102[0ULL], &t86[0ULL]);
  t62 = le_efOut;
  tlu2_2d_linear_nearest_value(&me_efOut[0ULL], &t43.mField0[0ULL],
    &t43.mField2[0ULL], &t62.mField0[0ULL], &t62.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  t812[0] = me_efOut[0];
  intrm_sf_mf_329 = t812[0ULL];
  t816[0ULL] = X[20ULL];
  tlu2_linear_linear_prelookup(&ne_efOut.mField0[0ULL], &ne_efOut.mField1[0ULL],
    &ne_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t816[0ULL],
    &t99[0ULL], &t86[0ULL]);
  t23 = ne_efOut;
  t816[0ULL] = X[19ULL];
  tlu2_linear_linear_prelookup(&oe_efOut.mField0[0ULL], &oe_efOut.mField1[0ULL],
    &oe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t816[0ULL],
    &t102[0ULL], &t86[0ULL]);
  t71 = oe_efOut;
  tlu2_2d_linear_linear_value(&pe_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t71.mField0[0ULL], &t71.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  t812[0] = pe_efOut[0];
  t928 = t812[0ULL];
  tlu2_2d_linear_linear_value(&qe_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t71.mField0[0ULL], &t71.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField18, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  t812[0] = qe_efOut[0];
  t929 = t812[0ULL];
  t932 = U_idx_2 * 1000.0;
  t816[0ULL] = X[21ULL];
  tlu2_linear_linear_prelookup(&re_efOut.mField0[0ULL], &re_efOut.mField1[0ULL],
    &re_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t816[0ULL],
    &t85[0ULL], &t86[0ULL]);
  t65 = re_efOut;
  tlu2_1d_linear_linear_value(&se_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t85[0ULL], &t86[0ULL]);
  t812[0] = se_efOut[0];
  t934 = t812[0ULL];
  tlu2_1d_linear_linear_value(&te_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t85[0ULL], &t86[0ULL]);
  t812[0] = te_efOut[0];
  t935 = t812[0ULL];
  if (X[22ULL] <= t934) {
    t936 = X[22ULL] / (t934 == 0.0 ? 1.0E-16 : t934) - 1.0;
  } else if (X[22ULL] >= t935) {
    t936 = (X[22ULL] - 4000.0) / (4000.0 - t935 == 0.0 ? 1.0E-16 : 4000.0 - t935)
      + 2.0;
  } else {
    Steam_Generator_thermal_liquid_h_in = t935 - t934;
    t936 = (X[22ULL] - t934) / (Steam_Generator_thermal_liquid_h_in == 0.0 ?
      1.0E-16 : Steam_Generator_thermal_liquid_h_in);
  }

  t934 = -X[141ULL] + X[47ULL];
  t816[0ULL] = t936;
  tlu2_linear_linear_prelookup(&ue_efOut.mField0[0ULL], &ue_efOut.mField1[0ULL],
    &ue_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t816[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t62 = ue_efOut;
  tlu2_2d_linear_linear_value(&ve_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], &t65.mField0[0ULL], &t65.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = ve_efOut[0];
  t935 = t812[0ULL];
  t937 = -X[142ULL] + X[45ULL];
  tlu2_2d_linear_linear_value(&we_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], &t65.mField0[0ULL], &t65.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = we_efOut[0];
  t938 = t812[0ULL];
  t816[0ULL] = Preheating_Thermodynamic_Properties_Sensor_2P1_V;
  tlu2_linear_linear_prelookup(&xe_efOut.mField0[0ULL], &xe_efOut.mField1[0ULL],
    &xe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t816[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t62 = xe_efOut;
  tlu2_2d_linear_linear_value(&ye_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], &t82.mField0[0ULL], &t82.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = ye_efOut[0];
  t1032 = -t812[0ULL];
  Preheating_Thermodynamic_Properties_Sensor_2P1_V = -t1032;
  t941 = X[43ULL] * -t1032 * 100.0 + X[44ULL];
  tlu2_2d_linear_linear_value(&af_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], &t82.mField0[0ULL], &t82.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = af_efOut[0];
  t1034 = -t812[0ULL];
  t942 = -t1034;
  tlu2_2d_linear_linear_value(&bf_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], &t82.mField0[0ULL], &t82.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = bf_efOut[0];
  t1035 = -t812[0ULL];
  t943 = -t1035;
  t816[0ULL] = t914;
  tlu2_linear_linear_prelookup(&cf_efOut.mField0[0ULL], &cf_efOut.mField1[0ULL],
    &cf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t816[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t57 = cf_efOut;
  tlu2_2d_linear_linear_value(&df_efOut[0ULL], &t57.mField0[0ULL], &t57.mField2
    [0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = df_efOut[0];
  t1036 = -t812[0ULL];
  t914 = -t1036;
  tlu2_2d_linear_linear_value(&ef_efOut[0ULL], &t57.mField0[0ULL], &t57.mField2
    [0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = ef_efOut[0];
  t920 = -t812[0ULL];
  t945 = -t920;
  tlu2_2d_linear_linear_value(&ff_efOut[0ULL], &t57.mField0[0ULL], &t57.mField2
    [0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = ff_efOut[0];
  t1039 = -t812[0ULL];
  t946 = -t1039;
  t960 = X[0ULL] - X[49ULL];
  if (X[97ULL] <= Steam_Drum_h_liq) {
    t961 = X[97ULL] / (Steam_Drum_h_liq == 0.0 ? 1.0E-16 : Steam_Drum_h_liq) -
      1.0;
  } else if (X[97ULL] >= Steam_Generator_two_phase_fluid_T_out) {
    t961 = (X[97ULL] - 4000.0) / (4000.0 - Steam_Generator_two_phase_fluid_T_out
      == 0.0 ? 1.0E-16 : 4000.0 - Steam_Generator_two_phase_fluid_T_out) + 2.0;
  } else {
    Condenser_delta_h_2P = Steam_Generator_two_phase_fluid_T_out -
      Steam_Drum_h_liq;
    t961 = (X[97ULL] - Steam_Drum_h_liq) / (Condenser_delta_h_2P == 0.0 ?
      1.0E-16 : Condenser_delta_h_2P);
  }

  t816[0ULL] = t961;
  tlu2_linear_linear_prelookup(&gf_efOut.mField0[0ULL], &gf_efOut.mField1[0ULL],
    &gf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t816[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t82 = gf_efOut;
  tlu2_2d_linear_linear_value(&hf_efOut[0ULL], &t82.mField0[0ULL], &t82.mField2
    [0ULL], &t83.mField0[0ULL], &t83.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t819[0] = hf_efOut[0];
  t961 = t819[0ULL];
  t1086 = pmf_sqrt(t961 * 461.5);
  tlu2_2d_linear_linear_value(&if_efOut[0ULL], &t82.mField0[0ULL], &t82.mField2
    [0ULL], &t83.mField0[0ULL], &t83.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t697[0] = if_efOut[0];
  t963 = t697[0ULL];
  if (U_idx_3 <= 0.0) {
    t965 = 0.0;
  } else {
    t965 = U_idx_3 >= 1.0 ? 1.0 : U_idx_3;
  }

  t966 = t965 * 0.0002;
  Simscape_Component_mdot_forward = X[49ULL] / (X[0ULL] == 0.0 ? 1.0E-16 : X
    [0ULL]);
  if (Simscape_Component_mdot_forward <= 0.0) {
    t968 = 0.0;
  } else {
    t968 = Simscape_Component_mdot_forward >= 1.0 ? 1.0 :
      Simscape_Component_mdot_forward;
  }

  Simscape_Component_mdot_forward = (pmf_pow(t968, 1.5384615384615383) - pmf_pow
    (t968, 1.7692307692307689)) * 8.6666666666666661;
  if (Simscape_Component_mdot_forward <= 0.0) {
    t969 = 0.0;
  } else {
    t969 = Simscape_Component_mdot_forward >= 1.0E+6 ? 1.0E+6 :
      Simscape_Component_mdot_forward;
  }

  Simscape_Component_mdot_forward = t966 * X[0ULL] * 0.85 / (t1086 == 0.0 ?
    1.0E-16 : t1086) * pmf_sqrt(t969);
  if (t968 < 0.545727733814065) {
    t969 = X[0ULL] * 0.85 / (t1086 == 0.0 ? 1.0E-16 : t1086) * 0.667262351240862
      * t966 * 100000.0;
  } else {
    t969 = Simscape_Component_mdot_forward * 100000.0;
  }

  Simscape_Component_mdot_forward = t960 > 0.01 ? t969 : 0.0;
  t1265 = fabs(Simscape_Component_mdot_forward);
  zc_int14 = t1265 / 1.5;
  t969 = (0.8 - (zc_int14 - 0.8) * (zc_int14 - 0.8) * 0.2) - (t968 - 0.25) *
    (t968 - 0.25) * 0.35;
  zc_int14 = t963 * X[0ULL] * 100.0 + X[97ULL];
  if (t894 <= t894) {
    t963 = t894 / (t894 == 0.0 ? 1.0E-16 : t894) - 1.0;
  } else if (t894 >= Simscape_Component_ideal_outlet_enthalpy) {
    t963 = (t894 - 4000.0) / (4000.0 - Simscape_Component_ideal_outlet_enthalpy ==
      0.0 ? 1.0E-16 : 4000.0 - Simscape_Component_ideal_outlet_enthalpy) + 2.0;
  } else {
    Condenser_delta_h_2P = Simscape_Component_ideal_outlet_enthalpy - t894;
    t963 = (t894 - t894) / (Condenser_delta_h_2P == 0.0 ? 1.0E-16 :
      Condenser_delta_h_2P);
  }

  t816[0ULL] = t963;
  tlu2_linear_linear_prelookup(&jf_efOut.mField0[0ULL], &jf_efOut.mField1[0ULL],
    &jf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t816[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t62 = jf_efOut;
  tlu2_2d_linear_linear_value(&kf_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], &t76.mField0[0ULL], &t76.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = kf_efOut[0];
  t963 = t812[0ULL];
  Simscape_Component_nozzle_area_out = X[49ULL] * t963 * 100.0 + t894;
  if (Simscape_Component_ideal_outlet_enthalpy <= t894) {
    t963 = Simscape_Component_ideal_outlet_enthalpy / (t894 == 0.0 ? 1.0E-16 :
      t894) - 1.0;
  } else if (Simscape_Component_ideal_outlet_enthalpy >=
             Simscape_Component_ideal_outlet_enthalpy) {
    t963 = (Simscape_Component_ideal_outlet_enthalpy - 4000.0) / (4000.0 -
      Simscape_Component_ideal_outlet_enthalpy == 0.0 ? 1.0E-16 : 4000.0 -
      Simscape_Component_ideal_outlet_enthalpy) + 2.0;
  } else {
    Condenser_delta_h_2P = Simscape_Component_ideal_outlet_enthalpy - t894;
    t963 = (Simscape_Component_ideal_outlet_enthalpy - t894) /
      (Condenser_delta_h_2P == 0.0 ? 1.0E-16 : Condenser_delta_h_2P);
  }

  t816[0ULL] = t963;
  tlu2_linear_linear_prelookup(&lf_efOut.mField0[0ULL], &lf_efOut.mField1[0ULL],
    &lf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t816[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t53 = lf_efOut;
  tlu2_2d_linear_linear_value(&mf_efOut[0ULL], &t53.mField0[0ULL], &t53.mField2
    [0ULL], &t76.mField0[0ULL], &t76.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = mf_efOut[0];
  t894 = t812[0ULL];
  t963 = X[49ULL] * t894 * 100.0 + Simscape_Component_ideal_outlet_enthalpy;
  tlu2_2d_linear_linear_value(&nf_efOut[0ULL], &t82.mField0[0ULL], &t82.mField2
    [0ULL], &t83.mField0[0ULL], &t83.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t821[0] = nf_efOut[0];
  t894 = t821[0ULL];
  tlu2_2d_linear_linear_value(&of_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], &t76.mField0[0ULL], &t76.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = of_efOut[0];
  Simscape_Component_ideal_outlet_enthalpy = t812[0ULL];
  tlu2_2d_linear_linear_value(&pf_efOut[0ULL], &t53.mField0[0ULL], &t53.mField2
    [0ULL], &t76.mField0[0ULL], &t76.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = pf_efOut[0];
  t971 = t812[0ULL];
  t1086 = t971 - Simscape_Component_ideal_outlet_enthalpy;
  Simscape_Component_ideal_outlet_enthalpy = (t894 -
    Simscape_Component_ideal_outlet_enthalpy) / (t1086 == 0.0 ? 1.0E-16 : t1086);
  if (Simscape_Component_ideal_outlet_enthalpy <= 0.0) {
    t971 = 0.0;
  } else {
    t971 = Simscape_Component_ideal_outlet_enthalpy >= 1.0 ? 1.0 :
      Simscape_Component_ideal_outlet_enthalpy;
  }

  Simscape_Component_ideal_outlet_enthalpy = (t963 -
    Simscape_Component_nozzle_area_out) * t971 +
    Simscape_Component_nozzle_area_out;
  t963 = zc_int14 - Simscape_Component_ideal_outlet_enthalpy;
  Simscape_Component_nozzle_area_out = t966;
  t966 = (real_T)(t968 < 0.545727733814065);
  if (X[26ULL] < Steam_Drum_h_liq) {
    t972 = X[26ULL] / (Steam_Drum_h_liq == 0.0 ? 1.0E-16 : Steam_Drum_h_liq) -
      1.0;
  } else {
    t972 = 0.0;
  }

  if (X[27ULL] > Steam_Generator_two_phase_fluid_T_out) {
    t973 = (X[27ULL] - 4000.0) / (4000.0 - Steam_Generator_two_phase_fluid_T_out
      == 0.0 ? 1.0E-16 : 4000.0 - Steam_Generator_two_phase_fluid_T_out) + 2.0;
  } else {
    t973 = 1.0;
  }

  t816[0ULL] = t972;
  t494[0] = 25ULL;
  tlu2_linear_linear_prelookup(&qf_efOut.mField0[0ULL], &qf_efOut.mField1[0ULL],
    &qf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t816[0ULL],
    &t494[0ULL], &t86[0ULL]);
  t71 = qf_efOut;
  tlu2_2d_linear_linear_value(&rf_efOut[0ULL], &t71.mField0[0ULL], &t71.mField2
    [0ULL], &t831[0ULL], &t833[0ULL], ((_NeDynamicSystem*)(LC))->mField31,
    &t494[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = rf_efOut[0];
  t974 = t812[0ULL];
  t816[0ULL] = t973;
  tlu2_linear_linear_prelookup(&sf_efOut.mField0[0ULL], &sf_efOut.mField1[0ULL],
    &sf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t816[0ULL],
    &t494[0ULL], &t86[0ULL]);
  t62 = sf_efOut;
  tlu2_2d_linear_linear_value(&tf_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], &t831[0ULL], &t833[0ULL], ((_NeDynamicSystem*)(LC))->mField32,
    &t494[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = tf_efOut[0];
  t975 = t812[0ULL];
  t1086 = X[28ULL] * t974 + X[29ULL] * t975;
  t976 = X[28ULL] * t974 / (t1086 == 0.0 ? 1.0E-16 : t1086);
  t1086 = X[28ULL] + X[29ULL];
  tlu2_2d_linear_linear_value(&uf_efOut[0ULL], &t69.mField0[0ULL], &t69.mField2
    [0ULL], &t831[0ULL], &t833[0ULL], ((_NeDynamicSystem*)(LC))->mField0, &t114
    [0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = uf_efOut[0];
  t979 = t812[0ULL];
  t980 = X[0ULL] * t979 * 100.0 + Steam_Drum_h_liq;
  tlu2_2d_linear_linear_value(&vf_efOut[0ULL], &t54.mField0[0ULL], &t54.mField2
    [0ULL], &t831[0ULL], &t833[0ULL], ((_NeDynamicSystem*)(LC))->mField0, &t114
    [0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = vf_efOut[0];
  t979 = t812[0ULL];
  t981 = X[0ULL] * t979 * 100.0 + Steam_Generator_two_phase_fluid_T_out;
  if (X[147ULL] <= Steam_Drum_h_liq) {
    t979 = X[147ULL] / (Steam_Drum_h_liq == 0.0 ? 1.0E-16 : Steam_Drum_h_liq) -
      1.0;
  } else if (X[147ULL] >= Steam_Generator_two_phase_fluid_T_out) {
    t979 = (X[147ULL] - 4000.0) / (4000.0 -
      Steam_Generator_two_phase_fluid_T_out == 0.0 ? 1.0E-16 : 4000.0 -
      Steam_Generator_two_phase_fluid_T_out) + 2.0;
  } else {
    zc_int14 = Steam_Generator_two_phase_fluid_T_out - Steam_Drum_h_liq;
    t979 = (X[147ULL] - Steam_Drum_h_liq) / (zc_int14 == 0.0 ? 1.0E-16 :
      zc_int14);
  }

  Steam_Drum_h_liq = X[0ULL] * t974 * 100.0 + X[26ULL];
  if (X[28ULL] > 0.0) {
    if (t981 > t980) {
      if (Steam_Drum_h_liq < t980) {
        Steam_Generator_two_phase_fluid_T_out = 0.0;
      } else if (Steam_Drum_h_liq > t981) {
        Steam_Generator_two_phase_fluid_T_out = X[28ULL] / 0.1;
      } else {
        Condenser_delta_h_2P = t981 - t980;
        Steam_Generator_two_phase_fluid_T_out = (Steam_Drum_h_liq - t980) * X
          [28ULL] / (Condenser_delta_h_2P == 0.0 ? 1.0E-16 :
                     Condenser_delta_h_2P) / 0.1;
      }
    } else {
      Steam_Generator_two_phase_fluid_T_out = 0.0;
    }
  } else {
    Steam_Generator_two_phase_fluid_T_out = 0.0;
  }

  t982 = X[0ULL] * t975 * 100.0 + X[27ULL];
  if (X[29ULL] > 0.0) {
    if (t981 > t980) {
      if (t982 < t980) {
        t983 = X[29ULL] / 0.1;
      } else if (t982 > t981) {
        t983 = 0.0;
      } else {
        Condenser_delta_h_2P = t981 - t980;
        t983 = (t981 - t982) * X[29ULL] / (Condenser_delta_h_2P == 0.0 ? 1.0E-16
          : Condenser_delta_h_2P) / 0.1;
      }
    } else {
      t983 = 0.0;
    }
  } else {
    t983 = 0.0;
  }

  t816[0ULL] = t972;
  tlu2_linear_linear_prelookup(&wf_efOut.mField0[0ULL], &wf_efOut.mField1[0ULL],
    &wf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t816[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t62 = wf_efOut;
  tlu2_2d_linear_linear_value(&xf_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], &t831[0ULL], &t833[0ULL], ((_NeDynamicSystem*)(LC))->mField14,
    &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = xf_efOut[0];
  t972 = t812[0ULL];
  t816[0ULL] = t973;
  tlu2_linear_linear_prelookup(&yf_efOut.mField0[0ULL], &yf_efOut.mField1[0ULL],
    &yf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t816[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t62 = yf_efOut;
  tlu2_2d_linear_linear_value(&ag_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], &t831[0ULL], &t833[0ULL], ((_NeDynamicSystem*)(LC))->mField14,
    &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = ag_efOut[0];
  t973 = t812[0ULL];
  tlu2_2d_linear_linear_value(&bg_efOut[0ULL], &t69.mField0[0ULL], &t69.mField2
    [0ULL], &t831[0ULL], &t833[0ULL], ((_NeDynamicSystem*)(LC))->mField14,
    &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = bg_efOut[0];
  t984 = t812[0ULL];
  tlu2_2d_linear_linear_value(&cg_efOut[0ULL], &t54.mField0[0ULL], &t54.mField2
    [0ULL], &t831[0ULL], &t833[0ULL], ((_NeDynamicSystem*)(LC))->mField14,
    &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = cg_efOut[0];
  t985 = t812[0ULL];
  t986 = Steam_Generator_two_phase_fluid_T_out - t983;
  t816[0ULL] = X[30ULL];
  tlu2_linear_nearest_prelookup(&dg_efOut.mField0[0ULL], &dg_efOut.mField1[0ULL],
    &dg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t816[0ULL],
    &t99[0ULL], &t86[0ULL]);
  t67 = dg_efOut;
  t816[0ULL] = X[31ULL];
  tlu2_linear_nearest_prelookup(&eg_efOut.mField0[0ULL], &eg_efOut.mField1[0ULL],
    &eg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t816[0ULL],
    &t102[0ULL], &t86[0ULL]);
  t23 = eg_efOut;
  tlu2_2d_linear_nearest_value(&fg_efOut[0ULL], &t67.mField0[0ULL],
    &t67.mField2[0ULL], &t23.mField0[0ULL], &t23.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField5, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  t812[0] = fg_efOut[0];
  Steam_Generator_two_phase_fluid_T_out = t812[0ULL];
  t816[0ULL] = X[32ULL];
  tlu2_linear_nearest_prelookup(&gg_efOut.mField0[0ULL], &gg_efOut.mField1[0ULL],
    &gg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t816[0ULL],
    &t99[0ULL], &t86[0ULL]);
  t57 = gg_efOut;
  tlu2_2d_linear_nearest_value(&hg_efOut[0ULL], &t57.mField0[0ULL],
    &t57.mField2[0ULL], &t23.mField0[0ULL], &t23.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField5, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  t812[0] = hg_efOut[0];
  t983 = t812[0ULL];
  Steam_Generator_two_phase_fluid_T_out = (Steam_Generator_two_phase_fluid_T_out
    + t983) / 2.0;
  t983 = Steam_Generator_two_phase_fluid_T_out * 0.42000000000000004 / 0.018;
  t816[0ULL] = X[33ULL];
  tlu2_linear_nearest_prelookup(&ig_efOut.mField0[0ULL], &ig_efOut.mField1[0ULL],
    &ig_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t816[0ULL],
    &t85[0ULL], &t86[0ULL]);
  t79 = ig_efOut;
  tlu2_2d_linear_nearest_value(&jg_efOut[0ULL], &t64.mField0[0ULL],
    &t64.mField2[0ULL], &t79.mField0[0ULL], &t79.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = jg_efOut[0];
  intrm_sf_mf_499 = t812[0ULL];
  Steam_Generator_effectiveness_mix = intrm_sf_mf_499 * 0.036815538909255395 /
    0.025;
  t889 = (t983 + Steam_Generator_effectiveness_mix) / 2.0;
  t816[0ULL] = X[30ULL];
  tlu2_linear_linear_prelookup(&kg_efOut.mField0[0ULL], &kg_efOut.mField1[0ULL],
    &kg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t816[0ULL],
    &t99[0ULL], &t86[0ULL]);
  t28 = kg_efOut;
  t816[0ULL] = X[31ULL];
  tlu2_linear_linear_prelookup(&lg_efOut.mField0[0ULL], &lg_efOut.mField1[0ULL],
    &lg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t816[0ULL],
    &t102[0ULL], &t86[0ULL]);
  t53 = lg_efOut;
  tlu2_2d_linear_linear_value(&mg_efOut[0ULL], &t28.mField0[0ULL], &t28.mField2
    [0ULL], &t53.mField0[0ULL], &t53.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField9, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  t812[0] = mg_efOut[0];
  t990 = t812[0ULL];
  t816[0ULL] = X[32ULL];
  tlu2_linear_linear_prelookup(&ng_efOut.mField0[0ULL], &ng_efOut.mField1[0ULL],
    &ng_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t816[0ULL],
    &t99[0ULL], &t86[0ULL]);
  t64 = ng_efOut;
  tlu2_2d_linear_linear_value(&og_efOut[0ULL], &t64.mField0[0ULL], &t64.mField2
    [0ULL], &t53.mField0[0ULL], &t53.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField9, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  t812[0] = og_efOut[0];
  Steam_Generator_e_vap_ = t812[0ULL];
  t990 = (t990 + Steam_Generator_e_vap_) / 2.0;
  Steam_Generator_e_vap_ = (X[135ULL] - -7.5) / 2.0;
  t992 = tanh(t990 * Steam_Generator_e_vap_ * 3.0 / (t983 == 0.0 ? 1.0E-16 :
    t983)) * t990 * Steam_Generator_e_vap_;
  t983 = t889 + t992;
  t816[0ULL] = X[33ULL];
  tlu2_linear_linear_prelookup(&pg_efOut.mField0[0ULL], &pg_efOut.mField1[0ULL],
    &pg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t816[0ULL],
    &t85[0ULL], &t86[0ULL]);
  t65 = pg_efOut;
  tlu2_1d_linear_linear_value(&qg_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t85[0ULL], &t86[0ULL]);
  t812[0] = qg_efOut[0];
  t990 = t812[0ULL];
  tlu2_1d_linear_linear_value(&rg_efOut[0ULL], &t65.mField0[0ULL], &t65.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t85[0ULL], &t86[0ULL]);
  t812[0] = rg_efOut[0];
  t993 = t812[0ULL];
  if (X[34ULL] <= t990) {
    t1272 = X[34ULL] / (t990 == 0.0 ? 1.0E-16 : t990) - 1.0;
  } else if (X[34ULL] >= t993) {
    t1272 = (X[34ULL] - 4000.0) / (4000.0 - t993 == 0.0 ? 1.0E-16 : 4000.0 -
      t993) + 2.0;
  } else {
    zc_int14 = t993 - t990;
    t1272 = (X[34ULL] - t990) / (zc_int14 == 0.0 ? 1.0E-16 : zc_int14);
  }

  intrm_sf_mf_412 = (t1272 < 0.0);
  if (X[35ULL] <= t990) {
    t1281 = X[35ULL] / (t990 == 0.0 ? 1.0E-16 : t990) - 1.0;
  } else if (X[35ULL] >= t993) {
    t1281 = (X[35ULL] - 4000.0) / (4000.0 - t993 == 0.0 ? 1.0E-16 : 4000.0 -
      t993) + 2.0;
  } else {
    zc_int14 = t993 - t990;
    t1281 = (X[35ULL] - t990) / (zc_int14 == 0.0 ? 1.0E-16 : zc_int14);
  }

  intrm_sf_mf_416 = (t1281 < 0.0);
  t816[0ULL] = ((intrm_sf_mf_412 ? t1272 : 0.0) + (intrm_sf_mf_416 ? t1281 : 0.0))
    / 2.0;
  tlu2_linear_nearest_prelookup(&sg_efOut.mField0[0ULL], &sg_efOut.mField1[0ULL],
    &sg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t816[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t62 = sg_efOut;
  tlu2_2d_linear_nearest_value(&tg_efOut[0ULL], &t62.mField0[0ULL],
    &t62.mField2[0ULL], &t79.mField0[0ULL], &t79.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = tg_efOut[0];
  Steam_Generator_Q_mix_ = t812[0ULL];
  tlu2_2d_linear_nearest_value(&ug_efOut[0ULL], &t62.mField0[0ULL],
    &t62.mField2[0ULL], &t79.mField0[0ULL], &t79.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = ug_efOut[0];
  t997 = t812[0ULL];
  tlu2_2d_linear_nearest_value(&vg_efOut[0ULL], &t62.mField0[0ULL],
    &t62.mField2[0ULL], &t79.mField0[0ULL], &t79.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = vg_efOut[0];
  Steam_Generator_NTU_vap = t812[0ULL];
  t999 = Steam_Generator_Q_mix_ * t997 / (Steam_Generator_NTU_vap == 0.0 ?
    1.0E-16 : Steam_Generator_NTU_vap);
  if (-X[158ULL] > 0.0) {
    Steam_Generator_two_phase_fluid_T_sat_vap = -X[158ULL];
  } else {
    Steam_Generator_two_phase_fluid_T_sat_vap = 0.0;
  }

  Steam_Generator_two_phase_fluid_Cdot_ext_lag_pos = tanh((X[141ULL] - (-X
    [158ULL])) * t999 * 3.0 / (Steam_Generator_effectiveness_mix == 0.0 ?
    1.0E-16 : Steam_Generator_effectiveness_mix));
  Steam_Generator_effectiveness_mix =
    (Steam_Generator_two_phase_fluid_Cdot_ext_lag_pos + 1.0) / 2.0 * (X[141ULL] >
    0.0 ? X[141ULL] : 0.0) + (1.0 -
    Steam_Generator_two_phase_fluid_Cdot_ext_lag_pos) / 2.0 *
    Steam_Generator_two_phase_fluid_T_sat_vap;
  t1000 = t999 * Steam_Generator_effectiveness_mix;
  Steam_Generator_two_phase_fluid_T_sat_vap = t1000 + t889;
  Steam_Generator_two_phase_fluid_Cdot_ext_lag_pos = X[37ULL] >= 0.0 ? X[37ULL] :
    0.0;
  t1003 = X[38ULL] >= 0.0 ? X[38ULL] : 0.0;
  t1253 = Steam_Generator_two_phase_fluid_Cdot_ext_lag_pos + X[164ULL];
  Condenser_delta_h_2P = (Steam_Generator_two_phase_fluid_Cdot_ext_lag_pos + X
    [164ULL]) * (1.0 - pmf_exp(-X[36ULL] / (t1253 == 0.0 ? 1.0E-16 : t1253)));
  t1265 = t999 * t1003 + X[164ULL];
  t920 = Condenser_delta_h_2P / (t1265 == 0.0 ? 1.0E-16 : t1265);
  t1005 = t920 <= 15.0 ? t920 : 15.0;
  t816[0ULL] = t1272;
  tlu2_linear_linear_prelookup(&wg_efOut.mField0[0ULL], &wg_efOut.mField1[0ULL],
    &wg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t816[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t43 = wg_efOut;
  tlu2_2d_linear_linear_value(&xg_efOut[0ULL], &t43.mField0[0ULL], &t43.mField2
    [0ULL], &t65.mField0[0ULL], &t65.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = xg_efOut[0];
  t920 = t812[0ULL];
  t1006 = X[33ULL] * t920 * 100.0 + X[34ULL];
  tlu2_2d_linear_linear_value(&yg_efOut[0ULL], &t69.mField0[0ULL], &t69.mField2
    [0ULL], &t65.mField0[0ULL], &t65.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = yg_efOut[0];
  Steam_Generator_two_phase_fluid_mass_mix = t812[0ULL];
  t1009 = X[33ULL] * Steam_Generator_two_phase_fluid_mass_mix * 100.0 + t990;
  t990 = (t1009 - t1006) / (t999 == 0.0 ? 1.0E-16 : t999);
  t1010 = (1.0 - pmf_exp(-t1005)) * X[163ULL];
  intrm_sf_mf_450 = (t1010 > t990 * 1000.0);
  intrm_sf_mf_434 = (t1006 < t1009);
  intrm_sf_mf_436 = (t1006 > t1009);
  tlu2_2d_linear_linear_value(&ah_efOut[0ULL], &t54.mField0[0ULL], &t54.mField2
    [0ULL], &t65.mField0[0ULL], &t65.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = ah_efOut[0];
  Steam_Generator_two_phase_fluid_mass_vap = t812[0ULL];
  t1012 = X[33ULL] * Steam_Generator_two_phase_fluid_mass_vap * 100.0 + t993;
  intrm_sf_mf_437 = (t1006 > t1012);
  intrm_sf_mf_440 = (X[163ULL] < 0.0);
  intrm_sf_mf_441 = (X[163ULL] > 0.0);
  if (intrm_sf_mf_441) {
    if (intrm_sf_mf_434) {
      if (intrm_sf_mf_450) {
        zc_int14 = -pmf_log((X[163ULL] - t990 * 1000.0) / (X[163ULL] == 0.0 ?
          1.0E-16 : X[163ULL]));
        t993 = zc_int14 / (t1005 == 0.0 ? 1.0E-16 : t1005);
      } else {
        t993 = 1.0;
      }
    } else {
      t993 = 0.0;
    }
  } else {
    t993 = intrm_sf_mf_440 ? intrm_sf_mf_437 ? 0.0 : (real_T)!intrm_sf_mf_436 :
      (real_T)intrm_sf_mf_434;
  }

  intrm_sf_mf_417 = (t1272 > 1.0);
  intrm_sf_mf_418 = (t1281 > 1.0);
  t816[0ULL] = ((intrm_sf_mf_417 ? t1272 : 1.0) + (intrm_sf_mf_418 ? t1281 : 1.0))
    / 2.0;
  tlu2_linear_nearest_prelookup(&bh_efOut.mField0[0ULL], &bh_efOut.mField1[0ULL],
    &bh_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t816[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t62 = bh_efOut;
  tlu2_2d_linear_nearest_value(&ch_efOut[0ULL], &t62.mField0[0ULL],
    &t62.mField2[0ULL], &t79.mField0[0ULL], &t79.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = ch_efOut[0];
  Steam_Generator_Q_cond = t812[0ULL];
  tlu2_2d_linear_nearest_value(&dh_efOut[0ULL], &t62.mField0[0ULL],
    &t62.mField2[0ULL], &t79.mField0[0ULL], &t79.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = dh_efOut[0];
  Steam_Generator_Q_mix = t812[0ULL];
  tlu2_2d_linear_nearest_value(&eh_efOut[0ULL], &t62.mField0[0ULL],
    &t62.mField2[0ULL], &t79.mField0[0ULL], &t79.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = eh_efOut[0];
  intrm_sf_mf_512 = t812[0ULL];
  t1018 = Steam_Generator_Q_cond * Steam_Generator_Q_mix / (intrm_sf_mf_512 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_512);
  zc_int14 = (Steam_Generator_two_phase_fluid_Cdot_ext_lag_pos + X[164ULL]) *
    (1.0 - pmf_exp(-X[39ULL] / (t1253 == 0.0 ? 1.0E-16 : t1253)));
  Condenser_delta_h_2P = X[164ULL] + t1018 * t1003;
  t1003 = zc_int14 / (Condenser_delta_h_2P == 0.0 ? 1.0E-16 :
                      Condenser_delta_h_2P);
  intrm_sf_mf_427 = t1003 <= 15.0 ? t1003 : 15.0;
  t1003 = (t1012 - t1006) / (t1018 == 0.0 ? 1.0E-16 : t1018);
  intrm_sf_mf_433 = (t1006 < t1012);
  t1020 = (1.0 - pmf_exp(-intrm_sf_mf_427)) * X[163ULL];
  intrm_sf_mf_451 = (t1020 < t1003 * 1000.0);
  intrm_sf_mf_438 = (t1006 <= t1012);
  if (intrm_sf_mf_441) {
    t1021 = intrm_sf_mf_434 ? 0.0 : (real_T)!intrm_sf_mf_433;
  } else if (intrm_sf_mf_440) {
    if (intrm_sf_mf_437) {
      if (intrm_sf_mf_451) {
        zc_int14 = -pmf_log((X[163ULL] - t1003 * 1000.0) / (X[163ULL] == 0.0 ?
          1.0E-16 : X[163ULL]));
        t1021 = zc_int14 / (intrm_sf_mf_427 == 0.0 ? 1.0E-16 : intrm_sf_mf_427);
      } else {
        t1021 = 1.0;
      }
    } else {
      t1021 = 0.0;
    }
  } else {
    t1021 = intrm_sf_mf_434 ? 0.0 : (real_T)!intrm_sf_mf_438;
  }

  t1022 = (1.0 - t993) - t1021;
  zc_int14 = (Steam_Generator_two_phase_fluid_Cdot_ext_lag_pos + X[164ULL]) *
    (1.0 - pmf_exp(-X[40ULL] / (t1253 == 0.0 ? 1.0E-16 : t1253)));
  t1253 = t1265 / (t999 == 0.0 ? 1.0E-16 : t999);
  Steam_Generator_two_phase_fluid_Cdot_ext_lag_pos = zc_int14 / (t1253 == 0.0 ?
    1.0E-16 : t1253);
  if (intrm_sf_mf_441) {
    if (intrm_sf_mf_434) {
      t1023 = X[163ULL] - t990 * 1000.0;
    } else if (intrm_sf_mf_433) {
      t1023 = X[163ULL];
    } else {
      t1023 = X[163ULL] - t1003 * 1000.0;
    }
  } else if (intrm_sf_mf_440) {
    if (intrm_sf_mf_437) {
      t1023 = X[163ULL] - t1003 * 1000.0;
    } else if (intrm_sf_mf_436) {
      t1023 = X[163ULL];
    } else {
      t1023 = X[163ULL] - t990 * 1000.0;
    }
  } else if (intrm_sf_mf_434) {
    t1023 = t990 * 1000.0 + X[163ULL];
  } else if (intrm_sf_mf_438) {
    t1023 = X[163ULL];
  } else {
    t1023 = t1003 * 1000.0 + X[163ULL];
  }

  if (intrm_sf_mf_441) {
    if (intrm_sf_mf_434) {
      if (intrm_sf_mf_450) {
        intrm_sf_mf_456 = t1009;
      } else {
        intrm_sf_mf_456 = t999 * t1010 * 0.001 + t1006;
      }
    } else if (intrm_sf_mf_433) {
      intrm_sf_mf_456 = t1006;
    } else {
      intrm_sf_mf_456 = t1018 * t1020 * 0.001 + t1006;
    }
  } else if (intrm_sf_mf_440) {
    if (intrm_sf_mf_437) {
      if (intrm_sf_mf_451) {
        intrm_sf_mf_456 = t1012;
      } else {
        intrm_sf_mf_456 = t1018 * t1020 * 0.001 + t1006;
      }
    } else if (intrm_sf_mf_436) {
      intrm_sf_mf_456 = t1006;
    } else {
      intrm_sf_mf_456 = t999 * t1010 * 0.001 + t1006;
    }
  } else if (intrm_sf_mf_434) {
    intrm_sf_mf_456 = t999 * t1010 * 0.001 + t1006;
  } else if (intrm_sf_mf_438) {
    intrm_sf_mf_456 = t1006;
  } else {
    intrm_sf_mf_456 = t1018 * t1020 * 0.001 + t1006;
  }

  t1025 = t1009 - intrm_sf_mf_456;
  t1026 = t1012 - intrm_sf_mf_456;
  zc_int14 = Steam_Generator_two_phase_fluid_Cdot_ext_lag_pos * t1023 * t1022;
  intrm_sf_mf_450 = (zc_int14 * 0.001 > t1026);
  intrm_sf_mf_451 = (intrm_sf_mf_456 < t1012);
  intrm_sf_mf_452 = (zc_int14 * 0.001 < t1025);
  intrm_sf_mf_453 = (intrm_sf_mf_456 > t1009);
  if (intrm_sf_mf_441) {
    if (intrm_sf_mf_451) {
      if (intrm_sf_mf_450) {
        intrm_sf_mf_456 = t1026 / (t1023 == 0.0 ? 1.0E-16 : t1023) /
          (Steam_Generator_two_phase_fluid_Cdot_ext_lag_pos == 0.0 ? 1.0E-16 :
           Steam_Generator_two_phase_fluid_Cdot_ext_lag_pos) * 1000.0;
      } else {
        intrm_sf_mf_456 = t1022;
      }
    } else {
      intrm_sf_mf_456 = 0.0;
    }
  } else if (intrm_sf_mf_440) {
    if (intrm_sf_mf_453) {
      if (intrm_sf_mf_452) {
        intrm_sf_mf_456 = t1025 / (t1023 == 0.0 ? 1.0E-16 : t1023) /
          (Steam_Generator_two_phase_fluid_Cdot_ext_lag_pos == 0.0 ? 1.0E-16 :
           Steam_Generator_two_phase_fluid_Cdot_ext_lag_pos) * 1000.0;
      } else {
        intrm_sf_mf_456 = t1022;
      }
    } else {
      intrm_sf_mf_456 = 0.0;
    }
  } else {
    intrm_sf_mf_456 = t1022;
  }

  t1025 = t1022 - intrm_sf_mf_456;
  t1026 = t993 + (intrm_sf_mf_441 ? 0.0 : intrm_sf_mf_440 ? t1025 : 0.0);
  intrm_sf_mf_419 = (Steam_Generator_two_phase_fluid_T_sat_vap <= t983 * t1026);
  if (intrm_sf_mf_419) {
    t1265 = t983 * t1026;
    t993 = Steam_Generator_two_phase_fluid_T_sat_vap / (t1265 == 0.0 ? 1.0E-16 :
      t1265);
  } else {
    t993 = t983 * t1026 / (Steam_Generator_two_phase_fluid_T_sat_vap == 0.0 ?
      1.0E-16 : Steam_Generator_two_phase_fluid_T_sat_vap);
  }

  t1022 = t1026 >= 0.001 ? t993 : 0.0;
  zc_int14 = t1018 * Steam_Generator_effectiveness_mix;
  t1028 = t889 + zc_int14;
  t1025 = t1021 + (intrm_sf_mf_441 ? t1025 : 0.0);
  intrm_sf_mf_504 = (t1028 <= t983 * t1025);
  if (intrm_sf_mf_504) {
    t1265 = t983 * t1025;
    t889 = t1028 / (t1265 == 0.0 ? 1.0E-16 : t1265);
  } else {
    t889 = t983 * t1025 / (t1028 == 0.0 ? 1.0E-16 : t1028);
  }

  t1021 = t1025 >= 0.001 ? t889 : 0.0;
  if (t1000 <= t992 * t1026) {
    Steam_Generator_thermal_liquid_h_in = t1000;
  } else {
    Steam_Generator_thermal_liquid_h_in = t992 * t1026;
  }

  t1000 = t992 * intrm_sf_mf_456;
  if (zc_int14 <= t992 * t1025) {
    Steam_Generator_thermal_liquid_u_out = zc_int14;
  } else {
    Steam_Generator_thermal_liquid_u_out = t992 * t1025;
  }

  tlu2_2d_linear_nearest_value(&fh_efOut[0ULL], &t67.mField0[0ULL],
    &t67.mField2[0ULL], &t23.mField0[0ULL], &t23.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  t812[0] = fh_efOut[0];
  t992 = t812[0ULL];
  tlu2_2d_linear_nearest_value(&gh_efOut[0ULL], &t57.mField0[0ULL],
    &t57.mField2[0ULL], &t23.mField0[0ULL], &t23.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  t812[0] = gh_efOut[0];
  zc_int14 = t812[0ULL];
  t992 = (t992 + zc_int14) / 2.0;
  t1253 = t992 * 0.42000000000000004;
  Steam_Generator_e_vap_ = Steam_Generator_e_vap_ * 0.018 / (t1253 == 0.0 ?
    1.0E-16 : t1253);
  t992 = pmf_sqrt(Steam_Generator_e_vap_ * Steam_Generator_e_vap_ + 100.0);
  Steam_Generator_e_vap_ = t992 * 29.915749795368463;
  zc_int14 = t992 * pmf_sqrt(t992) * pmf_sqrt(pmf_sqrt(t992)) *
    1.996694297036971;
  if (t992 > 250000.0) {
    Condenser_delta_h_2P = (t992 - 250000.0) / 325000.0 + 1.0;
  } else {
    Condenser_delta_h_2P = 1.0;
  }

  t992 = 1.0 - pmf_exp(-(t992 + 200.0) / 1000.0);
  t1032 = zc_int14 * Condenser_delta_h_2P * t992 + Steam_Generator_e_vap_;
  tlu2_2d_linear_nearest_value(&hh_efOut[0ULL], &t67.mField0[0ULL],
    &t67.mField2[0ULL], &t23.mField0[0ULL], &t23.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField13, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  t812[0] = hh_efOut[0];
  Steam_Generator_e_vap_ = t812[0ULL];
  tlu2_2d_linear_nearest_value(&ih_efOut[0ULL], &t57.mField0[0ULL],
    &t57.mField2[0ULL], &t23.mField0[0ULL], &t23.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField13, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  t812[0] = ih_efOut[0];
  t992 = t812[0ULL];
  Steam_Generator_e_vap_ = (Steam_Generator_e_vap_ + t992) / 2.0;
  Steam_Generator_e_vap_ = pmf_pow(t1032 * Steam_Generator_e_vap_ *
    0.55399065447813123, 0.33333333333333331) * 0.404;
  t1265 = Steam_Generator_e_vap_ * Steam_Generator_two_phase_fluid_T_out / 0.018
    * 23.750440461138837;
  Steam_Generator_e_vap_ = 1.0 / (t1265 == 0.0 ? 1.0E-16 : t1265);
  t992 = Steam_Generator_Q_mix_ > 0.5 ? Steam_Generator_Q_mix_ : 0.5;
  t1265 = Steam_Generator_effectiveness_mix * 0.025;
  t1253 = Steam_Generator_NTU_vap * 0.036815538909255395;
  Steam_Generator_effectiveness_mix = t1265 / (t1253 == 0.0 ? 1.0E-16 : t1253);
  Steam_Generator_Q_mix_ = Steam_Generator_effectiveness_mix > 1000.0 ?
    Steam_Generator_effectiveness_mix : 1000.0;
  t1253 = pmf_log10(6.9 / (Steam_Generator_Q_mix_ == 0.0 ? 1.0E-16 :
    Steam_Generator_Q_mix_) + 6.2093190311196615E-5) * pmf_log10(6.9 /
    (Steam_Generator_Q_mix_ == 0.0 ? 1.0E-16 : Steam_Generator_Q_mix_) +
    6.2093190311196615E-5) * 3.24;
  Steam_Generator_NTU_vap = 1.0 / (t1253 == 0.0 ? 1.0E-16 : t1253);
  Condenser_delta_h_2P = (pmf_pow(t992, 0.66666666666666663) - 1.0) * pmf_sqrt
    (Steam_Generator_NTU_vap / 8.0) * 12.7 + 1.0;
  t992 = (Steam_Generator_Q_mix_ - 1000.0) * (Steam_Generator_NTU_vap / 8.0) *
    t992 / (Condenser_delta_h_2P == 0.0 ? 1.0E-16 : Condenser_delta_h_2P);
  Steam_Generator_Q_mix_ = (Steam_Generator_effectiveness_mix - 2000.0) / 2000.0;
  Steam_Generator_NTU_vap = Steam_Generator_Q_mix_ * Steam_Generator_Q_mix_ *
    3.0 - Steam_Generator_Q_mix_ * Steam_Generator_Q_mix_ *
    Steam_Generator_Q_mix_ * 2.0;
  if (Steam_Generator_effectiveness_mix <= 2000.0) {
    Steam_Generator_Q_mix_ = 3.66;
  } else if (Steam_Generator_effectiveness_mix >= 4000.0) {
    Steam_Generator_Q_mix_ = t992;
  } else {
    Steam_Generator_Q_mix_ = (1.0 - Steam_Generator_NTU_vap) * 3.66 + t992 *
      Steam_Generator_NTU_vap;
  }

  t1253 = t997 * Steam_Generator_Q_mix_ / 0.025 * 41.233403578366037;
  t992 = Steam_Generator_e_vap_ + 1.0 / (t1253 == 0.0 ? 1.0E-16 : t1253);
  if (intrm_sf_mf_419) {
    Steam_Generator_effectiveness_mix = t1026 / (t992 == 0.0 ? 1.0E-16 : t992) /
      (Steam_Generator_two_phase_fluid_T_sat_vap == 0.0 ? 1.0E-16 :
       Steam_Generator_two_phase_fluid_T_sat_vap);
  } else {
    Steam_Generator_effectiveness_mix = 1.0 / (t992 == 0.0 ? 1.0E-16 : t992) /
      (t983 == 0.0 ? 1.0E-16 : t983);
  }

  t992 = t1026 >= 0.001 ? Steam_Generator_effectiveness_mix : 0.0;
  tlu2_2d_linear_nearest_value(&jh_efOut[0ULL], &t50.mField0[0ULL],
    &t50.mField2[0ULL], &t79.mField0[0ULL], &t79.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = jh_efOut[0];
  Steam_Generator_Q_mix_ = t812[0ULL];
  tlu2_2d_linear_nearest_value(&kh_efOut[0ULL], &t50.mField0[0ULL],
    &t50.mField2[0ULL], &t79.mField0[0ULL], &t79.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = kh_efOut[0];
  t997 = t812[0ULL];
  t1253 = t997 * 0.036815538909255395;
  t997 = t1265 / (t1253 == 0.0 ? 1.0E-16 : t1253);
  Steam_Generator_NTU_vap = t997 > 1.0 ? t997 : 1.0;
  intrm_sf_mf_419 = (t1272 >= 1.0);
  intrm_sf_mf_420 = (t1272 <= 0.0);
  t997 = intrm_sf_mf_420 ? 0.0 : intrm_sf_mf_419 ? 1.0 : t1272;
  intrm_sf_mf_421 = (t1281 >= 1.0);
  intrm_sf_mf_422 = (t1281 <= 0.0);
  zc_int14 = intrm_sf_mf_422 ? 0.0 : intrm_sf_mf_421 ? 1.0 : t1281;
  if (zc_int14 - t997 > 1.0E-6) {
    Condenser_delta_h_2P = zc_int14 - t997;
  } else if (t997 - zc_int14 > 1.0E-6) {
    Condenser_delta_h_2P = t997 - zc_int14;
  } else {
    Condenser_delta_h_2P = 1.0E-6;
  }

  if (Steam_Generator_two_phase_fluid_mass_vap /
      (Steam_Generator_two_phase_fluid_mass_mix == 0.0 ? 1.0E-16 :
       Steam_Generator_two_phase_fluid_mass_mix) > 1.000001) {
    t1032 = pmf_sqrt(Steam_Generator_two_phase_fluid_mass_vap /
                     (Steam_Generator_two_phase_fluid_mass_mix == 0.0 ? 1.0E-16 :
                      Steam_Generator_two_phase_fluid_mass_mix));
  } else {
    t1032 = 1.0000004999998751;
  }

  Steam_Generator_two_phase_fluid_mass_liq = t997 <= zc_int14 ? t997 : zc_int14;
  t1253 = pmf_pow(Steam_Generator_NTU_vap, 0.8) * pmf_pow(Steam_Generator_Q_mix_,
    0.33) * 0.05;
  zc_int14 = (pmf_pow((Condenser_delta_h_2P +
                       Steam_Generator_two_phase_fluid_mass_liq) * (t1032 - 1.0)
                      + 1.0, 1.8) - pmf_pow((t1032 - 1.0) *
    Steam_Generator_two_phase_fluid_mass_liq + 1.0, 1.8)) * (t1253 / 1.8 /
    (t1032 - 1.0 == 0.0 ? 1.0E-16 : t1032 - 1.0));
  Steam_Generator_Q_mix_ = zc_int14 / (Condenser_delta_h_2P == 0.0 ? 1.0E-16 :
    Condenser_delta_h_2P);
  t997 = Steam_Generator_Q_mix_ > 3.66 ? Steam_Generator_Q_mix_ : 3.66;
  tlu2_2d_linear_nearest_value(&lh_efOut[0ULL], &t50.mField0[0ULL],
    &t50.mField2[0ULL], &t79.mField0[0ULL], &t79.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = lh_efOut[0];
  Steam_Generator_Q_mix_ = t812[0ULL];
  t1253 = t997 * Steam_Generator_Q_mix_ / 0.025 * 41.233403578366037;
  t997 = Steam_Generator_e_vap_ + 1.0 / (t1253 == 0.0 ? 1.0E-16 : t1253);
  Steam_Generator_Q_mix_ = 1.0 / (t997 == 0.0 ? 1.0E-16 : t997) / (t983 == 0.0 ?
    1.0E-16 : t983);
  t997 = intrm_sf_mf_456 >= 0.001 ? Steam_Generator_Q_mix_ : 0.0;
  Steam_Generator_NTU_vap = Steam_Generator_Q_cond > 0.5 ?
    Steam_Generator_Q_cond : 0.5;
  t1253 = intrm_sf_mf_512 * 0.036815538909255395;
  Steam_Generator_Q_cond = t1265 / (t1253 == 0.0 ? 1.0E-16 : t1253);
  intrm_sf_mf_512 = Steam_Generator_Q_cond > 1000.0 ? Steam_Generator_Q_cond :
    1000.0;
  t1265 = pmf_log10(6.9 / (intrm_sf_mf_512 == 0.0 ? 1.0E-16 : intrm_sf_mf_512) +
                    6.2093190311196615E-5) * pmf_log10(6.9 / (intrm_sf_mf_512 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_512) + 6.2093190311196615E-5) * 3.24;
  zc_int14 = 1.0 / (t1265 == 0.0 ? 1.0E-16 : t1265);
  t1253 = (pmf_pow(Steam_Generator_NTU_vap, 0.66666666666666663) - 1.0) *
    pmf_sqrt(zc_int14 / 8.0) * 12.7 + 1.0;
  Steam_Generator_NTU_vap = (intrm_sf_mf_512 - 1000.0) * (zc_int14 / 8.0) *
    Steam_Generator_NTU_vap / (t1253 == 0.0 ? 1.0E-16 : t1253);
  intrm_sf_mf_512 = (Steam_Generator_Q_cond - 2000.0) / 2000.0;
  zc_int14 = intrm_sf_mf_512 * intrm_sf_mf_512 * 3.0 - intrm_sf_mf_512 *
    intrm_sf_mf_512 * intrm_sf_mf_512 * 2.0;
  if (Steam_Generator_Q_cond <= 2000.0) {
    intrm_sf_mf_512 = 3.66;
  } else if (Steam_Generator_Q_cond >= 4000.0) {
    intrm_sf_mf_512 = Steam_Generator_NTU_vap;
  } else {
    intrm_sf_mf_512 = (1.0 - zc_int14) * 3.66 + Steam_Generator_NTU_vap *
      zc_int14;
  }

  t1265 = Steam_Generator_Q_mix * intrm_sf_mf_512 / 0.025 * 41.233403578366037;
  Steam_Generator_Q_cond = Steam_Generator_e_vap_ + 1.0 / (t1265 == 0.0 ?
    1.0E-16 : t1265);
  if (intrm_sf_mf_504) {
    Steam_Generator_e_vap_ = t1025 / (Steam_Generator_Q_cond == 0.0 ? 1.0E-16 :
      Steam_Generator_Q_cond) / (t1028 == 0.0 ? 1.0E-16 : t1028);
  } else {
    Steam_Generator_e_vap_ = 1.0 / (Steam_Generator_Q_cond == 0.0 ? 1.0E-16 :
      Steam_Generator_Q_cond) / (t983 == 0.0 ? 1.0E-16 : t983);
  }

  Steam_Generator_NTU_vap = t1025 >= 0.001 ? Steam_Generator_e_vap_ : 0.0;
  intrm_sf_mf_499 = 0.0012631344689832964 /
    (Steam_Generator_two_phase_fluid_T_out == 0.0 ? 1.0E-16 :
     Steam_Generator_two_phase_fluid_T_out) + 0.00060630454511198225 /
    (intrm_sf_mf_499 == 0.0 ? 1.0E-16 : intrm_sf_mf_499);
  t816[0ULL] = t1281;
  tlu2_linear_linear_prelookup(&mh_efOut.mField0[0ULL], &mh_efOut.mField1[0ULL],
    &mh_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t816[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t62 = mh_efOut;
  tlu2_2d_linear_linear_value(&nh_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], &t65.mField0[0ULL], &t65.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = nh_efOut[0];
  Steam_Generator_two_phase_fluid_T_out = t812[0ULL];
  Steam_Generator_Q_cond = (X[32ULL] - Steam_Generator_two_phase_fluid_T_out) /
    (intrm_sf_mf_499 == 0.0 ? 1.0E-16 : intrm_sf_mf_499);
  intrm_sf_mf_504 = (Steam_Generator_effectiveness_mix >= 0.0);
  intrm_sf_mf_499 = intrm_sf_mf_504 ? Steam_Generator_effectiveness_mix :
    -Steam_Generator_effectiveness_mix;
  Steam_Generator_effectiveness_mix = intrm_sf_mf_504 ? 1.0 : -1.0;
  t1265 = (1.0 - pmf_exp(-(1.0 - pmf_exp(-intrm_sf_mf_499)) * (t993 + 0.001))) *
    Steam_Generator_effectiveness_mix;
  intrm_sf_mf_512 = t1265 / (t993 + 0.001 == 0.0 ? 1.0E-16 : t993 + 0.001);
  Steam_Generator_Q_mix = t993 * intrm_sf_mf_499 + 0.001;
  t1265 = -intrm_sf_mf_499 * (1.0 - pmf_exp(-Steam_Generator_Q_mix));
  intrm_sf_mf_499 = (1.0 - pmf_exp(t1265 / (Steam_Generator_Q_mix == 0.0 ?
    1.0E-16 : Steam_Generator_Q_mix))) * Steam_Generator_effectiveness_mix;
  Steam_Generator_effectiveness_mix = Steam_Generator_two_phase_fluid_T_sat_vap <=
    t983 * t1026 ? intrm_sf_mf_512 : intrm_sf_mf_499;
  tlu2_2d_linear_linear_value(&oh_efOut[0ULL], &t43.mField0[0ULL], &t43.mField2
    [0ULL], &t65.mField0[0ULL], &t65.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = oh_efOut[0];
  intrm_sf_mf_499 = t812[0ULL];
  tlu2_2d_linear_linear_value(&ph_efOut[0ULL], &t69.mField0[0ULL], &t69.mField2
    [0ULL], &t65.mField0[0ULL], &t65.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = ph_efOut[0];
  t993 = t812[0ULL];
  Steam_Generator_Q_mix = (X[30ULL] - (intrm_sf_mf_412 ? intrm_sf_mf_499 : t993))
    * Steam_Generator_thermal_liquid_h_in * Steam_Generator_effectiveness_mix;
  tlu2_2d_linear_linear_value(&qh_efOut[0ULL], &t54.mField0[0ULL], &t54.mField2
    [0ULL], &t65.mField0[0ULL], &t65.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = qh_efOut[0];
  Steam_Generator_two_phase_fluid_T_sat_vap = t812[0ULL];
  intrm_sf_mf_504 = (Steam_Generator_Q_mix_ >= 0.0);
  Steam_Generator_thermal_liquid_h_in = (1.0 - pmf_exp(-(intrm_sf_mf_504 ?
    Steam_Generator_Q_mix_ : -Steam_Generator_Q_mix_))) * (intrm_sf_mf_504 ? 1.0
    : -1.0);
  Steam_Generator_Q_mix_ = (X[30ULL] - (intrm_sf_mf_420 ? t993 : intrm_sf_mf_419
    ? Steam_Generator_two_phase_fluid_T_sat_vap : intrm_sf_mf_499)) * t1000 *
    Steam_Generator_thermal_liquid_h_in;
  intrm_sf_mf_504 = (Steam_Generator_e_vap_ >= 0.0);
  t1000 = intrm_sf_mf_504 ? Steam_Generator_e_vap_ : -Steam_Generator_e_vap_;
  Steam_Generator_e_vap_ = intrm_sf_mf_504 ? 1.0 : -1.0;
  t1265 = (1.0 - pmf_exp(-(1.0 - pmf_exp(-t1000)) * (t889 + 0.001))) *
    Steam_Generator_e_vap_;
  zc_int14 = t1265 / (t889 + 0.001 == 0.0 ? 1.0E-16 : t889 + 0.001);
  intrm_sf_mf_512 = t889 * t1000 + 0.001;
  t1265 = -t1000 * (1.0 - pmf_exp(-intrm_sf_mf_512));
  t889 = (1.0 - pmf_exp(t1265 / (intrm_sf_mf_512 == 0.0 ? 1.0E-16 :
            intrm_sf_mf_512))) * Steam_Generator_e_vap_;
  Steam_Generator_e_vap_ = t1028 <= t983 * t1025 ? zc_int14 : t889;
  t889 = (X[30ULL] - (intrm_sf_mf_417 ? intrm_sf_mf_499 :
                      Steam_Generator_two_phase_fluid_T_sat_vap)) *
    Steam_Generator_thermal_liquid_u_out * Steam_Generator_e_vap_;
  t1000 = Steam_Generator_Q_cond + ((Steam_Generator_Q_mix +
    Steam_Generator_Q_mix_) + t889);
  t983 = Steam_Generator_Q_cond * t1026 + Steam_Generator_Q_mix;
  Steam_Generator_Q_mix = Steam_Generator_Q_cond * intrm_sf_mf_456 +
    Steam_Generator_Q_mix_;
  Steam_Generator_Q_mix_ = Steam_Generator_Q_cond * t1025 + t889;
  Steam_Generator_Q_cond = t1025 >= 0.001 ? Steam_Generator_e_vap_ : 0.0;
  tlu2_2d_linear_linear_value(&rh_efOut[0ULL], &t28.mField0[0ULL], &t28.mField2
    [0ULL], &t53.mField0[0ULL], &t53.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  t812[0] = rh_efOut[0];
  Steam_Generator_e_vap_ = t812[0ULL];
  tlu2_2d_linear_linear_value(&sh_efOut[0ULL], &t64.mField0[0ULL], &t64.mField2
    [0ULL], &t53.mField0[0ULL], &t53.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  t812[0] = sh_efOut[0];
  intrm_sf_mf_512 = t812[0ULL];
  tlu2_2d_linear_linear_value(&th_efOut[0ULL], &t28.mField0[0ULL], &t28.mField2
    [0ULL], &t53.mField0[0ULL], &t53.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField18, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  t812[0] = th_efOut[0];
  t1028 = t812[0ULL];
  tlu2_2d_linear_linear_value(&uh_efOut[0ULL], &t64.mField0[0ULL], &t64.mField2
    [0ULL], &t53.mField0[0ULL], &t53.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField18, &t99[0ULL], &t102[0ULL], &t86[0ULL]);
  t812[0] = uh_efOut[0];
  Steam_Generator_thermal_liquid_u_out = t812[0ULL];
  t1032 = intrm_sf_mf_420 ? Steam_Generator_two_phase_fluid_mass_mix :
    intrm_sf_mf_419 ? Steam_Generator_two_phase_fluid_mass_vap : t920;
  tlu2_2d_linear_linear_value(&vh_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], &t65.mField0[0ULL], &t65.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t812[0] = vh_efOut[0];
  Steam_Generator_two_phase_fluid_mass_liq = t812[0ULL];
  t1034 = intrm_sf_mf_422 ? Steam_Generator_two_phase_fluid_mass_mix :
    intrm_sf_mf_421 ? Steam_Generator_two_phase_fluid_mass_vap :
    Steam_Generator_two_phase_fluid_mass_liq;
  t1035 = t1032 <= t1034 ? t1032 : t1034;
  if (t1034 / (t1032 == 0.0 ? 1.0E-16 : t1032) >= 1.000001) {
    t1036 = t1034 / (t1032 == 0.0 ? 1.0E-16 : t1032);
  } else if (t1032 / (t1034 == 0.0 ? 1.0E-16 : t1034) >= 1.000001) {
    t1036 = t1032 / (t1034 == 0.0 ? 1.0E-16 : t1034);
  } else {
    t1036 = 1.000001;
  }

  t1265 = pmf_log(t1036);
  t1032 = t1265 / (t1036 - 1.0 == 0.0 ? 1.0E-16 : t1036 - 1.0) / (t1035 == 0.0 ?
    1.0E-16 : t1035);
  t1034 = intrm_sf_mf_412 ? t920 : Steam_Generator_two_phase_fluid_mass_mix;
  t1035 = intrm_sf_mf_416 ? Steam_Generator_two_phase_fluid_mass_liq :
    Steam_Generator_two_phase_fluid_mass_mix;
  t1034 = (1.0 / (t1034 == 0.0 ? 1.0E-16 : t1034) + 1.0 / (t1035 == 0.0 ?
            1.0E-16 : t1035)) / 2.0 * t1026 * 0.25770877236478779;
  Steam_Generator_two_phase_fluid_mass_mix = t1032 * intrm_sf_mf_456 *
    0.25770877236478779;
  t1032 = intrm_sf_mf_417 ? t920 : Steam_Generator_two_phase_fluid_mass_vap;
  t920 = intrm_sf_mf_418 ? Steam_Generator_two_phase_fluid_mass_liq :
    Steam_Generator_two_phase_fluid_mass_vap;
  Steam_Generator_two_phase_fluid_mass_vap = (1.0 / (t1032 == 0.0 ? 1.0E-16 :
    t1032) + 1.0 / (t920 == 0.0 ? 1.0E-16 : t920)) / 2.0 * t1025 *
    0.25770877236478779;
  t920 = (t1034 + Steam_Generator_two_phase_fluid_mass_mix) +
    Steam_Generator_two_phase_fluid_mass_vap;
  t1032 = X[33ULL] * Steam_Generator_two_phase_fluid_mass_liq * 100.0 + X[35ULL];
  Steam_Generator_two_phase_fluid_mass_liq = t1034 * X[41ULL] / (t920 == 0.0 ?
    1.0E-16 : t920);
  Steam_Generator_two_phase_fluid_mass_mix =
    Steam_Generator_two_phase_fluid_mass_mix * X[41ULL] / (t920 == 0.0 ? 1.0E-16
    : t920);
  Steam_Generator_two_phase_fluid_mass_vap =
    Steam_Generator_two_phase_fluid_mass_vap * X[41ULL] / (t920 == 0.0 ? 1.0E-16
    : t920);
  t816[0ULL] = t979;
  tlu2_linear_linear_prelookup(&wh_efOut.mField0[0ULL], &wh_efOut.mField1[0ULL],
    &wh_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t816[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t43 = wh_efOut;
  tlu2_2d_linear_linear_value(&xh_efOut[0ULL], &t43.mField0[0ULL], &t43.mField2
    [0ULL], &t831[0ULL], &t833[0ULL], ((_NeDynamicSystem*)(LC))->mField0, &t114
    [0ULL], &t85[0ULL], &t86[0ULL]);
  t816[0] = xh_efOut[0];
  t1265 = -t816[0ULL];
  t979 = -t1265;
  tlu2_2d_linear_linear_value(&yh_efOut[0ULL], &t43.mField0[0ULL], &t43.mField2
    [0ULL], &t831[0ULL], &t833[0ULL], ((_NeDynamicSystem*)(LC))->mField30,
    &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t816[0] = yh_efOut[0];
  t1265 = -t816[0ULL];
  t1034 = -t1265;
  tlu2_2d_linear_linear_value(&ai_efOut[0ULL], &t43.mField0[0ULL], &t43.mField2
    [0ULL], &t831[0ULL], &t833[0ULL], ((_NeDynamicSystem*)(LC))->mField14,
    &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t816[0] = ai_efOut[0];
  t1265 = -t816[0ULL];
  t1035 = -t1265;
  t1265 = -t697[0ULL];
  t1036 = -t1265;
  t1037 = X[0ULL] * -t1265 * 100.0 + X[97ULL];
  t1265 = -t821[0ULL];
  t920 = -t1265;
  t1265 = -t819[0ULL];
  t1039 = -t1265;
  t821[0ULL] = t904;
  tlu2_linear_linear_prelookup(&bi_efOut.mField0[0ULL], &bi_efOut.mField1[0ULL],
    &bi_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t821[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t62 = bi_efOut;
  tlu2_2d_linear_linear_value(&ci_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], &t76.mField0[0ULL], &t76.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t819[0] = ci_efOut[0];
  t1265 = -t819[0ULL];
  t904 = -t1265;
  t1040 = X[49ULL] * -t1265 * 100.0 + X[50ULL];
  tlu2_2d_linear_linear_value(&di_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], &t76.mField0[0ULL], &t76.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t819[0] = di_efOut[0];
  t1265 = -t819[0ULL];
  t1041 = -t1265;
  tlu2_2d_linear_linear_value(&ei_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], &t76.mField0[0ULL], &t76.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t819[0] = ei_efOut[0];
  t1265 = -t819[0ULL];
  t1042 = -t1265;
  t821[0ULL] = Thermodynamic_Properties_Sensor_2P4_V;
  tlu2_linear_linear_prelookup(&fi_efOut.mField0[0ULL], &fi_efOut.mField1[0ULL],
    &fi_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t821[0ULL],
    &t114[0ULL], &t86[0ULL]);
  t62 = fi_efOut;
  tlu2_2d_linear_linear_value(&gi_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], &t72.mField0[0ULL], &t72.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t821[0] = gi_efOut[0];
  t1265 = -t821[0ULL];
  Thermodynamic_Properties_Sensor_2P4_V = -t1265;
  t1043 = X[53ULL] * -t1265 * 100.0 + X[54ULL];
  tlu2_2d_linear_linear_value(&hi_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], &t72.mField0[0ULL], &t72.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t821[0] = hi_efOut[0];
  t1265 = -t821[0ULL];
  t1044 = -t1265;
  tlu2_2d_linear_linear_value(&ii_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], &t72.mField0[0ULL], &t72.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t114[0ULL], &t85[0ULL], &t86[0ULL]);
  t821[0] = ii_efOut[0];
  t1265 = -t821[0ULL];
  t1045 = -t1265;
  if (t856 <= 0.0) {
    t1046 = 0.0;
  } else {
    t1046 = t856 >= 1.0 ? 1.0 : t856;
  }

  if (intrm_sf_mf_327 <= 0.0) {
    t856 = 0.0;
  } else {
    t856 = intrm_sf_mf_327 >= 1.0 ? 1.0 : intrm_sf_mf_327;
  }

  intrm_sf_mf_327 = X[122ULL] >= 0.0 ? X[122ULL] : -X[122ULL];
  t1253 = t910 * 0.0099491780865731388;
  t1047 = intrm_sf_mf_327 * 0.038099999999999995 / (t1253 == 0.0 ? 1.0E-16 :
    t1253);
  t1048 = t1047 >= 1.0 ? t1047 : 1.0;
  t1265 = pmf_log10(6.9 / (t1048 == 0.0 ? 1.0E-16 : t1048) +
                    3.8898303526856324E-5) * pmf_log10(6.9 / (t1048 == 0.0 ?
    1.0E-16 : t1048) + 3.8898303526856324E-5) * 3.24;
  Condenser_delta_h_2P = t918 * 2.8884652804500862E-5;
  t1049 = X[122ULL] * t910 * 128.0 / (Condenser_delta_h_2P == 0.0 ? 1.0E-16 :
    Condenser_delta_h_2P);
  zc_int14 = t918 * 7.5427442183940515E-6;
  intrm_sf_mf_327 = X[122ULL] * intrm_sf_mf_327 * (1.0 / (t1265 == 0.0 ? 1.0E-16
    : t1265)) * 2.0 / (zc_int14 == 0.0 ? 1.0E-16 : zc_int14);
  t1048 = (t1047 - 2000.0) / 2000.0;
  t1050 = t1048 * t1048 * 3.0 - t1048 * t1048 * t1048 * 2.0;
  if (t1047 <= 2000.0) {
    t1048 = t1049 * 1.0E-5;
  } else if (t1047 >= 4000.0) {
    t1048 = intrm_sf_mf_327 * 1.0E-5;
  } else {
    t1048 = ((1.0 - t1050) * t1049 + intrm_sf_mf_327 * t1050) * 1.0E-5;
  }

  intrm_sf_mf_327 = X[123ULL] >= 0.0 ? X[123ULL] : -X[123ULL];
  t1047 = intrm_sf_mf_327 * 0.038099999999999995 / (t1253 == 0.0 ? 1.0E-16 :
    t1253);
  t1049 = t1047 >= 1.0 ? t1047 : 1.0;
  t1265 = pmf_log10(6.9 / (t1049 == 0.0 ? 1.0E-16 : t1049) +
                    3.8898303526856324E-5) * pmf_log10(6.9 / (t1049 == 0.0 ?
    1.0E-16 : t1049) + 3.8898303526856324E-5) * 3.24;
  t910 = X[123ULL] * t910 * 128.0 / (Condenser_delta_h_2P == 0.0 ? 1.0E-16 :
    Condenser_delta_h_2P);
  intrm_sf_mf_327 = X[123ULL] * intrm_sf_mf_327 * (1.0 / (t1265 == 0.0 ? 1.0E-16
    : t1265)) * 2.0 / (zc_int14 == 0.0 ? 1.0E-16 : zc_int14);
  t1049 = (t1047 - 2000.0) / 2000.0;
  t1050 = t1049 * t1049 * 3.0 - t1049 * t1049 * t1049 * 2.0;
  if (t1047 <= 2000.0) {
    t1049 = t910 * 1.0E-5;
  } else if (t1047 >= 4000.0) {
    t1049 = intrm_sf_mf_327 * 1.0E-5;
  } else {
    t1049 = ((1.0 - t1050) * t910 + intrm_sf_mf_327 * t1050) * 1.0E-5;
  }

  t1253 = t921 * 0.0099491780865731388;
  intrm_sf_mf_327 = 0.28574999999999995 / (t1253 == 0.0 ? 1.0E-16 : t1253);
  t910 = intrm_sf_mf_327 >= 1.0 ? intrm_sf_mf_327 : 1.0;
  t1265 = pmf_log10(6.9 / (t910 == 0.0 ? 1.0E-16 : t910) + 3.8898303526856324E-5)
    * pmf_log10(6.9 / (t910 == 0.0 ? 1.0E-16 : t910) + 3.8898303526856324E-5) *
    3.24;
  Condenser_delta_h_2P = t922 * 2.8884652804500862E-5;
  t1047 = t921 * 1680.0 / (Condenser_delta_h_2P == 0.0 ? 1.0E-16 :
    Condenser_delta_h_2P);
  zc_int14 = t922 * 7.5427442183940515E-6;
  intrm_sf_mf_313 = 7.5 * (1.0 / (t1265 == 0.0 ? 1.0E-16 : t1265)) * 26.25 /
    (zc_int14 == 0.0 ? 1.0E-16 : zc_int14);
  t910 = (intrm_sf_mf_327 - 2000.0) / 2000.0;
  t1050 = t910 * t910 * 3.0 - t910 * t910 * t910 * 2.0;
  if (intrm_sf_mf_327 <= 2000.0) {
    t910 = t1047 * 1.0E-5;
  } else if (intrm_sf_mf_327 >= 4000.0) {
    t910 = intrm_sf_mf_313 * 1.0E-5;
  } else {
    t910 = ((1.0 - t1050) * t1047 + intrm_sf_mf_313 * t1050) * 1.0E-5;
  }

  if (-X[122ULL] >= 0.0) {
    intrm_sf_mf_313 = -X[122ULL];
  } else {
    intrm_sf_mf_313 = X[122ULL];
  }

  intrm_sf_mf_327 = intrm_sf_mf_313 * 0.038099999999999995 / (t1253 == 0.0 ?
    1.0E-16 : t1253);
  t1047 = intrm_sf_mf_327 >= 1.0 ? intrm_sf_mf_327 : 1.0;
  t1265 = pmf_log10(6.9 / (t1047 == 0.0 ? 1.0E-16 : t1047) +
                    3.8898303526856324E-5) * pmf_log10(6.9 / (t1047 == 0.0 ?
    1.0E-16 : t1047) + 3.8898303526856324E-5) * 3.24;
  t921 = X[122ULL] * t921 * -224.0 / (Condenser_delta_h_2P == 0.0 ? 1.0E-16 :
    Condenser_delta_h_2P);
  intrm_sf_mf_313 = X[122ULL] * intrm_sf_mf_313 * (1.0 / (t1265 == 0.0 ? 1.0E-16
    : t1265)) * -3.5 / (zc_int14 == 0.0 ? 1.0E-16 : zc_int14);
  t1047 = (intrm_sf_mf_327 - 2000.0) / 2000.0;
  t1050 = t1047 * t1047 * 3.0 - t1047 * t1047 * t1047 * 2.0;
  if (intrm_sf_mf_327 <= 2000.0) {
    t1047 = t921 * 1.0E-5;
  } else if (intrm_sf_mf_327 >= 4000.0) {
    t1047 = intrm_sf_mf_313 * 1.0E-5;
  } else {
    t1047 = ((1.0 - t1050) * t921 + intrm_sf_mf_313 * t1050) * 1.0E-5;
  }

  if (-X[123ULL] >= 0.0) {
    intrm_sf_mf_313 = -X[123ULL];
  } else {
    intrm_sf_mf_313 = X[123ULL];
  }

  t1253 = intrm_sf_mf_329 * 0.0099491780865731388;
  intrm_sf_mf_327 = intrm_sf_mf_313 * 0.038099999999999995 / (t1253 == 0.0 ?
    1.0E-16 : t1253);
  t921 = intrm_sf_mf_327 >= 1.0 ? intrm_sf_mf_327 : 1.0;
  t1265 = pmf_log10(6.9 / (t921 == 0.0 ? 1.0E-16 : t921) + 3.8898303526856324E-5)
    * pmf_log10(6.9 / (t921 == 0.0 ? 1.0E-16 : t921) + 3.8898303526856324E-5) *
    3.24;
  Condenser_delta_h_2P = t928 * 2.8884652804500862E-5;
  t1050 = X[123ULL] * intrm_sf_mf_329 * -224.0 / (Condenser_delta_h_2P == 0.0 ?
    1.0E-16 : Condenser_delta_h_2P);
  zc_int14 = t928 * 7.5427442183940515E-6;
  intrm_sf_mf_313 = X[123ULL] * intrm_sf_mf_313 * (1.0 / (t1265 == 0.0 ? 1.0E-16
    : t1265)) * -3.5 / (zc_int14 == 0.0 ? 1.0E-16 : zc_int14);
  t921 = (intrm_sf_mf_327 - 2000.0) / 2000.0;
  t889 = t921 * t921 * 3.0 - t921 * t921 * t921 * 2.0;
  if (intrm_sf_mf_327 <= 2000.0) {
    t921 = t1050 * 1.0E-5;
  } else if (intrm_sf_mf_327 >= 4000.0) {
    t921 = intrm_sf_mf_313 * 1.0E-5;
  } else {
    t921 = ((1.0 - t889) * t1050 + intrm_sf_mf_313 * t889) * 1.0E-5;
  }

  intrm_sf_mf_313 = t926 >= 0.0 ? t926 : -t926;
  intrm_sf_mf_327 = intrm_sf_mf_313 * 0.038099999999999995 / (t1253 == 0.0 ?
    1.0E-16 : t1253);
  t1050 = intrm_sf_mf_327 >= 1.0 ? intrm_sf_mf_327 : 1.0;
  t1265 = pmf_log10(6.9 / (t1050 == 0.0 ? 1.0E-16 : t1050) +
                    3.8898303526856324E-5) * pmf_log10(6.9 / (t1050 == 0.0 ?
    1.0E-16 : t1050) + 3.8898303526856324E-5) * 3.24;
  intrm_sf_mf_329 = t926 * intrm_sf_mf_329 * 224.0 / (Condenser_delta_h_2P ==
    0.0 ? 1.0E-16 : Condenser_delta_h_2P);
  intrm_sf_mf_313 = t926 * intrm_sf_mf_313 * (1.0 / (t1265 == 0.0 ? 1.0E-16 :
    t1265)) * 3.5 / (zc_int14 == 0.0 ? 1.0E-16 : zc_int14);
  t1050 = (intrm_sf_mf_327 - 2000.0) / 2000.0;
  t889 = t1050 * t1050 * 3.0 - t1050 * t1050 * t1050 * 2.0;
  if (intrm_sf_mf_327 <= 2000.0) {
    t1050 = intrm_sf_mf_329 * 1.0E-5;
  } else if (intrm_sf_mf_327 >= 4000.0) {
    t1050 = intrm_sf_mf_313 * 1.0E-5;
  } else {
    t1050 = ((1.0 - t889) * intrm_sf_mf_329 + intrm_sf_mf_313 * t889) * 1.0E-5;
  }

  if (t936 <= 0.0) {
    intrm_sf_mf_313 = 0.0;
  } else {
    intrm_sf_mf_313 = t936 >= 1.0 ? 1.0 : t936;
  }

  intrm_sf_mf_327 = ((((X[0ULL] - 1.01325) - 60.0) * 0.999999 + 1.0E-6) - 1.0E-6)
    / 0.999999;
  t889 = (pmf_sqrt(intrm_sf_mf_327 * intrm_sf_mf_327 + 6.25E-6) + 1.0) -
    pmf_sqrt((intrm_sf_mf_327 - 1.0) * (intrm_sf_mf_327 - 1.0) + 6.25E-6);
  intrm_sf_mf_329 = t889 / 2.0 * 0.999999 + 1.0E-6;
  if (t1272 <= 0.0) {
    intrm_sf_mf_327 = 0.0;
  } else {
    intrm_sf_mf_327 = t1272 >= 1.0 ? 1.0 : t1272;
  }

  if (t1281 <= 0.0) {
    t936 = 0.0;
  } else {
    t936 = t1281 >= 1.0 ? 1.0 : t1281;
  }

  zc_int14 = ((((X[0ULL] - X[43ULL]) - 0.1) * 0.998 / 0.19999999999999998 +
               0.002) - 0.002) / 0.998;
  t1272 = (pmf_sqrt(zc_int14 * zc_int14 + 6.25E-6) + 1.0) - pmf_sqrt((zc_int14 -
    1.0) * (zc_int14 - 1.0) + 6.25E-6);
  Condenser_delta_h_2P = t1272 / 2.0 * 0.998 + 0.002;
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (M[0ULL] != 0) {
        t1281 = X[58ULL] - t869 * zc_int17 * 1000.0;
        t889 = pmf_log((t834 * zc_int17 * 1000.0 + X[58ULL]) / (t1281 == 0.0 ?
          1.0E-16 : t1281));
        zc_int14 = t889 / (t867 == 0.0 ? 1.0E-16 : t867);
      } else {
        zc_int14 = 1.0;
      }
    } else {
      zc_int14 = 0.0;
    }
  } else {
    zc_int14 = intrm_sf_mf_57 ? intrm_sf_mf_54 ? 0.0 : (real_T)!intrm_sf_mf_53 :
      (real_T)intrm_sf_mf_51;
  }

  if (intrm_sf_mf_58) {
    t867 = intrm_sf_mf_51 ? 0.0 : (real_T)!intrm_sf_mf_50;
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (M[1ULL] != 0) {
        t1281 = X[58ULL] - zc_int29 * t835 * 1000.0;
        t889 = pmf_log((t1289 * t835 * 1000.0 + X[58ULL]) / (t1281 == 0.0 ?
          1.0E-16 : t1281));
        t867 = t889 / (t865 == 0.0 ? 1.0E-16 : t865);
      } else {
        t867 = 1.0;
      }
    } else {
      t867 = 0.0;
    }
  } else {
    t867 = intrm_sf_mf_51 ? 0.0 : (real_T)!intrm_sf_mf_55;
  }

  t865 = (1.0 - zc_int14) - t867;
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (M[0ULL] != 0) {
        t869 = (zc_int16 - 1.0) * zc_int17 * 1000.0 + X[58ULL];
      } else {
        t869 = (zc_int16 * t1292 + X[58ULL]) - zc_int17 * 1000.0;
      }
    } else if (intrm_sf_mf_50) {
      t869 = X[58ULL];
    } else {
      t869 = (zc_int23 * t1287 + X[58ULL]) - t835 * 1000.0;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (M[1ULL] != 0) {
        t869 = (zc_int23 - 1.0) * t835 * 1000.0 + X[58ULL];
      } else {
        t869 = (zc_int23 * t1287 + X[58ULL]) - t835 * 1000.0;
      }
    } else if (intrm_sf_mf_53) {
      t869 = X[58ULL];
    } else {
      t869 = (zc_int16 * t1292 + X[58ULL]) - zc_int17 * 1000.0;
    }
  } else if (intrm_sf_mf_51) {
    t869 = (zc_int16 * t1292 + X[58ULL]) - zc_int17 * 1000.0;
  } else if (intrm_sf_mf_55) {
    t869 = X[58ULL];
  } else {
    t869 = (zc_int23 * t1287 + X[58ULL]) - t835 * 1000.0;
  }

  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (M[0ULL] != 0) {
        zc_int17 = t874;
      } else {
        zc_int17 = zc_int20 * t1292 * 0.001 + t872;
      }
    } else if (intrm_sf_mf_50) {
      zc_int17 = t872;
    } else {
      zc_int17 = t883 * t1287 * 0.001 + t872;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (M[1ULL] != 0) {
        zc_int17 = t879;
      } else {
        zc_int17 = t883 * t1287 * 0.001 + t872;
      }
    } else if (intrm_sf_mf_53) {
      zc_int17 = t872;
    } else {
      zc_int17 = zc_int20 * t1292 * 0.001 + t872;
    }
  } else if (intrm_sf_mf_51) {
    zc_int17 = zc_int20 * t1292 * 0.001 + t872;
  } else if (intrm_sf_mf_55) {
    zc_int17 = t872;
  } else {
    zc_int17 = t883 * t1287 * 0.001 + t872;
  }

  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_68) {
      if (intrm_sf_mf_67) {
        t1289 = t1288 * (t879 - zc_int17) * 1000.0 + t869;
        t1287 = -pmf_log(t869 / (t1289 == 0.0 ? 1.0E-16 : t1289));
        zc_int17 = t1287 / (t877 == 0.0 ? 1.0E-16 : t877);
      } else {
        zc_int17 = t865;
      }
    } else {
      zc_int17 = 0.0;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_70) {
      if (intrm_sf_mf_69) {
        t1272 = t1288 * (t874 - zc_int17) * 1000.0 + t869;
        t1281 = -pmf_log(t869 / (t1272 == 0.0 ? 1.0E-16 : t1272));
        zc_int17 = t1281 / (t877 == 0.0 ? 1.0E-16 : t877);
      } else {
        zc_int17 = t865;
      }
    } else {
      zc_int17 = 0.0;
    }
  } else {
    zc_int17 = t865;
  }

  zc_int20 = t865 - zc_int17;
  zc_int23 = zc_int14 + (intrm_sf_mf_58 ? 0.0 : intrm_sf_mf_57 ? zc_int20 : 0.0);
  zc_int14 = ((real_T)(M[55ULL] != 0) * 2.0 - 1.0) *
    Simscape_Component_mdot_forward / 1.5;
  if (t969 <= 0.0) {
    zc_int16 = 0.0;
  } else {
    zc_int16 = t969 >= 1.0 ? 1.0 : (0.8 - (zc_int14 - 0.8) * (zc_int14 - 0.8) *
      0.2) - (t968 - 0.25) * (t968 - 0.25) * 0.35;
  }

  t869 = t960 > 0.01 ? t963 * zc_int16 : 0.0;
  t865 = intrm_sf_mf_58 ? zc_int20 : 0.0;
  if (intrm_sf_mf_441) {
    if (intrm_sf_mf_434) {
      if (M[72ULL] != 0) {
        t1288 = -pmf_log((X[163ULL] - t990 * 1000.0) / (X[163ULL] == 0.0 ?
          1.0E-16 : X[163ULL]));
        zc_int20 = t1288 / (t1005 == 0.0 ? 1.0E-16 : t1005);
      } else {
        zc_int20 = 1.0;
      }
    } else {
      zc_int20 = 0.0;
    }
  } else {
    zc_int20 = intrm_sf_mf_440 ? intrm_sf_mf_437 ? 0.0 : (real_T)
      !intrm_sf_mf_436 : (real_T)intrm_sf_mf_434;
  }

  if (intrm_sf_mf_441) {
    t834 = intrm_sf_mf_434 ? 0.0 : (real_T)!intrm_sf_mf_433;
  } else if (intrm_sf_mf_440) {
    if (intrm_sf_mf_437) {
      if (M[83ULL] != 0) {
        t1288 = -pmf_log((X[163ULL] - t1003 * 1000.0) / (X[163ULL] == 0.0 ?
          1.0E-16 : X[163ULL]));
        t834 = t1288 / (intrm_sf_mf_427 == 0.0 ? 1.0E-16 : intrm_sf_mf_427);
      } else {
        t834 = 1.0;
      }
    } else {
      t834 = 0.0;
    }
  } else {
    t834 = intrm_sf_mf_434 ? 0.0 : (real_T)!intrm_sf_mf_438;
  }

  t1292 = (1.0 - zc_int20) - t834;
  if (intrm_sf_mf_441) {
    if (intrm_sf_mf_434) {
      if (M[72ULL] != 0) {
        t883 = t1009;
      } else {
        t883 = t999 * t1010 * 0.001 + t1006;
      }
    } else if (intrm_sf_mf_433) {
      t883 = t1006;
    } else {
      t883 = t1018 * t1020 * 0.001 + t1006;
    }
  } else if (intrm_sf_mf_440) {
    if (intrm_sf_mf_437) {
      if (M[83ULL] != 0) {
        t883 = t1012;
      } else {
        t883 = t1018 * t1020 * 0.001 + t1006;
      }
    } else if (intrm_sf_mf_436) {
      t883 = t1006;
    } else {
      t883 = t999 * t1010 * 0.001 + t1006;
    }
  } else if (intrm_sf_mf_434) {
    t883 = t999 * t1010 * 0.001 + t1006;
  } else if (intrm_sf_mf_438) {
    t883 = t1006;
  } else {
    t883 = t1018 * t1020 * 0.001 + t1006;
  }

  if (intrm_sf_mf_441) {
    if (intrm_sf_mf_451) {
      if (intrm_sf_mf_450) {
        t883 = (t1012 - t883) / (t1023 == 0.0 ? 1.0E-16 : t1023) /
          (Steam_Generator_two_phase_fluid_Cdot_ext_lag_pos == 0.0 ? 1.0E-16 :
           Steam_Generator_two_phase_fluid_Cdot_ext_lag_pos) * 1000.0;
      } else {
        t883 = t1292;
      }
    } else {
      t883 = 0.0;
    }
  } else if (intrm_sf_mf_440) {
    if (intrm_sf_mf_453) {
      if (intrm_sf_mf_452) {
        t883 = (t1009 - t883) / (t1023 == 0.0 ? 1.0E-16 : t1023) /
          (Steam_Generator_two_phase_fluid_Cdot_ext_lag_pos == 0.0 ? 1.0E-16 :
           Steam_Generator_two_phase_fluid_Cdot_ext_lag_pos) * 1000.0;
      } else {
        t883 = t1292;
      }
    } else {
      t883 = 0.0;
    }
  } else {
    t883 = t1292;
  }

  t835 = t1292 - t883;
  t1292 = t867 + t865;
  zc_int29 = t1292;
  t1292 = -(((real_T)(M[61ULL] != 0) * 2.0 - 1.0) * X[56ULL] * t869);
  t695[0ULL] = X[0ULL] * 0.1;
  t695[1ULL] = X[42ULL];
  t695[2ULL] = X[43ULL] * 0.1;
  t695[3ULL] = X[44ULL];
  t695[4ULL] = X[45ULL];
  t695[5ULL] = -X[45ULL];
  t695[6ULL] = X[0ULL] * 0.1;
  t695[7ULL] = X[42ULL];
  t695[8ULL] = X[45ULL];
  t695[9ULL] = X[46ULL];
  t695[10ULL] = X[47ULL];
  t695[11ULL] = X[43ULL] * 0.1;
  t695[12ULL] = X[44ULL];
  t695[13ULL] = -X[45ULL];
  t695[14ULL] = X[46ULL];
  t695[15ULL] = -X[47ULL];
  t695[16ULL] = X[47ULL];
  t695[17ULL] = -X[47ULL];
  t695[18ULL] = Condenser_delta_h_2P;
  t695[19ULL] = X[1ULL];
  t695[20ULL] = X[2ULL];
  t695[21ULL] = X[48ULL];
  t695[22ULL] = X[49ULL] * 0.1;
  t695[23ULL] = X[50ULL];
  t695[24ULL] = X[51ULL];
  t695[25ULL] = X[52ULL] * 0.1;
  t695[26ULL] = X[53ULL] * 0.1;
  t695[27ULL] = X[54ULL];
  t695[28ULL] = X[48ULL];
  t695[29ULL] = X[51ULL];
  t695[30ULL] = X[52ULL] * 0.1;
  t695[31ULL] = X[3ULL];
  t695[32ULL] = X[4ULL] * 0.1;
  t695[33ULL] = X[5ULL];
  t695[34ULL] = X[55ULL];
  t695[35ULL] = t848;
  t695[36ULL] = t881;
  t695[37ULL] = X[3ULL];
  t695[38ULL] = X[60ULL];
  t695[39ULL] = X[61ULL];
  t695[40ULL] = X[62ULL];
  t695[41ULL] = X[48ULL];
  t695[42ULL] = X[63ULL];
  t695[43ULL] = X[64ULL];
  t695[44ULL] = X[55ULL];
  t695[45ULL] = X[65ULL];
  t695[46ULL] = X[48ULL];
  t695[47ULL] = X[60ULL];
  t695[48ULL] = X[66ULL];
  t695[49ULL] = X[55ULL];
  t695[50ULL] = X[67ULL];
  t695[51ULL] = X[51ULL];
  t695[52ULL] = X[52ULL] * 0.1;
  t695[53ULL] = X[68ULL];
  t695[54ULL] = X[69ULL];
  t695[55ULL] = X[70ULL];
  t695[56ULL] = X[51ULL];
  t695[57ULL] = X[52ULL] * 0.1;
  t695[58ULL] = X[61ULL];
  t695[59ULL] = X[71ULL];
  t695[60ULL] = X[72ULL];
  t695[61ULL] = (t848 + t881) / 2.0 * 0.092765046668672663;
  t695[62ULL] = t895;
  t695[63ULL] = X[4ULL] / (t848 == 0.0 ? 1.0E-16 : t848) * 100.0 + t895;
  t695[64ULL] = t898;
  t695[65ULL] = X[4ULL] / (t881 == 0.0 ? 1.0E-16 : t881) * 100.0 + t898;
  t695[66ULL] = X[49ULL] * 0.1;
  t695[67ULL] = X[50ULL];
  t695[68ULL] = X[53ULL] * 0.1;
  t695[69ULL] = X[54ULL];
  t695[70ULL] = X[9ULL] * 0.001;
  t695[71ULL] = X[6ULL] * 0.1;
  t695[72ULL] = X[7ULL];
  t695[73ULL] = t849;
  t695[74ULL] = t859;
  t695[75ULL] = X[8ULL];
  t695[76ULL] = X[10ULL];
  t695[77ULL] = X[59ULL] * 0.001;
  t695[78ULL] = t864;
  t695[79ULL] = X[11ULL] * 0.001;
  t695[80ULL] = X[13ULL] * 0.001;
  t695[81ULL] = X[12ULL] * 0.001;
  t695[82ULL] = X[58ULL];
  t695[83ULL] = t872;
  t695[84ULL] = t874;
  t695[85ULL] = t879;
  t695[86ULL] = t893;
  t695[87ULL] = t892;
  t695[88ULL] = t890;
  t695[89ULL] = X[56ULL];
  t695[90ULL] = X[57ULL];
  t695[91ULL] = X[73ULL];
  t695[92ULL] = X[74ULL];
  t695[93ULL] = X[75ULL];
  t695[94ULL] = Condenser_two_phase_fluid_T_out;
  t695[95ULL] = X[49ULL] * 0.1;
  t695[96ULL] = X[50ULL];
  t695[97ULL] = X[73ULL];
  t695[98ULL] = X[76ULL];
  t695[99ULL] = X[56ULL];
  t695[100ULL] = X[53ULL] * 0.1;
  t695[101ULL] = X[54ULL];
  t695[102ULL] = X[74ULL];
  t695[103ULL] = X[77ULL];
  t695[104ULL] = X[57ULL];
  t695[105ULL] = X[14ULL];
  t695[106ULL] = Condenser_two_phase_fluid_h_out;
  t695[107ULL] = t901;
  t695[108ULL] = t873;
  t695[109ULL] = t878;
  t695[110ULL] = t1046;
  t695[111ULL] = t856;
  t695[112ULL] = intrm_sf_mf_59;
  t695[113ULL] = t888;
  t695[114ULL] = X[9ULL] * 0.001;
  t695[115ULL] = Condenser_two_phase_fluid_Re_liq_limited;
  t695[116ULL] = Condenser_NTU_mix;
  t695[117ULL] = Condenser_two_phase_fluid_Rth_conv_vap;
  t695[118ULL] = t862;
  t695[119ULL] = Condenser_T_in_vap_TL;
  t695[120ULL] = t882;
  t695[121ULL] = t851;
  t695[122ULL] = X[11ULL] * 0.001;
  t695[123ULL] = X[13ULL] * 0.001;
  t695[124ULL] = X[12ULL] * 0.001;
  t695[125ULL] = zc_int23;
  t695[126ULL] = zc_int17;
  t695[127ULL] = zc_int29;
  t695[128ULL] = Condenser_Q_cond;
  t695[129ULL] = t850;
  t695[130ULL] = Condenser_effectiveness_vap;
  t695[131ULL] = X[10ULL];
  t695[132ULL] = X[78ULL];
  t695[133ULL] = t871 * 1000.0;
  t695[134ULL] = t871 * 1000.0;
  t695[135ULL] = -X[78ULL];
  t695[136ULL] = X[53ULL] * 0.1;
  t695[137ULL] = X[54ULL];
  t695[138ULL] = X[79ULL] * 0.1;
  t695[139ULL] = X[80ULL];
  t695[140ULL] = -X[74ULL];
  t695[141ULL] = X[81ULL];
  t695[142ULL] = U_idx_1;
  t695[143ULL] = X[53ULL] * 0.1;
  t695[144ULL] = X[54ULL];
  t695[145ULL] = -X[74ULL];
  t695[146ULL] = X[82ULL];
  t695[147ULL] = -X[57ULL];
  t695[148ULL] = X[79ULL] * 0.1;
  t695[149ULL] = X[80ULL];
  t695[150ULL] = X[81ULL];
  t695[151ULL] = X[82ULL];
  t695[152ULL] = X[57ULL];
  t695[153ULL] = t916 * 0.1;
  t695[154ULL] = U_idx_1 * 9.5492965855137211;
  t695[155ULL] = X[87ULL];
  t695[156ULL] = t917;
  t695[157ULL] = X[83ULL];
  t695[158ULL] = X[84ULL];
  t695[159ULL] = X[85ULL];
  t695[160ULL] = X[86ULL];
  t695[161ULL] = -X[57ULL];
  t695[162ULL] = t913 * 0.0001;
  t695[163ULL] = X[57ULL];
  t695[164ULL] = Fixed_Displacement_Pump_2P_mdot_leakage * 100000.0;
  t695[165ULL] = U_idx_1 * X[87ULL] * 0.001;
  t695[166ULL] = X[78ULL];
  t695[167ULL] = X[78ULL];
  t695[168ULL] = t871 * 1000.0;
  t695[169ULL] = t871 * 1000.0;
  t695[170ULL] = t871 * 0.001;
  t695[171ULL] = U_idx_1;
  t695[172ULL] = U_idx_1;
  t695[173ULL] = -X[87ULL];
  t695[174ULL] = U_idx_1;
  t695[175ULL] = X[88ULL];
  t695[176ULL] = X[89ULL];
  t695[177ULL] = X[90ULL] * 0.1;
  t695[178ULL] = X[91ULL];
  t695[179ULL] = -X[91ULL];
  t695[180ULL] = X[88ULL];
  t695[181ULL] = X[91ULL];
  t695[182ULL] = X[92ULL];
  t695[183ULL] = X[93ULL];
  t695[184ULL] = X[94ULL];
  t695[185ULL] = X[89ULL];
  t695[186ULL] = X[90ULL] * 0.1;
  t695[187ULL] = -X[91ULL];
  t695[188ULL] = X[95ULL];
  t695[189ULL] = -X[93ULL];
  t695[190ULL] = X[94ULL];
  t695[191ULL] = X[93ULL];
  t695[192ULL] = -X[93ULL];
  t695[193ULL] = X[96ULL];
  t695[194ULL] = X[79ULL] * 0.1;
  t695[195ULL] = X[80ULL];
  t695[196ULL] = X[79ULL] * 0.1;
  t695[197ULL] = X[80ULL];
  t695[198ULL] = -X[57ULL];
  t695[199ULL] = -X[81ULL];
  t695[200ULL] = -X[81ULL];
  t695[201ULL] = -X[57ULL];
  t695[202ULL] = X[0ULL] * 0.1;
  t695[203ULL] = X[97ULL];
  t695[204ULL] = X[0ULL] * 0.1;
  t695[205ULL] = X[97ULL];
  t695[206ULL] = X[56ULL];
  t695[207ULL] = X[98ULL];
  t695[208ULL] = X[98ULL];
  t695[209ULL] = X[56ULL];
  t695[210ULL] = X[56ULL];
  t695[211ULL] = X[49ULL] * 0.1;
  t695[212ULL] = X[50ULL];
  t695[213ULL] = X[49ULL] * 0.1;
  t695[214ULL] = X[50ULL];
  t695[215ULL] = X[56ULL];
  t695[216ULL] = X[73ULL];
  t695[217ULL] = X[73ULL];
  t695[218ULL] = X[56ULL];
  t695[219ULL] = X[56ULL];
  t695[220ULL] = X[0ULL] * 0.1;
  t695[221ULL] = X[99ULL];
  t695[222ULL] = X[0ULL] * 0.1;
  t695[223ULL] = X[99ULL];
  t695[224ULL] = X[100ULL];
  t695[225ULL] = X[101ULL];
  t695[226ULL] = X[101ULL];
  t695[227ULL] = X[100ULL];
  t695[228ULL] = X[100ULL];
  t695[229ULL] = -X[57ULL];
  t695[230ULL] = X[102ULL];
  t695[231ULL] = X[103ULL] * 0.1;
  t695[232ULL] = X[104ULL];
  t695[233ULL] = X[105ULL] * 0.1;
  t695[234ULL] = X[106ULL];
  t695[235ULL] = X[107ULL];
  t695[236ULL] = X[102ULL];
  t695[237ULL] = X[103ULL] * 0.1;
  t695[238ULL] = X[106ULL];
  t695[239ULL] = X[108ULL];
  t695[240ULL] = X[109ULL];
  t695[241ULL] = X[104ULL];
  t695[242ULL] = X[105ULL] * 0.1;
  t695[243ULL] = X[107ULL];
  t695[244ULL] = X[110ULL];
  t695[245ULL] = X[109ULL];
  t695[246ULL] = t912;
  t695[247ULL] = X[111ULL];
  t695[248ULL] = X[51ULL];
  t695[249ULL] = X[52ULL] * 0.1;
  t695[250ULL] = X[112ULL];
  t695[251ULL] = -X[61ULL];
  t695[252ULL] = X[111ULL];
  t695[253ULL] = X[112ULL];
  t695[254ULL] = X[113ULL];
  t695[255ULL] = X[114ULL];
  t695[256ULL] = X[51ULL];
  t695[257ULL] = X[52ULL] * 0.1;
  t695[258ULL] = -X[61ULL];
  t695[259ULL] = X[115ULL];
  t695[260ULL] = X[114ULL];
  t695[261ULL] = t915;
  t695[262ULL] = X[116ULL];
  t695[263ULL] = X[117ULL] * 0.1;
  t695[264ULL] = X[118ULL];
  t695[265ULL] = X[119ULL] * 0.1;
  t695[266ULL] = X[78ULL];
  t695[267ULL] = X[120ULL];
  t695[268ULL] = X[121ULL];
  t695[269ULL] = X[15ULL] * 0.1;
  t695[270ULL] = X[16ULL];
  t695[271ULL] = X[122ULL];
  t695[272ULL] = X[123ULL];
  t695[273ULL] = t871;
  t695[274ULL] = X[116ULL];
  t695[275ULL] = X[117ULL] * 0.1;
  t695[276ULL] = X[120ULL];
  t695[277ULL] = X[124ULL];
  t695[278ULL] = X[122ULL];
  t695[279ULL] = X[125ULL];
  t695[280ULL] = X[118ULL];
  t695[281ULL] = X[119ULL] * 0.1;
  t695[282ULL] = X[121ULL];
  t695[283ULL] = X[126ULL];
  t695[284ULL] = X[123ULL];
  t695[285ULL] = X[127ULL];
  t695[286ULL] = t918;
  t695[287ULL] = Pipe_TL_u_I;
  t695[288ULL] = X[15ULL] / (t918 == 0.0 ? 1.0E-16 : t918) * 100.0 + Pipe_TL_u_I;
  t695[289ULL] = t1048;
  t695[290ULL] = t1049;
  t695[291ULL] = X[104ULL];
  t695[292ULL] = X[105ULL] * 0.1;
  t695[293ULL] = X[116ULL];
  t695[294ULL] = X[117ULL] * 0.1;
  t695[295ULL] = X[128ULL];
  t695[296ULL] = -X[107ULL];
  t695[297ULL] = -X[120ULL];
  t695[298ULL] = X[17ULL] * 0.1;
  t695[299ULL] = X[18ULL];
  t695[300ULL] = -X[122ULL];
  t695[301ULL] = X[104ULL];
  t695[302ULL] = X[105ULL] * 0.1;
  t695[303ULL] = -X[107ULL];
  t695[304ULL] = X[129ULL];
  t695[305ULL] = X[130ULL];
  t695[306ULL] = X[116ULL];
  t695[307ULL] = X[117ULL] * 0.1;
  t695[308ULL] = -X[120ULL];
  t695[309ULL] = X[131ULL];
  t695[310ULL] = -X[122ULL];
  t695[311ULL] = X[132ULL];
  t695[312ULL] = t922;
  t695[313ULL] = t923;
  t695[314ULL] = X[17ULL] / (t922 == 0.0 ? 1.0E-16 : t922) * 100.0 + t923;
  t695[315ULL] = t910;
  t695[316ULL] = t1047;
  t695[317ULL] = X[118ULL];
  t695[318ULL] = X[119ULL] * 0.1;
  t695[319ULL] = X[89ULL];
  t695[320ULL] = X[90ULL] * 0.1;
  t695[321ULL] = X[133ULL];
  t695[322ULL] = -X[121ULL];
  t695[323ULL] = t925;
  t695[324ULL] = X[19ULL] * 0.1;
  t695[325ULL] = X[20ULL];
  t695[326ULL] = -X[123ULL];
  t695[327ULL] = t926;
  t695[328ULL] = X[118ULL];
  t695[329ULL] = X[119ULL] * 0.1;
  t695[330ULL] = -X[121ULL];
  t695[331ULL] = X[136ULL];
  t695[332ULL] = -X[123ULL];
  t695[333ULL] = X[137ULL];
  t695[334ULL] = X[89ULL];
  t695[335ULL] = X[90ULL] * 0.1;
  t695[336ULL] = t925;
  t695[337ULL] = X[138ULL];
  t695[338ULL] = t926;
  t695[339ULL] = X[139ULL];
  t695[340ULL] = t928;
  t695[341ULL] = t929;
  t695[342ULL] = X[19ULL] / (t928 == 0.0 ? 1.0E-16 : t928) * 100.0 + t929;
  t695[343ULL] = t921;
  t695[344ULL] = t1050;
  t695[345ULL] = X[79ULL] * 0.1;
  t695[346ULL] = X[80ULL];
  t695[347ULL] = X[43ULL] * 0.1;
  t695[348ULL] = X[44ULL];
  t695[349ULL] = X[140ULL];
  t695[350ULL] = t932 * 1000.0;
  t695[351ULL] = t932 * 1000.0;
  t695[352ULL] = -X[140ULL];
  t695[353ULL] = X[140ULL];
  t695[354ULL] = X[140ULL];
  t695[355ULL] = t932 * 1000.0;
  t695[356ULL] = t932 * 1000.0;
  t695[357ULL] = X[79ULL] * 0.1;
  t695[358ULL] = X[80ULL];
  t695[359ULL] = X[43ULL] * 0.1;
  t695[360ULL] = X[44ULL];
  t695[361ULL] = X[21ULL] * 0.1;
  t695[362ULL] = X[22ULL];
  t695[363ULL] = X[140ULL];
  t695[364ULL] = -X[57ULL];
  t695[365ULL] = t934;
  t695[366ULL] = t935;
  t695[367ULL] = -X[81ULL];
  t695[368ULL] = t937;
  t695[369ULL] = t932;
  t695[370ULL] = t938;
  t695[371ULL] = X[79ULL] * 0.1;
  t695[372ULL] = X[80ULL];
  t695[373ULL] = -X[81ULL];
  t695[374ULL] = X[143ULL];
  t695[375ULL] = -X[57ULL];
  t695[376ULL] = X[43ULL] * 0.1;
  t695[377ULL] = X[44ULL];
  t695[378ULL] = t937;
  t695[379ULL] = X[144ULL];
  t695[380ULL] = t934;
  t695[381ULL] = X[23ULL] * 1550.0031000062004;
  t695[382ULL] = X[145ULL];
  t695[383ULL] = X[146ULL];
  t695[384ULL] = X[21ULL] * 0.0063674739754068094 / (X[23ULL] == 0.0 ? 1.0E-16 :
    X[23ULL]) * 100.0 + X[22ULL];
  t695[385ULL] = intrm_sf_mf_313;
  t695[386ULL] = U_idx_2;
  t695[387ULL] = X[43ULL] * 0.1;
  t695[388ULL] = X[44ULL];
  t695[389ULL] = t941;
  t695[390ULL] = t942 * 0.001;
  t695[391ULL] = t943;
  t695[392ULL] = Preheating_Thermodynamic_Properties_Sensor_2P1_V;
  t695[393ULL] = t943 - 273.15;
  t695[394ULL] = X[79ULL] * 0.1;
  t695[395ULL] = X[80ULL];
  t695[396ULL] = X[79ULL] * t914 * 100.0 + X[80ULL];
  t695[397ULL] = t945 * 0.001;
  t695[398ULL] = t946;
  t695[399ULL] = t914;
  t695[400ULL] = t946 - 273.15;
  t695[401ULL] = X[79ULL] * 0.1;
  t695[402ULL] = X[80ULL];
  t695[403ULL] = X[79ULL] * 0.1;
  t695[404ULL] = X[80ULL];
  t695[405ULL] = X[49ULL] * 0.1;
  t695[406ULL] = X[50ULL];
  t695[407ULL] = X[49ULL] * 0.1;
  t695[408ULL] = X[50ULL];
  t695[409ULL] = X[49ULL] * 0.1;
  t695[410ULL] = X[50ULL];
  t695[411ULL] = X[53ULL] * 0.1;
  t695[412ULL] = X[54ULL];
  t695[413ULL] = X[53ULL] * 0.1;
  t695[414ULL] = X[54ULL];
  t695[415ULL] = X[53ULL] * 0.1;
  t695[416ULL] = X[54ULL];
  t695[417ULL] = X[0ULL] * 0.1;
  t695[418ULL] = X[147ULL];
  t695[419ULL] = X[0ULL] * 0.1;
  t695[420ULL] = X[147ULL];
  t695[421ULL] = X[0ULL] * 0.1;
  t695[422ULL] = X[147ULL];
  t695[423ULL] = X[53ULL] * 0.1;
  t695[424ULL] = X[54ULL];
  t695[425ULL] = X[53ULL] * 0.1;
  t695[426ULL] = X[54ULL];
  t695[427ULL] = X[53ULL] * 0.1;
  t695[428ULL] = X[0ULL] * 0.1;
  t695[429ULL] = X[97ULL];
  t695[430ULL] = X[0ULL] * 0.1;
  t695[431ULL] = X[97ULL];
  t695[432ULL] = X[0ULL] * 0.1;
  t695[433ULL] = X[97ULL];
  t695[434ULL] = X[79ULL] * 0.1;
  t695[435ULL] = X[0ULL] * 0.1;
  t695[436ULL] = X[99ULL];
  t695[437ULL] = X[148ULL];
  t695[438ULL] = -X[101ULL];
  t695[439ULL] = X[101ULL];
  t695[440ULL] = X[0ULL] * 0.1;
  t695[441ULL] = X[99ULL];
  t695[442ULL] = -X[101ULL];
  t695[443ULL] = X[149ULL];
  t695[444ULL] = -X[100ULL];
  t695[445ULL] = X[148ULL];
  t695[446ULL] = X[101ULL];
  t695[447ULL] = X[149ULL];
  t695[448ULL] = X[100ULL];
  t695[449ULL] = -X[100ULL];
  t695[450ULL] = X[100ULL];
  t695[451ULL] = intrm_sf_mf_329;
  t695[452ULL] = X[24ULL];
  t695[453ULL] = X[25ULL];
  t695[454ULL] = X[118ULL];
  t695[455ULL] = X[119ULL] * 0.1;
  t695[456ULL] = X[119ULL] * 99999.999999999985;
  t695[457ULL] = X[118ULL];
  t695[458ULL] = X[119ULL] * 0.099999999999999992;
  t695[459ULL] = X[118ULL] - 273.15;
  t695[460ULL] = X[148ULL];
  t695[461ULL] = -X[101ULL];
  t695[462ULL] = X[148ULL];
  t695[463ULL] = -X[101ULL];
  t695[464ULL] = X[150ULL];
  t695[465ULL] = -X[100ULL];
  t695[466ULL] = -X[100ULL];
  t695[467ULL] = X[88ULL];
  t695[468ULL] = -X[91ULL];
  t695[469ULL] = X[88ULL];
  t695[470ULL] = -X[91ULL];
  t695[471ULL] = X[151ULL];
  t695[472ULL] = -X[93ULL];
  t695[473ULL] = -X[93ULL];
  t695[474ULL] = X[111ULL];
  t695[475ULL] = -X[112ULL];
  t695[476ULL] = X[111ULL];
  t695[477ULL] = -X[112ULL];
  t695[478ULL] = X[152ULL];
  t695[479ULL] = X[48ULL];
  t695[480ULL] = -X[60ULL];
  t695[481ULL] = X[48ULL];
  t695[482ULL] = -X[60ULL];
  t695[483ULL] = X[153ULL];
  t695[484ULL] = -X[55ULL];
  t695[485ULL] = -X[55ULL];
  t695[486ULL] = X[0ULL] * 0.1;
  t695[487ULL] = X[97ULL];
  t695[488ULL] = X[49ULL] * 0.1;
  t695[489ULL] = X[50ULL];
  t695[490ULL] = X[98ULL];
  t695[491ULL] = -X[73ULL];
  t695[492ULL] = U_idx_3;
  t695[493ULL] = X[0ULL] * 0.1;
  t695[494ULL] = X[97ULL];
  t695[495ULL] = X[98ULL];
  t695[496ULL] = X[154ULL];
  t695[497ULL] = X[56ULL];
  t695[498ULL] = X[49ULL] * 0.1;
  t695[499ULL] = X[50ULL];
  t695[500ULL] = -X[73ULL];
  t695[501ULL] = X[155ULL];
  t695[502ULL] = -X[56ULL];
  t695[503ULL] = zc_int16;
  t695[504ULL] = t869;
  t695[505ULL] = Simscape_Component_ideal_outlet_enthalpy;
  t695[506ULL] = t971;
  t695[507ULL] = t894 * 0.001;
  t695[508ULL] = t961;
  t695[509ULL] = X[56ULL];
  t695[510ULL] = zc_int14;
  t695[511ULL] = X[56ULL];
  t695[512ULL] = -X[56ULL];
  t695[513ULL] = Simscape_Component_nozzle_area_out;
  t695[514ULL] = t966;
  t695[515ULL] = t965;
  t695[516ULL] = -t1292;
  t695[517ULL] = t968;
  t695[518ULL] = X[97ULL];
  t695[519ULL] = zc_int16;
  t695[520ULL] = t869;
  t695[521ULL] = Simscape_Component_ideal_outlet_enthalpy;
  t695[522ULL] = t971;
  t695[523ULL] = t894 * 0.001;
  t695[524ULL] = t961 - 273.15;
  t695[525ULL] = X[56ULL];
  t695[526ULL] = zc_int14;
  t695[527ULL] = Simscape_Component_nozzle_area_out;
  t695[528ULL] = t966;
  t695[529ULL] = t965;
  t695[530ULL] = -t1292 * 0.001;
  t695[531ULL] = t968;
  t695[532ULL] = U_idx_1;
  t695[533ULL] = X[0ULL] * 0.1;
  t695[534ULL] = X[99ULL];
  t695[535ULL] = X[0ULL] * 0.1;
  t695[536ULL] = X[147ULL];
  t695[537ULL] = X[0ULL] * 0.1;
  t695[538ULL] = X[42ULL];
  t695[539ULL] = X[0ULL] * 0.1;
  t695[540ULL] = X[97ULL];
  t695[541ULL] = X[0ULL] * 0.1;
  t695[542ULL] = X[26ULL];
  t695[543ULL] = X[27ULL];
  t695[544ULL] = X[28ULL];
  t695[545ULL] = X[29ULL];
  t695[546ULL] = t974;
  t695[547ULL] = t975;
  t695[548ULL] = X[156ULL];
  t695[549ULL] = t976;
  t695[550ULL] = X[28ULL] / (t1086 == 0.0 ? 1.0E-16 : t1086);
  t695[551ULL] = X[101ULL];
  t695[552ULL] = t980;
  t695[553ULL] = t981;
  t695[554ULL] = X[100ULL];
  t695[555ULL] = -X[47ULL];
  t695[556ULL] = -X[45ULL];
  t695[557ULL] = X[157ULL];
  t695[558ULL] = X[158ULL];
  t695[559ULL] = -X[56ULL];
  t695[560ULL] = -X[98ULL];
  t695[561ULL] = Steam_Drum_h_liq;
  t695[562ULL] = t982;
  t695[563ULL] = t972;
  t695[564ULL] = t973;
  t695[565ULL] = t984;
  t695[566ULL] = t985;
  t695[567ULL] = t976;
  t695[568ULL] = X[0ULL] * 0.1;
  t695[569ULL] = X[99ULL];
  t695[570ULL] = X[101ULL];
  t695[571ULL] = X[159ULL];
  t695[572ULL] = X[100ULL];
  t695[573ULL] = X[0ULL] * 0.1;
  t695[574ULL] = X[147ULL];
  t695[575ULL] = X[157ULL];
  t695[576ULL] = X[160ULL];
  t695[577ULL] = X[158ULL];
  t695[578ULL] = X[0ULL] * 0.1;
  t695[579ULL] = X[42ULL];
  t695[580ULL] = -X[45ULL];
  t695[581ULL] = X[161ULL];
  t695[582ULL] = -X[47ULL];
  t695[583ULL] = X[0ULL] * 0.1;
  t695[584ULL] = X[97ULL];
  t695[585ULL] = -X[98ULL];
  t695[586ULL] = X[162ULL];
  t695[587ULL] = -X[56ULL];
  t695[588ULL] = t1086;
  t695[589ULL] = t986;
  t695[590ULL] = t976;
  t695[591ULL] = X[89ULL];
  t695[592ULL] = X[90ULL] * 0.1;
  t695[593ULL] = X[43ULL] * 0.1;
  t695[594ULL] = X[44ULL];
  t695[595ULL] = X[102ULL];
  t695[596ULL] = X[103ULL] * 0.1;
  t695[597ULL] = X[0ULL] * 0.1;
  t695[598ULL] = X[147ULL];
  t695[599ULL] = X[89ULL];
  t695[600ULL] = X[90ULL] * 0.1;
  t695[601ULL] = X[102ULL];
  t695[602ULL] = X[103ULL] * 0.1;
  t695[603ULL] = X[30ULL];
  t695[604ULL] = X[31ULL] * 0.1;
  t695[605ULL] = X[32ULL];
  t695[606ULL] = X[135ULL];
  t695[607ULL] = Steam_Generator_e_vap_;
  t695[608ULL] = intrm_sf_mf_512;
  t695[609ULL] = X[30ULL];
  t695[610ULL] = X[134ULL];
  t695[611ULL] = -X[106ULL];
  t695[612ULL] = X[165ULL];
  t695[613ULL] = X[89ULL];
  t695[614ULL] = X[90ULL] * 0.1;
  t695[615ULL] = X[166ULL];
  t695[616ULL] = X[167ULL];
  t695[617ULL] = X[135ULL];
  t695[618ULL] = X[168ULL];
  t695[619ULL] = X[89ULL];
  t695[620ULL] = X[90ULL] * 0.1;
  t695[621ULL] = X[134ULL];
  t695[622ULL] = X[169ULL];
  t695[623ULL] = X[135ULL];
  t695[624ULL] = X[170ULL];
  t695[625ULL] = X[102ULL];
  t695[626ULL] = X[103ULL] * 0.1;
  t695[627ULL] = X[171ULL];
  t695[628ULL] = X[172ULL];
  t695[629ULL] = X[173ULL];
  t695[630ULL] = X[102ULL];
  t695[631ULL] = X[103ULL] * 0.1;
  t695[632ULL] = -X[106ULL];
  t695[633ULL] = X[174ULL];
  t695[634ULL] = X[175ULL];
  t695[635ULL] = (Steam_Generator_e_vap_ + intrm_sf_mf_512) / 2.0 *
    0.36562301792487523;
  t695[636ULL] = t1028;
  t695[637ULL] = X[31ULL] / (Steam_Generator_e_vap_ == 0.0 ? 1.0E-16 :
    Steam_Generator_e_vap_) * 100.0 + t1028;
  t695[638ULL] = Steam_Generator_thermal_liquid_u_out;
  t695[639ULL] = X[31ULL] / (intrm_sf_mf_512 == 0.0 ? 1.0E-16 : intrm_sf_mf_512)
    * 100.0 + Steam_Generator_thermal_liquid_u_out;
  t695[640ULL] = X[43ULL] * 0.1;
  t695[641ULL] = X[44ULL];
  t695[642ULL] = X[0ULL] * 0.1;
  t695[643ULL] = X[147ULL];
  t695[644ULL] = X[37ULL] * 0.001;
  t695[645ULL] = X[33ULL] * 0.1;
  t695[646ULL] = X[34ULL];
  t695[647ULL] = intrm_sf_mf_499;
  t695[648ULL] = t993;
  t695[649ULL] = X[35ULL];
  t695[650ULL] = X[38ULL];
  t695[651ULL] = X[164ULL] * 0.001;
  t695[652ULL] = Steam_Generator_two_phase_fluid_T_sat_vap;
  t695[653ULL] = X[36ULL] * 0.001;
  t695[654ULL] = X[40ULL] * 0.001;
  t695[655ULL] = X[39ULL] * 0.001;
  t695[656ULL] = X[163ULL];
  t695[657ULL] = t1006;
  t695[658ULL] = t1009;
  t695[659ULL] = t1012;
  t695[660ULL] = t1026;
  t695[661ULL] = intrm_sf_mf_456;
  t695[662ULL] = t1025;
  t695[663ULL] = X[141ULL];
  t695[664ULL] = -X[158ULL];
  t695[665ULL] = X[142ULL];
  t695[666ULL] = -X[157ULL];
  t695[667ULL] = X[176ULL];
  t695[668ULL] = Steam_Generator_two_phase_fluid_T_out;
  t695[669ULL] = X[43ULL] * 0.1;
  t695[670ULL] = X[44ULL];
  t695[671ULL] = X[142ULL];
  t695[672ULL] = X[177ULL];
  t695[673ULL] = X[141ULL];
  t695[674ULL] = X[0ULL] * 0.1;
  t695[675ULL] = X[147ULL];
  t695[676ULL] = -X[157ULL];
  t695[677ULL] = X[178ULL];
  t695[678ULL] = -X[158ULL];
  t695[679ULL] = X[41ULL];
  t695[680ULL] = t1032;
  t695[681ULL] = Steam_Generator_two_phase_fluid_mass_liq;
  t695[682ULL] = Steam_Generator_two_phase_fluid_mass_mix;
  t695[683ULL] = Steam_Generator_two_phase_fluid_mass_vap;
  t695[684ULL] = intrm_sf_mf_327;
  t695[685ULL] = t936;
  t695[686ULL] = t1022;
  t695[687ULL] = t1021;
  t695[688ULL] = X[37ULL] * 0.001;
  t695[689ULL] = t992;
  t695[690ULL] = t997;
  t695[691ULL] = Steam_Generator_NTU_vap;
  t695[692ULL] = t1000;
  t695[693ULL] = t983;
  t695[694ULL] = Steam_Generator_Q_mix;
  t695[695ULL] = Steam_Generator_Q_mix_;
  t695[696ULL] = X[36ULL] * 0.001;
  t695[697ULL] = X[40ULL] * 0.001;
  t695[698ULL] = X[39ULL] * 0.001;
  t695[699ULL] = zc_int20 + (intrm_sf_mf_441 ? 0.0 : intrm_sf_mf_440 ? t835 :
    0.0);
  t695[700ULL] = t883;
  t695[701ULL] = t834 + (intrm_sf_mf_441 ? t835 : 0.0);
  t695[702ULL] = t1026 >= 0.001 ? Steam_Generator_effectiveness_mix : 0.0;
  t695[703ULL] = intrm_sf_mf_456 >= 0.001 ? Steam_Generator_thermal_liquid_h_in :
    0.0;
  t695[704ULL] = Steam_Generator_Q_cond;
  t695[705ULL] = X[38ULL];
  t695[706ULL] = U_idx_3;
  t695[707ULL] = U_idx_3;
  t695[708ULL] = U_idx_0;
  t695[709ULL] = t871 * 0.001;
  t695[710ULL] = X[102ULL];
  t695[711ULL] = X[103ULL] * 0.1;
  t695[712ULL] = X[51ULL];
  t695[713ULL] = X[52ULL] * 0.1;
  t695[714ULL] = X[43ULL] * 0.1;
  t695[715ULL] = X[44ULL];
  t695[716ULL] = t941;
  t695[717ULL] = t942 * 0.001;
  t695[718ULL] = t943;
  t695[719ULL] = Preheating_Thermodynamic_Properties_Sensor_2P1_V;
  t695[720ULL] = X[0ULL] * 0.1;
  t695[721ULL] = X[147ULL];
  t695[722ULL] = X[0ULL] * t979 * 100.0 + X[147ULL];
  t695[723ULL] = t1034 * 0.001;
  t695[724ULL] = t1035;
  t695[725ULL] = t979;
  t695[726ULL] = t1035 - 273.15;
  t695[727ULL] = X[0ULL] * 0.1;
  t695[728ULL] = X[97ULL];
  t695[729ULL] = t1037;
  t695[730ULL] = t920 * 0.001;
  t695[731ULL] = t1039;
  t695[732ULL] = t1036;
  t695[733ULL] = t1037;
  t695[734ULL] = t920 * 0.001;
  t695[735ULL] = t1039 - 273.15;
  t695[736ULL] = X[49ULL] * 0.1;
  t695[737ULL] = X[50ULL];
  t695[738ULL] = t1040;
  t695[739ULL] = t1041 * 0.001;
  t695[740ULL] = t1042;
  t695[741ULL] = t904;
  t695[742ULL] = t1040;
  t695[743ULL] = t1041 * 0.001;
  t695[744ULL] = t1042 - 273.15;
  t695[745ULL] = X[53ULL] * 0.1;
  t695[746ULL] = X[54ULL];
  t695[747ULL] = t1043;
  t695[748ULL] = t1044 * 0.001;
  t695[749ULL] = t1045;
  t695[750ULL] = Thermodynamic_Properties_Sensor_2P4_V;
  t695[751ULL] = t1043;
  t695[752ULL] = t1045 - 273.15;
  t695[753ULL] = t943 - 273.15;
  t695[754ULL] = X[0ULL] * 0.1;
  t695[755ULL] = X[147ULL];
  t695[756ULL] = X[0ULL] * 0.1;
  t695[757ULL] = X[147ULL];
  t695[758ULL] = X[179ULL];
  t695[759ULL] = X[179ULL];
  t695[760ULL] = X[53ULL] * 0.1;
  t695[761ULL] = X[54ULL];
  t695[762ULL] = X[180ULL];
  t695[763ULL] = X[180ULL];
  t695[764ULL] = X[0ULL] * 0.1;
  t695[765ULL] = X[97ULL];
  t695[766ULL] = X[181ULL];
  t695[767ULL] = X[181ULL];
  t695[768ULL] = X[49ULL] * 0.1;
  t695[769ULL] = X[50ULL];
  t695[770ULL] = X[182ULL];
  t695[771ULL] = X[182ULL];
  for (b = 0; b < 772; b++) {
    out.mX[b] = t695[b];
  }

  (void)LC;
  (void)t1294;
  return 0;
}
