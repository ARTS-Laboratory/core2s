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
  NeDynamicSystemInput *t1292, NeDsMethodOutput *t1293)
{
  ETTS0 ad_efOut;
  ETTS0 ae_efOut;
  ETTS0 ah_efOut;
  ETTS0 bb_efOut;
  ETTS0 bi_efOut;
  ETTS0 cd_efOut;
  ETTS0 cf_efOut;
  ETTS0 cg_efOut;
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
  ETTS0 fg_efOut;
  ETTS0 fi_efOut;
  ETTS0 g_efOut;
  ETTS0 ge_efOut;
  ETTS0 gf_efOut;
  ETTS0 h_efOut;
  ETTS0 hb_efOut;
  ETTS0 hc_efOut;
  ETTS0 hd_efOut;
  ETTS0 he_efOut;
  ETTS0 hg_efOut;
  ETTS0 if_efOut;
  ETTS0 j_efOut;
  ETTS0 jd_efOut;
  ETTS0 jg_efOut;
  ETTS0 kc_efOut;
  ETTS0 kd_efOut;
  ETTS0 ke_efOut;
  ETTS0 kf_efOut;
  ETTS0 kg_efOut;
  ETTS0 l_efOut;
  ETTS0 lc_efOut;
  ETTS0 le_efOut;
  ETTS0 lh_efOut;
  ETTS0 m_efOut;
  ETTS0 md_efOut;
  ETTS0 mg_efOut;
  ETTS0 nc_efOut;
  ETTS0 nd_efOut;
  ETTS0 ne_efOut;
  ETTS0 o_efOut;
  ETTS0 oe_efOut;
  ETTS0 og_efOut;
  ETTS0 p_efOut;
  ETTS0 pb_efOut;
  ETTS0 pd_efOut;
  ETTS0 pf_efOut;
  ETTS0 qc_efOut;
  ETTS0 qd_efOut;
  ETTS0 r_efOut;
  ETTS0 re_efOut;
  ETTS0 rf_efOut;
  ETTS0 rg_efOut;
  ETTS0 sc_efOut;
  ETTS0 sd_efOut;
  ETTS0 t27;
  ETTS0 t49;
  ETTS0 t53;
  ETTS0 t56;
  ETTS0 t61;
  ETTS0 t63;
  ETTS0 t64;
  ETTS0 t66;
  ETTS0 t67;
  ETTS0 t68;
  ETTS0 t69;
  ETTS0 t71;
  ETTS0 t72;
  ETTS0 t75;
  ETTS0 t77;
  ETTS0 t78;
  ETTS0 t81;
  ETTS0 t82;
  ETTS0 t_efOut;
  ETTS0 tb_efOut;
  ETTS0 td_efOut;
  ETTS0 uc_efOut;
  ETTS0 ue_efOut;
  ETTS0 vd_efOut;
  ETTS0 vf_efOut;
  ETTS0 vg_efOut;
  ETTS0 vh_efOut;
  ETTS0 w_efOut;
  ETTS0 wc_efOut;
  ETTS0 wd_efOut;
  ETTS0 xe_efOut;
  ETTS0 xf_efOut;
  ETTS0 yc_efOut;
  ETTS0 yd_efOut;
  PmRealVector out;
  real_T t694[762];
  real_T X[183];
  real_T t833[2];
  real_T t836[2];
  real_T ab_efOut[1];
  real_T ac_efOut[1];
  real_T af_efOut[1];
  real_T ag_efOut[1];
  real_T ai_efOut[1];
  real_T b_efOut[1];
  real_T bc_efOut[1];
  real_T bd_efOut[1];
  real_T be_efOut[1];
  real_T bf_efOut[1];
  real_T bg_efOut[1];
  real_T bh_efOut[1];
  real_T c_efOut[1];
  real_T cb_efOut[1];
  real_T cc_efOut[1];
  real_T ce_efOut[1];
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
  real_T ei_efOut[1];
  real_T f_efOut[1];
  real_T fc_efOut[1];
  real_T fe_efOut[1];
  real_T ff_efOut[1];
  real_T fh_efOut[1];
  real_T gb_efOut[1];
  real_T gc_efOut[1];
  real_T gd_efOut[1];
  real_T gg_efOut[1];
  real_T gh_efOut[1];
  real_T gi_efOut[1];
  real_T hf_efOut[1];
  real_T hh_efOut[1];
  real_T hi_efOut[1];
  real_T i_efOut[1];
  real_T ib_efOut[1];
  real_T ic_efOut[1];
  real_T id_efOut[1];
  real_T ie_efOut[1];
  real_T ig_efOut[1];
  real_T ih_efOut[1];
  real_T ii_efOut[1];
  real_T jb_efOut[1];
  real_T jc_efOut[1];
  real_T je_efOut[1];
  real_T jf_efOut[1];
  real_T jh_efOut[1];
  real_T k_efOut[1];
  real_T kb_efOut[1];
  real_T kh_efOut[1];
  real_T lb_efOut[1];
  real_T ld_efOut[1];
  real_T lf_efOut[1];
  real_T lg_efOut[1];
  real_T mb_efOut[1];
  real_T mc_efOut[1];
  real_T me_efOut[1];
  real_T mf_efOut[1];
  real_T mh_efOut[1];
  real_T n_efOut[1];
  real_T nb_efOut[1];
  real_T nf_efOut[1];
  real_T ng_efOut[1];
  real_T nh_efOut[1];
  real_T ob_efOut[1];
  real_T oc_efOut[1];
  real_T od_efOut[1];
  real_T of_efOut[1];
  real_T oh_efOut[1];
  real_T pc_efOut[1];
  real_T pe_efOut[1];
  real_T pg_efOut[1];
  real_T ph_efOut[1];
  real_T q_efOut[1];
  real_T qb_efOut[1];
  real_T qe_efOut[1];
  real_T qf_efOut[1];
  real_T qg_efOut[1];
  real_T qh_efOut[1];
  real_T rb_efOut[1];
  real_T rc_efOut[1];
  real_T rd_efOut[1];
  real_T rh_efOut[1];
  real_T s_efOut[1];
  real_T sb_efOut[1];
  real_T se_efOut[1];
  real_T sf_efOut[1];
  real_T sg_efOut[1];
  real_T sh_efOut[1];
  real_T t812[1];
  real_T t813[1];
  real_T t818[1];
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
  real_T wb_efOut[1];
  real_T we_efOut[1];
  real_T wf_efOut[1];
  real_T wg_efOut[1];
  real_T wh_efOut[1];
  real_T x_efOut[1];
  real_T xb_efOut[1];
  real_T xc_efOut[1];
  real_T xd_efOut[1];
  real_T xg_efOut[1];
  real_T xh_efOut[1];
  real_T y_efOut[1];
  real_T yb_efOut[1];
  real_T ye_efOut[1];
  real_T yf_efOut[1];
  real_T yg_efOut[1];
  real_T yh_efOut[1];
  real_T Condenser_Q_cond;
  real_T Condenser_effectiveness_mix;
  real_T Condenser_thermal_liquid_mass;
  real_T Condenser_thermal_liquid_rho_in;
  real_T Condenser_two_phase_fluid_T_out;
  real_T Condenser_two_phase_fluid_h_out;
  real_T Controlled_Heat_Flow_Rate_Source_Q;
  real_T Fixed_Displacement_Pump_2P_mdot_leakage;
  real_T Mass_Flow_Rate_Source_TL1_power;
  real_T Pipe_TL1_rho_I;
  real_T Preheating_Pipe_2P_v_I;
  real_T Preheating_Thermodynamic_Properties_Sensor_2P1_V;
  real_T Simscape_Component_ideal_enthalpy_drop;
  real_T Simscape_Component_ideal_outlet_enthalpy;
  real_T Simscape_Component_ideal_outlet_quality;
  real_T Steam_Drum_h_liq;
  real_T Steam_Generator_Q;
  real_T Steam_Generator_Q_cond;
  real_T Steam_Generator_Q_mix;
  real_T Steam_Generator_Rth_mix;
  real_T Steam_Generator_two_phase_fluid_T_out;
  real_T Steam_Generator_two_phase_fluid_rho_mix;
  real_T Thermodynamic_Properties_Sensor_2P1_T;
  real_T Thermodynamic_Properties_Sensor_2P1_V;
  real_T Thermodynamic_Properties_Sensor_2P4_V;
  real_T U_idx_0;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T U_idx_3;
  real_T intrm_sf_mf_105;
  real_T intrm_sf_mf_264;
  real_T intrm_sf_mf_313;
  real_T intrm_sf_mf_329;
  real_T intrm_sf_mf_408;
  real_T intrm_sf_mf_424;
  real_T intrm_sf_mf_426;
  real_T intrm_sf_mf_486;
  real_T intrm_sf_mf_511;
  real_T intrm_sf_mf_59;
  real_T t1000;
  real_T t1001;
  real_T t1003;
  real_T t1005;
  real_T t1007;
  real_T t1008;
  real_T t1009;
  real_T t1010;
  real_T t1011;
  real_T t1012;
  real_T t1013;
  real_T t1018;
  real_T t1021;
  real_T t1023;
  real_T t1024;
  real_T t1025;
  real_T t1026;
  real_T t1027;
  real_T t1028;
  real_T t1030;
  real_T t1031;
  real_T t1032;
  real_T t1035;
  real_T t1036;
  real_T t1038;
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
  real_T t1051;
  real_T t1052;
  real_T t1079;
  real_T t1141;
  real_T t1251;
  real_T t1265;
  real_T t1273;
  real_T t1274;
  real_T t1284;
  real_T t1286;
  real_T t1288;
  real_T t1291;
  real_T t717_idx_0;
  real_T t841;
  real_T t856;
  real_T t858;
  real_T t859;
  real_T t861;
  real_T t864;
  real_T t865;
  real_T t866;
  real_T t867;
  real_T t869;
  real_T t870;
  real_T t871;
  real_T t873;
  real_T t875;
  real_T t876;
  real_T t877;
  real_T t879;
  real_T t880;
  real_T t881;
  real_T t882;
  real_T t883;
  real_T t884;
  real_T t885;
  real_T t886;
  real_T t887;
  real_T t888;
  real_T t889;
  real_T t891;
  real_T t895;
  real_T t897;
  real_T t899;
  real_T t900;
  real_T t901;
  real_T t902;
  real_T t905;
  real_T t908;
  real_T t911;
  real_T t917;
  real_T t919;
  real_T t920;
  real_T t921;
  real_T t923;
  real_T t924;
  real_T t925;
  real_T t926;
  real_T t927;
  real_T t930;
  real_T t932;
  real_T t933;
  real_T t935;
  real_T t936;
  real_T t939;
  real_T t941;
  real_T t944;
  real_T t945;
  real_T t948;
  real_T t949;
  real_T t950;
  real_T t952;
  real_T t953;
  real_T t967;
  real_T t971;
  real_T t972;
  real_T t973;
  real_T t974;
  real_T t975;
  real_T t976;
  real_T t977;
  real_T t978;
  real_T t982;
  real_T t983;
  real_T t984;
  real_T t985;
  real_T t986;
  real_T t987;
  real_T t988;
  real_T t989;
  real_T t990;
  real_T t993;
  real_T t994;
  real_T t995;
  real_T t997;
  real_T zc_int11;
  real_T zc_int17;
  real_T zc_int22;
  size_t t101[1];
  size_t t113[1];
  size_t t490[1];
  size_t t838[1];
  size_t t84[1];
  size_t t85[1];
  size_t t98[1];
  int32_T M[129];
  int32_T b;
  boolean_T intrm_sf_mf_411;
  boolean_T intrm_sf_mf_415;
  boolean_T intrm_sf_mf_416;
  boolean_T intrm_sf_mf_417;
  boolean_T intrm_sf_mf_418;
  boolean_T intrm_sf_mf_419;
  boolean_T intrm_sf_mf_420;
  boolean_T intrm_sf_mf_421;
  boolean_T intrm_sf_mf_431;
  boolean_T intrm_sf_mf_432;
  boolean_T intrm_sf_mf_433;
  boolean_T intrm_sf_mf_435;
  boolean_T intrm_sf_mf_436;
  boolean_T intrm_sf_mf_437;
  boolean_T intrm_sf_mf_439;
  boolean_T intrm_sf_mf_440;
  boolean_T intrm_sf_mf_450;
  boolean_T intrm_sf_mf_451;
  boolean_T intrm_sf_mf_452;
  boolean_T intrm_sf_mf_50;
  boolean_T intrm_sf_mf_503;
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
    M[b] = t1292->mM.mX[b];
  }

  U_idx_0 = t1292->mU.mX[0];
  U_idx_1 = t1292->mU.mX[1];
  U_idx_2 = t1292->mU.mX[2];
  U_idx_3 = t1292->mU.mX[3];
  for (b = 0; b < 183; b++) {
    X[b] = t1292->mX.mX[b];
  }

  out = t1293->mLOG;
  t821[0ULL] = X[0ULL];
  t84[0] = 100ULL;
  t85[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t821[0ULL], &t84
    [0ULL], &t85[0ULL]);
  t82 = efOut;
  t836[0ULL] = t82.mField0[0ULL];
  t836[1ULL] = t82.mField0[1ULL];
  t838[0ULL] = t82.mField2[0ULL];
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t836[0ULL], &t838[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t84[0ULL], &t85[0ULL]);
  t818[0] = b_efOut[0];
  Steam_Drum_h_liq = t818[0ULL];
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t836[0ULL], &t838[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t84[0ULL], &t85[0ULL]);
  t813[0] = c_efOut[0];
  Steam_Generator_two_phase_fluid_T_out = t813[0ULL];
  t818[0ULL] = X[43ULL];
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t818[0ULL],
    &t84[0ULL], &t85[0ULL]);
  t81 = d_efOut;
  tlu2_1d_linear_linear_value(&e_efOut[0ULL], &t81.mField0[0ULL], &t81.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t84[0ULL], &t85[0ULL]);
  t812[0] = e_efOut[0];
  zc_int17 = t812[0ULL];
  tlu2_1d_linear_linear_value(&f_efOut[0ULL], &t81.mField0[0ULL], &t81.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t84[0ULL], &t85[0ULL]);
  t717_idx_0 = f_efOut[0];
  if (X[44ULL] <= zc_int17) {
    Preheating_Thermodynamic_Properties_Sensor_2P1_V = X[44ULL] / (zc_int17 ==
      0.0 ? 1.0E-16 : zc_int17) - 1.0;
  } else if (X[44ULL] >= t717_idx_0) {
    Preheating_Thermodynamic_Properties_Sensor_2P1_V = (X[44ULL] - 4000.0) /
      (4000.0 - t717_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t717_idx_0) + 2.0;
  } else {
    t859 = t717_idx_0 - zc_int17;
    Preheating_Thermodynamic_Properties_Sensor_2P1_V = (X[44ULL] - zc_int17) /
      (t859 == 0.0 ? 1.0E-16 : t859);
  }

  t813[0ULL] = X[3ULL];
  t98[0] = 28ULL;
  tlu2_linear_nearest_prelookup(&g_efOut.mField0[0ULL], &g_efOut.mField1[0ULL],
    &g_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t813[0ULL],
    &t98[0ULL], &t85[0ULL]);
  t71 = g_efOut;
  t813[0ULL] = X[4ULL];
  t101[0] = 27ULL;
  tlu2_linear_nearest_prelookup(&h_efOut.mField0[0ULL], &h_efOut.mField1[0ULL],
    &h_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t813[0ULL],
    &t101[0ULL], &t85[0ULL]);
  t67 = h_efOut;
  tlu2_2d_linear_nearest_value(&i_efOut[0ULL], &t71.mField0[0ULL], &t71.mField2
    [0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField5, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t717_idx_0 = i_efOut[0];
  Condenser_two_phase_fluid_T_out = t717_idx_0;
  t813[0ULL] = X[5ULL];
  tlu2_linear_nearest_prelookup(&j_efOut.mField0[0ULL], &j_efOut.mField1[0ULL],
    &j_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t813[0ULL],
    &t98[0ULL], &t85[0ULL]);
  t78 = j_efOut;
  tlu2_2d_linear_nearest_value(&k_efOut[0ULL], &t78.mField0[0ULL], &t78.mField2
    [0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField5, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t717_idx_0 = k_efOut[0];
  Condenser_two_phase_fluid_T_out = (Condenser_two_phase_fluid_T_out +
    t717_idx_0) / 2.0;
  Condenser_thermal_liquid_rho_in = Condenser_two_phase_fluid_T_out *
    0.11700000000000003 / 0.022;
  t813[0] = 1.0;
  t113[0] = 50ULL;
  tlu2_linear_nearest_prelookup(&l_efOut.mField0[0ULL], &l_efOut.mField1[0ULL],
    &l_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t813[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t63 = l_efOut;
  t812[0ULL] = X[6ULL];
  tlu2_linear_nearest_prelookup(&m_efOut.mField0[0ULL], &m_efOut.mField1[0ULL],
    &m_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t812[0ULL],
    &t84[0ULL], &t85[0ULL]);
  t66 = m_efOut;
  tlu2_2d_linear_nearest_value(&n_efOut[0ULL], &t63.mField0[0ULL], &t63.mField2
    [0ULL], &t66.mField0[0ULL], &t66.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField8, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t717_idx_0 = n_efOut[0];
  t856 = t717_idx_0;
  Condenser_effectiveness_mix = t717_idx_0 * 0.02356194490192345 / 0.02;
  t858 = (Condenser_thermal_liquid_rho_in + Condenser_effectiveness_mix) / 2.0;
  t812[0ULL] = X[3ULL];
  tlu2_linear_linear_prelookup(&o_efOut.mField0[0ULL], &o_efOut.mField1[0ULL],
    &o_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t812[0ULL],
    &t98[0ULL], &t85[0ULL]);
  t77 = o_efOut;
  t812[0ULL] = X[4ULL];
  tlu2_linear_linear_prelookup(&p_efOut.mField0[0ULL], &p_efOut.mField1[0ULL],
    &p_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t812[0ULL],
    &t101[0ULL], &t85[0ULL]);
  t75 = p_efOut;
  tlu2_2d_linear_linear_value(&q_efOut[0ULL], &t77.mField0[0ULL], &t77.mField2
    [0ULL], &t75.mField0[0ULL], &t75.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField9, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t717_idx_0 = q_efOut[0];
  t859 = t717_idx_0;
  t812[0ULL] = X[5ULL];
  tlu2_linear_linear_prelookup(&r_efOut.mField0[0ULL], &r_efOut.mField1[0ULL],
    &r_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t812[0ULL],
    &t98[0ULL], &t85[0ULL]);
  t72 = r_efOut;
  tlu2_2d_linear_linear_value(&s_efOut[0ULL], &t72.mField0[0ULL], &t72.mField2
    [0ULL], &t75.mField0[0ULL], &t75.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField9, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t717_idx_0 = s_efOut[0];
  t859 = (t859 + t717_idx_0) / 2.0;
  Condenser_Q_cond = (X[55ULL] - 10.0) / 2.0;
  t861 = tanh(t859 * Condenser_Q_cond * 3.0 / (Condenser_thermal_liquid_rho_in ==
    0.0 ? 1.0E-16 : Condenser_thermal_liquid_rho_in)) * t859 * Condenser_Q_cond;
  Condenser_thermal_liquid_rho_in = t858 + t861;
  t812[0ULL] = X[6ULL];
  tlu2_linear_linear_prelookup(&t_efOut.mField0[0ULL], &t_efOut.mField1[0ULL],
    &t_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t812[0ULL],
    &t84[0ULL], &t85[0ULL]);
  t64 = t_efOut;
  tlu2_1d_linear_linear_value(&u_efOut[0ULL], &t64.mField0[0ULL], &t64.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t84[0ULL], &t85[0ULL]);
  t717_idx_0 = u_efOut[0];
  t859 = t717_idx_0;
  tlu2_1d_linear_linear_value(&v_efOut[0ULL], &t64.mField0[0ULL], &t64.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t84[0ULL], &t85[0ULL]);
  t717_idx_0 = v_efOut[0];
  intrm_sf_mf_59 = t717_idx_0;
  if (X[7ULL] <= t859) {
    intrm_sf_mf_105 = X[7ULL] / (t859 == 0.0 ? 1.0E-16 : t859) - 1.0;
  } else if (X[7ULL] >= t717_idx_0) {
    intrm_sf_mf_105 = (X[7ULL] - 4000.0) / (4000.0 - t717_idx_0 == 0.0 ? 1.0E-16
      : 4000.0 - t717_idx_0) + 2.0;
  } else {
    zc_int11 = t717_idx_0 - t859;
    intrm_sf_mf_105 = (X[7ULL] - t859) / (zc_int11 == 0.0 ? 1.0E-16 : zc_int11);
  }

  intrm_sf_mf_411 = (intrm_sf_mf_105 < 0.0);
  if (X[8ULL] <= t859) {
    t865 = X[8ULL] / (t859 == 0.0 ? 1.0E-16 : t859) - 1.0;
  } else if (X[8ULL] >= t717_idx_0) {
    t865 = (X[8ULL] - 4000.0) / (4000.0 - t717_idx_0 == 0.0 ? 1.0E-16 : 4000.0 -
      t717_idx_0) + 2.0;
  } else {
    t877 = t717_idx_0 - t859;
    t865 = (X[8ULL] - t859) / (t877 == 0.0 ? 1.0E-16 : t877);
  }

  intrm_sf_mf_415 = (t865 < 0.0);
  t812[0ULL] = ((intrm_sf_mf_411 ? intrm_sf_mf_105 : 0.0) + (intrm_sf_mf_415 ?
    t865 : 0.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&w_efOut.mField0[0ULL], &w_efOut.mField1[0ULL],
    &w_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t812[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t61 = w_efOut;
  tlu2_2d_linear_nearest_value(&x_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], &t66.mField0[0ULL], &t66.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField10, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t717_idx_0 = x_efOut[0];
  t864 = t717_idx_0;
  tlu2_2d_linear_nearest_value(&y_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], &t66.mField0[0ULL], &t66.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField8, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t717_idx_0 = y_efOut[0];
  t866 = t717_idx_0;
  tlu2_2d_linear_nearest_value(&ab_efOut[0ULL], &t61.mField0[0ULL],
    &t61.mField2[0ULL], &t66.mField0[0ULL], &t66.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t717_idx_0 = ab_efOut[0];
  t867 = t717_idx_0;
  zc_int22 = t864 * t866 / (t717_idx_0 == 0.0 ? 1.0E-16 : t717_idx_0);
  t871 = tanh((X[56ULL] - X[57ULL]) * zc_int22 * 3.0 /
              (Condenser_effectiveness_mix == 0.0 ? 1.0E-16 :
               Condenser_effectiveness_mix));
  Condenser_effectiveness_mix = (t871 + 1.0) / 2.0 * (X[56ULL] > 0.0 ? X[56ULL] :
    0.0) + (1.0 - t871) / 2.0 * (X[57ULL] > 0.0 ? X[57ULL] : 0.0);
  t869 = zc_int22 * Condenser_effectiveness_mix;
  t870 = t869 + t858;
  intrm_sf_mf_431 = (t870 <= Condenser_thermal_liquid_rho_in);
  if (intrm_sf_mf_431) {
    t871 = t870 / (Condenser_thermal_liquid_rho_in == 0.0 ? 1.0E-16 :
                   Condenser_thermal_liquid_rho_in);
  } else {
    t871 = Condenser_thermal_liquid_rho_in / (t870 == 0.0 ? 1.0E-16 : t870);
  }

  zc_int11 = X[9ULL] >= 0.0 ? X[9ULL] : 0.0;
  t873 = X[10ULL] >= 0.0 ? X[10ULL] : 0.0;
  t841 = zc_int22 * t873;
  t883 = t841 + X[59ULL];
  t884 = zc_int11 + X[59ULL];
  t875 = t883 / (t884 == 0.0 ? 1.0E-16 : t884);
  if (t875 <= 1.0) {
    t876 = 1.0 - t875 * 0.999999;
  } else {
    t876 = 1.0E-6;
  }

  if (t875 >= 1.0) {
    t877 = t875 * 1.000001 - 1.0;
  } else {
    t877 = 1.0E-6;
  }

  if (t841 + X[59ULL] >= zc_int11 + X[59ULL]) {
    t885 = zc_int11 + X[59ULL];
    t886 = t841 + X[59ULL];
    Controlled_Heat_Flow_Rate_Source_Q = (1.000001 / (t885 == 0.0 ? 1.0E-16 :
      t885) - 0.999999 / (t886 == 0.0 ? 1.0E-16 : t886)) * X[11ULL];
  } else {
    t887 = t841 + X[59ULL];
    t888 = zc_int11 + X[59ULL];
    Controlled_Heat_Flow_Rate_Source_Q = (1.000001 / (t887 == 0.0 ? 1.0E-16 :
      t887) - 0.999999 / (t888 == 0.0 ? 1.0E-16 : t888)) * X[11ULL];
  }

  t841 = Controlled_Heat_Flow_Rate_Source_Q <= 15.0 ?
    Controlled_Heat_Flow_Rate_Source_Q : 15.0;
  t812[0ULL] = intrm_sf_mf_105;
  tlu2_linear_linear_prelookup(&bb_efOut.mField0[0ULL], &bb_efOut.mField1[0ULL],
    &bb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t812[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t56 = bb_efOut;
  tlu2_2d_linear_linear_value(&cb_efOut[0ULL], &t56.mField0[0ULL], &t56.mField2
    [0ULL], &t64.mField0[0ULL], &t64.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t717_idx_0 = cb_efOut[0];
  Controlled_Heat_Flow_Rate_Source_Q = t717_idx_0;
  t879 = X[6ULL] * t717_idx_0 * 100.0 + X[7ULL];
  t812[0] = 0.0;
  tlu2_linear_linear_prelookup(&db_efOut.mField0[0ULL], &db_efOut.mField1[0ULL],
    &db_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t812[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t68 = db_efOut;
  tlu2_2d_linear_linear_value(&eb_efOut[0ULL], &t68.mField0[0ULL], &t68.mField2
    [0ULL], &t64.mField0[0ULL], &t64.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t717_idx_0 = eb_efOut[0];
  t880 = t717_idx_0;
  t881 = X[6ULL] * t717_idx_0 * 100.0 + t859;
  t859 = (t881 - t879) / (zc_int22 == 0.0 ? 1.0E-16 : zc_int22);
  t1291 = (1.0 - pmf_exp(-t841)) * X[58ULL];
  t891 = pmf_exp(-t841) * t877 + t876;
  t882 = t1291 / (t891 == 0.0 ? 1.0E-16 : t891);
  intrm_sf_mf_67 = (t882 > t859 * 1000.0);
  intrm_sf_mf_51 = (t879 < t881);
  intrm_sf_mf_53 = (t879 > t881);
  tlu2_linear_linear_prelookup(&fb_efOut.mField0[0ULL], &fb_efOut.mField1[0ULL],
    &fb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t813[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t53 = fb_efOut;
  tlu2_2d_linear_linear_value(&gb_efOut[0ULL], &t53.mField0[0ULL], &t53.mField2
    [0ULL], &t64.mField0[0ULL], &t64.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t717_idx_0 = gb_efOut[0];
  t885 = t717_idx_0;
  t886 = X[6ULL] * t717_idx_0 * 100.0 + intrm_sf_mf_59;
  intrm_sf_mf_54 = (t879 > t886);
  intrm_sf_mf_57 = (X[58ULL] < 0.0);
  intrm_sf_mf_58 = (X[58ULL] > 0.0);
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (intrm_sf_mf_67) {
        t1288 = X[58ULL] - t876 * t859 * 1000.0;
        t1286 = pmf_log((t877 * t859 * 1000.0 + X[58ULL]) / (t1288 == 0.0 ?
          1.0E-16 : t1288));
        intrm_sf_mf_59 = t1286 / (t841 == 0.0 ? 1.0E-16 : t841);
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

  intrm_sf_mf_433 = (intrm_sf_mf_105 > 1.0);
  intrm_sf_mf_435 = (t865 > 1.0);
  t813[0ULL] = ((intrm_sf_mf_433 ? intrm_sf_mf_105 : 1.0) + (intrm_sf_mf_435 ?
    t865 : 1.0)) / 2.0;
  tlu2_linear_nearest_prelookup(&hb_efOut.mField0[0ULL], &hb_efOut.mField1[0ULL],
    &hb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t813[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t61 = hb_efOut;
  tlu2_2d_linear_nearest_value(&ib_efOut[0ULL], &t61.mField0[0ULL],
    &t61.mField2[0ULL], &t66.mField0[0ULL], &t66.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t717_idx_0 = ib_efOut[0];
  t887 = t717_idx_0;
  tlu2_2d_linear_nearest_value(&jb_efOut[0ULL], &t61.mField0[0ULL],
    &t61.mField2[0ULL], &t66.mField0[0ULL], &t66.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t717_idx_0 = jb_efOut[0];
  t888 = t717_idx_0;
  tlu2_2d_linear_nearest_value(&kb_efOut[0ULL], &t61.mField0[0ULL],
    &t61.mField2[0ULL], &t66.mField0[0ULL], &t66.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t717_idx_0 = kb_efOut[0];
  t889 = t717_idx_0;
  t1291 = t887 * t888 / (t717_idx_0 == 0.0 ? 1.0E-16 : t717_idx_0);
  t891 = t1291 * t873;
  t873 = (X[59ULL] + t891) / (t884 == 0.0 ? 1.0E-16 : t884);
  if (t873 <= 1.0) {
    t1284 = 1.0 - t873 * 0.999999;
  } else {
    t1284 = 1.0E-6;
  }

  if (t873 >= 1.0) {
    t1288 = t873 * 1.000001 - 1.0;
  } else {
    t1288 = 1.0E-6;
  }

  if (X[59ULL] + t891 >= zc_int11 + X[59ULL]) {
    t899 = zc_int11 + X[59ULL];
    t900 = X[59ULL] + t891;
    t1286 = (1.000001 / (t899 == 0.0 ? 1.0E-16 : t899) - 0.999999 / (t900 == 0.0
              ? 1.0E-16 : t900)) * X[12ULL];
  } else {
    t901 = X[59ULL] + t891;
    t902 = zc_int11 + X[59ULL];
    t1286 = (1.000001 / (t901 == 0.0 ? 1.0E-16 : t901) - 0.999999 / (t902 == 0.0
              ? 1.0E-16 : t902)) * X[12ULL];
  }

  zc_int11 = t1286 <= 15.0 ? t1286 : 15.0;
  t891 = (t886 - t879) / (t1291 == 0.0 ? 1.0E-16 : t1291);
  intrm_sf_mf_50 = (t879 < t886);
  t717_idx_0 = (1.0 - pmf_exp(-zc_int11)) * X[58ULL];
  t905 = pmf_exp(-zc_int11) * t1288 + t1284;
  t1286 = t717_idx_0 / (t905 == 0.0 ? 1.0E-16 : t905);
  intrm_sf_mf_68 = (t1286 < t891 * 1000.0);
  intrm_sf_mf_55 = (t879 <= t886);
  if (intrm_sf_mf_58) {
    t895 = intrm_sf_mf_51 ? 0.0 : (real_T)!intrm_sf_mf_50;
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (intrm_sf_mf_68) {
        Simscape_Component_ideal_outlet_enthalpy = X[58ULL] - t1284 * t891 *
          1000.0;
        t908 = pmf_log((t1288 * t891 * 1000.0 + X[58ULL]) /
                       (Simscape_Component_ideal_outlet_enthalpy == 0.0 ?
                        1.0E-16 : Simscape_Component_ideal_outlet_enthalpy));
        t895 = t908 / (zc_int11 == 0.0 ? 1.0E-16 : zc_int11);
      } else {
        t895 = 1.0;
      }
    } else {
      t895 = 0.0;
    }
  } else {
    t895 = intrm_sf_mf_51 ? 0.0 : (real_T)!intrm_sf_mf_55;
  }

  Condenser_thermal_liquid_mass = (1.0 - intrm_sf_mf_59) - t895;
  t883 = t883 / (t884 == 0.0 ? 1.0E-16 : t884) / (zc_int22 == 0.0 ? 1.0E-16 :
    zc_int22);
  t897 = X[13ULL] / (t884 == 0.0 ? 1.0E-16 : t884);
  t884 = t897 <= 15.0 ? t897 : 15.0;
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (intrm_sf_mf_67) {
        t897 = (t875 - 1.0) * t859 * 1000.0 + X[58ULL];
      } else {
        t897 = (t875 * t882 + X[58ULL]) - t859 * 1000.0;
      }
    } else if (intrm_sf_mf_50) {
      t897 = X[58ULL];
    } else {
      t897 = (t873 * t1286 + X[58ULL]) - t891 * 1000.0;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (intrm_sf_mf_68) {
        t897 = (t873 - 1.0) * t891 * 1000.0 + X[58ULL];
      } else {
        t897 = (t873 * t1286 + X[58ULL]) - t891 * 1000.0;
      }
    } else if (intrm_sf_mf_53) {
      t897 = X[58ULL];
    } else {
      t897 = (t875 * t882 + X[58ULL]) - t859 * 1000.0;
    }
  } else if (intrm_sf_mf_51) {
    t897 = (t875 * t882 + X[58ULL]) - t859 * 1000.0;
  } else if (intrm_sf_mf_55) {
    t897 = X[58ULL];
  } else {
    t897 = (t873 * t1286 + X[58ULL]) - t891 * 1000.0;
  }

  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (intrm_sf_mf_67) {
        t899 = t881;
      } else {
        t899 = zc_int22 * t882 * 0.001 + t879;
      }
    } else if (intrm_sf_mf_50) {
      t899 = t879;
    } else {
      t899 = t1291 * t1286 * 0.001 + t879;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (intrm_sf_mf_68) {
        t899 = t886;
      } else {
        t899 = t1291 * t1286 * 0.001 + t879;
      }
    } else if (intrm_sf_mf_53) {
      t899 = t879;
    } else {
      t899 = zc_int22 * t882 * 0.001 + t879;
    }
  } else if (intrm_sf_mf_51) {
    t899 = zc_int22 * t882 * 0.001 + t879;
  } else if (intrm_sf_mf_55) {
    t899 = t879;
  } else {
    t899 = t1291 * t1286 * 0.001 + t879;
  }

  t900 = t881 - t899;
  t901 = t886 - t899;
  Fixed_Displacement_Pump_2P_mdot_leakage = (pmf_exp(t884 *
    Condenser_thermal_liquid_mass) - 1.0) * t897;
  t902 = Fixed_Displacement_Pump_2P_mdot_leakage / (t883 == 0.0 ? 1.0E-16 : t883);
  intrm_sf_mf_67 = (t902 * 0.001 > t901);
  intrm_sf_mf_68 = (t899 < t886);
  intrm_sf_mf_69 = (t902 * 0.001 < t900);
  intrm_sf_mf_70 = (t899 > t881);
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_68) {
      if (intrm_sf_mf_67) {
        Thermodynamic_Properties_Sensor_2P4_V = t883 * t901 * 1000.0 + t897;
        t717_idx_0 = -pmf_log(t897 / (Thermodynamic_Properties_Sensor_2P4_V ==
          0.0 ? 1.0E-16 : Thermodynamic_Properties_Sensor_2P4_V));
        t899 = t717_idx_0 / (t884 == 0.0 ? 1.0E-16 : t884);
      } else {
        t899 = Condenser_thermal_liquid_mass;
      }
    } else {
      t899 = 0.0;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_70) {
      if (intrm_sf_mf_69) {
        t917 = t883 * t900 * 1000.0 + t897;
        t717_idx_0 = -pmf_log(t897 / (t917 == 0.0 ? 1.0E-16 : t917));
        t899 = t717_idx_0 / (t884 == 0.0 ? 1.0E-16 : t884);
      } else {
        t899 = Condenser_thermal_liquid_mass;
      }
    } else {
      t899 = 0.0;
    }
  } else {
    t899 = Condenser_thermal_liquid_mass;
  }

  t897 = Condenser_thermal_liquid_mass - t899;
  t900 = intrm_sf_mf_59 + (intrm_sf_mf_58 ? 0.0 : intrm_sf_mf_57 ? t897 : 0.0);
  intrm_sf_mf_59 = t900 >= 0.001 ? t871 : 0.0;
  Condenser_thermal_liquid_mass = t1291 * Condenser_effectiveness_mix;
  t901 = t858 + Condenser_thermal_liquid_mass;
  intrm_sf_mf_436 = (t901 <= Condenser_thermal_liquid_rho_in);
  if (intrm_sf_mf_436) {
    t858 = t901 / (Condenser_thermal_liquid_rho_in == 0.0 ? 1.0E-16 :
                   Condenser_thermal_liquid_rho_in);
  } else {
    t858 = Condenser_thermal_liquid_rho_in / (t901 == 0.0 ? 1.0E-16 : t901);
  }

  t897 = t895 + (intrm_sf_mf_58 ? t897 : 0.0);
  t895 = t897 >= 0.001 ? t858 : 0.0;
  t902 = intrm_sf_mf_431 ? t869 : t861;
  t869 = intrm_sf_mf_436 ? Condenser_thermal_liquid_mass : t861;
  tlu2_2d_linear_nearest_value(&lb_efOut[0ULL], &t71.mField0[0ULL],
    &t71.mField2[0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t717_idx_0 = lb_efOut[0];
  Condenser_thermal_liquid_mass = t717_idx_0;
  tlu2_2d_linear_nearest_value(&mb_efOut[0ULL], &t78.mField0[0ULL],
    &t78.mField2[0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t717_idx_0 = mb_efOut[0];
  t921 = (Condenser_thermal_liquid_mass + t717_idx_0) / 2.0 *
    0.11700000000000003;
  Condenser_Q_cond = Condenser_Q_cond * 0.022 / (t921 == 0.0 ? 1.0E-16 : t921);
  Condenser_thermal_liquid_mass = pmf_sqrt(Condenser_Q_cond * Condenser_Q_cond +
    100.0);
  Condenser_Q_cond = Condenser_thermal_liquid_mass * 35.580755206091233;
  Condenser_two_phase_fluid_h_out = Condenser_thermal_liquid_mass * pmf_sqrt
    (Condenser_thermal_liquid_mass) * pmf_sqrt(pmf_sqrt
    (Condenser_thermal_liquid_mass)) * 2.0794784986224468;
  if (Condenser_thermal_liquid_mass > 250000.0) {
    t717_idx_0 = (Condenser_thermal_liquid_mass - 250000.0) / 325000.0 + 1.0;
  } else {
    t717_idx_0 = 1.0;
  }

  Condenser_thermal_liquid_mass = 1.0 - pmf_exp(-(Condenser_thermal_liquid_mass
    + 200.0) / 1000.0);
  t905 = Condenser_two_phase_fluid_h_out * t717_idx_0 *
    Condenser_thermal_liquid_mass + Condenser_Q_cond;
  tlu2_2d_linear_nearest_value(&nb_efOut[0ULL], &t71.mField0[0ULL],
    &t71.mField2[0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField13, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t717_idx_0 = nb_efOut[0];
  Condenser_Q_cond = t717_idx_0;
  tlu2_2d_linear_nearest_value(&ob_efOut[0ULL], &t78.mField0[0ULL],
    &t78.mField2[0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField13, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t717_idx_0 = ob_efOut[0];
  Condenser_Q_cond = (Condenser_Q_cond + t717_idx_0) / 2.0;
  Condenser_Q_cond = pmf_pow(t905 * Condenser_Q_cond * 0.53047999688613334,
    0.33333333333333331) * 0.404;
  t926 = Condenser_Q_cond * Condenser_two_phase_fluid_T_out / 0.022 *
    5.1836278784231586;
  Condenser_Q_cond = 1.0 / (t926 == 0.0 ? 1.0E-16 : t926);
  Condenser_thermal_liquid_mass = t864 > 0.5 ? t864 : 0.5;
  t927 = Condenser_effectiveness_mix * 0.02;
  intrm_sf_mf_264 = t867 * 0.02356194490192345;
  Condenser_effectiveness_mix = t927 / (intrm_sf_mf_264 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_264);
  t864 = Condenser_effectiveness_mix > 1000.0 ? Condenser_effectiveness_mix :
    1000.0;
  Pipe_TL1_rho_I = pmf_log10(6.9 / (t864 == 0.0 ? 1.0E-16 : t864) +
    7.9545220244797035E-5) * pmf_log10(6.9 / (t864 == 0.0 ? 1.0E-16 : t864) +
    7.9545220244797035E-5) * 3.24;
  t867 = 1.0 / (Pipe_TL1_rho_I == 0.0 ? 1.0E-16 : Pipe_TL1_rho_I);
  t717_idx_0 = (pmf_pow(Condenser_thermal_liquid_mass, 0.66666666666666663) -
                1.0) * pmf_sqrt(t867 / 8.0) * 12.7 + 1.0;
  t864 = (t864 - 1000.0) * (t867 / 8.0) * Condenser_thermal_liquid_mass /
    (t717_idx_0 == 0.0 ? 1.0E-16 : t717_idx_0);
  t867 = (Condenser_effectiveness_mix - 2000.0) / 2000.0;
  Condenser_thermal_liquid_mass = t867 * t867 * 3.0 - t867 * t867 * t867 * 2.0;
  if (Condenser_effectiveness_mix <= 2000.0) {
    t867 = 3.66;
  } else if (Condenser_effectiveness_mix >= 4000.0) {
    t867 = t864;
  } else {
    t867 = (1.0 - Condenser_thermal_liquid_mass) * 3.66 + t864 *
      Condenser_thermal_liquid_mass;
  }

  intrm_sf_mf_329 = t866 * t867 / 0.02 * 7.0685834705770345;
  t864 = Condenser_Q_cond + 1.0 / (intrm_sf_mf_329 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_329);
  if (intrm_sf_mf_431) {
    Condenser_effectiveness_mix = t900 / (t864 == 0.0 ? 1.0E-16 : t864) / (t870 ==
      0.0 ? 1.0E-16 : t870);
  } else {
    Condenser_effectiveness_mix = t900 / (t864 == 0.0 ? 1.0E-16 : t864) /
      (Condenser_thermal_liquid_rho_in == 0.0 ? 1.0E-16 :
       Condenser_thermal_liquid_rho_in);
  }

  t864 = t900 >= 0.001 ? Condenser_effectiveness_mix : 0.0;
  tlu2_linear_nearest_prelookup(&pb_efOut.mField0[0ULL], &pb_efOut.mField1[0ULL],
    &pb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t812[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t49 = pb_efOut;
  tlu2_2d_linear_nearest_value(&qb_efOut[0ULL], &t49.mField0[0ULL],
    &t49.mField2[0ULL], &t66.mField0[0ULL], &t66.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = qb_efOut[0];
  t866 = t812[0ULL];
  tlu2_2d_linear_nearest_value(&rb_efOut[0ULL], &t49.mField0[0ULL],
    &t49.mField2[0ULL], &t66.mField0[0ULL], &t66.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = rb_efOut[0];
  t867 = t812[0ULL];
  t717_idx_0 = t867 * 0.02356194490192345;
  t867 = t927 / (t717_idx_0 == 0.0 ? 1.0E-16 : t717_idx_0);
  Condenser_thermal_liquid_mass = t867 > 1.0 ? t867 : 1.0;
  intrm_sf_mf_439 = (intrm_sf_mf_105 >= 1.0);
  intrm_sf_mf_440 = (intrm_sf_mf_105 <= 0.0);
  t867 = intrm_sf_mf_440 ? 0.0 : intrm_sf_mf_439 ? 1.0 : intrm_sf_mf_105;
  intrm_sf_mf_416 = (t865 >= 1.0);
  intrm_sf_mf_417 = (t865 <= 0.0);
  Condenser_two_phase_fluid_h_out = intrm_sf_mf_417 ? 0.0 : intrm_sf_mf_416 ?
    1.0 : t865;
  if (Condenser_two_phase_fluid_h_out - t867 > 1.0E-6) {
    t717_idx_0 = Condenser_two_phase_fluid_h_out - t867;
  } else if (t867 - Condenser_two_phase_fluid_h_out > 1.0E-6) {
    t717_idx_0 = t867 - Condenser_two_phase_fluid_h_out;
  } else {
    t717_idx_0 = 1.0E-6;
  }

  if (t885 / (t880 == 0.0 ? 1.0E-16 : t880) > 1.000001) {
    t905 = pmf_sqrt(t885 / (t880 == 0.0 ? 1.0E-16 : t880));
  } else {
    t905 = 1.0000004999998751;
  }

  zc_int17 = t867 <= Condenser_two_phase_fluid_h_out ? t867 :
    Condenser_two_phase_fluid_h_out;
  t939 = pmf_pow(Condenser_thermal_liquid_mass, 0.8) * pmf_pow(t866, 0.33) *
    0.05;
  Preheating_Pipe_2P_v_I = (pmf_pow((t717_idx_0 + zc_int17) * (t905 - 1.0) + 1.0,
    1.8) - pmf_pow((t905 - 1.0) * zc_int17 + 1.0, 1.8)) * (t939 / 1.8 / (t905 -
    1.0 == 0.0 ? 1.0E-16 : t905 - 1.0));
  t866 = Preheating_Pipe_2P_v_I / (t717_idx_0 == 0.0 ? 1.0E-16 : t717_idx_0);
  t867 = t866 > 3.66 ? t866 : 3.66;
  tlu2_2d_linear_nearest_value(&sb_efOut[0ULL], &t49.mField0[0ULL],
    &t49.mField2[0ULL], &t66.mField0[0ULL], &t66.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = sb_efOut[0];
  t866 = t812[0ULL];
  t944 = t867 * t866 / 0.02 * 7.0685834705770345;
  t867 = Condenser_Q_cond + 1.0 / (t944 == 0.0 ? 1.0E-16 : t944);
  t866 = t899 / (t867 == 0.0 ? 1.0E-16 : t867) /
    (Condenser_thermal_liquid_rho_in == 0.0 ? 1.0E-16 :
     Condenser_thermal_liquid_rho_in);
  t867 = t899 >= 0.001 ? t866 : 0.0;
  Condenser_thermal_liquid_mass = t887 > 0.5 ? t887 : 0.5;
  t717_idx_0 = t889 * 0.02356194490192345;
  t887 = t927 / (t717_idx_0 == 0.0 ? 1.0E-16 : t717_idx_0);
  t889 = t887 > 1000.0 ? t887 : 1000.0;
  t948 = pmf_log10(6.9 / (t889 == 0.0 ? 1.0E-16 : t889) + 7.9545220244797035E-5)
    * pmf_log10(6.9 / (t889 == 0.0 ? 1.0E-16 : t889) + 7.9545220244797035E-5) *
    3.24;
  Condenser_two_phase_fluid_h_out = 1.0 / (t948 == 0.0 ? 1.0E-16 : t948);
  t950 = (pmf_pow(Condenser_thermal_liquid_mass, 0.66666666666666663) - 1.0) *
    pmf_sqrt(Condenser_two_phase_fluid_h_out / 8.0) * 12.7 + 1.0;
  t889 = (t889 - 1000.0) * (Condenser_two_phase_fluid_h_out / 8.0) *
    Condenser_thermal_liquid_mass / (t950 == 0.0 ? 1.0E-16 : t950);
  Condenser_thermal_liquid_mass = (t887 - 2000.0) / 2000.0;
  Condenser_two_phase_fluid_h_out = Condenser_thermal_liquid_mass *
    Condenser_thermal_liquid_mass * 3.0 - Condenser_thermal_liquid_mass *
    Condenser_thermal_liquid_mass * Condenser_thermal_liquid_mass * 2.0;
  if (t887 <= 2000.0) {
    Condenser_thermal_liquid_mass = 3.66;
  } else if (t887 >= 4000.0) {
    Condenser_thermal_liquid_mass = t889;
  } else {
    Condenser_thermal_liquid_mass = (1.0 - Condenser_two_phase_fluid_h_out) *
      3.66 + t889 * Condenser_two_phase_fluid_h_out;
  }

  t953 = t888 * Condenser_thermal_liquid_mass / 0.02 * 7.0685834705770345;
  t888 = Condenser_Q_cond + 1.0 / (t953 == 0.0 ? 1.0E-16 : t953);
  if (intrm_sf_mf_436) {
    Condenser_Q_cond = t897 / (t888 == 0.0 ? 1.0E-16 : t888) / (t901 == 0.0 ?
      1.0E-16 : t901);
  } else {
    Condenser_Q_cond = t897 / (t888 == 0.0 ? 1.0E-16 : t888) /
      (Condenser_thermal_liquid_rho_in == 0.0 ? 1.0E-16 :
       Condenser_thermal_liquid_rho_in);
  }

  t887 = t897 >= 0.001 ? Condenser_Q_cond : 0.0;
  if (intrm_sf_mf_431) {
    t888 = t870 / (Condenser_thermal_liquid_rho_in == 0.0 ? 1.0E-16 :
                   Condenser_thermal_liquid_rho_in);
  } else {
    t888 = 1.0;
  }

  intrm_sf_mf_431 = (Condenser_effectiveness_mix >= 0.0);
  t870 = intrm_sf_mf_431 ? Condenser_effectiveness_mix :
    -Condenser_effectiveness_mix;
  zc_int17 = (1.0 - pmf_exp(-t870 * (1.0 - t871 * 0.999))) * (intrm_sf_mf_431 ?
    1.0 : -1.0);
  t717_idx_0 = 1.0 - pmf_exp(-t870 * (1.0 - t871 * 0.999)) * t871 * 0.999;
  Condenser_effectiveness_mix = zc_int17 / (t717_idx_0 == 0.0 ? 1.0E-16 :
    t717_idx_0);
  t870 = t888 * Condenser_effectiveness_mix;
  intrm_sf_mf_431 = (t866 >= 0.0);
  t888 = (1.0 - pmf_exp(-(intrm_sf_mf_431 ? t866 : -t866))) * (intrm_sf_mf_431 ?
    1.0 : -1.0);
  if (intrm_sf_mf_436) {
    t866 = t901 / (Condenser_thermal_liquid_rho_in == 0.0 ? 1.0E-16 :
                   Condenser_thermal_liquid_rho_in);
  } else {
    t866 = 1.0;
  }

  intrm_sf_mf_431 = (Condenser_Q_cond >= 0.0);
  Condenser_thermal_liquid_rho_in = intrm_sf_mf_431 ? Condenser_Q_cond :
    -Condenser_Q_cond;
  zc_int17 = (1.0 - pmf_exp(-Condenser_thermal_liquid_rho_in * (1.0 - t858 *
    0.999))) * (intrm_sf_mf_431 ? 1.0 : -1.0);
  t717_idx_0 = 1.0 - pmf_exp(-Condenser_thermal_liquid_rho_in * (1.0 - t858 *
    0.999)) * t858 * 0.999;
  Condenser_thermal_liquid_rho_in = zc_int17 / (t717_idx_0 == 0.0 ? 1.0E-16 :
    t717_idx_0);
  t858 = t866 * Condenser_thermal_liquid_rho_in;
  t856 = 0.0067520278887470758 / (Condenser_two_phase_fluid_T_out == 0.0 ?
    1.0E-16 : Condenser_two_phase_fluid_T_out) + 0.0028294212105225841 / (t856 ==
    0.0 ? 1.0E-16 : t856);
  t813[0ULL] = t865;
  tlu2_linear_linear_prelookup(&tb_efOut.mField0[0ULL], &tb_efOut.mField1[0ULL],
    &tb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t813[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t61 = tb_efOut;
  tlu2_2d_linear_linear_value(&ub_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], &t64.mField0[0ULL], &t64.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = ub_efOut[0];
  Condenser_two_phase_fluid_T_out = t812[0ULL];
  Condenser_Q_cond = (X[5ULL] - Condenser_two_phase_fluid_T_out) / (t856 == 0.0 ?
    1.0E-16 : t856);
  tlu2_2d_linear_linear_value(&vb_efOut[0ULL], &t56.mField0[0ULL], &t56.mField2
    [0ULL], &t64.mField0[0ULL], &t64.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = vb_efOut[0];
  t856 = t812[0ULL];
  tlu2_2d_linear_linear_value(&wb_efOut[0ULL], &t68.mField0[0ULL], &t68.mField2
    [0ULL], &t64.mField0[0ULL], &t64.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = wb_efOut[0];
  t866 = t812[0ULL];
  tlu2_2d_linear_linear_value(&xb_efOut[0ULL], &t53.mField0[0ULL], &t53.mField2
    [0ULL], &t64.mField0[0ULL], &t64.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = xb_efOut[0];
  t871 = t812[0ULL];
  t889 = intrm_sf_mf_440 ? t866 : intrm_sf_mf_439 ? t871 : t856;
  Condenser_thermal_liquid_mass = intrm_sf_mf_433 ? t856 : t871;
  tlu2_2d_linear_linear_value(&yb_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], &t64.mField0[0ULL], &t64.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = yb_efOut[0];
  t901 = t812[0ULL];
  Condenser_two_phase_fluid_h_out = X[6ULL] * t901 * 100.0 + X[8ULL];
  intrm_sf_mf_431 = (t879 - Condenser_two_phase_fluid_h_out >= 0.0);
  if (intrm_sf_mf_431) {
    t717_idx_0 = X[3ULL];
  } else {
    t717_idx_0 = ((1.0 - t888) * (1.0 - t858) * X[3ULL] + (1.0 - t888) * t858 *
                  Condenser_thermal_liquid_mass) + t888 * t889;
  }

  t905 = intrm_sf_mf_411 ? t856 : t866;
  zc_int17 = (t717_idx_0 - t905) * t902 * Condenser_effectiveness_mix;
  if (intrm_sf_mf_431) {
    t902 = (t905 - X[3ULL]) * t870 + X[3ULL];
  } else {
    t902 = (Condenser_thermal_liquid_mass - X[3ULL]) * t858 + X[3ULL];
  }

  t858 = (t902 - t889) * t861 * t888;
  if (intrm_sf_mf_431) {
    t861 = ((1.0 - t888) * (1.0 - t870) * X[3ULL] + (1.0 - t888) * t870 * t905)
      + t888 * t889;
  } else {
    t861 = X[3ULL];
  }

  t870 = (t861 - Condenser_thermal_liquid_mass) * t869 *
    Condenser_thermal_liquid_rho_in;
  t869 = Condenser_Q_cond + ((zc_int17 + t858) + t870);
  t861 = Condenser_Q_cond * t900 + zc_int17;
  t889 = Condenser_Q_cond * t899 + t858;
  t858 = Condenser_Q_cond * t897 + t870;
  Condenser_Q_cond = t900 >= 0.001 ? Condenser_effectiveness_mix : 0.0;
  Condenser_effectiveness_mix = t899 >= 0.001 ? t888 : 0.0;
  t870 = t897 >= 0.001 ? Condenser_thermal_liquid_rho_in : 0.0;
  tlu2_2d_linear_linear_value(&ac_efOut[0ULL], &t77.mField0[0ULL], &t77.mField2
    [0ULL], &t75.mField0[0ULL], &t75.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t812[0] = ac_efOut[0];
  Condenser_thermal_liquid_rho_in = t812[0ULL];
  tlu2_2d_linear_linear_value(&bc_efOut[0ULL], &t72.mField0[0ULL], &t72.mField2
    [0ULL], &t75.mField0[0ULL], &t75.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t812[0] = bc_efOut[0];
  t888 = t812[0ULL];
  tlu2_2d_linear_linear_value(&cc_efOut[0ULL], &t77.mField0[0ULL], &t77.mField2
    [0ULL], &t75.mField0[0ULL], &t75.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField18, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t812[0] = cc_efOut[0];
  t902 = t812[0ULL];
  tlu2_2d_linear_linear_value(&dc_efOut[0ULL], &t72.mField0[0ULL], &t72.mField2
    [0ULL], &t75.mField0[0ULL], &t75.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField18, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t812[0] = dc_efOut[0];
  t905 = t812[0ULL];
  Simscape_Component_ideal_outlet_enthalpy = intrm_sf_mf_440 ? t880 :
    intrm_sf_mf_439 ? t885 : Controlled_Heat_Flow_Rate_Source_Q;
  t908 = intrm_sf_mf_417 ? t880 : intrm_sf_mf_416 ? t885 : t901;
  t911 = Simscape_Component_ideal_outlet_enthalpy <= t908 ?
    Simscape_Component_ideal_outlet_enthalpy : t908;
  if (t908 / (Simscape_Component_ideal_outlet_enthalpy == 0.0 ? 1.0E-16 :
              Simscape_Component_ideal_outlet_enthalpy) >= 1.000001) {
    t717_idx_0 = t908 / (Simscape_Component_ideal_outlet_enthalpy == 0.0 ?
                         1.0E-16 : Simscape_Component_ideal_outlet_enthalpy);
  } else if (Simscape_Component_ideal_outlet_enthalpy / (t908 == 0.0 ? 1.0E-16 :
              t908) >= 1.000001) {
    t717_idx_0 = Simscape_Component_ideal_outlet_enthalpy / (t908 == 0.0 ?
      1.0E-16 : t908);
  } else {
    t717_idx_0 = 1.000001;
  }

  zc_int17 = pmf_log(t717_idx_0);
  Simscape_Component_ideal_outlet_enthalpy = zc_int17 / (t717_idx_0 - 1.0 == 0.0
    ? 1.0E-16 : t717_idx_0 - 1.0) / (t911 == 0.0 ? 1.0E-16 : t911);
  t908 = intrm_sf_mf_411 ? Controlled_Heat_Flow_Rate_Source_Q : t880;
  t911 = intrm_sf_mf_415 ? t901 : t880;
  t908 = (1.0 / (t908 == 0.0 ? 1.0E-16 : t908) + 1.0 / (t911 == 0.0 ? 1.0E-16 :
           t911)) / 2.0 * t900 * 0.035342917352885174;
  t880 = Simscape_Component_ideal_outlet_enthalpy * t899 * 0.035342917352885174;
  Simscape_Component_ideal_outlet_enthalpy = intrm_sf_mf_433 ?
    Controlled_Heat_Flow_Rate_Source_Q : t885;
  Controlled_Heat_Flow_Rate_Source_Q = intrm_sf_mf_435 ? t901 : t885;
  t885 = (1.0 / (Simscape_Component_ideal_outlet_enthalpy == 0.0 ? 1.0E-16 :
                 Simscape_Component_ideal_outlet_enthalpy) + 1.0 /
          (Controlled_Heat_Flow_Rate_Source_Q == 0.0 ? 1.0E-16 :
           Controlled_Heat_Flow_Rate_Source_Q)) / 2.0 * t897 *
    0.035342917352885174;
  Controlled_Heat_Flow_Rate_Source_Q = (t908 + t880) + t885;
  t813[0ULL] = X[49ULL];
  tlu2_linear_linear_prelookup(&ec_efOut.mField0[0ULL], &ec_efOut.mField1[0ULL],
    &ec_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t813[0ULL],
    &t84[0ULL], &t85[0ULL]);
  t75 = ec_efOut;
  tlu2_1d_linear_linear_value(&fc_efOut[0ULL], &t75.mField0[0ULL], &t75.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t84[0ULL], &t85[0ULL]);
  t812[0] = fc_efOut[0];
  t901 = t812[0ULL];
  tlu2_1d_linear_linear_value(&gc_efOut[0ULL], &t75.mField0[0ULL], &t75.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t84[0ULL], &t85[0ULL]);
  t812[0] = gc_efOut[0];
  Simscape_Component_ideal_outlet_enthalpy = t812[0ULL];
  if (X[50ULL] <= t901) {
    t911 = X[50ULL] / (t901 == 0.0 ? 1.0E-16 : t901) - 1.0;
  } else if (X[50ULL] >= Simscape_Component_ideal_outlet_enthalpy) {
    t911 = (X[50ULL] - 4000.0) / (4000.0 -
      Simscape_Component_ideal_outlet_enthalpy == 0.0 ? 1.0E-16 : 4000.0 -
      Simscape_Component_ideal_outlet_enthalpy) + 2.0;
  } else {
    t973 = Simscape_Component_ideal_outlet_enthalpy - t901;
    t911 = (X[50ULL] - t901) / (t973 == 0.0 ? 1.0E-16 : t973);
  }

  t813[0ULL] = X[53ULL];
  tlu2_linear_linear_prelookup(&hc_efOut.mField0[0ULL], &hc_efOut.mField1[0ULL],
    &hc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t813[0ULL],
    &t84[0ULL], &t85[0ULL]);
  t71 = hc_efOut;
  tlu2_1d_linear_linear_value(&ic_efOut[0ULL], &t71.mField0[0ULL], &t71.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t84[0ULL], &t85[0ULL]);
  t812[0] = ic_efOut[0];
  t717_idx_0 = t812[0ULL];
  tlu2_1d_linear_linear_value(&jc_efOut[0ULL], &t71.mField0[0ULL], &t71.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t84[0ULL], &t85[0ULL]);
  t812[0] = jc_efOut[0];
  Fixed_Displacement_Pump_2P_mdot_leakage = t812[0ULL];
  if (X[54ULL] <= t717_idx_0) {
    Thermodynamic_Properties_Sensor_2P4_V = X[54ULL] / (t717_idx_0 == 0.0 ?
      1.0E-16 : t717_idx_0) - 1.0;
  } else if (X[54ULL] >= Fixed_Displacement_Pump_2P_mdot_leakage) {
    Thermodynamic_Properties_Sensor_2P4_V = (X[54ULL] - 4000.0) / (4000.0 -
      Fixed_Displacement_Pump_2P_mdot_leakage == 0.0 ? 1.0E-16 : 4000.0 -
      Fixed_Displacement_Pump_2P_mdot_leakage) + 2.0;
  } else {
    t978 = Fixed_Displacement_Pump_2P_mdot_leakage - t717_idx_0;
    Thermodynamic_Properties_Sensor_2P4_V = (X[54ULL] - t717_idx_0) / (t978 ==
      0.0 ? 1.0E-16 : t978);
  }

  t908 = t908 * X[14ULL] / (Controlled_Heat_Flow_Rate_Source_Q == 0.0 ? 1.0E-16 :
    Controlled_Heat_Flow_Rate_Source_Q);
  t880 = t880 * X[14ULL] / (Controlled_Heat_Flow_Rate_Source_Q == 0.0 ? 1.0E-16 :
    Controlled_Heat_Flow_Rate_Source_Q);
  t885 = t885 * X[14ULL] / (Controlled_Heat_Flow_Rate_Source_Q == 0.0 ? 1.0E-16 :
    Controlled_Heat_Flow_Rate_Source_Q);
  Controlled_Heat_Flow_Rate_Source_Q = U_idx_0 * 1000.0;
  t813[0] = 0.5;
  tlu2_linear_linear_prelookup(&kc_efOut.mField0[0ULL], &kc_efOut.mField1[0ULL],
    &kc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t813[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t72 = kc_efOut;
  t813[0ULL] = (X[53ULL] + X[79ULL]) / 2.0;
  tlu2_linear_linear_prelookup(&lc_efOut.mField0[0ULL], &lc_efOut.mField1[0ULL],
    &lc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t813[0ULL],
    &t84[0ULL], &t85[0ULL]);
  t61 = lc_efOut;
  tlu2_2d_linear_linear_value(&mc_efOut[0ULL], &t72.mField0[0ULL], &t72.mField2
    [0ULL], &t61.mField0[0ULL], &t61.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = mc_efOut[0];
  t917 = t812[0ULL];
  t813[0ULL] = X[79ULL];
  tlu2_linear_linear_prelookup(&nc_efOut.mField0[0ULL], &nc_efOut.mField1[0ULL],
    &nc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t813[0ULL],
    &t84[0ULL], &t85[0ULL]);
  t67 = nc_efOut;
  tlu2_1d_linear_linear_value(&oc_efOut[0ULL], &t67.mField0[0ULL], &t67.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t84[0ULL], &t85[0ULL]);
  t812[0] = oc_efOut[0];
  t919 = t812[0ULL];
  tlu2_1d_linear_linear_value(&pc_efOut[0ULL], &t67.mField0[0ULL], &t67.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t84[0ULL], &t85[0ULL]);
  t812[0] = pc_efOut[0];
  t920 = t812[0ULL];
  if (X[80ULL] <= t919) {
    t921 = X[80ULL] / (t919 == 0.0 ? 1.0E-16 : t919) - 1.0;
  } else if (X[80ULL] >= t920) {
    t921 = (X[80ULL] - 4000.0) / (4000.0 - t920 == 0.0 ? 1.0E-16 : 4000.0 - t920)
      + 2.0;
  } else {
    t989 = t920 - t919;
    t921 = (X[80ULL] - t919) / (t989 == 0.0 ? 1.0E-16 : t989);
  }

  Mass_Flow_Rate_Source_TL1_power = tanh(U_idx_1 * 4.0 / 0.025);
  t923 = X[79ULL] - X[53ULL];
  t924 = fabs(t923) * Mass_Flow_Rate_Source_TL1_power * 0.018078554672120287;
  if (X[83ULL] <= t717_idx_0) {
    Mass_Flow_Rate_Source_TL1_power = X[83ULL] / (t717_idx_0 == 0.0 ? 1.0E-16 :
      t717_idx_0) - 1.0;
  } else if (X[83ULL] >= Fixed_Displacement_Pump_2P_mdot_leakage) {
    Mass_Flow_Rate_Source_TL1_power = (X[83ULL] - 4000.0) / (4000.0 -
      Fixed_Displacement_Pump_2P_mdot_leakage == 0.0 ? 1.0E-16 : 4000.0 -
      Fixed_Displacement_Pump_2P_mdot_leakage) + 2.0;
  } else {
    t995 = Fixed_Displacement_Pump_2P_mdot_leakage - t717_idx_0;
    Mass_Flow_Rate_Source_TL1_power = (X[83ULL] - t717_idx_0) / (t995 == 0.0 ?
      1.0E-16 : t995);
  }

  t813[0ULL] = Mass_Flow_Rate_Source_TL1_power;
  tlu2_linear_linear_prelookup(&qc_efOut.mField0[0ULL], &qc_efOut.mField1[0ULL],
    &qc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t813[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t61 = qc_efOut;
  tlu2_2d_linear_linear_value(&rc_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], &t71.mField0[0ULL], &t71.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = rc_efOut[0];
  t925 = t812[0ULL];
  if (X[84ULL] <= t919) {
    t926 = X[84ULL] / (t919 == 0.0 ? 1.0E-16 : t919) - 1.0;
  } else if (X[84ULL] >= t920) {
    t926 = (X[84ULL] - 4000.0) / (4000.0 - t920 == 0.0 ? 1.0E-16 : 4000.0 - t920)
      + 2.0;
  } else {
    t1000 = t920 - t919;
    t926 = (X[84ULL] - t919) / (t1000 == 0.0 ? 1.0E-16 : t1000);
  }

  t813[0ULL] = t926;
  tlu2_linear_linear_prelookup(&sc_efOut.mField0[0ULL], &sc_efOut.mField1[0ULL],
    &sc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t813[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t72 = sc_efOut;
  tlu2_2d_linear_linear_value(&tc_efOut[0ULL], &t72.mField0[0ULL], &t72.mField2
    [0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = tc_efOut[0];
  t927 = t812[0ULL];
  if (X[85ULL] <= t717_idx_0) {
    intrm_sf_mf_264 = X[85ULL] / (t717_idx_0 == 0.0 ? 1.0E-16 : t717_idx_0) -
      1.0;
  } else if (X[85ULL] >= Fixed_Displacement_Pump_2P_mdot_leakage) {
    intrm_sf_mf_264 = (X[85ULL] - 4000.0) / (4000.0 -
      Fixed_Displacement_Pump_2P_mdot_leakage == 0.0 ? 1.0E-16 : 4000.0 -
      Fixed_Displacement_Pump_2P_mdot_leakage) + 2.0;
  } else {
    t1005 = Fixed_Displacement_Pump_2P_mdot_leakage - t717_idx_0;
    intrm_sf_mf_264 = (X[85ULL] - t717_idx_0) / (t1005 == 0.0 ? 1.0E-16 : t1005);
  }

  t813[0ULL] = intrm_sf_mf_264;
  tlu2_linear_linear_prelookup(&uc_efOut.mField0[0ULL], &uc_efOut.mField1[0ULL],
    &uc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t813[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t61 = uc_efOut;
  tlu2_2d_linear_linear_value(&vc_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], &t71.mField0[0ULL], &t71.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = vc_efOut[0];
  t717_idx_0 = t812[0ULL];
  if (X[86ULL] <= t919) {
    Fixed_Displacement_Pump_2P_mdot_leakage = X[86ULL] / (t919 == 0.0 ? 1.0E-16 :
      t919) - 1.0;
  } else if (X[86ULL] >= t920) {
    Fixed_Displacement_Pump_2P_mdot_leakage = (X[86ULL] - 4000.0) / (4000.0 -
      t920 == 0.0 ? 1.0E-16 : 4000.0 - t920) + 2.0;
  } else {
    t1010 = t920 - t919;
    Fixed_Displacement_Pump_2P_mdot_leakage = (X[86ULL] - t919) / (t1010 == 0.0 ?
      1.0E-16 : t1010);
  }

  t813[0ULL] = Fixed_Displacement_Pump_2P_mdot_leakage;
  tlu2_linear_linear_prelookup(&wc_efOut.mField0[0ULL], &wc_efOut.mField1[0ULL],
    &wc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t813[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t61 = wc_efOut;
  tlu2_2d_linear_linear_value(&xc_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = xc_efOut[0];
  t919 = t812[0ULL];
  Pipe_TL1_rho_I = pmf_sqrt(1.0000000000000001E-7 / (t917 == 0.0 ? 1.0E-16 :
    t917) * 4.1209000000000006E-6 / 2.0 * 400000.0 + X[57ULL] * X[57ULL]);
  t813[0ULL] = Mass_Flow_Rate_Source_TL1_power;
  tlu2_linear_nearest_prelookup(&yc_efOut.mField0[0ULL], &yc_efOut.mField1[0ULL],
    &yc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t813[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t61 = yc_efOut;
  t813[0ULL] = X[53ULL];
  tlu2_linear_nearest_prelookup(&ad_efOut.mField0[0ULL], &ad_efOut.mField1[0ULL],
    &ad_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t813[0ULL],
    &t84[0ULL], &t85[0ULL]);
  t56 = ad_efOut;
  tlu2_2d_linear_nearest_value(&bd_efOut[0ULL], &t61.mField0[0ULL],
    &t61.mField2[0ULL], &t56.mField0[0ULL], &t56.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = bd_efOut[0];
  t917 = t812[0ULL];
  t813[0ULL] = Fixed_Displacement_Pump_2P_mdot_leakage;
  tlu2_linear_nearest_prelookup(&cd_efOut.mField0[0ULL], &cd_efOut.mField1[0ULL],
    &cd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t813[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t64 = cd_efOut;
  t813[0ULL] = X[79ULL];
  tlu2_linear_nearest_prelookup(&dd_efOut.mField0[0ULL], &dd_efOut.mField1[0ULL],
    &dd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t813[0ULL],
    &t84[0ULL], &t85[0ULL]);
  t72 = dd_efOut;
  tlu2_2d_linear_nearest_value(&ed_efOut[0ULL], &t64.mField0[0ULL],
    &t64.mField2[0ULL], &t72.mField0[0ULL], &t72.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = ed_efOut[0];
  Fixed_Displacement_Pump_2P_mdot_leakage = t812[0ULL];
  Fixed_Displacement_Pump_2P_mdot_leakage = (t917 +
    Fixed_Displacement_Pump_2P_mdot_leakage) / 2.0;
  t813[0ULL] = t926;
  tlu2_linear_nearest_prelookup(&fd_efOut.mField0[0ULL], &fd_efOut.mField1[0ULL],
    &fd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t813[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t61 = fd_efOut;
  tlu2_2d_linear_nearest_value(&gd_efOut[0ULL], &t61.mField0[0ULL],
    &t61.mField2[0ULL], &t72.mField0[0ULL], &t72.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = gd_efOut[0];
  t917 = t812[0ULL];
  t813[0ULL] = intrm_sf_mf_264;
  tlu2_linear_nearest_prelookup(&hd_efOut.mField0[0ULL], &hd_efOut.mField1[0ULL],
    &hd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t813[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t61 = hd_efOut;
  tlu2_2d_linear_nearest_value(&id_efOut[0ULL], &t61.mField0[0ULL],
    &t61.mField2[0ULL], &t56.mField0[0ULL], &t56.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = id_efOut[0];
  Mass_Flow_Rate_Source_TL1_power = t812[0ULL];
  t917 = (t917 + Mass_Flow_Rate_Source_TL1_power) / 2.0;
  Fixed_Displacement_Pump_2P_mdot_leakage = (-X[57ULL] / (Pipe_TL1_rho_I == 0.0 ?
    1.0E-16 : Pipe_TL1_rho_I) + 1.0) * Fixed_Displacement_Pump_2P_mdot_leakage /
    2.0 + (1.0 - -X[57ULL] / (Pipe_TL1_rho_I == 0.0 ? 1.0E-16 : Pipe_TL1_rho_I))
    * t917 / 2.0;
  t917 = t923 * 6.36365124458634E-15 / (Fixed_Displacement_Pump_2P_mdot_leakage ==
    0.0 ? 1.0E-16 : Fixed_Displacement_Pump_2P_mdot_leakage);
  t920 = t923 * (U_idx_1 * 1.3257606759554879E-6 * 1.0E+6 - t917 * 1.0E+11);
  t717_idx_0 = (t927 + t717_idx_0) / 2.0;
  t717_idx_0 = (-X[57ULL] / (Pipe_TL1_rho_I == 0.0 ? 1.0E-16 : Pipe_TL1_rho_I) +
                1.0) * ((t925 + t919) / 2.0) / 2.0 + (1.0 - -X[57ULL] /
    (Pipe_TL1_rho_I == 0.0 ? 1.0E-16 : Pipe_TL1_rho_I)) * t717_idx_0 / 2.0;
  Fixed_Displacement_Pump_2P_mdot_leakage = t917 / (t717_idx_0 == 0.0 ? 1.0E-16 :
    t717_idx_0);
  t813[0ULL] = X[108ULL];
  tlu2_linear_linear_prelookup(&jd_efOut.mField0[0ULL], &jd_efOut.mField1[0ULL],
    &jd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t813[0ULL],
    &t98[0ULL], &t85[0ULL]);
  t61 = jd_efOut;
  t813[0ULL] = X[103ULL];
  tlu2_linear_linear_prelookup(&kd_efOut.mField0[0ULL], &kd_efOut.mField1[0ULL],
    &kd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t813[0ULL],
    &t101[0ULL], &t85[0ULL]);
  t27 = kd_efOut;
  tlu2_2d_linear_linear_value(&ld_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], &t27.mField0[0ULL], &t27.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t812[0] = ld_efOut[0];
  t917 = t812[0ULL];
  t813[0ULL] = X[110ULL];
  tlu2_linear_linear_prelookup(&md_efOut.mField0[0ULL], &md_efOut.mField1[0ULL],
    &md_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t813[0ULL],
    &t98[0ULL], &t85[0ULL]);
  t72 = md_efOut;
  t813[0ULL] = X[105ULL];
  tlu2_linear_linear_prelookup(&nd_efOut.mField0[0ULL], &nd_efOut.mField1[0ULL],
    &nd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t813[0ULL],
    &t101[0ULL], &t85[0ULL]);
  t64 = nd_efOut;
  tlu2_2d_linear_linear_value(&od_efOut[0ULL], &t72.mField0[0ULL], &t72.mField2
    [0ULL], &t64.mField0[0ULL], &t64.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t812[0] = od_efOut[0];
  t919 = t812[0ULL];
  t917 = (t917 + t919) / 2.0;
  t919 = (X[105ULL] - X[103ULL]) * 3.5 / (t917 == 0.0 ? 1.0E-16 : t917);
  t813[0ULL] = X[113ULL];
  tlu2_linear_linear_prelookup(&pd_efOut.mField0[0ULL], &pd_efOut.mField1[0ULL],
    &pd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t813[0ULL],
    &t98[0ULL], &t85[0ULL]);
  t64 = pd_efOut;
  t813[0] = 2.0;
  tlu2_linear_linear_prelookup(&qd_efOut.mField0[0ULL], &qd_efOut.mField1[0ULL],
    &qd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t813[0ULL],
    &t101[0ULL], &t85[0ULL]);
  t61 = qd_efOut;
  tlu2_2d_linear_linear_value(&rd_efOut[0ULL], &t64.mField0[0ULL], &t64.mField2
    [0ULL], &t61.mField0[0ULL], &t61.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t812[0] = rd_efOut[0];
  t917 = t812[0ULL];
  t813[0ULL] = X[115ULL];
  tlu2_linear_linear_prelookup(&sd_efOut.mField0[0ULL], &sd_efOut.mField1[0ULL],
    &sd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t813[0ULL],
    &t98[0ULL], &t85[0ULL]);
  t61 = sd_efOut;
  t813[0ULL] = X[52ULL];
  tlu2_linear_linear_prelookup(&td_efOut.mField0[0ULL], &td_efOut.mField1[0ULL],
    &td_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t813[0ULL],
    &t101[0ULL], &t85[0ULL]);
  t66 = td_efOut;
  tlu2_2d_linear_linear_value(&ud_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], &t66.mField0[0ULL], &t66.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t812[0] = ud_efOut[0];
  Mass_Flow_Rate_Source_TL1_power = t812[0ULL];
  t917 = (t917 + Mass_Flow_Rate_Source_TL1_power) / 2.0;
  Mass_Flow_Rate_Source_TL1_power = (X[52ULL] - 2.0) * 10.0 / (t917 == 0.0 ?
    1.0E-16 : t917);
  t813[0ULL] = X[16ULL];
  tlu2_linear_nearest_prelookup(&vd_efOut.mField0[0ULL], &vd_efOut.mField1[0ULL],
    &vd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t813[0ULL],
    &t98[0ULL], &t85[0ULL]);
  t77 = vd_efOut;
  t813[0ULL] = X[15ULL];
  tlu2_linear_nearest_prelookup(&wd_efOut.mField0[0ULL], &wd_efOut.mField1[0ULL],
    &wd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t813[0ULL],
    &t101[0ULL], &t85[0ULL]);
  t27 = wd_efOut;
  tlu2_2d_linear_nearest_value(&xd_efOut[0ULL], &t77.mField0[0ULL],
    &t77.mField2[0ULL], &t27.mField0[0ULL], &t27.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t812[0] = xd_efOut[0];
  t917 = t812[0ULL];
  t813[0ULL] = X[16ULL];
  tlu2_linear_linear_prelookup(&yd_efOut.mField0[0ULL], &yd_efOut.mField1[0ULL],
    &yd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t813[0ULL],
    &t98[0ULL], &t85[0ULL]);
  t69 = yd_efOut;
  t813[0ULL] = X[15ULL];
  tlu2_linear_linear_prelookup(&ae_efOut.mField0[0ULL], &ae_efOut.mField1[0ULL],
    &ae_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t813[0ULL],
    &t101[0ULL], &t85[0ULL]);
  t78 = ae_efOut;
  tlu2_2d_linear_linear_value(&be_efOut[0ULL], &t69.mField0[0ULL], &t69.mField2
    [0ULL], &t78.mField0[0ULL], &t78.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t812[0] = be_efOut[0];
  t925 = t812[0ULL];
  tlu2_2d_linear_linear_value(&ce_efOut[0ULL], &t69.mField0[0ULL], &t69.mField2
    [0ULL], &t78.mField0[0ULL], &t78.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField18, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t812[0] = ce_efOut[0];
  t926 = t812[0ULL];
  t813[0ULL] = X[18ULL];
  tlu2_linear_nearest_prelookup(&de_efOut.mField0[0ULL], &de_efOut.mField1[0ULL],
    &de_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t813[0ULL],
    &t98[0ULL], &t85[0ULL]);
  t77 = de_efOut;
  t813[0ULL] = X[17ULL];
  tlu2_linear_nearest_prelookup(&ee_efOut.mField0[0ULL], &ee_efOut.mField1[0ULL],
    &ee_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t813[0ULL],
    &t101[0ULL], &t85[0ULL]);
  t61 = ee_efOut;
  tlu2_2d_linear_nearest_value(&fe_efOut[0ULL], &t77.mField0[0ULL],
    &t77.mField2[0ULL], &t61.mField0[0ULL], &t61.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t812[0] = fe_efOut[0];
  intrm_sf_mf_264 = t812[0ULL];
  t813[0ULL] = X[18ULL];
  tlu2_linear_linear_prelookup(&ge_efOut.mField0[0ULL], &ge_efOut.mField1[0ULL],
    &ge_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t813[0ULL],
    &t98[0ULL], &t85[0ULL]);
  t61 = ge_efOut;
  t813[0ULL] = X[17ULL];
  tlu2_linear_linear_prelookup(&he_efOut.mField0[0ULL], &he_efOut.mField1[0ULL],
    &he_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t813[0ULL],
    &t101[0ULL], &t85[0ULL]);
  t77 = he_efOut;
  tlu2_2d_linear_linear_value(&ie_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], &t77.mField0[0ULL], &t77.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t812[0] = ie_efOut[0];
  Pipe_TL1_rho_I = t812[0ULL];
  tlu2_2d_linear_linear_value(&je_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], &t77.mField0[0ULL], &t77.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField18, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t812[0] = je_efOut[0];
  t930 = t812[0ULL];
  t932 = -X[134ULL] + X[91ULL];
  t933 = -X[135ULL] + X[93ULL];
  t813[0ULL] = X[20ULL];
  tlu2_linear_nearest_prelookup(&ke_efOut.mField0[0ULL], &ke_efOut.mField1[0ULL],
    &ke_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t813[0ULL],
    &t98[0ULL], &t85[0ULL]);
  t72 = ke_efOut;
  t813[0ULL] = X[19ULL];
  tlu2_linear_nearest_prelookup(&le_efOut.mField0[0ULL], &le_efOut.mField1[0ULL],
    &le_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t813[0ULL],
    &t101[0ULL], &t85[0ULL]);
  t61 = le_efOut;
  tlu2_2d_linear_nearest_value(&me_efOut[0ULL], &t72.mField0[0ULL],
    &t72.mField2[0ULL], &t61.mField0[0ULL], &t61.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t812[0] = me_efOut[0];
  intrm_sf_mf_329 = t812[0ULL];
  t813[0ULL] = X[20ULL];
  tlu2_linear_linear_prelookup(&ne_efOut.mField0[0ULL], &ne_efOut.mField1[0ULL],
    &ne_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t813[0ULL],
    &t98[0ULL], &t85[0ULL]);
  t78 = ne_efOut;
  t813[0ULL] = X[19ULL];
  tlu2_linear_linear_prelookup(&oe_efOut.mField0[0ULL], &oe_efOut.mField1[0ULL],
    &oe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t813[0ULL],
    &t101[0ULL], &t85[0ULL]);
  t69 = oe_efOut;
  tlu2_2d_linear_linear_value(&pe_efOut[0ULL], &t78.mField0[0ULL], &t78.mField2
    [0ULL], &t69.mField0[0ULL], &t69.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t812[0] = pe_efOut[0];
  t935 = t812[0ULL];
  tlu2_2d_linear_linear_value(&qe_efOut[0ULL], &t78.mField0[0ULL], &t78.mField2
    [0ULL], &t69.mField0[0ULL], &t69.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField18, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t812[0] = qe_efOut[0];
  t936 = t812[0ULL];
  t939 = U_idx_2 * 1000.0;
  t813[0ULL] = X[21ULL];
  tlu2_linear_linear_prelookup(&re_efOut.mField0[0ULL], &re_efOut.mField1[0ULL],
    &re_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t813[0ULL],
    &t84[0ULL], &t85[0ULL]);
  t64 = re_efOut;
  tlu2_1d_linear_linear_value(&se_efOut[0ULL], &t64.mField0[0ULL], &t64.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t84[0ULL], &t85[0ULL]);
  t812[0] = se_efOut[0];
  t941 = t812[0ULL];
  tlu2_1d_linear_linear_value(&te_efOut[0ULL], &t64.mField0[0ULL], &t64.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t84[0ULL], &t85[0ULL]);
  t812[0] = te_efOut[0];
  Preheating_Pipe_2P_v_I = t812[0ULL];
  if (X[22ULL] <= t941) {
    intrm_sf_mf_486 = X[22ULL] / (t941 == 0.0 ? 1.0E-16 : t941) - 1.0;
  } else if (X[22ULL] >= Preheating_Pipe_2P_v_I) {
    intrm_sf_mf_486 = (X[22ULL] - 4000.0) / (4000.0 - Preheating_Pipe_2P_v_I ==
      0.0 ? 1.0E-16 : 4000.0 - Preheating_Pipe_2P_v_I) + 2.0;
  } else {
    t1036 = Preheating_Pipe_2P_v_I - t941;
    intrm_sf_mf_486 = (X[22ULL] - t941) / (t1036 == 0.0 ? 1.0E-16 : t1036);
  }

  t941 = -X[141ULL] + X[47ULL];
  t813[0ULL] = intrm_sf_mf_486;
  tlu2_linear_linear_prelookup(&ue_efOut.mField0[0ULL], &ue_efOut.mField1[0ULL],
    &ue_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t813[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t61 = ue_efOut;
  tlu2_2d_linear_linear_value(&ve_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], &t64.mField0[0ULL], &t64.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = ve_efOut[0];
  Preheating_Pipe_2P_v_I = t812[0ULL];
  t944 = -X[142ULL] + X[45ULL];
  tlu2_2d_linear_linear_value(&we_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], &t64.mField0[0ULL], &t64.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = we_efOut[0];
  t945 = t812[0ULL];
  t813[0ULL] = Preheating_Thermodynamic_Properties_Sensor_2P1_V;
  tlu2_linear_linear_prelookup(&xe_efOut.mField0[0ULL], &xe_efOut.mField1[0ULL],
    &xe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t813[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t61 = xe_efOut;
  tlu2_2d_linear_linear_value(&ye_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], &t81.mField0[0ULL], &t81.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = ye_efOut[0];
  t927 = -t812[0ULL];
  Preheating_Thermodynamic_Properties_Sensor_2P1_V = -t927;
  t948 = X[43ULL] * -t927 * 100.0 + X[44ULL];
  tlu2_2d_linear_linear_value(&af_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], &t81.mField0[0ULL], &t81.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = af_efOut[0];
  t1041 = -t812[0ULL];
  t949 = -t1041;
  tlu2_2d_linear_linear_value(&bf_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], &t81.mField0[0ULL], &t81.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = bf_efOut[0];
  t1042 = -t812[0ULL];
  t950 = -t1042;
  t813[0ULL] = t921;
  tlu2_linear_linear_prelookup(&cf_efOut.mField0[0ULL], &cf_efOut.mField1[0ULL],
    &cf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t813[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t66 = cf_efOut;
  tlu2_2d_linear_linear_value(&df_efOut[0ULL], &t66.mField0[0ULL], &t66.mField2
    [0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = df_efOut[0];
  t1043 = -t812[0ULL];
  t921 = -t1043;
  tlu2_2d_linear_linear_value(&ef_efOut[0ULL], &t66.mField0[0ULL], &t66.mField2
    [0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = ef_efOut[0];
  t1045 = -t812[0ULL];
  t952 = -t1045;
  tlu2_2d_linear_linear_value(&ff_efOut[0ULL], &t66.mField0[0ULL], &t66.mField2
    [0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = ff_efOut[0];
  t1046 = -t812[0ULL];
  t953 = -t1046;
  t967 = X[0ULL] - X[49ULL];
  if (X[97ULL] <= Steam_Drum_h_liq) {
    Simscape_Component_ideal_enthalpy_drop = X[97ULL] / (Steam_Drum_h_liq == 0.0
      ? 1.0E-16 : Steam_Drum_h_liq) - 1.0;
  } else if (X[97ULL] >= Steam_Generator_two_phase_fluid_T_out) {
    Simscape_Component_ideal_enthalpy_drop = (X[97ULL] - 4000.0) / (4000.0 -
      Steam_Generator_two_phase_fluid_T_out == 0.0 ? 1.0E-16 : 4000.0 -
      Steam_Generator_two_phase_fluid_T_out) + 2.0;
  } else {
    t1141 = Steam_Generator_two_phase_fluid_T_out - Steam_Drum_h_liq;
    Simscape_Component_ideal_enthalpy_drop = (X[97ULL] - Steam_Drum_h_liq) /
      (t1141 == 0.0 ? 1.0E-16 : t1141);
  }

  t813[0ULL] = Simscape_Component_ideal_enthalpy_drop;
  tlu2_linear_linear_prelookup(&gf_efOut.mField0[0ULL], &gf_efOut.mField1[0ULL],
    &gf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t813[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t81 = gf_efOut;
  tlu2_2d_linear_linear_value(&hf_efOut[0ULL], &t81.mField0[0ULL], &t81.mField2
    [0ULL], &t82.mField0[0ULL], &t82.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t818[0] = hf_efOut[0];
  Simscape_Component_ideal_enthalpy_drop = t818[0ULL];
  Simscape_Component_ideal_outlet_quality = t967 / 30.0;
  if (Simscape_Component_ideal_outlet_quality <= 0.0) {
    t717_idx_0 = 0.0;
  } else {
    t717_idx_0 = Simscape_Component_ideal_outlet_quality >= 1.0E+6 ? 1.0E+6 :
      Simscape_Component_ideal_outlet_quality;
  }

  Simscape_Component_ideal_outlet_quality = pmf_sqrt(t717_idx_0) * 0.5;
  if (U_idx_3 <= 0.0) {
    t971 = 0.0;
  } else {
    t971 = U_idx_3 >= 1.0 ? 1.0 : U_idx_3;
  }

  t972 = Simscape_Component_ideal_outlet_quality * t971;
  t1265 = fabs(t972);
  Simscape_Component_ideal_outlet_quality = t1265 / 0.5;
  t973 = 0.8 - (Simscape_Component_ideal_outlet_quality - 0.8) *
    (Simscape_Component_ideal_outlet_quality - 0.8) * 0.2;
  Simscape_Component_ideal_outlet_quality =
    Simscape_Component_ideal_enthalpy_drop * X[0ULL] * 100.0 + X[97ULL];
  if (t901 <= t901) {
    Simscape_Component_ideal_enthalpy_drop = t901 / (t901 == 0.0 ? 1.0E-16 :
      t901) - 1.0;
  } else if (t901 >= Simscape_Component_ideal_outlet_enthalpy) {
    Simscape_Component_ideal_enthalpy_drop = (t901 - 4000.0) / (4000.0 -
      Simscape_Component_ideal_outlet_enthalpy == 0.0 ? 1.0E-16 : 4000.0 -
      Simscape_Component_ideal_outlet_enthalpy) + 2.0;
  } else {
    t717_idx_0 = Simscape_Component_ideal_outlet_enthalpy - t901;
    Simscape_Component_ideal_enthalpy_drop = (t901 - t901) / (t717_idx_0 == 0.0 ?
      1.0E-16 : t717_idx_0);
  }

  t813[0ULL] = Simscape_Component_ideal_enthalpy_drop;
  tlu2_linear_linear_prelookup(&if_efOut.mField0[0ULL], &if_efOut.mField1[0ULL],
    &if_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t813[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t61 = if_efOut;
  tlu2_2d_linear_linear_value(&jf_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], &t75.mField0[0ULL], &t75.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = jf_efOut[0];
  Simscape_Component_ideal_enthalpy_drop = t812[0ULL];
  t974 = X[49ULL] * Simscape_Component_ideal_enthalpy_drop * 100.0 + t901;
  if (Simscape_Component_ideal_outlet_enthalpy <= t901) {
    Simscape_Component_ideal_enthalpy_drop =
      Simscape_Component_ideal_outlet_enthalpy / (t901 == 0.0 ? 1.0E-16 : t901)
      - 1.0;
  } else if (Simscape_Component_ideal_outlet_enthalpy >=
             Simscape_Component_ideal_outlet_enthalpy) {
    Simscape_Component_ideal_enthalpy_drop =
      (Simscape_Component_ideal_outlet_enthalpy - 4000.0) / (4000.0 -
      Simscape_Component_ideal_outlet_enthalpy == 0.0 ? 1.0E-16 : 4000.0 -
      Simscape_Component_ideal_outlet_enthalpy) + 2.0;
  } else {
    t717_idx_0 = Simscape_Component_ideal_outlet_enthalpy - t901;
    Simscape_Component_ideal_enthalpy_drop =
      (Simscape_Component_ideal_outlet_enthalpy - t901) / (t717_idx_0 == 0.0 ?
      1.0E-16 : t717_idx_0);
  }

  t813[0ULL] = Simscape_Component_ideal_enthalpy_drop;
  tlu2_linear_linear_prelookup(&kf_efOut.mField0[0ULL], &kf_efOut.mField1[0ULL],
    &kf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t813[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t78 = kf_efOut;
  tlu2_2d_linear_linear_value(&lf_efOut[0ULL], &t78.mField0[0ULL], &t78.mField2
    [0ULL], &t75.mField0[0ULL], &t75.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = lf_efOut[0];
  t901 = t812[0ULL];
  Simscape_Component_ideal_enthalpy_drop = X[49ULL] * t901 * 100.0 +
    Simscape_Component_ideal_outlet_enthalpy;
  tlu2_2d_linear_linear_value(&mf_efOut[0ULL], &t81.mField0[0ULL], &t81.mField2
    [0ULL], &t82.mField0[0ULL], &t82.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t821[0] = mf_efOut[0];
  t901 = t821[0ULL];
  tlu2_2d_linear_linear_value(&nf_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], &t75.mField0[0ULL], &t75.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = nf_efOut[0];
  Simscape_Component_ideal_outlet_enthalpy = t812[0ULL];
  tlu2_2d_linear_linear_value(&of_efOut[0ULL], &t78.mField0[0ULL], &t78.mField2
    [0ULL], &t75.mField0[0ULL], &t75.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = of_efOut[0];
  t975 = t812[0ULL];
  t1079 = t975 - Simscape_Component_ideal_outlet_enthalpy;
  Simscape_Component_ideal_outlet_enthalpy = (t901 -
    Simscape_Component_ideal_outlet_enthalpy) / (t1079 == 0.0 ? 1.0E-16 : t1079);
  if (Simscape_Component_ideal_outlet_enthalpy <= 0.0) {
    t975 = 0.0;
  } else {
    t975 = Simscape_Component_ideal_outlet_enthalpy >= 1.0 ? 1.0 :
      Simscape_Component_ideal_outlet_enthalpy;
  }

  Simscape_Component_ideal_outlet_enthalpy =
    (Simscape_Component_ideal_enthalpy_drop - t974) * t975 + t974;
  Simscape_Component_ideal_enthalpy_drop =
    Simscape_Component_ideal_outlet_quality -
    Simscape_Component_ideal_outlet_enthalpy;
  Simscape_Component_ideal_outlet_quality = t975;
  t974 = t971;
  if (X[26ULL] < Steam_Drum_h_liq) {
    t971 = X[26ULL] / (Steam_Drum_h_liq == 0.0 ? 1.0E-16 : Steam_Drum_h_liq) -
      1.0;
  } else {
    t971 = 0.0;
  }

  if (X[27ULL] > Steam_Generator_two_phase_fluid_T_out) {
    t975 = (X[27ULL] - 4000.0) / (4000.0 - Steam_Generator_two_phase_fluid_T_out
      == 0.0 ? 1.0E-16 : 4000.0 - Steam_Generator_two_phase_fluid_T_out) + 2.0;
  } else {
    t975 = 1.0;
  }

  t813[0ULL] = t971;
  t490[0] = 25ULL;
  tlu2_linear_linear_prelookup(&pf_efOut.mField0[0ULL], &pf_efOut.mField1[0ULL],
    &pf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t813[0ULL],
    &t490[0ULL], &t85[0ULL]);
  t69 = pf_efOut;
  tlu2_2d_linear_linear_value(&qf_efOut[0ULL], &t69.mField0[0ULL], &t69.mField2
    [0ULL], &t836[0ULL], &t838[0ULL], ((_NeDynamicSystem*)(LC))->mField31,
    &t490[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = qf_efOut[0];
  t976 = t812[0ULL];
  t813[0ULL] = t975;
  tlu2_linear_linear_prelookup(&rf_efOut.mField0[0ULL], &rf_efOut.mField1[0ULL],
    &rf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t813[0ULL],
    &t490[0ULL], &t85[0ULL]);
  t61 = rf_efOut;
  tlu2_2d_linear_linear_value(&sf_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], &t836[0ULL], &t838[0ULL], ((_NeDynamicSystem*)(LC))->mField32,
    &t490[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = sf_efOut[0];
  t977 = t812[0ULL];
  t1079 = X[28ULL] * t976 + X[29ULL] * t977;
  t978 = X[28ULL] * t976 / (t1079 == 0.0 ? 1.0E-16 : t1079);
  t1079 = X[28ULL] + X[29ULL];
  tlu2_2d_linear_linear_value(&tf_efOut[0ULL], &t68.mField0[0ULL], &t68.mField2
    [0ULL], &t836[0ULL], &t838[0ULL], ((_NeDynamicSystem*)(LC))->mField0, &t113
    [0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = tf_efOut[0];
  Thermodynamic_Properties_Sensor_2P1_V = t812[0ULL];
  t982 = X[0ULL] * Thermodynamic_Properties_Sensor_2P1_V * 100.0 +
    Steam_Drum_h_liq;
  tlu2_2d_linear_linear_value(&uf_efOut[0ULL], &t53.mField0[0ULL], &t53.mField2
    [0ULL], &t836[0ULL], &t838[0ULL], ((_NeDynamicSystem*)(LC))->mField0, &t113
    [0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = uf_efOut[0];
  Thermodynamic_Properties_Sensor_2P1_V = t812[0ULL];
  t983 = X[0ULL] * Thermodynamic_Properties_Sensor_2P1_V * 100.0 +
    Steam_Generator_two_phase_fluid_T_out;
  if (X[147ULL] <= Steam_Drum_h_liq) {
    Thermodynamic_Properties_Sensor_2P1_V = X[147ULL] / (Steam_Drum_h_liq == 0.0
      ? 1.0E-16 : Steam_Drum_h_liq) - 1.0;
  } else if (X[147ULL] >= Steam_Generator_two_phase_fluid_T_out) {
    Thermodynamic_Properties_Sensor_2P1_V = (X[147ULL] - 4000.0) / (4000.0 -
      Steam_Generator_two_phase_fluid_T_out == 0.0 ? 1.0E-16 : 4000.0 -
      Steam_Generator_two_phase_fluid_T_out) + 2.0;
  } else {
    t717_idx_0 = Steam_Generator_two_phase_fluid_T_out - Steam_Drum_h_liq;
    Thermodynamic_Properties_Sensor_2P1_V = (X[147ULL] - Steam_Drum_h_liq) /
      (t717_idx_0 == 0.0 ? 1.0E-16 : t717_idx_0);
  }

  Steam_Drum_h_liq = X[0ULL] * t976 * 100.0 + X[26ULL];
  if (X[28ULL] > 0.0) {
    if (t983 > t982) {
      if (Steam_Drum_h_liq < t982) {
        Steam_Generator_two_phase_fluid_T_out = 0.0;
      } else if (Steam_Drum_h_liq > t983) {
        Steam_Generator_two_phase_fluid_T_out = X[28ULL] / 0.1;
      } else {
        t717_idx_0 = t983 - t982;
        Steam_Generator_two_phase_fluid_T_out = (Steam_Drum_h_liq - t982) * X
          [28ULL] / (t717_idx_0 == 0.0 ? 1.0E-16 : t717_idx_0) / 0.1;
      }
    } else {
      Steam_Generator_two_phase_fluid_T_out = 0.0;
    }
  } else {
    Steam_Generator_two_phase_fluid_T_out = 0.0;
  }

  t984 = X[0ULL] * t977 * 100.0 + X[27ULL];
  if (X[29ULL] > 0.0) {
    if (t983 > t982) {
      if (t984 < t982) {
        t985 = X[29ULL] / 0.1;
      } else if (t984 > t983) {
        t985 = 0.0;
      } else {
        t717_idx_0 = t983 - t982;
        t985 = (t983 - t984) * X[29ULL] / (t717_idx_0 == 0.0 ? 1.0E-16 :
          t717_idx_0) / 0.1;
      }
    } else {
      t985 = 0.0;
    }
  } else {
    t985 = 0.0;
  }

  t813[0ULL] = t971;
  tlu2_linear_linear_prelookup(&vf_efOut.mField0[0ULL], &vf_efOut.mField1[0ULL],
    &vf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t813[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t61 = vf_efOut;
  tlu2_2d_linear_linear_value(&wf_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], &t836[0ULL], &t838[0ULL], ((_NeDynamicSystem*)(LC))->mField14,
    &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = wf_efOut[0];
  t971 = t812[0ULL];
  t813[0ULL] = t975;
  tlu2_linear_linear_prelookup(&xf_efOut.mField0[0ULL], &xf_efOut.mField1[0ULL],
    &xf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t813[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t61 = xf_efOut;
  tlu2_2d_linear_linear_value(&yf_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], &t836[0ULL], &t838[0ULL], ((_NeDynamicSystem*)(LC))->mField14,
    &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = yf_efOut[0];
  t975 = t812[0ULL];
  tlu2_2d_linear_linear_value(&ag_efOut[0ULL], &t68.mField0[0ULL], &t68.mField2
    [0ULL], &t836[0ULL], &t838[0ULL], ((_NeDynamicSystem*)(LC))->mField14,
    &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = ag_efOut[0];
  t986 = t812[0ULL];
  tlu2_2d_linear_linear_value(&bg_efOut[0ULL], &t53.mField0[0ULL], &t53.mField2
    [0ULL], &t836[0ULL], &t838[0ULL], ((_NeDynamicSystem*)(LC))->mField14,
    &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = bg_efOut[0];
  t987 = t812[0ULL];
  t988 = Steam_Generator_two_phase_fluid_T_out - t985;
  t813[0ULL] = X[30ULL];
  tlu2_linear_nearest_prelookup(&cg_efOut.mField0[0ULL], &cg_efOut.mField1[0ULL],
    &cg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t813[0ULL],
    &t98[0ULL], &t85[0ULL]);
  t66 = cg_efOut;
  t813[0ULL] = X[31ULL];
  tlu2_linear_nearest_prelookup(&dg_efOut.mField0[0ULL], &dg_efOut.mField1[0ULL],
    &dg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t813[0ULL],
    &t101[0ULL], &t85[0ULL]);
  t67 = dg_efOut;
  tlu2_2d_linear_nearest_value(&eg_efOut[0ULL], &t66.mField0[0ULL],
    &t66.mField2[0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField5, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t812[0] = eg_efOut[0];
  Steam_Generator_two_phase_fluid_T_out = t812[0ULL];
  t813[0ULL] = X[32ULL];
  tlu2_linear_nearest_prelookup(&fg_efOut.mField0[0ULL], &fg_efOut.mField1[0ULL],
    &fg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t813[0ULL],
    &t98[0ULL], &t85[0ULL]);
  t56 = fg_efOut;
  tlu2_2d_linear_nearest_value(&gg_efOut[0ULL], &t56.mField0[0ULL],
    &t56.mField2[0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField5, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t812[0] = gg_efOut[0];
  t985 = t812[0ULL];
  Steam_Generator_two_phase_fluid_T_out = (Steam_Generator_two_phase_fluid_T_out
    + t985) / 2.0;
  t985 = Steam_Generator_two_phase_fluid_T_out * 0.42000000000000004 / 0.018;
  t813[0ULL] = X[33ULL];
  tlu2_linear_nearest_prelookup(&hg_efOut.mField0[0ULL], &hg_efOut.mField1[0ULL],
    &hg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t813[0ULL],
    &t84[0ULL], &t85[0ULL]);
  t78 = hg_efOut;
  tlu2_2d_linear_nearest_value(&ig_efOut[0ULL], &t63.mField0[0ULL],
    &t63.mField2[0ULL], &t78.mField0[0ULL], &t78.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = ig_efOut[0];
  t989 = t812[0ULL];
  t990 = t989 * 0.036815538909255395 / 0.025;
  Condenser_thermal_liquid_mass = (t985 + t990) / 2.0;
  t813[0ULL] = X[30ULL];
  tlu2_linear_linear_prelookup(&jg_efOut.mField0[0ULL], &jg_efOut.mField1[0ULL],
    &jg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t813[0ULL],
    &t98[0ULL], &t85[0ULL]);
  t27 = jg_efOut;
  t813[0ULL] = X[31ULL];
  tlu2_linear_linear_prelookup(&kg_efOut.mField0[0ULL], &kg_efOut.mField1[0ULL],
    &kg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t813[0ULL],
    &t101[0ULL], &t85[0ULL]);
  t77 = kg_efOut;
  tlu2_2d_linear_linear_value(&lg_efOut[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], &t77.mField0[0ULL], &t77.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField9, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t812[0] = lg_efOut[0];
  intrm_sf_mf_408 = t812[0ULL];
  t813[0ULL] = X[32ULL];
  tlu2_linear_linear_prelookup(&mg_efOut.mField0[0ULL], &mg_efOut.mField1[0ULL],
    &mg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t813[0ULL],
    &t98[0ULL], &t85[0ULL]);
  t63 = mg_efOut;
  tlu2_2d_linear_linear_value(&ng_efOut[0ULL], &t63.mField0[0ULL], &t63.mField2
    [0ULL], &t77.mField0[0ULL], &t77.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField9, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t812[0] = ng_efOut[0];
  t993 = t812[0ULL];
  intrm_sf_mf_408 = (intrm_sf_mf_408 + t993) / 2.0;
  t993 = (X[135ULL] - -3.5) / 2.0;
  t994 = tanh(intrm_sf_mf_408 * t993 * 3.0 / (t985 == 0.0 ? 1.0E-16 : t985)) *
    intrm_sf_mf_408 * t993;
  t985 = Condenser_thermal_liquid_mass + t994;
  t813[0ULL] = X[33ULL];
  tlu2_linear_linear_prelookup(&og_efOut.mField0[0ULL], &og_efOut.mField1[0ULL],
    &og_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t813[0ULL],
    &t84[0ULL], &t85[0ULL]);
  t64 = og_efOut;
  tlu2_1d_linear_linear_value(&pg_efOut[0ULL], &t64.mField0[0ULL], &t64.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t84[0ULL], &t85[0ULL]);
  t812[0] = pg_efOut[0];
  intrm_sf_mf_408 = t812[0ULL];
  tlu2_1d_linear_linear_value(&qg_efOut[0ULL], &t64.mField0[0ULL], &t64.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t84[0ULL], &t85[0ULL]);
  t812[0] = qg_efOut[0];
  t995 = t812[0ULL];
  if (X[34ULL] <= intrm_sf_mf_408) {
    t1273 = X[34ULL] / (intrm_sf_mf_408 == 0.0 ? 1.0E-16 : intrm_sf_mf_408) -
      1.0;
  } else if (X[34ULL] >= t995) {
    t1273 = (X[34ULL] - 4000.0) / (4000.0 - t995 == 0.0 ? 1.0E-16 : 4000.0 -
      t995) + 2.0;
  } else {
    t717_idx_0 = t995 - intrm_sf_mf_408;
    t1273 = (X[34ULL] - intrm_sf_mf_408) / (t717_idx_0 == 0.0 ? 1.0E-16 :
      t717_idx_0);
  }

  intrm_sf_mf_411 = (t1273 < 0.0);
  if (X[35ULL] <= intrm_sf_mf_408) {
    t1274 = X[35ULL] / (intrm_sf_mf_408 == 0.0 ? 1.0E-16 : intrm_sf_mf_408) -
      1.0;
  } else if (X[35ULL] >= t995) {
    t1274 = (X[35ULL] - 4000.0) / (4000.0 - t995 == 0.0 ? 1.0E-16 : 4000.0 -
      t995) + 2.0;
  } else {
    t717_idx_0 = t995 - intrm_sf_mf_408;
    t1274 = (X[35ULL] - intrm_sf_mf_408) / (t717_idx_0 == 0.0 ? 1.0E-16 :
      t717_idx_0);
  }

  intrm_sf_mf_415 = (t1274 < 0.0);
  t813[0ULL] = ((intrm_sf_mf_411 ? t1273 : 0.0) + (intrm_sf_mf_415 ? t1274 : 0.0))
    / 2.0;
  tlu2_linear_nearest_prelookup(&rg_efOut.mField0[0ULL], &rg_efOut.mField1[0ULL],
    &rg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t813[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t61 = rg_efOut;
  tlu2_2d_linear_nearest_value(&sg_efOut[0ULL], &t61.mField0[0ULL],
    &t61.mField2[0ULL], &t78.mField0[0ULL], &t78.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = sg_efOut[0];
  t997 = t812[0ULL];
  tlu2_2d_linear_nearest_value(&tg_efOut[0ULL], &t61.mField0[0ULL],
    &t61.mField2[0ULL], &t78.mField0[0ULL], &t78.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = tg_efOut[0];
  Steam_Generator_Rth_mix = t812[0ULL];
  tlu2_2d_linear_nearest_value(&ug_efOut[0ULL], &t61.mField0[0ULL],
    &t61.mField2[0ULL], &t78.mField0[0ULL], &t78.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = ug_efOut[0];
  t1000 = t812[0ULL];
  t1001 = t997 * Steam_Generator_Rth_mix / (t1000 == 0.0 ? 1.0E-16 : t1000);
  if (-X[158ULL] > 0.0) {
    t1003 = -X[158ULL];
  } else {
    t1003 = 0.0;
  }

  intrm_sf_mf_424 = tanh((X[141ULL] - (-X[158ULL])) * t1001 * 3.0 / (t990 == 0.0
    ? 1.0E-16 : t990));
  t990 = (intrm_sf_mf_424 + 1.0) / 2.0 * (X[141ULL] > 0.0 ? X[141ULL] : 0.0) +
    (1.0 - intrm_sf_mf_424) / 2.0 * t1003;
  Steam_Generator_Q = t1001 * t990;
  t1003 = Steam_Generator_Q + Condenser_thermal_liquid_mass;
  intrm_sf_mf_424 = X[37ULL] >= 0.0 ? X[37ULL] : 0.0;
  t1005 = X[38ULL] >= 0.0 ? X[38ULL] : 0.0;
  t1251 = intrm_sf_mf_424 + X[164ULL];
  t717_idx_0 = (intrm_sf_mf_424 + X[164ULL]) * (1.0 - pmf_exp(-X[36ULL] / (t1251
    == 0.0 ? 1.0E-16 : t1251)));
  t1265 = t1001 * t1005 + X[164ULL];
  t927 = t717_idx_0 / (t1265 == 0.0 ? 1.0E-16 : t1265);
  t1007 = t927 <= 15.0 ? t927 : 15.0;
  t813[0ULL] = t1273;
  tlu2_linear_linear_prelookup(&vg_efOut.mField0[0ULL], &vg_efOut.mField1[0ULL],
    &vg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t813[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t72 = vg_efOut;
  tlu2_2d_linear_linear_value(&wg_efOut[0ULL], &t72.mField0[0ULL], &t72.mField2
    [0ULL], &t64.mField0[0ULL], &t64.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = wg_efOut[0];
  t927 = t812[0ULL];
  t1008 = X[33ULL] * t927 * 100.0 + X[34ULL];
  tlu2_2d_linear_linear_value(&xg_efOut[0ULL], &t68.mField0[0ULL], &t68.mField2
    [0ULL], &t64.mField0[0ULL], &t64.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = xg_efOut[0];
  t1009 = t812[0ULL];
  t1010 = X[33ULL] * t1009 * 100.0 + intrm_sf_mf_408;
  intrm_sf_mf_408 = (t1010 - t1008) / (t1001 == 0.0 ? 1.0E-16 : t1001);
  t1011 = (1.0 - pmf_exp(-t1007)) * X[163ULL];
  intrm_sf_mf_431 = (t1011 > intrm_sf_mf_408 * 1000.0);
  intrm_sf_mf_433 = (t1008 < t1010);
  intrm_sf_mf_435 = (t1008 > t1010);
  tlu2_2d_linear_linear_value(&yg_efOut[0ULL], &t53.mField0[0ULL], &t53.mField2
    [0ULL], &t64.mField0[0ULL], &t64.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = yg_efOut[0];
  t1012 = t812[0ULL];
  t1013 = X[33ULL] * t1012 * 100.0 + t995;
  intrm_sf_mf_436 = (t1008 > t1013);
  intrm_sf_mf_439 = (X[163ULL] < 0.0);
  intrm_sf_mf_440 = (X[163ULL] > 0.0);
  if (intrm_sf_mf_440) {
    if (intrm_sf_mf_433) {
      if (intrm_sf_mf_431) {
        t717_idx_0 = -pmf_log((X[163ULL] - intrm_sf_mf_408 * 1000.0) / (X[163ULL]
          == 0.0 ? 1.0E-16 : X[163ULL]));
        t995 = t717_idx_0 / (t1007 == 0.0 ? 1.0E-16 : t1007);
      } else {
        t995 = 1.0;
      }
    } else {
      t995 = 0.0;
    }
  } else {
    t995 = intrm_sf_mf_439 ? intrm_sf_mf_436 ? 0.0 : (real_T)!intrm_sf_mf_435 :
      (real_T)intrm_sf_mf_433;
  }

  intrm_sf_mf_416 = (t1273 > 1.0);
  intrm_sf_mf_417 = (t1274 > 1.0);
  t813[0ULL] = ((intrm_sf_mf_416 ? t1273 : 1.0) + (intrm_sf_mf_417 ? t1274 : 1.0))
    / 2.0;
  tlu2_linear_nearest_prelookup(&ah_efOut.mField0[0ULL], &ah_efOut.mField1[0ULL],
    &ah_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t813[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t61 = ah_efOut;
  tlu2_2d_linear_nearest_value(&bh_efOut[0ULL], &t61.mField0[0ULL],
    &t61.mField2[0ULL], &t78.mField0[0ULL], &t78.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = bh_efOut[0];
  Steam_Generator_Q_cond = t812[0ULL];
  tlu2_2d_linear_nearest_value(&ch_efOut[0ULL], &t61.mField0[0ULL],
    &t61.mField2[0ULL], &t78.mField0[0ULL], &t78.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = ch_efOut[0];
  Steam_Generator_Q_mix = t812[0ULL];
  tlu2_2d_linear_nearest_value(&dh_efOut[0ULL], &t61.mField0[0ULL],
    &t61.mField2[0ULL], &t78.mField0[0ULL], &t78.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = dh_efOut[0];
  intrm_sf_mf_511 = t812[0ULL];
  t1018 = Steam_Generator_Q_cond * Steam_Generator_Q_mix / (intrm_sf_mf_511 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_511);
  t1141 = (intrm_sf_mf_424 + X[164ULL]) * (1.0 - pmf_exp(-X[39ULL] / (t1251 ==
    0.0 ? 1.0E-16 : t1251)));
  t717_idx_0 = X[164ULL] + t1018 * t1005;
  t1005 = t1141 / (t717_idx_0 == 0.0 ? 1.0E-16 : t717_idx_0);
  intrm_sf_mf_426 = t1005 <= 15.0 ? t1005 : 15.0;
  t1005 = (t1013 - t1008) / (t1018 == 0.0 ? 1.0E-16 : t1018);
  intrm_sf_mf_432 = (t1008 < t1013);
  t1021 = (1.0 - pmf_exp(-intrm_sf_mf_426)) * X[163ULL];
  intrm_sf_mf_450 = (t1021 < t1005 * 1000.0);
  intrm_sf_mf_437 = (t1008 <= t1013);
  if (intrm_sf_mf_440) {
    t1023 = intrm_sf_mf_433 ? 0.0 : (real_T)!intrm_sf_mf_432;
  } else if (intrm_sf_mf_439) {
    if (intrm_sf_mf_436) {
      if (intrm_sf_mf_450) {
        t717_idx_0 = -pmf_log((X[163ULL] - t1005 * 1000.0) / (X[163ULL] == 0.0 ?
          1.0E-16 : X[163ULL]));
        t1023 = t717_idx_0 / (intrm_sf_mf_426 == 0.0 ? 1.0E-16 : intrm_sf_mf_426);
      } else {
        t1023 = 1.0;
      }
    } else {
      t1023 = 0.0;
    }
  } else {
    t1023 = intrm_sf_mf_433 ? 0.0 : (real_T)!intrm_sf_mf_437;
  }

  t1024 = (1.0 - t995) - t1023;
  t1141 = (intrm_sf_mf_424 + X[164ULL]) * (1.0 - pmf_exp(-X[40ULL] / (t1251 ==
    0.0 ? 1.0E-16 : t1251)));
  t1251 = t1265 / (t1001 == 0.0 ? 1.0E-16 : t1001);
  intrm_sf_mf_424 = t1141 / (t1251 == 0.0 ? 1.0E-16 : t1251);
  if (intrm_sf_mf_440) {
    if (intrm_sf_mf_433) {
      t1025 = X[163ULL] - intrm_sf_mf_408 * 1000.0;
    } else if (intrm_sf_mf_432) {
      t1025 = X[163ULL];
    } else {
      t1025 = X[163ULL] - t1005 * 1000.0;
    }
  } else if (intrm_sf_mf_439) {
    if (intrm_sf_mf_436) {
      t1025 = X[163ULL] - t1005 * 1000.0;
    } else if (intrm_sf_mf_435) {
      t1025 = X[163ULL];
    } else {
      t1025 = X[163ULL] - intrm_sf_mf_408 * 1000.0;
    }
  } else if (intrm_sf_mf_433) {
    t1025 = intrm_sf_mf_408 * 1000.0 + X[163ULL];
  } else if (intrm_sf_mf_437) {
    t1025 = X[163ULL];
  } else {
    t1025 = t1005 * 1000.0 + X[163ULL];
  }

  if (intrm_sf_mf_440) {
    if (intrm_sf_mf_433) {
      if (intrm_sf_mf_431) {
        t1026 = t1010;
      } else {
        t1026 = t1001 * t1011 * 0.001 + t1008;
      }
    } else if (intrm_sf_mf_432) {
      t1026 = t1008;
    } else {
      t1026 = t1018 * t1021 * 0.001 + t1008;
    }
  } else if (intrm_sf_mf_439) {
    if (intrm_sf_mf_436) {
      if (intrm_sf_mf_450) {
        t1026 = t1013;
      } else {
        t1026 = t1018 * t1021 * 0.001 + t1008;
      }
    } else if (intrm_sf_mf_435) {
      t1026 = t1008;
    } else {
      t1026 = t1001 * t1011 * 0.001 + t1008;
    }
  } else if (intrm_sf_mf_433) {
    t1026 = t1001 * t1011 * 0.001 + t1008;
  } else if (intrm_sf_mf_437) {
    t1026 = t1008;
  } else {
    t1026 = t1018 * t1021 * 0.001 + t1008;
  }

  t1027 = t1010 - t1026;
  t1028 = t1013 - t1026;
  t717_idx_0 = intrm_sf_mf_424 * t1025 * t1024;
  intrm_sf_mf_431 = (t717_idx_0 * 0.001 > t1028);
  intrm_sf_mf_450 = (t1026 < t1013);
  intrm_sf_mf_451 = (t717_idx_0 * 0.001 < t1027);
  intrm_sf_mf_452 = (t1026 > t1010);
  if (intrm_sf_mf_440) {
    if (intrm_sf_mf_450) {
      if (intrm_sf_mf_431) {
        t1026 = t1028 / (t1025 == 0.0 ? 1.0E-16 : t1025) / (intrm_sf_mf_424 ==
          0.0 ? 1.0E-16 : intrm_sf_mf_424) * 1000.0;
      } else {
        t1026 = t1024;
      }
    } else {
      t1026 = 0.0;
    }
  } else if (intrm_sf_mf_439) {
    if (intrm_sf_mf_452) {
      if (intrm_sf_mf_451) {
        t1026 = t1027 / (t1025 == 0.0 ? 1.0E-16 : t1025) / (intrm_sf_mf_424 ==
          0.0 ? 1.0E-16 : intrm_sf_mf_424) * 1000.0;
      } else {
        t1026 = t1024;
      }
    } else {
      t1026 = 0.0;
    }
  } else {
    t1026 = t1024;
  }

  t1027 = t1024 - t1026;
  t1028 = t995 + (intrm_sf_mf_440 ? 0.0 : intrm_sf_mf_439 ? t1027 : 0.0);
  intrm_sf_mf_418 = (t1003 <= t985 * t1028);
  if (intrm_sf_mf_418) {
    t1265 = t985 * t1028;
    t995 = t1003 / (t1265 == 0.0 ? 1.0E-16 : t1265);
  } else {
    t995 = t985 * t1028 / (t1003 == 0.0 ? 1.0E-16 : t1003);
  }

  t1024 = t1028 >= 0.001 ? t995 : 0.0;
  t717_idx_0 = t1018 * t990;
  t1030 = Condenser_thermal_liquid_mass + t717_idx_0;
  t1027 = t1023 + (intrm_sf_mf_440 ? t1027 : 0.0);
  intrm_sf_mf_503 = (t1030 <= t985 * t1027);
  if (intrm_sf_mf_503) {
    t1265 = t985 * t1027;
    Condenser_thermal_liquid_mass = t1030 / (t1265 == 0.0 ? 1.0E-16 : t1265);
  } else {
    Condenser_thermal_liquid_mass = t985 * t1027 / (t1030 == 0.0 ? 1.0E-16 :
      t1030);
  }

  t1023 = t1027 >= 0.001 ? Condenser_thermal_liquid_mass : 0.0;
  if (Steam_Generator_Q <= t994 * t1028) {
    t1031 = Steam_Generator_Q;
  } else {
    t1031 = t994 * t1028;
  }

  Steam_Generator_Q = t994 * t1026;
  if (t717_idx_0 <= t994 * t1027) {
    t1032 = t717_idx_0;
  } else {
    t1032 = t994 * t1027;
  }

  tlu2_2d_linear_nearest_value(&eh_efOut[0ULL], &t66.mField0[0ULL],
    &t66.mField2[0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t812[0] = eh_efOut[0];
  t994 = t812[0ULL];
  tlu2_2d_linear_nearest_value(&fh_efOut[0ULL], &t56.mField0[0ULL],
    &t56.mField2[0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField12, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t812[0] = fh_efOut[0];
  t717_idx_0 = t812[0ULL];
  t994 = (t994 + t717_idx_0) / 2.0;
  t1251 = t994 * 0.42000000000000004;
  t993 = t993 * 0.018 / (t1251 == 0.0 ? 1.0E-16 : t1251);
  t994 = pmf_sqrt(t993 * t993 + 100.0);
  t993 = t994 * 29.915749795368463;
  t717_idx_0 = t994 * pmf_sqrt(t994) * pmf_sqrt(pmf_sqrt(t994)) *
    1.996694297036971;
  if (t994 > 250000.0) {
    zc_int17 = (t994 - 250000.0) / 325000.0 + 1.0;
  } else {
    zc_int17 = 1.0;
  }

  t994 = 1.0 - pmf_exp(-(t994 + 200.0) / 1000.0);
  Steam_Generator_two_phase_fluid_rho_mix = t717_idx_0 * zc_int17 * t994 + t993;
  tlu2_2d_linear_nearest_value(&gh_efOut[0ULL], &t66.mField0[0ULL],
    &t66.mField2[0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField13, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t812[0] = gh_efOut[0];
  t993 = t812[0ULL];
  tlu2_2d_linear_nearest_value(&hh_efOut[0ULL], &t56.mField0[0ULL],
    &t56.mField2[0ULL], &t67.mField0[0ULL], &t67.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField13, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t812[0] = hh_efOut[0];
  t994 = t812[0ULL];
  t993 = (t993 + t994) / 2.0;
  t993 = pmf_pow(Steam_Generator_two_phase_fluid_rho_mix * t993 *
                 0.55399065447813123, 0.33333333333333331) * 0.404;
  t1265 = t993 * Steam_Generator_two_phase_fluid_T_out / 0.018 *
    23.750440461138837;
  t993 = 1.0 / (t1265 == 0.0 ? 1.0E-16 : t1265);
  t994 = t997 > 0.5 ? t997 : 0.5;
  t1265 = t990 * 0.025;
  t1251 = t1000 * 0.036815538909255395;
  t990 = t1265 / (t1251 == 0.0 ? 1.0E-16 : t1251);
  t997 = t990 > 1000.0 ? t990 : 1000.0;
  t1251 = pmf_log10(6.9 / (t997 == 0.0 ? 1.0E-16 : t997) + 6.2093190311196615E-5)
    * pmf_log10(6.9 / (t997 == 0.0 ? 1.0E-16 : t997) + 6.2093190311196615E-5) *
    3.24;
  t1000 = 1.0 / (t1251 == 0.0 ? 1.0E-16 : t1251);
  t717_idx_0 = (pmf_pow(t994, 0.66666666666666663) - 1.0) * pmf_sqrt(t1000 / 8.0)
    * 12.7 + 1.0;
  t994 = (t997 - 1000.0) * (t1000 / 8.0) * t994 / (t717_idx_0 == 0.0 ? 1.0E-16 :
    t717_idx_0);
  t997 = (t990 - 2000.0) / 2000.0;
  t1000 = t997 * t997 * 3.0 - t997 * t997 * t997 * 2.0;
  if (t990 <= 2000.0) {
    t997 = 3.66;
  } else if (t990 >= 4000.0) {
    t997 = t994;
  } else {
    t997 = (1.0 - t1000) * 3.66 + t994 * t1000;
  }

  t1251 = Steam_Generator_Rth_mix * t997 / 0.025 * 41.233403578366037;
  t994 = t993 + 1.0 / (t1251 == 0.0 ? 1.0E-16 : t1251);
  if (intrm_sf_mf_418) {
    t990 = t1028 / (t994 == 0.0 ? 1.0E-16 : t994) / (t1003 == 0.0 ? 1.0E-16 :
      t1003);
  } else {
    t990 = 1.0 / (t994 == 0.0 ? 1.0E-16 : t994) / (t985 == 0.0 ? 1.0E-16 : t985);
  }

  t994 = t1028 >= 0.001 ? t990 : 0.0;
  tlu2_2d_linear_nearest_value(&ih_efOut[0ULL], &t49.mField0[0ULL],
    &t49.mField2[0ULL], &t78.mField0[0ULL], &t78.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = ih_efOut[0];
  t997 = t812[0ULL];
  tlu2_2d_linear_nearest_value(&jh_efOut[0ULL], &t49.mField0[0ULL],
    &t49.mField2[0ULL], &t78.mField0[0ULL], &t78.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = jh_efOut[0];
  Steam_Generator_Rth_mix = t812[0ULL];
  t1251 = Steam_Generator_Rth_mix * 0.036815538909255395;
  Steam_Generator_Rth_mix = t1265 / (t1251 == 0.0 ? 1.0E-16 : t1251);
  t1000 = Steam_Generator_Rth_mix > 1.0 ? Steam_Generator_Rth_mix : 1.0;
  intrm_sf_mf_418 = (t1273 >= 1.0);
  intrm_sf_mf_419 = (t1273 <= 0.0);
  Steam_Generator_Rth_mix = intrm_sf_mf_419 ? 0.0 : intrm_sf_mf_418 ? 1.0 :
    t1273;
  intrm_sf_mf_420 = (t1274 >= 1.0);
  intrm_sf_mf_421 = (t1274 <= 0.0);
  t717_idx_0 = intrm_sf_mf_421 ? 0.0 : intrm_sf_mf_420 ? 1.0 : t1274;
  if (t717_idx_0 - Steam_Generator_Rth_mix > 1.0E-6) {
    zc_int17 = t717_idx_0 - Steam_Generator_Rth_mix;
  } else if (Steam_Generator_Rth_mix - t717_idx_0 > 1.0E-6) {
    zc_int17 = Steam_Generator_Rth_mix - t717_idx_0;
  } else {
    zc_int17 = 1.0E-6;
  }

  if (t1012 / (t1009 == 0.0 ? 1.0E-16 : t1009) > 1.000001) {
    Steam_Generator_two_phase_fluid_rho_mix = pmf_sqrt(t1012 / (t1009 == 0.0 ?
      1.0E-16 : t1009));
  } else {
    Steam_Generator_two_phase_fluid_rho_mix = 1.0000004999998751;
  }

  t1035 = Steam_Generator_Rth_mix <= t717_idx_0 ? Steam_Generator_Rth_mix :
    t717_idx_0;
  t1251 = pmf_pow(t1000, 0.8) * pmf_pow(t997, 0.33) * 0.05;
  t1141 = (pmf_pow((zc_int17 + t1035) * (Steam_Generator_two_phase_fluid_rho_mix
             - 1.0) + 1.0, 1.8) - pmf_pow
           ((Steam_Generator_two_phase_fluid_rho_mix - 1.0) * t1035 + 1.0, 1.8))
    * (t1251 / 1.8 / (Steam_Generator_two_phase_fluid_rho_mix - 1.0 == 0.0 ?
                      1.0E-16 : Steam_Generator_two_phase_fluid_rho_mix - 1.0));
  t997 = t1141 / (zc_int17 == 0.0 ? 1.0E-16 : zc_int17);
  Steam_Generator_Rth_mix = t997 > 3.66 ? t997 : 3.66;
  tlu2_2d_linear_nearest_value(&kh_efOut[0ULL], &t49.mField0[0ULL],
    &t49.mField2[0ULL], &t78.mField0[0ULL], &t78.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = kh_efOut[0];
  t997 = t812[0ULL];
  t1251 = Steam_Generator_Rth_mix * t997 / 0.025 * 41.233403578366037;
  Steam_Generator_Rth_mix = t993 + 1.0 / (t1251 == 0.0 ? 1.0E-16 : t1251);
  t997 = 1.0 / (Steam_Generator_Rth_mix == 0.0 ? 1.0E-16 :
                Steam_Generator_Rth_mix) / (t985 == 0.0 ? 1.0E-16 : t985);
  Steam_Generator_Rth_mix = t1026 >= 0.001 ? t997 : 0.0;
  t1000 = Steam_Generator_Q_cond > 0.5 ? Steam_Generator_Q_cond : 0.5;
  t1251 = intrm_sf_mf_511 * 0.036815538909255395;
  Steam_Generator_Q_cond = t1265 / (t1251 == 0.0 ? 1.0E-16 : t1251);
  intrm_sf_mf_511 = Steam_Generator_Q_cond > 1000.0 ? Steam_Generator_Q_cond :
    1000.0;
  t1265 = pmf_log10(6.9 / (intrm_sf_mf_511 == 0.0 ? 1.0E-16 : intrm_sf_mf_511) +
                    6.2093190311196615E-5) * pmf_log10(6.9 / (intrm_sf_mf_511 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_511) + 6.2093190311196615E-5) * 3.24;
  t717_idx_0 = 1.0 / (t1265 == 0.0 ? 1.0E-16 : t1265);
  t1251 = (pmf_pow(t1000, 0.66666666666666663) - 1.0) * pmf_sqrt(t717_idx_0 /
    8.0) * 12.7 + 1.0;
  t1000 = (intrm_sf_mf_511 - 1000.0) * (t717_idx_0 / 8.0) * t1000 / (t1251 ==
    0.0 ? 1.0E-16 : t1251);
  intrm_sf_mf_511 = (Steam_Generator_Q_cond - 2000.0) / 2000.0;
  t717_idx_0 = intrm_sf_mf_511 * intrm_sf_mf_511 * 3.0 - intrm_sf_mf_511 *
    intrm_sf_mf_511 * intrm_sf_mf_511 * 2.0;
  if (Steam_Generator_Q_cond <= 2000.0) {
    intrm_sf_mf_511 = 3.66;
  } else if (Steam_Generator_Q_cond >= 4000.0) {
    intrm_sf_mf_511 = t1000;
  } else {
    intrm_sf_mf_511 = (1.0 - t717_idx_0) * 3.66 + t1000 * t717_idx_0;
  }

  t1265 = Steam_Generator_Q_mix * intrm_sf_mf_511 / 0.025 * 41.233403578366037;
  Steam_Generator_Q_cond = t993 + 1.0 / (t1265 == 0.0 ? 1.0E-16 : t1265);
  if (intrm_sf_mf_503) {
    t993 = t1027 / (Steam_Generator_Q_cond == 0.0 ? 1.0E-16 :
                    Steam_Generator_Q_cond) / (t1030 == 0.0 ? 1.0E-16 : t1030);
  } else {
    t993 = 1.0 / (Steam_Generator_Q_cond == 0.0 ? 1.0E-16 :
                  Steam_Generator_Q_cond) / (t985 == 0.0 ? 1.0E-16 : t985);
  }

  t1000 = t1027 >= 0.001 ? t993 : 0.0;
  t989 = 0.0012631344689832964 / (Steam_Generator_two_phase_fluid_T_out == 0.0 ?
    1.0E-16 : Steam_Generator_two_phase_fluid_T_out) + 0.00060630454511198225 /
    (t989 == 0.0 ? 1.0E-16 : t989);
  t813[0ULL] = t1274;
  tlu2_linear_linear_prelookup(&lh_efOut.mField0[0ULL], &lh_efOut.mField1[0ULL],
    &lh_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t813[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t61 = lh_efOut;
  tlu2_2d_linear_linear_value(&mh_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], &t64.mField0[0ULL], &t64.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = mh_efOut[0];
  Steam_Generator_two_phase_fluid_T_out = t812[0ULL];
  Steam_Generator_Q_cond = (X[32ULL] - Steam_Generator_two_phase_fluid_T_out) /
    (t989 == 0.0 ? 1.0E-16 : t989);
  intrm_sf_mf_503 = (t990 >= 0.0);
  t989 = intrm_sf_mf_503 ? t990 : -t990;
  t990 = intrm_sf_mf_503 ? 1.0 : -1.0;
  t1265 = (1.0 - pmf_exp(-(1.0 - pmf_exp(-t989)) * (t995 + 0.001))) * t990;
  intrm_sf_mf_511 = t1265 / (t995 + 0.001 == 0.0 ? 1.0E-16 : t995 + 0.001);
  Steam_Generator_Q_mix = t995 * t989 + 0.001;
  t1265 = -t989 * (1.0 - pmf_exp(-Steam_Generator_Q_mix));
  t989 = (1.0 - pmf_exp(t1265 / (Steam_Generator_Q_mix == 0.0 ? 1.0E-16 :
            Steam_Generator_Q_mix))) * t990;
  t990 = t1003 <= t985 * t1028 ? intrm_sf_mf_511 : t989;
  tlu2_2d_linear_linear_value(&nh_efOut[0ULL], &t72.mField0[0ULL], &t72.mField2
    [0ULL], &t64.mField0[0ULL], &t64.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = nh_efOut[0];
  t989 = t812[0ULL];
  tlu2_2d_linear_linear_value(&oh_efOut[0ULL], &t68.mField0[0ULL], &t68.mField2
    [0ULL], &t64.mField0[0ULL], &t64.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = oh_efOut[0];
  t995 = t812[0ULL];
  Steam_Generator_Q_mix = (X[30ULL] - (intrm_sf_mf_411 ? t989 : t995)) * t1031 *
    t990;
  tlu2_2d_linear_linear_value(&ph_efOut[0ULL], &t53.mField0[0ULL], &t53.mField2
    [0ULL], &t64.mField0[0ULL], &t64.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = ph_efOut[0];
  t1003 = t812[0ULL];
  intrm_sf_mf_503 = (t997 >= 0.0);
  t1031 = (1.0 - pmf_exp(-(intrm_sf_mf_503 ? t997 : -t997))) * (intrm_sf_mf_503 ?
    1.0 : -1.0);
  t997 = (X[30ULL] - (intrm_sf_mf_419 ? t995 : intrm_sf_mf_418 ? t1003 : t989)) *
    Steam_Generator_Q * t1031;
  intrm_sf_mf_503 = (t993 >= 0.0);
  Steam_Generator_Q = intrm_sf_mf_503 ? t993 : -t993;
  t993 = intrm_sf_mf_503 ? 1.0 : -1.0;
  t1265 = (1.0 - pmf_exp(-(1.0 - pmf_exp(-Steam_Generator_Q)) *
            (Condenser_thermal_liquid_mass + 0.001))) * t993;
  t717_idx_0 = t1265 / (Condenser_thermal_liquid_mass + 0.001 == 0.0 ? 1.0E-16 :
                        Condenser_thermal_liquid_mass + 0.001);
  intrm_sf_mf_511 = Condenser_thermal_liquid_mass * Steam_Generator_Q + 0.001;
  t1265 = -Steam_Generator_Q * (1.0 - pmf_exp(-intrm_sf_mf_511));
  Condenser_thermal_liquid_mass = (1.0 - pmf_exp(t1265 / (intrm_sf_mf_511 == 0.0
    ? 1.0E-16 : intrm_sf_mf_511))) * t993;
  t993 = t1030 <= t985 * t1027 ? t717_idx_0 : Condenser_thermal_liquid_mass;
  Condenser_thermal_liquid_mass = (X[30ULL] - (intrm_sf_mf_416 ? t989 : t1003)) *
    t1032 * t993;
  Steam_Generator_Q = Steam_Generator_Q_cond + ((Steam_Generator_Q_mix + t997) +
    Condenser_thermal_liquid_mass);
  t985 = Steam_Generator_Q_cond * t1028 + Steam_Generator_Q_mix;
  Steam_Generator_Q_mix = Steam_Generator_Q_cond * t1026 + t997;
  t997 = Steam_Generator_Q_cond * t1027 + Condenser_thermal_liquid_mass;
  Steam_Generator_Q_cond = t1027 >= 0.001 ? t993 : 0.0;
  tlu2_2d_linear_linear_value(&qh_efOut[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], &t77.mField0[0ULL], &t77.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t812[0] = qh_efOut[0];
  t993 = t812[0ULL];
  tlu2_2d_linear_linear_value(&rh_efOut[0ULL], &t63.mField0[0ULL], &t63.mField2
    [0ULL], &t77.mField0[0ULL], &t77.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t812[0] = rh_efOut[0];
  intrm_sf_mf_511 = t812[0ULL];
  tlu2_2d_linear_linear_value(&sh_efOut[0ULL], &t27.mField0[0ULL], &t27.mField2
    [0ULL], &t77.mField0[0ULL], &t77.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField18, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t812[0] = sh_efOut[0];
  t1030 = t812[0ULL];
  tlu2_2d_linear_linear_value(&th_efOut[0ULL], &t63.mField0[0ULL], &t63.mField2
    [0ULL], &t77.mField0[0ULL], &t77.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField18, &t98[0ULL], &t101[0ULL], &t85[0ULL]);
  t812[0] = th_efOut[0];
  t1032 = t812[0ULL];
  Steam_Generator_two_phase_fluid_rho_mix = intrm_sf_mf_419 ? t1009 :
    intrm_sf_mf_418 ? t1012 : t927;
  tlu2_2d_linear_linear_value(&uh_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], &t64.mField0[0ULL], &t64.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t812[0] = uh_efOut[0];
  t1035 = t812[0ULL];
  t1036 = intrm_sf_mf_421 ? t1009 : intrm_sf_mf_420 ? t1012 : t1035;
  Thermodynamic_Properties_Sensor_2P1_T =
    Steam_Generator_two_phase_fluid_rho_mix <= t1036 ?
    Steam_Generator_two_phase_fluid_rho_mix : t1036;
  if (t1036 / (Steam_Generator_two_phase_fluid_rho_mix == 0.0 ? 1.0E-16 :
               Steam_Generator_two_phase_fluid_rho_mix) >= 1.000001) {
    t1038 = t1036 / (Steam_Generator_two_phase_fluid_rho_mix == 0.0 ? 1.0E-16 :
                     Steam_Generator_two_phase_fluid_rho_mix);
  } else if (Steam_Generator_two_phase_fluid_rho_mix / (t1036 == 0.0 ? 1.0E-16 :
              t1036) >= 1.000001) {
    t1038 = Steam_Generator_two_phase_fluid_rho_mix / (t1036 == 0.0 ? 1.0E-16 :
      t1036);
  } else {
    t1038 = 1.000001;
  }

  t1265 = pmf_log(t1038);
  Steam_Generator_two_phase_fluid_rho_mix = t1265 / (t1038 - 1.0 == 0.0 ?
    1.0E-16 : t1038 - 1.0) / (Thermodynamic_Properties_Sensor_2P1_T == 0.0 ?
    1.0E-16 : Thermodynamic_Properties_Sensor_2P1_T);
  t1036 = intrm_sf_mf_411 ? t927 : t1009;
  Thermodynamic_Properties_Sensor_2P1_T = intrm_sf_mf_415 ? t1035 : t1009;
  t1036 = (1.0 / (t1036 == 0.0 ? 1.0E-16 : t1036) + 1.0 /
           (Thermodynamic_Properties_Sensor_2P1_T == 0.0 ? 1.0E-16 :
            Thermodynamic_Properties_Sensor_2P1_T)) / 2.0 * t1028 *
    0.25770877236478779;
  t1009 = Steam_Generator_two_phase_fluid_rho_mix * t1026 * 0.25770877236478779;
  Steam_Generator_two_phase_fluid_rho_mix = intrm_sf_mf_416 ? t927 : t1012;
  t927 = intrm_sf_mf_417 ? t1035 : t1012;
  t1012 = (1.0 / (Steam_Generator_two_phase_fluid_rho_mix == 0.0 ? 1.0E-16 :
                  Steam_Generator_two_phase_fluid_rho_mix) + 1.0 / (t927 == 0.0 ?
            1.0E-16 : t927)) / 2.0 * t1027 * 0.25770877236478779;
  t927 = (t1036 + t1009) + t1012;
  Steam_Generator_two_phase_fluid_rho_mix = X[33ULL] * t1035 * 100.0 + X[35ULL];
  t1035 = t1036 * X[41ULL] / (t927 == 0.0 ? 1.0E-16 : t927);
  t1009 = t1009 * X[41ULL] / (t927 == 0.0 ? 1.0E-16 : t927);
  t1012 = t1012 * X[41ULL] / (t927 == 0.0 ? 1.0E-16 : t927);
  t813[0ULL] = Thermodynamic_Properties_Sensor_2P1_V;
  tlu2_linear_linear_prelookup(&vh_efOut.mField0[0ULL], &vh_efOut.mField1[0ULL],
    &vh_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t813[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t72 = vh_efOut;
  tlu2_2d_linear_linear_value(&wh_efOut[0ULL], &t72.mField0[0ULL], &t72.mField2
    [0ULL], &t836[0ULL], &t838[0ULL], ((_NeDynamicSystem*)(LC))->mField0, &t113
    [0ULL], &t84[0ULL], &t85[0ULL]);
  t813[0] = wh_efOut[0];
  t1265 = -t813[0ULL];
  Thermodynamic_Properties_Sensor_2P1_V = -t1265;
  tlu2_2d_linear_linear_value(&xh_efOut[0ULL], &t72.mField0[0ULL], &t72.mField2
    [0ULL], &t836[0ULL], &t838[0ULL], ((_NeDynamicSystem*)(LC))->mField30,
    &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t813[0] = xh_efOut[0];
  t1265 = -t813[0ULL];
  t1036 = -t1265;
  tlu2_2d_linear_linear_value(&yh_efOut[0ULL], &t72.mField0[0ULL], &t72.mField2
    [0ULL], &t836[0ULL], &t838[0ULL], ((_NeDynamicSystem*)(LC))->mField14,
    &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t813[0] = yh_efOut[0];
  t1265 = -t813[0ULL];
  Thermodynamic_Properties_Sensor_2P1_T = -t1265;
  t1265 = -t818[0ULL];
  t1038 = -t1265;
  t927 = X[0ULL] * -t1265 * 100.0 + X[97ULL];
  t1265 = -t821[0ULL];
  t1040 = -t1265;
  t833[0ULL] = t81.mField0[0ULL];
  t833[1ULL] = t81.mField0[1ULL];
  t98[0ULL] = t81.mField2[0ULL];
  tlu2_2d_linear_linear_value(&ai_efOut[0ULL], &t833[0ULL], &t98[0ULL], &t836
    [0ULL], &t838[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t113[0ULL], &t84
    [0ULL], &t85[0ULL]);
  t818[0] = ai_efOut[0];
  t1265 = -t818[0ULL];
  t1041 = -t1265;
  t821[0ULL] = t911;
  tlu2_linear_linear_prelookup(&bi_efOut.mField0[0ULL], &bi_efOut.mField1[0ULL],
    &bi_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t821[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t61 = bi_efOut;
  tlu2_2d_linear_linear_value(&ci_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], &t75.mField0[0ULL], &t75.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t818[0] = ci_efOut[0];
  t1265 = -t818[0ULL];
  t911 = -t1265;
  t1042 = X[49ULL] * -t1265 * 100.0 + X[50ULL];
  tlu2_2d_linear_linear_value(&di_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], &t75.mField0[0ULL], &t75.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t818[0] = di_efOut[0];
  t1265 = -t818[0ULL];
  t1043 = -t1265;
  tlu2_2d_linear_linear_value(&ei_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], &t75.mField0[0ULL], &t75.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t818[0] = ei_efOut[0];
  t1265 = -t818[0ULL];
  t1044 = -t1265;
  t821[0ULL] = Thermodynamic_Properties_Sensor_2P4_V;
  tlu2_linear_linear_prelookup(&fi_efOut.mField0[0ULL], &fi_efOut.mField1[0ULL],
    &fi_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t821[0ULL],
    &t113[0ULL], &t85[0ULL]);
  t61 = fi_efOut;
  tlu2_2d_linear_linear_value(&gi_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], &t71.mField0[0ULL], &t71.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t821[0] = gi_efOut[0];
  t1265 = -t821[0ULL];
  Thermodynamic_Properties_Sensor_2P4_V = -t1265;
  t1045 = X[53ULL] * -t1265 * 100.0 + X[54ULL];
  tlu2_2d_linear_linear_value(&hi_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], &t71.mField0[0ULL], &t71.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t821[0] = hi_efOut[0];
  t1265 = -t821[0ULL];
  t1046 = -t1265;
  tlu2_2d_linear_linear_value(&ii_efOut[0ULL], &t61.mField0[0ULL], &t61.mField2
    [0ULL], &t71.mField0[0ULL], &t71.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t113[0ULL], &t84[0ULL], &t85[0ULL]);
  t821[0] = ii_efOut[0];
  t1265 = -t821[0ULL];
  t1047 = -t1265;
  if (intrm_sf_mf_105 <= 0.0) {
    t1048 = 0.0;
  } else {
    t1048 = intrm_sf_mf_105 >= 1.0 ? 1.0 : intrm_sf_mf_105;
  }

  if (t865 <= 0.0) {
    intrm_sf_mf_105 = 0.0;
  } else {
    intrm_sf_mf_105 = t865 >= 1.0 ? 1.0 : t865;
  }

  t865 = X[122ULL] >= 0.0 ? X[122ULL] : -X[122ULL];
  t1251 = t917 * 0.0099491780865731388;
  t1049 = t865 * 0.038099999999999995 / (t1251 == 0.0 ? 1.0E-16 : t1251);
  t1050 = t1049 >= 1.0 ? t1049 : 1.0;
  t1265 = pmf_log10(6.9 / (t1050 == 0.0 ? 1.0E-16 : t1050) +
                    3.8898303526856324E-5) * pmf_log10(6.9 / (t1050 == 0.0 ?
    1.0E-16 : t1050) + 3.8898303526856324E-5) * 3.24;
  t717_idx_0 = t925 * 2.8884652804500862E-5;
  t1051 = X[122ULL] * t917 * 128.0 / (t717_idx_0 == 0.0 ? 1.0E-16 : t717_idx_0);
  t1141 = t925 * 7.5427442183940515E-6;
  t865 = X[122ULL] * t865 * (1.0 / (t1265 == 0.0 ? 1.0E-16 : t1265)) * 2.0 /
    (t1141 == 0.0 ? 1.0E-16 : t1141);
  t1050 = (t1049 - 2000.0) / 2000.0;
  t1052 = t1050 * t1050 * 3.0 - t1050 * t1050 * t1050 * 2.0;
  if (t1049 <= 2000.0) {
    t1050 = t1051 * 1.0E-5;
  } else if (t1049 >= 4000.0) {
    t1050 = t865 * 1.0E-5;
  } else {
    t1050 = ((1.0 - t1052) * t1051 + t865 * t1052) * 1.0E-5;
  }

  t865 = X[123ULL] >= 0.0 ? X[123ULL] : -X[123ULL];
  t1049 = t865 * 0.038099999999999995 / (t1251 == 0.0 ? 1.0E-16 : t1251);
  t1051 = t1049 >= 1.0 ? t1049 : 1.0;
  t1265 = pmf_log10(6.9 / (t1051 == 0.0 ? 1.0E-16 : t1051) +
                    3.8898303526856324E-5) * pmf_log10(6.9 / (t1051 == 0.0 ?
    1.0E-16 : t1051) + 3.8898303526856324E-5) * 3.24;
  t917 = X[123ULL] * t917 * 128.0 / (t717_idx_0 == 0.0 ? 1.0E-16 : t717_idx_0);
  t865 = X[123ULL] * t865 * (1.0 / (t1265 == 0.0 ? 1.0E-16 : t1265)) * 2.0 /
    (t1141 == 0.0 ? 1.0E-16 : t1141);
  t1051 = (t1049 - 2000.0) / 2000.0;
  t1052 = t1051 * t1051 * 3.0 - t1051 * t1051 * t1051 * 2.0;
  if (t1049 <= 2000.0) {
    t1051 = t917 * 1.0E-5;
  } else if (t1049 >= 4000.0) {
    t1051 = t865 * 1.0E-5;
  } else {
    t1051 = ((1.0 - t1052) * t917 + t865 * t1052) * 1.0E-5;
  }

  t1251 = intrm_sf_mf_264 * 0.0099491780865731388;
  t865 = 0.13334999999999997 / (t1251 == 0.0 ? 1.0E-16 : t1251);
  t917 = t865 >= 1.0 ? t865 : 1.0;
  t1265 = pmf_log10(6.9 / (t917 == 0.0 ? 1.0E-16 : t917) + 3.8898303526856324E-5)
    * pmf_log10(6.9 / (t917 == 0.0 ? 1.0E-16 : t917) + 3.8898303526856324E-5) *
    3.24;
  t717_idx_0 = Pipe_TL1_rho_I * 2.8884652804500862E-5;
  t1049 = intrm_sf_mf_264 * 784.0 / (t717_idx_0 == 0.0 ? 1.0E-16 : t717_idx_0);
  t1141 = Pipe_TL1_rho_I * 7.5427442183940515E-6;
  intrm_sf_mf_313 = 3.5 * (1.0 / (t1265 == 0.0 ? 1.0E-16 : t1265)) * 12.25 /
    (t1141 == 0.0 ? 1.0E-16 : t1141);
  t917 = (t865 - 2000.0) / 2000.0;
  t1052 = t917 * t917 * 3.0 - t917 * t917 * t917 * 2.0;
  if (t865 <= 2000.0) {
    t917 = t1049 * 1.0E-5;
  } else if (t865 >= 4000.0) {
    t917 = intrm_sf_mf_313 * 1.0E-5;
  } else {
    t917 = ((1.0 - t1052) * t1049 + intrm_sf_mf_313 * t1052) * 1.0E-5;
  }

  if (-X[122ULL] >= 0.0) {
    intrm_sf_mf_313 = -X[122ULL];
  } else {
    intrm_sf_mf_313 = X[122ULL];
  }

  t865 = intrm_sf_mf_313 * 0.038099999999999995 / (t1251 == 0.0 ? 1.0E-16 :
    t1251);
  t1049 = t865 >= 1.0 ? t865 : 1.0;
  t1265 = pmf_log10(6.9 / (t1049 == 0.0 ? 1.0E-16 : t1049) +
                    3.8898303526856324E-5) * pmf_log10(6.9 / (t1049 == 0.0 ?
    1.0E-16 : t1049) + 3.8898303526856324E-5) * 3.24;
  intrm_sf_mf_264 = X[122ULL] * intrm_sf_mf_264 * -224.0 / (t717_idx_0 == 0.0 ?
    1.0E-16 : t717_idx_0);
  intrm_sf_mf_313 = X[122ULL] * intrm_sf_mf_313 * (1.0 / (t1265 == 0.0 ? 1.0E-16
    : t1265)) * -3.5 / (t1141 == 0.0 ? 1.0E-16 : t1141);
  t1049 = (t865 - 2000.0) / 2000.0;
  t1052 = t1049 * t1049 * 3.0 - t1049 * t1049 * t1049 * 2.0;
  if (t865 <= 2000.0) {
    t1049 = intrm_sf_mf_264 * 1.0E-5;
  } else if (t865 >= 4000.0) {
    t1049 = intrm_sf_mf_313 * 1.0E-5;
  } else {
    t1049 = ((1.0 - t1052) * intrm_sf_mf_264 + intrm_sf_mf_313 * t1052) * 1.0E-5;
  }

  if (-X[123ULL] >= 0.0) {
    intrm_sf_mf_313 = -X[123ULL];
  } else {
    intrm_sf_mf_313 = X[123ULL];
  }

  t1251 = intrm_sf_mf_329 * 0.0099491780865731388;
  t865 = intrm_sf_mf_313 * 0.038099999999999995 / (t1251 == 0.0 ? 1.0E-16 :
    t1251);
  intrm_sf_mf_264 = t865 >= 1.0 ? t865 : 1.0;
  t1265 = pmf_log10(6.9 / (intrm_sf_mf_264 == 0.0 ? 1.0E-16 : intrm_sf_mf_264) +
                    3.8898303526856324E-5) * pmf_log10(6.9 / (intrm_sf_mf_264 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_264) + 3.8898303526856324E-5) * 3.24;
  t717_idx_0 = t935 * 2.8884652804500862E-5;
  t1052 = X[123ULL] * intrm_sf_mf_329 * -224.0 / (t717_idx_0 == 0.0 ? 1.0E-16 :
    t717_idx_0);
  t1141 = t935 * 7.5427442183940515E-6;
  intrm_sf_mf_313 = X[123ULL] * intrm_sf_mf_313 * (1.0 / (t1265 == 0.0 ? 1.0E-16
    : t1265)) * -3.5 / (t1141 == 0.0 ? 1.0E-16 : t1141);
  intrm_sf_mf_264 = (t865 - 2000.0) / 2000.0;
  Condenser_thermal_liquid_mass = intrm_sf_mf_264 * intrm_sf_mf_264 * 3.0 -
    intrm_sf_mf_264 * intrm_sf_mf_264 * intrm_sf_mf_264 * 2.0;
  if (t865 <= 2000.0) {
    intrm_sf_mf_264 = t1052 * 1.0E-5;
  } else if (t865 >= 4000.0) {
    intrm_sf_mf_264 = intrm_sf_mf_313 * 1.0E-5;
  } else {
    intrm_sf_mf_264 = ((1.0 - Condenser_thermal_liquid_mass) * t1052 +
                       intrm_sf_mf_313 * Condenser_thermal_liquid_mass) * 1.0E-5;
  }

  intrm_sf_mf_313 = t933 >= 0.0 ? t933 : -t933;
  t865 = intrm_sf_mf_313 * 0.038099999999999995 / (t1251 == 0.0 ? 1.0E-16 :
    t1251);
  t1052 = t865 >= 1.0 ? t865 : 1.0;
  t1265 = pmf_log10(6.9 / (t1052 == 0.0 ? 1.0E-16 : t1052) +
                    3.8898303526856324E-5) * pmf_log10(6.9 / (t1052 == 0.0 ?
    1.0E-16 : t1052) + 3.8898303526856324E-5) * 3.24;
  intrm_sf_mf_329 = t933 * intrm_sf_mf_329 * 224.0 / (t717_idx_0 == 0.0 ?
    1.0E-16 : t717_idx_0);
  intrm_sf_mf_313 = t933 * intrm_sf_mf_313 * (1.0 / (t1265 == 0.0 ? 1.0E-16 :
    t1265)) * 3.5 / (t1141 == 0.0 ? 1.0E-16 : t1141);
  t1052 = (t865 - 2000.0) / 2000.0;
  Condenser_thermal_liquid_mass = t1052 * t1052 * 3.0 - t1052 * t1052 * t1052 *
    2.0;
  if (t865 <= 2000.0) {
    t1052 = intrm_sf_mf_329 * 1.0E-5;
  } else if (t865 >= 4000.0) {
    t1052 = intrm_sf_mf_313 * 1.0E-5;
  } else {
    t1052 = ((1.0 - Condenser_thermal_liquid_mass) * intrm_sf_mf_329 +
             intrm_sf_mf_313 * Condenser_thermal_liquid_mass) * 1.0E-5;
  }

  if (intrm_sf_mf_486 <= 0.0) {
    intrm_sf_mf_313 = 0.0;
  } else {
    intrm_sf_mf_313 = intrm_sf_mf_486 >= 1.0 ? 1.0 : intrm_sf_mf_486;
  }

  t865 = ((((X[0ULL] - 1.01325) - 60.0) * 0.999999 + 1.0E-6) - 1.0E-6) /
    0.999999;
  Condenser_thermal_liquid_mass = (pmf_sqrt(t865 * t865 + 6.25E-6) + 1.0) -
    pmf_sqrt((t865 - 1.0) * (t865 - 1.0) + 6.25E-6);
  intrm_sf_mf_329 = Condenser_thermal_liquid_mass / 2.0 * 0.999999 + 1.0E-6;
  if (t1273 <= 0.0) {
    t865 = 0.0;
  } else {
    t865 = t1273 >= 1.0 ? 1.0 : t1273;
  }

  if (t1274 <= 0.0) {
    intrm_sf_mf_486 = 0.0;
  } else {
    intrm_sf_mf_486 = t1274 >= 1.0 ? 1.0 : t1274;
  }

  zc_int17 = ((((X[0ULL] - X[43ULL]) - 0.1) * 0.998 / 0.19999999999999998 +
               0.002) - 0.002) / 0.998;
  t1273 = (pmf_sqrt(zc_int17 * zc_int17 + 6.25E-6) + 1.0) - pmf_sqrt((zc_int17 -
    1.0) * (zc_int17 - 1.0) + 6.25E-6);
  t717_idx_0 = t1273 / 2.0 * 0.998 + 0.002;
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (M[0ULL] != 0) {
        t1274 = X[58ULL] - t876 * t859 * 1000.0;
        Condenser_thermal_liquid_mass = pmf_log((t877 * t859 * 1000.0 + X[58ULL])
          / (t1274 == 0.0 ? 1.0E-16 : t1274));
        zc_int17 = Condenser_thermal_liquid_mass / (t841 == 0.0 ? 1.0E-16 : t841);
      } else {
        zc_int17 = 1.0;
      }
    } else {
      zc_int17 = 0.0;
    }
  } else {
    zc_int17 = intrm_sf_mf_57 ? intrm_sf_mf_54 ? 0.0 : (real_T)!intrm_sf_mf_53 :
      (real_T)intrm_sf_mf_51;
  }

  if (intrm_sf_mf_58) {
    t841 = intrm_sf_mf_51 ? 0.0 : (real_T)!intrm_sf_mf_50;
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (M[1ULL] != 0) {
        t1274 = X[58ULL] - t1284 * t891 * 1000.0;
        Condenser_thermal_liquid_mass = pmf_log((t1288 * t891 * 1000.0 + X[58ULL])
          / (t1274 == 0.0 ? 1.0E-16 : t1274));
        t841 = Condenser_thermal_liquid_mass / (zc_int11 == 0.0 ? 1.0E-16 :
          zc_int11);
      } else {
        t841 = 1.0;
      }
    } else {
      t841 = 0.0;
    }
  } else {
    t841 = intrm_sf_mf_51 ? 0.0 : (real_T)!intrm_sf_mf_55;
  }

  zc_int11 = (1.0 - zc_int17) - t841;
  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (M[0ULL] != 0) {
        t876 = (t875 - 1.0) * t859 * 1000.0 + X[58ULL];
      } else {
        t876 = (t875 * t882 + X[58ULL]) - t859 * 1000.0;
      }
    } else if (intrm_sf_mf_50) {
      t876 = X[58ULL];
    } else {
      t876 = (t873 * t1286 + X[58ULL]) - t891 * 1000.0;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (M[1ULL] != 0) {
        t876 = (t873 - 1.0) * t891 * 1000.0 + X[58ULL];
      } else {
        t876 = (t873 * t1286 + X[58ULL]) - t891 * 1000.0;
      }
    } else if (intrm_sf_mf_53) {
      t876 = X[58ULL];
    } else {
      t876 = (t875 * t882 + X[58ULL]) - t859 * 1000.0;
    }
  } else if (intrm_sf_mf_51) {
    t876 = (t875 * t882 + X[58ULL]) - t859 * 1000.0;
  } else if (intrm_sf_mf_55) {
    t876 = X[58ULL];
  } else {
    t876 = (t873 * t1286 + X[58ULL]) - t891 * 1000.0;
  }

  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_51) {
      if (M[0ULL] != 0) {
        t859 = t881;
      } else {
        t859 = zc_int22 * t882 * 0.001 + t879;
      }
    } else if (intrm_sf_mf_50) {
      t859 = t879;
    } else {
      t859 = t1291 * t1286 * 0.001 + t879;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_54) {
      if (M[1ULL] != 0) {
        t859 = t886;
      } else {
        t859 = t1291 * t1286 * 0.001 + t879;
      }
    } else if (intrm_sf_mf_53) {
      t859 = t879;
    } else {
      t859 = zc_int22 * t882 * 0.001 + t879;
    }
  } else if (intrm_sf_mf_51) {
    t859 = zc_int22 * t882 * 0.001 + t879;
  } else if (intrm_sf_mf_55) {
    t859 = t879;
  } else {
    t859 = t1291 * t1286 * 0.001 + t879;
  }

  if (intrm_sf_mf_58) {
    if (intrm_sf_mf_68) {
      if (intrm_sf_mf_67) {
        t1284 = t883 * (t886 - t859) * 1000.0 + t876;
        t1288 = -pmf_log(t876 / (t1284 == 0.0 ? 1.0E-16 : t1284));
        t859 = t1288 / (t884 == 0.0 ? 1.0E-16 : t884);
      } else {
        t859 = zc_int11;
      }
    } else {
      t859 = 0.0;
    }
  } else if (intrm_sf_mf_57) {
    if (intrm_sf_mf_70) {
      if (intrm_sf_mf_69) {
        t1286 = t883 * (t881 - t859) * 1000.0 + t876;
        t1273 = -pmf_log(t876 / (t1286 == 0.0 ? 1.0E-16 : t1286));
        t859 = t1273 / (t884 == 0.0 ? 1.0E-16 : t884);
      } else {
        t859 = zc_int11;
      }
    } else {
      t859 = 0.0;
    }
  } else {
    t859 = zc_int11;
  }

  zc_int22 = zc_int11 - t859;
  t873 = zc_int17 + (intrm_sf_mf_58 ? 0.0 : intrm_sf_mf_57 ? zc_int22 : 0.0);
  zc_int17 = ((real_T)(M[56ULL] != 0) * 2.0 - 1.0) * t972 / 0.5;
  if (t973 <= 0.0) {
    zc_int17 = 0.0;
  } else {
    zc_int17 = t973 >= 1.0 ? 1.0 : 0.8 - (zc_int17 - 0.8) * (zc_int17 - 0.8) *
      0.2;
  }

  t875 = t967 > 0.01 ? Simscape_Component_ideal_enthalpy_drop * zc_int17 : 0.0;
  zc_int11 = intrm_sf_mf_58 ? zc_int22 : 0.0;
  if (intrm_sf_mf_440) {
    if (intrm_sf_mf_433) {
      if (M[73ULL] != 0) {
        t1286 = -pmf_log((X[163ULL] - intrm_sf_mf_408 * 1000.0) / (X[163ULL] ==
          0.0 ? 1.0E-16 : X[163ULL]));
        zc_int22 = t1286 / (t1007 == 0.0 ? 1.0E-16 : t1007);
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
    t876 = intrm_sf_mf_433 ? 0.0 : (real_T)!intrm_sf_mf_432;
  } else if (intrm_sf_mf_439) {
    if (intrm_sf_mf_436) {
      if (M[84ULL] != 0) {
        t1286 = -pmf_log((X[163ULL] - t1005 * 1000.0) / (X[163ULL] == 0.0 ?
          1.0E-16 : X[163ULL]));
        t876 = t1286 / (intrm_sf_mf_426 == 0.0 ? 1.0E-16 : intrm_sf_mf_426);
      } else {
        t876 = 1.0;
      }
    } else {
      t876 = 0.0;
    }
  } else {
    t876 = intrm_sf_mf_433 ? 0.0 : (real_T)!intrm_sf_mf_437;
  }

  t877 = (1.0 - zc_int22) - t876;
  if (intrm_sf_mf_440) {
    if (intrm_sf_mf_433) {
      if (M[73ULL] != 0) {
        t882 = t1010;
      } else {
        t882 = t1001 * t1011 * 0.001 + t1008;
      }
    } else if (intrm_sf_mf_432) {
      t882 = t1008;
    } else {
      t882 = t1018 * t1021 * 0.001 + t1008;
    }
  } else if (intrm_sf_mf_439) {
    if (intrm_sf_mf_436) {
      if (M[84ULL] != 0) {
        t882 = t1013;
      } else {
        t882 = t1018 * t1021 * 0.001 + t1008;
      }
    } else if (intrm_sf_mf_435) {
      t882 = t1008;
    } else {
      t882 = t1001 * t1011 * 0.001 + t1008;
    }
  } else if (intrm_sf_mf_433) {
    t882 = t1001 * t1011 * 0.001 + t1008;
  } else if (intrm_sf_mf_437) {
    t882 = t1008;
  } else {
    t882 = t1018 * t1021 * 0.001 + t1008;
  }

  if (intrm_sf_mf_440) {
    if (intrm_sf_mf_450) {
      if (intrm_sf_mf_431) {
        t882 = (t1013 - t882) / (t1025 == 0.0 ? 1.0E-16 : t1025) /
          (intrm_sf_mf_424 == 0.0 ? 1.0E-16 : intrm_sf_mf_424) * 1000.0;
      } else {
        t882 = t877;
      }
    } else {
      t882 = 0.0;
    }
  } else if (intrm_sf_mf_439) {
    if (intrm_sf_mf_452) {
      if (intrm_sf_mf_451) {
        t882 = (t1010 - t882) / (t1025 == 0.0 ? 1.0E-16 : t1025) /
          (intrm_sf_mf_424 == 0.0 ? 1.0E-16 : intrm_sf_mf_424) * 1000.0;
      } else {
        t882 = t877;
      }
    } else {
      t882 = 0.0;
    }
  } else {
    t882 = t877;
  }

  t1291 = t877 - t882;
  t891 = zc_int22 + (intrm_sf_mf_440 ? 0.0 : intrm_sf_mf_439 ? t1291 : 0.0);
  t877 = t876 + (intrm_sf_mf_440 ? t1291 : 0.0);
  t1291 = -(((real_T)(M[63ULL] != 0) * 2.0 - 1.0) * X[56ULL] * t875);
  t694[0ULL] = X[0ULL] * 0.1;
  t694[1ULL] = X[42ULL];
  t694[2ULL] = X[43ULL] * 0.1;
  t694[3ULL] = X[44ULL];
  t694[4ULL] = X[45ULL];
  t694[5ULL] = -X[45ULL];
  t694[6ULL] = X[0ULL] * 0.1;
  t694[7ULL] = X[42ULL];
  t694[8ULL] = X[45ULL];
  t694[9ULL] = X[46ULL];
  t694[10ULL] = X[47ULL];
  t694[11ULL] = X[43ULL] * 0.1;
  t694[12ULL] = X[44ULL];
  t694[13ULL] = -X[45ULL];
  t694[14ULL] = X[46ULL];
  t694[15ULL] = -X[47ULL];
  t694[16ULL] = X[47ULL];
  t694[17ULL] = -X[47ULL];
  t694[18ULL] = t717_idx_0;
  t694[19ULL] = X[1ULL];
  t694[20ULL] = X[2ULL];
  t694[21ULL] = X[48ULL];
  t694[22ULL] = X[49ULL] * 0.1;
  t694[23ULL] = X[50ULL];
  t694[24ULL] = X[51ULL];
  t694[25ULL] = X[52ULL] * 0.1;
  t694[26ULL] = X[53ULL] * 0.1;
  t694[27ULL] = X[54ULL];
  t694[28ULL] = X[48ULL];
  t694[29ULL] = X[51ULL];
  t694[30ULL] = X[52ULL] * 0.1;
  t694[31ULL] = X[3ULL];
  t694[32ULL] = X[4ULL] * 0.1;
  t694[33ULL] = X[5ULL];
  t694[34ULL] = X[55ULL];
  t694[35ULL] = Condenser_thermal_liquid_rho_in;
  t694[36ULL] = t888;
  t694[37ULL] = X[3ULL];
  t694[38ULL] = X[60ULL];
  t694[39ULL] = X[61ULL];
  t694[40ULL] = X[62ULL];
  t694[41ULL] = X[48ULL];
  t694[42ULL] = X[63ULL];
  t694[43ULL] = X[64ULL];
  t694[44ULL] = X[55ULL];
  t694[45ULL] = X[65ULL];
  t694[46ULL] = X[48ULL];
  t694[47ULL] = X[60ULL];
  t694[48ULL] = X[66ULL];
  t694[49ULL] = X[55ULL];
  t694[50ULL] = X[67ULL];
  t694[51ULL] = X[51ULL];
  t694[52ULL] = X[52ULL] * 0.1;
  t694[53ULL] = X[68ULL];
  t694[54ULL] = X[69ULL];
  t694[55ULL] = X[70ULL];
  t694[56ULL] = X[51ULL];
  t694[57ULL] = X[52ULL] * 0.1;
  t694[58ULL] = X[61ULL];
  t694[59ULL] = X[71ULL];
  t694[60ULL] = X[72ULL];
  t694[61ULL] = (Condenser_thermal_liquid_rho_in + t888) / 2.0 *
    0.092765046668672663;
  t694[62ULL] = t902;
  t694[63ULL] = X[4ULL] / (Condenser_thermal_liquid_rho_in == 0.0 ? 1.0E-16 :
    Condenser_thermal_liquid_rho_in) * 100.0 + t902;
  t694[64ULL] = t905;
  t694[65ULL] = X[4ULL] / (t888 == 0.0 ? 1.0E-16 : t888) * 100.0 + t905;
  t694[66ULL] = X[49ULL] * 0.1;
  t694[67ULL] = X[50ULL];
  t694[68ULL] = X[53ULL] * 0.1;
  t694[69ULL] = X[54ULL];
  t694[70ULL] = X[9ULL] * 0.001;
  t694[71ULL] = X[6ULL] * 0.1;
  t694[72ULL] = X[7ULL];
  t694[73ULL] = t856;
  t694[74ULL] = t866;
  t694[75ULL] = X[8ULL];
  t694[76ULL] = X[10ULL];
  t694[77ULL] = X[59ULL] * 0.001;
  t694[78ULL] = t871;
  t694[79ULL] = X[11ULL] * 0.001;
  t694[80ULL] = X[13ULL] * 0.001;
  t694[81ULL] = X[12ULL] * 0.001;
  t694[82ULL] = X[58ULL];
  t694[83ULL] = t879;
  t694[84ULL] = t881;
  t694[85ULL] = t886;
  t694[86ULL] = t900;
  t694[87ULL] = t899;
  t694[88ULL] = t897;
  t694[89ULL] = X[56ULL];
  t694[90ULL] = X[57ULL];
  t694[91ULL] = X[73ULL];
  t694[92ULL] = X[74ULL];
  t694[93ULL] = X[75ULL];
  t694[94ULL] = Condenser_two_phase_fluid_T_out;
  t694[95ULL] = X[49ULL] * 0.1;
  t694[96ULL] = X[50ULL];
  t694[97ULL] = X[73ULL];
  t694[98ULL] = X[76ULL];
  t694[99ULL] = X[56ULL];
  t694[100ULL] = X[53ULL] * 0.1;
  t694[101ULL] = X[54ULL];
  t694[102ULL] = X[74ULL];
  t694[103ULL] = X[77ULL];
  t694[104ULL] = X[57ULL];
  t694[105ULL] = X[14ULL];
  t694[106ULL] = Condenser_two_phase_fluid_h_out;
  t694[107ULL] = t908;
  t694[108ULL] = t880;
  t694[109ULL] = t885;
  t694[110ULL] = t1048;
  t694[111ULL] = intrm_sf_mf_105;
  t694[112ULL] = intrm_sf_mf_59;
  t694[113ULL] = t895;
  t694[114ULL] = X[9ULL] * 0.001;
  t694[115ULL] = t864;
  t694[116ULL] = t867;
  t694[117ULL] = t887;
  t694[118ULL] = t869;
  t694[119ULL] = t861;
  t694[120ULL] = t889;
  t694[121ULL] = t858;
  t694[122ULL] = X[11ULL] * 0.001;
  t694[123ULL] = X[13ULL] * 0.001;
  t694[124ULL] = X[12ULL] * 0.001;
  t694[125ULL] = t873;
  t694[126ULL] = t859;
  t694[127ULL] = t841 + zc_int11;
  t694[128ULL] = Condenser_Q_cond;
  t694[129ULL] = Condenser_effectiveness_mix;
  t694[130ULL] = t870;
  t694[131ULL] = X[10ULL];
  t694[132ULL] = X[78ULL];
  t694[133ULL] = Controlled_Heat_Flow_Rate_Source_Q * 1000.0;
  t694[134ULL] = Controlled_Heat_Flow_Rate_Source_Q * 1000.0;
  t694[135ULL] = -X[78ULL];
  t694[136ULL] = X[53ULL] * 0.1;
  t694[137ULL] = X[54ULL];
  t694[138ULL] = X[79ULL] * 0.1;
  t694[139ULL] = X[80ULL];
  t694[140ULL] = -X[74ULL];
  t694[141ULL] = X[81ULL];
  t694[142ULL] = U_idx_1;
  t694[143ULL] = X[53ULL] * 0.1;
  t694[144ULL] = X[54ULL];
  t694[145ULL] = -X[74ULL];
  t694[146ULL] = X[82ULL];
  t694[147ULL] = -X[57ULL];
  t694[148ULL] = X[79ULL] * 0.1;
  t694[149ULL] = X[80ULL];
  t694[150ULL] = X[81ULL];
  t694[151ULL] = X[82ULL];
  t694[152ULL] = X[57ULL];
  t694[153ULL] = t923 * 0.1;
  t694[154ULL] = U_idx_1 * 9.5492965855137211;
  t694[155ULL] = X[87ULL];
  t694[156ULL] = t924;
  t694[157ULL] = X[83ULL];
  t694[158ULL] = X[84ULL];
  t694[159ULL] = X[85ULL];
  t694[160ULL] = X[86ULL];
  t694[161ULL] = -X[57ULL];
  t694[162ULL] = t920 * 0.0001;
  t694[163ULL] = X[57ULL];
  t694[164ULL] = Fixed_Displacement_Pump_2P_mdot_leakage * 100000.0;
  t694[165ULL] = U_idx_1 * X[87ULL] * 0.001;
  t694[166ULL] = X[78ULL];
  t694[167ULL] = X[78ULL];
  t694[168ULL] = Controlled_Heat_Flow_Rate_Source_Q * 1000.0;
  t694[169ULL] = Controlled_Heat_Flow_Rate_Source_Q * 1000.0;
  t694[170ULL] = Controlled_Heat_Flow_Rate_Source_Q * 0.001;
  t694[171ULL] = U_idx_1;
  t694[172ULL] = U_idx_1;
  t694[173ULL] = -X[87ULL];
  t694[174ULL] = U_idx_1;
  t694[175ULL] = X[88ULL];
  t694[176ULL] = X[89ULL];
  t694[177ULL] = X[90ULL] * 0.1;
  t694[178ULL] = X[91ULL];
  t694[179ULL] = -X[91ULL];
  t694[180ULL] = X[88ULL];
  t694[181ULL] = X[91ULL];
  t694[182ULL] = X[92ULL];
  t694[183ULL] = X[93ULL];
  t694[184ULL] = X[94ULL];
  t694[185ULL] = X[89ULL];
  t694[186ULL] = X[90ULL] * 0.1;
  t694[187ULL] = -X[91ULL];
  t694[188ULL] = X[95ULL];
  t694[189ULL] = -X[93ULL];
  t694[190ULL] = X[94ULL];
  t694[191ULL] = X[93ULL];
  t694[192ULL] = -X[93ULL];
  t694[193ULL] = X[96ULL];
  t694[194ULL] = X[79ULL] * 0.1;
  t694[195ULL] = X[80ULL];
  t694[196ULL] = X[79ULL] * 0.1;
  t694[197ULL] = X[80ULL];
  t694[198ULL] = -X[57ULL];
  t694[199ULL] = -X[81ULL];
  t694[200ULL] = -X[81ULL];
  t694[201ULL] = -X[57ULL];
  t694[202ULL] = X[0ULL] * 0.1;
  t694[203ULL] = X[97ULL];
  t694[204ULL] = X[0ULL] * 0.1;
  t694[205ULL] = X[97ULL];
  t694[206ULL] = X[56ULL];
  t694[207ULL] = X[98ULL];
  t694[208ULL] = X[98ULL];
  t694[209ULL] = X[56ULL];
  t694[210ULL] = X[56ULL];
  t694[211ULL] = X[49ULL] * 0.1;
  t694[212ULL] = X[50ULL];
  t694[213ULL] = X[49ULL] * 0.1;
  t694[214ULL] = X[50ULL];
  t694[215ULL] = X[56ULL];
  t694[216ULL] = X[73ULL];
  t694[217ULL] = X[73ULL];
  t694[218ULL] = X[56ULL];
  t694[219ULL] = X[56ULL];
  t694[220ULL] = X[0ULL] * 0.1;
  t694[221ULL] = X[99ULL];
  t694[222ULL] = X[0ULL] * 0.1;
  t694[223ULL] = X[99ULL];
  t694[224ULL] = X[100ULL];
  t694[225ULL] = X[101ULL];
  t694[226ULL] = X[101ULL];
  t694[227ULL] = X[100ULL];
  t694[228ULL] = X[100ULL];
  t694[229ULL] = -X[57ULL];
  t694[230ULL] = X[102ULL];
  t694[231ULL] = X[103ULL] * 0.1;
  t694[232ULL] = X[104ULL];
  t694[233ULL] = X[105ULL] * 0.1;
  t694[234ULL] = X[106ULL];
  t694[235ULL] = X[107ULL];
  t694[236ULL] = X[102ULL];
  t694[237ULL] = X[103ULL] * 0.1;
  t694[238ULL] = X[106ULL];
  t694[239ULL] = X[108ULL];
  t694[240ULL] = X[109ULL];
  t694[241ULL] = X[104ULL];
  t694[242ULL] = X[105ULL] * 0.1;
  t694[243ULL] = X[107ULL];
  t694[244ULL] = X[110ULL];
  t694[245ULL] = X[109ULL];
  t694[246ULL] = t919;
  t694[247ULL] = X[111ULL];
  t694[248ULL] = X[51ULL];
  t694[249ULL] = X[52ULL] * 0.1;
  t694[250ULL] = X[112ULL];
  t694[251ULL] = -X[61ULL];
  t694[252ULL] = X[111ULL];
  t694[253ULL] = X[112ULL];
  t694[254ULL] = X[113ULL];
  t694[255ULL] = X[114ULL];
  t694[256ULL] = X[51ULL];
  t694[257ULL] = X[52ULL] * 0.1;
  t694[258ULL] = -X[61ULL];
  t694[259ULL] = X[115ULL];
  t694[260ULL] = X[114ULL];
  t694[261ULL] = Mass_Flow_Rate_Source_TL1_power;
  t694[262ULL] = X[116ULL];
  t694[263ULL] = X[117ULL] * 0.1;
  t694[264ULL] = X[118ULL];
  t694[265ULL] = X[119ULL] * 0.1;
  t694[266ULL] = X[78ULL];
  t694[267ULL] = X[120ULL];
  t694[268ULL] = X[121ULL];
  t694[269ULL] = X[15ULL] * 0.1;
  t694[270ULL] = X[16ULL];
  t694[271ULL] = X[122ULL];
  t694[272ULL] = X[123ULL];
  t694[273ULL] = Controlled_Heat_Flow_Rate_Source_Q;
  t694[274ULL] = X[116ULL];
  t694[275ULL] = X[117ULL] * 0.1;
  t694[276ULL] = X[120ULL];
  t694[277ULL] = X[124ULL];
  t694[278ULL] = X[122ULL];
  t694[279ULL] = X[125ULL];
  t694[280ULL] = X[118ULL];
  t694[281ULL] = X[119ULL] * 0.1;
  t694[282ULL] = X[121ULL];
  t694[283ULL] = X[126ULL];
  t694[284ULL] = X[123ULL];
  t694[285ULL] = X[127ULL];
  t694[286ULL] = t925;
  t694[287ULL] = t926;
  t694[288ULL] = X[15ULL] / (t925 == 0.0 ? 1.0E-16 : t925) * 100.0 + t926;
  t694[289ULL] = t1050;
  t694[290ULL] = t1051;
  t694[291ULL] = X[104ULL];
  t694[292ULL] = X[105ULL] * 0.1;
  t694[293ULL] = X[116ULL];
  t694[294ULL] = X[117ULL] * 0.1;
  t694[295ULL] = X[128ULL];
  t694[296ULL] = -X[107ULL];
  t694[297ULL] = -X[120ULL];
  t694[298ULL] = X[17ULL] * 0.1;
  t694[299ULL] = X[18ULL];
  t694[300ULL] = -X[122ULL];
  t694[301ULL] = X[104ULL];
  t694[302ULL] = X[105ULL] * 0.1;
  t694[303ULL] = -X[107ULL];
  t694[304ULL] = X[129ULL];
  t694[305ULL] = X[130ULL];
  t694[306ULL] = X[116ULL];
  t694[307ULL] = X[117ULL] * 0.1;
  t694[308ULL] = -X[120ULL];
  t694[309ULL] = X[131ULL];
  t694[310ULL] = -X[122ULL];
  t694[311ULL] = X[132ULL];
  t694[312ULL] = Pipe_TL1_rho_I;
  t694[313ULL] = t930;
  t694[314ULL] = X[17ULL] / (Pipe_TL1_rho_I == 0.0 ? 1.0E-16 : Pipe_TL1_rho_I) *
    100.0 + t930;
  t694[315ULL] = t917;
  t694[316ULL] = t1049;
  t694[317ULL] = X[118ULL];
  t694[318ULL] = X[119ULL] * 0.1;
  t694[319ULL] = X[89ULL];
  t694[320ULL] = X[90ULL] * 0.1;
  t694[321ULL] = X[133ULL];
  t694[322ULL] = -X[121ULL];
  t694[323ULL] = t932;
  t694[324ULL] = X[19ULL] * 0.1;
  t694[325ULL] = X[20ULL];
  t694[326ULL] = -X[123ULL];
  t694[327ULL] = t933;
  t694[328ULL] = X[118ULL];
  t694[329ULL] = X[119ULL] * 0.1;
  t694[330ULL] = -X[121ULL];
  t694[331ULL] = X[136ULL];
  t694[332ULL] = -X[123ULL];
  t694[333ULL] = X[137ULL];
  t694[334ULL] = X[89ULL];
  t694[335ULL] = X[90ULL] * 0.1;
  t694[336ULL] = t932;
  t694[337ULL] = X[138ULL];
  t694[338ULL] = t933;
  t694[339ULL] = X[139ULL];
  t694[340ULL] = t935;
  t694[341ULL] = t936;
  t694[342ULL] = X[19ULL] / (t935 == 0.0 ? 1.0E-16 : t935) * 100.0 + t936;
  t694[343ULL] = intrm_sf_mf_264;
  t694[344ULL] = t1052;
  t694[345ULL] = X[79ULL] * 0.1;
  t694[346ULL] = X[80ULL];
  t694[347ULL] = X[43ULL] * 0.1;
  t694[348ULL] = X[44ULL];
  t694[349ULL] = X[140ULL];
  t694[350ULL] = t939 * 1000.0;
  t694[351ULL] = t939 * 1000.0;
  t694[352ULL] = -X[140ULL];
  t694[353ULL] = X[140ULL];
  t694[354ULL] = X[140ULL];
  t694[355ULL] = t939 * 1000.0;
  t694[356ULL] = t939 * 1000.0;
  t694[357ULL] = X[79ULL] * 0.1;
  t694[358ULL] = X[80ULL];
  t694[359ULL] = X[43ULL] * 0.1;
  t694[360ULL] = X[44ULL];
  t694[361ULL] = X[21ULL] * 0.1;
  t694[362ULL] = X[22ULL];
  t694[363ULL] = X[140ULL];
  t694[364ULL] = -X[57ULL];
  t694[365ULL] = t941;
  t694[366ULL] = Preheating_Pipe_2P_v_I;
  t694[367ULL] = -X[81ULL];
  t694[368ULL] = t944;
  t694[369ULL] = t939;
  t694[370ULL] = t945;
  t694[371ULL] = X[79ULL] * 0.1;
  t694[372ULL] = X[80ULL];
  t694[373ULL] = -X[81ULL];
  t694[374ULL] = X[143ULL];
  t694[375ULL] = -X[57ULL];
  t694[376ULL] = X[43ULL] * 0.1;
  t694[377ULL] = X[44ULL];
  t694[378ULL] = t944;
  t694[379ULL] = X[144ULL];
  t694[380ULL] = t941;
  t694[381ULL] = X[23ULL] * 1550.0031000062004;
  t694[382ULL] = X[145ULL];
  t694[383ULL] = X[146ULL];
  t694[384ULL] = X[21ULL] * 0.0063674739754068094 / (X[23ULL] == 0.0 ? 1.0E-16 :
    X[23ULL]) * 100.0 + X[22ULL];
  t694[385ULL] = intrm_sf_mf_313;
  t694[386ULL] = U_idx_2;
  t694[387ULL] = X[43ULL] * 0.1;
  t694[388ULL] = X[44ULL];
  t694[389ULL] = t948;
  t694[390ULL] = t949 * 0.001;
  t694[391ULL] = t950;
  t694[392ULL] = Preheating_Thermodynamic_Properties_Sensor_2P1_V;
  t694[393ULL] = t950 - 273.15;
  t694[394ULL] = X[79ULL] * 0.1;
  t694[395ULL] = X[80ULL];
  t694[396ULL] = X[79ULL] * t921 * 100.0 + X[80ULL];
  t694[397ULL] = t952 * 0.001;
  t694[398ULL] = t953;
  t694[399ULL] = t921;
  t694[400ULL] = t953 - 273.15;
  t694[401ULL] = X[79ULL] * 0.1;
  t694[402ULL] = X[80ULL];
  t694[403ULL] = X[79ULL] * 0.1;
  t694[404ULL] = X[80ULL];
  t694[405ULL] = X[49ULL] * 0.1;
  t694[406ULL] = X[50ULL];
  t694[407ULL] = X[49ULL] * 0.1;
  t694[408ULL] = X[50ULL];
  t694[409ULL] = X[49ULL] * 0.1;
  t694[410ULL] = X[50ULL];
  t694[411ULL] = X[53ULL] * 0.1;
  t694[412ULL] = X[54ULL];
  t694[413ULL] = X[53ULL] * 0.1;
  t694[414ULL] = X[54ULL];
  t694[415ULL] = X[53ULL] * 0.1;
  t694[416ULL] = X[54ULL];
  t694[417ULL] = X[0ULL] * 0.1;
  t694[418ULL] = X[147ULL];
  t694[419ULL] = X[0ULL] * 0.1;
  t694[420ULL] = X[147ULL];
  t694[421ULL] = X[0ULL] * 0.1;
  t694[422ULL] = X[147ULL];
  t694[423ULL] = X[53ULL] * 0.1;
  t694[424ULL] = X[54ULL];
  t694[425ULL] = X[53ULL] * 0.1;
  t694[426ULL] = X[54ULL];
  t694[427ULL] = X[53ULL] * 0.1;
  t694[428ULL] = X[0ULL] * 0.1;
  t694[429ULL] = X[97ULL];
  t694[430ULL] = X[0ULL] * 0.1;
  t694[431ULL] = X[97ULL];
  t694[432ULL] = X[0ULL] * 0.1;
  t694[433ULL] = X[97ULL];
  t694[434ULL] = X[79ULL] * 0.1;
  t694[435ULL] = X[0ULL] * 0.1;
  t694[436ULL] = X[99ULL];
  t694[437ULL] = X[148ULL];
  t694[438ULL] = -X[101ULL];
  t694[439ULL] = X[101ULL];
  t694[440ULL] = X[0ULL] * 0.1;
  t694[441ULL] = X[99ULL];
  t694[442ULL] = -X[101ULL];
  t694[443ULL] = X[149ULL];
  t694[444ULL] = -X[100ULL];
  t694[445ULL] = X[148ULL];
  t694[446ULL] = X[101ULL];
  t694[447ULL] = X[149ULL];
  t694[448ULL] = X[100ULL];
  t694[449ULL] = -X[100ULL];
  t694[450ULL] = X[100ULL];
  t694[451ULL] = intrm_sf_mf_329;
  t694[452ULL] = X[24ULL];
  t694[453ULL] = X[25ULL];
  t694[454ULL] = X[118ULL];
  t694[455ULL] = X[119ULL] * 0.1;
  t694[456ULL] = X[119ULL] * 99999.999999999985;
  t694[457ULL] = X[118ULL];
  t694[458ULL] = X[119ULL] * 0.099999999999999992;
  t694[459ULL] = X[118ULL] - 273.15;
  t694[460ULL] = X[148ULL];
  t694[461ULL] = -X[101ULL];
  t694[462ULL] = X[148ULL];
  t694[463ULL] = -X[101ULL];
  t694[464ULL] = X[150ULL];
  t694[465ULL] = -X[100ULL];
  t694[466ULL] = -X[100ULL];
  t694[467ULL] = X[88ULL];
  t694[468ULL] = -X[91ULL];
  t694[469ULL] = X[88ULL];
  t694[470ULL] = -X[91ULL];
  t694[471ULL] = X[151ULL];
  t694[472ULL] = -X[93ULL];
  t694[473ULL] = -X[93ULL];
  t694[474ULL] = X[111ULL];
  t694[475ULL] = -X[112ULL];
  t694[476ULL] = X[111ULL];
  t694[477ULL] = -X[112ULL];
  t694[478ULL] = X[152ULL];
  t694[479ULL] = X[48ULL];
  t694[480ULL] = -X[60ULL];
  t694[481ULL] = X[48ULL];
  t694[482ULL] = -X[60ULL];
  t694[483ULL] = X[153ULL];
  t694[484ULL] = -X[55ULL];
  t694[485ULL] = -X[55ULL];
  t694[486ULL] = X[0ULL] * 0.1;
  t694[487ULL] = X[97ULL];
  t694[488ULL] = X[49ULL] * 0.1;
  t694[489ULL] = X[50ULL];
  t694[490ULL] = X[98ULL];
  t694[491ULL] = -X[73ULL];
  t694[492ULL] = U_idx_3;
  t694[493ULL] = X[0ULL] * 0.1;
  t694[494ULL] = X[97ULL];
  t694[495ULL] = X[98ULL];
  t694[496ULL] = X[154ULL];
  t694[497ULL] = X[56ULL];
  t694[498ULL] = X[49ULL] * 0.1;
  t694[499ULL] = X[50ULL];
  t694[500ULL] = -X[73ULL];
  t694[501ULL] = X[155ULL];
  t694[502ULL] = -X[56ULL];
  t694[503ULL] = zc_int17;
  t694[504ULL] = t875;
  t694[505ULL] = Simscape_Component_ideal_outlet_enthalpy;
  t694[506ULL] = Simscape_Component_ideal_outlet_quality;
  t694[507ULL] = t901 * 0.001;
  t694[508ULL] = X[56ULL];
  t694[509ULL] = X[56ULL];
  t694[510ULL] = -X[56ULL];
  t694[511ULL] = t974;
  t694[512ULL] = -t1291;
  t694[513ULL] = X[97ULL];
  t694[514ULL] = zc_int17;
  t694[515ULL] = t875;
  t694[516ULL] = Simscape_Component_ideal_outlet_enthalpy;
  t694[517ULL] = Simscape_Component_ideal_outlet_quality;
  t694[518ULL] = t901 * 0.001;
  t694[519ULL] = X[56ULL];
  t694[520ULL] = t974;
  t694[521ULL] = -t1291 * 0.001;
  t694[522ULL] = U_idx_1;
  t694[523ULL] = X[0ULL] * 0.1;
  t694[524ULL] = X[99ULL];
  t694[525ULL] = X[0ULL] * 0.1;
  t694[526ULL] = X[147ULL];
  t694[527ULL] = X[0ULL] * 0.1;
  t694[528ULL] = X[42ULL];
  t694[529ULL] = X[0ULL] * 0.1;
  t694[530ULL] = X[97ULL];
  t694[531ULL] = X[0ULL] * 0.1;
  t694[532ULL] = X[26ULL];
  t694[533ULL] = X[27ULL];
  t694[534ULL] = X[28ULL];
  t694[535ULL] = X[29ULL];
  t694[536ULL] = t976;
  t694[537ULL] = t977;
  t694[538ULL] = X[156ULL];
  t694[539ULL] = t978;
  t694[540ULL] = X[28ULL] / (t1079 == 0.0 ? 1.0E-16 : t1079);
  t694[541ULL] = X[101ULL];
  t694[542ULL] = t982;
  t694[543ULL] = t983;
  t694[544ULL] = X[100ULL];
  t694[545ULL] = -X[47ULL];
  t694[546ULL] = -X[45ULL];
  t694[547ULL] = X[157ULL];
  t694[548ULL] = X[158ULL];
  t694[549ULL] = -X[56ULL];
  t694[550ULL] = -X[98ULL];
  t694[551ULL] = Steam_Drum_h_liq;
  t694[552ULL] = t984;
  t694[553ULL] = t971;
  t694[554ULL] = t975;
  t694[555ULL] = t986;
  t694[556ULL] = t987;
  t694[557ULL] = t978;
  t694[558ULL] = X[0ULL] * 0.1;
  t694[559ULL] = X[99ULL];
  t694[560ULL] = X[101ULL];
  t694[561ULL] = X[159ULL];
  t694[562ULL] = X[100ULL];
  t694[563ULL] = X[0ULL] * 0.1;
  t694[564ULL] = X[147ULL];
  t694[565ULL] = X[157ULL];
  t694[566ULL] = X[160ULL];
  t694[567ULL] = X[158ULL];
  t694[568ULL] = X[0ULL] * 0.1;
  t694[569ULL] = X[42ULL];
  t694[570ULL] = -X[45ULL];
  t694[571ULL] = X[161ULL];
  t694[572ULL] = -X[47ULL];
  t694[573ULL] = X[0ULL] * 0.1;
  t694[574ULL] = X[97ULL];
  t694[575ULL] = -X[98ULL];
  t694[576ULL] = X[162ULL];
  t694[577ULL] = -X[56ULL];
  t694[578ULL] = t1079;
  t694[579ULL] = t988;
  t694[580ULL] = t978;
  t694[581ULL] = X[89ULL];
  t694[582ULL] = X[90ULL] * 0.1;
  t694[583ULL] = X[43ULL] * 0.1;
  t694[584ULL] = X[44ULL];
  t694[585ULL] = X[102ULL];
  t694[586ULL] = X[103ULL] * 0.1;
  t694[587ULL] = X[0ULL] * 0.1;
  t694[588ULL] = X[147ULL];
  t694[589ULL] = X[89ULL];
  t694[590ULL] = X[90ULL] * 0.1;
  t694[591ULL] = X[102ULL];
  t694[592ULL] = X[103ULL] * 0.1;
  t694[593ULL] = X[30ULL];
  t694[594ULL] = X[31ULL] * 0.1;
  t694[595ULL] = X[32ULL];
  t694[596ULL] = X[135ULL];
  t694[597ULL] = t993;
  t694[598ULL] = intrm_sf_mf_511;
  t694[599ULL] = X[30ULL];
  t694[600ULL] = X[134ULL];
  t694[601ULL] = -X[106ULL];
  t694[602ULL] = X[165ULL];
  t694[603ULL] = X[89ULL];
  t694[604ULL] = X[90ULL] * 0.1;
  t694[605ULL] = X[166ULL];
  t694[606ULL] = X[167ULL];
  t694[607ULL] = X[135ULL];
  t694[608ULL] = X[168ULL];
  t694[609ULL] = X[89ULL];
  t694[610ULL] = X[90ULL] * 0.1;
  t694[611ULL] = X[134ULL];
  t694[612ULL] = X[169ULL];
  t694[613ULL] = X[135ULL];
  t694[614ULL] = X[170ULL];
  t694[615ULL] = X[102ULL];
  t694[616ULL] = X[103ULL] * 0.1;
  t694[617ULL] = X[171ULL];
  t694[618ULL] = X[172ULL];
  t694[619ULL] = X[173ULL];
  t694[620ULL] = X[102ULL];
  t694[621ULL] = X[103ULL] * 0.1;
  t694[622ULL] = -X[106ULL];
  t694[623ULL] = X[174ULL];
  t694[624ULL] = X[175ULL];
  t694[625ULL] = (t993 + intrm_sf_mf_511) / 2.0 * 0.36562301792487523;
  t694[626ULL] = t1030;
  t694[627ULL] = X[31ULL] / (t993 == 0.0 ? 1.0E-16 : t993) * 100.0 + t1030;
  t694[628ULL] = t1032;
  t694[629ULL] = X[31ULL] / (intrm_sf_mf_511 == 0.0 ? 1.0E-16 : intrm_sf_mf_511)
    * 100.0 + t1032;
  t694[630ULL] = X[43ULL] * 0.1;
  t694[631ULL] = X[44ULL];
  t694[632ULL] = X[0ULL] * 0.1;
  t694[633ULL] = X[147ULL];
  t694[634ULL] = X[37ULL] * 0.001;
  t694[635ULL] = X[33ULL] * 0.1;
  t694[636ULL] = X[34ULL];
  t694[637ULL] = t989;
  t694[638ULL] = t995;
  t694[639ULL] = X[35ULL];
  t694[640ULL] = X[38ULL];
  t694[641ULL] = X[164ULL] * 0.001;
  t694[642ULL] = t1003;
  t694[643ULL] = X[36ULL] * 0.001;
  t694[644ULL] = X[40ULL] * 0.001;
  t694[645ULL] = X[39ULL] * 0.001;
  t694[646ULL] = X[163ULL];
  t694[647ULL] = t1008;
  t694[648ULL] = t1010;
  t694[649ULL] = t1013;
  t694[650ULL] = t1028;
  t694[651ULL] = t1026;
  t694[652ULL] = t1027;
  t694[653ULL] = X[141ULL];
  t694[654ULL] = -X[158ULL];
  t694[655ULL] = X[142ULL];
  t694[656ULL] = -X[157ULL];
  t694[657ULL] = X[176ULL];
  t694[658ULL] = Steam_Generator_two_phase_fluid_T_out;
  t694[659ULL] = X[43ULL] * 0.1;
  t694[660ULL] = X[44ULL];
  t694[661ULL] = X[142ULL];
  t694[662ULL] = X[177ULL];
  t694[663ULL] = X[141ULL];
  t694[664ULL] = X[0ULL] * 0.1;
  t694[665ULL] = X[147ULL];
  t694[666ULL] = -X[157ULL];
  t694[667ULL] = X[178ULL];
  t694[668ULL] = -X[158ULL];
  t694[669ULL] = X[41ULL];
  t694[670ULL] = Steam_Generator_two_phase_fluid_rho_mix;
  t694[671ULL] = t1035;
  t694[672ULL] = t1009;
  t694[673ULL] = t1012;
  t694[674ULL] = t865;
  t694[675ULL] = intrm_sf_mf_486;
  t694[676ULL] = t1024;
  t694[677ULL] = t1023;
  t694[678ULL] = X[37ULL] * 0.001;
  t694[679ULL] = t994;
  t694[680ULL] = Steam_Generator_Rth_mix;
  t694[681ULL] = t1000;
  t694[682ULL] = Steam_Generator_Q;
  t694[683ULL] = t985;
  t694[684ULL] = Steam_Generator_Q_mix;
  t694[685ULL] = t997;
  t694[686ULL] = X[36ULL] * 0.001;
  t694[687ULL] = X[40ULL] * 0.001;
  t694[688ULL] = X[39ULL] * 0.001;
  t694[689ULL] = t891;
  t694[690ULL] = t882;
  t694[691ULL] = t877;
  t694[692ULL] = t1028 >= 0.001 ? t990 : 0.0;
  t694[693ULL] = t1026 >= 0.001 ? t1031 : 0.0;
  t694[694ULL] = Steam_Generator_Q_cond;
  t694[695ULL] = X[38ULL];
  t694[696ULL] = U_idx_3;
  t694[697ULL] = U_idx_3;
  t694[698ULL] = U_idx_0;
  t694[699ULL] = Controlled_Heat_Flow_Rate_Source_Q * 0.001;
  t694[700ULL] = X[102ULL];
  t694[701ULL] = X[103ULL] * 0.1;
  t694[702ULL] = X[51ULL];
  t694[703ULL] = X[52ULL] * 0.1;
  t694[704ULL] = X[43ULL] * 0.1;
  t694[705ULL] = X[44ULL];
  t694[706ULL] = t948;
  t694[707ULL] = t949 * 0.001;
  t694[708ULL] = t950;
  t694[709ULL] = Preheating_Thermodynamic_Properties_Sensor_2P1_V;
  t694[710ULL] = X[0ULL] * 0.1;
  t694[711ULL] = X[147ULL];
  t694[712ULL] = X[0ULL] * Thermodynamic_Properties_Sensor_2P1_V * 100.0 + X
    [147ULL];
  t694[713ULL] = t1036 * 0.001;
  t694[714ULL] = Thermodynamic_Properties_Sensor_2P1_T;
  t694[715ULL] = Thermodynamic_Properties_Sensor_2P1_V;
  t694[716ULL] = Thermodynamic_Properties_Sensor_2P1_T - 273.15;
  t694[717ULL] = X[0ULL] * 0.1;
  t694[718ULL] = X[97ULL];
  t694[719ULL] = t927;
  t694[720ULL] = t1040 * 0.001;
  t694[721ULL] = t1041;
  t694[722ULL] = t1038;
  t694[723ULL] = t927;
  t694[724ULL] = t1040 * 0.001;
  t694[725ULL] = t1041 - 273.15;
  t694[726ULL] = X[49ULL] * 0.1;
  t694[727ULL] = X[50ULL];
  t694[728ULL] = t1042;
  t694[729ULL] = t1043 * 0.001;
  t694[730ULL] = t1044;
  t694[731ULL] = t911;
  t694[732ULL] = t1042;
  t694[733ULL] = t1043 * 0.001;
  t694[734ULL] = t1044 - 273.15;
  t694[735ULL] = X[53ULL] * 0.1;
  t694[736ULL] = X[54ULL];
  t694[737ULL] = t1045;
  t694[738ULL] = t1046 * 0.001;
  t694[739ULL] = t1047;
  t694[740ULL] = Thermodynamic_Properties_Sensor_2P4_V;
  t694[741ULL] = t1045;
  t694[742ULL] = t1047 - 273.15;
  t694[743ULL] = t950 - 273.15;
  t694[744ULL] = X[0ULL] * 0.1;
  t694[745ULL] = X[147ULL];
  t694[746ULL] = X[0ULL] * 0.1;
  t694[747ULL] = X[147ULL];
  t694[748ULL] = X[179ULL];
  t694[749ULL] = X[179ULL];
  t694[750ULL] = X[53ULL] * 0.1;
  t694[751ULL] = X[54ULL];
  t694[752ULL] = X[180ULL];
  t694[753ULL] = X[180ULL];
  t694[754ULL] = X[0ULL] * 0.1;
  t694[755ULL] = X[97ULL];
  t694[756ULL] = X[181ULL];
  t694[757ULL] = X[181ULL];
  t694[758ULL] = X[49ULL] * 0.1;
  t694[759ULL] = X[50ULL];
  t694[760ULL] = X[182ULL];
  t694[761ULL] = X[182ULL];
  for (b = 0; b < 762; b++) {
    out.mX[b] = t694[b];
  }

  (void)LC;
  (void)t1293;
  return 0;
}
