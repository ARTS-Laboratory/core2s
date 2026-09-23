/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv6/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_sys_struct.h"
#include "PW_SMRv6_eed91bea_1_ds_log.h"
#include "PW_SMRv6_eed91bea_1_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_externals.h"
#include "PW_SMRv6_eed91bea_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv6_eed91bea_1_ds_log(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1253, NeDsMethodOutput *t1254)
{
  ETTS0 ad_efOut;
  ETTS0 ae_efOut;
  ETTS0 ai_efOut;
  ETTS0 bb_efOut;
  ETTS0 be_efOut;
  ETTS0 bg_efOut;
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
  ETTS0 fb_efOut;
  ETTS0 fd_efOut;
  ETTS0 ff_efOut;
  ETTS0 fg_efOut;
  ETTS0 g_efOut;
  ETTS0 ge_efOut;
  ETTS0 gg_efOut;
  ETTS0 h_efOut;
  ETTS0 hb_efOut;
  ETTS0 hc_efOut;
  ETTS0 hd_efOut;
  ETTS0 he_efOut;
  ETTS0 hh_efOut;
  ETTS0 if_efOut;
  ETTS0 ig_efOut;
  ETTS0 j_efOut;
  ETTS0 jd_efOut;
  ETTS0 je_efOut;
  ETTS0 kc_efOut;
  ETTS0 ke_efOut;
  ETTS0 kg_efOut;
  ETTS0 l_efOut;
  ETTS0 lc_efOut;
  ETTS0 ld_efOut;
  ETTS0 lf_efOut;
  ETTS0 m_efOut;
  ETTS0 md_efOut;
  ETTS0 nc_efOut;
  ETTS0 ne_efOut;
  ETTS0 nf_efOut;
  ETTS0 ng_efOut;
  ETTS0 o_efOut;
  ETTS0 od_efOut;
  ETTS0 oe_efOut;
  ETTS0 p_efOut;
  ETTS0 pb_efOut;
  ETTS0 pd_efOut;
  ETTS0 qc_efOut;
  ETTS0 qe_efOut;
  ETTS0 r_efOut;
  ETTS0 rd_efOut;
  ETTS0 re_efOut;
  ETTS0 rf_efOut;
  ETTS0 rg_efOut;
  ETTS0 rh_efOut;
  ETTS0 sc_efOut;
  ETTS0 t42;
  ETTS0 t49;
  ETTS0 t50;
  ETTS0 t51;
  ETTS0 t52;
  ETTS0 t60;
  ETTS0 t62;
  ETTS0 t63;
  ETTS0 t67;
  ETTS0 t68;
  ETTS0 t69;
  ETTS0 t70;
  ETTS0 t71;
  ETTS0 t73;
  ETTS0 t75;
  ETTS0 t76;
  ETTS0 t78;
  ETTS0 t79;
  ETTS0 t_efOut;
  ETTS0 tb_efOut;
  ETTS0 td_efOut;
  ETTS0 tf_efOut;
  ETTS0 uc_efOut;
  ETTS0 ud_efOut;
  ETTS0 ue_efOut;
  ETTS0 ve_efOut;
  ETTS0 vg_efOut;
  ETTS0 vh_efOut;
  ETTS0 w_efOut;
  ETTS0 wc_efOut;
  ETTS0 wd_efOut;
  ETTS0 xd_efOut;
  ETTS0 xe_efOut;
  ETTS0 xf_efOut;
  ETTS0 yc_efOut;
  ETTS0 ye_efOut;
  ETTS0 yf_efOut;
  PmRealVector out;
  real_T t675[860];
  real_T X[222];
  real_T ab_efOut[1];
  real_T ac_efOut[1];
  real_T af_efOut[1];
  real_T ag_efOut[1];
  real_T ah_efOut[1];
  real_T b_efOut[1];
  real_T bc_efOut[1];
  real_T bd_efOut[1];
  real_T bf_efOut[1];
  real_T bh_efOut[1];
  real_T bi_efOut[1];
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
  real_T eg_efOut[1];
  real_T eh_efOut[1];
  real_T f_efOut[1];
  real_T fc_efOut[1];
  real_T fe_efOut[1];
  real_T fh_efOut[1];
  real_T gb_efOut[1];
  real_T gc_efOut[1];
  real_T gd_efOut[1];
  real_T gf_efOut[1];
  real_T gh_efOut[1];
  real_T hf_efOut[1];
  real_T hg_efOut[1];
  real_T i_efOut[1];
  real_T ib_efOut[1];
  real_T ic_efOut[1];
  real_T id_efOut[1];
  real_T ie_efOut[1];
  real_T ih_efOut[1];
  real_T jb_efOut[1];
  real_T jc_efOut[1];
  real_T jf_efOut[1];
  real_T jg_efOut[1];
  real_T jh_efOut[1];
  real_T k_efOut[1];
  real_T kb_efOut[1];
  real_T kd_efOut[1];
  real_T kf_efOut[1];
  real_T kh_efOut[1];
  real_T lb_efOut[1];
  real_T le_efOut[1];
  real_T lg_efOut[1];
  real_T lh_efOut[1];
  real_T mb_efOut[1];
  real_T mc_efOut[1];
  real_T me_efOut[1];
  real_T mf_efOut[1];
  real_T mg_efOut[1];
  real_T mh_efOut[1];
  real_T n_efOut[1];
  real_T nb_efOut[1];
  real_T nd_efOut[1];
  real_T nh_efOut[1];
  real_T ob_efOut[1];
  real_T oc_efOut[1];
  real_T of_efOut[1];
  real_T og_efOut[1];
  real_T oh_efOut[1];
  real_T pc_efOut[1];
  real_T pe_efOut[1];
  real_T pf_efOut[1];
  real_T pg_efOut[1];
  real_T ph_efOut[1];
  real_T q_efOut[1];
  real_T qb_efOut[1];
  real_T qd_efOut[1];
  real_T qf_efOut[1];
  real_T qg_efOut[1];
  real_T qh_efOut[1];
  real_T rb_efOut[1];
  real_T rc_efOut[1];
  real_T s_efOut[1];
  real_T sb_efOut[1];
  real_T sd_efOut[1];
  real_T se_efOut[1];
  real_T sf_efOut[1];
  real_T sg_efOut[1];
  real_T sh_efOut[1];
  real_T t794[1];
  real_T t798[1];
  real_T tc_efOut[1];
  real_T te_efOut[1];
  real_T tg_efOut[1];
  real_T th_efOut[1];
  real_T u_efOut[1];
  real_T ub_efOut[1];
  real_T uf_efOut[1];
  real_T ug_efOut[1];
  real_T uh_efOut[1];
  real_T v_efOut[1];
  real_T vb_efOut[1];
  real_T vc_efOut[1];
  real_T vd_efOut[1];
  real_T vf_efOut[1];
  real_T wb_efOut[1];
  real_T we_efOut[1];
  real_T wf_efOut[1];
  real_T wg_efOut[1];
  real_T wh_efOut[1];
  real_T x_efOut[1];
  real_T xb_efOut[1];
  real_T xc_efOut[1];
  real_T xg_efOut[1];
  real_T xh_efOut[1];
  real_T y_efOut[1];
  real_T yb_efOut[1];
  real_T yd_efOut[1];
  real_T yg_efOut[1];
  real_T yh_efOut[1];
  real_T Condenser_Q_cond;
  real_T Condenser_Q_vap;
  real_T Condenser_thermal_liquid_rho_in;
  real_T Condenser_thermal_liquid_u_in;
  real_T Condenser_thermal_liquid_u_out;
  real_T Condenser_two_phase_fluid_Rth_conv_vap;
  real_T Condenser_two_phase_fluid_T_in;
  real_T Condenser_two_phase_fluid_T_out;
  real_T Condenser_two_phase_fluid_T_sat_liq;
  real_T D_idx_0;
  real_T D_idx_1;
  real_T D_idx_2;
  real_T D_idx_3;
  real_T D_idx_4;
  real_T D_idx_5;
  real_T D_idx_6;
  real_T D_idx_7;
  real_T Fixed_Displacement_Pump_2P_hydraulic_power;
  real_T Local_Restriction_2P1_Dp_threshold;
  real_T Local_Restriction_2P1_convection_A_mdot;
  real_T Local_Restriction_2P1_p_in;
  real_T Local_Restriction_2P_p_avg;
  real_T Mass_Flow_Rate_Source_TL_power;
  real_T Steam_Drum_h_liq;
  real_T Steam_Drum_unorm_liq;
  real_T Steam_Generator_NTU_liq;
  real_T Steam_Generator_Q;
  real_T Steam_Generator_Q_mix;
  real_T Steam_Generator_Rth_mix;
  real_T Steam_Generator_two_phase_fluid_T_out;
  real_T Steam_Generator_two_phase_fluid_mass_liq;
  real_T Steam_Generator_two_phase_fluid_mass_mix;
  real_T Subsystem3_PS_Gain1_O;
  real_T Subsystem3_PS_Gain_O;
  real_T T_idx_0;
  real_T Thermodynamic_Properties_Sensor_2P_V;
  real_T U_idx_0;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T intrm_sf_mf_237;
  real_T intrm_sf_mf_273;
  real_T intrm_sf_mf_282;
  real_T intrm_sf_mf_327;
  real_T intrm_sf_mf_367;
  real_T intrm_sf_mf_511;
  real_T intrm_sf_mf_531;
  real_T intrm_sf_mf_9;
  real_T t1000;
  real_T t1002;
  real_T t1003;
  real_T t1005;
  real_T t1006;
  real_T t1007;
  real_T t1009;
  real_T t1012;
  real_T t1039;
  real_T t1207;
  real_T t1228;
  real_T t1229;
  real_T t1235;
  real_T t1246;
  real_T t1247;
  real_T t1252;
  real_T t699_idx_0;
  real_T t806;
  real_T t808;
  real_T t819;
  real_T t821;
  real_T t823;
  real_T t824;
  real_T t825;
  real_T t826;
  real_T t827;
  real_T t829;
  real_T t831;
  real_T t832;
  real_T t833;
  real_T t835;
  real_T t838;
  real_T t839;
  real_T t840;
  real_T t841;
  real_T t842;
  real_T t843;
  real_T t845;
  real_T t846;
  real_T t847;
  real_T t848;
  real_T t850;
  real_T t851;
  real_T t855;
  real_T t856;
  real_T t857;
  real_T t859;
  real_T t861;
  real_T t862;
  real_T t865;
  real_T t869;
  real_T t870;
  real_T t874;
  real_T t878;
  real_T t879;
  real_T t880;
  real_T t881;
  real_T t882;
  real_T t883;
  real_T t884;
  real_T t886;
  real_T t887;
  real_T t888;
  real_T t889;
  real_T t892;
  real_T t893;
  real_T t894;
  real_T t896;
  real_T t897;
  real_T t898;
  real_T t900;
  real_T t901;
  real_T t902;
  real_T t903;
  real_T t904;
  real_T t905;
  real_T t907;
  real_T t910;
  real_T t911;
  real_T t913;
  real_T t914;
  real_T t922;
  real_T t928;
  real_T t929;
  real_T t931;
  real_T t932;
  real_T t933;
  real_T t934;
  real_T t935;
  real_T t938;
  real_T t939;
  real_T t940;
  real_T t941;
  real_T t942;
  real_T t943;
  real_T t944;
  real_T t945;
  real_T t946;
  real_T t947;
  real_T t949;
  real_T t950;
  real_T t952;
  real_T t954;
  real_T t955;
  real_T t957;
  real_T t958;
  real_T t960;
  real_T t962;
  real_T t963;
  real_T t964;
  real_T t965;
  real_T t967;
  real_T t970;
  real_T t971;
  real_T t972;
  real_T t973;
  real_T t974;
  real_T t976;
  real_T t977;
  real_T t978;
  real_T t979;
  real_T t980;
  real_T t981;
  real_T t982;
  real_T t983;
  real_T t985;
  real_T t987;
  real_T t988;
  real_T t989;
  real_T t993;
  real_T t996;
  real_T t997;
  real_T t999;
  real_T x4_Way_3_Position_Directional_Valve_P_A_Phi_A;
  real_T zc_int1;
  real_T zc_int15;
  real_T zc_int21;
  real_T zc_int32;
  real_T zc_int35;
  real_T zc_int39;
  size_t t111[1];
  size_t t474[1];
  size_t t82[1];
  size_t t83[1];
  size_t t96[1];
  size_t t99[1];
  int32_T M[163];
  int32_T b;
  boolean_T intrm_sf_mf_456;
  boolean_T intrm_sf_mf_460;
  boolean_T intrm_sf_mf_461;
  boolean_T intrm_sf_mf_462;
  boolean_T intrm_sf_mf_463;
  boolean_T intrm_sf_mf_464;
  boolean_T intrm_sf_mf_465;
  boolean_T intrm_sf_mf_466;
  boolean_T intrm_sf_mf_476;
  boolean_T intrm_sf_mf_477;
  boolean_T intrm_sf_mf_478;
  boolean_T intrm_sf_mf_480;
  boolean_T intrm_sf_mf_481;
  boolean_T intrm_sf_mf_482;
  boolean_T intrm_sf_mf_484;
  boolean_T intrm_sf_mf_485;
  boolean_T intrm_sf_mf_495;
  boolean_T intrm_sf_mf_496;
  boolean_T intrm_sf_mf_497;
  boolean_T intrm_sf_mf_50;
  boolean_T intrm_sf_mf_51;
  boolean_T intrm_sf_mf_53;
  boolean_T intrm_sf_mf_54;
  boolean_T intrm_sf_mf_548;
  boolean_T intrm_sf_mf_55;
  boolean_T intrm_sf_mf_57;
  boolean_T intrm_sf_mf_58;
  boolean_T intrm_sf_mf_67;
  boolean_T intrm_sf_mf_68;
  boolean_T intrm_sf_mf_69;
  boolean_T intrm_sf_mf_70;
  for (b = 0; b < 163; b++) {
    M[b] = t1253->mM.mX[b];
  }

  T_idx_0 = t1253->mT.mX[0];
  U_idx_0 = t1253->mU.mX[0];
  U_idx_1 = t1253->mU.mX[1];
  U_idx_2 = t1253->mU.mX[2];
  for (b = 0; b < 222; b++) {
    X[b] = t1253->mX.mX[b];
  }

  D_idx_0 = t1253->mD.mX[0];
  D_idx_1 = t1253->mD.mX[1];
  D_idx_2 = t1253->mD.mX[2];
  D_idx_3 = t1253->mD.mX[3];
  D_idx_4 = t1253->mD.mX[4];
  D_idx_5 = t1253->mD.mX[5];
  D_idx_6 = t1253->mD.mX[6];
  D_idx_7 = t1253->mD.mX[7];
  out = t1254->mLOG;
  t798[0ULL] = X[0ULL];
  t82[0] = 100ULL;
  t83[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t798[0ULL], &t82
    [0ULL], &t83[0ULL]);
  t78 = efOut;
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t78.mField0[0ULL], &t78.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t82[0ULL], &t83[0ULL]);
  t794[0] = b_efOut[0];
  Steam_Drum_h_liq = t794[0ULL];
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t78.mField0[0ULL], &t78.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t82[0ULL], &t83[0ULL]);
  t699_idx_0 = c_efOut[0];
  Steam_Generator_two_phase_fluid_T_out = t699_idx_0;
  t798[0ULL] = X[51ULL];
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t798[0ULL],
    &t82[0ULL], &t83[0ULL]);
  t79 = d_efOut;
  tlu2_1d_linear_linear_value(&e_efOut[0ULL], &t79.mField0[0ULL], &t79.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t82[0ULL], &t83[0ULL]);
  t699_idx_0 = e_efOut[0];
  x4_Way_3_Position_Directional_Valve_P_A_Phi_A = t699_idx_0;
  tlu2_1d_linear_linear_value(&f_efOut[0ULL], &t79.mField0[0ULL], &t79.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t82[0ULL], &t83[0ULL]);
  t699_idx_0 = f_efOut[0];
  if (X[52ULL] <= x4_Way_3_Position_Directional_Valve_P_A_Phi_A) {
    Thermodynamic_Properties_Sensor_2P_V = X[52ULL] /
      (x4_Way_3_Position_Directional_Valve_P_A_Phi_A == 0.0 ? 1.0E-16 :
       x4_Way_3_Position_Directional_Valve_P_A_Phi_A) - 1.0;
  } else if (X[52ULL] >= t699_idx_0) {
    Thermodynamic_Properties_Sensor_2P_V = (X[52ULL] - 4000.0) / (4000.0 -
      t699_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t699_idx_0) + 2.0;
  } else {
    t821 = t699_idx_0 - x4_Way_3_Position_Directional_Valve_P_A_Phi_A;
    Thermodynamic_Properties_Sensor_2P_V = (X[52ULL] -
      x4_Way_3_Position_Directional_Valve_P_A_Phi_A) / (t821 == 0.0 ? 1.0E-16 :
      t821);
  }

  t798[0ULL] = X[3ULL];
  t96[0] = 28ULL;
  tlu2_linear_nearest_prelookup(&g_efOut.mField0[0ULL], &g_efOut.mField1[0ULL],
    &g_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t798[0ULL],
    &t96[0ULL], &t83[0ULL]);
  t71 = g_efOut;
  t798[0ULL] = X[4ULL];
  t99[0] = 27ULL;
  tlu2_linear_nearest_prelookup(&h_efOut.mField0[0ULL], &h_efOut.mField1[0ULL],
    &h_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t798[0ULL],
    &t99[0ULL], &t83[0ULL]);
  t68 = h_efOut;
  tlu2_2d_linear_nearest_value(&i_efOut[0ULL], &t71.mField0[0ULL], &t71.mField2
    [0ULL], &t68.mField0[0ULL], &t68.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField5, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t699_idx_0 = i_efOut[0];
  Condenser_two_phase_fluid_T_out = t699_idx_0;
  t798[0ULL] = X[5ULL];
  tlu2_linear_nearest_prelookup(&j_efOut.mField0[0ULL], &j_efOut.mField1[0ULL],
    &j_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t798[0ULL],
    &t96[0ULL], &t83[0ULL]);
  t76 = j_efOut;
  tlu2_2d_linear_nearest_value(&k_efOut[0ULL], &t76.mField0[0ULL], &t76.mField2
    [0ULL], &t68.mField0[0ULL], &t68.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField5, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t699_idx_0 = k_efOut[0];
  Condenser_two_phase_fluid_T_out = (Condenser_two_phase_fluid_T_out +
    t699_idx_0) / 2.0;
  Condenser_thermal_liquid_rho_in = Condenser_two_phase_fluid_T_out *
    0.11700000000000003 / 0.022;
  t798[0] = 1.0;
  t111[0] = 50ULL;
  tlu2_linear_nearest_prelookup(&l_efOut.mField0[0ULL], &l_efOut.mField1[0ULL],
    &l_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t798[0ULL],
    &t111[0ULL], &t83[0ULL]);
  t62 = l_efOut;
  t794[0ULL] = X[6ULL];
  tlu2_linear_nearest_prelookup(&m_efOut.mField0[0ULL], &m_efOut.mField1[0ULL],
    &m_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t794[0ULL],
    &t82[0ULL], &t83[0ULL]);
  t67 = m_efOut;
  tlu2_2d_linear_nearest_value(&n_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField8, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t699_idx_0 = n_efOut[0];
  Condenser_two_phase_fluid_T_in = t699_idx_0;
  t819 = t699_idx_0 * 0.018849555921538759 / 0.02;
  Condenser_Q_vap = (Condenser_thermal_liquid_rho_in + t819) / 2.0;
  t794[0ULL] = X[3ULL];
  tlu2_linear_linear_prelookup(&o_efOut.mField0[0ULL], &o_efOut.mField1[0ULL],
    &o_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t794[0ULL],
    &t96[0ULL], &t83[0ULL]);
  t75 = o_efOut;
  t794[0ULL] = X[4ULL];
  tlu2_linear_linear_prelookup(&p_efOut.mField0[0ULL], &p_efOut.mField1[0ULL],
    &p_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t794[0ULL],
    &t99[0ULL], &t83[0ULL]);
  t60 = p_efOut;
  tlu2_2d_linear_linear_value(&q_efOut[0ULL], &t75.mField0[0ULL], &t75.mField2
    [0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField9, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t699_idx_0 = q_efOut[0];
  t821 = t699_idx_0;
  t794[0ULL] = X[5ULL];
  tlu2_linear_linear_prelookup(&r_efOut.mField0[0ULL], &r_efOut.mField1[0ULL],
    &r_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t794[0ULL],
    &t96[0ULL], &t83[0ULL]);
  t73 = r_efOut;
  tlu2_2d_linear_linear_value(&s_efOut[0ULL], &t73.mField0[0ULL], &t73.mField2
    [0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField9, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t699_idx_0 = s_efOut[0];
  t821 = (t821 + t699_idx_0) / 2.0;
  Condenser_Q_cond = (X[63ULL] - 10.0) / 2.0;
  t823 = tanh(t821 * Condenser_Q_cond * 3.0 / (Condenser_thermal_liquid_rho_in ==
    0.0 ? 1.0E-16 : Condenser_thermal_liquid_rho_in)) * t821 * Condenser_Q_cond;
  Condenser_thermal_liquid_rho_in = Condenser_Q_vap + t823;
  t794[0ULL] = X[6ULL];
  tlu2_linear_linear_prelookup(&t_efOut.mField0[0ULL], &t_efOut.mField1[0ULL],
    &t_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t794[0ULL],
    &t82[0ULL], &t83[0ULL]);
  t63 = t_efOut;
  tlu2_1d_linear_linear_value(&u_efOut[0ULL], &t63.mField0[0ULL], &t63.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t82[0ULL], &t83[0ULL]);
  t699_idx_0 = u_efOut[0];
  t821 = t699_idx_0;
  tlu2_1d_linear_linear_value(&v_efOut[0ULL], &t63.mField0[0ULL], &t63.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t82[0ULL], &t83[0ULL]);
  t699_idx_0 = v_efOut[0];
  t824 = t699_idx_0;
  if (X[7ULL] <= t821) {
    t825 = X[7ULL] / (t821 == 0.0 ? 1.0E-16 : t821) - 1.0;
  } else if (X[7ULL] >= t699_idx_0) {
    t825 = (X[7ULL] - 4000.0) / (4000.0 - t699_idx_0 == 0.0 ? 1.0E-16 : 4000.0 -
      t699_idx_0) + 2.0;
  } else {
    t808 = t699_idx_0 - t821;
    t825 = (X[7ULL] - t821) / (t808 == 0.0 ? 1.0E-16 : t808);
  }

  intrm_sf_mf_456 = (t825 < 0.0);
  if (X[8ULL] <= t821) {
    t827 = X[8ULL] / (t821 == 0.0 ? 1.0E-16 : t821) - 1.0;
  } else if (X[8ULL] >= t699_idx_0) {
    t827 = (X[8ULL] - 4000.0) / (4000.0 - t699_idx_0 == 0.0 ? 1.0E-16 : 4000.0 -
      t699_idx_0) + 2.0;
  } else {
    t839 = t699_idx_0 - t821;
    t827 = (X[8ULL] - t821) / (t839 == 0.0 ? 1.0E-16 : t839);
  }

  intrm_sf_mf_460 = (t827 < 0.0);
  t794[0ULL] = ((intrm_sf_mf_456 ? t825 : 0.0) + (intrm_sf_mf_460 ? t827 : 0.0))
    / 2.0;
  tlu2_linear_nearest_prelookup(&w_efOut.mField0[0ULL], &w_efOut.mField1[0ULL],
    &w_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t794[0ULL],
    &t111[0ULL], &t83[0ULL]);
  t42 = w_efOut;
  tlu2_2d_linear_nearest_value(&x_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField10, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t699_idx_0 = x_efOut[0];
  t826 = t699_idx_0;
  tlu2_2d_linear_nearest_value(&y_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField8, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t699_idx_0 = y_efOut[0];
  Condenser_two_phase_fluid_T_sat_liq = t699_idx_0;
  tlu2_2d_linear_nearest_value(&ab_efOut[0ULL], &t42.mField0[0ULL],
    &t42.mField2[0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t699_idx_0 = ab_efOut[0];
  t829 = t699_idx_0;
  zc_int39 = t826 * Condenser_two_phase_fluid_T_sat_liq / (t699_idx_0 == 0.0 ?
    1.0E-16 : t699_idx_0);
  t833 = tanh((X[64ULL] - X[65ULL]) * zc_int39 * 3.0 / (t819 == 0.0 ? 1.0E-16 :
    t819));
  t819 = (t833 + 1.0) / 2.0 * (X[64ULL] > 0.0 ? X[64ULL] : 0.0) + (1.0 - t833) /
    2.0 * (X[65ULL] > 0.0 ? X[65ULL] : 0.0);
  t831 = zc_int39 * t819;
  t832 = t831 + Condenser_Q_vap;
  intrm_sf_mf_476 = (t832 <= Condenser_thermal_liquid_rho_in);
  if (intrm_sf_mf_476) {
    t833 = t832 / (Condenser_thermal_liquid_rho_in == 0.0 ? 1.0E-16 :
                   Condenser_thermal_liquid_rho_in);
  } else {
    t833 = Condenser_thermal_liquid_rho_in / (t832 == 0.0 ? 1.0E-16 : t832);
  }

  t808 = X[9ULL] >= 0.0 ? X[9ULL] : 0.0;
  t835 = X[10ULL] >= 0.0 ? X[10ULL] : 0.0;
  zc_int1 = zc_int39 * t835;
  t845 = zc_int1 + X[67ULL];
  t846 = t808 + X[67ULL];
  t806 = t845 / (t846 == 0.0 ? 1.0E-16 : t846);
  if (t806 <= 1.0) {
    t838 = 1.0 - t806 * 0.999999;
  } else {
    t838 = 1.0E-6;
  }

  if (t806 >= 1.0) {
    t839 = t806 * 1.000001 - 1.0;
  } else {
    t839 = 1.0E-6;
  }

  if (zc_int1 + X[67ULL] >= t808 + X[67ULL]) {
    t847 = t808 + X[67ULL];
    t848 = zc_int1 + X[67ULL];
    t840 = (1.000001 / (t847 == 0.0 ? 1.0E-16 : t847) - 0.999999 / (t848 == 0.0 ?
             1.0E-16 : t848)) * X[11ULL];
  } else {
    Condenser_two_phase_fluid_Rth_conv_vap = zc_int1 + X[67ULL];
    t850 = t808 + X[67ULL];
    t840 = (1.000001 / (Condenser_two_phase_fluid_Rth_conv_vap == 0.0 ? 1.0E-16 :
                        Condenser_two_phase_fluid_Rth_conv_vap) - 0.999999 /
            (t850 == 0.0 ? 1.0E-16 : t850)) * X[11ULL];
  }

  zc_int1 = t840 <= 15.0 ? t840 : 15.0;
  t794[0ULL] = t825;
  tlu2_linear_linear_prelookup(&bb_efOut.mField0[0ULL], &bb_efOut.mField1[0ULL],
    &bb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t794[0ULL],
    &t111[0ULL], &t83[0ULL]);
  t51 = bb_efOut;
  tlu2_2d_linear_linear_value(&cb_efOut[0ULL], &t51.mField0[0ULL], &t51.mField2
    [0ULL], &t63.mField0[0ULL], &t63.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t699_idx_0 = cb_efOut[0];
  t840 = t699_idx_0;
  t841 = X[6ULL] * t699_idx_0 * 100.0 + X[7ULL];
  t794[0] = 0.0;
  tlu2_linear_linear_prelookup(&db_efOut.mField0[0ULL], &db_efOut.mField1[0ULL],
    &db_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t794[0ULL],
    &t111[0ULL], &t83[0ULL]);
  t69 = db_efOut;
  tlu2_2d_linear_linear_value(&eb_efOut[0ULL], &t69.mField0[0ULL], &t69.mField2
    [0ULL], &t63.mField0[0ULL], &t63.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t699_idx_0 = eb_efOut[0];
  t842 = t699_idx_0;
  t843 = X[6ULL] * t699_idx_0 * 100.0 + t821;
  t821 = (t843 - t841) / (zc_int39 == 0.0 ? 1.0E-16 : zc_int39);
  t1246 = (1.0 - pmf_exp(-zc_int1)) * X[66ULL];
  t1247 = pmf_exp(-zc_int1) * t839 + t838;
  t1252 = t1246 / (t1247 == 0.0 ? 1.0E-16 : t1247);
  intrm_sf_mf_67 = (t1252 > t821 * 1000.0);
  intrm_sf_mf_51 = (t841 < t843);
  intrm_sf_mf_53 = (t841 > t843);
  tlu2_linear_linear_prelookup(&fb_efOut.mField0[0ULL], &fb_efOut.mField1[0ULL],
    &fb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t798[0ULL],
    &t111[0ULL], &t83[0ULL]);
  t49 = fb_efOut;
  tlu2_2d_linear_linear_value(&gb_efOut[0ULL], &t49.mField0[0ULL], &t49.mField2
    [0ULL], &t63.mField0[0ULL], &t63.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t699_idx_0 = gb_efOut[0];
  t847 = t699_idx_0;
  t848 = X[6ULL] * t699_idx_0 * 100.0 + t824;
  intrm_sf_mf_54 = (t841 > t848);
  intrm_sf_mf_57 = (X[66ULL] < 0.0);
  intrm_sf_mf_58 = (X[66ULL] > 0.0);
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (intrm_sf_mf_67) {
        t855 = X[66ULL] - t838 * t821 * 1000.0;
        t856 = pmf_log((t839 * t821 * 1000.0 + X[66ULL]) / (t855 == 0.0 ?
          1.0E-16 : t855));
        t824 = t856 / (zc_int1 == 0.0 ? 1.0E-16 : zc_int1);
      } else {
        t824 = 1.0;
      }
    } else {
      t824 = 0.0;
    }
  } else {
    t824 = intrm_sf_mf_57 ? intrm_sf_mf_54 ? 0.0 : (real_T)!intrm_sf_mf_53 :
      (real_T)intrm_sf_mf_51;
  }

  intrm_sf_mf_478 = (t825 > 1.0);
  intrm_sf_mf_480 = (t827 > 1.0);
  t798[0ULL] = ((intrm_sf_mf_478 ? t825 : 1.0) + (intrm_sf_mf_480 ? t827 : 1.0))
    / 2.0;
  tlu2_linear_nearest_prelookup(&hb_efOut.mField0[0ULL], &hb_efOut.mField1[0ULL],
    &hb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t798[0ULL],
    &t111[0ULL], &t83[0ULL]);
  t42 = hb_efOut;
  tlu2_2d_linear_nearest_value(&ib_efOut[0ULL], &t42.mField0[0ULL],
    &t42.mField2[0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t699_idx_0 = ib_efOut[0];
  Condenser_two_phase_fluid_Rth_conv_vap = t699_idx_0;
  tlu2_2d_linear_nearest_value(&jb_efOut[0ULL], &t42.mField0[0ULL],
    &t42.mField2[0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t699_idx_0 = jb_efOut[0];
  t850 = t699_idx_0;
  tlu2_2d_linear_nearest_value(&kb_efOut[0ULL], &t42.mField0[0ULL],
    &t42.mField2[0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t699_idx_0 = kb_efOut[0];
  t851 = t699_idx_0;
  t1246 = Condenser_two_phase_fluid_Rth_conv_vap * t850 / (t699_idx_0 == 0.0 ?
    1.0E-16 : t699_idx_0);
  t1247 = t1246 * t835;
  t835 = (X[67ULL] + t1247) / (t846 == 0.0 ? 1.0E-16 : t846);
  if (t835 <= 1.0) {
    t1235 = 1.0 - t835 * 0.999999;
  } else {
    t1235 = 1.0E-6;
  }

  if (t835 >= 1.0) {
    t855 = t835 * 1.000001 - 1.0;
  } else {
    t855 = 1.0E-6;
  }

  if (X[67ULL] + t1247 >= t808 + X[67ULL]) {
    t861 = t808 + X[67ULL];
    t862 = X[67ULL] + t1247;
    t856 = (1.000001 / (t861 == 0.0 ? 1.0E-16 : t861) - 0.999999 / (t862 == 0.0 ?
             1.0E-16 : t862)) * X[12ULL];
  } else {
    Local_Restriction_2P1_p_in = X[67ULL] + t1247;
    Condenser_thermal_liquid_u_in = t808 + X[67ULL];
    t856 = (1.000001 / (Local_Restriction_2P1_p_in == 0.0 ? 1.0E-16 :
                        Local_Restriction_2P1_p_in) - 0.999999 /
            (Condenser_thermal_liquid_u_in == 0.0 ? 1.0E-16 :
             Condenser_thermal_liquid_u_in)) * X[12ULL];
  }

  t808 = t856 <= 15.0 ? t856 : 15.0;
  t1247 = (t848 - t841) / (t1246 == 0.0 ? 1.0E-16 : t1246);
  intrm_sf_mf_50 = (t841 < t848);
  t699_idx_0 = (1.0 - pmf_exp(-t808)) * X[66ULL];
  Condenser_thermal_liquid_u_out = pmf_exp(-t808) * t855 + t1235;
  t856 = t699_idx_0 / (Condenser_thermal_liquid_u_out == 0.0 ? 1.0E-16 :
                       Condenser_thermal_liquid_u_out);
  intrm_sf_mf_68 = (t856 < t1247 * 1000.0);
  intrm_sf_mf_55 = (t841 <= t848);
  if (intrm_sf_mf_58) {
    t857 = intrm_sf_mf_51 ? 0.0 : (real_T)!intrm_sf_mf_50;
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (intrm_sf_mf_68) {
        t869 = X[66ULL] - t1235 * t1247 * 1000.0;
        t870 = pmf_log((t855 * t1247 * 1000.0 + X[66ULL]) / (t869 == 0.0 ?
          1.0E-16 : t869));
        t857 = t870 / (t808 == 0.0 ? 1.0E-16 : t808);
      } else {
        t857 = 1.0;
      }
    } else {
      t857 = 0.0;
    }
  } else {
    t857 = intrm_sf_mf_51 ? 0.0 : (real_T)!intrm_sf_mf_55;
  }

  x4_Way_3_Position_Directional_Valve_P_A_Phi_A = (1.0 - t824) - t857;
  t845 = t845 / (t846 == 0.0 ? 1.0E-16 : t846) / (zc_int39 == 0.0 ? 1.0E-16 :
    zc_int39);
  t859 = X[13ULL] / (t846 == 0.0 ? 1.0E-16 : t846);
  t846 = t859 <= 15.0 ? t859 : 15.0;
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (intrm_sf_mf_67) {
        t859 = (t806 - 1.0) * t821 * 1000.0 + X[66ULL];
      } else {
        t859 = (t806 * t1252 + X[66ULL]) - t821 * 1000.0;
      }
    } else if (intrm_sf_mf_50) {
      t859 = X[66ULL];
    } else {
      t859 = (t835 * t856 + X[66ULL]) - t1247 * 1000.0;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (intrm_sf_mf_68) {
        t859 = (t835 - 1.0) * t1247 * 1000.0 + X[66ULL];
      } else {
        t859 = (t835 * t856 + X[66ULL]) - t1247 * 1000.0;
      }
    } else if (intrm_sf_mf_53) {
      t859 = X[66ULL];
    } else {
      t859 = (t806 * t1252 + X[66ULL]) - t821 * 1000.0;
    }
  } else if (intrm_sf_mf_51) {
    t859 = (t806 * t1252 + X[66ULL]) - t821 * 1000.0;
  } else if (intrm_sf_mf_55) {
    t859 = X[66ULL];
  } else {
    t859 = (t835 * t856 + X[66ULL]) - t1247 * 1000.0;
  }

  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (intrm_sf_mf_67) {
        t861 = t843;
      } else {
        t861 = zc_int39 * t1252 * 0.001 + t841;
      }
    } else if (intrm_sf_mf_50) {
      t861 = t841;
    } else {
      t861 = t1246 * t856 * 0.001 + t841;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (intrm_sf_mf_68) {
        t861 = t848;
      } else {
        t861 = t1246 * t856 * 0.001 + t841;
      }
    } else if (intrm_sf_mf_53) {
      t861 = t841;
    } else {
      t861 = zc_int39 * t1252 * 0.001 + t841;
    }
  } else if (intrm_sf_mf_51) {
    t861 = zc_int39 * t1252 * 0.001 + t841;
  } else if (intrm_sf_mf_55) {
    t861 = t841;
  } else {
    t861 = t1246 * t856 * 0.001 + t841;
  }

  t862 = t843 - t861;
  Local_Restriction_2P1_p_in = t848 - t861;
  t699_idx_0 = (pmf_exp(t846 * x4_Way_3_Position_Directional_Valve_P_A_Phi_A) -
                1.0) * t859;
  Condenser_thermal_liquid_u_in = t699_idx_0 / (t845 == 0.0 ? 1.0E-16 : t845);
  intrm_sf_mf_67 = (Condenser_thermal_liquid_u_in * 0.001 >
                    Local_Restriction_2P1_p_in);
  intrm_sf_mf_68 = (t861 < t848);
  intrm_sf_mf_69 = (Condenser_thermal_liquid_u_in * 0.001 < t862);
  intrm_sf_mf_70 = (t861 > t843);
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_68) {
      if (intrm_sf_mf_67) {
        Local_Restriction_2P_p_avg = t845 * Local_Restriction_2P1_p_in * 1000.0
          + t859;
        t878 = -pmf_log(t859 / (Local_Restriction_2P_p_avg == 0.0 ? 1.0E-16 :
          Local_Restriction_2P_p_avg));
        t861 = t878 / (t846 == 0.0 ? 1.0E-16 : t846);
      } else {
        t861 = x4_Way_3_Position_Directional_Valve_P_A_Phi_A;
      }
    } else {
      t861 = 0.0;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_70) {
      if (intrm_sf_mf_69) {
        t879 = t845 * t862 * 1000.0 + t859;
        t880 = -pmf_log(t859 / (t879 == 0.0 ? 1.0E-16 : t879));
        t861 = t880 / (t846 == 0.0 ? 1.0E-16 : t846);
      } else {
        t861 = x4_Way_3_Position_Directional_Valve_P_A_Phi_A;
      }
    } else {
      t861 = 0.0;
    }
  } else {
    t861 = x4_Way_3_Position_Directional_Valve_P_A_Phi_A;
  }

  t859 = x4_Way_3_Position_Directional_Valve_P_A_Phi_A - t861;
  t862 = t824 + (intrm_sf_mf_58 ? 0.0 : intrm_sf_mf_57 ? t859 : 0.0);
  t824 = t862 >= 0.001 ? t833 : 0.0;
  x4_Way_3_Position_Directional_Valve_P_A_Phi_A = t1246 * t819;
  Local_Restriction_2P1_p_in = Condenser_Q_vap +
    x4_Way_3_Position_Directional_Valve_P_A_Phi_A;
  intrm_sf_mf_481 = (Local_Restriction_2P1_p_in <=
                     Condenser_thermal_liquid_rho_in);
  if (intrm_sf_mf_481) {
    Condenser_Q_vap = Local_Restriction_2P1_p_in /
      (Condenser_thermal_liquid_rho_in == 0.0 ? 1.0E-16 :
       Condenser_thermal_liquid_rho_in);
  } else {
    Condenser_Q_vap = Condenser_thermal_liquid_rho_in /
      (Local_Restriction_2P1_p_in == 0.0 ? 1.0E-16 : Local_Restriction_2P1_p_in);
  }

  t859 = t857 + (intrm_sf_mf_58 ? t859 : 0.0);
  t857 = t859 >= 0.001 ? Condenser_Q_vap : 0.0;
  Condenser_thermal_liquid_u_in = intrm_sf_mf_476 ? t831 : t823;
  t831 = intrm_sf_mf_481 ? x4_Way_3_Position_Directional_Valve_P_A_Phi_A : t823;
  tlu2_2d_linear_nearest_value(&lb_efOut[0ULL], &t71.mField0[0ULL],
    &t71.mField2[0ULL], &t68.mField0[0ULL], &t68.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t699_idx_0 = lb_efOut[0];
  x4_Way_3_Position_Directional_Valve_P_A_Phi_A = t699_idx_0;
  tlu2_2d_linear_nearest_value(&mb_efOut[0ULL], &t76.mField0[0ULL],
    &t76.mField2[0ULL], &t68.mField0[0ULL], &t68.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t699_idx_0 = mb_efOut[0];
  t883 = (x4_Way_3_Position_Directional_Valve_P_A_Phi_A + t699_idx_0) / 2.0 *
    0.11700000000000003;
  Condenser_Q_cond = Condenser_Q_cond * 0.022 / (t883 == 0.0 ? 1.0E-16 : t883);
  x4_Way_3_Position_Directional_Valve_P_A_Phi_A = pmf_sqrt(Condenser_Q_cond *
    Condenser_Q_cond + 100.0);
  Condenser_Q_cond = x4_Way_3_Position_Directional_Valve_P_A_Phi_A *
    35.580755206091233;
  t865 = x4_Way_3_Position_Directional_Valve_P_A_Phi_A * pmf_sqrt
    (x4_Way_3_Position_Directional_Valve_P_A_Phi_A) * pmf_sqrt(pmf_sqrt
    (x4_Way_3_Position_Directional_Valve_P_A_Phi_A)) * 2.0794784986224468;
  if (x4_Way_3_Position_Directional_Valve_P_A_Phi_A > 250000.0) {
    t699_idx_0 = (x4_Way_3_Position_Directional_Valve_P_A_Phi_A - 250000.0) /
      325000.0 + 1.0;
  } else {
    t699_idx_0 = 1.0;
  }

  x4_Way_3_Position_Directional_Valve_P_A_Phi_A = 1.0 - pmf_exp
    (-(x4_Way_3_Position_Directional_Valve_P_A_Phi_A + 200.0) / 1000.0);
  Condenser_thermal_liquid_u_out = t865 * t699_idx_0 *
    x4_Way_3_Position_Directional_Valve_P_A_Phi_A + Condenser_Q_cond;
  tlu2_2d_linear_nearest_value(&nb_efOut[0ULL], &t71.mField0[0ULL],
    &t71.mField2[0ULL], &t68.mField0[0ULL], &t68.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField13, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t699_idx_0 = nb_efOut[0];
  Condenser_Q_cond = t699_idx_0;
  tlu2_2d_linear_nearest_value(&ob_efOut[0ULL], &t76.mField0[0ULL],
    &t76.mField2[0ULL], &t68.mField0[0ULL], &t68.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField13, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t699_idx_0 = ob_efOut[0];
  Condenser_Q_cond = (Condenser_Q_cond + t699_idx_0) / 2.0;
  Condenser_Q_cond = pmf_pow(Condenser_thermal_liquid_u_out * Condenser_Q_cond *
    0.53047999688613334, 0.33333333333333331) * 0.404;
  t888 = Condenser_Q_cond * Condenser_two_phase_fluid_T_out / 0.022 *
    5.1836278784231586;
  Condenser_Q_cond = 1.0 / (t888 == 0.0 ? 1.0E-16 : t888);
  x4_Way_3_Position_Directional_Valve_P_A_Phi_A = t826 > 0.5 ? t826 : 0.5;
  t889 = t819 * 0.02;
  intrm_sf_mf_273 = t829 * 0.018849555921538759;
  t819 = t889 / (intrm_sf_mf_273 == 0.0 ? 1.0E-16 : intrm_sf_mf_273);
  t826 = t819 > 1000.0 ? t819 : 1000.0;
  Mass_Flow_Rate_Source_TL_power = pmf_log10(6.9 / (t826 == 0.0 ? 1.0E-16 : t826)
    + 7.9545220244797035E-5) * pmf_log10(6.9 / (t826 == 0.0 ? 1.0E-16 : t826) +
    7.9545220244797035E-5) * 3.24;
  t829 = 1.0 / (Mass_Flow_Rate_Source_TL_power == 0.0 ? 1.0E-16 :
                Mass_Flow_Rate_Source_TL_power);
  t893 = (pmf_pow(x4_Way_3_Position_Directional_Valve_P_A_Phi_A,
                  0.66666666666666663) - 1.0) * pmf_sqrt(t829 / 8.0) * 12.7 +
    1.0;
  t826 = (t826 - 1000.0) * (t829 / 8.0) *
    x4_Way_3_Position_Directional_Valve_P_A_Phi_A / (t893 == 0.0 ? 1.0E-16 :
    t893);
  t829 = (t819 - 2000.0) / 2000.0;
  x4_Way_3_Position_Directional_Valve_P_A_Phi_A = t829 * t829 * 3.0 - t829 *
    t829 * t829 * 2.0;
  if (t819 <= 2000.0) {
    t829 = 3.66;
  } else if (t819 >= 4000.0) {
    t829 = t826;
  } else {
    t829 = (1.0 - x4_Way_3_Position_Directional_Valve_P_A_Phi_A) * 3.66 + t826 *
      x4_Way_3_Position_Directional_Valve_P_A_Phi_A;
  }

  t896 = Condenser_two_phase_fluid_T_sat_liq * t829 / 0.02 * 5.6548667764616276;
  t826 = Condenser_Q_cond + 1.0 / (t896 == 0.0 ? 1.0E-16 : t896);
  if (intrm_sf_mf_476) {
    t819 = t862 / (t826 == 0.0 ? 1.0E-16 : t826) / (t832 == 0.0 ? 1.0E-16 : t832);
  } else {
    t819 = t862 / (t826 == 0.0 ? 1.0E-16 : t826) /
      (Condenser_thermal_liquid_rho_in == 0.0 ? 1.0E-16 :
       Condenser_thermal_liquid_rho_in);
  }

  t826 = t862 >= 0.001 ? t819 : 0.0;
  tlu2_linear_nearest_prelookup(&pb_efOut.mField0[0ULL], &pb_efOut.mField1[0ULL],
    &pb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t794[0ULL],
    &t111[0ULL], &t83[0ULL]);
  t71 = pb_efOut;
  tlu2_2d_linear_nearest_value(&qb_efOut[0ULL], &t71.mField0[0ULL],
    &t71.mField2[0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = qb_efOut[0];
  Condenser_two_phase_fluid_T_sat_liq = t794[0ULL];
  tlu2_2d_linear_nearest_value(&rb_efOut[0ULL], &t71.mField0[0ULL],
    &t71.mField2[0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = rb_efOut[0];
  t829 = t794[0ULL];
  t900 = t829 * 0.018849555921538759;
  t829 = t889 / (t900 == 0.0 ? 1.0E-16 : t900);
  x4_Way_3_Position_Directional_Valve_P_A_Phi_A = t829 > 1.0 ? t829 : 1.0;
  intrm_sf_mf_484 = (t825 >= 1.0);
  intrm_sf_mf_485 = (t825 <= 0.0);
  t829 = intrm_sf_mf_485 ? 0.0 : intrm_sf_mf_484 ? 1.0 : t825;
  intrm_sf_mf_461 = (t827 >= 1.0);
  intrm_sf_mf_462 = (t827 <= 0.0);
  t865 = intrm_sf_mf_462 ? 0.0 : intrm_sf_mf_461 ? 1.0 : t827;
  if (t865 - t829 > 1.0E-6) {
    t699_idx_0 = t865 - t829;
  } else if (t829 - t865 > 1.0E-6) {
    t699_idx_0 = t829 - t865;
  } else {
    t699_idx_0 = 1.0E-6;
  }

  if (t847 / (t842 == 0.0 ? 1.0E-16 : t842) > 1.000001) {
    Condenser_thermal_liquid_u_out = pmf_sqrt(t847 / (t842 == 0.0 ? 1.0E-16 :
      t842));
  } else {
    Condenser_thermal_liquid_u_out = 1.0000004999998751;
  }

  t900 = t829 <= t865 ? t829 : t865;
  t901 = pmf_pow(x4_Way_3_Position_Directional_Valve_P_A_Phi_A, 0.8) * pmf_pow
    (Condenser_two_phase_fluid_T_sat_liq, 0.33) * 0.05;
  t904 = (pmf_pow((t699_idx_0 + t900) * (Condenser_thermal_liquid_u_out - 1.0) +
                  1.0, 1.8) - pmf_pow((Condenser_thermal_liquid_u_out - 1.0) *
           t900 + 1.0, 1.8)) * (t901 / 1.8 / (Condenser_thermal_liquid_u_out -
    1.0 == 0.0 ? 1.0E-16 : Condenser_thermal_liquid_u_out - 1.0));
  Condenser_two_phase_fluid_T_sat_liq = t904 / (t699_idx_0 == 0.0 ? 1.0E-16 :
    t699_idx_0);
  t829 = Condenser_two_phase_fluid_T_sat_liq > 3.66 ?
    Condenser_two_phase_fluid_T_sat_liq : 3.66;
  tlu2_2d_linear_nearest_value(&sb_efOut[0ULL], &t71.mField0[0ULL],
    &t71.mField2[0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = sb_efOut[0];
  Condenser_two_phase_fluid_T_sat_liq = t794[0ULL];
  t699_idx_0 = t829 * Condenser_two_phase_fluid_T_sat_liq / 0.02 *
    5.6548667764616276;
  t829 = Condenser_Q_cond + 1.0 / (t699_idx_0 == 0.0 ? 1.0E-16 : t699_idx_0);
  Condenser_two_phase_fluid_T_sat_liq = t861 / (t829 == 0.0 ? 1.0E-16 : t829) /
    (Condenser_thermal_liquid_rho_in == 0.0 ? 1.0E-16 :
     Condenser_thermal_liquid_rho_in);
  t829 = t861 >= 0.001 ? Condenser_two_phase_fluid_T_sat_liq : 0.0;
  x4_Way_3_Position_Directional_Valve_P_A_Phi_A =
    Condenser_two_phase_fluid_Rth_conv_vap > 0.5 ?
    Condenser_two_phase_fluid_Rth_conv_vap : 0.5;
  t699_idx_0 = t851 * 0.018849555921538759;
  Condenser_two_phase_fluid_Rth_conv_vap = t889 / (t699_idx_0 == 0.0 ? 1.0E-16 :
    t699_idx_0);
  t851 = Condenser_two_phase_fluid_Rth_conv_vap > 1000.0 ?
    Condenser_two_phase_fluid_Rth_conv_vap : 1000.0;
  t910 = pmf_log10(6.9 / (t851 == 0.0 ? 1.0E-16 : t851) + 7.9545220244797035E-5)
    * pmf_log10(6.9 / (t851 == 0.0 ? 1.0E-16 : t851) + 7.9545220244797035E-5) *
    3.24;
  t865 = 1.0 / (t910 == 0.0 ? 1.0E-16 : t910);
  intrm_sf_mf_531 = (pmf_pow(x4_Way_3_Position_Directional_Valve_P_A_Phi_A,
    0.66666666666666663) - 1.0) * pmf_sqrt(t865 / 8.0) * 12.7 + 1.0;
  t851 = (t851 - 1000.0) * (t865 / 8.0) *
    x4_Way_3_Position_Directional_Valve_P_A_Phi_A / (intrm_sf_mf_531 == 0.0 ?
    1.0E-16 : intrm_sf_mf_531);
  x4_Way_3_Position_Directional_Valve_P_A_Phi_A =
    (Condenser_two_phase_fluid_Rth_conv_vap - 2000.0) / 2000.0;
  t865 = x4_Way_3_Position_Directional_Valve_P_A_Phi_A *
    x4_Way_3_Position_Directional_Valve_P_A_Phi_A * 3.0 -
    x4_Way_3_Position_Directional_Valve_P_A_Phi_A *
    x4_Way_3_Position_Directional_Valve_P_A_Phi_A *
    x4_Way_3_Position_Directional_Valve_P_A_Phi_A * 2.0;
  if (Condenser_two_phase_fluid_Rth_conv_vap <= 2000.0) {
    x4_Way_3_Position_Directional_Valve_P_A_Phi_A = 3.66;
  } else if (Condenser_two_phase_fluid_Rth_conv_vap >= 4000.0) {
    x4_Way_3_Position_Directional_Valve_P_A_Phi_A = t851;
  } else {
    x4_Way_3_Position_Directional_Valve_P_A_Phi_A = (1.0 - t865) * 3.66 + t851 *
      t865;
  }

  t699_idx_0 = t850 * x4_Way_3_Position_Directional_Valve_P_A_Phi_A / 0.02 *
    5.6548667764616276;
  t850 = Condenser_Q_cond + 1.0 / (t699_idx_0 == 0.0 ? 1.0E-16 : t699_idx_0);
  if (intrm_sf_mf_481) {
    Condenser_Q_cond = t859 / (t850 == 0.0 ? 1.0E-16 : t850) /
      (Local_Restriction_2P1_p_in == 0.0 ? 1.0E-16 : Local_Restriction_2P1_p_in);
  } else {
    Condenser_Q_cond = t859 / (t850 == 0.0 ? 1.0E-16 : t850) /
      (Condenser_thermal_liquid_rho_in == 0.0 ? 1.0E-16 :
       Condenser_thermal_liquid_rho_in);
  }

  Condenser_two_phase_fluid_Rth_conv_vap = t859 >= 0.001 ? Condenser_Q_cond :
    0.0;
  if (intrm_sf_mf_476) {
    t850 = t832 / (Condenser_thermal_liquid_rho_in == 0.0 ? 1.0E-16 :
                   Condenser_thermal_liquid_rho_in);
  } else {
    t850 = 1.0;
  }

  intrm_sf_mf_476 = (t819 >= 0.0);
  t832 = intrm_sf_mf_476 ? t819 : -t819;
  t900 = (1.0 - pmf_exp(-t832 * (1.0 - t833 * 0.999))) * (intrm_sf_mf_476 ? 1.0 :
    -1.0);
  t699_idx_0 = 1.0 - pmf_exp(-t832 * (1.0 - t833 * 0.999)) * t833 * 0.999;
  t819 = t900 / (t699_idx_0 == 0.0 ? 1.0E-16 : t699_idx_0);
  t832 = t850 * t819;
  intrm_sf_mf_476 = (Condenser_two_phase_fluid_T_sat_liq >= 0.0);
  t850 = (1.0 - pmf_exp(-(intrm_sf_mf_476 ? Condenser_two_phase_fluid_T_sat_liq :
            -Condenser_two_phase_fluid_T_sat_liq))) * (intrm_sf_mf_476 ? 1.0 :
    -1.0);
  if (intrm_sf_mf_481) {
    Condenser_two_phase_fluid_T_sat_liq = Local_Restriction_2P1_p_in /
      (Condenser_thermal_liquid_rho_in == 0.0 ? 1.0E-16 :
       Condenser_thermal_liquid_rho_in);
  } else {
    Condenser_two_phase_fluid_T_sat_liq = 1.0;
  }

  intrm_sf_mf_476 = (Condenser_Q_cond >= 0.0);
  Condenser_thermal_liquid_rho_in = intrm_sf_mf_476 ? Condenser_Q_cond :
    -Condenser_Q_cond;
  t900 = (1.0 - pmf_exp(-Condenser_thermal_liquid_rho_in * (1.0 -
            Condenser_Q_vap * 0.999))) * (intrm_sf_mf_476 ? 1.0 : -1.0);
  t699_idx_0 = 1.0 - pmf_exp(-Condenser_thermal_liquid_rho_in * (1.0 -
    Condenser_Q_vap * 0.999)) * Condenser_Q_vap * 0.999;
  Condenser_thermal_liquid_rho_in = t900 / (t699_idx_0 == 0.0 ? 1.0E-16 :
    t699_idx_0);
  Condenser_Q_vap = Condenser_two_phase_fluid_T_sat_liq *
    Condenser_thermal_liquid_rho_in;
  Condenser_two_phase_fluid_T_in = 0.0067520278887470758 /
    (Condenser_two_phase_fluid_T_out == 0.0 ? 1.0E-16 :
     Condenser_two_phase_fluid_T_out) + 0.0035367765131532297 /
    (Condenser_two_phase_fluid_T_in == 0.0 ? 1.0E-16 :
     Condenser_two_phase_fluid_T_in);
  t798[0ULL] = t827;
  tlu2_linear_linear_prelookup(&tb_efOut.mField0[0ULL], &tb_efOut.mField1[0ULL],
    &tb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t798[0ULL],
    &t111[0ULL], &t83[0ULL]);
  t42 = tb_efOut;
  tlu2_2d_linear_linear_value(&ub_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], &t63.mField0[0ULL], &t63.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = ub_efOut[0];
  Condenser_two_phase_fluid_T_out = t794[0ULL];
  Condenser_Q_cond = (X[5ULL] - Condenser_two_phase_fluid_T_out) /
    (Condenser_two_phase_fluid_T_in == 0.0 ? 1.0E-16 :
     Condenser_two_phase_fluid_T_in);
  tlu2_2d_linear_linear_value(&vb_efOut[0ULL], &t51.mField0[0ULL], &t51.mField2
    [0ULL], &t63.mField0[0ULL], &t63.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = vb_efOut[0];
  Condenser_two_phase_fluid_T_in = t794[0ULL];
  tlu2_2d_linear_linear_value(&wb_efOut[0ULL], &t69.mField0[0ULL], &t69.mField2
    [0ULL], &t63.mField0[0ULL], &t63.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = wb_efOut[0];
  Condenser_two_phase_fluid_T_sat_liq = t794[0ULL];
  tlu2_2d_linear_linear_value(&xb_efOut[0ULL], &t49.mField0[0ULL], &t49.mField2
    [0ULL], &t63.mField0[0ULL], &t63.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = xb_efOut[0];
  t833 = t794[0ULL];
  t851 = intrm_sf_mf_485 ? Condenser_two_phase_fluid_T_sat_liq : intrm_sf_mf_484
    ? t833 : Condenser_two_phase_fluid_T_in;
  x4_Way_3_Position_Directional_Valve_P_A_Phi_A = intrm_sf_mf_478 ?
    Condenser_two_phase_fluid_T_in : t833;
  tlu2_2d_linear_linear_value(&yb_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], &t63.mField0[0ULL], &t63.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = yb_efOut[0];
  Local_Restriction_2P1_p_in = t794[0ULL];
  t865 = X[6ULL] * Local_Restriction_2P1_p_in * 100.0 + X[8ULL];
  intrm_sf_mf_476 = (t841 - t865 >= 0.0);
  if (intrm_sf_mf_476) {
    t699_idx_0 = X[3ULL];
  } else {
    t699_idx_0 = ((1.0 - t850) * (1.0 - Condenser_Q_vap) * X[3ULL] + (1.0 - t850)
                  * Condenser_Q_vap *
                  x4_Way_3_Position_Directional_Valve_P_A_Phi_A) + t850 * t851;
  }

  Condenser_thermal_liquid_u_out = intrm_sf_mf_456 ?
    Condenser_two_phase_fluid_T_in : Condenser_two_phase_fluid_T_sat_liq;
  t900 = (t699_idx_0 - Condenser_thermal_liquid_u_out) *
    Condenser_thermal_liquid_u_in * t819;
  if (intrm_sf_mf_476) {
    Condenser_thermal_liquid_u_in = (Condenser_thermal_liquid_u_out - X[3ULL]) *
      t832 + X[3ULL];
  } else {
    Condenser_thermal_liquid_u_in =
      (x4_Way_3_Position_Directional_Valve_P_A_Phi_A - X[3ULL]) *
      Condenser_Q_vap + X[3ULL];
  }

  Condenser_Q_vap = (Condenser_thermal_liquid_u_in - t851) * t823 * t850;
  if (intrm_sf_mf_476) {
    t823 = ((1.0 - t850) * (1.0 - t832) * X[3ULL] + (1.0 - t850) * t832 *
            Condenser_thermal_liquid_u_out) + t850 * t851;
  } else {
    t823 = X[3ULL];
  }

  t832 = (t823 - x4_Way_3_Position_Directional_Valve_P_A_Phi_A) * t831 *
    Condenser_thermal_liquid_rho_in;
  t831 = Condenser_Q_cond + ((t900 + Condenser_Q_vap) + t832);
  t823 = Condenser_Q_cond * t862 + t900;
  t851 = Condenser_Q_cond * t861 + Condenser_Q_vap;
  Condenser_Q_vap = Condenser_Q_cond * t859 + t832;
  Condenser_Q_cond = t862 >= 0.001 ? t819 : 0.0;
  t819 = t861 >= 0.001 ? t850 : 0.0;
  t832 = t859 >= 0.001 ? Condenser_thermal_liquid_rho_in : 0.0;
  tlu2_2d_linear_linear_value(&ac_efOut[0ULL], &t75.mField0[0ULL], &t75.mField2
    [0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t794[0] = ac_efOut[0];
  Condenser_thermal_liquid_rho_in = t794[0ULL];
  tlu2_2d_linear_linear_value(&bc_efOut[0ULL], &t73.mField0[0ULL], &t73.mField2
    [0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t794[0] = bc_efOut[0];
  t850 = t794[0ULL];
  tlu2_2d_linear_linear_value(&cc_efOut[0ULL], &t75.mField0[0ULL], &t75.mField2
    [0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField18, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t794[0] = cc_efOut[0];
  Condenser_thermal_liquid_u_in = t794[0ULL];
  tlu2_2d_linear_linear_value(&dc_efOut[0ULL], &t73.mField0[0ULL], &t73.mField2
    [0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField18, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t794[0] = dc_efOut[0];
  Condenser_thermal_liquid_u_out = t794[0ULL];
  t869 = intrm_sf_mf_485 ? t842 : intrm_sf_mf_484 ? t847 : t840;
  t870 = intrm_sf_mf_462 ? t842 : intrm_sf_mf_461 ? t847 :
    Local_Restriction_2P1_p_in;
  t699_idx_0 = t869 <= t870 ? t869 : t870;
  if (t870 / (t869 == 0.0 ? 1.0E-16 : t869) >= 1.000001) {
    t874 = t870 / (t869 == 0.0 ? 1.0E-16 : t869);
  } else if (t869 / (t870 == 0.0 ? 1.0E-16 : t870) >= 1.000001) {
    t874 = t869 / (t870 == 0.0 ? 1.0E-16 : t870);
  } else {
    t874 = 1.000001;
  }

  t900 = pmf_log(t874);
  t869 = t900 / (t874 - 1.0 == 0.0 ? 1.0E-16 : t874 - 1.0) / (t699_idx_0 == 0.0 ?
    1.0E-16 : t699_idx_0);
  t870 = intrm_sf_mf_456 ? t840 : t842;
  t699_idx_0 = intrm_sf_mf_460 ? Local_Restriction_2P1_p_in : t842;
  t870 = (1.0 / (t870 == 0.0 ? 1.0E-16 : t870) + 1.0 / (t699_idx_0 == 0.0 ?
           1.0E-16 : t699_idx_0)) / 2.0 * t862 * 0.028274333882308138;
  t842 = t869 * t861 * 0.028274333882308138;
  t869 = intrm_sf_mf_478 ? t840 : t847;
  t840 = intrm_sf_mf_480 ? Local_Restriction_2P1_p_in : t847;
  t847 = (1.0 / (t869 == 0.0 ? 1.0E-16 : t869) + 1.0 / (t840 == 0.0 ? 1.0E-16 :
           t840)) / 2.0 * t859 * 0.028274333882308138;
  t840 = (t870 + t842) + t847;
  t798[0ULL] = X[57ULL];
  tlu2_linear_linear_prelookup(&ec_efOut.mField0[0ULL], &ec_efOut.mField1[0ULL],
    &ec_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t798[0ULL],
    &t82[0ULL], &t83[0ULL]);
  t76 = ec_efOut;
  tlu2_1d_linear_linear_value(&fc_efOut[0ULL], &t76.mField0[0ULL], &t76.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t82[0ULL], &t83[0ULL]);
  t794[0] = fc_efOut[0];
  Local_Restriction_2P1_p_in = t794[0ULL];
  tlu2_1d_linear_linear_value(&gc_efOut[0ULL], &t76.mField0[0ULL], &t76.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t82[0ULL], &t83[0ULL]);
  t794[0] = gc_efOut[0];
  t869 = t794[0ULL];
  t798[0ULL] = X[61ULL];
  tlu2_linear_linear_prelookup(&hc_efOut.mField0[0ULL], &hc_efOut.mField1[0ULL],
    &hc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t798[0ULL],
    &t82[0ULL], &t83[0ULL]);
  t73 = hc_efOut;
  tlu2_1d_linear_linear_value(&ic_efOut[0ULL], &t73.mField0[0ULL], &t73.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t82[0ULL], &t83[0ULL]);
  t794[0] = ic_efOut[0];
  t699_idx_0 = t794[0ULL];
  tlu2_1d_linear_linear_value(&jc_efOut[0ULL], &t73.mField0[0ULL], &t73.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t82[0ULL], &t83[0ULL]);
  t794[0] = jc_efOut[0];
  t874 = t794[0ULL];
  t870 = t870 * X[14ULL] / (t840 == 0.0 ? 1.0E-16 : t840);
  t842 = t842 * X[14ULL] / (t840 == 0.0 ? 1.0E-16 : t840);
  t847 = t847 * X[14ULL] / (t840 == 0.0 ? 1.0E-16 : t840);
  t840 = U_idx_0 * 1000.0;
  t798[0] = 0.5;
  tlu2_linear_linear_prelookup(&kc_efOut.mField0[0ULL], &kc_efOut.mField1[0ULL],
    &kc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t798[0ULL],
    &t111[0ULL], &t83[0ULL]);
  t60 = kc_efOut;
  t798[0ULL] = (X[61ULL] + X[87ULL]) / 2.0;
  tlu2_linear_linear_prelookup(&lc_efOut.mField0[0ULL], &lc_efOut.mField1[0ULL],
    &lc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t798[0ULL],
    &t82[0ULL], &t83[0ULL]);
  t42 = lc_efOut;
  tlu2_2d_linear_linear_value(&mc_efOut[0ULL], &t60.mField0[0ULL], &t60.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = mc_efOut[0];
  Local_Restriction_2P_p_avg = t794[0ULL];
  t878 = -X[82ULL] - X[89ULL];
  t798[0ULL] = X[87ULL];
  tlu2_linear_linear_prelookup(&nc_efOut.mField0[0ULL], &nc_efOut.mField1[0ULL],
    &nc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t798[0ULL],
    &t82[0ULL], &t83[0ULL]);
  t68 = nc_efOut;
  tlu2_1d_linear_linear_value(&oc_efOut[0ULL], &t68.mField0[0ULL], &t68.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t82[0ULL], &t83[0ULL]);
  t794[0] = oc_efOut[0];
  t879 = t794[0ULL];
  tlu2_1d_linear_linear_value(&pc_efOut[0ULL], &t68.mField0[0ULL], &t68.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t82[0ULL], &t83[0ULL]);
  t794[0] = pc_efOut[0];
  t880 = t794[0ULL];
  t881 = X[87ULL] - X[61ULL];
  t882 = fabs(t881) * 0.018078554672120287;
  if (X[93ULL] <= t699_idx_0) {
    t883 = X[93ULL] / (t699_idx_0 == 0.0 ? 1.0E-16 : t699_idx_0) - 1.0;
  } else if (X[93ULL] >= t874) {
    t883 = (X[93ULL] - 4000.0) / (4000.0 - t874 == 0.0 ? 1.0E-16 : 4000.0 - t874)
      + 2.0;
  } else {
    t941 = t874 - t699_idx_0;
    t883 = (X[93ULL] - t699_idx_0) / (t941 == 0.0 ? 1.0E-16 : t941);
  }

  t798[0ULL] = t883;
  tlu2_linear_linear_prelookup(&qc_efOut.mField0[0ULL], &qc_efOut.mField1[0ULL],
    &qc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t798[0ULL],
    &t111[0ULL], &t83[0ULL]);
  t42 = qc_efOut;
  tlu2_2d_linear_linear_value(&rc_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], &t73.mField0[0ULL], &t73.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = rc_efOut[0];
  t884 = t794[0ULL];
  if (X[94ULL] <= t879) {
    Local_Restriction_2P1_Dp_threshold = X[94ULL] / (t879 == 0.0 ? 1.0E-16 :
      t879) - 1.0;
  } else if (X[94ULL] >= t880) {
    Local_Restriction_2P1_Dp_threshold = (X[94ULL] - 4000.0) / (4000.0 - t880 ==
      0.0 ? 1.0E-16 : 4000.0 - t880) + 2.0;
  } else {
    t946 = t880 - t879;
    Local_Restriction_2P1_Dp_threshold = (X[94ULL] - t879) / (t946 == 0.0 ?
      1.0E-16 : t946);
  }

  t798[0ULL] = Local_Restriction_2P1_Dp_threshold;
  tlu2_linear_linear_prelookup(&sc_efOut.mField0[0ULL], &sc_efOut.mField1[0ULL],
    &sc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t798[0ULL],
    &t111[0ULL], &t83[0ULL]);
  t60 = sc_efOut;
  tlu2_2d_linear_linear_value(&tc_efOut[0ULL], &t60.mField0[0ULL], &t60.mField2
    [0ULL], &t68.mField0[0ULL], &t68.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = tc_efOut[0];
  t886 = t794[0ULL];
  if (X[95ULL] <= t699_idx_0) {
    t887 = X[95ULL] / (t699_idx_0 == 0.0 ? 1.0E-16 : t699_idx_0) - 1.0;
  } else if (X[95ULL] >= t874) {
    t887 = (X[95ULL] - 4000.0) / (4000.0 - t874 == 0.0 ? 1.0E-16 : 4000.0 - t874)
      + 2.0;
  } else {
    Steam_Generator_NTU_liq = t874 - t699_idx_0;
    t887 = (X[95ULL] - t699_idx_0) / (Steam_Generator_NTU_liq == 0.0 ? 1.0E-16 :
      Steam_Generator_NTU_liq);
  }

  t798[0ULL] = t887;
  tlu2_linear_linear_prelookup(&uc_efOut.mField0[0ULL], &uc_efOut.mField1[0ULL],
    &uc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t798[0ULL],
    &t111[0ULL], &t83[0ULL]);
  t42 = uc_efOut;
  tlu2_2d_linear_linear_value(&vc_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], &t73.mField0[0ULL], &t73.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = vc_efOut[0];
  t699_idx_0 = t794[0ULL];
  if (X[96ULL] <= t879) {
    t874 = X[96ULL] / (t879 == 0.0 ? 1.0E-16 : t879) - 1.0;
  } else if (X[96ULL] >= t880) {
    t874 = (X[96ULL] - 4000.0) / (4000.0 - t880 == 0.0 ? 1.0E-16 : 4000.0 - t880)
      + 2.0;
  } else {
    Steam_Generator_Rth_mix = t880 - t879;
    t874 = (X[96ULL] - t879) / (Steam_Generator_Rth_mix == 0.0 ? 1.0E-16 :
      Steam_Generator_Rth_mix);
  }

  t798[0ULL] = t874;
  tlu2_linear_linear_prelookup(&wc_efOut.mField0[0ULL], &wc_efOut.mField1[0ULL],
    &wc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t798[0ULL],
    &t111[0ULL], &t83[0ULL]);
  t42 = wc_efOut;
  tlu2_2d_linear_linear_value(&xc_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], &t68.mField0[0ULL], &t68.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = xc_efOut[0];
  t879 = t794[0ULL];
  t880 = pmf_sqrt(1.0000000000000001E-7 / (Local_Restriction_2P_p_avg == 0.0 ?
    1.0E-16 : Local_Restriction_2P_p_avg) * 4.1209000000000006E-6 / 2.0 *
                  400000.0 + X[92ULL] * X[92ULL]);
  t798[0ULL] = t883;
  tlu2_linear_nearest_prelookup(&yc_efOut.mField0[0ULL], &yc_efOut.mField1[0ULL],
    &yc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t798[0ULL],
    &t111[0ULL], &t83[0ULL]);
  t42 = yc_efOut;
  t798[0ULL] = X[61ULL];
  tlu2_linear_nearest_prelookup(&ad_efOut.mField0[0ULL], &ad_efOut.mField1[0ULL],
    &ad_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t798[0ULL],
    &t82[0ULL], &t83[0ULL]);
  t60 = ad_efOut;
  tlu2_2d_linear_nearest_value(&bd_efOut[0ULL], &t42.mField0[0ULL],
    &t42.mField2[0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = bd_efOut[0];
  Local_Restriction_2P_p_avg = t794[0ULL];
  t798[0ULL] = t874;
  tlu2_linear_nearest_prelookup(&cd_efOut.mField0[0ULL], &cd_efOut.mField1[0ULL],
    &cd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t798[0ULL],
    &t111[0ULL], &t83[0ULL]);
  t42 = cd_efOut;
  t798[0ULL] = X[87ULL];
  tlu2_linear_nearest_prelookup(&dd_efOut.mField0[0ULL], &dd_efOut.mField1[0ULL],
    &dd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t798[0ULL],
    &t82[0ULL], &t83[0ULL]);
  t73 = dd_efOut;
  tlu2_2d_linear_nearest_value(&ed_efOut[0ULL], &t42.mField0[0ULL],
    &t42.mField2[0ULL], &t73.mField0[0ULL], &t73.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = ed_efOut[0];
  t874 = t794[0ULL];
  t874 = (Local_Restriction_2P_p_avg + t874) / 2.0;
  t798[0ULL] = Local_Restriction_2P1_Dp_threshold;
  tlu2_linear_nearest_prelookup(&fd_efOut.mField0[0ULL], &fd_efOut.mField1[0ULL],
    &fd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t798[0ULL],
    &t111[0ULL], &t83[0ULL]);
  t42 = fd_efOut;
  tlu2_2d_linear_nearest_value(&gd_efOut[0ULL], &t42.mField0[0ULL],
    &t42.mField2[0ULL], &t73.mField0[0ULL], &t73.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = gd_efOut[0];
  Local_Restriction_2P_p_avg = t794[0ULL];
  t798[0ULL] = t887;
  tlu2_linear_nearest_prelookup(&hd_efOut.mField0[0ULL], &hd_efOut.mField1[0ULL],
    &hd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t798[0ULL],
    &t111[0ULL], &t83[0ULL]);
  t42 = hd_efOut;
  tlu2_2d_linear_nearest_value(&id_efOut[0ULL], &t42.mField0[0ULL],
    &t42.mField2[0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = id_efOut[0];
  t883 = t794[0ULL];
  Local_Restriction_2P_p_avg = (Local_Restriction_2P_p_avg + t883) / 2.0;
  t874 = (X[92ULL] / (t880 == 0.0 ? 1.0E-16 : t880) + 1.0) * t874 / 2.0 + (1.0 -
    X[92ULL] / (t880 == 0.0 ? 1.0E-16 : t880)) * Local_Restriction_2P_p_avg /
    2.0;
  Local_Restriction_2P_p_avg = t881 * 4.7980657653932072E-15 / (t874 == 0.0 ?
    1.0E-16 : t874);
  Fixed_Displacement_Pump_2P_hydraulic_power = t881 * (624.963582645417 -
    Local_Restriction_2P_p_avg * 1.0E+11);
  t699_idx_0 = (t886 + t699_idx_0) / 2.0;
  t699_idx_0 = (X[92ULL] / (t880 == 0.0 ? 1.0E-16 : t880) + 1.0) * ((t884 + t879)
    / 2.0) / 2.0 + (1.0 - X[92ULL] / (t880 == 0.0 ? 1.0E-16 : t880)) *
    t699_idx_0 / 2.0;
  t874 = Local_Restriction_2P_p_avg / (t699_idx_0 == 0.0 ? 1.0E-16 : t699_idx_0);
  intrm_sf_mf_456 = (X[0ULL] >= 35.0);
  if (intrm_sf_mf_456) {
    zc_int32 = X[0ULL] - 35.0;
  } else {
    zc_int32 = 35.0 - X[0ULL];
  }

  Local_Restriction_2P_p_avg = (X[0ULL] + 35.0) / 2.0;
  t879 = Local_Restriction_2P_p_avg * 0.0010000000000000009;
  if (X[101ULL] <= Steam_Drum_h_liq) {
    t880 = X[101ULL] / (Steam_Drum_h_liq == 0.0 ? 1.0E-16 : Steam_Drum_h_liq) -
      1.0;
  } else if (X[101ULL] >= Steam_Generator_two_phase_fluid_T_out) {
    t880 = (X[101ULL] - 4000.0) / (4000.0 -
      Steam_Generator_two_phase_fluid_T_out == 0.0 ? 1.0E-16 : 4000.0 -
      Steam_Generator_two_phase_fluid_T_out) + 2.0;
  } else {
    Steam_Generator_Q_mix = Steam_Generator_two_phase_fluid_T_out -
      Steam_Drum_h_liq;
    t880 = (X[101ULL] - Steam_Drum_h_liq) / (Steam_Generator_Q_mix == 0.0 ?
      1.0E-16 : Steam_Generator_Q_mix);
  }

  t798[0ULL] = t880;
  tlu2_linear_linear_prelookup(&jd_efOut.mField0[0ULL], &jd_efOut.mField1[0ULL],
    &jd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t798[0ULL],
    &t111[0ULL], &t83[0ULL]);
  t52 = jd_efOut;
  tlu2_2d_linear_linear_value(&kd_efOut[0ULL], &t52.mField0[0ULL], &t52.mField2
    [0ULL], &t78.mField0[0ULL], &t78.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = kd_efOut[0];
  t880 = t794[0ULL];
  if (X[102ULL] <= 1045.1675871910322) {
    t883 = X[102ULL] / 1045.1675871910322 - 1.0;
  } else if (X[102ULL] >= 2602.8601302059533) {
    t883 = (X[102ULL] - 4000.0) / 1397.1398697940467 + 2.0;
  } else {
    t883 = (X[102ULL] - 1045.1675871910322) / 1557.6925430149211;
  }

  t798[0ULL] = t883;
  tlu2_linear_linear_prelookup(&ld_efOut.mField0[0ULL], &ld_efOut.mField1[0ULL],
    &ld_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t798[0ULL],
    &t111[0ULL], &t83[0ULL]);
  t42 = ld_efOut;
  t798[0] = 35.0;
  tlu2_linear_linear_prelookup(&md_efOut.mField0[0ULL], &md_efOut.mField1[0ULL],
    &md_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t798[0ULL],
    &t82[0ULL], &t83[0ULL]);
  t73 = md_efOut;
  tlu2_2d_linear_linear_value(&nd_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], &t73.mField0[0ULL], &t73.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = nd_efOut[0];
  zc_int15 = t794[0ULL];
  zc_int21 = intrm_sf_mf_456 ? t880 : zc_int15;
  if (zc_int21 * 0.0025 / (X[100ULL] == 0.0 ? 1.0E-16 : X[100ULL]) <= 0.0) {
    zc_int15 = 0.0;
  } else if (zc_int21 * 0.0025 / (X[100ULL] == 0.0 ? 1.0E-16 : X[100ULL]) >= 1.0)
  {
    zc_int15 = 1.0;
  } else {
    zc_int15 = zc_int21 * 0.0025 / (X[100ULL] == 0.0 ? 1.0E-16 : X[100ULL]);
  }

  zc_int21 = intrm_sf_mf_456 ? X[0ULL] : 35.0;
  t880 = zc_int32 / (t879 == 0.0 ? 1.0E-16 : t879);
  t883 = t880 * t880 * 3.0 - t880 * t880 * t880 * 2.0;
  intrm_sf_mf_456 = (X[57ULL] <= 32.0);
  if (intrm_sf_mf_456) {
    t880 = 32.0 - X[57ULL];
  } else {
    t880 = X[57ULL] - 32.0;
  }

  t884 = (X[57ULL] + 32.0) / 2.0;
  Local_Restriction_2P1_Dp_threshold = t884 * 0.0010000000000000009;
  if (X[110ULL] <= 1021.2772792641167) {
    t886 = X[110ULL] / 1021.2772792641167 - 1.0;
  } else if (X[110ULL] >= 2603.1447338066746) {
    t886 = (X[110ULL] - 4000.0) / 1396.8552661933254 + 2.0;
  } else {
    t886 = (X[110ULL] - 1021.2772792641167) / 1581.8674545425579;
  }

  t798[0ULL] = t886;
  tlu2_linear_linear_prelookup(&od_efOut.mField0[0ULL], &od_efOut.mField1[0ULL],
    &od_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t798[0ULL],
    &t111[0ULL], &t83[0ULL]);
  t63 = od_efOut;
  t798[0] = 32.0;
  tlu2_linear_linear_prelookup(&pd_efOut.mField0[0ULL], &pd_efOut.mField1[0ULL],
    &pd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t798[0ULL],
    &t82[0ULL], &t83[0ULL]);
  t42 = pd_efOut;
  tlu2_2d_linear_linear_value(&qd_efOut[0ULL], &t63.mField0[0ULL], &t63.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = qd_efOut[0];
  zc_int35 = t794[0ULL];
  if (X[111ULL] <= Local_Restriction_2P1_p_in) {
    Local_Restriction_2P1_convection_A_mdot = X[111ULL] /
      (Local_Restriction_2P1_p_in == 0.0 ? 1.0E-16 : Local_Restriction_2P1_p_in)
      - 1.0;
  } else if (X[111ULL] >= t869) {
    Local_Restriction_2P1_convection_A_mdot = (X[111ULL] - 4000.0) / (4000.0 -
      t869 == 0.0 ? 1.0E-16 : 4000.0 - t869) + 2.0;
  } else {
    t997 = t869 - Local_Restriction_2P1_p_in;
    Local_Restriction_2P1_convection_A_mdot = (X[111ULL] -
      Local_Restriction_2P1_p_in) / (t997 == 0.0 ? 1.0E-16 : t997);
  }

  t798[0ULL] = Local_Restriction_2P1_convection_A_mdot;
  tlu2_linear_linear_prelookup(&rd_efOut.mField0[0ULL], &rd_efOut.mField1[0ULL],
    &rd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t798[0ULL],
    &t111[0ULL], &t83[0ULL]);
  t42 = rd_efOut;
  tlu2_2d_linear_linear_value(&sd_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], &t76.mField0[0ULL], &t76.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = sd_efOut[0];
  Local_Restriction_2P1_convection_A_mdot = t794[0ULL];
  Local_Restriction_2P1_p_in = intrm_sf_mf_456 ? zc_int35 :
    Local_Restriction_2P1_convection_A_mdot;
  if (Local_Restriction_2P1_p_in * 0.00025 / (X[109ULL] == 0.0 ? 1.0E-16 : X
       [109ULL]) <= 0.0) {
    zc_int35 = 0.0;
  } else if (Local_Restriction_2P1_p_in * 0.00025 / (X[109ULL] == 0.0 ? 1.0E-16 :
              X[109ULL]) >= 1.0) {
    zc_int35 = 1.0;
  } else {
    zc_int35 = Local_Restriction_2P1_p_in * 0.00025 / (X[109ULL] == 0.0 ?
      1.0E-16 : X[109ULL]);
  }

  Local_Restriction_2P1_convection_A_mdot = X[64ULL] + X[114ULL];
  Local_Restriction_2P1_p_in = intrm_sf_mf_456 ? 32.0 : X[57ULL];
  t869 = t880 / (Local_Restriction_2P1_Dp_threshold == 0.0 ? 1.0E-16 :
                 Local_Restriction_2P1_Dp_threshold);
  t886 = t869 * t869 * 3.0 - t869 * t869 * t869 * 2.0;
  t869 = -X[128ULL] + X[129ULL];
  t887 = (-X[130ULL] - X[131ULL]) - X[132ULL];
  t888 = (-X[114ULL] - X[129ULL]) + X[128ULL];
  t889 = X[131ULL] + X[132ULL];
  t798[0ULL] = X[139ULL];
  tlu2_linear_linear_prelookup(&td_efOut.mField0[0ULL], &td_efOut.mField1[0ULL],
    &td_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t798[0ULL],
    &t96[0ULL], &t83[0ULL]);
  t73 = td_efOut;
  t798[0ULL] = X[134ULL];
  tlu2_linear_linear_prelookup(&ud_efOut.mField0[0ULL], &ud_efOut.mField1[0ULL],
    &ud_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t798[0ULL],
    &t99[0ULL], &t83[0ULL]);
  t42 = ud_efOut;
  tlu2_2d_linear_linear_value(&vd_efOut[0ULL], &t73.mField0[0ULL], &t73.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t794[0] = vd_efOut[0];
  intrm_sf_mf_273 = t794[0ULL];
  t798[0ULL] = X[141ULL];
  tlu2_linear_linear_prelookup(&wd_efOut.mField0[0ULL], &wd_efOut.mField1[0ULL],
    &wd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t798[0ULL],
    &t96[0ULL], &t83[0ULL]);
  t63 = wd_efOut;
  t798[0ULL] = X[136ULL];
  tlu2_linear_linear_prelookup(&xd_efOut.mField0[0ULL], &xd_efOut.mField1[0ULL],
    &xd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t798[0ULL],
    &t99[0ULL], &t83[0ULL]);
  t75 = xd_efOut;
  tlu2_2d_linear_linear_value(&yd_efOut[0ULL], &t63.mField0[0ULL], &t63.mField2
    [0ULL], &t75.mField0[0ULL], &t75.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t794[0] = yd_efOut[0];
  Mass_Flow_Rate_Source_TL_power = t794[0ULL];
  intrm_sf_mf_273 = (intrm_sf_mf_273 + Mass_Flow_Rate_Source_TL_power) / 2.0;
  Mass_Flow_Rate_Source_TL_power = (X[136ULL] - X[134ULL]) * 3.5 /
    (intrm_sf_mf_273 == 0.0 ? 1.0E-16 : intrm_sf_mf_273);
  t798[0ULL] = X[144ULL];
  tlu2_linear_linear_prelookup(&ae_efOut.mField0[0ULL], &ae_efOut.mField1[0ULL],
    &ae_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t798[0ULL],
    &t96[0ULL], &t83[0ULL]);
  t42 = ae_efOut;
  t798[0] = 2.0;
  tlu2_linear_linear_prelookup(&be_efOut.mField0[0ULL], &be_efOut.mField1[0ULL],
    &be_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t798[0ULL],
    &t99[0ULL], &t83[0ULL]);
  t60 = be_efOut;
  tlu2_2d_linear_linear_value(&ce_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t794[0] = ce_efOut[0];
  intrm_sf_mf_273 = t794[0ULL];
  t798[0ULL] = X[146ULL];
  tlu2_linear_linear_prelookup(&de_efOut.mField0[0ULL], &de_efOut.mField1[0ULL],
    &de_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t798[0ULL],
    &t96[0ULL], &t83[0ULL]);
  t52 = de_efOut;
  t798[0ULL] = X[60ULL];
  tlu2_linear_linear_prelookup(&ee_efOut.mField0[0ULL], &ee_efOut.mField1[0ULL],
    &ee_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t798[0ULL],
    &t99[0ULL], &t83[0ULL]);
  t75 = ee_efOut;
  tlu2_2d_linear_linear_value(&fe_efOut[0ULL], &t52.mField0[0ULL], &t52.mField2
    [0ULL], &t75.mField0[0ULL], &t75.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t794[0] = fe_efOut[0];
  t892 = t794[0ULL];
  intrm_sf_mf_273 = (intrm_sf_mf_273 + t892) / 2.0;
  t892 = (X[60ULL] - 2.0) * 10.0 / (intrm_sf_mf_273 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_273);
  t798[0ULL] = X[16ULL];
  tlu2_linear_nearest_prelookup(&ge_efOut.mField0[0ULL], &ge_efOut.mField1[0ULL],
    &ge_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t798[0ULL],
    &t96[0ULL], &t83[0ULL]);
  t76 = ge_efOut;
  t798[0ULL] = X[15ULL];
  tlu2_linear_nearest_prelookup(&he_efOut.mField0[0ULL], &he_efOut.mField1[0ULL],
    &he_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t798[0ULL],
    &t99[0ULL], &t83[0ULL]);
  t50 = he_efOut;
  tlu2_2d_linear_nearest_value(&ie_efOut[0ULL], &t76.mField0[0ULL],
    &t76.mField2[0ULL], &t50.mField0[0ULL], &t50.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t794[0] = ie_efOut[0];
  intrm_sf_mf_273 = t794[0ULL];
  t798[0ULL] = X[16ULL];
  tlu2_linear_linear_prelookup(&je_efOut.mField0[0ULL], &je_efOut.mField1[0ULL],
    &je_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t798[0ULL],
    &t96[0ULL], &t83[0ULL]);
  t70 = je_efOut;
  t798[0ULL] = X[15ULL];
  tlu2_linear_linear_prelookup(&ke_efOut.mField0[0ULL], &ke_efOut.mField1[0ULL],
    &ke_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t798[0ULL],
    &t99[0ULL], &t83[0ULL]);
  t67 = ke_efOut;
  tlu2_2d_linear_linear_value(&le_efOut[0ULL], &t70.mField0[0ULL], &t70.mField2
    [0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t794[0] = le_efOut[0];
  t893 = t794[0ULL];
  tlu2_2d_linear_linear_value(&me_efOut[0ULL], &t70.mField0[0ULL], &t70.mField2
    [0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField18, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t794[0] = me_efOut[0];
  t894 = t794[0ULL];
  t798[0ULL] = X[18ULL];
  tlu2_linear_nearest_prelookup(&ne_efOut.mField0[0ULL], &ne_efOut.mField1[0ULL],
    &ne_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t798[0ULL],
    &t96[0ULL], &t83[0ULL]);
  t63 = ne_efOut;
  t798[0ULL] = X[17ULL];
  tlu2_linear_nearest_prelookup(&oe_efOut.mField0[0ULL], &oe_efOut.mField1[0ULL],
    &oe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t798[0ULL],
    &t99[0ULL], &t83[0ULL]);
  t42 = oe_efOut;
  tlu2_2d_linear_nearest_value(&pe_efOut[0ULL], &t63.mField0[0ULL],
    &t63.mField2[0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t794[0] = pe_efOut[0];
  t896 = t794[0ULL];
  t798[0ULL] = X[18ULL];
  tlu2_linear_linear_prelookup(&qe_efOut.mField0[0ULL], &qe_efOut.mField1[0ULL],
    &qe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t798[0ULL],
    &t96[0ULL], &t83[0ULL]);
  t42 = qe_efOut;
  t798[0ULL] = X[17ULL];
  tlu2_linear_linear_prelookup(&re_efOut.mField0[0ULL], &re_efOut.mField1[0ULL],
    &re_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t798[0ULL],
    &t99[0ULL], &t83[0ULL]);
  t63 = re_efOut;
  tlu2_2d_linear_linear_value(&se_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], &t63.mField0[0ULL], &t63.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t794[0] = se_efOut[0];
  t897 = t794[0ULL];
  tlu2_2d_linear_linear_value(&te_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], &t63.mField0[0ULL], &t63.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField18, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t794[0] = te_efOut[0];
  t898 = t794[0ULL];
  t901 = -X[165ULL] + X[120ULL];
  t902 = -X[166ULL] + X[122ULL];
  t798[0ULL] = X[20ULL];
  tlu2_linear_nearest_prelookup(&ue_efOut.mField0[0ULL], &ue_efOut.mField1[0ULL],
    &ue_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t798[0ULL],
    &t96[0ULL], &t83[0ULL]);
  t63 = ue_efOut;
  t798[0ULL] = X[19ULL];
  tlu2_linear_nearest_prelookup(&ve_efOut.mField0[0ULL], &ve_efOut.mField1[0ULL],
    &ve_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t798[0ULL],
    &t99[0ULL], &t83[0ULL]);
  t42 = ve_efOut;
  tlu2_2d_linear_nearest_value(&we_efOut[0ULL], &t63.mField0[0ULL],
    &t63.mField2[0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t794[0] = we_efOut[0];
  t903 = t794[0ULL];
  t798[0ULL] = X[20ULL];
  tlu2_linear_linear_prelookup(&xe_efOut.mField0[0ULL], &xe_efOut.mField1[0ULL],
    &xe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t798[0ULL],
    &t96[0ULL], &t83[0ULL]);
  t75 = xe_efOut;
  t798[0ULL] = X[19ULL];
  tlu2_linear_linear_prelookup(&ye_efOut.mField0[0ULL], &ye_efOut.mField1[0ULL],
    &ye_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t798[0ULL],
    &t99[0ULL], &t83[0ULL]);
  t50 = ye_efOut;
  tlu2_2d_linear_linear_value(&af_efOut[0ULL], &t75.mField0[0ULL], &t75.mField2
    [0ULL], &t50.mField0[0ULL], &t50.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t794[0] = af_efOut[0];
  t904 = t794[0ULL];
  tlu2_2d_linear_linear_value(&bf_efOut[0ULL], &t75.mField0[0ULL], &t75.mField2
    [0ULL], &t50.mField0[0ULL], &t50.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField18, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t794[0] = bf_efOut[0];
  t905 = t794[0ULL];
  t907 = U_idx_1 * 1000.0;
  t798[0ULL] = X[21ULL];
  tlu2_linear_linear_prelookup(&cf_efOut.mField0[0ULL], &cf_efOut.mField1[0ULL],
    &cf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t798[0ULL],
    &t82[0ULL], &t83[0ULL]);
  t75 = cf_efOut;
  tlu2_1d_linear_linear_value(&df_efOut[0ULL], &t75.mField0[0ULL], &t75.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t82[0ULL], &t83[0ULL]);
  t794[0] = df_efOut[0];
  t910 = t794[0ULL];
  tlu2_1d_linear_linear_value(&ef_efOut[0ULL], &t75.mField0[0ULL], &t75.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t82[0ULL], &t83[0ULL]);
  t794[0] = ef_efOut[0];
  t911 = t794[0ULL];
  if (X[22ULL] <= t910) {
    intrm_sf_mf_531 = X[22ULL] / (t910 == 0.0 ? 1.0E-16 : t910) - 1.0;
  } else if (X[22ULL] >= t911) {
    intrm_sf_mf_531 = (X[22ULL] - 4000.0) / (4000.0 - t911 == 0.0 ? 1.0E-16 :
      4000.0 - t911) + 2.0;
  } else {
    t699_idx_0 = t911 - t910;
    intrm_sf_mf_531 = (X[22ULL] - t910) / (t699_idx_0 == 0.0 ? 1.0E-16 :
      t699_idx_0);
  }

  t910 = -X[172ULL] + X[55ULL];
  t798[0ULL] = intrm_sf_mf_531;
  tlu2_linear_linear_prelookup(&ff_efOut.mField0[0ULL], &ff_efOut.mField1[0ULL],
    &ff_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t798[0ULL],
    &t111[0ULL], &t83[0ULL]);
  t68 = ff_efOut;
  tlu2_2d_linear_linear_value(&gf_efOut[0ULL], &t68.mField0[0ULL], &t68.mField2
    [0ULL], &t75.mField0[0ULL], &t75.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = gf_efOut[0];
  t911 = t794[0ULL];
  t913 = -X[173ULL] + X[53ULL];
  tlu2_2d_linear_linear_value(&hf_efOut[0ULL], &t68.mField0[0ULL], &t68.mField2
    [0ULL], &t75.mField0[0ULL], &t75.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = hf_efOut[0];
  t914 = t794[0ULL];
  t922 = -X[65ULL] - X[92ULL];
  t928 = ((-X[81ULL] + X[112ULL]) + X[131ULL]) + X[132ULL];
  t929 = X[57ULL] / (X[126ULL] == 0.0 ? 1.0E-16 : X[126ULL]);
  if (t929 <= 0.0) {
    Steam_Drum_unorm_liq = 0.0;
  } else {
    Steam_Drum_unorm_liq = t929 >= 1.0 ? 1.0 : t929;
  }

  t798[0ULL] = X[126ULL];
  tlu2_linear_linear_prelookup(&if_efOut.mField0[0ULL], &if_efOut.mField1[0ULL],
    &if_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t798[0ULL],
    &t82[0ULL], &t83[0ULL]);
  t68 = if_efOut;
  tlu2_1d_linear_linear_value(&jf_efOut[0ULL], &t68.mField0[0ULL], &t68.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t82[0ULL], &t83[0ULL]);
  t794[0] = jf_efOut[0];
  t929 = t794[0ULL];
  tlu2_1d_linear_linear_value(&kf_efOut[0ULL], &t68.mField0[0ULL], &t68.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t82[0ULL], &t83[0ULL]);
  t794[0] = kf_efOut[0];
  t931 = t794[0ULL];
  if (X[127ULL] <= t929) {
    t932 = X[127ULL] / (t929 == 0.0 ? 1.0E-16 : t929) - 1.0;
  } else if (X[127ULL] >= t931) {
    t932 = (X[127ULL] - 4000.0) / (4000.0 - t931 == 0.0 ? 1.0E-16 : 4000.0 -
      t931) + 2.0;
  } else {
    t900 = t931 - t929;
    t932 = (X[127ULL] - t929) / (t900 == 0.0 ? 1.0E-16 : t900);
  }

  t929 = X[126ULL] - X[57ULL] > 0.01 ? (1.0 - Steam_Drum_unorm_liq) * 500.0 /
    0.7142857142857143 * 0.75 : 0.0;
  if (X[26ULL] < Steam_Drum_h_liq) {
    Steam_Drum_unorm_liq = X[26ULL] / (Steam_Drum_h_liq == 0.0 ? 1.0E-16 :
      Steam_Drum_h_liq) - 1.0;
  } else {
    Steam_Drum_unorm_liq = 0.0;
  }

  if (X[27ULL] > Steam_Generator_two_phase_fluid_T_out) {
    t931 = (X[27ULL] - 4000.0) / (4000.0 - Steam_Generator_two_phase_fluid_T_out
      == 0.0 ? 1.0E-16 : 4000.0 - Steam_Generator_two_phase_fluid_T_out) + 2.0;
  } else {
    t931 = 1.0;
  }

  t798[0ULL] = Steam_Drum_unorm_liq;
  t474[0] = 25ULL;
  tlu2_linear_linear_prelookup(&lf_efOut.mField0[0ULL], &lf_efOut.mField1[0ULL],
    &lf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t798[0ULL],
    &t474[0ULL], &t83[0ULL]);
  t70 = lf_efOut;
  tlu2_2d_linear_linear_value(&mf_efOut[0ULL], &t70.mField0[0ULL], &t70.mField2
    [0ULL], &t78.mField0[0ULL], &t78.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t474[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = mf_efOut[0];
  t933 = t794[0ULL];
  t798[0ULL] = t931;
  tlu2_linear_linear_prelookup(&nf_efOut.mField0[0ULL], &nf_efOut.mField1[0ULL],
    &nf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t798[0ULL],
    &t474[0ULL], &t83[0ULL]);
  t42 = nf_efOut;
  tlu2_2d_linear_linear_value(&of_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], &t78.mField0[0ULL], &t78.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField31, &t474[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = of_efOut[0];
  t934 = t794[0ULL];
  t1039 = X[28ULL] * t933 + X[29ULL] * t934;
  t935 = X[28ULL] * t933 / (t1039 == 0.0 ? 1.0E-16 : t1039);
  t1039 = X[28ULL] + X[29ULL];
  tlu2_2d_linear_linear_value(&pf_efOut[0ULL], &t69.mField0[0ULL], &t69.mField2
    [0ULL], &t78.mField0[0ULL], &t78.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = pf_efOut[0];
  t938 = t794[0ULL];
  t939 = X[0ULL] * t938 * 100.0 + Steam_Drum_h_liq;
  tlu2_2d_linear_linear_value(&qf_efOut[0ULL], &t49.mField0[0ULL], &t49.mField2
    [0ULL], &t78.mField0[0ULL], &t78.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = qf_efOut[0];
  t938 = t794[0ULL];
  t940 = X[0ULL] * t938 * 100.0 + Steam_Generator_two_phase_fluid_T_out;
  if (X[188ULL] <= Steam_Drum_h_liq) {
    t938 = X[188ULL] / (Steam_Drum_h_liq == 0.0 ? 1.0E-16 : Steam_Drum_h_liq) -
      1.0;
  } else if (X[188ULL] >= Steam_Generator_two_phase_fluid_T_out) {
    t938 = (X[188ULL] - 4000.0) / (4000.0 -
      Steam_Generator_two_phase_fluid_T_out == 0.0 ? 1.0E-16 : 4000.0 -
      Steam_Generator_two_phase_fluid_T_out) + 2.0;
  } else {
    t900 = Steam_Generator_two_phase_fluid_T_out - Steam_Drum_h_liq;
    t938 = (X[188ULL] - Steam_Drum_h_liq) / (t900 == 0.0 ? 1.0E-16 : t900);
  }

  Steam_Drum_h_liq = X[0ULL] * t933 * 100.0 + X[26ULL];
  if (X[28ULL] > 0.0) {
    if (t940 > t939) {
      if (Steam_Drum_h_liq < t939) {
        Steam_Generator_two_phase_fluid_T_out = 0.0;
      } else if (Steam_Drum_h_liq > t940) {
        Steam_Generator_two_phase_fluid_T_out = X[28ULL] / 0.1;
      } else {
        t1228 = t940 - t939;
        Steam_Generator_two_phase_fluid_T_out = (Steam_Drum_h_liq - t939) * X
          [28ULL] / (t1228 == 0.0 ? 1.0E-16 : t1228) / 0.1;
      }
    } else {
      Steam_Generator_two_phase_fluid_T_out = 0.0;
    }
  } else {
    Steam_Generator_two_phase_fluid_T_out = 0.0;
  }

  t941 = X[0ULL] * t934 * 100.0 + X[27ULL];
  if (X[29ULL] > 0.0) {
    if (t940 > t939) {
      if (t941 < t939) {
        t942 = X[29ULL] / 0.1;
      } else if (t941 > t940) {
        t942 = 0.0;
      } else {
        t1228 = t940 - t939;
        t942 = (t940 - t941) * X[29ULL] / (t1228 == 0.0 ? 1.0E-16 : t1228) / 0.1;
      }
    } else {
      t942 = 0.0;
    }
  } else {
    t942 = 0.0;
  }

  t798[0ULL] = Steam_Drum_unorm_liq;
  tlu2_linear_linear_prelookup(&rf_efOut.mField0[0ULL], &rf_efOut.mField1[0ULL],
    &rf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t798[0ULL],
    &t111[0ULL], &t83[0ULL]);
  t42 = rf_efOut;
  tlu2_2d_linear_linear_value(&sf_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], &t78.mField0[0ULL], &t78.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = sf_efOut[0];
  Steam_Drum_unorm_liq = t794[0ULL];
  t798[0ULL] = t931;
  tlu2_linear_linear_prelookup(&tf_efOut.mField0[0ULL], &tf_efOut.mField1[0ULL],
    &tf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t798[0ULL],
    &t111[0ULL], &t83[0ULL]);
  t42 = tf_efOut;
  tlu2_2d_linear_linear_value(&uf_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], &t78.mField0[0ULL], &t78.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = uf_efOut[0];
  t931 = t794[0ULL];
  tlu2_2d_linear_linear_value(&vf_efOut[0ULL], &t69.mField0[0ULL], &t69.mField2
    [0ULL], &t78.mField0[0ULL], &t78.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = vf_efOut[0];
  t943 = t794[0ULL];
  tlu2_2d_linear_linear_value(&wf_efOut[0ULL], &t49.mField0[0ULL], &t49.mField2
    [0ULL], &t78.mField0[0ULL], &t78.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = wf_efOut[0];
  t944 = t794[0ULL];
  t945 = Steam_Generator_two_phase_fluid_T_out - t942;
  t798[0ULL] = X[30ULL];
  tlu2_linear_nearest_prelookup(&xf_efOut.mField0[0ULL], &xf_efOut.mField1[0ULL],
    &xf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t798[0ULL],
    &t96[0ULL], &t83[0ULL]);
  t76 = xf_efOut;
  t798[0ULL] = X[31ULL];
  tlu2_linear_nearest_prelookup(&yf_efOut.mField0[0ULL], &yf_efOut.mField1[0ULL],
    &yf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t798[0ULL],
    &t99[0ULL], &t83[0ULL]);
  t75 = yf_efOut;
  tlu2_2d_linear_nearest_value(&ag_efOut[0ULL], &t76.mField0[0ULL],
    &t76.mField2[0ULL], &t75.mField0[0ULL], &t75.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField5, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t794[0] = ag_efOut[0];
  Steam_Generator_two_phase_fluid_T_out = t794[0ULL];
  t798[0ULL] = X[32ULL];
  tlu2_linear_nearest_prelookup(&bg_efOut.mField0[0ULL], &bg_efOut.mField1[0ULL],
    &bg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t798[0ULL],
    &t96[0ULL], &t83[0ULL]);
  t51 = bg_efOut;
  tlu2_2d_linear_nearest_value(&cg_efOut[0ULL], &t51.mField0[0ULL],
    &t51.mField2[0ULL], &t75.mField0[0ULL], &t75.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField5, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t794[0] = cg_efOut[0];
  t942 = t794[0ULL];
  Steam_Generator_two_phase_fluid_T_out = (Steam_Generator_two_phase_fluid_T_out
    + t942) / 2.0;
  t942 = Steam_Generator_two_phase_fluid_T_out * 0.42000000000000004 / 0.018;
  t798[0ULL] = X[33ULL];
  tlu2_linear_nearest_prelookup(&dg_efOut.mField0[0ULL], &dg_efOut.mField1[0ULL],
    &dg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t798[0ULL],
    &t82[0ULL], &t83[0ULL]);
  t63 = dg_efOut;
  tlu2_2d_linear_nearest_value(&eg_efOut[0ULL], &t62.mField0[0ULL],
    &t62.mField2[0ULL], &t63.mField0[0ULL], &t63.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = eg_efOut[0];
  t946 = t794[0ULL];
  t947 = t946 * 0.036815538909255395 / 0.025;
  t997 = (t942 + t947) / 2.0;
  t798[0ULL] = X[30ULL];
  tlu2_linear_linear_prelookup(&fg_efOut.mField0[0ULL], &fg_efOut.mField1[0ULL],
    &fg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t798[0ULL],
    &t96[0ULL], &t83[0ULL]);
  t52 = fg_efOut;
  t798[0ULL] = X[31ULL];
  tlu2_linear_linear_prelookup(&gg_efOut.mField0[0ULL], &gg_efOut.mField1[0ULL],
    &gg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t798[0ULL],
    &t99[0ULL], &t83[0ULL]);
  t60 = gg_efOut;
  tlu2_2d_linear_linear_value(&hg_efOut[0ULL], &t52.mField0[0ULL], &t52.mField2
    [0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField9, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t794[0] = hg_efOut[0];
  t949 = t794[0ULL];
  t798[0ULL] = X[32ULL];
  tlu2_linear_linear_prelookup(&ig_efOut.mField0[0ULL], &ig_efOut.mField1[0ULL],
    &ig_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t798[0ULL],
    &t96[0ULL], &t83[0ULL]);
  t67 = ig_efOut;
  tlu2_2d_linear_linear_value(&jg_efOut[0ULL], &t67.mField0[0ULL], &t67.mField2
    [0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField9, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t794[0] = jg_efOut[0];
  t950 = t794[0ULL];
  t949 = (t949 + t950) / 2.0;
  t950 = (X[166ULL] - -3.5) / 2.0;
  Steam_Generator_NTU_liq = tanh(t949 * t950 * 3.0 / (t942 == 0.0 ? 1.0E-16 :
    t942)) * t949 * t950;
  t942 = t997 + Steam_Generator_NTU_liq;
  t798[0ULL] = X[33ULL];
  tlu2_linear_linear_prelookup(&kg_efOut.mField0[0ULL], &kg_efOut.mField1[0ULL],
    &kg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t798[0ULL],
    &t82[0ULL], &t83[0ULL]);
  t62 = kg_efOut;
  tlu2_1d_linear_linear_value(&lg_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t82[0ULL], &t83[0ULL]);
  t794[0] = lg_efOut[0];
  t949 = t794[0ULL];
  tlu2_1d_linear_linear_value(&mg_efOut[0ULL], &t62.mField0[0ULL], &t62.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t82[0ULL], &t83[0ULL]);
  t794[0] = mg_efOut[0];
  t952 = t794[0ULL];
  if (X[34ULL] <= t949) {
    intrm_sf_mf_9 = X[34ULL] / (t949 == 0.0 ? 1.0E-16 : t949) - 1.0;
  } else if (X[34ULL] >= t952) {
    intrm_sf_mf_9 = (X[34ULL] - 4000.0) / (4000.0 - t952 == 0.0 ? 1.0E-16 :
      4000.0 - t952) + 2.0;
  } else {
    t900 = t952 - t949;
    intrm_sf_mf_9 = (X[34ULL] - t949) / (t900 == 0.0 ? 1.0E-16 : t900);
  }

  intrm_sf_mf_456 = (intrm_sf_mf_9 < 0.0);
  if (X[35ULL] <= t949) {
    t955 = X[35ULL] / (t949 == 0.0 ? 1.0E-16 : t949) - 1.0;
  } else if (X[35ULL] >= t952) {
    t955 = (X[35ULL] - 4000.0) / (4000.0 - t952 == 0.0 ? 1.0E-16 : 4000.0 - t952)
      + 2.0;
  } else {
    t900 = t952 - t949;
    t955 = (X[35ULL] - t949) / (t900 == 0.0 ? 1.0E-16 : t900);
  }

  intrm_sf_mf_460 = (t955 < 0.0);
  t798[0ULL] = ((intrm_sf_mf_456 ? intrm_sf_mf_9 : 0.0) + (intrm_sf_mf_460 ?
    t955 : 0.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&ng_efOut.mField0[0ULL], &ng_efOut.mField1[0ULL],
    &ng_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t798[0ULL],
    &t111[0ULL], &t83[0ULL]);
  t50 = ng_efOut;
  tlu2_2d_linear_nearest_value(&og_efOut[0ULL], &t50.mField0[0ULL],
    &t50.mField2[0ULL], &t63.mField0[0ULL], &t63.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = og_efOut[0];
  t954 = t794[0ULL];
  tlu2_2d_linear_nearest_value(&pg_efOut[0ULL], &t50.mField0[0ULL],
    &t50.mField2[0ULL], &t63.mField0[0ULL], &t63.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = pg_efOut[0];
  Steam_Generator_Rth_mix = t794[0ULL];
  tlu2_2d_linear_nearest_value(&qg_efOut[0ULL], &t50.mField0[0ULL],
    &t50.mField2[0ULL], &t63.mField0[0ULL], &t63.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = qg_efOut[0];
  t957 = t794[0ULL];
  t958 = t954 * Steam_Generator_Rth_mix / (t957 == 0.0 ? 1.0E-16 : t957);
  if (-X[192ULL] > 0.0) {
    t960 = -X[192ULL];
  } else {
    t960 = 0.0;
  }

  t962 = tanh((X[172ULL] - (-X[192ULL])) * t958 * 3.0 / (t947 == 0.0 ? 1.0E-16 :
    t947));
  t947 = (t962 + 1.0) / 2.0 * (X[172ULL] > 0.0 ? X[172ULL] : 0.0) + (1.0 - t962)
    / 2.0 * t960;
  Steam_Generator_Q = t958 * t947;
  t960 = Steam_Generator_Q + t997;
  t962 = X[37ULL] >= 0.0 ? X[37ULL] : 0.0;
  t963 = X[38ULL] >= 0.0 ? X[38ULL] : 0.0;
  t1207 = t962 + X[198ULL];
  t1228 = (t962 + X[198ULL]) * (1.0 - pmf_exp(-X[36ULL] / (t1207 == 0.0 ?
    1.0E-16 : t1207)));
  t1229 = t958 * t963 + X[198ULL];
  t964 = t1228 / (t1229 == 0.0 ? 1.0E-16 : t1229);
  t965 = t964 <= 15.0 ? t964 : 15.0;
  t798[0ULL] = intrm_sf_mf_9;
  tlu2_linear_linear_prelookup(&rg_efOut.mField0[0ULL], &rg_efOut.mField1[0ULL],
    &rg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t798[0ULL],
    &t111[0ULL], &t83[0ULL]);
  t73 = rg_efOut;
  tlu2_2d_linear_linear_value(&sg_efOut[0ULL], &t73.mField0[0ULL], &t73.mField2
    [0ULL], &t62.mField0[0ULL], &t62.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = sg_efOut[0];
  t964 = t794[0ULL];
  t967 = X[33ULL] * t964 * 100.0 + X[34ULL];
  tlu2_2d_linear_linear_value(&tg_efOut[0ULL], &t69.mField0[0ULL], &t69.mField2
    [0ULL], &t62.mField0[0ULL], &t62.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = tg_efOut[0];
  Steam_Generator_two_phase_fluid_mass_mix = t794[0ULL];
  t970 = X[33ULL] * Steam_Generator_two_phase_fluid_mass_mix * 100.0 + t949;
  t949 = (t970 - t967) / (t958 == 0.0 ? 1.0E-16 : t958);
  t971 = (1.0 - pmf_exp(-t965)) * X[197ULL];
  intrm_sf_mf_476 = (t971 > t949 * 1000.0);
  intrm_sf_mf_478 = (t967 < t970);
  intrm_sf_mf_480 = (t967 > t970);
  tlu2_2d_linear_linear_value(&ug_efOut[0ULL], &t49.mField0[0ULL], &t49.mField2
    [0ULL], &t62.mField0[0ULL], &t62.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = ug_efOut[0];
  t972 = t794[0ULL];
  t973 = X[33ULL] * t972 * 100.0 + t952;
  intrm_sf_mf_481 = (t967 > t973);
  intrm_sf_mf_484 = (X[197ULL] < 0.0);
  intrm_sf_mf_485 = (X[197ULL] > 0.0);
  if (intrm_sf_mf_485) {
    if (intrm_sf_mf_478) {
      if (intrm_sf_mf_476) {
        t900 = -pmf_log((X[197ULL] - t949 * 1000.0) / (X[197ULL] == 0.0 ?
          1.0E-16 : X[197ULL]));
        t952 = t900 / (t965 == 0.0 ? 1.0E-16 : t965);
      } else {
        t952 = 1.0;
      }
    } else {
      t952 = 0.0;
    }
  } else {
    t952 = intrm_sf_mf_484 ? intrm_sf_mf_481 ? 0.0 : (real_T)!intrm_sf_mf_480 :
      (real_T)intrm_sf_mf_478;
  }

  intrm_sf_mf_461 = (intrm_sf_mf_9 > 1.0);
  intrm_sf_mf_462 = (t955 > 1.0);
  t798[0ULL] = ((intrm_sf_mf_461 ? intrm_sf_mf_9 : 1.0) + (intrm_sf_mf_462 ?
    t955 : 1.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&vg_efOut.mField0[0ULL], &vg_efOut.mField1[0ULL],
    &vg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t798[0ULL],
    &t111[0ULL], &t83[0ULL]);
  t42 = vg_efOut;
  tlu2_2d_linear_nearest_value(&wg_efOut[0ULL], &t42.mField0[0ULL],
    &t42.mField2[0ULL], &t63.mField0[0ULL], &t63.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = wg_efOut[0];
  t974 = t794[0ULL];
  tlu2_2d_linear_nearest_value(&xg_efOut[0ULL], &t42.mField0[0ULL],
    &t42.mField2[0ULL], &t63.mField0[0ULL], &t63.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = xg_efOut[0];
  Steam_Generator_Q_mix = t794[0ULL];
  tlu2_2d_linear_nearest_value(&yg_efOut[0ULL], &t42.mField0[0ULL],
    &t42.mField2[0ULL], &t63.mField0[0ULL], &t63.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = yg_efOut[0];
  t976 = t794[0ULL];
  t977 = t974 * Steam_Generator_Q_mix / (t976 == 0.0 ? 1.0E-16 : t976);
  t900 = (t962 + X[198ULL]) * (1.0 - pmf_exp(-X[39ULL] / (t1207 == 0.0 ? 1.0E-16
    : t1207)));
  t1228 = X[198ULL] + t977 * t963;
  t963 = t900 / (t1228 == 0.0 ? 1.0E-16 : t1228);
  t978 = t963 <= 15.0 ? t963 : 15.0;
  t963 = (t973 - t967) / (t977 == 0.0 ? 1.0E-16 : t977);
  intrm_sf_mf_477 = (t967 < t973);
  t979 = (1.0 - pmf_exp(-t978)) * X[197ULL];
  intrm_sf_mf_495 = (t979 < t963 * 1000.0);
  intrm_sf_mf_482 = (t967 <= t973);
  if (intrm_sf_mf_485) {
    t980 = intrm_sf_mf_478 ? 0.0 : (real_T)!intrm_sf_mf_477;
  } else if (intrm_sf_mf_484) {
    if (intrm_sf_mf_481) {
      if (intrm_sf_mf_495) {
        t900 = -pmf_log((X[197ULL] - t963 * 1000.0) / (X[197ULL] == 0.0 ?
          1.0E-16 : X[197ULL]));
        t980 = t900 / (t978 == 0.0 ? 1.0E-16 : t978);
      } else {
        t980 = 1.0;
      }
    } else {
      t980 = 0.0;
    }
  } else {
    t980 = intrm_sf_mf_478 ? 0.0 : (real_T)!intrm_sf_mf_482;
  }

  t981 = (1.0 - t952) - t980;
  t900 = (t962 + X[198ULL]) * (1.0 - pmf_exp(-X[40ULL] / (t1207 == 0.0 ? 1.0E-16
    : t1207)));
  t1207 = t1229 / (t958 == 0.0 ? 1.0E-16 : t958);
  t962 = t900 / (t1207 == 0.0 ? 1.0E-16 : t1207);
  if (intrm_sf_mf_485) {
    if (intrm_sf_mf_478) {
      t982 = X[197ULL] - t949 * 1000.0;
    } else if (intrm_sf_mf_477) {
      t982 = X[197ULL];
    } else {
      t982 = X[197ULL] - t963 * 1000.0;
    }
  } else if (intrm_sf_mf_484) {
    if (intrm_sf_mf_481) {
      t982 = X[197ULL] - t963 * 1000.0;
    } else if (intrm_sf_mf_480) {
      t982 = X[197ULL];
    } else {
      t982 = X[197ULL] - t949 * 1000.0;
    }
  } else if (intrm_sf_mf_478) {
    t982 = t949 * 1000.0 + X[197ULL];
  } else if (intrm_sf_mf_482) {
    t982 = X[197ULL];
  } else {
    t982 = t963 * 1000.0 + X[197ULL];
  }

  if (intrm_sf_mf_485) {
    if (intrm_sf_mf_478) {
      if (intrm_sf_mf_476) {
        t983 = t970;
      } else {
        t983 = t958 * t971 * 0.001 + t967;
      }
    } else if (intrm_sf_mf_477) {
      t983 = t967;
    } else {
      t983 = t977 * t979 * 0.001 + t967;
    }
  } else if (intrm_sf_mf_484) {
    if (intrm_sf_mf_481) {
      if (intrm_sf_mf_495) {
        t983 = t973;
      } else {
        t983 = t977 * t979 * 0.001 + t967;
      }
    } else if (intrm_sf_mf_480) {
      t983 = t967;
    } else {
      t983 = t958 * t971 * 0.001 + t967;
    }
  } else if (intrm_sf_mf_478) {
    t983 = t958 * t971 * 0.001 + t967;
  } else if (intrm_sf_mf_482) {
    t983 = t967;
  } else {
    t983 = t977 * t979 * 0.001 + t967;
  }

  intrm_sf_mf_511 = t970 - t983;
  t985 = t973 - t983;
  t900 = t962 * t982 * t981;
  intrm_sf_mf_476 = (t900 * 0.001 > t985);
  intrm_sf_mf_495 = (t983 < t973);
  intrm_sf_mf_496 = (t900 * 0.001 < intrm_sf_mf_511);
  intrm_sf_mf_497 = (t983 > t970);
  if (intrm_sf_mf_485) {
    if (intrm_sf_mf_495) {
      if (intrm_sf_mf_476) {
        t983 = t985 / (t982 == 0.0 ? 1.0E-16 : t982) / (t962 == 0.0 ? 1.0E-16 :
          t962) * 1000.0;
      } else {
        t983 = t981;
      }
    } else {
      t983 = 0.0;
    }
  } else if (intrm_sf_mf_484) {
    if (intrm_sf_mf_497) {
      if (intrm_sf_mf_496) {
        t983 = intrm_sf_mf_511 / (t982 == 0.0 ? 1.0E-16 : t982) / (t962 == 0.0 ?
          1.0E-16 : t962) * 1000.0;
      } else {
        t983 = t981;
      }
    } else {
      t983 = 0.0;
    }
  } else {
    t983 = t981;
  }

  intrm_sf_mf_511 = t981 - t983;
  t985 = t952 + (intrm_sf_mf_485 ? 0.0 : intrm_sf_mf_484 ? intrm_sf_mf_511 : 0.0);
  intrm_sf_mf_463 = (t960 <= t942 * t985);
  if (intrm_sf_mf_463) {
    t1229 = t942 * t985;
    t952 = t960 / (t1229 == 0.0 ? 1.0E-16 : t1229);
  } else {
    t952 = t942 * t985 / (t960 == 0.0 ? 1.0E-16 : t960);
  }

  t981 = t985 >= 0.001 ? t952 : 0.0;
  t900 = t977 * t947;
  t987 = t997 + t900;
  intrm_sf_mf_511 = t980 + (intrm_sf_mf_485 ? intrm_sf_mf_511 : 0.0);
  intrm_sf_mf_548 = (t987 <= t942 * intrm_sf_mf_511);
  if (intrm_sf_mf_548) {
    t1229 = t942 * intrm_sf_mf_511;
    t997 = t987 / (t1229 == 0.0 ? 1.0E-16 : t1229);
  } else {
    t997 = t942 * intrm_sf_mf_511 / (t987 == 0.0 ? 1.0E-16 : t987);
  }

  t980 = intrm_sf_mf_511 >= 0.001 ? t997 : 0.0;
  if (Steam_Generator_Q <= Steam_Generator_NTU_liq * t985) {
    t988 = Steam_Generator_Q;
  } else {
    t988 = Steam_Generator_NTU_liq * t985;
  }

  Steam_Generator_Q = Steam_Generator_NTU_liq * t983;
  if (t900 <= Steam_Generator_NTU_liq * intrm_sf_mf_511) {
    t989 = t900;
  } else {
    t989 = Steam_Generator_NTU_liq * intrm_sf_mf_511;
  }

  tlu2_2d_linear_nearest_value(&ah_efOut[0ULL], &t76.mField0[0ULL],
    &t76.mField2[0ULL], &t75.mField0[0ULL], &t75.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t794[0] = ah_efOut[0];
  Steam_Generator_NTU_liq = t794[0ULL];
  tlu2_2d_linear_nearest_value(&bh_efOut[0ULL], &t51.mField0[0ULL],
    &t51.mField2[0ULL], &t75.mField0[0ULL], &t75.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t794[0] = bh_efOut[0];
  t900 = t794[0ULL];
  Steam_Generator_NTU_liq = (Steam_Generator_NTU_liq + t900) / 2.0;
  t1207 = Steam_Generator_NTU_liq * 0.42000000000000004;
  t950 = t950 * 0.018 / (t1207 == 0.0 ? 1.0E-16 : t1207);
  Steam_Generator_NTU_liq = pmf_sqrt(t950 * t950 + 100.0);
  t950 = Steam_Generator_NTU_liq * 29.915749795368463;
  t900 = Steam_Generator_NTU_liq * pmf_sqrt(Steam_Generator_NTU_liq) * pmf_sqrt
    (pmf_sqrt(Steam_Generator_NTU_liq)) * 1.996694297036971;
  if (Steam_Generator_NTU_liq > 250000.0) {
    t699_idx_0 = (Steam_Generator_NTU_liq - 250000.0) / 325000.0 + 1.0;
  } else {
    t699_idx_0 = 1.0;
  }

  Steam_Generator_NTU_liq = 1.0 - pmf_exp(-(Steam_Generator_NTU_liq + 200.0) /
    1000.0);
  x4_Way_3_Position_Directional_Valve_P_A_Phi_A = t900 * t699_idx_0 *
    Steam_Generator_NTU_liq + t950;
  tlu2_2d_linear_nearest_value(&ch_efOut[0ULL], &t76.mField0[0ULL],
    &t76.mField2[0ULL], &t75.mField0[0ULL], &t75.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField13, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t794[0] = ch_efOut[0];
  t950 = t794[0ULL];
  tlu2_2d_linear_nearest_value(&dh_efOut[0ULL], &t51.mField0[0ULL],
    &t51.mField2[0ULL], &t75.mField0[0ULL], &t75.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField13, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t794[0] = dh_efOut[0];
  Steam_Generator_NTU_liq = t794[0ULL];
  t950 = (t950 + Steam_Generator_NTU_liq) / 2.0;
  t950 = pmf_pow(x4_Way_3_Position_Directional_Valve_P_A_Phi_A * t950 *
                 0.55399065447813123, 0.33333333333333331) * 0.404;
  t1229 = t950 * Steam_Generator_two_phase_fluid_T_out / 0.018 *
    23.750440461138837;
  t950 = 1.0 / (t1229 == 0.0 ? 1.0E-16 : t1229);
  Steam_Generator_NTU_liq = t954 > 0.5 ? t954 : 0.5;
  t1229 = t947 * 0.025;
  t1207 = t957 * 0.036815538909255395;
  t947 = t1229 / (t1207 == 0.0 ? 1.0E-16 : t1207);
  t954 = t947 > 1000.0 ? t947 : 1000.0;
  t1207 = pmf_log10(6.9 / (t954 == 0.0 ? 1.0E-16 : t954) + 6.2093190311196615E-5)
    * pmf_log10(6.9 / (t954 == 0.0 ? 1.0E-16 : t954) + 6.2093190311196615E-5) *
    3.24;
  t957 = 1.0 / (t1207 == 0.0 ? 1.0E-16 : t1207);
  t1228 = (pmf_pow(Steam_Generator_NTU_liq, 0.66666666666666663) - 1.0) *
    pmf_sqrt(t957 / 8.0) * 12.7 + 1.0;
  Steam_Generator_NTU_liq = (t954 - 1000.0) * (t957 / 8.0) *
    Steam_Generator_NTU_liq / (t1228 == 0.0 ? 1.0E-16 : t1228);
  t954 = (t947 - 2000.0) / 2000.0;
  t957 = t954 * t954 * 3.0 - t954 * t954 * t954 * 2.0;
  if (t947 <= 2000.0) {
    t954 = 3.66;
  } else if (t947 >= 4000.0) {
    t954 = Steam_Generator_NTU_liq;
  } else {
    t954 = (1.0 - t957) * 3.66 + Steam_Generator_NTU_liq * t957;
  }

  t1207 = Steam_Generator_Rth_mix * t954 / 0.025 * 41.233403578366037;
  Steam_Generator_NTU_liq = t950 + 1.0 / (t1207 == 0.0 ? 1.0E-16 : t1207);
  if (intrm_sf_mf_463) {
    t947 = t985 / (Steam_Generator_NTU_liq == 0.0 ? 1.0E-16 :
                   Steam_Generator_NTU_liq) / (t960 == 0.0 ? 1.0E-16 : t960);
  } else {
    t947 = 1.0 / (Steam_Generator_NTU_liq == 0.0 ? 1.0E-16 :
                  Steam_Generator_NTU_liq) / (t942 == 0.0 ? 1.0E-16 : t942);
  }

  Steam_Generator_NTU_liq = t985 >= 0.001 ? t947 : 0.0;
  tlu2_2d_linear_nearest_value(&eh_efOut[0ULL], &t71.mField0[0ULL],
    &t71.mField2[0ULL], &t63.mField0[0ULL], &t63.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = eh_efOut[0];
  t954 = t794[0ULL];
  tlu2_2d_linear_nearest_value(&fh_efOut[0ULL], &t71.mField0[0ULL],
    &t71.mField2[0ULL], &t63.mField0[0ULL], &t63.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = fh_efOut[0];
  Steam_Generator_Rth_mix = t794[0ULL];
  t1207 = Steam_Generator_Rth_mix * 0.036815538909255395;
  Steam_Generator_Rth_mix = t1229 / (t1207 == 0.0 ? 1.0E-16 : t1207);
  t957 = Steam_Generator_Rth_mix > 1.0 ? Steam_Generator_Rth_mix : 1.0;
  intrm_sf_mf_463 = (intrm_sf_mf_9 >= 1.0);
  intrm_sf_mf_464 = (intrm_sf_mf_9 <= 0.0);
  Steam_Generator_Rth_mix = intrm_sf_mf_464 ? 0.0 : intrm_sf_mf_463 ? 1.0 :
    intrm_sf_mf_9;
  intrm_sf_mf_465 = (t955 >= 1.0);
  intrm_sf_mf_466 = (t955 <= 0.0);
  t900 = intrm_sf_mf_466 ? 0.0 : intrm_sf_mf_465 ? 1.0 : t955;
  if (t900 - Steam_Generator_Rth_mix > 1.0E-6) {
    t699_idx_0 = t900 - Steam_Generator_Rth_mix;
  } else if (Steam_Generator_Rth_mix - t900 > 1.0E-6) {
    t699_idx_0 = Steam_Generator_Rth_mix - t900;
  } else {
    t699_idx_0 = 1.0E-6;
  }

  if (t972 / (Steam_Generator_two_phase_fluid_mass_mix == 0.0 ? 1.0E-16 :
              Steam_Generator_two_phase_fluid_mass_mix) > 1.000001) {
    x4_Way_3_Position_Directional_Valve_P_A_Phi_A = pmf_sqrt(t972 /
      (Steam_Generator_two_phase_fluid_mass_mix == 0.0 ? 1.0E-16 :
       Steam_Generator_two_phase_fluid_mass_mix));
  } else {
    x4_Way_3_Position_Directional_Valve_P_A_Phi_A = 1.0000004999998751;
  }

  Steam_Generator_two_phase_fluid_mass_liq = Steam_Generator_Rth_mix <= t900 ?
    Steam_Generator_Rth_mix : t900;
  t1207 = pmf_pow(t957, 0.8) * pmf_pow(t954, 0.33) * 0.05;
  t900 = (pmf_pow((t699_idx_0 + Steam_Generator_two_phase_fluid_mass_liq) *
                  (x4_Way_3_Position_Directional_Valve_P_A_Phi_A - 1.0) + 1.0,
                  1.8) - pmf_pow((x4_Way_3_Position_Directional_Valve_P_A_Phi_A
            - 1.0) * Steam_Generator_two_phase_fluid_mass_liq + 1.0, 1.8)) *
    (t1207 / 1.8 / (x4_Way_3_Position_Directional_Valve_P_A_Phi_A - 1.0 == 0.0 ?
                    1.0E-16 : x4_Way_3_Position_Directional_Valve_P_A_Phi_A -
                    1.0));
  t954 = t900 / (t699_idx_0 == 0.0 ? 1.0E-16 : t699_idx_0);
  Steam_Generator_Rth_mix = t954 > 3.66 ? t954 : 3.66;
  tlu2_2d_linear_nearest_value(&gh_efOut[0ULL], &t71.mField0[0ULL],
    &t71.mField2[0ULL], &t63.mField0[0ULL], &t63.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = gh_efOut[0];
  t954 = t794[0ULL];
  t1207 = Steam_Generator_Rth_mix * t954 / 0.025 * 41.233403578366037;
  Steam_Generator_Rth_mix = t950 + 1.0 / (t1207 == 0.0 ? 1.0E-16 : t1207);
  t954 = 1.0 / (Steam_Generator_Rth_mix == 0.0 ? 1.0E-16 :
                Steam_Generator_Rth_mix) / (t942 == 0.0 ? 1.0E-16 : t942);
  Steam_Generator_Rth_mix = t983 >= 0.001 ? t954 : 0.0;
  t957 = t974 > 0.5 ? t974 : 0.5;
  t1207 = t976 * 0.036815538909255395;
  t974 = t1229 / (t1207 == 0.0 ? 1.0E-16 : t1207);
  t976 = t974 > 1000.0 ? t974 : 1000.0;
  t1229 = pmf_log10(6.9 / (t976 == 0.0 ? 1.0E-16 : t976) + 6.2093190311196615E-5)
    * pmf_log10(6.9 / (t976 == 0.0 ? 1.0E-16 : t976) + 6.2093190311196615E-5) *
    3.24;
  t900 = 1.0 / (t1229 == 0.0 ? 1.0E-16 : t1229);
  t1207 = (pmf_pow(t957, 0.66666666666666663) - 1.0) * pmf_sqrt(t900 / 8.0) *
    12.7 + 1.0;
  t957 = (t976 - 1000.0) * (t900 / 8.0) * t957 / (t1207 == 0.0 ? 1.0E-16 : t1207);
  t976 = (t974 - 2000.0) / 2000.0;
  t900 = t976 * t976 * 3.0 - t976 * t976 * t976 * 2.0;
  if (t974 <= 2000.0) {
    t976 = 3.66;
  } else if (t974 >= 4000.0) {
    t976 = t957;
  } else {
    t976 = (1.0 - t900) * 3.66 + t957 * t900;
  }

  t1229 = Steam_Generator_Q_mix * t976 / 0.025 * 41.233403578366037;
  t974 = t950 + 1.0 / (t1229 == 0.0 ? 1.0E-16 : t1229);
  if (intrm_sf_mf_548) {
    t950 = intrm_sf_mf_511 / (t974 == 0.0 ? 1.0E-16 : t974) / (t987 == 0.0 ?
      1.0E-16 : t987);
  } else {
    t950 = 1.0 / (t974 == 0.0 ? 1.0E-16 : t974) / (t942 == 0.0 ? 1.0E-16 : t942);
  }

  t957 = intrm_sf_mf_511 >= 0.001 ? t950 : 0.0;
  t946 = 0.0012631344689832964 / (Steam_Generator_two_phase_fluid_T_out == 0.0 ?
    1.0E-16 : Steam_Generator_two_phase_fluid_T_out) + 0.00060630454511198225 /
    (t946 == 0.0 ? 1.0E-16 : t946);
  t798[0ULL] = t955;
  tlu2_linear_linear_prelookup(&hh_efOut.mField0[0ULL], &hh_efOut.mField1[0ULL],
    &hh_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t798[0ULL],
    &t111[0ULL], &t83[0ULL]);
  t42 = hh_efOut;
  tlu2_2d_linear_linear_value(&ih_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], &t62.mField0[0ULL], &t62.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = ih_efOut[0];
  Steam_Generator_two_phase_fluid_T_out = t794[0ULL];
  t974 = (X[32ULL] - Steam_Generator_two_phase_fluid_T_out) / (t946 == 0.0 ?
    1.0E-16 : t946);
  intrm_sf_mf_548 = (t947 >= 0.0);
  t946 = intrm_sf_mf_548 ? t947 : -t947;
  t947 = intrm_sf_mf_548 ? 1.0 : -1.0;
  t1229 = (1.0 - pmf_exp(-(1.0 - pmf_exp(-t946)) * (t952 + 0.001))) * t947;
  t976 = t1229 / (t952 + 0.001 == 0.0 ? 1.0E-16 : t952 + 0.001);
  Steam_Generator_Q_mix = t952 * t946 + 0.001;
  t1229 = -t946 * (1.0 - pmf_exp(-Steam_Generator_Q_mix));
  t946 = (1.0 - pmf_exp(t1229 / (Steam_Generator_Q_mix == 0.0 ? 1.0E-16 :
            Steam_Generator_Q_mix))) * t947;
  t947 = t960 <= t942 * t985 ? t976 : t946;
  tlu2_2d_linear_linear_value(&jh_efOut[0ULL], &t73.mField0[0ULL], &t73.mField2
    [0ULL], &t62.mField0[0ULL], &t62.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = jh_efOut[0];
  t946 = t794[0ULL];
  tlu2_2d_linear_linear_value(&kh_efOut[0ULL], &t69.mField0[0ULL], &t69.mField2
    [0ULL], &t62.mField0[0ULL], &t62.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = kh_efOut[0];
  t952 = t794[0ULL];
  Steam_Generator_Q_mix = (X[30ULL] - (intrm_sf_mf_456 ? t946 : t952)) * t988 *
    t947;
  tlu2_2d_linear_linear_value(&lh_efOut[0ULL], &t49.mField0[0ULL], &t49.mField2
    [0ULL], &t62.mField0[0ULL], &t62.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = lh_efOut[0];
  t960 = t794[0ULL];
  intrm_sf_mf_548 = (t954 >= 0.0);
  t988 = (1.0 - pmf_exp(-(intrm_sf_mf_548 ? t954 : -t954))) * (intrm_sf_mf_548 ?
    1.0 : -1.0);
  t954 = (X[30ULL] - (intrm_sf_mf_464 ? t952 : intrm_sf_mf_463 ? t960 : t946)) *
    Steam_Generator_Q * t988;
  intrm_sf_mf_548 = (t950 >= 0.0);
  Steam_Generator_Q = intrm_sf_mf_548 ? t950 : -t950;
  t950 = intrm_sf_mf_548 ? 1.0 : -1.0;
  t1229 = (1.0 - pmf_exp(-(1.0 - pmf_exp(-Steam_Generator_Q)) * (t997 + 0.001)))
    * t950;
  t900 = t1229 / (t997 + 0.001 == 0.0 ? 1.0E-16 : t997 + 0.001);
  t976 = t997 * Steam_Generator_Q + 0.001;
  t1229 = -Steam_Generator_Q * (1.0 - pmf_exp(-t976));
  t997 = (1.0 - pmf_exp(t1229 / (t976 == 0.0 ? 1.0E-16 : t976))) * t950;
  t950 = t987 <= t942 * intrm_sf_mf_511 ? t900 : t997;
  t997 = (X[30ULL] - (intrm_sf_mf_461 ? t946 : t960)) * t989 * t950;
  Steam_Generator_Q = t974 + ((Steam_Generator_Q_mix + t954) + t997);
  t942 = t974 * t985 + Steam_Generator_Q_mix;
  Steam_Generator_Q_mix = t974 * t983 + t954;
  t954 = t974 * intrm_sf_mf_511 + t997;
  t974 = intrm_sf_mf_511 >= 0.001 ? t950 : 0.0;
  tlu2_2d_linear_linear_value(&mh_efOut[0ULL], &t52.mField0[0ULL], &t52.mField2
    [0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t794[0] = mh_efOut[0];
  t950 = t794[0ULL];
  tlu2_2d_linear_linear_value(&nh_efOut[0ULL], &t67.mField0[0ULL], &t67.mField2
    [0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t794[0] = nh_efOut[0];
  t976 = t794[0ULL];
  tlu2_2d_linear_linear_value(&oh_efOut[0ULL], &t52.mField0[0ULL], &t52.mField2
    [0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField18, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t794[0] = oh_efOut[0];
  t987 = t794[0ULL];
  tlu2_2d_linear_linear_value(&ph_efOut[0ULL], &t67.mField0[0ULL], &t67.mField2
    [0ULL], &t60.mField0[0ULL], &t60.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField18, &t96[0ULL], &t99[0ULL], &t83[0ULL]);
  t794[0] = ph_efOut[0];
  t989 = t794[0ULL];
  x4_Way_3_Position_Directional_Valve_P_A_Phi_A = intrm_sf_mf_464 ?
    Steam_Generator_two_phase_fluid_mass_mix : intrm_sf_mf_463 ? t972 : t964;
  tlu2_2d_linear_linear_value(&qh_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], &t62.mField0[0ULL], &t62.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = qh_efOut[0];
  Steam_Generator_two_phase_fluid_mass_liq = t794[0ULL];
  t993 = intrm_sf_mf_466 ? Steam_Generator_two_phase_fluid_mass_mix :
    intrm_sf_mf_465 ? t972 : Steam_Generator_two_phase_fluid_mass_liq;
  t900 = x4_Way_3_Position_Directional_Valve_P_A_Phi_A <= t993 ?
    x4_Way_3_Position_Directional_Valve_P_A_Phi_A : t993;
  if (t993 / (x4_Way_3_Position_Directional_Valve_P_A_Phi_A == 0.0 ? 1.0E-16 :
              x4_Way_3_Position_Directional_Valve_P_A_Phi_A) >= 1.000001) {
    Subsystem3_PS_Gain1_O = t993 /
      (x4_Way_3_Position_Directional_Valve_P_A_Phi_A == 0.0 ? 1.0E-16 :
       x4_Way_3_Position_Directional_Valve_P_A_Phi_A);
  } else if (x4_Way_3_Position_Directional_Valve_P_A_Phi_A / (t993 == 0.0 ?
              1.0E-16 : t993) >= 1.000001) {
    Subsystem3_PS_Gain1_O = x4_Way_3_Position_Directional_Valve_P_A_Phi_A /
      (t993 == 0.0 ? 1.0E-16 : t993);
  } else {
    Subsystem3_PS_Gain1_O = 1.000001;
  }

  t1229 = pmf_log(Subsystem3_PS_Gain1_O);
  x4_Way_3_Position_Directional_Valve_P_A_Phi_A = t1229 / (Subsystem3_PS_Gain1_O
    - 1.0 == 0.0 ? 1.0E-16 : Subsystem3_PS_Gain1_O - 1.0) / (t900 == 0.0 ?
    1.0E-16 : t900);
  t993 = intrm_sf_mf_456 ? t964 : Steam_Generator_two_phase_fluid_mass_mix;
  t900 = intrm_sf_mf_460 ? Steam_Generator_two_phase_fluid_mass_liq :
    Steam_Generator_two_phase_fluid_mass_mix;
  t993 = (1.0 / (t993 == 0.0 ? 1.0E-16 : t993) + 1.0 / (t900 == 0.0 ? 1.0E-16 :
           t900)) / 2.0 * t985 * 0.25770877236478779;
  Steam_Generator_two_phase_fluid_mass_mix =
    x4_Way_3_Position_Directional_Valve_P_A_Phi_A * t983 * 0.25770877236478779;
  x4_Way_3_Position_Directional_Valve_P_A_Phi_A = intrm_sf_mf_461 ? t964 : t972;
  t964 = intrm_sf_mf_462 ? Steam_Generator_two_phase_fluid_mass_liq : t972;
  t972 = (1.0 / (x4_Way_3_Position_Directional_Valve_P_A_Phi_A == 0.0 ? 1.0E-16 :
                 x4_Way_3_Position_Directional_Valve_P_A_Phi_A) + 1.0 / (t964 ==
           0.0 ? 1.0E-16 : t964)) / 2.0 * intrm_sf_mf_511 * 0.25770877236478779;
  t964 = (t993 + Steam_Generator_two_phase_fluid_mass_mix) + t972;
  Steam_Generator_two_phase_fluid_mass_mix =
    Steam_Generator_two_phase_fluid_mass_mix * X[41ULL] / (t964 == 0.0 ? 1.0E-16
    : t964);
  t972 = t972 * X[41ULL] / (t964 == 0.0 ? 1.0E-16 : t964);
  Subsystem3_PS_Gain_O = (1.0 - U_idx_2) * 24.0;
  Subsystem3_PS_Gain1_O = U_idx_2 * 24.0;
  t996 = U_idx_2 * -24.0 + 24.0;
  t997 = U_idx_2 * 24.0;
  t798[0ULL] = Thermodynamic_Properties_Sensor_2P_V;
  tlu2_linear_linear_prelookup(&rh_efOut.mField0[0ULL], &rh_efOut.mField1[0ULL],
    &rh_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t798[0ULL],
    &t111[0ULL], &t83[0ULL]);
  t60 = rh_efOut;
  tlu2_2d_linear_linear_value(&sh_efOut[0ULL], &t60.mField0[0ULL], &t60.mField2
    [0ULL], &t79.mField0[0ULL], &t79.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = sh_efOut[0];
  t1229 = -t794[0ULL];
  Thermodynamic_Properties_Sensor_2P_V = -t1229;
  tlu2_2d_linear_linear_value(&th_efOut[0ULL], &t60.mField0[0ULL], &t60.mField2
    [0ULL], &t79.mField0[0ULL], &t79.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField32, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = th_efOut[0];
  t1229 = -t794[0ULL];
  t999 = -t1229;
  tlu2_2d_linear_linear_value(&uh_efOut[0ULL], &t60.mField0[0ULL], &t60.mField2
    [0ULL], &t79.mField0[0ULL], &t79.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = uh_efOut[0];
  t1229 = -t794[0ULL];
  t1000 = -t1229;
  t798[0ULL] = t938;
  tlu2_linear_linear_prelookup(&vh_efOut.mField0[0ULL], &vh_efOut.mField1[0ULL],
    &vh_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t798[0ULL],
    &t111[0ULL], &t83[0ULL]);
  t73 = vh_efOut;
  tlu2_2d_linear_linear_value(&wh_efOut[0ULL], &t73.mField0[0ULL], &t73.mField2
    [0ULL], &t78.mField0[0ULL], &t78.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = wh_efOut[0];
  t1229 = -t794[0ULL];
  t938 = -t1229;
  tlu2_2d_linear_linear_value(&xh_efOut[0ULL], &t73.mField0[0ULL], &t73.mField2
    [0ULL], &t78.mField0[0ULL], &t78.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField32, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = xh_efOut[0];
  t1229 = -t794[0ULL];
  t1002 = -t1229;
  tlu2_2d_linear_linear_value(&yh_efOut[0ULL], &t73.mField0[0ULL], &t73.mField2
    [0ULL], &t78.mField0[0ULL], &t78.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t794[0] = yh_efOut[0];
  t1229 = -t794[0ULL];
  t1003 = -t1229;
  t798[0ULL] = t932;
  tlu2_linear_linear_prelookup(&ai_efOut.mField0[0ULL], &ai_efOut.mField1[0ULL],
    &ai_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t798[0ULL],
    &t111[0ULL], &t83[0ULL]);
  t42 = ai_efOut;
  tlu2_2d_linear_linear_value(&bi_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], &t68.mField0[0ULL], &t68.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t798[0] = bi_efOut[0];
  t1229 = -t798[0ULL];
  t932 = -t1229;
  tlu2_2d_linear_linear_value(&ci_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], &t68.mField0[0ULL], &t68.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField32, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t798[0] = ci_efOut[0];
  t1229 = -t798[0ULL];
  t1005 = -t1229;
  tlu2_2d_linear_linear_value(&di_efOut[0ULL], &t42.mField0[0ULL], &t42.mField2
    [0ULL], &t68.mField0[0ULL], &t68.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t111[0ULL], &t82[0ULL], &t83[0ULL]);
  t798[0] = di_efOut[0];
  t1229 = -t798[0ULL];
  t1006 = -t1229;
  if (t825 <= 0.0) {
    t1007 = 0.0;
  } else {
    t1007 = t825 >= 1.0 ? 1.0 : t825;
  }

  if (t827 <= 0.0) {
    t825 = 0.0;
  } else {
    t825 = t827 >= 1.0 ? 1.0 : t827;
  }

  t827 = X[153ULL] >= 0.0 ? X[153ULL] : -X[153ULL];
  t1207 = intrm_sf_mf_273 * 0.0099491780865731388;
  intrm_sf_mf_282 = t827 * 0.038099999999999995 / (t1207 == 0.0 ? 1.0E-16 :
    t1207);
  t1009 = intrm_sf_mf_282 >= 1.0 ? intrm_sf_mf_282 : 1.0;
  t1229 = pmf_log10(6.9 / (t1009 == 0.0 ? 1.0E-16 : t1009) +
                    3.8898303526856324E-5) * pmf_log10(6.9 / (t1009 == 0.0 ?
    1.0E-16 : t1009) + 3.8898303526856324E-5) * 3.24;
  t1228 = t893 * 2.8884652804500862E-5;
  intrm_sf_mf_237 = X[153ULL] * intrm_sf_mf_273 * 128.0 / (t1228 == 0.0 ?
    1.0E-16 : t1228);
  t900 = t893 * 7.5427442183940515E-6;
  t827 = X[153ULL] * t827 * (1.0 / (t1229 == 0.0 ? 1.0E-16 : t1229)) * 2.0 /
    (t900 == 0.0 ? 1.0E-16 : t900);
  t1009 = (intrm_sf_mf_282 - 2000.0) / 2000.0;
  intrm_sf_mf_327 = t1009 * t1009 * 3.0 - t1009 * t1009 * t1009 * 2.0;
  if (intrm_sf_mf_282 <= 2000.0) {
    t1009 = intrm_sf_mf_237 * 1.0E-5;
  } else if (intrm_sf_mf_282 >= 4000.0) {
    t1009 = t827 * 1.0E-5;
  } else {
    t1009 = ((1.0 - intrm_sf_mf_327) * intrm_sf_mf_237 + t827 * intrm_sf_mf_327)
      * 1.0E-5;
  }

  t827 = X[154ULL] >= 0.0 ? X[154ULL] : -X[154ULL];
  intrm_sf_mf_282 = t827 * 0.038099999999999995 / (t1207 == 0.0 ? 1.0E-16 :
    t1207);
  intrm_sf_mf_237 = intrm_sf_mf_282 >= 1.0 ? intrm_sf_mf_282 : 1.0;
  t1229 = pmf_log10(6.9 / (intrm_sf_mf_237 == 0.0 ? 1.0E-16 : intrm_sf_mf_237) +
                    3.8898303526856324E-5) * pmf_log10(6.9 / (intrm_sf_mf_237 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_237) + 3.8898303526856324E-5) * 3.24;
  intrm_sf_mf_273 = X[154ULL] * intrm_sf_mf_273 * 128.0 / (t1228 == 0.0 ?
    1.0E-16 : t1228);
  t827 = X[154ULL] * t827 * (1.0 / (t1229 == 0.0 ? 1.0E-16 : t1229)) * 2.0 /
    (t900 == 0.0 ? 1.0E-16 : t900);
  intrm_sf_mf_237 = (intrm_sf_mf_282 - 2000.0) / 2000.0;
  intrm_sf_mf_327 = intrm_sf_mf_237 * intrm_sf_mf_237 * 3.0 - intrm_sf_mf_237 *
    intrm_sf_mf_237 * intrm_sf_mf_237 * 2.0;
  if (intrm_sf_mf_282 <= 2000.0) {
    intrm_sf_mf_237 = intrm_sf_mf_273 * 1.0E-5;
  } else if (intrm_sf_mf_282 >= 4000.0) {
    intrm_sf_mf_237 = t827 * 1.0E-5;
  } else {
    intrm_sf_mf_237 = ((1.0 - intrm_sf_mf_327) * intrm_sf_mf_273 + t827 *
                       intrm_sf_mf_327) * 1.0E-5;
  }

  t1207 = t896 * 0.0099491780865731388;
  t827 = 0.13334999999999997 / (t1207 == 0.0 ? 1.0E-16 : t1207);
  intrm_sf_mf_273 = t827 >= 1.0 ? t827 : 1.0;
  t1229 = pmf_log10(6.9 / (intrm_sf_mf_273 == 0.0 ? 1.0E-16 : intrm_sf_mf_273) +
                    3.8898303526856324E-5) * pmf_log10(6.9 / (intrm_sf_mf_273 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_273) + 3.8898303526856324E-5) * 3.24;
  t1228 = t897 * 2.8884652804500862E-5;
  intrm_sf_mf_282 = t896 * 784.0 / (t1228 == 0.0 ? 1.0E-16 : t1228);
  t900 = t897 * 7.5427442183940515E-6;
  intrm_sf_mf_367 = 3.5 * (1.0 / (t1229 == 0.0 ? 1.0E-16 : t1229)) * 12.25 /
    (t900 == 0.0 ? 1.0E-16 : t900);
  intrm_sf_mf_273 = (t827 - 2000.0) / 2000.0;
  intrm_sf_mf_327 = intrm_sf_mf_273 * intrm_sf_mf_273 * 3.0 - intrm_sf_mf_273 *
    intrm_sf_mf_273 * intrm_sf_mf_273 * 2.0;
  if (t827 <= 2000.0) {
    intrm_sf_mf_273 = intrm_sf_mf_282 * 1.0E-5;
  } else if (t827 >= 4000.0) {
    intrm_sf_mf_273 = intrm_sf_mf_367 * 1.0E-5;
  } else {
    intrm_sf_mf_273 = ((1.0 - intrm_sf_mf_327) * intrm_sf_mf_282 +
                       intrm_sf_mf_367 * intrm_sf_mf_327) * 1.0E-5;
  }

  if (-X[153ULL] >= 0.0) {
    intrm_sf_mf_367 = -X[153ULL];
  } else {
    intrm_sf_mf_367 = X[153ULL];
  }

  t827 = intrm_sf_mf_367 * 0.038099999999999995 / (t1207 == 0.0 ? 1.0E-16 :
    t1207);
  intrm_sf_mf_282 = t827 >= 1.0 ? t827 : 1.0;
  t1229 = pmf_log10(6.9 / (intrm_sf_mf_282 == 0.0 ? 1.0E-16 : intrm_sf_mf_282) +
                    3.8898303526856324E-5) * pmf_log10(6.9 / (intrm_sf_mf_282 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_282) + 3.8898303526856324E-5) * 3.24;
  t896 = X[153ULL] * t896 * -224.0 / (t1228 == 0.0 ? 1.0E-16 : t1228);
  intrm_sf_mf_367 = X[153ULL] * intrm_sf_mf_367 * (1.0 / (t1229 == 0.0 ? 1.0E-16
    : t1229)) * -3.5 / (t900 == 0.0 ? 1.0E-16 : t900);
  intrm_sf_mf_282 = (t827 - 2000.0) / 2000.0;
  intrm_sf_mf_327 = intrm_sf_mf_282 * intrm_sf_mf_282 * 3.0 - intrm_sf_mf_282 *
    intrm_sf_mf_282 * intrm_sf_mf_282 * 2.0;
  if (t827 <= 2000.0) {
    intrm_sf_mf_282 = t896 * 1.0E-5;
  } else if (t827 >= 4000.0) {
    intrm_sf_mf_282 = intrm_sf_mf_367 * 1.0E-5;
  } else {
    intrm_sf_mf_282 = ((1.0 - intrm_sf_mf_327) * t896 + intrm_sf_mf_367 *
                       intrm_sf_mf_327) * 1.0E-5;
  }

  if (-X[154ULL] >= 0.0) {
    intrm_sf_mf_367 = -X[154ULL];
  } else {
    intrm_sf_mf_367 = X[154ULL];
  }

  t1207 = t903 * 0.0099491780865731388;
  t827 = intrm_sf_mf_367 * 0.038099999999999995 / (t1207 == 0.0 ? 1.0E-16 :
    t1207);
  t896 = t827 >= 1.0 ? t827 : 1.0;
  t1229 = pmf_log10(6.9 / (t896 == 0.0 ? 1.0E-16 : t896) + 3.8898303526856324E-5)
    * pmf_log10(6.9 / (t896 == 0.0 ? 1.0E-16 : t896) + 3.8898303526856324E-5) *
    3.24;
  t1228 = t904 * 2.8884652804500862E-5;
  intrm_sf_mf_327 = X[154ULL] * t903 * -224.0 / (t1228 == 0.0 ? 1.0E-16 : t1228);
  t900 = t904 * 7.5427442183940515E-6;
  intrm_sf_mf_367 = X[154ULL] * intrm_sf_mf_367 * (1.0 / (t1229 == 0.0 ? 1.0E-16
    : t1229)) * -3.5 / (t900 == 0.0 ? 1.0E-16 : t900);
  t896 = (t827 - 2000.0) / 2000.0;
  t1012 = t896 * t896 * 3.0 - t896 * t896 * t896 * 2.0;
  if (t827 <= 2000.0) {
    t896 = intrm_sf_mf_327 * 1.0E-5;
  } else if (t827 >= 4000.0) {
    t896 = intrm_sf_mf_367 * 1.0E-5;
  } else {
    t896 = ((1.0 - t1012) * intrm_sf_mf_327 + intrm_sf_mf_367 * t1012) * 1.0E-5;
  }

  intrm_sf_mf_367 = t902 >= 0.0 ? t902 : -t902;
  t827 = intrm_sf_mf_367 * 0.038099999999999995 / (t1207 == 0.0 ? 1.0E-16 :
    t1207);
  intrm_sf_mf_327 = t827 >= 1.0 ? t827 : 1.0;
  t1229 = pmf_log10(6.9 / (intrm_sf_mf_327 == 0.0 ? 1.0E-16 : intrm_sf_mf_327) +
                    3.8898303526856324E-5) * pmf_log10(6.9 / (intrm_sf_mf_327 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_327) + 3.8898303526856324E-5) * 3.24;
  t903 = t902 * t903 * 224.0 / (t1228 == 0.0 ? 1.0E-16 : t1228);
  intrm_sf_mf_367 = t902 * intrm_sf_mf_367 * (1.0 / (t1229 == 0.0 ? 1.0E-16 :
    t1229)) * 3.5 / (t900 == 0.0 ? 1.0E-16 : t900);
  intrm_sf_mf_327 = (t827 - 2000.0) / 2000.0;
  t1012 = intrm_sf_mf_327 * intrm_sf_mf_327 * 3.0 - intrm_sf_mf_327 *
    intrm_sf_mf_327 * intrm_sf_mf_327 * 2.0;
  if (t827 <= 2000.0) {
    intrm_sf_mf_327 = t903 * 1.0E-5;
  } else if (t827 >= 4000.0) {
    intrm_sf_mf_327 = intrm_sf_mf_367 * 1.0E-5;
  } else {
    intrm_sf_mf_327 = ((1.0 - t1012) * t903 + intrm_sf_mf_367 * t1012) * 1.0E-5;
  }

  if (intrm_sf_mf_531 <= 0.0) {
    intrm_sf_mf_367 = 0.0;
  } else {
    intrm_sf_mf_367 = intrm_sf_mf_531 >= 1.0 ? 1.0 : intrm_sf_mf_531;
  }

  t827 = ((((X[61ULL] - 1.01325) - 70.0) * 0.999999 / 0.5 + 1.0E-6) - 1.0E-6) /
    0.999999;
  t1229 = (pmf_sqrt(t827 * t827 + 6.25E-6) + 1.0) - pmf_sqrt((t827 - 1.0) *
    (t827 - 1.0) + 6.25E-6);
  t903 = t1229 / 2.0 * 0.999999 + 1.0E-6;
  if (intrm_sf_mf_9 <= 0.0) {
    t827 = 0.0;
  } else {
    t827 = intrm_sf_mf_9 >= 1.0 ? 1.0 : intrm_sf_mf_9;
  }

  if (t955 <= 0.0) {
    intrm_sf_mf_531 = 0.0;
  } else {
    intrm_sf_mf_531 = t955 >= 1.0 ? 1.0 : t955;
  }

  intrm_sf_mf_9 = T_idx_0 - D_idx_1;
  t955 = (intrm_sf_mf_9 - D_idx_2 * 0.33333333333333331) * (intrm_sf_mf_9 -
    D_idx_2 * 0.33333333333333331) * D_idx_0 * 0.5 + D_idx_3;
  t1012 = (D_idx_0 * D_idx_2 * D_idx_2 * 0.055555555555555552 + (intrm_sf_mf_9 -
            D_idx_2 * 0.66666666666666663) * D_idx_0 * D_idx_2 *
           0.33333333333333331) + D_idx_3;
  intrm_sf_mf_9 = T_idx_0 - D_idx_5;
  x4_Way_3_Position_Directional_Valve_P_A_Phi_A = ((((X[0ULL] - X[51ULL]) - 0.1)
    * 0.998 / 0.19999999999999998 + 0.002) - 0.002) / 0.998;
  t1229 = (pmf_sqrt(x4_Way_3_Position_Directional_Valve_P_A_Phi_A *
                    x4_Way_3_Position_Directional_Valve_P_A_Phi_A + 6.25E-6) +
           1.0) - pmf_sqrt((x4_Way_3_Position_Directional_Valve_P_A_Phi_A - 1.0)
    * (x4_Way_3_Position_Directional_Valve_P_A_Phi_A - 1.0) + 6.25E-6);
  x4_Way_3_Position_Directional_Valve_P_A_Phi_A = -X[130ULL] - X[132ULL];
  t900 = -X[114ULL] - X[129ULL];
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (M[112ULL] != 0) {
        t1207 = X[66ULL] - t838 * t821 * 1000.0;
        t1228 = pmf_log((t839 * t821 * 1000.0 + X[66ULL]) / (t1207 == 0.0 ?
          1.0E-16 : t1207));
        t699_idx_0 = t1228 / (zc_int1 == 0.0 ? 1.0E-16 : zc_int1);
      } else {
        t699_idx_0 = 1.0;
      }
    } else {
      t699_idx_0 = 0.0;
    }
  } else {
    t699_idx_0 = intrm_sf_mf_57 ? intrm_sf_mf_54 ? 0.0 : (real_T)!intrm_sf_mf_53
      : (real_T)intrm_sf_mf_51;
  }

  if (intrm_sf_mf_58) {
    zc_int1 = intrm_sf_mf_51 ? 0.0 : (real_T)!intrm_sf_mf_50;
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (M[117ULL] != 0) {
        t1207 = X[66ULL] - t1235 * t1247 * 1000.0;
        t1228 = pmf_log((t855 * t1247 * 1000.0 + X[66ULL]) / (t1207 == 0.0 ?
          1.0E-16 : t1207));
        zc_int1 = t1228 / (t808 == 0.0 ? 1.0E-16 : t808);
      } else {
        zc_int1 = 1.0;
      }
    } else {
      zc_int1 = 0.0;
    }
  } else {
    zc_int1 = intrm_sf_mf_51 ? 0.0 : (real_T)!intrm_sf_mf_55;
  }

  t808 = (1.0 - t699_idx_0) - zc_int1;
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (M[112ULL] != 0) {
        t838 = (t806 - 1.0) * t821 * 1000.0 + X[66ULL];
      } else {
        t838 = (t806 * t1252 + X[66ULL]) - t821 * 1000.0;
      }
    } else if (intrm_sf_mf_50) {
      t838 = X[66ULL];
    } else {
      t838 = (t835 * t856 + X[66ULL]) - t1247 * 1000.0;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (M[117ULL] != 0) {
        t838 = (t835 - 1.0) * t1247 * 1000.0 + X[66ULL];
      } else {
        t838 = (t835 * t856 + X[66ULL]) - t1247 * 1000.0;
      }
    } else if (intrm_sf_mf_53) {
      t838 = X[66ULL];
    } else {
      t838 = (t806 * t1252 + X[66ULL]) - t821 * 1000.0;
    }
  } else if (intrm_sf_mf_51) {
    t838 = (t806 * t1252 + X[66ULL]) - t821 * 1000.0;
  } else if (intrm_sf_mf_55) {
    t838 = X[66ULL];
  } else {
    t838 = (t835 * t856 + X[66ULL]) - t1247 * 1000.0;
  }

  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (M[112ULL] != 0) {
        t821 = t843;
      } else {
        t821 = zc_int39 * t1252 * 0.001 + t841;
      }
    } else if (intrm_sf_mf_50) {
      t821 = t841;
    } else {
      t821 = t1246 * t856 * 0.001 + t841;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (M[117ULL] != 0) {
        t821 = t848;
      } else {
        t821 = t1246 * t856 * 0.001 + t841;
      }
    } else if (intrm_sf_mf_53) {
      t821 = t841;
    } else {
      t821 = zc_int39 * t1252 * 0.001 + t841;
    }
  } else if (intrm_sf_mf_51) {
    t821 = zc_int39 * t1252 * 0.001 + t841;
  } else if (intrm_sf_mf_55) {
    t821 = t841;
  } else {
    t821 = t1246 * t856 * 0.001 + t841;
  }

  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_68) {
      if (intrm_sf_mf_67) {
        t1252 = t845 * (t848 - t821) * 1000.0 + t838;
        t1246 = -pmf_log(t838 / (t1252 == 0.0 ? 1.0E-16 : t1252));
        t821 = t1246 / (t846 == 0.0 ? 1.0E-16 : t846);
      } else {
        t821 = t808;
      }
    } else {
      t821 = 0.0;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_70) {
      if (intrm_sf_mf_69) {
        t1247 = t845 * (t843 - t821) * 1000.0 + t838;
        t1235 = -pmf_log(t838 / (t1247 == 0.0 ? 1.0E-16 : t1247));
        t821 = t1235 / (t846 == 0.0 ? 1.0E-16 : t846);
      } else {
        t821 = t808;
      }
    } else {
      t821 = 0.0;
    }
  } else {
    t821 = t808;
  }

  zc_int39 = t808 - t821;
  t835 = t699_idx_0 + (intrm_sf_mf_58 ? 0.0 : intrm_sf_mf_57 ? zc_int39 : 0.0);
  zc_int39 = zc_int1 + (intrm_sf_mf_58 ? zc_int39 : 0.0);
  t1252 = ((real_T)(M[120ULL] != 0) * 2.0 - 1.0) * X[100ULL];
  t808 = zc_int21 - (1.0 - zc_int15) * (X[106ULL] * X[106ULL] / 2.0 / (t1252 ==
    0.0 ? 1.0E-16 : t1252)) * 1.0025E-5;
  if (zc_int32 <= 0.0) {
    zc_int15 = Local_Restriction_2P_p_avg;
  } else if (zc_int32 >= t879) {
    zc_int15 = t808;
  } else {
    zc_int15 = (1.0 - t883) * Local_Restriction_2P_p_avg + t883 * t808;
  }

  t1252 = ((real_T)(M[131ULL] != 0) * 2.0 - 1.0) * X[109ULL];
  zc_int32 = Local_Restriction_2P1_p_in - (1.0 - zc_int35) * (X[115ULL] * X
    [115ULL] / 2.0 / (t1252 == 0.0 ? 1.0E-16 : t1252)) * 1.0002500000000001E-5;
  if (t880 <= 0.0) {
    zc_int21 = t884;
  } else if (t880 >= Local_Restriction_2P1_Dp_threshold) {
    zc_int21 = zc_int32;
  } else {
    zc_int21 = (1.0 - t886) * t884 + t886 * zc_int32;
  }

  t806 = t821;
  t838 = zc_int39;
  if (intrm_sf_mf_485) {
    if (intrm_sf_mf_478) {
      if (M[152ULL] != 0) {
        t1247 = -pmf_log((X[197ULL] - t949 * 1000.0) / (X[197ULL] == 0.0 ?
          1.0E-16 : X[197ULL]));
        zc_int32 = t1247 / (t965 == 0.0 ? 1.0E-16 : t965);
      } else {
        zc_int32 = 1.0;
      }
    } else {
      zc_int32 = 0.0;
    }
  } else {
    zc_int32 = intrm_sf_mf_484 ? intrm_sf_mf_481 ? 0.0 : (real_T)
      !intrm_sf_mf_480 : (real_T)intrm_sf_mf_478;
  }

  if (intrm_sf_mf_485) {
    zc_int35 = intrm_sf_mf_478 ? 0.0 : (real_T)!intrm_sf_mf_477;
  } else if (intrm_sf_mf_484) {
    if (intrm_sf_mf_481) {
      if (M[4ULL] != 0) {
        t1247 = -pmf_log((X[197ULL] - t963 * 1000.0) / (X[197ULL] == 0.0 ?
          1.0E-16 : X[197ULL]));
        zc_int35 = t1247 / (t978 == 0.0 ? 1.0E-16 : t978);
      } else {
        zc_int35 = 1.0;
      }
    } else {
      zc_int35 = 0.0;
    }
  } else {
    zc_int35 = intrm_sf_mf_478 ? 0.0 : (real_T)!intrm_sf_mf_482;
  }

  t821 = (1.0 - zc_int32) - zc_int35;
  if (intrm_sf_mf_485) {
    if (intrm_sf_mf_478) {
      if (M[152ULL] != 0) {
        zc_int39 = t970;
      } else {
        zc_int39 = t958 * t971 * 0.001 + t967;
      }
    } else if (intrm_sf_mf_477) {
      zc_int39 = t967;
    } else {
      zc_int39 = t977 * t979 * 0.001 + t967;
    }
  } else if (intrm_sf_mf_484) {
    if (intrm_sf_mf_481) {
      if (M[4ULL] != 0) {
        zc_int39 = t973;
      } else {
        zc_int39 = t977 * t979 * 0.001 + t967;
      }
    } else if (intrm_sf_mf_480) {
      zc_int39 = t967;
    } else {
      zc_int39 = t958 * t971 * 0.001 + t967;
    }
  } else if (intrm_sf_mf_478) {
    zc_int39 = t958 * t971 * 0.001 + t967;
  } else if (intrm_sf_mf_482) {
    zc_int39 = t967;
  } else {
    zc_int39 = t977 * t979 * 0.001 + t967;
  }

  if (intrm_sf_mf_485) {
    if (intrm_sf_mf_495) {
      if (intrm_sf_mf_476) {
        zc_int39 = (t973 - zc_int39) / (t982 == 0.0 ? 1.0E-16 : t982) / (t962 ==
          0.0 ? 1.0E-16 : t962) * 1000.0;
      } else {
        zc_int39 = t821;
      }
    } else {
      zc_int39 = 0.0;
    }
  } else if (intrm_sf_mf_484) {
    if (intrm_sf_mf_497) {
      if (intrm_sf_mf_496) {
        zc_int39 = (t970 - zc_int39) / (t982 == 0.0 ? 1.0E-16 : t982) / (t962 ==
          0.0 ? 1.0E-16 : t962) * 1000.0;
      } else {
        zc_int39 = t821;
      }
    } else {
      zc_int39 = 0.0;
    }
  } else {
    zc_int39 = t821;
  }

  t808 = t821 - zc_int39;
  t1252 = -(((real_T)(M[141ULL] != 0) * 2.0 - 1.0) * t869 * t929);
  t839 = zc_int35 + (intrm_sf_mf_485 ? t808 : 0.0);
  if (M[15ULL] != 0) {
    zc_int35 = 0.0;
  } else if (M[26ULL] != 0) {
    zc_int35 = 0.01;
  } else if (M[37ULL] != 0) {
    zc_int35 = D_idx_3;
  } else {
    zc_int35 = M[48ULL] != 0 ? t955 : t1012;
  }

  t821 = zc_int35;
  if (M[57ULL] != 0) {
    zc_int35 = 0.0;
  } else if (M[66ULL] != 0) {
    zc_int35 = 0.01;
  } else if (M[77ULL] != 0) {
    zc_int35 = D_idx_7;
  } else {
    zc_int35 = M[88ULL] != 0 ? (intrm_sf_mf_9 - D_idx_6 * 0.33333333333333331) *
      (intrm_sf_mf_9 - D_idx_6 * 0.33333333333333331) * D_idx_4 * 0.5 + D_idx_7 :
      (D_idx_4 * D_idx_6 * D_idx_6 * 0.055555555555555552 + (intrm_sf_mf_9 -
        D_idx_6 * 0.66666666666666663) * D_idx_4 * D_idx_6 * 0.33333333333333331)
      + D_idx_7;
  }

  t675[0ULL] = X[0ULL] * 0.1;
  t675[1ULL] = X[50ULL];
  t675[2ULL] = X[51ULL] * 0.1;
  t675[3ULL] = X[52ULL];
  t675[4ULL] = X[53ULL];
  t675[5ULL] = -X[53ULL];
  t675[6ULL] = X[0ULL] * 0.1;
  t675[7ULL] = X[50ULL];
  t675[8ULL] = X[53ULL];
  t675[9ULL] = X[54ULL];
  t675[10ULL] = X[55ULL];
  t675[11ULL] = X[51ULL] * 0.1;
  t675[12ULL] = X[52ULL];
  t675[13ULL] = -X[53ULL];
  t675[14ULL] = X[54ULL];
  t675[15ULL] = -X[55ULL];
  t675[16ULL] = X[55ULL];
  t675[17ULL] = -X[55ULL];
  t675[18ULL] = t1229 / 2.0 * 0.998 + 0.002;
  t675[19ULL] = X[1ULL];
  t675[20ULL] = X[2ULL];
  t675[21ULL] = X[56ULL];
  t675[22ULL] = X[57ULL] * 0.1;
  t675[23ULL] = X[58ULL];
  t675[24ULL] = X[59ULL];
  t675[25ULL] = X[60ULL] * 0.1;
  t675[26ULL] = X[61ULL] * 0.1;
  t675[27ULL] = X[62ULL];
  t675[28ULL] = X[56ULL];
  t675[29ULL] = X[59ULL];
  t675[30ULL] = X[60ULL] * 0.1;
  t675[31ULL] = X[3ULL];
  t675[32ULL] = X[4ULL] * 0.1;
  t675[33ULL] = X[5ULL];
  t675[34ULL] = X[63ULL];
  t675[35ULL] = Condenser_thermal_liquid_rho_in;
  t675[36ULL] = t850;
  t675[37ULL] = X[3ULL];
  t675[38ULL] = X[68ULL];
  t675[39ULL] = X[69ULL];
  t675[40ULL] = X[70ULL];
  t675[41ULL] = X[56ULL];
  t675[42ULL] = X[71ULL];
  t675[43ULL] = X[72ULL];
  t675[44ULL] = X[63ULL];
  t675[45ULL] = X[73ULL];
  t675[46ULL] = X[56ULL];
  t675[47ULL] = X[68ULL];
  t675[48ULL] = X[74ULL];
  t675[49ULL] = X[63ULL];
  t675[50ULL] = X[75ULL];
  t675[51ULL] = X[59ULL];
  t675[52ULL] = X[60ULL] * 0.1;
  t675[53ULL] = X[76ULL];
  t675[54ULL] = X[77ULL];
  t675[55ULL] = X[78ULL];
  t675[56ULL] = X[59ULL];
  t675[57ULL] = X[60ULL] * 0.1;
  t675[58ULL] = X[69ULL];
  t675[59ULL] = X[79ULL];
  t675[60ULL] = X[80ULL];
  t675[61ULL] = (Condenser_thermal_liquid_rho_in + t850) / 2.0 *
    0.092765046668672663;
  t675[62ULL] = Condenser_thermal_liquid_u_in;
  t675[63ULL] = X[4ULL] / (Condenser_thermal_liquid_rho_in == 0.0 ? 1.0E-16 :
    Condenser_thermal_liquid_rho_in) * 100.0 + Condenser_thermal_liquid_u_in;
  t675[64ULL] = Condenser_thermal_liquid_u_out;
  t675[65ULL] = X[4ULL] / (t850 == 0.0 ? 1.0E-16 : t850) * 100.0 +
    Condenser_thermal_liquid_u_out;
  t675[66ULL] = X[57ULL] * 0.1;
  t675[67ULL] = X[58ULL];
  t675[68ULL] = X[61ULL] * 0.1;
  t675[69ULL] = X[62ULL];
  t675[70ULL] = X[9ULL] * 0.001;
  t675[71ULL] = X[6ULL] * 0.1;
  t675[72ULL] = X[7ULL];
  t675[73ULL] = Condenser_two_phase_fluid_T_in;
  t675[74ULL] = Condenser_two_phase_fluid_T_sat_liq;
  t675[75ULL] = X[8ULL];
  t675[76ULL] = X[10ULL];
  t675[77ULL] = X[67ULL] * 0.001;
  t675[78ULL] = t833;
  t675[79ULL] = X[11ULL] * 0.001;
  t675[80ULL] = X[13ULL] * 0.001;
  t675[81ULL] = X[12ULL] * 0.001;
  t675[82ULL] = X[66ULL];
  t675[83ULL] = t841;
  t675[84ULL] = t843;
  t675[85ULL] = t848;
  t675[86ULL] = t862;
  t675[87ULL] = t861;
  t675[88ULL] = t859;
  t675[89ULL] = X[64ULL];
  t675[90ULL] = X[65ULL];
  t675[91ULL] = X[81ULL];
  t675[92ULL] = X[82ULL];
  t675[93ULL] = X[83ULL];
  t675[94ULL] = Condenser_two_phase_fluid_T_out;
  t675[95ULL] = X[57ULL] * 0.1;
  t675[96ULL] = X[58ULL];
  t675[97ULL] = X[81ULL];
  t675[98ULL] = X[84ULL];
  t675[99ULL] = X[64ULL];
  t675[100ULL] = X[61ULL] * 0.1;
  t675[101ULL] = X[62ULL];
  t675[102ULL] = X[82ULL];
  t675[103ULL] = X[85ULL];
  t675[104ULL] = X[65ULL];
  t675[105ULL] = X[14ULL];
  t675[106ULL] = t865;
  t675[107ULL] = t870;
  t675[108ULL] = t842;
  t675[109ULL] = t847;
  t675[110ULL] = t1007;
  t675[111ULL] = t825;
  t675[112ULL] = t824;
  t675[113ULL] = t857;
  t675[114ULL] = X[9ULL] * 0.001;
  t675[115ULL] = t826;
  t675[116ULL] = t829;
  t675[117ULL] = Condenser_two_phase_fluid_Rth_conv_vap;
  t675[118ULL] = t831;
  t675[119ULL] = t823;
  t675[120ULL] = t851;
  t675[121ULL] = Condenser_Q_vap;
  t675[122ULL] = X[11ULL] * 0.001;
  t675[123ULL] = X[13ULL] * 0.001;
  t675[124ULL] = X[12ULL] * 0.001;
  t675[125ULL] = t835;
  t675[126ULL] = t806;
  t675[127ULL] = t838;
  t675[128ULL] = Condenser_Q_cond;
  t675[129ULL] = t819;
  t675[130ULL] = t832;
  t675[131ULL] = X[10ULL];
  t675[132ULL] = X[86ULL];
  t675[133ULL] = t840 * 1000.0;
  t675[134ULL] = t840 * 1000.0;
  t675[135ULL] = -X[86ULL];
  t675[136ULL] = X[61ULL] * 0.1;
  t675[137ULL] = X[62ULL];
  t675[138ULL] = X[87ULL] * 0.1;
  t675[139ULL] = X[88ULL];
  t675[140ULL] = t878;
  t675[141ULL] = X[90ULL];
  t675[142ULL] = X[61ULL] * 0.1;
  t675[143ULL] = X[62ULL];
  t675[144ULL] = t878;
  t675[145ULL] = X[91ULL];
  t675[146ULL] = X[92ULL];
  t675[147ULL] = X[87ULL] * 0.1;
  t675[148ULL] = X[88ULL];
  t675[149ULL] = X[90ULL];
  t675[150ULL] = X[91ULL];
  t675[151ULL] = -X[92ULL];
  t675[152ULL] = t881 * 0.1;
  t675[153ULL] = X[97ULL];
  t675[154ULL] = t882;
  t675[155ULL] = X[93ULL];
  t675[156ULL] = X[94ULL];
  t675[157ULL] = X[95ULL];
  t675[158ULL] = X[96ULL];
  t675[159ULL] = X[92ULL];
  t675[160ULL] = Fixed_Displacement_Pump_2P_hydraulic_power * 0.0001;
  t675[161ULL] = -X[92ULL];
  t675[162ULL] = t874 * 100000.0;
  t675[163ULL] = 471.4 * X[97ULL] * 0.001;
  t675[164ULL] = X[86ULL];
  t675[165ULL] = X[86ULL];
  t675[166ULL] = t840 * 1000.0;
  t675[167ULL] = t840 * 1000.0;
  t675[168ULL] = t840 * 1000.0;
  t675[169ULL] = -X[97ULL];
  t675[170ULL] = X[0ULL] * 0.1;
  t675[171ULL] = X[98ULL];
  t675[172ULL] = X[99ULL];
  t675[173ULL] = X[101ULL];
  t675[174ULL] = X[102ULL];
  t675[175ULL] = X[100ULL];
  t675[176ULL] = X[103ULL];
  t675[177ULL] = -X[103ULL];
  t675[178ULL] = X[0ULL] * 0.1;
  t675[179ULL] = X[98ULL];
  t675[180ULL] = X[103ULL];
  t675[181ULL] = X[104ULL];
  t675[182ULL] = X[105ULL];
  t675[183ULL] = X[99ULL];
  t675[184ULL] = -X[103ULL];
  t675[185ULL] = X[104ULL];
  t675[186ULL] = -X[105ULL];
  t675[187ULL] = X[105ULL];
  t675[188ULL] = -X[105ULL];
  t675[189ULL] = zc_int15 * 0.1;
  t675[190ULL] = X[106ULL];
  t675[191ULL] = X[107ULL];
  t675[192ULL] = X[108ULL];
  t675[193ULL] = X[57ULL] * 0.1;
  t675[194ULL] = X[58ULL];
  t675[195ULL] = X[110ULL];
  t675[196ULL] = X[111ULL];
  t675[197ULL] = X[109ULL];
  t675[198ULL] = X[112ULL];
  t675[199ULL] = -X[112ULL];
  t675[200ULL] = X[108ULL];
  t675[201ULL] = X[112ULL];
  t675[202ULL] = X[113ULL];
  t675[203ULL] = Local_Restriction_2P1_convection_A_mdot;
  t675[204ULL] = X[57ULL] * 0.1;
  t675[205ULL] = X[58ULL];
  t675[206ULL] = -X[112ULL];
  t675[207ULL] = X[113ULL];
  t675[208ULL] = -Local_Restriction_2P1_convection_A_mdot;
  t675[209ULL] = Local_Restriction_2P1_convection_A_mdot;
  t675[210ULL] = -Local_Restriction_2P1_convection_A_mdot;
  t675[211ULL] = zc_int21 * 0.1;
  t675[212ULL] = X[115ULL];
  t675[213ULL] = X[116ULL];
  t675[214ULL] = X[117ULL];
  t675[215ULL] = X[118ULL];
  t675[216ULL] = X[119ULL] * 0.1;
  t675[217ULL] = X[120ULL];
  t675[218ULL] = -X[120ULL];
  t675[219ULL] = X[117ULL];
  t675[220ULL] = X[120ULL];
  t675[221ULL] = X[121ULL];
  t675[222ULL] = X[122ULL];
  t675[223ULL] = X[123ULL];
  t675[224ULL] = X[118ULL];
  t675[225ULL] = X[119ULL] * 0.1;
  t675[226ULL] = -X[120ULL];
  t675[227ULL] = X[124ULL];
  t675[228ULL] = -X[122ULL];
  t675[229ULL] = X[123ULL];
  t675[230ULL] = X[122ULL];
  t675[231ULL] = -X[122ULL];
  t675[232ULL] = X[125ULL];
  t675[233ULL] = X[87ULL] * 0.1;
  t675[234ULL] = X[88ULL];
  t675[235ULL] = X[87ULL] * 0.1;
  t675[236ULL] = X[88ULL];
  t675[237ULL] = X[92ULL];
  t675[238ULL] = -X[90ULL];
  t675[239ULL] = -X[90ULL];
  t675[240ULL] = X[92ULL];
  t675[241ULL] = X[126ULL] * 0.1;
  t675[242ULL] = X[127ULL];
  t675[243ULL] = X[126ULL] * 0.1;
  t675[244ULL] = X[127ULL];
  t675[245ULL] = t869;
  t675[246ULL] = t887;
  t675[247ULL] = t887;
  t675[248ULL] = t869;
  t675[249ULL] = t869;
  t675[250ULL] = X[57ULL] * 0.1;
  t675[251ULL] = X[58ULL];
  t675[252ULL] = X[57ULL] * 0.1;
  t675[253ULL] = X[58ULL];
  t675[254ULL] = t888;
  t675[255ULL] = t889;
  t675[256ULL] = t889;
  t675[257ULL] = t888;
  t675[258ULL] = t888;
  t675[259ULL] = X[92ULL];
  t675[260ULL] = X[133ULL];
  t675[261ULL] = X[134ULL] * 0.1;
  t675[262ULL] = X[135ULL];
  t675[263ULL] = X[136ULL] * 0.1;
  t675[264ULL] = X[137ULL];
  t675[265ULL] = X[138ULL];
  t675[266ULL] = X[133ULL];
  t675[267ULL] = X[134ULL] * 0.1;
  t675[268ULL] = X[137ULL];
  t675[269ULL] = X[139ULL];
  t675[270ULL] = X[140ULL];
  t675[271ULL] = X[135ULL];
  t675[272ULL] = X[136ULL] * 0.1;
  t675[273ULL] = X[138ULL];
  t675[274ULL] = X[141ULL];
  t675[275ULL] = X[140ULL];
  t675[276ULL] = Mass_Flow_Rate_Source_TL_power;
  t675[277ULL] = X[142ULL];
  t675[278ULL] = X[59ULL];
  t675[279ULL] = X[60ULL] * 0.1;
  t675[280ULL] = X[143ULL];
  t675[281ULL] = -X[69ULL];
  t675[282ULL] = X[142ULL];
  t675[283ULL] = X[143ULL];
  t675[284ULL] = X[144ULL];
  t675[285ULL] = X[145ULL];
  t675[286ULL] = X[59ULL];
  t675[287ULL] = X[60ULL] * 0.1;
  t675[288ULL] = -X[69ULL];
  t675[289ULL] = X[146ULL];
  t675[290ULL] = X[145ULL];
  t675[291ULL] = t892;
  t675[292ULL] = X[147ULL];
  t675[293ULL] = X[148ULL] * 0.1;
  t675[294ULL] = X[149ULL];
  t675[295ULL] = X[150ULL] * 0.1;
  t675[296ULL] = X[86ULL];
  t675[297ULL] = X[151ULL];
  t675[298ULL] = X[152ULL];
  t675[299ULL] = X[15ULL] * 0.1;
  t675[300ULL] = X[16ULL];
  t675[301ULL] = X[153ULL];
  t675[302ULL] = X[154ULL];
  t675[303ULL] = t840;
  t675[304ULL] = X[147ULL];
  t675[305ULL] = X[148ULL] * 0.1;
  t675[306ULL] = X[151ULL];
  t675[307ULL] = X[155ULL];
  t675[308ULL] = X[153ULL];
  t675[309ULL] = X[156ULL];
  t675[310ULL] = X[149ULL];
  t675[311ULL] = X[150ULL] * 0.1;
  t675[312ULL] = X[152ULL];
  t675[313ULL] = X[157ULL];
  t675[314ULL] = X[154ULL];
  t675[315ULL] = X[158ULL];
  t675[316ULL] = t893;
  t675[317ULL] = t894;
  t675[318ULL] = X[15ULL] / (t893 == 0.0 ? 1.0E-16 : t893) * 100.0 + t894;
  t675[319ULL] = t1009;
  t675[320ULL] = intrm_sf_mf_237;
  t675[321ULL] = X[135ULL];
  t675[322ULL] = X[136ULL] * 0.1;
  t675[323ULL] = X[147ULL];
  t675[324ULL] = X[148ULL] * 0.1;
  t675[325ULL] = X[159ULL];
  t675[326ULL] = -X[138ULL];
  t675[327ULL] = -X[151ULL];
  t675[328ULL] = X[17ULL] * 0.1;
  t675[329ULL] = X[18ULL];
  t675[330ULL] = -X[153ULL];
  t675[331ULL] = X[135ULL];
  t675[332ULL] = X[136ULL] * 0.1;
  t675[333ULL] = -X[138ULL];
  t675[334ULL] = X[160ULL];
  t675[335ULL] = X[161ULL];
  t675[336ULL] = X[147ULL];
  t675[337ULL] = X[148ULL] * 0.1;
  t675[338ULL] = -X[151ULL];
  t675[339ULL] = X[162ULL];
  t675[340ULL] = -X[153ULL];
  t675[341ULL] = X[163ULL];
  t675[342ULL] = t897;
  t675[343ULL] = t898;
  t675[344ULL] = X[17ULL] / (t897 == 0.0 ? 1.0E-16 : t897) * 100.0 + t898;
  t675[345ULL] = intrm_sf_mf_273;
  t675[346ULL] = intrm_sf_mf_282;
  t675[347ULL] = X[149ULL];
  t675[348ULL] = X[150ULL] * 0.1;
  t675[349ULL] = X[118ULL];
  t675[350ULL] = X[119ULL] * 0.1;
  t675[351ULL] = X[164ULL];
  t675[352ULL] = -X[152ULL];
  t675[353ULL] = t901;
  t675[354ULL] = X[19ULL] * 0.1;
  t675[355ULL] = X[20ULL];
  t675[356ULL] = -X[154ULL];
  t675[357ULL] = t902;
  t675[358ULL] = X[149ULL];
  t675[359ULL] = X[150ULL] * 0.1;
  t675[360ULL] = -X[152ULL];
  t675[361ULL] = X[167ULL];
  t675[362ULL] = -X[154ULL];
  t675[363ULL] = X[168ULL];
  t675[364ULL] = X[118ULL];
  t675[365ULL] = X[119ULL] * 0.1;
  t675[366ULL] = t901;
  t675[367ULL] = X[169ULL];
  t675[368ULL] = t902;
  t675[369ULL] = X[170ULL];
  t675[370ULL] = t904;
  t675[371ULL] = t905;
  t675[372ULL] = X[19ULL] / (t904 == 0.0 ? 1.0E-16 : t904) * 100.0 + t905;
  t675[373ULL] = t896;
  t675[374ULL] = intrm_sf_mf_327;
  t675[375ULL] = X[87ULL] * 0.1;
  t675[376ULL] = X[88ULL];
  t675[377ULL] = X[51ULL] * 0.1;
  t675[378ULL] = X[52ULL];
  t675[379ULL] = X[171ULL];
  t675[380ULL] = t907 * 1000.0;
  t675[381ULL] = t907 * 1000.0;
  t675[382ULL] = -X[171ULL];
  t675[383ULL] = X[171ULL];
  t675[384ULL] = X[171ULL];
  t675[385ULL] = t907 * 1000.0;
  t675[386ULL] = t907 * 1000.0;
  t675[387ULL] = X[87ULL] * 0.1;
  t675[388ULL] = X[88ULL];
  t675[389ULL] = X[51ULL] * 0.1;
  t675[390ULL] = X[52ULL];
  t675[391ULL] = X[21ULL] * 0.1;
  t675[392ULL] = X[22ULL];
  t675[393ULL] = X[171ULL];
  t675[394ULL] = X[92ULL];
  t675[395ULL] = t910;
  t675[396ULL] = t911;
  t675[397ULL] = -X[90ULL];
  t675[398ULL] = t913;
  t675[399ULL] = t907;
  t675[400ULL] = t914;
  t675[401ULL] = X[87ULL] * 0.1;
  t675[402ULL] = X[88ULL];
  t675[403ULL] = -X[90ULL];
  t675[404ULL] = X[174ULL];
  t675[405ULL] = X[92ULL];
  t675[406ULL] = X[51ULL] * 0.1;
  t675[407ULL] = X[52ULL];
  t675[408ULL] = t913;
  t675[409ULL] = X[175ULL];
  t675[410ULL] = t910;
  t675[411ULL] = X[23ULL] * 1550.0031000062004;
  t675[412ULL] = X[176ULL];
  t675[413ULL] = X[177ULL];
  t675[414ULL] = X[21ULL] * 0.0063674739754068094 / (X[23ULL] == 0.0 ? 1.0E-16 :
    X[23ULL]) * 100.0 + X[22ULL];
  t675[415ULL] = intrm_sf_mf_367;
  t675[416ULL] = U_idx_1;
  t675[417ULL] = X[87ULL] * 0.1;
  t675[418ULL] = X[88ULL];
  t675[419ULL] = X[87ULL] * 0.1;
  t675[420ULL] = X[88ULL];
  t675[421ULL] = X[126ULL] * 0.1;
  t675[422ULL] = X[127ULL];
  t675[423ULL] = X[126ULL] * 0.1;
  t675[424ULL] = X[127ULL];
  t675[425ULL] = X[126ULL] * 0.1;
  t675[426ULL] = X[127ULL];
  t675[427ULL] = X[57ULL] * 0.1;
  t675[428ULL] = X[58ULL];
  t675[429ULL] = X[57ULL] * 0.1;
  t675[430ULL] = X[58ULL];
  t675[431ULL] = X[57ULL] * 0.1;
  t675[432ULL] = X[58ULL];
  t675[433ULL] = X[87ULL] * 0.1;
  t675[434ULL] = X[61ULL] * 0.1;
  t675[435ULL] = X[62ULL];
  t675[436ULL] = X[178ULL];
  t675[437ULL] = X[89ULL];
  t675[438ULL] = -X[89ULL];
  t675[439ULL] = X[61ULL] * 0.1;
  t675[440ULL] = X[62ULL];
  t675[441ULL] = X[89ULL];
  t675[442ULL] = X[179ULL];
  t675[443ULL] = t922;
  t675[444ULL] = X[178ULL];
  t675[445ULL] = -X[89ULL];
  t675[446ULL] = X[179ULL];
  t675[447ULL] = -t922;
  t675[448ULL] = t922;
  t675[449ULL] = -t922;
  t675[450ULL] = t903;
  t675[451ULL] = X[24ULL];
  t675[452ULL] = X[25ULL];
  t675[453ULL] = X[149ULL];
  t675[454ULL] = X[150ULL] * 0.1;
  t675[455ULL] = X[150ULL] * 99999.999999999985;
  t675[456ULL] = X[149ULL];
  t675[457ULL] = X[149ULL] - 273.15;
  t675[458ULL] = X[99ULL];
  t675[459ULL] = X[103ULL];
  t675[460ULL] = X[99ULL];
  t675[461ULL] = X[103ULL];
  t675[462ULL] = X[180ULL];
  t675[463ULL] = X[105ULL];
  t675[464ULL] = X[105ULL];
  t675[465ULL] = X[108ULL];
  t675[466ULL] = -X[112ULL];
  t675[467ULL] = X[108ULL];
  t675[468ULL] = -X[112ULL];
  t675[469ULL] = X[181ULL];
  t675[470ULL] = -Local_Restriction_2P1_convection_A_mdot;
  t675[471ULL] = -Local_Restriction_2P1_convection_A_mdot;
  t675[472ULL] = X[178ULL];
  t675[473ULL] = X[89ULL];
  t675[474ULL] = X[178ULL];
  t675[475ULL] = X[89ULL];
  t675[476ULL] = X[182ULL];
  t675[477ULL] = t922;
  t675[478ULL] = t922;
  t675[479ULL] = X[117ULL];
  t675[480ULL] = -X[120ULL];
  t675[481ULL] = X[117ULL];
  t675[482ULL] = -X[120ULL];
  t675[483ULL] = X[183ULL];
  t675[484ULL] = -X[122ULL];
  t675[485ULL] = -X[122ULL];
  t675[486ULL] = X[142ULL];
  t675[487ULL] = -X[143ULL];
  t675[488ULL] = X[142ULL];
  t675[489ULL] = -X[143ULL];
  t675[490ULL] = X[184ULL];
  t675[491ULL] = X[56ULL];
  t675[492ULL] = -X[68ULL];
  t675[493ULL] = X[56ULL];
  t675[494ULL] = -X[68ULL];
  t675[495ULL] = X[185ULL];
  t675[496ULL] = -X[63ULL];
  t675[497ULL] = -X[63ULL];
  t675[498ULL] = X[126ULL] * 0.1;
  t675[499ULL] = X[127ULL];
  t675[500ULL] = X[57ULL] * 0.1;
  t675[501ULL] = X[58ULL];
  t675[502ULL] = t887;
  t675[503ULL] = t928;
  t675[504ULL] = X[126ULL] * 0.1;
  t675[505ULL] = X[127ULL];
  t675[506ULL] = t887;
  t675[507ULL] = X[186ULL];
  t675[508ULL] = t869;
  t675[509ULL] = X[57ULL] * 0.1;
  t675[510ULL] = X[58ULL];
  t675[511ULL] = t928;
  t675[512ULL] = X[187ULL];
  t675[513ULL] = -t869;
  t675[514ULL] = t929;
  t675[515ULL] = t869;
  t675[516ULL] = -t869;
  t675[517ULL] = -t1252;
  t675[518ULL] = X[127ULL];
  t675[519ULL] = t929;
  t675[520ULL] = -t1252;
  t675[521ULL] = X[0ULL] * 0.1;
  t675[522ULL] = X[98ULL];
  t675[523ULL] = X[0ULL] * 0.1;
  t675[524ULL] = X[188ULL];
  t675[525ULL] = X[0ULL] * 0.1;
  t675[526ULL] = X[50ULL];
  t675[527ULL] = X[0ULL] * 0.1;
  t675[528ULL] = X[189ULL];
  t675[529ULL] = X[0ULL] * 0.1;
  t675[530ULL] = X[26ULL];
  t675[531ULL] = X[27ULL];
  t675[532ULL] = X[28ULL];
  t675[533ULL] = X[29ULL];
  t675[534ULL] = t933;
  t675[535ULL] = t934;
  t675[536ULL] = X[190ULL];
  t675[537ULL] = t935;
  t675[538ULL] = X[28ULL] / (t1039 == 0.0 ? 1.0E-16 : t1039);
  t675[539ULL] = -X[103ULL];
  t675[540ULL] = t939;
  t675[541ULL] = t940;
  t675[542ULL] = -X[105ULL];
  t675[543ULL] = -X[55ULL];
  t675[544ULL] = -X[53ULL];
  t675[545ULL] = X[191ULL];
  t675[546ULL] = X[192ULL];
  t675[547ULL] = X[114ULL];
  t675[548ULL] = X[130ULL];
  t675[549ULL] = Steam_Drum_h_liq;
  t675[550ULL] = t941;
  t675[551ULL] = Steam_Drum_unorm_liq;
  t675[552ULL] = t931;
  t675[553ULL] = t943;
  t675[554ULL] = t944;
  t675[555ULL] = t935;
  t675[556ULL] = X[0ULL] * 0.1;
  t675[557ULL] = X[98ULL];
  t675[558ULL] = -X[103ULL];
  t675[559ULL] = X[193ULL];
  t675[560ULL] = -X[105ULL];
  t675[561ULL] = X[0ULL] * 0.1;
  t675[562ULL] = X[188ULL];
  t675[563ULL] = X[191ULL];
  t675[564ULL] = X[194ULL];
  t675[565ULL] = X[192ULL];
  t675[566ULL] = X[0ULL] * 0.1;
  t675[567ULL] = X[50ULL];
  t675[568ULL] = -X[53ULL];
  t675[569ULL] = X[195ULL];
  t675[570ULL] = -X[55ULL];
  t675[571ULL] = X[0ULL] * 0.1;
  t675[572ULL] = X[189ULL];
  t675[573ULL] = X[130ULL];
  t675[574ULL] = X[196ULL];
  t675[575ULL] = X[114ULL];
  t675[576ULL] = t1039;
  t675[577ULL] = t945;
  t675[578ULL] = t935;
  t675[579ULL] = X[118ULL];
  t675[580ULL] = X[119ULL] * 0.1;
  t675[581ULL] = X[51ULL] * 0.1;
  t675[582ULL] = X[52ULL];
  t675[583ULL] = X[133ULL];
  t675[584ULL] = X[134ULL] * 0.1;
  t675[585ULL] = X[0ULL] * 0.1;
  t675[586ULL] = X[188ULL];
  t675[587ULL] = X[118ULL];
  t675[588ULL] = X[119ULL] * 0.1;
  t675[589ULL] = X[133ULL];
  t675[590ULL] = X[134ULL] * 0.1;
  t675[591ULL] = X[30ULL];
  t675[592ULL] = X[31ULL] * 0.1;
  t675[593ULL] = X[32ULL];
  t675[594ULL] = X[166ULL];
  t675[595ULL] = t950;
  t675[596ULL] = t976;
  t675[597ULL] = X[30ULL];
  t675[598ULL] = X[165ULL];
  t675[599ULL] = -X[137ULL];
  t675[600ULL] = X[199ULL];
  t675[601ULL] = X[118ULL];
  t675[602ULL] = X[119ULL] * 0.1;
  t675[603ULL] = X[200ULL];
  t675[604ULL] = X[201ULL];
  t675[605ULL] = X[166ULL];
  t675[606ULL] = X[202ULL];
  t675[607ULL] = X[118ULL];
  t675[608ULL] = X[119ULL] * 0.1;
  t675[609ULL] = X[165ULL];
  t675[610ULL] = X[203ULL];
  t675[611ULL] = X[166ULL];
  t675[612ULL] = X[204ULL];
  t675[613ULL] = X[133ULL];
  t675[614ULL] = X[134ULL] * 0.1;
  t675[615ULL] = X[205ULL];
  t675[616ULL] = X[206ULL];
  t675[617ULL] = X[207ULL];
  t675[618ULL] = X[133ULL];
  t675[619ULL] = X[134ULL] * 0.1;
  t675[620ULL] = -X[137ULL];
  t675[621ULL] = X[208ULL];
  t675[622ULL] = X[209ULL];
  t675[623ULL] = (t950 + t976) / 2.0 * 0.36562301792487523;
  t675[624ULL] = t987;
  t675[625ULL] = X[31ULL] / (t950 == 0.0 ? 1.0E-16 : t950) * 100.0 + t987;
  t675[626ULL] = t989;
  t675[627ULL] = X[31ULL] / (t976 == 0.0 ? 1.0E-16 : t976) * 100.0 + t989;
  t675[628ULL] = X[51ULL] * 0.1;
  t675[629ULL] = X[52ULL];
  t675[630ULL] = X[0ULL] * 0.1;
  t675[631ULL] = X[188ULL];
  t675[632ULL] = X[37ULL] * 0.001;
  t675[633ULL] = X[33ULL] * 0.1;
  t675[634ULL] = X[34ULL];
  t675[635ULL] = t946;
  t675[636ULL] = t952;
  t675[637ULL] = X[35ULL];
  t675[638ULL] = X[38ULL];
  t675[639ULL] = X[198ULL] * 0.001;
  t675[640ULL] = t960;
  t675[641ULL] = X[36ULL] * 0.001;
  t675[642ULL] = X[40ULL] * 0.001;
  t675[643ULL] = X[39ULL] * 0.001;
  t675[644ULL] = X[197ULL];
  t675[645ULL] = t967;
  t675[646ULL] = t970;
  t675[647ULL] = t973;
  t675[648ULL] = t985;
  t675[649ULL] = t983;
  t675[650ULL] = intrm_sf_mf_511;
  t675[651ULL] = X[172ULL];
  t675[652ULL] = -X[192ULL];
  t675[653ULL] = X[173ULL];
  t675[654ULL] = -X[191ULL];
  t675[655ULL] = X[210ULL];
  t675[656ULL] = Steam_Generator_two_phase_fluid_T_out;
  t675[657ULL] = X[51ULL] * 0.1;
  t675[658ULL] = X[52ULL];
  t675[659ULL] = X[173ULL];
  t675[660ULL] = X[211ULL];
  t675[661ULL] = X[172ULL];
  t675[662ULL] = X[0ULL] * 0.1;
  t675[663ULL] = X[188ULL];
  t675[664ULL] = -X[191ULL];
  t675[665ULL] = X[212ULL];
  t675[666ULL] = -X[192ULL];
  t675[667ULL] = X[41ULL];
  t675[668ULL] = X[33ULL] * Steam_Generator_two_phase_fluid_mass_liq * 100.0 +
    X[35ULL];
  t675[669ULL] = t993 * X[41ULL] / (t964 == 0.0 ? 1.0E-16 : t964);
  t675[670ULL] = Steam_Generator_two_phase_fluid_mass_mix;
  t675[671ULL] = t972;
  t675[672ULL] = t827;
  t675[673ULL] = intrm_sf_mf_531;
  t675[674ULL] = t981;
  t675[675ULL] = t980;
  t675[676ULL] = X[37ULL] * 0.001;
  t675[677ULL] = Steam_Generator_NTU_liq;
  t675[678ULL] = Steam_Generator_Rth_mix;
  t675[679ULL] = t957;
  t675[680ULL] = Steam_Generator_Q;
  t675[681ULL] = t942;
  t675[682ULL] = Steam_Generator_Q_mix;
  t675[683ULL] = t954;
  t675[684ULL] = X[36ULL] * 0.001;
  t675[685ULL] = X[40ULL] * 0.001;
  t675[686ULL] = X[39ULL] * 0.001;
  t675[687ULL] = zc_int32 + (intrm_sf_mf_485 ? 0.0 : intrm_sf_mf_484 ? t808 :
    0.0);
  t675[688ULL] = zc_int39;
  t675[689ULL] = t839;
  t675[690ULL] = t985 >= 0.001 ? t947 : 0.0;
  t675[691ULL] = t983 >= 0.001 ? t988 : 0.0;
  t675[692ULL] = t974;
  t675[693ULL] = X[38ULL];
  t675[694ULL] = U_idx_0;
  t675[695ULL] = t840 * 0.001;
  t675[696ULL] = -X[213ULL] - 0.0025;
  t675[697ULL] = 1.0 - U_idx_2;
  t675[698ULL] = Subsystem3_PS_Gain_O;
  t675[699ULL] = U_idx_2;
  t675[700ULL] = Subsystem3_PS_Gain1_O;
  t675[701ULL] = Subsystem3_PS_Gain1_O;
  t675[702ULL] = Subsystem3_PS_Gain_O;
  t675[703ULL] = U_idx_2;
  t675[704ULL] = 1.0 - U_idx_2;
  t675[705ULL] = U_idx_2;
  t675[706ULL] = Subsystem3_PS_Gain_O;
  t675[707ULL] = Subsystem3_PS_Gain1_O;
  t675[708ULL] = -X[213ULL] - 0.0025;
  t675[709ULL] = t996;
  t675[710ULL] = t821;
  t675[711ULL] = D_idx_0;
  t675[712ULL] = t996;
  t675[713ULL] = t821;
  t675[714ULL] = D_idx_1;
  t675[715ULL] = D_idx_2;
  t675[716ULL] = D_idx_3;
  t675[717ULL] = t997;
  t675[718ULL] = -zc_int35;
  t675[719ULL] = D_idx_4;
  t675[720ULL] = t997;
  t675[721ULL] = -zc_int35;
  t675[722ULL] = D_idx_5;
  t675[723ULL] = D_idx_6;
  t675[724ULL] = D_idx_7;
  t675[725ULL] = -X[213ULL] - 0.0025;
  t675[726ULL] = X[133ULL];
  t675[727ULL] = X[134ULL] * 0.1;
  t675[728ULL] = X[59ULL];
  t675[729ULL] = X[60ULL] * 0.1;
  t675[730ULL] = X[51ULL] * 0.1;
  t675[731ULL] = X[52ULL];
  t675[732ULL] = X[51ULL] * Thermodynamic_Properties_Sensor_2P_V * 100.0 + X
    [52ULL];
  t675[733ULL] = t999 * 0.001;
  t675[734ULL] = t1000;
  t675[735ULL] = Thermodynamic_Properties_Sensor_2P_V;
  t675[736ULL] = X[0ULL] * 0.1;
  t675[737ULL] = X[188ULL];
  t675[738ULL] = X[0ULL] * t938 * 100.0 + X[188ULL];
  t675[739ULL] = t1002 * 0.001;
  t675[740ULL] = t1003;
  t675[741ULL] = t938;
  t675[742ULL] = t1003 - 273.15;
  t675[743ULL] = X[126ULL] * 0.1;
  t675[744ULL] = X[127ULL];
  t675[745ULL] = X[126ULL] * t932 * 100.0 + X[127ULL];
  t675[746ULL] = t1005 * 0.001;
  t675[747ULL] = t1006;
  t675[748ULL] = t932;
  t675[749ULL] = t932;
  t675[750ULL] = t1000 - 273.15;
  t675[751ULL] = X[0ULL] * 0.1;
  t675[752ULL] = X[188ULL];
  t675[753ULL] = X[61ULL] * 0.1;
  t675[754ULL] = X[62ULL];
  t675[755ULL] = X[214ULL];
  t675[756ULL] = X[0ULL] * 0.1;
  t675[757ULL] = X[188ULL];
  t675[758ULL] = X[215ULL];
  t675[759ULL] = X[215ULL];
  t675[760ULL] = X[214ULL];
  t675[761ULL] = X[126ULL] * 0.1;
  t675[762ULL] = X[127ULL];
  t675[763ULL] = X[126ULL] * 0.1;
  t675[764ULL] = X[127ULL];
  t675[765ULL] = X[57ULL] * 0.1;
  t675[766ULL] = X[58ULL];
  t675[767ULL] = X[131ULL];
  t675[768ULL] = -X[131ULL];
  t675[769ULL] = X[213ULL];
  t675[770ULL] = X[126ULL] * 0.1;
  t675[771ULL] = X[127ULL];
  t675[772ULL] = X[131ULL];
  t675[773ULL] = X[216ULL];
  t675[774ULL] = X[128ULL];
  t675[775ULL] = X[57ULL] * 0.1;
  t675[776ULL] = X[58ULL];
  t675[777ULL] = -X[131ULL];
  t675[778ULL] = X[216ULL];
  t675[779ULL] = -X[128ULL];
  t675[780ULL] = X[128ULL];
  t675[781ULL] = -X[128ULL];
  t675[782ULL] = X[42ULL];
  t675[783ULL] = X[43ULL];
  t675[784ULL] = X[57ULL] * 0.1;
  t675[785ULL] = X[58ULL];
  t675[786ULL] = X[57ULL] * 0.1;
  t675[787ULL] = X[58ULL];
  t675[788ULL] = X[57ULL] * 0.1;
  t675[789ULL] = X[58ULL];
  t675[790ULL] = X[217ULL];
  t675[791ULL] = -X[217ULL];
  t675[792ULL] = -X[213ULL] - 0.005;
  t675[793ULL] = X[57ULL] * 0.1;
  t675[794ULL] = X[58ULL];
  t675[795ULL] = X[217ULL];
  t675[796ULL] = X[218ULL];
  t675[797ULL] = X[219ULL];
  t675[798ULL] = X[57ULL] * 0.1;
  t675[799ULL] = X[58ULL];
  t675[800ULL] = -X[217ULL];
  t675[801ULL] = X[218ULL];
  t675[802ULL] = -X[219ULL];
  t675[803ULL] = X[219ULL];
  t675[804ULL] = -X[219ULL];
  t675[805ULL] = X[44ULL];
  t675[806ULL] = X[45ULL];
  t675[807ULL] = X[0ULL] * 0.1;
  t675[808ULL] = X[189ULL];
  t675[809ULL] = X[0ULL] * 0.1;
  t675[810ULL] = X[189ULL];
  t675[811ULL] = X[126ULL] * 0.1;
  t675[812ULL] = X[127ULL];
  t675[813ULL] = x4_Way_3_Position_Directional_Valve_P_A_Phi_A;
  t675[814ULL] = -x4_Way_3_Position_Directional_Valve_P_A_Phi_A;
  t675[815ULL] = -X[213ULL] - 0.005;
  t675[816ULL] = X[0ULL] * 0.1;
  t675[817ULL] = X[189ULL];
  t675[818ULL] = x4_Way_3_Position_Directional_Valve_P_A_Phi_A;
  t675[819ULL] = X[220ULL];
  t675[820ULL] = X[129ULL];
  t675[821ULL] = X[126ULL] * 0.1;
  t675[822ULL] = X[127ULL];
  t675[823ULL] = -x4_Way_3_Position_Directional_Valve_P_A_Phi_A;
  t675[824ULL] = X[220ULL];
  t675[825ULL] = -X[129ULL];
  t675[826ULL] = X[129ULL];
  t675[827ULL] = -X[129ULL];
  t675[828ULL] = X[46ULL];
  t675[829ULL] = X[47ULL];
  t675[830ULL] = X[0ULL] * 0.1;
  t675[831ULL] = X[189ULL];
  t675[832ULL] = X[57ULL] * 0.1;
  t675[833ULL] = X[58ULL];
  t675[834ULL] = X[132ULL];
  t675[835ULL] = -X[132ULL];
  t675[836ULL] = X[213ULL];
  t675[837ULL] = X[0ULL] * 0.1;
  t675[838ULL] = X[189ULL];
  t675[839ULL] = X[132ULL];
  t675[840ULL] = X[221ULL];
  t675[841ULL] = t900;
  t675[842ULL] = X[57ULL] * 0.1;
  t675[843ULL] = X[58ULL];
  t675[844ULL] = -X[132ULL];
  t675[845ULL] = X[221ULL];
  t675[846ULL] = -t900;
  t675[847ULL] = t900;
  t675[848ULL] = -t900;
  t675[849ULL] = X[48ULL];
  t675[850ULL] = X[49ULL];
  t675[851ULL] = -X[213ULL] - 0.0025;
  t675[852ULL] = X[57ULL] * 0.1;
  t675[853ULL] = X[58ULL];
  t675[854ULL] = -X[213ULL] - 0.0025;
  t675[855ULL] = -(-X[213ULL] - 0.0025);
  t675[856ULL] = -(-X[213ULL] - 0.0025);
  t675[857ULL] = X[213ULL];
  t675[858ULL] = -X[213ULL] - 0.0025;
  t675[859ULL] = -X[213ULL] - 0.005;
  for (b = 0; b < 860; b++) {
    out.mX[b] = t675[b];
  }

  (void)LC;
  (void)t1254;
  return 0;
}
