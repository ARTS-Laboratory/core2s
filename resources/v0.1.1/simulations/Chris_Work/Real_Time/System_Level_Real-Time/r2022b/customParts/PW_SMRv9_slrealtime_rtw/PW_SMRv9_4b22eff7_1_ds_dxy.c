/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv9/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_sys_struct.h"
#include "PW_SMRv9_4b22eff7_1_ds_dxy.h"
#include "PW_SMRv9_4b22eff7_1_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_externals.h"
#include "PW_SMRv9_4b22eff7_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv9_4b22eff7_1_ds_dxy(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1064, NeDsMethodOutput *t1065)
{
  ETTS0 ac_efOut;
  ETTS0 cb_efOut;
  ETTS0 cc_efOut;
  ETTS0 d_efOut;
  ETTS0 ec_efOut;
  ETTS0 efOut;
  ETTS0 fb_efOut;
  ETTS0 g_efOut;
  ETTS0 hb_efOut;
  ETTS0 j_efOut;
  ETTS0 m_efOut;
  ETTS0 me_efOut;
  ETTS0 nb_efOut;
  ETTS0 p_efOut;
  ETTS0 qb_efOut;
  ETTS0 r_efOut;
  ETTS0 sb_efOut;
  ETTS0 t15;
  ETTS0 t17;
  ETTS0 t19;
  ETTS0 t21;
  ETTS0 t24;
  ETTS0 t26;
  ETTS0 t31;
  ETTS0 t44;
  ETTS0 t45;
  ETTS0 t46;
  ETTS0 t47;
  ETTS0 t48;
  ETTS0 t49;
  ETTS0 t50;
  ETTS0 t51;
  ETTS0 t52;
  ETTS0 t53;
  ETTS0 t54;
  ETTS0 t55;
  ETTS0 t56;
  ETTS0 t57;
  ETTS0 u_efOut;
  ETTS0 uc_efOut;
  ETTS0 w_efOut;
  ETTS0 xb_efOut;
  ETTS0 xc_efOut;
  ETTS0 y_efOut;
  PmRealVector out;
  real_T X[250];
  real_T t401[179];
  real_T t488[18];
  real_T t489[17];
  real_T t493[12];
  real_T t506[12];
  real_T intermediate_der4777[11];
  real_T intermediate_der4778[11];
  real_T t497[11];
  real_T intermediate_der1723[9];
  real_T t502[8];
  real_T t494[7];
  real_T t495[7];
  real_T t496[7];
  real_T t503[6];
  real_T t490[4];
  real_T t498[4];
  real_T t499[4];
  real_T t504[4];
  real_T t605[2];
  real_T t607[2];
  real_T t610[2];
  real_T t611[2];
  real_T t613[2];
  real_T t614[2];
  real_T t616[2];
  real_T t617[2];
  real_T t619[2];
  real_T t620[2];
  real_T t622[2];
  real_T t625[2];
  real_T t628[2];
  real_T t629[2];
  real_T ab_efOut[1];
  real_T ad_efOut[1];
  real_T ae_efOut[1];
  real_T b_efOut[1];
  real_T bb_efOut[1];
  real_T bc_efOut[1];
  real_T bd_efOut[1];
  real_T be_efOut[1];
  real_T c_efOut[1];
  real_T cd_efOut[1];
  real_T ce_efOut[1];
  real_T db_efOut[1];
  real_T dc_efOut[1];
  real_T dd_efOut[1];
  real_T de_efOut[1];
  real_T e_efOut[1];
  real_T eb_efOut[1];
  real_T ed_efOut[1];
  real_T ee_efOut[1];
  real_T f_efOut[1];
  real_T fc_efOut[1];
  real_T fd_efOut[1];
  real_T fe_efOut[1];
  real_T gb_efOut[1];
  real_T gc_efOut[1];
  real_T gd_efOut[1];
  real_T ge_efOut[1];
  real_T h_efOut[1];
  real_T hc_efOut[1];
  real_T hd_efOut[1];
  real_T he_efOut[1];
  real_T i_efOut[1];
  real_T ib_efOut[1];
  real_T ic_efOut[1];
  real_T id_efOut[1];
  real_T ie_efOut[1];
  real_T jb_efOut[1];
  real_T jc_efOut[1];
  real_T jd_efOut[1];
  real_T je_efOut[1];
  real_T k_efOut[1];
  real_T kb_efOut[1];
  real_T kc_efOut[1];
  real_T kd_efOut[1];
  real_T ke_efOut[1];
  real_T l_efOut[1];
  real_T lb_efOut[1];
  real_T lc_efOut[1];
  real_T ld_efOut[1];
  real_T le_efOut[1];
  real_T mb_efOut[1];
  real_T mc_efOut[1];
  real_T md_efOut[1];
  real_T n_efOut[1];
  real_T nc_efOut[1];
  real_T nd_efOut[1];
  real_T ne_efOut[1];
  real_T o_efOut[1];
  real_T ob_efOut[1];
  real_T oc_efOut[1];
  real_T od_efOut[1];
  real_T oe_efOut[1];
  real_T pb_efOut[1];
  real_T pc_efOut[1];
  real_T pd_efOut[1];
  real_T pe_efOut[1];
  real_T q_efOut[1];
  real_T qc_efOut[1];
  real_T qd_efOut[1];
  real_T qe_efOut[1];
  real_T rb_efOut[1];
  real_T rc_efOut[1];
  real_T rd_efOut[1];
  real_T re_efOut[1];
  real_T s_efOut[1];
  real_T sc_efOut[1];
  real_T sd_efOut[1];
  real_T se_efOut[1];
  real_T t106[1];
  real_T t405[1];
  real_T t407[1];
  real_T t408[1];
  real_T t480[1];
  real_T t482[1];
  real_T t485[1];
  real_T t487[1];
  real_T t58[1];
  real_T t_efOut[1];
  real_T tb_efOut[1];
  real_T tc_efOut[1];
  real_T td_efOut[1];
  real_T te_efOut[1];
  real_T ub_efOut[1];
  real_T ud_efOut[1];
  real_T ue_efOut[1];
  real_T v_efOut[1];
  real_T vb_efOut[1];
  real_T vc_efOut[1];
  real_T vd_efOut[1];
  real_T ve_efOut[1];
  real_T wb_efOut[1];
  real_T wc_efOut[1];
  real_T wd_efOut[1];
  real_T we_efOut[1];
  real_T x_efOut[1];
  real_T xd_efOut[1];
  real_T xe_efOut[1];
  real_T yb_efOut[1];
  real_T yc_efOut[1];
  real_T yd_efOut[1];
  real_T ye_efOut[1];
  real_T U_idx_5;
  real_T U_idx_6;
  real_T intermediate_der2092;
  real_T intermediate_der2281;
  real_T intermediate_der2282;
  real_T intermediate_der2290;
  real_T intermediate_der2420;
  real_T intermediate_der2490;
  real_T intermediate_der2501;
  real_T intermediate_der2504;
  real_T intermediate_der2505;
  real_T intermediate_der2509;
  real_T intermediate_der2578;
  real_T intermediate_der2587;
  real_T intermediate_der2588;
  real_T intermediate_der2589;
  real_T intermediate_der2591;
  real_T intermediate_der2646;
  real_T intermediate_der2647;
  real_T intermediate_der4831;
  real_T intermediate_der4840;
  real_T intermediate_der4847;
  real_T intermediate_der4848;
  real_T intermediate_der4855;
  real_T intermediate_der6164;
  real_T intermediate_der6170;
  real_T intermediate_der6172;
  real_T intermediate_der7009;
  real_T intermediate_der7011;
  real_T intermediate_der7013;
  real_T intermediate_der7014;
  real_T intermediate_der7024;
  real_T intermediate_der7031;
  real_T intermediate_der7035;
  real_T intermediate_der7037;
  real_T intermediate_der7043;
  real_T intermediate_der7052;
  real_T intermediate_der7059;
  real_T t1055;
  real_T t1060;
  real_T t1063;
  real_T t479_idx_0;
  real_T t695;
  real_T t698;
  real_T t702;
  real_T t703;
  real_T t704;
  real_T t705;
  real_T t706;
  real_T t708;
  real_T t709;
  real_T t710;
  real_T t711;
  real_T t713;
  real_T t714;
  real_T t716;
  real_T t718;
  real_T t722;
  real_T t723;
  real_T t724;
  real_T t725;
  real_T t726;
  real_T t727;
  real_T t728;
  real_T t729;
  real_T t731;
  real_T t733;
  real_T t741;
  real_T t743;
  real_T t745;
  real_T t748;
  real_T t750;
  real_T t751;
  real_T t754;
  real_T t756;
  real_T t757;
  real_T t758;
  real_T t759;
  real_T t760;
  real_T t761;
  real_T t764;
  real_T t765;
  real_T t766;
  real_T t767;
  real_T t768;
  real_T t769;
  real_T t771;
  real_T t773;
  real_T t774;
  real_T t777;
  real_T t779;
  real_T t780;
  real_T t781;
  real_T t782;
  real_T t783;
  real_T t793;
  real_T t794;
  real_T t888;
  real_T t936;
  real_T t937;
  real_T t944;
  real_T t993;
  real_T t994;
  real_T t995;
  real_T t997;
  real_T t999;
  size_t t187[1];
  size_t t59[1];
  size_t t597[1];
  size_t t60[1];
  size_t t600[1];
  size_t t603[1];
  size_t t606[1];
  size_t t609[1];
  size_t t612[1];
  size_t t615[1];
  size_t t618[1];
  size_t t621[1];
  size_t t624[1];
  size_t t627[1];
  size_t t630[1];
  size_t t94[1];
  size_t t536;
  int32_T M[163];
  int32_T b;
  for (b = 0; b < 163; b++) {
    M[b] = t1064->mM.mX[b];
  }

  U_idx_5 = t1064->mU.mX[5];
  U_idx_6 = t1064->mU.mX[6];
  for (b = 0; b < 250; b++) {
    X[b] = t1064->mX.mX[b];
  }

  out = t1065->mDXY;
  t58[0ULL] = X[0ULL];
  t59[0] = 100ULL;
  t60[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t58[0ULL], &t59
    [0ULL], &t60[0ULL]);
  t57 = efOut;
  t628[0ULL] = t57.mField0[0ULL];
  t628[1ULL] = t57.mField0[1ULL];
  t629[0ULL] = t57.mField1[0ULL];
  t629[1ULL] = t57.mField1[1ULL];
  t630[0ULL] = t57.mField2[0ULL];
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t628[0ULL], &t630[0ULL],
    ((_NeDynamicSystem*)(LC))->mField7, &t59[0ULL], &t60[0ULL]);
  t487[0] = b_efOut[0];
  intermediate_der4831 = t487[0ULL];
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t628[0ULL], &t630[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t59[0ULL], &t60[0ULL]);
  t485[0] = c_efOut[0];
  t695 = t485[0ULL];
  t487[0ULL] = X[73ULL];
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t487[0ULL],
    &t59[0ULL], &t60[0ULL]);
  t56 = d_efOut;
  t619[0ULL] = t56.mField0[0ULL];
  t619[1ULL] = t56.mField0[1ULL];
  t620[0ULL] = t56.mField1[0ULL];
  t620[1ULL] = t56.mField1[1ULL];
  t621[0ULL] = t56.mField2[0ULL];
  tlu2_1d_linear_linear_value(&e_efOut[0ULL], &t619[0ULL], &t621[0ULL],
    ((_NeDynamicSystem*)(LC))->mField7, &t59[0ULL], &t60[0ULL]);
  t482[0] = e_efOut[0];
  t698 = t482[0ULL];
  tlu2_1d_linear_linear_value(&f_efOut[0ULL], &t619[0ULL], &t621[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t59[0ULL], &t60[0ULL]);
  t405[0] = f_efOut[0];
  intermediate_der2578 = t405[0ULL];
  if (X[74ULL] <= t698) {
    intermediate_der2281 = X[74ULL] / (t698 == 0.0 ? 1.0E-16 : t698) - 1.0;
  } else if (X[74ULL] >= intermediate_der2578) {
    intermediate_der2281 = (X[74ULL] - 4000.0) / (4000.0 - intermediate_der2578 ==
      0.0 ? 1.0E-16 : 4000.0 - intermediate_der2578) + 2.0;
  } else {
    t705 = intermediate_der2578 - t698;
    intermediate_der2281 = (X[74ULL] - t698) / (t705 == 0.0 ? 1.0E-16 : t705);
  }

  t993 = X[84ULL] * 0.0012548887771113527;
  t994 = X[85ULL] * 0.0012548887771113527;
  t995 = X[86ULL] * 0.0012548887771113527;
  t485[0ULL] = X[88ULL];
  tlu2_linear_linear_prelookup(&g_efOut.mField0[0ULL], &g_efOut.mField1[0ULL],
    &g_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t485[0ULL],
    &t59[0ULL], &t60[0ULL]);
  t53 = g_efOut;
  t616[0ULL] = t53.mField0[0ULL];
  t616[1ULL] = t53.mField0[1ULL];
  t617[0ULL] = t53.mField1[0ULL];
  t617[1ULL] = t53.mField1[1ULL];
  t618[0ULL] = t53.mField2[0ULL];
  tlu2_1d_linear_linear_value(&h_efOut[0ULL], &t616[0ULL], &t618[0ULL],
    ((_NeDynamicSystem*)(LC))->mField7, &t59[0ULL], &t60[0ULL]);
  t407[0] = h_efOut[0];
  intermediate_der4855 = t407[0ULL];
  tlu2_1d_linear_linear_value(&i_efOut[0ULL], &t616[0ULL], &t618[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t59[0ULL], &t60[0ULL]);
  t408[0] = i_efOut[0];
  t702 = t408[0ULL];
  if (X[89ULL] <= intermediate_der4855) {
    t703 = X[89ULL] / (intermediate_der4855 == 0.0 ? 1.0E-16 :
                       intermediate_der4855) - 1.0;
  } else if (X[89ULL] >= t702) {
    t703 = (X[89ULL] - 4000.0) / (4000.0 - t702 == 0.0 ? 1.0E-16 : 4000.0 - t702)
      + 2.0;
  } else {
    t710 = t702 - intermediate_der4855;
    t703 = (X[89ULL] - intermediate_der4855) / (t710 == 0.0 ? 1.0E-16 : t710);
  }

  t482[0ULL] = X[92ULL];
  tlu2_linear_linear_prelookup(&j_efOut.mField0[0ULL], &j_efOut.mField1[0ULL],
    &j_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t482[0ULL],
    &t59[0ULL], &t60[0ULL]);
  t51 = j_efOut;
  t613[0ULL] = t51.mField0[0ULL];
  t613[1ULL] = t51.mField0[1ULL];
  t614[0ULL] = t51.mField1[0ULL];
  t614[1ULL] = t51.mField1[1ULL];
  t615[0ULL] = t51.mField2[0ULL];
  tlu2_1d_linear_linear_value(&k_efOut[0ULL], &t613[0ULL], &t615[0ULL],
    ((_NeDynamicSystem*)(LC))->mField7, &t59[0ULL], &t60[0ULL]);
  t106[0] = k_efOut[0];
  t704 = t106[0ULL];
  tlu2_1d_linear_linear_value(&l_efOut[0ULL], &t613[0ULL], &t615[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t59[0ULL], &t60[0ULL]);
  t480[0] = l_efOut[0];
  t705 = t480[0ULL];
  if (X[93ULL] <= t704) {
    t706 = X[93ULL] / (t704 == 0.0 ? 1.0E-16 : t704) - 1.0;
  } else if (X[93ULL] >= t705) {
    t706 = (X[93ULL] - 4000.0) / (4000.0 - t705 == 0.0 ? 1.0E-16 : 4000.0 - t705)
      + 2.0;
  } else {
    intermediate_der2420 = t705 - t704;
    t706 = (X[93ULL] - t704) / (intermediate_der2420 == 0.0 ? 1.0E-16 :
      intermediate_der2420);
  }

  t405[0ULL] = X[15ULL];
  tlu2_linear_linear_prelookup(&m_efOut.mField0[0ULL], &m_efOut.mField1[0ULL],
    &m_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t405[0ULL],
    &t59[0ULL], &t60[0ULL]);
  t50 = m_efOut;
  t610[0ULL] = t50.mField0[0ULL];
  t610[1ULL] = t50.mField0[1ULL];
  t611[0ULL] = t50.mField1[0ULL];
  t611[1ULL] = t50.mField1[1ULL];
  t612[0ULL] = t50.mField2[0ULL];
  tlu2_1d_linear_linear_value(&n_efOut[0ULL], &t610[0ULL], &t612[0ULL],
    ((_NeDynamicSystem*)(LC))->mField7, &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = n_efOut[0];
  intermediate_der2092 = t479_idx_0;
  tlu2_1d_linear_linear_value(&o_efOut[0ULL], &t610[0ULL], &t612[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = o_efOut[0];
  t708 = t479_idx_0;
  t709 = (-X[95ULL] - X[122ULL]) + X[124ULL];
  if (X[118ULL] <= intermediate_der2092) {
    t710 = X[118ULL] / (intermediate_der2092 == 0.0 ? 1.0E-16 :
                        intermediate_der2092) - 1.0;
  } else if (X[118ULL] >= t479_idx_0) {
    t710 = (X[118ULL] - 4000.0) / (4000.0 - t479_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t479_idx_0) + 2.0;
  } else {
    intermediate_der6164 = t479_idx_0 - intermediate_der2092;
    t710 = (X[118ULL] - intermediate_der2092) / (intermediate_der6164 == 0.0 ?
      1.0E-16 : intermediate_der6164);
  }

  t407[0ULL] = t710;
  t94[0] = 50ULL;
  tlu2_linear_linear_prelookup(&p_efOut.mField0[0ULL], &p_efOut.mField1[0ULL],
    &p_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t407[0ULL],
    &t94[0ULL], &t60[0ULL]);
  t52 = p_efOut;
  t607[0ULL] = t52.mField0[0ULL];
  t607[1ULL] = t52.mField0[1ULL];
  t609[0ULL] = t52.mField2[0ULL];
  tlu2_2d_linear_linear_value(&q_efOut[0ULL], &t607[0ULL], &t609[0ULL], &t610
    [0ULL], &t612[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t94[0ULL], &t59
    [0ULL], &t60[0ULL]);
  t479_idx_0 = q_efOut[0];
  t710 = t479_idx_0;
  t408[0ULL] = X[133ULL];
  tlu2_linear_linear_prelookup(&r_efOut.mField0[0ULL], &r_efOut.mField1[0ULL],
    &r_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t408[0ULL],
    &t59[0ULL], &t60[0ULL]);
  t49 = r_efOut;
  t619[0ULL] = t49.mField0[0ULL];
  t619[1ULL] = t49.mField0[1ULL];
  t605[0ULL] = t49.mField1[0ULL];
  t605[1ULL] = t49.mField1[1ULL];
  t606[0ULL] = t49.mField2[0ULL];
  tlu2_1d_linear_linear_value(&s_efOut[0ULL], &t619[0ULL], &t606[0ULL],
    ((_NeDynamicSystem*)(LC))->mField7, &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = s_efOut[0];
  t711 = t479_idx_0;
  tlu2_1d_linear_linear_value(&t_efOut[0ULL], &t619[0ULL], &t606[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = t_efOut[0];
  intermediate_der2282 = t479_idx_0;
  if (X[134ULL] <= t711) {
    t713 = X[134ULL] / (t711 == 0.0 ? 1.0E-16 : t711) - 1.0;
  } else if (X[134ULL] >= t479_idx_0) {
    t713 = (X[134ULL] - 4000.0) / (4000.0 - t479_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t479_idx_0) + 2.0;
  } else {
    t725 = t479_idx_0 - t711;
    t713 = (X[134ULL] - t711) / (t725 == 0.0 ? 1.0E-16 : t725);
  }

  if (X[154ULL] <= intermediate_der4831) {
    t714 = X[154ULL] / (intermediate_der4831 == 0.0 ? 1.0E-16 :
                        intermediate_der4831) - 1.0;
  } else if (X[154ULL] >= t695) {
    t714 = (X[154ULL] - 4000.0) / (4000.0 - t695 == 0.0 ? 1.0E-16 : 4000.0 -
      t695) + 2.0;
  } else {
    intermediate_der2501 = t695 - intermediate_der4831;
    t714 = (X[154ULL] - intermediate_der4831) / (intermediate_der2501 == 0.0 ?
      1.0E-16 : intermediate_der2501);
  }

  t106[0ULL] = t714;
  tlu2_linear_linear_prelookup(&u_efOut.mField0[0ULL], &u_efOut.mField1[0ULL],
    &u_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t106[0ULL],
    &t94[0ULL], &t60[0ULL]);
  t54 = u_efOut;
  tlu2_2d_linear_linear_value(&v_efOut[0ULL], &t54.mField0[0ULL], &t54.mField2
    [0ULL], &t57.mField0[0ULL], &t57.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t58[0] = v_efOut[0];
  t714 = t58[0ULL];
  t480[0] = 0.0;
  tlu2_linear_linear_prelookup(&w_efOut.mField0[0ULL], &w_efOut.mField1[0ULL],
    &w_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t480[0ULL],
    &t94[0ULL], &t60[0ULL]);
  t26 = w_efOut;
  tlu2_2d_linear_linear_value(&x_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], &t628[0ULL], &t630[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t94
    [0ULL], &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = x_efOut[0];
  intermediate_der2420 = t479_idx_0;
  t480[0] = 1.0;
  tlu2_linear_linear_prelookup(&y_efOut.mField0[0ULL], &y_efOut.mField1[0ULL],
    &y_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t480[0ULL],
    &t94[0ULL], &t60[0ULL]);
  t31 = y_efOut;
  tlu2_2d_linear_linear_value(&ab_efOut[0ULL], &t31.mField0[0ULL], &t31.mField2
    [0ULL], &t628[0ULL], &t630[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t94
    [0ULL], &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = ab_efOut[0];
  t716 = t479_idx_0;
  intermediate_der7043 = X[0ULL] - X[15ULL];
  t622[0ULL] = t54.mField0[0ULL];
  t622[1ULL] = t54.mField0[1ULL];
  t624[0ULL] = t54.mField2[0ULL];
  tlu2_2d_linear_linear_value(&bb_efOut[0ULL], &t622[0ULL], &t624[0ULL], &t628
    [0ULL], &t630[0ULL], ((_NeDynamicSystem*)(LC))->mField16, &t94[0ULL], &t59
    [0ULL], &t60[0ULL]);
  t479_idx_0 = bb_efOut[0];
  t718 = t479_idx_0;
  t944 = pmf_sqrt(t479_idx_0 * 461.5);
  if (U_idx_5 <= 0.0) {
    intermediate_der6170 = 0.0;
  } else {
    intermediate_der6170 = U_idx_5 >= 1.0 ? 1.0 : U_idx_5;
  }

  intermediate_der6164 = intermediate_der6170 * 0.0002;
  intermediate_der7014 = X[15ULL] / (X[0ULL] == 0.0 ? 1.0E-16 : X[0ULL]);
  if (intermediate_der7014 <= 0.0) {
    t722 = 0.0;
  } else {
    t722 = intermediate_der7014 >= 1.0 ? 1.0 : intermediate_der7014;
  }

  t723 = (pmf_pow(t722, 1.5384615384615383) - pmf_pow(t722, 1.7692307692307689))
    * 8.6666666666666661;
  if (t723 <= 0.0) {
    t724 = 0.0;
  } else {
    t724 = t723 >= 1.0E+6 ? 1.0E+6 : t723;
  }

  t936 = intermediate_der6164 * X[0ULL] * 0.85;
  t725 = t936 / (t944 == 0.0 ? 1.0E-16 : t944) * pmf_sqrt(t724);
  if (t722 < 0.545727733814065) {
    t726 = X[0ULL] * 0.85 / (t944 == 0.0 ? 1.0E-16 : t944) * 0.667262351240862 *
      intermediate_der6164 * 100000.0;
  } else {
    t726 = t725 * 100000.0;
  }

  intermediate_der6170 = intermediate_der7043 > 0.01 ? t726 : 0.0;
  intermediate_der2504 = fabs(intermediate_der6170);
  t725 = intermediate_der2504 / 0.5;
  t726 = 0.8 - (t725 - 0.8) * (t725 - 0.8) * 0.2;
  if (X[15ULL] <= 1.0) {
    t727 = 1.0;
  } else {
    t727 = X[15ULL] >= 1000.0 ? 1000.0 : X[15ULL];
  }

  t480[0ULL] = t727;
  tlu2_linear_linear_prelookup(&cb_efOut.mField0[0ULL], &cb_efOut.mField1[0ULL],
    &cb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t480[0ULL],
    &t59[0ULL], &t60[0ULL]);
  t24 = cb_efOut;
  tlu2_1d_linear_linear_value(&db_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = db_efOut[0];
  t728 = t479_idx_0;
  tlu2_1d_linear_linear_value(&eb_efOut[0ULL], &t24.mField0[0ULL], &t24.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = eb_efOut[0];
  t729 = t479_idx_0;
  if (t728 <= t728) {
    intermediate_der2501 = t728 / (t728 == 0.0 ? 1.0E-16 : t728) - 1.0;
  } else if (t728 >= t479_idx_0) {
    intermediate_der2501 = (t728 - 4000.0) / (4000.0 - t479_idx_0 == 0.0 ?
      1.0E-16 : 4000.0 - t479_idx_0) + 2.0;
  } else {
    t743 = t479_idx_0 - t728;
    intermediate_der2501 = (t728 - t728) / (t743 == 0.0 ? 1.0E-16 : t743);
  }

  t480[0ULL] = intermediate_der2501;
  tlu2_linear_linear_prelookup(&fb_efOut.mField0[0ULL], &fb_efOut.mField1[0ULL],
    &fb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t480[0ULL],
    &t94[0ULL], &t60[0ULL]);
  t21 = fb_efOut;
  tlu2_2d_linear_linear_value(&gb_efOut[0ULL], &t21.mField0[0ULL], &t21.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = gb_efOut[0];
  intermediate_der2501 = t479_idx_0;
  t731 = t479_idx_0 * t727 * 100.0 + t728;
  if (t729 <= t728) {
    intermediate_der2490 = t729 / (t728 == 0.0 ? 1.0E-16 : t728) - 1.0;
  } else if (t729 >= t729) {
    intermediate_der2490 = (t729 - 4000.0) / (4000.0 - t729 == 0.0 ? 1.0E-16 :
      4000.0 - t729) + 2.0;
  } else {
    intermediate_der7009 = t729 - t728;
    intermediate_der2490 = (t729 - t728) / (intermediate_der7009 == 0.0 ?
      1.0E-16 : intermediate_der7009);
  }

  t480[0ULL] = intermediate_der2490;
  tlu2_linear_linear_prelookup(&hb_efOut.mField0[0ULL], &hb_efOut.mField1[0ULL],
    &hb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t480[0ULL],
    &t94[0ULL], &t60[0ULL]);
  t19 = hb_efOut;
  tlu2_2d_linear_linear_value(&ib_efOut[0ULL], &t19.mField0[0ULL], &t19.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = ib_efOut[0];
  intermediate_der2490 = t479_idx_0;
  t733 = t479_idx_0 * t727 * 100.0 + t729;
  tlu2_2d_linear_linear_value(&jb_efOut[0ULL], &t622[0ULL], &t624[0ULL], &t628
    [0ULL], &t630[0ULL], ((_NeDynamicSystem*)(LC))->mField30, &t94[0ULL], &t59
    [0ULL], &t60[0ULL]);
  t479_idx_0 = jb_efOut[0];
  intermediate_der2504 = t479_idx_0;
  tlu2_2d_linear_linear_value(&kb_efOut[0ULL], &t21.mField0[0ULL], &t21.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = kb_efOut[0];
  intermediate_der2505 = t479_idx_0;
  tlu2_2d_linear_linear_value(&lb_efOut[0ULL], &t19.mField0[0ULL], &t19.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = lb_efOut[0];
  t741 = t479_idx_0;
  t937 = t479_idx_0 - intermediate_der2505;
  intermediate_der2509 = (intermediate_der2504 - intermediate_der2505) / (t937 ==
    0.0 ? 1.0E-16 : t937);
  if (intermediate_der2509 <= 0.0) {
    t743 = 0.0;
  } else {
    t743 = intermediate_der2509 >= 1.0 ? 1.0 : intermediate_der2509;
  }

  t745 = (t714 * X[0ULL] * 100.0 + X[154ULL]) - ((t733 - t731) * t743 + t731);
  t725 = (real_T)(X[15ULL] > 1.0);
  intermediate_der7059 = pmf_sqrt(X[18ULL] * X[18ULL] + 1.0);
  intermediate_der7009 = X[15ULL] - X[88ULL];
  tlu2_2d_linear_linear_value(&mb_efOut[0ULL], &t607[0ULL], &t609[0ULL], &t610
    [0ULL], &t612[0ULL], ((_NeDynamicSystem*)(LC))->mField16, &t94[0ULL], &t59
    [0ULL], &t60[0ULL]);
  t479_idx_0 = mb_efOut[0];
  t748 = t479_idx_0;
  t751 = pmf_sqrt(t479_idx_0 * 461.5);
  if (U_idx_6 <= 0.0) {
    intermediate_der7035 = 0.0;
  } else {
    intermediate_der7035 = U_idx_6 >= 1.0 ? 1.0 : U_idx_6;
  }

  t750 = intermediate_der7035 * 0.0002;
  intermediate_der7037 = X[88ULL] / (X[15ULL] == 0.0 ? 1.0E-16 : X[15ULL]);
  if (intermediate_der7037 <= 0.0) {
    intermediate_der6172 = 0.0;
  } else {
    intermediate_der6172 = intermediate_der7037 >= 1.0 ? 1.0 :
      intermediate_der7037;
  }

  intermediate_der2589 = (pmf_pow(intermediate_der6172, 1.5384615384615383) -
    pmf_pow(intermediate_der6172, 1.7692307692307689)) * 8.6666666666666661;
  if (intermediate_der2589 <= 0.0) {
    intermediate_der2591 = 0.0;
  } else {
    intermediate_der2591 = intermediate_der2589 >= 1.0E+6 ? 1.0E+6 :
      intermediate_der2589;
  }

  t754 = X[15ULL] * t750 * 0.85;
  intermediate_der7011 = t754 / (t751 == 0.0 ? 1.0E-16 : t751) * pmf_sqrt
    (intermediate_der2591);
  if (intermediate_der6172 < 0.545727733814065) {
    intermediate_der7052 = X[15ULL] * 0.85 / (t751 == 0.0 ? 1.0E-16 : t751) *
      0.667262351240862 * t750 * 100000.0;
  } else {
    intermediate_der7052 = intermediate_der7011 * 100000.0;
  }

  intermediate_der7035 = intermediate_der7009 > 0.01 ? intermediate_der7052 :
    0.0;
  t756 = fabs(intermediate_der7035);
  intermediate_der7011 = t756 / 0.5;
  intermediate_der7052 = 0.8 - (intermediate_der7011 - 0.8) *
    (intermediate_der7011 - 0.8) * 0.2;
  if (X[88ULL] <= 1.0) {
    t756 = 1.0;
  } else {
    t756 = X[88ULL] >= 1000.0 ? 1000.0 : X[88ULL];
  }

  t480[0ULL] = t756;
  tlu2_linear_linear_prelookup(&nb_efOut.mField0[0ULL], &nb_efOut.mField1[0ULL],
    &nb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t480[0ULL],
    &t59[0ULL], &t60[0ULL]);
  t17 = nb_efOut;
  tlu2_1d_linear_linear_value(&ob_efOut[0ULL], &t17.mField0[0ULL], &t17.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = ob_efOut[0];
  intermediate_der2587 = t479_idx_0;
  tlu2_1d_linear_linear_value(&pb_efOut[0ULL], &t17.mField0[0ULL], &t17.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = pb_efOut[0];
  intermediate_der2588 = t479_idx_0;
  if (intermediate_der2587 <= intermediate_der2587) {
    intermediate_der7013 = intermediate_der2587 / (intermediate_der2587 == 0.0 ?
      1.0E-16 : intermediate_der2587) - 1.0;
  } else if (intermediate_der2587 >= t479_idx_0) {
    intermediate_der7013 = (intermediate_der2587 - 4000.0) / (4000.0 -
      t479_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t479_idx_0) + 2.0;
  } else {
    t760 = t479_idx_0 - intermediate_der2587;
    intermediate_der7013 = (intermediate_der2587 - intermediate_der2587) / (t760
      == 0.0 ? 1.0E-16 : t760);
  }

  t480[0ULL] = intermediate_der7013;
  tlu2_linear_linear_prelookup(&qb_efOut.mField0[0ULL], &qb_efOut.mField1[0ULL],
    &qb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t480[0ULL],
    &t94[0ULL], &t60[0ULL]);
  t15 = qb_efOut;
  tlu2_2d_linear_linear_value(&rb_efOut[0ULL], &t15.mField0[0ULL], &t15.mField2
    [0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = rb_efOut[0];
  intermediate_der7013 = t479_idx_0;
  t757 = t479_idx_0 * t756 * 100.0 + intermediate_der2587;
  if (intermediate_der2588 <= intermediate_der2587) {
    t758 = intermediate_der2588 / (intermediate_der2587 == 0.0 ? 1.0E-16 :
      intermediate_der2587) - 1.0;
  } else if (intermediate_der2588 >= intermediate_der2588) {
    t758 = (intermediate_der2588 - 4000.0) / (4000.0 - intermediate_der2588 ==
      0.0 ? 1.0E-16 : 4000.0 - intermediate_der2588) + 2.0;
  } else {
    t764 = intermediate_der2588 - intermediate_der2587;
    t758 = (intermediate_der2588 - intermediate_der2587) / (t764 == 0.0 ?
      1.0E-16 : t764);
  }

  t480[0ULL] = t758;
  tlu2_linear_linear_prelookup(&sb_efOut.mField0[0ULL], &sb_efOut.mField1[0ULL],
    &sb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t480[0ULL],
    &t94[0ULL], &t60[0ULL]);
  t47 = sb_efOut;
  tlu2_2d_linear_linear_value(&tb_efOut[0ULL], &t47.mField0[0ULL], &t47.mField2
    [0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = tb_efOut[0];
  t758 = t479_idx_0;
  t759 = t479_idx_0 * t756 * 100.0 + intermediate_der2588;
  tlu2_2d_linear_linear_value(&ub_efOut[0ULL], &t607[0ULL], &t609[0ULL], &t610
    [0ULL], &t612[0ULL], ((_NeDynamicSystem*)(LC))->mField30, &t94[0ULL], &t59
    [0ULL], &t60[0ULL]);
  t479_idx_0 = ub_efOut[0];
  t760 = t479_idx_0;
  tlu2_2d_linear_linear_value(&vb_efOut[0ULL], &t15.mField0[0ULL], &t15.mField2
    [0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = vb_efOut[0];
  t761 = t479_idx_0;
  tlu2_2d_linear_linear_value(&wb_efOut[0ULL], &t47.mField0[0ULL], &t47.mField2
    [0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = wb_efOut[0];
  intermediate_der2646 = t479_idx_0;
  t766 = t479_idx_0 - t761;
  intermediate_der2647 = (t760 - t761) / (t766 == 0.0 ? 1.0E-16 : t766);
  if (intermediate_der2647 <= 0.0) {
    t764 = 0.0;
  } else {
    t764 = intermediate_der2647 >= 1.0 ? 1.0 : intermediate_der2647;
  }

  intermediate_der7024 = (t710 * X[15ULL] * 100.0 + X[118ULL]) - ((t759 - t757) *
    t764 + t757);
  intermediate_der7011 = (real_T)(X[88ULL] > 1.0);
  if (X[32ULL] < intermediate_der4831) {
    t765 = X[32ULL] / (intermediate_der4831 == 0.0 ? 1.0E-16 :
                       intermediate_der4831) - 1.0;
  } else {
    t765 = 0.0;
  }

  if (X[33ULL] > t695) {
    t767 = (X[33ULL] - 4000.0) / (4000.0 - t695 == 0.0 ? 1.0E-16 : 4000.0 - t695)
      + 2.0;
  } else {
    t767 = 1.0;
  }

  t480[0ULL] = t765;
  t187[0] = 25ULL;
  tlu2_linear_linear_prelookup(&xb_efOut.mField0[0ULL], &xb_efOut.mField1[0ULL],
    &xb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t480[0ULL],
    &t187[0ULL], &t60[0ULL]);
  t48 = xb_efOut;
  t622[0ULL] = t48.mField0[0ULL];
  t622[1ULL] = t48.mField0[1ULL];
  t600[0ULL] = t48.mField2[0ULL];
  tlu2_2d_linear_linear_value(&yb_efOut[0ULL], &t622[0ULL], &t600[0ULL], &t628
    [0ULL], &t630[0ULL], ((_NeDynamicSystem*)(LC))->mField31, &t187[0ULL], &t59
    [0ULL], &t60[0ULL]);
  t479_idx_0 = yb_efOut[0];
  t765 = t479_idx_0;
  t480[0ULL] = t767;
  tlu2_linear_linear_prelookup(&ac_efOut.mField0[0ULL], &ac_efOut.mField1[0ULL],
    &ac_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t480[0ULL],
    &t187[0ULL], &t60[0ULL]);
  t55 = ac_efOut;
  t625[0ULL] = t55.mField0[0ULL];
  t625[1ULL] = t55.mField0[1ULL];
  t627[0ULL] = t55.mField2[0ULL];
  tlu2_2d_linear_linear_value(&bc_efOut[0ULL], &t625[0ULL], &t627[0ULL], &t628
    [0ULL], &t630[0ULL], ((_NeDynamicSystem*)(LC))->mField32, &t187[0ULL], &t59
    [0ULL], &t60[0ULL]);
  t479_idx_0 = bc_efOut[0];
  t767 = t479_idx_0;
  if (X[160ULL] <= intermediate_der4831) {
    t768 = X[160ULL] / (intermediate_der4831 == 0.0 ? 1.0E-16 :
                        intermediate_der4831) - 1.0;
  } else if (X[160ULL] >= t695) {
    t768 = (X[160ULL] - 4000.0) / (4000.0 - t695 == 0.0 ? 1.0E-16 : 4000.0 -
      t695) + 2.0;
  } else {
    t774 = t695 - intermediate_der4831;
    t768 = (X[160ULL] - intermediate_der4831) / (t774 == 0.0 ? 1.0E-16 : t774);
  }

  t1063 = -t58[0ULL];
  t769 = -t1063;
  t480[0ULL] = t703;
  tlu2_linear_linear_prelookup(&cc_efOut.mField0[0ULL], &cc_efOut.mField1[0ULL],
    &cc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t480[0ULL],
    &t94[0ULL], &t60[0ULL]);
  t46 = cc_efOut;
  t628[0ULL] = t46.mField0[0ULL];
  t628[1ULL] = t46.mField0[1ULL];
  t603[0ULL] = t46.mField2[0ULL];
  tlu2_2d_linear_linear_value(&dc_efOut[0ULL], &t628[0ULL], &t603[0ULL], &t616
    [0ULL], &t618[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t94[0ULL], &t59
    [0ULL], &t60[0ULL]);
  t479_idx_0 = dc_efOut[0];
  t703 = t479_idx_0;
  t480[0ULL] = t706;
  tlu2_linear_linear_prelookup(&ec_efOut.mField0[0ULL], &ec_efOut.mField1[0ULL],
    &ec_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t480[0ULL],
    &t94[0ULL], &t60[0ULL]);
  t45 = ec_efOut;
  t610[0ULL] = t45.mField0[0ULL];
  t610[1ULL] = t45.mField0[1ULL];
  t597[0ULL] = t45.mField2[0ULL];
  tlu2_2d_linear_linear_value(&fc_efOut[0ULL], &t610[0ULL], &t597[0ULL], &t613
    [0ULL], &t615[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t94[0ULL], &t59
    [0ULL], &t60[0ULL]);
  t479_idx_0 = fc_efOut[0];
  t706 = t479_idx_0;
  if (t745 <= 0.0) {
    intermediate_der7031 = 0.0;
  } else {
    intermediate_der7031 = t745 >= 500.0 ? 500.0 : t745;
  }

  if (intermediate_der7024 <= 0.0) {
    t771 = 0.0;
  } else {
    t771 = intermediate_der7024 >= 500.0 ? 500.0 : intermediate_der7024;
  }

  intermediate_der6170 = ((real_T)(M[107ULL] != 0) * 2.0 - 1.0) *
    intermediate_der6170 / 0.5;
  if (t726 <= 0.0) {
    t773 = 0.0;
  } else {
    t773 = t726 >= 1.0 ? 1.0 : 0.8 - (intermediate_der6170 - 0.8) *
      (intermediate_der6170 - 0.8) * 0.2;
  }

  if (intermediate_der7043 > 0.01) {
    t774 = t725 > 0.0 ? intermediate_der7031 * t773 : 0.0;
  } else {
    t774 = 0.0;
  }

  intermediate_der7035 = ((real_T)(M[109ULL] != 0) * 2.0 - 1.0) *
    intermediate_der7035 / 0.5;
  if (intermediate_der7052 <= 0.0) {
    t1063 = 0.0;
  } else {
    t1063 = intermediate_der7052 >= 1.0 ? 1.0 : 0.8 - (intermediate_der7035 -
      0.8) * (intermediate_der7035 - 0.8) * 0.2;
  }

  if (intermediate_der7009 > 0.01) {
    t1060 = intermediate_der7011 > 0.0 ? t771 * t1063 : 0.0;
  } else {
    t1060 = 0.0;
  }

  t777 = -(((real_T)(M[110ULL] != 0) * 2.0 - 1.0) * t709 * t1060);
  tlu2_1d_linear_linear_value(&gc_efOut[0ULL], &t629[0ULL], &t630[0ULL],
    ((_NeDynamicSystem*)(LC))->mField7, &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = gc_efOut[0];
  t779 = t479_idx_0;
  tlu2_1d_linear_linear_value(&hc_efOut[0ULL], &t629[0ULL], &t630[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = hc_efOut[0];
  intermediate_der4840 = t479_idx_0;
  tlu2_1d_linear_linear_value(&ic_efOut[0ULL], &t620[0ULL], &t621[0ULL],
    ((_NeDynamicSystem*)(LC))->mField7, &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = ic_efOut[0];
  intermediate_der4847 = t479_idx_0;
  tlu2_1d_linear_linear_value(&jc_efOut[0ULL], &t620[0ULL], &t621[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = jc_efOut[0];
  if (X[74ULL] <= t698) {
    intermediate_der2290 = 1.0 / (t698 == 0.0 ? 1.0E-16 : t698);
  } else if (X[74ULL] >= intermediate_der2578) {
    intermediate_der2290 = 1.0 / (4000.0 - intermediate_der2578 == 0.0 ? 1.0E-16
      : 4000.0 - intermediate_der2578);
  } else {
    t781 = intermediate_der2578 - t698;
    intermediate_der2290 = 1.0 / (t781 == 0.0 ? 1.0E-16 : t781);
  }

  if (X[74ULL] <= t698) {
    t783 = t698 * t698;
    t780 = -X[74ULL] / (t783 == 0.0 ? 1.0E-16 : t783) * intermediate_der4847;
  } else if (X[74ULL] >= intermediate_der2578) {
    t1055 = (4000.0 - intermediate_der2578) * (4000.0 - intermediate_der2578);
    t780 = -t479_idx_0 * (-(X[74ULL] - 4000.0) / (t1055 == 0.0 ? 1.0E-16 : t1055));
  } else {
    t997 = (intermediate_der2578 - t698) * (intermediate_der2578 - t698);
    t999 = intermediate_der2578 - t698;
    t780 = (t479_idx_0 - intermediate_der4847) * (-(X[74ULL] - t698) / (t997 ==
      0.0 ? 1.0E-16 : t997)) + -intermediate_der4847 / (t999 == 0.0 ? 1.0E-16 :
      t999);
  }

  tlu2_1d_linear_linear_value(&kc_efOut[0ULL], &t617[0ULL], &t618[0ULL],
    ((_NeDynamicSystem*)(LC))->mField7, &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = kc_efOut[0];
  t698 = t479_idx_0;
  tlu2_1d_linear_linear_value(&lc_efOut[0ULL], &t617[0ULL], &t618[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = lc_efOut[0];
  if (X[89ULL] <= intermediate_der4855) {
    intermediate_der4847 = 1.0 / (intermediate_der4855 == 0.0 ? 1.0E-16 :
      intermediate_der4855);
  } else if (X[89ULL] >= t702) {
    intermediate_der4847 = 1.0 / (4000.0 - t702 == 0.0 ? 1.0E-16 : 4000.0 - t702);
  } else {
    U_idx_5 = t702 - intermediate_der4855;
    intermediate_der4847 = 1.0 / (U_idx_5 == 0.0 ? 1.0E-16 : U_idx_5);
  }

  if (X[89ULL] <= intermediate_der4855) {
    t793 = intermediate_der4855 * intermediate_der4855;
    intermediate_der4848 = -X[89ULL] / (t793 == 0.0 ? 1.0E-16 : t793) * t698;
  } else if (X[89ULL] >= t702) {
    U_idx_6 = (4000.0 - t702) * (4000.0 - t702);
    intermediate_der4848 = -t479_idx_0 * (-(X[89ULL] - 4000.0) / (U_idx_6 == 0.0
      ? 1.0E-16 : U_idx_6));
  } else {
    U_idx_6 = (t702 - intermediate_der4855) * (t702 - intermediate_der4855);
    U_idx_5 = t702 - intermediate_der4855;
    intermediate_der4848 = (t479_idx_0 - t698) * (-(X[89ULL] -
      intermediate_der4855) / (U_idx_6 == 0.0 ? 1.0E-16 : U_idx_6)) + -t698 /
      (U_idx_5 == 0.0 ? 1.0E-16 : U_idx_5);
  }

  tlu2_1d_linear_linear_value(&mc_efOut[0ULL], &t614[0ULL], &t615[0ULL],
    ((_NeDynamicSystem*)(LC))->mField7, &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = mc_efOut[0];
  t698 = t479_idx_0;
  tlu2_1d_linear_linear_value(&nc_efOut[0ULL], &t614[0ULL], &t615[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = nc_efOut[0];
  if (X[93ULL] <= t704) {
    intermediate_der4855 = 1.0 / (t704 == 0.0 ? 1.0E-16 : t704);
  } else if (X[93ULL] >= t705) {
    intermediate_der4855 = 1.0 / (4000.0 - t705 == 0.0 ? 1.0E-16 : 4000.0 - t705);
  } else {
    t888 = t705 - t704;
    intermediate_der4855 = 1.0 / (t888 == 0.0 ? 1.0E-16 : t888);
  }

  if (X[93ULL] <= t704) {
    t888 = t704 * t704;
    t702 = -X[93ULL] / (t888 == 0.0 ? 1.0E-16 : t888) * t698;
  } else if (X[93ULL] >= t705) {
    U_idx_5 = (4000.0 - t705) * (4000.0 - t705);
    t702 = -t479_idx_0 * (-(X[93ULL] - 4000.0) / (U_idx_5 == 0.0 ? 1.0E-16 :
      U_idx_5));
  } else {
    U_idx_5 = (t705 - t704) * (t705 - t704);
    U_idx_6 = t705 - t704;
    t702 = (t479_idx_0 - t698) * (-(X[93ULL] - t704) / (U_idx_5 == 0.0 ? 1.0E-16
      : U_idx_5)) + -t698 / (U_idx_6 == 0.0 ? 1.0E-16 : U_idx_6);
  }

  tlu2_1d_linear_linear_value(&oc_efOut[0ULL], &t611[0ULL], &t612[0ULL],
    ((_NeDynamicSystem*)(LC))->mField7, &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = oc_efOut[0];
  t698 = t479_idx_0;
  tlu2_1d_linear_linear_value(&pc_efOut[0ULL], &t611[0ULL], &t612[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = pc_efOut[0];
  if (X[118ULL] <= intermediate_der2092) {
    t705 = 1.0 / (intermediate_der2092 == 0.0 ? 1.0E-16 : intermediate_der2092);
  } else if (X[118ULL] >= t708) {
    t705 = 1.0 / (4000.0 - t708 == 0.0 ? 1.0E-16 : 4000.0 - t708);
  } else {
    t888 = t708 - intermediate_der2092;
    t705 = 1.0 / (t888 == 0.0 ? 1.0E-16 : t888);
  }

  if (X[118ULL] <= intermediate_der2092) {
    t888 = intermediate_der2092 * intermediate_der2092;
    t781 = -X[118ULL] / (t888 == 0.0 ? 1.0E-16 : t888) * t698;
  } else if (X[118ULL] >= t708) {
    U_idx_5 = (4000.0 - t708) * (4000.0 - t708);
    t781 = -t479_idx_0 * (-(X[118ULL] - 4000.0) / (U_idx_5 == 0.0 ? 1.0E-16 :
      U_idx_5));
  } else {
    U_idx_5 = (t708 - intermediate_der2092) * (t708 - intermediate_der2092);
    U_idx_6 = t708 - intermediate_der2092;
    t781 = (t479_idx_0 - t698) * (-(X[118ULL] - intermediate_der2092) / (U_idx_5
      == 0.0 ? 1.0E-16 : U_idx_5)) + -t698 / (U_idx_6 == 0.0 ? 1.0E-16 : U_idx_6);
  }

  tlu2_2d_linear_linear_value(&qc_efOut[0ULL], &t52.mField1[0ULL], &t52.mField2
    [0ULL], &t50.mField0[0ULL], &t50.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t58[0] = qc_efOut[0];
  t698 = t58[0ULL] * t705;
  tlu2_2d_linear_linear_value(&rc_efOut[0ULL], &t607[0ULL], &t609[0ULL], &t611
    [0ULL], &t612[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t94[0ULL], &t59
    [0ULL], &t60[0ULL]);
  t479_idx_0 = rc_efOut[0];
  intermediate_der2578 = t58[0ULL] * t781 + t479_idx_0;
  intermediate_der1723[0] = 1.0;
  intermediate_der1723[1] = 0.0;
  intermediate_der1723[2] = -1.0;
  intermediate_der1723[3] = -1.0;
  intermediate_der1723[4] = 1.0;
  intermediate_der1723[5] = 0.0;
  intermediate_der1723[6] = 0.0;
  intermediate_der1723[7] = -1.0;
  intermediate_der1723[8] = 1.0;
  tlu2_1d_linear_linear_value(&sc_efOut[0ULL], &t605[0ULL], &t606[0ULL],
    ((_NeDynamicSystem*)(LC))->mField7, &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = sc_efOut[0];
  intermediate_der2092 = t479_idx_0;
  tlu2_1d_linear_linear_value(&tc_efOut[0ULL], &t605[0ULL], &t606[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = tc_efOut[0];
  if (X[134ULL] <= t711) {
    t782 = 1.0 / (t711 == 0.0 ? 1.0E-16 : t711);
  } else if (X[134ULL] >= intermediate_der2282) {
    t782 = 1.0 / (4000.0 - intermediate_der2282 == 0.0 ? 1.0E-16 : 4000.0 -
                  intermediate_der2282);
  } else {
    t888 = intermediate_der2282 - t711;
    t782 = 1.0 / (t888 == 0.0 ? 1.0E-16 : t888);
  }

  if (X[134ULL] <= t711) {
    t888 = t711 * t711;
    t783 = -X[134ULL] / (t888 == 0.0 ? 1.0E-16 : t888) * intermediate_der2092;
  } else if (X[134ULL] >= intermediate_der2282) {
    U_idx_5 = (4000.0 - intermediate_der2282) * (4000.0 - intermediate_der2282);
    t783 = -t479_idx_0 * (-(X[134ULL] - 4000.0) / (U_idx_5 == 0.0 ? 1.0E-16 :
      U_idx_5));
  } else {
    U_idx_5 = (intermediate_der2282 - t711) * (intermediate_der2282 - t711);
    U_idx_6 = intermediate_der2282 - t711;
    t783 = (t479_idx_0 - intermediate_der2092) * (-(X[134ULL] - t711) / (U_idx_5
      == 0.0 ? 1.0E-16 : U_idx_5)) + -intermediate_der2092 / (U_idx_6 == 0.0 ?
      1.0E-16 : U_idx_6);
  }

  t711 = ((-t993 - t994 * 0.0) - t995 * 0.0) * 0.001;
  t793 = ((-(t993 * 0.0) - t994) - t995 * 0.0) * 0.001;
  t794 = ((-(t993 * 0.0) - t994 * 0.0) - t995) * 0.001;
  t480[0ULL] = intermediate_der2281;
  tlu2_linear_linear_prelookup(&uc_efOut.mField0[0ULL], &uc_efOut.mField1[0ULL],
    &uc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t480[0ULL],
    &t94[0ULL], &t60[0ULL]);
  t44 = uc_efOut;
  tlu2_2d_linear_linear_value(&vc_efOut[0ULL], &t44.mField1[0ULL], &t44.mField2
    [0ULL], &t56.mField0[0ULL], &t56.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t58[0] = vc_efOut[0];
  U_idx_6 = -(t58[0ULL] * intermediate_der2290);
  intermediate_der2281 = -U_idx_6;
  t619[0ULL] = t44.mField0[0ULL];
  t619[1ULL] = t44.mField0[1ULL];
  t624[0ULL] = t44.mField2[0ULL];
  tlu2_2d_linear_linear_value(&wc_efOut[0ULL], &t619[0ULL], &t624[0ULL], &t620
    [0ULL], &t621[0ULL], ((_NeDynamicSystem*)(LC))->mField16, &t94[0ULL], &t59
    [0ULL], &t60[0ULL]);
  t479_idx_0 = wc_efOut[0];
  U_idx_6 = -(t58[0ULL] * t780 + t479_idx_0);
  intermediate_der2282 = -U_idx_6;
  t480[0ULL] = t713;
  tlu2_linear_linear_prelookup(&xc_efOut.mField0[0ULL], &xc_efOut.mField1[0ULL],
    &xc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t480[0ULL],
    &t94[0ULL], &t60[0ULL]);
  t44 = xc_efOut;
  tlu2_2d_linear_linear_value(&yc_efOut[0ULL], &t44.mField1[0ULL], &t44.mField2
    [0ULL], &t49.mField0[0ULL], &t49.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t58[0] = yc_efOut[0];
  U_idx_6 = -(t58[0ULL] * t782);
  t713 = -U_idx_6;
  t619[0ULL] = t44.mField0[0ULL];
  t619[1ULL] = t44.mField0[1ULL];
  t624[0ULL] = t44.mField2[0ULL];
  tlu2_2d_linear_linear_value(&ad_efOut[0ULL], &t619[0ULL], &t624[0ULL], &t605
    [0ULL], &t606[0ULL], ((_NeDynamicSystem*)(LC))->mField16, &t94[0ULL], &t59
    [0ULL], &t60[0ULL]);
  t480[0] = ad_efOut[0];
  U_idx_6 = -(t58[0ULL] * t783 + t480[0ULL]);
  intermediate_der2290 = -U_idx_6;
  if (X[154ULL] <= intermediate_der4831) {
    t780 = 1.0 / (intermediate_der4831 == 0.0 ? 1.0E-16 : intermediate_der4831);
  } else if (X[154ULL] >= t695) {
    t780 = 1.0 / (4000.0 - t695 == 0.0 ? 1.0E-16 : 4000.0 - t695);
  } else {
    t888 = t695 - intermediate_der4831;
    t780 = 1.0 / (t888 == 0.0 ? 1.0E-16 : t888);
  }

  if (X[154ULL] <= intermediate_der4831) {
    t888 = intermediate_der4831 * intermediate_der4831;
    t782 = -X[154ULL] / (t888 == 0.0 ? 1.0E-16 : t888) * t779;
  } else if (X[154ULL] >= t695) {
    U_idx_5 = (4000.0 - t695) * (4000.0 - t695);
    t782 = -intermediate_der4840 * (-(X[154ULL] - 4000.0) / (U_idx_5 == 0.0 ?
      1.0E-16 : U_idx_5));
  } else {
    U_idx_5 = (t695 - intermediate_der4831) * (t695 - intermediate_der4831);
    U_idx_6 = t695 - intermediate_der4831;
    t782 = (intermediate_der4840 - t779) * (-(X[154ULL] - intermediate_der4831) /
      (U_idx_5 == 0.0 ? 1.0E-16 : U_idx_5)) + -t779 / (U_idx_6 == 0.0 ? 1.0E-16 :
      U_idx_6);
  }

  tlu2_2d_linear_linear_value(&bd_efOut[0ULL], &t54.mField1[0ULL], &t54.mField2
    [0ULL], &t57.mField0[0ULL], &t57.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t485[0] = bd_efOut[0];
  t783 = t485[0ULL] * t780;
  tlu2_2d_linear_linear_value(&cd_efOut[0ULL], &t54.mField0[0ULL], &t54.mField2
    [0ULL], &t57.mField1[0ULL], &t57.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t408[0] = cd_efOut[0];
  intermediate_der2092 = t485[0ULL] * t782 + t408[0ULL];
  tlu2_2d_linear_linear_value(&dd_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], &t629[0ULL], &t630[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t94
    [0ULL], &t59[0ULL], &t60[0ULL]);
  t480[0] = dd_efOut[0];
  U_idx_6 = -t480[0ULL];
  t1055 = -U_idx_6;
  U_idx_6 = intermediate_der2420 * intermediate_der2420;
  intermediate_der2420 = -1.0 / (U_idx_6 == 0.0 ? 1.0E-16 : U_idx_6) * t1055;
  tlu2_2d_linear_linear_value(&ed_efOut[0ULL], &t31.mField0[0ULL], &t31.mField2
    [0ULL], &t629[0ULL], &t630[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t94
    [0ULL], &t59[0ULL], &t60[0ULL]);
  t480[0] = ed_efOut[0];
  U_idx_6 = -t480[0ULL];
  t1055 = -U_idx_6;
  U_idx_6 = t716 * t716;
  t716 = -1.0 / (U_idx_6 == 0.0 ? 1.0E-16 : U_idx_6) * t1055;
  tlu2_2d_linear_linear_value(&fd_efOut[0ULL], &t54.mField1[0ULL], &t54.mField2
    [0ULL], &t57.mField0[0ULL], &t57.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t405[0] = fd_efOut[0];
  t1055 = t405[0ULL] * t780;
  tlu2_2d_linear_linear_value(&gd_efOut[0ULL], &t54.mField0[0ULL], &t54.mField2
    [0ULL], &t57.mField1[0ULL], &t57.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t487[0] = gd_efOut[0];
  t708 = t405[0ULL] * t782 + t487[0ULL];
  U_idx_5 = pmf_sqrt(t718 * 461.5) * 2.0;
  U_idx_6 = -(X[0ULL] * 0.85);
  t888 = pmf_sqrt(t718 * 461.5) * pmf_sqrt(t718 * 461.5);
  t994 = intermediate_der6164 * ((U_idx_6 / (t888 == 0.0 ? 1.0E-16 : t888) *
    (1.0 / (U_idx_5 == 0.0 ? 1.0E-16 : U_idx_5)) * t708 * 461.5 + 0.85 / (t944 ==
    0.0 ? 1.0E-16 : t944)) * 0.667262351240862);
  t718 = intermediate_der6164 * (U_idx_6 / (t888 == 0.0 ? 1.0E-16 : t888) * (1.0
    / (U_idx_5 == 0.0 ? 1.0E-16 : U_idx_5)) * t1055 * 307.94157509765779);
  U_idx_6 = X[0ULL] * X[0ULL];
  if (intermediate_der7014 <= 0.0) {
    t704 = 0.0;
  } else {
    t704 = intermediate_der7014 >= 1.0 ? 0.0 : 1.0 / (X[0ULL] == 0.0 ? 1.0E-16 :
      X[0ULL]);
  }

  if (intermediate_der7014 <= 0.0) {
    t993 = 0.0;
  } else {
    t993 = intermediate_der7014 >= 1.0 ? 0.0 : -X[15ULL] / (U_idx_6 == 0.0 ?
      1.0E-16 : U_idx_6);
  }

  intermediate_der7014 = (pmf_pow(t722, 0.53846153846153832) * t704 *
    1.5384615384615383 - pmf_pow(t722, 0.76923076923076894) * t704 *
    1.7692307692307689) * 8.6666666666666661;
  t995 = (pmf_pow(t722, 0.53846153846153832) * t993 * 1.5384615384615383 -
          pmf_pow(t722, 0.76923076923076894) * t993 * 1.7692307692307689) *
    8.6666666666666661;
  if (t723 <= 0.0) {
    t997 = 0.0;
  } else {
    t997 = t723 >= 1.0E+6 ? 0.0 : intermediate_der7014;
  }

  if (t723 <= 0.0) {
    intermediate_der7014 = 0.0;
  } else {
    intermediate_der7014 = t723 >= 1.0E+6 ? 0.0 : t995;
  }

  U_idx_6 = -(intermediate_der6164 * X[0ULL] * 0.85);
  t723 = U_idx_6 / (t888 == 0.0 ? 1.0E-16 : t888) * (1.0 / (U_idx_5 == 0.0 ?
    1.0E-16 : U_idx_5)) * pmf_sqrt(t724) * t1055 * 461.5;
  t999 = pmf_sqrt(t724) * 2.0;
  intermediate_der6164 = (U_idx_6 / (t888 == 0.0 ? 1.0E-16 : t888) * (1.0 /
    (U_idx_5 == 0.0 ? 1.0E-16 : U_idx_5)) * t708 * 461.5 + intermediate_der6164 *
    0.85 / (t944 == 0.0 ? 1.0E-16 : t944)) * pmf_sqrt(t724) + t936 / (t944 ==
    0.0 ? 1.0E-16 : t944) * (1.0 / (t999 == 0.0 ? 1.0E-16 : t999)) *
    intermediate_der7014;
  if (t722 < 0.545727733814065) {
    t724 = t718 * 100000.0;
  } else {
    t724 = t723 * 100000.0;
  }

  if (t722 < 0.545727733814065) {
    t718 = t994 * 100000.0;
  } else {
    t718 = intermediate_der6164 * 100000.0;
  }

  if (t722 < 0.545727733814065) {
    intermediate_der6164 = 0.0;
  } else {
    intermediate_der6164 = t936 / (t944 == 0.0 ? 1.0E-16 : t944) * (1.0 / (t999 ==
      0.0 ? 1.0E-16 : t999)) * t997 * 100000.0;
  }

  intermediate_der7014 = intermediate_der7043 > 0.01 ? intermediate_der6164 :
    0.0;
  intermediate_der6164 = intermediate_der7043 > 0.01 ? t718 : 0.0;
  t718 = intermediate_der7043 > 0.01 ? t724 : 0.0;
  t722 = X[0ULL] * t783 * 100.0 + 1.0;
  t723 = (X[0ULL] * intermediate_der2092 + t714) * 100.0;
  if (X[15ULL] <= 1.0) {
    t714 = 0.0;
  } else {
    t714 = (real_T)!(X[15ULL] >= 1000.0);
  }

  tlu2_1d_linear_linear_value(&hd_efOut[0ULL], &t24.mField1[0ULL], &t24.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t59[0ULL], &t60[0ULL]);
  t480[0] = hd_efOut[0];
  t724 = t480[0ULL] * t714;
  tlu2_1d_linear_linear_value(&id_efOut[0ULL], &t24.mField1[0ULL], &t24.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t59[0ULL], &t60[0ULL]);
  t480[0] = id_efOut[0];
  t783 = t480[0ULL] * t714;
  if (t728 <= t728) {
    t999 = t728 * t728;
    intermediate_der2092 = -t728 / (t999 == 0.0 ? 1.0E-16 : t999) * t724 + t724 /
      (t728 == 0.0 ? 1.0E-16 : t728);
  } else if (t728 >= t729) {
    t936 = (4000.0 - t729) * (4000.0 - t729);
    intermediate_der2092 = -t783 * (-(t728 - 4000.0) / (t936 == 0.0 ? 1.0E-16 :
      t936)) + t724 / (4000.0 - t729 == 0.0 ? 1.0E-16 : 4000.0 - t729);
  } else {
    U_idx_6 = (t729 - t728) * (t729 - t728);
    U_idx_5 = t729 - t728;
    intermediate_der2092 = (t783 - t724) * (-(t728 - t728) / (U_idx_6 == 0.0 ?
      1.0E-16 : U_idx_6)) + (t724 - t724) / (U_idx_5 == 0.0 ? 1.0E-16 : U_idx_5);
  }

  tlu2_2d_linear_linear_value(&jd_efOut[0ULL], &t21.mField1[0ULL], &t21.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t480[0] = jd_efOut[0];
  tlu2_2d_linear_linear_value(&kd_efOut[0ULL], &t21.mField0[0ULL], &t21.mField2
    [0ULL], &t24.mField1[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = kd_efOut[0];
  t994 = t480[0ULL] * intermediate_der2092 + t479_idx_0 * t714;
  t995 = (intermediate_der2501 * t714 + t994 * t727) * 100.0 + t724;
  if (t729 <= t728) {
    t999 = t728 * t728;
    intermediate_der2501 = -t729 / (t999 == 0.0 ? 1.0E-16 : t999) * t724 + t783 /
      (t728 == 0.0 ? 1.0E-16 : t728);
  } else if (t729 >= t729) {
    t936 = (4000.0 - t729) * (4000.0 - t729);
    intermediate_der2501 = -t783 * (-(t729 - 4000.0) / (t936 == 0.0 ? 1.0E-16 :
      t936)) + t783 / (4000.0 - t729 == 0.0 ? 1.0E-16 : 4000.0 - t729);
  } else {
    U_idx_6 = (t729 - t728) * (t729 - t728);
    U_idx_5 = t729 - t728;
    intermediate_der2501 = (t783 - t724) * (-(t729 - t728) / (U_idx_6 == 0.0 ?
      1.0E-16 : U_idx_6)) + (t783 - t724) / (U_idx_5 == 0.0 ? 1.0E-16 : U_idx_5);
  }

  tlu2_2d_linear_linear_value(&ld_efOut[0ULL], &t19.mField1[0ULL], &t19.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t480[0] = ld_efOut[0];
  tlu2_2d_linear_linear_value(&md_efOut[0ULL], &t19.mField0[0ULL], &t19.mField2
    [0ULL], &t24.mField1[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = md_efOut[0];
  t724 = t480[0ULL] * intermediate_der2501 + t479_idx_0 * t714;
  t728 = (intermediate_der2490 * t714 + t724 * t727) * 100.0 + t783;
  tlu2_2d_linear_linear_value(&nd_efOut[0ULL], &t54.mField1[0ULL], &t54.mField2
    [0ULL], &t57.mField0[0ULL], &t57.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t407[0] = nd_efOut[0];
  t724 = t407[0ULL] * t780;
  tlu2_2d_linear_linear_value(&od_efOut[0ULL], &t54.mField0[0ULL], &t54.mField2
    [0ULL], &t57.mField1[0ULL], &t57.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t106[0] = od_efOut[0];
  t727 = t407[0ULL] * t782 + t106[0ULL];
  tlu2_2d_linear_linear_value(&pd_efOut[0ULL], &t21.mField1[0ULL], &t21.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t480[0] = pd_efOut[0];
  tlu2_2d_linear_linear_value(&qd_efOut[0ULL], &t21.mField0[0ULL], &t21.mField2
    [0ULL], &t24.mField1[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = qd_efOut[0];
  t729 = t480[0ULL] * intermediate_der2092 + t479_idx_0 * t714;
  tlu2_2d_linear_linear_value(&rd_efOut[0ULL], &t19.mField1[0ULL], &t19.mField2
    [0ULL], &t24.mField0[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t480[0] = rd_efOut[0];
  tlu2_2d_linear_linear_value(&sd_efOut[0ULL], &t19.mField0[0ULL], &t19.mField2
    [0ULL], &t24.mField1[0ULL], &t24.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = sd_efOut[0];
  intermediate_der2490 = t480[0ULL] * intermediate_der2501 + t479_idx_0 * t714;
  t999 = (t741 - intermediate_der2505) * (t741 - intermediate_der2505);
  intermediate_der2504 = (intermediate_der2490 - t729) * (-(intermediate_der2504
    - intermediate_der2505) / (t999 == 0.0 ? 1.0E-16 : t999)) + -t729 / (t937 ==
    0.0 ? 1.0E-16 : t937);
  if (intermediate_der2509 <= 0.0) {
    t729 = 0.0;
  } else {
    t729 = intermediate_der2509 >= 1.0 ? 0.0 : t727 / (t937 == 0.0 ? 1.0E-16 :
      t937);
  }

  if (intermediate_der2509 <= 0.0) {
    t714 = 0.0;
  } else {
    t714 = intermediate_der2509 >= 1.0 ? 0.0 : t724 / (t937 == 0.0 ? 1.0E-16 :
      t937);
  }

  if (intermediate_der2509 <= 0.0) {
    intermediate_der2501 = 0.0;
  } else {
    intermediate_der2501 = intermediate_der2509 >= 1.0 ? 0.0 :
      intermediate_der2504;
  }

  intermediate_der2490 = ((t733 - t731) * intermediate_der2501 + (t728 - t995) *
    t743) + t995;
  t728 = (t733 - t731) * t714;
  intermediate_der2504 = (t733 - t731) * t729;
  t731 = t723 - intermediate_der2504;
  t723 = t722 - t728;
  t722 = -intermediate_der2490;
  t733 = intermediate_der2504;
  intermediate_der2504 = t1055;
  intermediate_der2505 = t708;
  t741 = t704;
  intermediate_der2509 = t993;
  t704 = pmf_sqrt(X[18ULL] * X[18ULL] + 1.0) * 2.0;
  t783 = (X[18ULL] + X[18ULL]) * (1.0 / (t704 == 0.0 ? 1.0E-16 : t704));
  tlu2_2d_linear_linear_value(&td_efOut[0ULL], &t52.mField1[0ULL], &t52.mField2
    [0ULL], &t50.mField0[0ULL], &t50.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t58[0] = td_efOut[0];
  U_idx_6 = t58[0ULL] * t705;
  tlu2_2d_linear_linear_value(&ud_efOut[0ULL], &t607[0ULL], &t609[0ULL], &t611
    [0ULL], &t612[0ULL], ((_NeDynamicSystem*)(LC))->mField16, &t94[0ULL], &t59
    [0ULL], &t60[0ULL]);
  t480[0] = ud_efOut[0];
  intermediate_der2092 = t58[0ULL] * t781 + t480[0ULL];
  t704 = pmf_sqrt(t748 * 461.5) * 2.0;
  U_idx_5 = -(X[15ULL] * 0.85);
  t999 = pmf_sqrt(t748 * 461.5) * pmf_sqrt(t748 * 461.5);
  t708 = t750 * ((U_idx_5 / (t999 == 0.0 ? 1.0E-16 : t999) * (1.0 / (t704 == 0.0
    ? 1.0E-16 : t704)) * intermediate_der2092 * 461.5 + 0.85 / (t751 == 0.0 ?
    1.0E-16 : t751)) * 0.667262351240862);
  t748 = t750 * (U_idx_5 / (t999 == 0.0 ? 1.0E-16 : t999) * (1.0 / (t704 == 0.0 ?
    1.0E-16 : t704)) * U_idx_6 * 307.94157509765779);
  t944 = X[15ULL] * X[15ULL];
  if (intermediate_der7037 <= 0.0) {
    t994 = 0.0;
  } else {
    t994 = intermediate_der7037 >= 1.0 ? 0.0 : 1.0 / (X[15ULL] == 0.0 ? 1.0E-16 :
      X[15ULL]);
  }

  if (intermediate_der7037 <= 0.0) {
    t1055 = 0.0;
  } else {
    t1055 = intermediate_der7037 >= 1.0 ? 0.0 : -X[88ULL] / (t944 == 0.0 ?
      1.0E-16 : t944);
  }

  intermediate_der7037 = (pmf_pow(intermediate_der6172, 0.53846153846153832) *
    t994 * 1.5384615384615383 - pmf_pow(intermediate_der6172,
    0.76923076923076894) * t994 * 1.7692307692307689) * 8.6666666666666661;
  t993 = (pmf_pow(intermediate_der6172, 0.53846153846153832) * t1055 *
          1.5384615384615383 - pmf_pow(intermediate_der6172, 0.76923076923076894)
          * t1055 * 1.7692307692307689) * 8.6666666666666661;
  if (intermediate_der2589 <= 0.0) {
    t995 = 0.0;
  } else {
    t995 = intermediate_der2589 >= 1.0E+6 ? 0.0 : intermediate_der7037;
  }

  if (intermediate_der2589 <= 0.0) {
    intermediate_der7037 = 0.0;
  } else {
    intermediate_der7037 = intermediate_der2589 >= 1.0E+6 ? 0.0 : t993;
  }

  U_idx_5 = -(X[15ULL] * t750 * 0.85);
  intermediate_der2589 = U_idx_5 / (t999 == 0.0 ? 1.0E-16 : t999) * (1.0 / (t704
    == 0.0 ? 1.0E-16 : t704)) * pmf_sqrt(intermediate_der2591) * U_idx_6 * 461.5;
  t997 = pmf_sqrt(intermediate_der2591) * 2.0;
  t750 = (U_idx_5 / (t999 == 0.0 ? 1.0E-16 : t999) * (1.0 / (t704 == 0.0 ?
            1.0E-16 : t704)) * intermediate_der2092 * 461.5 + t750 * 0.85 /
          (t751 == 0.0 ? 1.0E-16 : t751)) * pmf_sqrt(intermediate_der2591) +
    t754 / (t751 == 0.0 ? 1.0E-16 : t751) * (1.0 / (t997 == 0.0 ? 1.0E-16 : t997))
    * intermediate_der7037;
  if (intermediate_der6172 < 0.545727733814065) {
    intermediate_der2591 = t748 * 100000.0;
  } else {
    intermediate_der2591 = intermediate_der2589 * 100000.0;
  }

  if (intermediate_der6172 < 0.545727733814065) {
    t748 = t708 * 100000.0;
  } else {
    t748 = t750 * 100000.0;
  }

  if (intermediate_der6172 < 0.545727733814065) {
    t750 = 0.0;
  } else {
    t750 = t754 / (t751 == 0.0 ? 1.0E-16 : t751) * (1.0 / (t997 == 0.0 ? 1.0E-16
      : t997)) * t995 * 100000.0;
  }

  intermediate_der7037 = intermediate_der7009 > 0.01 ? t750 : 0.0;
  t750 = intermediate_der7009 > 0.01 ? t748 : 0.0;
  t748 = intermediate_der7009 > 0.01 ? intermediate_der2591 : 0.0;
  intermediate_der6172 = X[15ULL] * t698 * 100.0 + 1.0;
  t698 = (X[15ULL] * intermediate_der2578 + t710) * 100.0;
  if (X[88ULL] <= 1.0) {
    intermediate_der2578 = 0.0;
  } else {
    intermediate_der2578 = (real_T)!(X[88ULL] >= 1000.0);
  }

  tlu2_1d_linear_linear_value(&vd_efOut[0ULL], &t17.mField1[0ULL], &t17.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t59[0ULL], &t60[0ULL]);
  t480[0] = vd_efOut[0];
  t710 = t480[0ULL] * intermediate_der2578;
  tlu2_1d_linear_linear_value(&wd_efOut[0ULL], &t17.mField1[0ULL], &t17.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t59[0ULL], &t60[0ULL]);
  t480[0] = wd_efOut[0];
  intermediate_der2589 = t480[0ULL] * intermediate_der2578;
  if (intermediate_der2587 <= intermediate_der2587) {
    t704 = intermediate_der2587 * intermediate_der2587;
    intermediate_der2591 = -intermediate_der2587 / (t704 == 0.0 ? 1.0E-16 : t704)
      * t710 + t710 / (intermediate_der2587 == 0.0 ? 1.0E-16 :
                       intermediate_der2587);
  } else if (intermediate_der2587 >= intermediate_der2588) {
    U_idx_5 = (4000.0 - intermediate_der2588) * (4000.0 - intermediate_der2588);
    intermediate_der2591 = -intermediate_der2589 * (-(intermediate_der2587 -
      4000.0) / (U_idx_5 == 0.0 ? 1.0E-16 : U_idx_5)) + t710 / (4000.0 -
      intermediate_der2588 == 0.0 ? 1.0E-16 : 4000.0 - intermediate_der2588);
  } else {
    U_idx_5 = (intermediate_der2588 - intermediate_der2587) *
      (intermediate_der2588 - intermediate_der2587);
    t937 = intermediate_der2588 - intermediate_der2587;
    intermediate_der2591 = (intermediate_der2589 - t710) *
      (-(intermediate_der2587 - intermediate_der2587) / (U_idx_5 == 0.0 ?
        1.0E-16 : U_idx_5)) + (t710 - t710) / (t937 == 0.0 ? 1.0E-16 : t937);
  }

  tlu2_2d_linear_linear_value(&xd_efOut[0ULL], &t15.mField1[0ULL], &t15.mField2
    [0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t480[0] = xd_efOut[0];
  tlu2_2d_linear_linear_value(&yd_efOut[0ULL], &t15.mField0[0ULL], &t15.mField2
    [0ULL], &t17.mField1[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = yd_efOut[0];
  t708 = t480[0ULL] * intermediate_der2591 + t479_idx_0 * intermediate_der2578;
  t993 = (intermediate_der7013 * intermediate_der2578 + t708 * t756) * 100.0 +
    t710;
  if (intermediate_der2588 <= intermediate_der2587) {
    t995 = intermediate_der2587 * intermediate_der2587;
    intermediate_der7013 = -intermediate_der2588 / (t995 == 0.0 ? 1.0E-16 : t995)
      * t710 + intermediate_der2589 / (intermediate_der2587 == 0.0 ? 1.0E-16 :
      intermediate_der2587);
  } else if (intermediate_der2588 >= intermediate_der2588) {
    t997 = (4000.0 - intermediate_der2588) * (4000.0 - intermediate_der2588);
    intermediate_der7013 = -intermediate_der2589 * (-(intermediate_der2588 -
      4000.0) / (t997 == 0.0 ? 1.0E-16 : t997)) + intermediate_der2589 / (4000.0
      - intermediate_der2588 == 0.0 ? 1.0E-16 : 4000.0 - intermediate_der2588);
  } else {
    t944 = (intermediate_der2588 - intermediate_der2587) * (intermediate_der2588
      - intermediate_der2587);
    t936 = intermediate_der2588 - intermediate_der2587;
    intermediate_der7013 = (intermediate_der2589 - t710) *
      (-(intermediate_der2588 - intermediate_der2587) / (t944 == 0.0 ? 1.0E-16 :
        t944)) + (intermediate_der2589 - t710) / (t936 == 0.0 ? 1.0E-16 : t936);
  }

  tlu2_2d_linear_linear_value(&ae_efOut[0ULL], &t47.mField1[0ULL], &t47.mField2
    [0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t480[0] = ae_efOut[0];
  tlu2_2d_linear_linear_value(&be_efOut[0ULL], &t47.mField0[0ULL], &t47.mField2
    [0ULL], &t17.mField1[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = be_efOut[0];
  t710 = t480[0ULL] * intermediate_der7013 + t479_idx_0 * intermediate_der2578;
  intermediate_der2587 = (t758 * intermediate_der2578 + t710 * t756) * 100.0 +
    intermediate_der2589;
  tlu2_2d_linear_linear_value(&ce_efOut[0ULL], &t52.mField1[0ULL], &t52.mField2
    [0ULL], &t50.mField0[0ULL], &t50.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t482[0] = ce_efOut[0];
  t710 = t482[0ULL] * t705;
  tlu2_2d_linear_linear_value(&de_efOut[0ULL], &t607[0ULL], &t609[0ULL], &t611
    [0ULL], &t612[0ULL], ((_NeDynamicSystem*)(LC))->mField30, &t94[0ULL], &t59
    [0ULL], &t60[0ULL]);
  t480[0] = de_efOut[0];
  t705 = t482[0ULL] * t781 + t480[0ULL];
  tlu2_2d_linear_linear_value(&ee_efOut[0ULL], &t15.mField1[0ULL], &t15.mField2
    [0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t480[0] = ee_efOut[0];
  tlu2_2d_linear_linear_value(&fe_efOut[0ULL], &t15.mField0[0ULL], &t15.mField2
    [0ULL], &t17.mField1[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = fe_efOut[0];
  intermediate_der2589 = t480[0ULL] * intermediate_der2591 + t479_idx_0 *
    intermediate_der2578;
  tlu2_2d_linear_linear_value(&ge_efOut[0ULL], &t47.mField1[0ULL], &t47.mField2
    [0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t480[0] = ge_efOut[0];
  tlu2_2d_linear_linear_value(&he_efOut[0ULL], &t47.mField0[0ULL], &t47.mField2
    [0ULL], &t17.mField1[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t479_idx_0 = he_efOut[0];
  intermediate_der2591 = t480[0ULL] * intermediate_der7013 + t479_idx_0 *
    intermediate_der2578;
  t995 = (intermediate_der2646 - t761) * (intermediate_der2646 - t761);
  intermediate_der2588 = (intermediate_der2591 - intermediate_der2589) * (-(t760
    - t761) / (t995 == 0.0 ? 1.0E-16 : t995)) + -intermediate_der2589 / (t766 ==
    0.0 ? 1.0E-16 : t766);
  if (intermediate_der2647 <= 0.0) {
    intermediate_der2589 = 0.0;
  } else {
    intermediate_der2589 = intermediate_der2647 >= 1.0 ? 0.0 : t705 / (t766 ==
      0.0 ? 1.0E-16 : t766);
  }

  if (intermediate_der2647 <= 0.0) {
    intermediate_der2578 = 0.0;
  } else {
    intermediate_der2578 = intermediate_der2647 >= 1.0 ? 0.0 : t710 / (t766 ==
      0.0 ? 1.0E-16 : t766);
  }

  if (intermediate_der2647 <= 0.0) {
    intermediate_der2591 = 0.0;
  } else {
    intermediate_der2591 = intermediate_der2647 >= 1.0 ? 0.0 :
      intermediate_der2588;
  }

  t756 = ((t759 - t757) * intermediate_der2591 + (intermediate_der2587 - t993) *
          t764) + t993;
  intermediate_der2587 = (t759 - t757) * intermediate_der2578;
  intermediate_der2588 = (t759 - t757) * intermediate_der2589;
  intermediate_der7013 = t698 - intermediate_der2588;
  t698 = intermediate_der6172 - intermediate_der2587;
  intermediate_der6172 = -t756;
  t757 = intermediate_der2092;
  t758 = t994;
  t759 = t1055;
  if (X[32ULL] < intermediate_der4831) {
    t760 = 1.0 / (intermediate_der4831 == 0.0 ? 1.0E-16 : intermediate_der4831);
  } else {
    t760 = 0.0;
  }

  if (X[32ULL] < intermediate_der4831) {
    t993 = intermediate_der4831 * intermediate_der4831;
    t761 = -X[32ULL] / (t993 == 0.0 ? 1.0E-16 : t993) * t779;
  } else {
    t761 = 0.0;
  }

  if (X[33ULL] > t695) {
    t993 = (4000.0 - t695) * (4000.0 - t695);
    intermediate_der2646 = -intermediate_der4840 * (-(X[33ULL] - 4000.0) / (t993
      == 0.0 ? 1.0E-16 : t993));
  } else {
    intermediate_der2646 = 0.0;
  }

  if (X[33ULL] > t695) {
    intermediate_der2647 = 1.0 / (4000.0 - t695 == 0.0 ? 1.0E-16 : 4000.0 - t695);
  } else {
    intermediate_der2647 = 0.0;
  }

  tlu2_2d_linear_linear_value(&ie_efOut[0ULL], &t48.mField1[0ULL], &t48.mField2
    [0ULL], &t57.mField0[0ULL], &t57.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField31, &t187[0ULL], &t59[0ULL], &t60[0ULL]);
  t482[0] = ie_efOut[0];
  t764 = t482[0ULL] * t760;
  tlu2_2d_linear_linear_value(&je_efOut[0ULL], &t622[0ULL], &t600[0ULL], &t629
    [0ULL], &t630[0ULL], ((_NeDynamicSystem*)(LC))->mField31, &t187[0ULL], &t59
    [0ULL], &t60[0ULL]);
  t480[0] = je_efOut[0];
  t760 = t482[0ULL] * t761 + t480[0ULL];
  tlu2_2d_linear_linear_value(&ke_efOut[0ULL], &t55.mField1[0ULL], &t55.mField2
    [0ULL], &t57.mField0[0ULL], &t57.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField32, &t187[0ULL], &t59[0ULL], &t60[0ULL]);
  t482[0] = ke_efOut[0];
  tlu2_2d_linear_linear_value(&le_efOut[0ULL], &t625[0ULL], &t627[0ULL], &t629
    [0ULL], &t630[0ULL], ((_NeDynamicSystem*)(LC))->mField32, &t187[0ULL], &t59
    [0ULL], &t60[0ULL]);
  t480[0] = le_efOut[0];
  t761 = t482[0ULL] * intermediate_der2646 + t480[0ULL];
  intermediate_der2646 = t482[0ULL] * intermediate_der2647;
  t708 = -(X[34ULL] * t765);
  t993 = (X[34ULL] * t765 + X[35ULL] * t767) * (X[34ULL] * t765 + X[35ULL] *
    t767);
  t994 = X[34ULL] * t765 + X[35ULL] * t767;
  intermediate_der2647 = t708 / (t993 == 0.0 ? 1.0E-16 : t993) * t765 + t765 /
    (t994 == 0.0 ? 1.0E-16 : t994);
  t765 = t708 / (t993 == 0.0 ? 1.0E-16 : t993) * X[34ULL] * t764 + X[34ULL] *
    t764 / (t994 == 0.0 ? 1.0E-16 : t994);
  t764 = (X[34ULL] * t760 + X[35ULL] * t761) * (t708 / (t993 == 0.0 ? 1.0E-16 :
    t993)) + X[34ULL] * t760 / (t994 == 0.0 ? 1.0E-16 : t994);
  t761 = t708 / (t993 == 0.0 ? 1.0E-16 : t993) * X[35ULL] * intermediate_der2646;
  intermediate_der2646 = intermediate_der2647;
  intermediate_der2647 = t765;
  t760 = t708 / (t993 == 0.0 ? 1.0E-16 : t993) * t767;
  if (X[160ULL] <= intermediate_der4831) {
    t765 = 1.0 / (intermediate_der4831 == 0.0 ? 1.0E-16 : intermediate_der4831);
  } else if (X[160ULL] >= t695) {
    t765 = 1.0 / (4000.0 - t695 == 0.0 ? 1.0E-16 : 4000.0 - t695);
  } else {
    t993 = t695 - intermediate_der4831;
    t765 = 1.0 / (t993 == 0.0 ? 1.0E-16 : t993);
  }

  if (X[160ULL] <= intermediate_der4831) {
    t993 = intermediate_der4831 * intermediate_der4831;
    t767 = -X[160ULL] / (t993 == 0.0 ? 1.0E-16 : t993) * t779;
  } else if (X[160ULL] >= t695) {
    t995 = (4000.0 - t695) * (4000.0 - t695);
    t767 = -intermediate_der4840 * (-(X[160ULL] - 4000.0) / (t995 == 0.0 ?
      1.0E-16 : t995));
  } else {
    t997 = (t695 - intermediate_der4831) * (t695 - intermediate_der4831);
    t999 = t695 - intermediate_der4831;
    t767 = (intermediate_der4840 - t779) * (-(X[160ULL] - intermediate_der4831) /
      (t997 == 0.0 ? 1.0E-16 : t997)) + -t779 / (t999 == 0.0 ? 1.0E-16 : t999);
  }

  intermediate_der4777[0] = 0.0;
  intermediate_der4777[1] = 0.0;
  intermediate_der4777[2] = 1.0;
  intermediate_der4777[3] = 0.0;
  intermediate_der4777[4] = 0.0;
  intermediate_der4777[5] = 0.0;
  intermediate_der4777[6] = 0.0;
  intermediate_der4777[7] = 0.0;
  intermediate_der4777[8] = 0.0;
  intermediate_der4777[9] = 0.0;
  intermediate_der4777[10] = 0.0;
  for (t536 = 0ULL; t536 < 11ULL; t536++) {
    intermediate_der4778[t536] = intermediate_der4777[t536];
  }

  t482[0ULL] = t768;
  tlu2_linear_linear_prelookup(&me_efOut.mField0[0ULL], &me_efOut.mField1[0ULL],
    &me_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t482[0ULL],
    &t94[0ULL], &t60[0ULL]);
  t47 = me_efOut;
  tlu2_2d_linear_linear_value(&ne_efOut[0ULL], &t47.mField1[0ULL], &t47.mField2
    [0ULL], &t57.mField0[0ULL], &t57.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t58[0] = ne_efOut[0];
  t708 = -(t58[0ULL] * t765);
  intermediate_der4831 = -t708;
  t619[0ULL] = t47.mField0[0ULL];
  t619[1ULL] = t47.mField0[1ULL];
  t624[0ULL] = t47.mField2[0ULL];
  tlu2_2d_linear_linear_value(&oe_efOut[0ULL], &t619[0ULL], &t624[0ULL], &t629
    [0ULL], &t630[0ULL], ((_NeDynamicSystem*)(LC))->mField16, &t94[0ULL], &t59
    [0ULL], &t60[0ULL]);
  t482[0] = oe_efOut[0];
  t708 = -(t58[0ULL] * t767 + t482[0ULL]);
  t695 = -t708;
  t708 = -(t485[0ULL] * t780);
  t765 = -t708;
  t708 = -(t485[0ULL] * t782 + t408[0ULL]);
  t765 = X[0ULL] * t765 * 100.0 + 1.0;
  t767 = (X[0ULL] * -t708 + t769) * 100.0;
  t708 = -(t407[0ULL] * t780);
  t768 = -t708;
  t708 = -(t407[0ULL] * t782 + t106[0ULL]);
  t769 = -t708;
  t708 = -(t405[0ULL] * t780);
  t779 = -t708;
  t708 = -(t405[0ULL] * t782 + t487[0ULL]);
  intermediate_der4840 = -t708;
  tlu2_2d_linear_linear_value(&pe_efOut[0ULL], &t46.mField1[0ULL], &t46.mField2
    [0ULL], &t53.mField0[0ULL], &t53.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t485[0] = pe_efOut[0];
  t708 = -(t485[0ULL] * intermediate_der4847);
  t780 = -t708;
  tlu2_2d_linear_linear_value(&qe_efOut[0ULL], &t628[0ULL], &t603[0ULL], &t617
    [0ULL], &t618[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t94[0ULL], &t59
    [0ULL], &t60[0ULL]);
  t482[0] = qe_efOut[0];
  t708 = -(t485[0ULL] * intermediate_der4848 + t482[0ULL]);
  t780 = X[88ULL] * t780 * 100.0 + 1.0;
  t703 = (X[88ULL] * -t708 + t703) * 100.0;
  tlu2_2d_linear_linear_value(&re_efOut[0ULL], &t46.mField1[0ULL], &t46.mField2
    [0ULL], &t53.mField0[0ULL], &t53.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t487[0] = re_efOut[0];
  t708 = -(t487[0ULL] * intermediate_der4847);
  t781 = -t708;
  tlu2_2d_linear_linear_value(&se_efOut[0ULL], &t628[0ULL], &t603[0ULL], &t617
    [0ULL], &t618[0ULL], ((_NeDynamicSystem*)(LC))->mField30, &t94[0ULL], &t59
    [0ULL], &t60[0ULL]);
  t485[0] = se_efOut[0];
  t708 = -(t487[0ULL] * intermediate_der4848 + t485[0ULL]);
  t782 = -t708;
  tlu2_2d_linear_linear_value(&te_efOut[0ULL], &t46.mField1[0ULL], &t46.mField2
    [0ULL], &t53.mField0[0ULL], &t53.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t487[0] = te_efOut[0];
  t708 = -(t487[0ULL] * intermediate_der4847);
  intermediate_der4847 = -t708;
  tlu2_2d_linear_linear_value(&ue_efOut[0ULL], &t628[0ULL], &t603[0ULL], &t617
    [0ULL], &t618[0ULL], ((_NeDynamicSystem*)(LC))->mField16, &t94[0ULL], &t59
    [0ULL], &t60[0ULL]);
  t485[0] = ue_efOut[0];
  t708 = -(t487[0ULL] * intermediate_der4848 + t485[0ULL]);
  intermediate_der4848 = -t708;
  tlu2_2d_linear_linear_value(&ve_efOut[0ULL], &t45.mField1[0ULL], &t45.mField2
    [0ULL], &t51.mField0[0ULL], &t51.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t58[0] = ve_efOut[0];
  t708 = -(t58[0ULL] * intermediate_der4855);
  intermediate_der2092 = -t708;
  tlu2_2d_linear_linear_value(&we_efOut[0ULL], &t610[0ULL], &t597[0ULL], &t614
    [0ULL], &t615[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t94[0ULL], &t59
    [0ULL], &t60[0ULL]);
  t487[0] = we_efOut[0];
  t708 = -(t58[0ULL] * t702 + t487[0ULL]);
  intermediate_der2092 = X[92ULL] * intermediate_der2092 * 100.0 + 1.0;
  t706 = (X[92ULL] * -t708 + t706) * 100.0;
  tlu2_2d_linear_linear_value(&xe_efOut[0ULL], &t45.mField1[0ULL], &t45.mField2
    [0ULL], &t51.mField0[0ULL], &t51.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t94[0ULL], &t59[0ULL], &t60[0ULL]);
  t58[0] = xe_efOut[0];
  t708 = -(t58[0ULL] * intermediate_der4855);
  intermediate_der4855 = -t708;
  tlu2_2d_linear_linear_value(&ye_efOut[0ULL], &t610[0ULL], &t597[0ULL], &t614
    [0ULL], &t615[0ULL], ((_NeDynamicSystem*)(LC))->mField16, &t94[0ULL], &t59
    [0ULL], &t60[0ULL]);
  t487[0] = ye_efOut[0];
  t708 = -(t58[0ULL] * t702 + t487[0ULL]);
  t702 = -t708;
  if (t745 <= 0.0) {
    t1055 = 0.0;
  } else {
    t1055 = t745 >= 500.0 ? 0.0 : t731;
  }

  if (t745 <= 0.0) {
    t731 = 0.0;
  } else {
    t731 = t745 >= 500.0 ? 0.0 : t723;
  }

  if (t745 <= 0.0) {
    t723 = 0.0;
  } else {
    t723 = t745 >= 500.0 ? 0.0 : t722;
  }

  if (intermediate_der7024 <= 0.0) {
    t722 = 0.0;
  } else {
    t722 = intermediate_der7024 >= 500.0 ? 0.0 : intermediate_der7013;
  }

  if (intermediate_der7024 <= 0.0) {
    t745 = 0.0;
  } else {
    t745 = intermediate_der7024 >= 500.0 ? 0.0 : t698;
  }

  if (intermediate_der7024 <= 0.0) {
    t698 = 0.0;
  } else {
    t698 = intermediate_der7024 >= 500.0 ? 0.0 : intermediate_der6172;
  }

  intermediate_der7014 = ((real_T)(M[107ULL] != 0) * 2.0 - 1.0) *
    intermediate_der7014 / 0.5;
  intermediate_der6164 = ((real_T)(M[107ULL] != 0) * 2.0 - 1.0) *
    intermediate_der6164 / 0.5;
  t718 = ((real_T)(M[107ULL] != 0) * 2.0 - 1.0) * t718 / 0.5;
  intermediate_der7013 = -((intermediate_der6170 - 0.8) * intermediate_der6164 *
    0.4);
  intermediate_der7024 = -((intermediate_der6170 - 0.8) * t718 * 0.4);
  if (t726 <= 0.0) {
    intermediate_der6170 = 0.0;
  } else {
    intermediate_der6170 = t726 >= 1.0 ? 0.0 : -((intermediate_der6170 - 0.8) *
      intermediate_der7014 * 0.4);
  }

  if (t726 <= 0.0) {
    intermediate_der6172 = 0.0;
  } else {
    intermediate_der6172 = t726 >= 1.0 ? 0.0 : intermediate_der7013;
  }

  if (t726 <= 0.0) {
    intermediate_der7013 = 0.0;
  } else {
    intermediate_der7013 = t726 >= 1.0 ? 0.0 : intermediate_der7024;
  }

  intermediate_der7024 = intermediate_der6170 * intermediate_der7031 + t723 *
    t773;
  if (intermediate_der7043 > 0.01) {
    t723 = t725 > 0.0 ? intermediate_der7013 * intermediate_der7031 + t731 *
      t773 : 0.0;
  } else {
    t723 = 0.0;
  }

  if (intermediate_der7043 > 0.01) {
    t726 = t725 > 0.0 ? intermediate_der6172 * intermediate_der7031 + t1055 *
      t773 : 0.0;
  } else {
    t726 = 0.0;
  }

  if (intermediate_der7043 > 0.01) {
    t731 = t725 > 0.0 ? intermediate_der7024 : 0.0;
  } else {
    t731 = 0.0;
  }

  intermediate_der7043 = ((real_T)(M[109ULL] != 0) * 2.0 - 1.0) *
    intermediate_der7037 / 0.5;
  t725 = ((real_T)(M[109ULL] != 0) * 2.0 - 1.0) * t750 / 0.5;
  t748 = ((real_T)(M[109ULL] != 0) * 2.0 - 1.0) * t748 / 0.5;
  t750 = -((intermediate_der7035 - 0.8) * t725 * 0.4);
  intermediate_der7024 = -((intermediate_der7035 - 0.8) * t748 * 0.4);
  if (intermediate_der7052 <= 0.0) {
    intermediate_der7035 = 0.0;
  } else {
    intermediate_der7035 = intermediate_der7052 >= 1.0 ? 0.0 :
      -((intermediate_der7035 - 0.8) * intermediate_der7043 * 0.4);
  }

  if (intermediate_der7052 <= 0.0) {
    intermediate_der7037 = 0.0;
  } else {
    intermediate_der7037 = intermediate_der7052 >= 1.0 ? 0.0 : t750;
  }

  if (intermediate_der7052 <= 0.0) {
    t750 = 0.0;
  } else {
    t750 = intermediate_der7052 >= 1.0 ? 0.0 : intermediate_der7024;
  }

  intermediate_der7052 = t750 * t771 + t745 * t1063;
  t745 = intermediate_der7037 * t771 + t722 * t1063;
  t722 = intermediate_der7035 * t771 + t698 * t1063;
  if (intermediate_der7009 > 0.01) {
    t698 = intermediate_der7011 > 0.0 ? intermediate_der7052 : 0.0;
  } else {
    t698 = 0.0;
  }

  if (intermediate_der7009 > 0.01) {
    intermediate_der7052 = intermediate_der7011 > 0.0 ? t745 : 0.0;
  } else {
    intermediate_der7052 = 0.0;
  }

  if (intermediate_der7009 > 0.01) {
    t745 = intermediate_der7011 > 0.0 ? t722 : 0.0;
  } else {
    t745 = 0.0;
  }

  t722 = intermediate_der6172;
  intermediate_der7009 = intermediate_der7013;
  intermediate_der6172 = t723;
  intermediate_der7011 = t726;
  intermediate_der7013 = t731;
  intermediate_der7031 = ((real_T)(M[108ULL] != 0) * 2.0 - 1.0) * X[122ULL] *
    t723;
  t723 = ((real_T)(M[108ULL] != 0) * 2.0 - 1.0) * X[122ULL] * t726;
  t726 = ((real_T)(M[108ULL] != 0) * 2.0 - 1.0) * X[122ULL] * t731;
  t708 = intermediate_der7059 * intermediate_der7059;
  t731 = ((real_T)(M[108ULL] != 0) * 2.0 - 1.0) * t774 / (intermediate_der7059 ==
    0.0 ? 1.0E-16 : intermediate_der7059) * 1000.0;
  intermediate_der7024 = intermediate_der7031 / (intermediate_der7059 == 0.0 ?
    1.0E-16 : intermediate_der7059) * 1000.0;
  intermediate_der7031 = t723 / (intermediate_der7059 == 0.0 ? 1.0E-16 :
    intermediate_der7059) * 1000.0;
  t723 = t726 / (intermediate_der7059 == 0.0 ? 1.0E-16 : intermediate_der7059) *
    1000.0;
  t726 = -(((real_T)(M[108ULL] != 0) * 2.0 - 1.0) * X[122ULL] * t774) / (t708 ==
    0.0 ? 1.0E-16 : t708) * t783 * 1000.0;
  t771 = t698;
  U_idx_5 = intermediate_der7052;
  t773 = t745;
  t774 = -(((real_T)(M[110ULL] != 0) * 2.0 - 1.0) * t1060);
  t1063 = -(-((real_T)(M[110ULL] != 0) * 2.0 - 1.0) * t1060);
  t1060 = -(((real_T)(M[110ULL] != 0) * 2.0 - 1.0) * t709 * t698);
  t698 = -(((real_T)(M[110ULL] != 0) * 2.0 - 1.0) * t709 * intermediate_der7052);
  intermediate_der7052 = -(((real_T)(M[110ULL] != 0) * 2.0 - 1.0) * t709 * t745);
  t745 = t1063 / (intermediate_der7059 == 0.0 ? 1.0E-16 : intermediate_der7059);
  t1063 = t698 / (intermediate_der7059 == 0.0 ? 1.0E-16 : intermediate_der7059);
  t709 = t774 / (intermediate_der7059 == 0.0 ? 1.0E-16 : intermediate_der7059) *
    1000.0;
  t745 *= 1000.0;
  t488[0ULL] = 0.1;
  t488[1ULL] = 0.1;
  t488[2ULL] = intermediate_der2420;
  t488[3ULL] = t716;
  t488[4ULL] = t722;
  t488[5ULL] = intermediate_der7011;
  t488[6ULL] = t733;
  t488[7ULL] = t729;
  t488[8ULL] = t727 * 0.001;
  t488[9ULL] = intermediate_der2505;
  t488[10ULL] = intermediate_der6164;
  t488[11ULL] = intermediate_der2509;
  t488[12ULL] = intermediate_der7031;
  t488[13ULL] = t764;
  t488[14ULL] = t695;
  t488[15ULL] = t767;
  t488[16ULL] = t769 * 0.001;
  t488[17ULL] = intermediate_der4840;
  t489[0ULL] = 0.1;
  t489[1ULL] = intermediate_der7037;
  t489[2ULL] = U_idx_5;
  t489[3ULL] = intermediate_der2588;
  t489[4ULL] = intermediate_der2589;
  t489[5ULL] = t705 * 0.001;
  t489[6ULL] = t757;
  t489[7ULL] = t725;
  t489[8ULL] = t759;
  t489[9ULL] = t1063 * 1000.0;
  t489[10ULL] = intermediate_der6170;
  t489[11ULL] = intermediate_der7013;
  t489[12ULL] = intermediate_der2490;
  t489[13ULL] = intermediate_der2501;
  t489[14ULL] = intermediate_der7014;
  t489[15ULL] = t741;
  t489[16ULL] = t723;
  t490[0ULL] = 1.0;
  t490[1ULL] = -t777 / (t708 == 0.0 ? 1.0E-16 : t708) * t783 * 1000.0;
  t490[2ULL] = 1.0;
  t490[3ULL] = t726;
  t493[0ULL] = 1.0;
  t493[4ULL] = -1.0;
  t493[8ULL] = 0.0;
  t493[1ULL] = 0.0;
  t493[5ULL] = 1.0;
  t493[9ULL] = -1.0;
  t493[2ULL] = -1.0;
  t493[6ULL] = 0.0;
  t493[10ULL] = 1.0;
  t493[3ULL] = t711 * 1000.0;
  t493[7ULL] = t793 * 1000.0;
  t493[11ULL] = t794 * 1000.0;
  t494[0ULL] = -0.0012548887771113527;
  t494[1ULL] = -0.0;
  t494[2ULL] = -0.0;
  t494[3ULL] = -0.0041659346462926084;
  t494[4ULL] = 0.0041659346462926084;
  t494[5ULL] = 0.0;
  t494[6ULL] = ((-(X[81ULL] * 0.0012548887771113527) - X[82ULL] * 0.0) - X[83ULL]
                * 0.0) * 0.001 * 1000.0;
  t495[0ULL] = -0.0;
  t495[1ULL] = -0.0012548887771113527;
  t495[2ULL] = -0.0;
  t495[3ULL] = 0.0;
  t495[4ULL] = -0.0041659346462926084;
  t495[5ULL] = 0.0041659346462926084;
  t495[6ULL] = ((-(X[81ULL] * 0.0) - X[82ULL] * 0.0012548887771113527) - X[83ULL]
                * 0.0) * 0.001 * 1000.0;
  t496[0ULL] = -0.0;
  t496[1ULL] = -0.0;
  t496[2ULL] = -0.0012548887771113527;
  t496[3ULL] = 0.0041659346462926084;
  t496[4ULL] = 0.0;
  t496[5ULL] = -0.0041659346462926084;
  t496[6ULL] = ((-(X[81ULL] * 0.0) - X[82ULL] * 0.0) - X[83ULL] *
                0.0012548887771113527) * 0.001 * 1000.0;
  t497[0ULL] = 0.1;
  t497[1ULL] = intermediate_der7035;
  t497[2ULL] = t773;
  t497[3ULL] = t756;
  t497[4ULL] = intermediate_der2591;
  t497[5ULL] = intermediate_der7043;
  t497[6ULL] = t758;
  t497[7ULL] = intermediate_der7052 / (intermediate_der7059 == 0.0 ? 1.0E-16 :
    intermediate_der7059) * 1000.0;
  t497[8ULL] = t703;
  t497[9ULL] = t782 * 0.001;
  t497[10ULL] = intermediate_der4848;
  t498[0ULL] = 1.0;
  t498[1ULL] = t780;
  t498[2ULL] = t781 * 0.001;
  t498[3ULL] = intermediate_der4847;
  t499[0ULL] = 0.1;
  t499[1ULL] = 0.1;
  t499[2ULL] = t706;
  t499[3ULL] = t702;
  t502[0ULL] = t750;
  t502[1ULL] = t771;
  t502[2ULL] = intermediate_der2587;
  t502[3ULL] = intermediate_der2578;
  t502[4ULL] = t710 * 0.001;
  t502[5ULL] = U_idx_6;
  t502[6ULL] = t748;
  t502[7ULL] = t1060 / (intermediate_der7059 == 0.0 ? 1.0E-16 :
                        intermediate_der7059) * 1000.0;
  t503[0ULL] = -1.0;
  t503[1ULL] = 1.0;
  t503[2ULL] = 1.0;
  t503[3ULL] = t745;
  t503[4ULL] = 1.0;
  t503[5ULL] = t731;
  t504[0ULL] = 1.0;
  t504[1ULL] = 1.0;
  t504[2ULL] = -1.0;
  t504[3ULL] = t709;
  t506[0ULL] = 1.0;
  t506[1ULL] = intermediate_der7009;
  t506[2ULL] = intermediate_der6172;
  t506[3ULL] = t728;
  t506[4ULL] = t714;
  t506[5ULL] = t724 * 0.001;
  t506[6ULL] = intermediate_der2504;
  t506[7ULL] = t718;
  t506[8ULL] = intermediate_der7024;
  t506[9ULL] = t765;
  t506[10ULL] = t768 * 0.001;
  t506[11ULL] = t779;
  for (t536 = 0ULL; t536 < 18ULL; t536++) {
    t401[t536] = t488[t536];
  }

  for (t536 = 0ULL; t536 < 17ULL; t536++) {
    t401[t536 + 18ULL] = t489[t536];
  }

  for (t536 = 0ULL; t536 < 4ULL; t536++) {
    t401[t536 + 35ULL] = t490[t536];
  }

  t401[39ULL] = intermediate_der2647;
  t401[40ULL] = t761;
  t401[41ULL] = intermediate_der2646;
  t401[42ULL] = t760;
  t401[43ULL] = 1.0;
  t401[44ULL] = 1.0;
  t401[45ULL] = intermediate_der2282;
  t401[46ULL] = intermediate_der2282;
  t401[47ULL] = intermediate_der2281;
  t401[48ULL] = intermediate_der2281;
  t401[49ULL] = -1.0;
  t401[50ULL] = 1.0;
  for (t536 = 0ULL; t536 < 12ULL; t536++) {
    t401[t536 + 51ULL] = t493[t536];
  }

  for (t536 = 0ULL; t536 < 7ULL; t536++) {
    t401[t536 + 63ULL] = t494[t536];
  }

  for (t536 = 0ULL; t536 < 7ULL; t536++) {
    t401[t536 + 70ULL] = t495[t536];
  }

  for (t536 = 0ULL; t536 < 7ULL; t536++) {
    t401[t536 + 77ULL] = t496[t536];
  }

  for (t536 = 0ULL; t536 < 11ULL; t536++) {
    t401[t536 + 84ULL] = t497[t536];
  }

  for (t536 = 0ULL; t536 < 4ULL; t536++) {
    t401[t536 + 95ULL] = t498[t536];
  }

  for (t536 = 0ULL; t536 < 4ULL; t536++) {
    t401[t536 + 99ULL] = t499[t536];
  }

  t401[103ULL] = 1.0;
  t401[104ULL] = intermediate_der2092;
  t401[105ULL] = intermediate_der4855;
  t401[106ULL] = 1.0;
  t401[107ULL] = t745;
  t401[108ULL] = -1.0;
  t401[109ULL] = -1.0;
  t401[110ULL] = 1.0;
  t401[111ULL] = 1.0;
  t401[112ULL] = -1.0;
  t401[113ULL] = 1.0;
  for (t536 = 0ULL; t536 < 8ULL; t536++) {
    t401[t536 + 114ULL] = t502[t536];
  }

  for (t536 = 0ULL; t536 < 6ULL; t536++) {
    t401[t536 + 122ULL] = t503[t536];
  }

  for (t536 = 0ULL; t536 < 4ULL; t536++) {
    t401[t536 + 128ULL] = t504[t536];
  }

  for (t536 = 0ULL; t536 < 9ULL; t536++) {
    t401[t536 + 132ULL] = intermediate_der1723[t536];
  }

  t401[141ULL] = intermediate_der2290;
  t401[142ULL] = 0.1;
  t401[143ULL] = t713;
  t401[144ULL] = 1.0;
  for (t536 = 0ULL; t536 < 12ULL; t536++) {
    t401[t536 + 145ULL] = t506[t536];
  }

  t401[157ULL] = 1.0;
  t401[158ULL] = 1.0;
  t401[159ULL] = intermediate_der4831;
  t401[160ULL] = 1.0;
  t401[161ULL] = 1.0;
  t401[162ULL] = 1.0;
  t401[163ULL] = 0.099999999999999992;
  for (t536 = 0ULL; t536 < 11ULL; t536++) {
    t401[t536 + 164ULL] = intermediate_der4778[t536];
  }

  t401[175ULL] = 1.0;
  t401[176ULL] = 1.0;
  t401[177ULL] = 1.0;
  t401[178ULL] = 1.0;
  for (b = 0; b < 179; b++) {
    out.mX[b] = t401[b];
  }

  (void)LC;
  (void)t1065;
  return 0;
}
