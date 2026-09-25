/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv7/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv7_d632b26e_1_ds_sys_struct.h"
#include "PW_SMRv7_d632b26e_1_ds_dxy.h"
#include "PW_SMRv7_d632b26e_1_ds.h"
#include "PW_SMRv7_d632b26e_1_ds_externals.h"
#include "PW_SMRv7_d632b26e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv7_d632b26e_1_ds_dxy(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t629, NeDsMethodOutput *t630)
{
  ETTS0 bb_efOut;
  ETTS0 d_efOut;
  ETTS0 db_efOut;
  ETTS0 efOut;
  ETTS0 fb_efOut;
  ETTS0 g_efOut;
  ETTS0 j_efOut;
  ETTS0 m_efOut;
  ETTS0 oc_efOut;
  ETTS0 p_efOut;
  ETTS0 r_efOut;
  ETTS0 rb_efOut;
  ETTS0 t20;
  ETTS0 t32;
  ETTS0 t33;
  ETTS0 t34;
  ETTS0 t35;
  ETTS0 t36;
  ETTS0 t37;
  ETTS0 t38;
  ETTS0 t39;
  ETTS0 t40;
  ETTS0 t41;
  ETTS0 t42;
  ETTS0 t43;
  ETTS0 t_efOut;
  ETTS0 ub_efOut;
  ETTS0 y_efOut;
  PmRealVector out;
  real_T X[183];
  real_T t261[67];
  real_T t310[13];
  real_T t313[9];
  real_T t319[9];
  real_T t314[4];
  real_T t315[4];
  real_T t317[4];
  real_T t366[2];
  real_T t369[2];
  real_T t375[2];
  real_T t378[2];
  real_T t381[2];
  real_T t385[2];
  real_T t387[2];
  real_T t388[2];
  real_T t390[2];
  real_T t391[2];
  real_T t394[2];
  real_T t396[2];
  real_T t397[2];
  real_T ab_efOut[1];
  real_T ac_efOut[1];
  real_T ad_efOut[1];
  real_T b_efOut[1];
  real_T bc_efOut[1];
  real_T bd_efOut[1];
  real_T c_efOut[1];
  real_T cb_efOut[1];
  real_T cc_efOut[1];
  real_T cd_efOut[1];
  real_T dc_efOut[1];
  real_T dd_efOut[1];
  real_T e_efOut[1];
  real_T eb_efOut[1];
  real_T ec_efOut[1];
  real_T f_efOut[1];
  real_T fc_efOut[1];
  real_T gb_efOut[1];
  real_T gc_efOut[1];
  real_T h_efOut[1];
  real_T hb_efOut[1];
  real_T hc_efOut[1];
  real_T i_efOut[1];
  real_T ib_efOut[1];
  real_T ic_efOut[1];
  real_T jb_efOut[1];
  real_T jc_efOut[1];
  real_T k_efOut[1];
  real_T kb_efOut[1];
  real_T kc_efOut[1];
  real_T l_efOut[1];
  real_T lb_efOut[1];
  real_T lc_efOut[1];
  real_T mb_efOut[1];
  real_T mc_efOut[1];
  real_T n_efOut[1];
  real_T nb_efOut[1];
  real_T nc_efOut[1];
  real_T o_efOut[1];
  real_T ob_efOut[1];
  real_T pb_efOut[1];
  real_T pc_efOut[1];
  real_T q_efOut[1];
  real_T qb_efOut[1];
  real_T qc_efOut[1];
  real_T rc_efOut[1];
  real_T s_efOut[1];
  real_T sb_efOut[1];
  real_T sc_efOut[1];
  real_T t265[1];
  real_T t266[1];
  real_T t303[1];
  real_T t305[1];
  real_T t308[1];
  real_T t309[1];
  real_T t44[1];
  real_T tb_efOut[1];
  real_T tc_efOut[1];
  real_T u_efOut[1];
  real_T uc_efOut[1];
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
  real_T Steam_Drum_v_liq;
  real_T U_idx_3;
  real_T intermediate_der2140;
  real_T intermediate_der2149;
  real_T intermediate_der2266;
  real_T intermediate_der2277;
  real_T intermediate_der2278;
  real_T intermediate_der2326;
  real_T intermediate_der2330;
  real_T intermediate_der4393;
  real_T intermediate_der4400;
  real_T intermediate_der4401;
  real_T intermediate_der4407;
  real_T intermediate_der4410;
  real_T intermediate_der4413;
  real_T intermediate_der4414;
  real_T intermediate_der6054;
  real_T intermediate_der6068;
  real_T t301_idx_0;
  real_T t423;
  real_T t427;
  real_T t428;
  real_T t429;
  real_T t430;
  real_T t433;
  real_T t435;
  real_T t436;
  real_T t438;
  real_T t440;
  real_T t441;
  real_T t442;
  real_T t443;
  real_T t444;
  real_T t445;
  real_T t446;
  real_T t448;
  real_T t450;
  real_T t451;
  real_T t452;
  real_T t453;
  real_T t454;
  real_T t459;
  real_T t460;
  real_T t463;
  real_T t465;
  real_T t467;
  real_T t468;
  real_T t588;
  real_T t619;
  real_T t627;
  real_T t628;
  size_t t107[1];
  size_t t368[1];
  size_t t371[1];
  size_t t374[1];
  size_t t377[1];
  size_t t380[1];
  size_t t383[1];
  size_t t386[1];
  size_t t389[1];
  size_t t392[1];
  size_t t395[1];
  size_t t398[1];
  size_t t45[1];
  size_t t46[1];
  size_t t80[1];
  size_t t328;
  int32_T M[129];
  int32_T b;
  for (b = 0; b < 129; b++) {
    M[b] = t629->mM.mX[b];
  }

  U_idx_3 = t629->mU.mX[3];
  for (b = 0; b < 183; b++) {
    X[b] = t629->mX.mX[b];
  }

  out = t630->mDXY;
  t44[0ULL] = X[0ULL];
  t45[0] = 100ULL;
  t46[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t44[0ULL], &t45
    [0ULL], &t46[0ULL]);
  t43 = efOut;
  t396[0ULL] = t43.mField0[0ULL];
  t396[1ULL] = t43.mField0[1ULL];
  t397[0ULL] = t43.mField1[0ULL];
  t397[1ULL] = t43.mField1[1ULL];
  t398[0ULL] = t43.mField2[0ULL];
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t396[0ULL], &t398[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t45[0ULL], &t46[0ULL]);
  t309[0] = b_efOut[0];
  intermediate_der4393 = t309[0ULL];
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t396[0ULL], &t398[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t45[0ULL], &t46[0ULL]);
  t308[0] = c_efOut[0];
  t423 = t308[0ULL];
  t309[0ULL] = X[43ULL];
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t309[0ULL],
    &t45[0ULL], &t46[0ULL]);
  t40 = d_efOut;
  t366[0ULL] = t40.mField0[0ULL];
  t366[1ULL] = t40.mField0[1ULL];
  t394[0ULL] = t40.mField1[0ULL];
  t394[1ULL] = t40.mField1[1ULL];
  t395[0ULL] = t40.mField2[0ULL];
  tlu2_1d_linear_linear_value(&e_efOut[0ULL], &t366[0ULL], &t395[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t45[0ULL], &t46[0ULL]);
  t305[0] = e_efOut[0];
  intermediate_der2277 = t305[0ULL];
  tlu2_1d_linear_linear_value(&f_efOut[0ULL], &t366[0ULL], &t395[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t45[0ULL], &t46[0ULL]);
  t265[0] = f_efOut[0];
  intermediate_der2278 = t265[0ULL];
  if (X[44ULL] <= intermediate_der2277) {
    intermediate_der2140 = X[44ULL] / (intermediate_der2277 == 0.0 ? 1.0E-16 :
      intermediate_der2277) - 1.0;
  } else if (X[44ULL] >= intermediate_der2278) {
    intermediate_der2140 = (X[44ULL] - 4000.0) / (4000.0 - intermediate_der2278 ==
      0.0 ? 1.0E-16 : 4000.0 - intermediate_der2278) + 2.0;
  } else {
    t430 = intermediate_der2278 - intermediate_der2277;
    intermediate_der2140 = (X[44ULL] - intermediate_der2277) / (t430 == 0.0 ?
      1.0E-16 : t430);
  }

  t308[0ULL] = X[49ULL];
  tlu2_linear_linear_prelookup(&g_efOut.mField0[0ULL], &g_efOut.mField1[0ULL],
    &g_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t308[0ULL],
    &t45[0ULL], &t46[0ULL]);
  t39 = g_efOut;
  t390[0ULL] = t39.mField0[0ULL];
  t390[1ULL] = t39.mField0[1ULL];
  t391[0ULL] = t39.mField1[0ULL];
  t391[1ULL] = t39.mField1[1ULL];
  t392[0ULL] = t39.mField2[0ULL];
  tlu2_1d_linear_linear_value(&h_efOut[0ULL], &t390[0ULL], &t392[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t45[0ULL], &t46[0ULL]);
  t266[0] = h_efOut[0];
  intermediate_der2266 = t266[0ULL];
  tlu2_1d_linear_linear_value(&i_efOut[0ULL], &t390[0ULL], &t392[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t45[0ULL], &t46[0ULL]);
  t303[0] = i_efOut[0];
  t427 = t303[0ULL];
  if (X[50ULL] <= intermediate_der2266) {
    t428 = X[50ULL] / (intermediate_der2266 == 0.0 ? 1.0E-16 :
                       intermediate_der2266) - 1.0;
  } else if (X[50ULL] >= t427) {
    t428 = (X[50ULL] - 4000.0) / (4000.0 - t427 == 0.0 ? 1.0E-16 : 4000.0 - t427)
      + 2.0;
  } else {
    t435 = t427 - intermediate_der2266;
    t428 = (X[50ULL] - intermediate_der2266) / (t435 == 0.0 ? 1.0E-16 : t435);
  }

  t305[0ULL] = X[53ULL];
  tlu2_linear_linear_prelookup(&j_efOut.mField0[0ULL], &j_efOut.mField1[0ULL],
    &j_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t305[0ULL],
    &t45[0ULL], &t46[0ULL]);
  t42 = j_efOut;
  t387[0ULL] = t42.mField0[0ULL];
  t387[1ULL] = t42.mField0[1ULL];
  t388[0ULL] = t42.mField1[0ULL];
  t388[1ULL] = t42.mField1[1ULL];
  t389[0ULL] = t42.mField2[0ULL];
  tlu2_1d_linear_linear_value(&k_efOut[0ULL], &t387[0ULL], &t389[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t45[0ULL], &t46[0ULL]);
  t301_idx_0 = k_efOut[0];
  t429 = t301_idx_0;
  tlu2_1d_linear_linear_value(&l_efOut[0ULL], &t387[0ULL], &t389[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t45[0ULL], &t46[0ULL]);
  t301_idx_0 = l_efOut[0];
  t430 = t301_idx_0;
  if (X[54ULL] <= t429) {
    intermediate_der4414 = X[54ULL] / (t429 == 0.0 ? 1.0E-16 : t429) - 1.0;
  } else if (X[54ULL] >= t301_idx_0) {
    intermediate_der4414 = (X[54ULL] - 4000.0) / (4000.0 - t301_idx_0 == 0.0 ?
      1.0E-16 : 4000.0 - t301_idx_0) + 2.0;
  } else {
    t440 = t301_idx_0 - t429;
    intermediate_der4414 = (X[54ULL] - t429) / (t440 == 0.0 ? 1.0E-16 : t440);
  }

  t265[0ULL] = X[79ULL];
  tlu2_linear_linear_prelookup(&m_efOut.mField0[0ULL], &m_efOut.mField1[0ULL],
    &m_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t265[0ULL],
    &t45[0ULL], &t46[0ULL]);
  t41 = m_efOut;
  t366[0ULL] = t41.mField0[0ULL];
  t366[1ULL] = t41.mField0[1ULL];
  t385[0ULL] = t41.mField1[0ULL];
  t385[1ULL] = t41.mField1[1ULL];
  t386[0ULL] = t41.mField2[0ULL];
  tlu2_1d_linear_linear_value(&n_efOut[0ULL], &t366[0ULL], &t386[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t45[0ULL], &t46[0ULL]);
  t301_idx_0 = n_efOut[0];
  intermediate_der2149 = t301_idx_0;
  tlu2_1d_linear_linear_value(&o_efOut[0ULL], &t366[0ULL], &t386[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t45[0ULL], &t46[0ULL]);
  t301_idx_0 = o_efOut[0];
  t433 = t301_idx_0;
  if (X[80ULL] <= intermediate_der2149) {
    intermediate_der6068 = X[80ULL] / (intermediate_der2149 == 0.0 ? 1.0E-16 :
      intermediate_der2149) - 1.0;
  } else if (X[80ULL] >= t301_idx_0) {
    intermediate_der6068 = (X[80ULL] - 4000.0) / (4000.0 - t301_idx_0 == 0.0 ?
      1.0E-16 : 4000.0 - t301_idx_0) + 2.0;
  } else {
    t445 = t301_idx_0 - intermediate_der2149;
    intermediate_der6068 = (X[80ULL] - intermediate_der2149) / (t445 == 0.0 ?
      1.0E-16 : t445);
  }

  t435 = X[0ULL] - X[49ULL];
  if (X[97ULL] <= intermediate_der4393) {
    t436 = X[97ULL] / (intermediate_der4393 == 0.0 ? 1.0E-16 :
                       intermediate_der4393) - 1.0;
  } else if (X[97ULL] >= t423) {
    t436 = (X[97ULL] - 4000.0) / (4000.0 - t423 == 0.0 ? 1.0E-16 : 4000.0 - t423)
      + 2.0;
  } else {
    t450 = t423 - intermediate_der4393;
    t436 = (X[97ULL] - intermediate_der4393) / (t450 == 0.0 ? 1.0E-16 : t450);
  }

  t266[0ULL] = t436;
  t80[0] = 50ULL;
  tlu2_linear_linear_prelookup(&p_efOut.mField0[0ULL], &p_efOut.mField1[0ULL],
    &p_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t266[0ULL],
    &t80[0ULL], &t46[0ULL]);
  t37 = p_efOut;
  tlu2_2d_linear_linear_value(&q_efOut[0ULL], &t37.mField0[0ULL], &t37.mField2
    [0ULL], &t43.mField0[0ULL], &t43.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t80[0ULL], &t45[0ULL], &t46[0ULL]);
  t44[0] = q_efOut[0];
  t436 = t44[0ULL];
  intermediate_der6054 = t435 / 30.0;
  if (intermediate_der6054 <= 0.0) {
    t438 = 0.0;
  } else {
    t438 = intermediate_der6054 >= 1.0E+6 ? 1.0E+6 : intermediate_der6054;
  }

  Steam_Drum_v_liq = pmf_sqrt(t438) * 0.5;
  if (U_idx_3 <= 0.0) {
    t441 = 0.0;
  } else {
    t441 = U_idx_3 >= 1.0 ? 1.0 : U_idx_3;
  }

  t440 = Steam_Drum_v_liq * t441;
  t451 = fabs(t440);
  Steam_Drum_v_liq = t451 / 0.5;
  t442 = 0.8 - (Steam_Drum_v_liq - 0.8) * (Steam_Drum_v_liq - 0.8) * 0.2;
  if (intermediate_der2266 <= intermediate_der2266) {
    t443 = intermediate_der2266 / (intermediate_der2266 == 0.0 ? 1.0E-16 :
      intermediate_der2266) - 1.0;
  } else if (intermediate_der2266 >= t427) {
    t443 = (intermediate_der2266 - 4000.0) / (4000.0 - t427 == 0.0 ? 1.0E-16 :
      4000.0 - t427) + 2.0;
  } else {
    intermediate_der4400 = t427 - intermediate_der2266;
    t443 = (intermediate_der2266 - intermediate_der2266) / (intermediate_der4400
      == 0.0 ? 1.0E-16 : intermediate_der4400);
  }

  t303[0ULL] = t443;
  tlu2_linear_linear_prelookup(&r_efOut.mField0[0ULL], &r_efOut.mField1[0ULL],
    &r_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t303[0ULL],
    &t80[0ULL], &t46[0ULL]);
  t20 = r_efOut;
  tlu2_2d_linear_linear_value(&s_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t390[0ULL], &t392[0ULL], ((_NeDynamicSystem*)(LC))->mField0, &t80
    [0ULL], &t45[0ULL], &t46[0ULL]);
  t301_idx_0 = s_efOut[0];
  t443 = t301_idx_0;
  t444 = X[49ULL] * t301_idx_0 * 100.0 + intermediate_der2266;
  if (t427 <= intermediate_der2266) {
    t445 = t427 / (intermediate_der2266 == 0.0 ? 1.0E-16 : intermediate_der2266)
      - 1.0;
  } else if (t427 >= t427) {
    t445 = (t427 - 4000.0) / (4000.0 - t427 == 0.0 ? 1.0E-16 : 4000.0 - t427) +
      2.0;
  } else {
    t459 = t427 - intermediate_der2266;
    t445 = (t427 - intermediate_der2266) / (t459 == 0.0 ? 1.0E-16 : t459);
  }

  t303[0ULL] = t445;
  tlu2_linear_linear_prelookup(&t_efOut.mField0[0ULL], &t_efOut.mField1[0ULL],
    &t_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t303[0ULL],
    &t80[0ULL], &t46[0ULL]);
  t32 = t_efOut;
  tlu2_2d_linear_linear_value(&u_efOut[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &t390[0ULL], &t392[0ULL], ((_NeDynamicSystem*)(LC))->mField0, &t80
    [0ULL], &t45[0ULL], &t46[0ULL]);
  t301_idx_0 = u_efOut[0];
  t445 = t301_idx_0;
  t446 = X[49ULL] * t301_idx_0 * 100.0 + t427;
  t381[0ULL] = t37.mField0[0ULL];
  t381[1ULL] = t37.mField0[1ULL];
  t383[0ULL] = t37.mField2[0ULL];
  tlu2_2d_linear_linear_value(&v_efOut[0ULL], &t381[0ULL], &t383[0ULL], &t396
    [0ULL], &t398[0ULL], ((_NeDynamicSystem*)(LC))->mField30, &t80[0ULL], &t45
    [0ULL], &t46[0ULL]);
  t301_idx_0 = v_efOut[0];
  intermediate_der2330 = t301_idx_0;
  tlu2_2d_linear_linear_value(&w_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t390[0ULL], &t392[0ULL], ((_NeDynamicSystem*)(LC))->mField30, &t80
    [0ULL], &t45[0ULL], &t46[0ULL]);
  t301_idx_0 = w_efOut[0];
  t448 = t301_idx_0;
  tlu2_2d_linear_linear_value(&x_efOut[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &t390[0ULL], &t392[0ULL], ((_NeDynamicSystem*)(LC))->mField30, &t80
    [0ULL], &t45[0ULL], &t46[0ULL]);
  t301_idx_0 = x_efOut[0];
  intermediate_der2326 = t301_idx_0;
  t588 = t301_idx_0 - t448;
  t450 = (intermediate_der2330 - t448) / (t588 == 0.0 ? 1.0E-16 : t588);
  if (t450 <= 0.0) {
    t451 = 0.0;
  } else {
    t451 = t450 >= 1.0 ? 1.0 : t450;
  }

  t453 = (t436 * X[0ULL] * 100.0 + X[97ULL]) - ((t446 - t444) * t451 + t444);
  if (X[26ULL] < intermediate_der4393) {
    Steam_Drum_v_liq = X[26ULL] / (intermediate_der4393 == 0.0 ? 1.0E-16 :
      intermediate_der4393) - 1.0;
  } else {
    Steam_Drum_v_liq = 0.0;
  }

  if (X[27ULL] > t423) {
    t452 = (X[27ULL] - 4000.0) / (4000.0 - t423 == 0.0 ? 1.0E-16 : 4000.0 - t423)
      + 2.0;
  } else {
    t452 = 1.0;
  }

  t303[0ULL] = Steam_Drum_v_liq;
  t107[0] = 25ULL;
  tlu2_linear_linear_prelookup(&y_efOut.mField0[0ULL], &y_efOut.mField1[0ULL],
    &y_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t303[0ULL],
    &t107[0ULL], &t46[0ULL]);
  t36 = y_efOut;
  t375[0ULL] = t36.mField0[0ULL];
  t375[1ULL] = t36.mField0[1ULL];
  t377[0ULL] = t36.mField2[0ULL];
  tlu2_2d_linear_linear_value(&ab_efOut[0ULL], &t375[0ULL], &t377[0ULL], &t396
    [0ULL], &t398[0ULL], ((_NeDynamicSystem*)(LC))->mField31, &t107[0ULL], &t45
    [0ULL], &t46[0ULL]);
  t301_idx_0 = ab_efOut[0];
  Steam_Drum_v_liq = t301_idx_0;
  t303[0ULL] = t452;
  tlu2_linear_linear_prelookup(&bb_efOut.mField0[0ULL], &bb_efOut.mField1[0ULL],
    &bb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t303[0ULL],
    &t107[0ULL], &t46[0ULL]);
  t35 = bb_efOut;
  t369[0ULL] = t35.mField0[0ULL];
  t369[1ULL] = t35.mField0[1ULL];
  t371[0ULL] = t35.mField2[0ULL];
  tlu2_2d_linear_linear_value(&cb_efOut[0ULL], &t369[0ULL], &t371[0ULL], &t396
    [0ULL], &t398[0ULL], ((_NeDynamicSystem*)(LC))->mField32, &t107[0ULL], &t45
    [0ULL], &t46[0ULL]);
  t301_idx_0 = cb_efOut[0];
  t452 = t301_idx_0;
  if (X[147ULL] <= intermediate_der4393) {
    t454 = X[147ULL] / (intermediate_der4393 == 0.0 ? 1.0E-16 :
                        intermediate_der4393) - 1.0;
  } else if (X[147ULL] >= t423) {
    t454 = (X[147ULL] - 4000.0) / (4000.0 - t423 == 0.0 ? 1.0E-16 : 4000.0 -
      t423) + 2.0;
  } else {
    U_idx_3 = t423 - intermediate_der4393;
    t454 = (X[147ULL] - intermediate_der4393) / (U_idx_3 == 0.0 ? 1.0E-16 :
      U_idx_3);
  }

  t619 = -t44[0ULL];
  intermediate_der4400 = -t619;
  t303[0ULL] = t428;
  tlu2_linear_linear_prelookup(&db_efOut.mField0[0ULL], &db_efOut.mField1[0ULL],
    &db_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t303[0ULL],
    &t80[0ULL], &t46[0ULL]);
  t38 = db_efOut;
  t396[0ULL] = t38.mField0[0ULL];
  t396[1ULL] = t38.mField0[1ULL];
  t374[0ULL] = t38.mField2[0ULL];
  tlu2_2d_linear_linear_value(&eb_efOut[0ULL], &t396[0ULL], &t374[0ULL], &t390
    [0ULL], &t392[0ULL], ((_NeDynamicSystem*)(LC))->mField0, &t80[0ULL], &t45
    [0ULL], &t46[0ULL]);
  t301_idx_0 = eb_efOut[0];
  t428 = t301_idx_0;
  t303[0ULL] = intermediate_der4414;
  tlu2_linear_linear_prelookup(&fb_efOut.mField0[0ULL], &fb_efOut.mField1[0ULL],
    &fb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t303[0ULL],
    &t80[0ULL], &t46[0ULL]);
  t34 = fb_efOut;
  t378[0ULL] = t34.mField0[0ULL];
  t378[1ULL] = t34.mField0[1ULL];
  t380[0ULL] = t34.mField2[0ULL];
  tlu2_2d_linear_linear_value(&gb_efOut[0ULL], &t378[0ULL], &t380[0ULL], &t387
    [0ULL], &t389[0ULL], ((_NeDynamicSystem*)(LC))->mField0, &t80[0ULL], &t45
    [0ULL], &t46[0ULL]);
  t301_idx_0 = gb_efOut[0];
  intermediate_der4414 = t301_idx_0;
  t440 = ((real_T)(M[56ULL] != 0) * 2.0 - 1.0) * t440 / 0.5;
  if (t442 <= 0.0) {
    t628 = 0.0;
  } else {
    t628 = t442 >= 1.0 ? 1.0 : 0.8 - (t440 - 0.8) * (t440 - 0.8) * 0.2;
  }

  t627 = t435 > 0.01 ? t453 * t628 : 0.0;
  tlu2_1d_linear_linear_value(&hb_efOut[0ULL], &t397[0ULL], &t398[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t45[0ULL], &t46[0ULL]);
  t301_idx_0 = hb_efOut[0];
  intermediate_der4401 = t301_idx_0;
  tlu2_1d_linear_linear_value(&ib_efOut[0ULL], &t397[0ULL], &t398[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t45[0ULL], &t46[0ULL]);
  t301_idx_0 = ib_efOut[0];
  t459 = t301_idx_0;
  tlu2_1d_linear_linear_value(&jb_efOut[0ULL], &t394[0ULL], &t395[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t45[0ULL], &t46[0ULL]);
  t301_idx_0 = jb_efOut[0];
  t460 = t301_idx_0;
  tlu2_1d_linear_linear_value(&kb_efOut[0ULL], &t394[0ULL], &t395[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t45[0ULL], &t46[0ULL]);
  t301_idx_0 = kb_efOut[0];
  if (X[44ULL] <= intermediate_der2277) {
    t463 = 1.0 / (intermediate_der2277 == 0.0 ? 1.0E-16 : intermediate_der2277);
  } else if (X[44ULL] >= intermediate_der2278) {
    t463 = 1.0 / (4000.0 - intermediate_der2278 == 0.0 ? 1.0E-16 : 4000.0 -
                  intermediate_der2278);
  } else {
    U_idx_3 = intermediate_der2278 - intermediate_der2277;
    t463 = 1.0 / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3);
  }

  if (X[44ULL] <= intermediate_der2277) {
    U_idx_3 = intermediate_der2277 * intermediate_der2277;
    intermediate_der4407 = -X[44ULL] / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3) *
      t460;
  } else if (X[44ULL] >= intermediate_der2278) {
    U_idx_3 = (4000.0 - intermediate_der2278) * (4000.0 - intermediate_der2278);
    intermediate_der4407 = -t301_idx_0 * (-(X[44ULL] - 4000.0) / (U_idx_3 == 0.0
      ? 1.0E-16 : U_idx_3));
  } else {
    t619 = (intermediate_der2278 - intermediate_der2277) * (intermediate_der2278
      - intermediate_der2277);
    U_idx_3 = intermediate_der2278 - intermediate_der2277;
    intermediate_der4407 = (t301_idx_0 - t460) * (-(X[44ULL] -
      intermediate_der2277) / (t619 == 0.0 ? 1.0E-16 : t619)) + -t460 / (U_idx_3
      == 0.0 ? 1.0E-16 : U_idx_3);
  }

  tlu2_1d_linear_linear_value(&lb_efOut[0ULL], &t391[0ULL], &t392[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t45[0ULL], &t46[0ULL]);
  t301_idx_0 = lb_efOut[0];
  intermediate_der2277 = t301_idx_0;
  tlu2_1d_linear_linear_value(&mb_efOut[0ULL], &t391[0ULL], &t392[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t45[0ULL], &t46[0ULL]);
  t301_idx_0 = mb_efOut[0];
  intermediate_der2278 = t301_idx_0;
  if (X[50ULL] <= intermediate_der2266) {
    t460 = 1.0 / (intermediate_der2266 == 0.0 ? 1.0E-16 : intermediate_der2266);
  } else if (X[50ULL] >= t427) {
    t460 = 1.0 / (4000.0 - t427 == 0.0 ? 1.0E-16 : 4000.0 - t427);
  } else {
    U_idx_3 = t427 - intermediate_der2266;
    t460 = 1.0 / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3);
  }

  if (X[50ULL] <= intermediate_der2266) {
    U_idx_3 = intermediate_der2266 * intermediate_der2266;
    intermediate_der4410 = -X[50ULL] / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3) *
      intermediate_der2277;
  } else if (X[50ULL] >= t427) {
    U_idx_3 = (4000.0 - t427) * (4000.0 - t427);
    intermediate_der4410 = -t301_idx_0 * (-(X[50ULL] - 4000.0) / (U_idx_3 == 0.0
      ? 1.0E-16 : U_idx_3));
  } else {
    t619 = (t427 - intermediate_der2266) * (t427 - intermediate_der2266);
    U_idx_3 = t427 - intermediate_der2266;
    intermediate_der4410 = (t301_idx_0 - intermediate_der2277) * (-(X[50ULL] -
      intermediate_der2266) / (t619 == 0.0 ? 1.0E-16 : t619)) +
      -intermediate_der2277 / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3);
  }

  tlu2_1d_linear_linear_value(&nb_efOut[0ULL], &t388[0ULL], &t389[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t45[0ULL], &t46[0ULL]);
  t301_idx_0 = nb_efOut[0];
  t465 = t301_idx_0;
  tlu2_1d_linear_linear_value(&ob_efOut[0ULL], &t388[0ULL], &t389[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t45[0ULL], &t46[0ULL]);
  t301_idx_0 = ob_efOut[0];
  if (X[54ULL] <= t429) {
    t467 = 1.0 / (t429 == 0.0 ? 1.0E-16 : t429);
  } else if (X[54ULL] >= t430) {
    t467 = 1.0 / (4000.0 - t430 == 0.0 ? 1.0E-16 : 4000.0 - t430);
  } else {
    U_idx_3 = t430 - t429;
    t467 = 1.0 / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3);
  }

  if (X[54ULL] <= t429) {
    U_idx_3 = t429 * t429;
    t468 = -X[54ULL] / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3) * t465;
  } else if (X[54ULL] >= t430) {
    U_idx_3 = (4000.0 - t430) * (4000.0 - t430);
    t468 = -t301_idx_0 * (-(X[54ULL] - 4000.0) / (U_idx_3 == 0.0 ? 1.0E-16 :
      U_idx_3));
  } else {
    t619 = (t430 - t429) * (t430 - t429);
    U_idx_3 = t430 - t429;
    t468 = (t301_idx_0 - t465) * (-(X[54ULL] - t429) / (t619 == 0.0 ? 1.0E-16 :
      t619)) + -t465 / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3);
  }

  tlu2_1d_linear_linear_value(&pb_efOut[0ULL], &t385[0ULL], &t386[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t45[0ULL], &t46[0ULL]);
  t301_idx_0 = pb_efOut[0];
  t429 = t301_idx_0;
  tlu2_1d_linear_linear_value(&qb_efOut[0ULL], &t385[0ULL], &t386[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t45[0ULL], &t46[0ULL]);
  t301_idx_0 = qb_efOut[0];
  if (X[80ULL] <= intermediate_der2149) {
    t465 = 1.0 / (intermediate_der2149 == 0.0 ? 1.0E-16 : intermediate_der2149);
  } else if (X[80ULL] >= t433) {
    t465 = 1.0 / (4000.0 - t433 == 0.0 ? 1.0E-16 : 4000.0 - t433);
  } else {
    U_idx_3 = t433 - intermediate_der2149;
    t465 = 1.0 / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3);
  }

  if (X[80ULL] <= intermediate_der2149) {
    U_idx_3 = intermediate_der2149 * intermediate_der2149;
    intermediate_der4413 = -X[80ULL] / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3) *
      t429;
  } else if (X[80ULL] >= t433) {
    U_idx_3 = (4000.0 - t433) * (4000.0 - t433);
    intermediate_der4413 = -t301_idx_0 * (-(X[80ULL] - 4000.0) / (U_idx_3 == 0.0
      ? 1.0E-16 : U_idx_3));
  } else {
    t619 = (t433 - intermediate_der2149) * (t433 - intermediate_der2149);
    U_idx_3 = t433 - intermediate_der2149;
    intermediate_der4413 = (t301_idx_0 - t429) * (-(X[80ULL] -
      intermediate_der2149) / (t619 == 0.0 ? 1.0E-16 : t619)) + -t429 / (U_idx_3
      == 0.0 ? 1.0E-16 : U_idx_3);
  }

  t303[0ULL] = intermediate_der2140;
  tlu2_linear_linear_prelookup(&rb_efOut.mField0[0ULL], &rb_efOut.mField1[0ULL],
    &rb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t303[0ULL],
    &t80[0ULL], &t46[0ULL]);
  t33 = rb_efOut;
  tlu2_2d_linear_linear_value(&sb_efOut[0ULL], &t33.mField1[0ULL], &t33.mField2
    [0ULL], &t40.mField0[0ULL], &t40.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t80[0ULL], &t45[0ULL], &t46[0ULL]);
  t44[0] = sb_efOut[0];
  t433 = -(t44[0ULL] * t463);
  intermediate_der2140 = -t433;
  t366[0ULL] = t33.mField0[0ULL];
  t366[1ULL] = t33.mField0[1ULL];
  t368[0ULL] = t33.mField2[0ULL];
  tlu2_2d_linear_linear_value(&tb_efOut[0ULL], &t366[0ULL], &t368[0ULL], &t394
    [0ULL], &t395[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t80[0ULL], &t45
    [0ULL], &t46[0ULL]);
  t301_idx_0 = tb_efOut[0];
  t433 = -(t44[0ULL] * intermediate_der4407 + t301_idx_0);
  t429 = -t433;
  t303[0ULL] = intermediate_der6068;
  tlu2_linear_linear_prelookup(&ub_efOut.mField0[0ULL], &ub_efOut.mField1[0ULL],
    &ub_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t303[0ULL],
    &t80[0ULL], &t46[0ULL]);
  t33 = ub_efOut;
  tlu2_2d_linear_linear_value(&vb_efOut[0ULL], &t33.mField1[0ULL], &t33.mField2
    [0ULL], &t41.mField0[0ULL], &t41.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t80[0ULL], &t45[0ULL], &t46[0ULL]);
  t309[0] = vb_efOut[0];
  t433 = -(t309[0ULL] * t465);
  t430 = -t433;
  t366[0ULL] = t33.mField0[0ULL];
  t366[1ULL] = t33.mField0[1ULL];
  t368[0ULL] = t33.mField2[0ULL];
  tlu2_2d_linear_linear_value(&wb_efOut[0ULL], &t366[0ULL], &t368[0ULL], &t385
    [0ULL], &t386[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t80[0ULL], &t45
    [0ULL], &t46[0ULL]);
  t301_idx_0 = wb_efOut[0];
  t433 = -(t309[0ULL] * intermediate_der4413 + t301_idx_0);
  intermediate_der2149 = -t433;
  if (X[97ULL] <= intermediate_der4393) {
    t463 = 1.0 / (intermediate_der4393 == 0.0 ? 1.0E-16 : intermediate_der4393);
  } else if (X[97ULL] >= t423) {
    t463 = 1.0 / (4000.0 - t423 == 0.0 ? 1.0E-16 : 4000.0 - t423);
  } else {
    U_idx_3 = t423 - intermediate_der4393;
    t463 = 1.0 / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3);
  }

  if (X[97ULL] <= intermediate_der4393) {
    U_idx_3 = intermediate_der4393 * intermediate_der4393;
    intermediate_der4407 = -X[97ULL] / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3) *
      intermediate_der4401;
  } else if (X[97ULL] >= t423) {
    U_idx_3 = (4000.0 - t423) * (4000.0 - t423);
    intermediate_der4407 = -t459 * (-(X[97ULL] - 4000.0) / (U_idx_3 == 0.0 ?
      1.0E-16 : U_idx_3));
  } else {
    t619 = (t423 - intermediate_der4393) * (t423 - intermediate_der4393);
    U_idx_3 = t423 - intermediate_der4393;
    intermediate_der4407 = (t459 - intermediate_der4401) * (-(X[97ULL] -
      intermediate_der4393) / (t619 == 0.0 ? 1.0E-16 : t619)) +
      -intermediate_der4401 / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3);
  }

  tlu2_2d_linear_linear_value(&xb_efOut[0ULL], &t37.mField1[0ULL], &t37.mField2
    [0ULL], &t43.mField0[0ULL], &t43.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t80[0ULL], &t45[0ULL], &t46[0ULL]);
  t265[0] = xb_efOut[0];
  t465 = t265[0ULL] * t463;
  tlu2_2d_linear_linear_value(&yb_efOut[0ULL], &t37.mField0[0ULL], &t37.mField2
    [0ULL], &t43.mField1[0ULL], &t43.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t80[0ULL], &t45[0ULL], &t46[0ULL]);
  t308[0] = yb_efOut[0];
  intermediate_der4413 = t265[0ULL] * intermediate_der4407 + t308[0ULL];
  if (intermediate_der6054 <= 0.0) {
    intermediate_der6068 = 0.0;
  } else {
    intermediate_der6068 = intermediate_der6054 >= 1.0E+6 ? 0.0 :
      0.033333333333333333;
  }

  if (intermediate_der6054 <= 0.0) {
    U_idx_3 = 0.0;
  } else {
    U_idx_3 = intermediate_der6054 >= 1.0E+6 ? 0.0 : -0.033333333333333333;
  }

  t619 = pmf_sqrt(t438) * 2.0;
  t438 = 1.0 / (t619 == 0.0 ? 1.0E-16 : t619) * intermediate_der6068 * 0.5 *
    t441;
  intermediate_der6054 = 1.0 / (t619 == 0.0 ? 1.0E-16 : t619) * U_idx_3 * 0.5 *
    t441;
  t441 = (X[0ULL] * intermediate_der4413 + t436) * 100.0;
  if (intermediate_der2266 <= intermediate_der2266) {
    t433 = intermediate_der2266 * intermediate_der2266;
    t436 = -intermediate_der2266 / (t433 == 0.0 ? 1.0E-16 : t433) *
      intermediate_der2277 + intermediate_der2277 / (intermediate_der2266 == 0.0
      ? 1.0E-16 : intermediate_der2266);
  } else if (intermediate_der2266 >= t427) {
    U_idx_3 = (4000.0 - t427) * (4000.0 - t427);
    t436 = -intermediate_der2278 * (-(intermediate_der2266 - 4000.0) / (U_idx_3 ==
      0.0 ? 1.0E-16 : U_idx_3)) + intermediate_der2277 / (4000.0 - t427 == 0.0 ?
      1.0E-16 : 4000.0 - t427);
  } else {
    t619 = (t427 - intermediate_der2266) * (t427 - intermediate_der2266);
    U_idx_3 = t427 - intermediate_der2266;
    t436 = (intermediate_der2278 - intermediate_der2277) *
      (-(intermediate_der2266 - intermediate_der2266) / (t619 == 0.0 ? 1.0E-16 :
        t619)) + (intermediate_der2277 - intermediate_der2277) / (U_idx_3 == 0.0
      ? 1.0E-16 : U_idx_3);
  }

  tlu2_2d_linear_linear_value(&ac_efOut[0ULL], &t20.mField1[0ULL], &t20.mField2
    [0ULL], &t390[0ULL], &t392[0ULL], ((_NeDynamicSystem*)(LC))->mField0, &t80
    [0ULL], &t45[0ULL], &t46[0ULL]);
  t301_idx_0 = ac_efOut[0];
  tlu2_2d_linear_linear_value(&bc_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t391[0ULL], &t392[0ULL], ((_NeDynamicSystem*)(LC))->mField0, &t80
    [0ULL], &t45[0ULL], &t46[0ULL]);
  U_idx_3 = bc_efOut[0];
  intermediate_der4413 = (X[49ULL] * (t301_idx_0 * t436 + U_idx_3) + t443) *
    100.0 + intermediate_der2277;
  if (t427 <= intermediate_der2266) {
    t433 = intermediate_der2266 * intermediate_der2266;
    t443 = -t427 / (t433 == 0.0 ? 1.0E-16 : t433) * intermediate_der2277 +
      intermediate_der2278 / (intermediate_der2266 == 0.0 ? 1.0E-16 :
      intermediate_der2266);
  } else if (t427 >= t427) {
    U_idx_3 = (4000.0 - t427) * (4000.0 - t427);
    t443 = -intermediate_der2278 * (-(t427 - 4000.0) / (U_idx_3 == 0.0 ? 1.0E-16
      : U_idx_3)) + intermediate_der2278 / (4000.0 - t427 == 0.0 ? 1.0E-16 :
      4000.0 - t427);
  } else {
    t619 = (t427 - intermediate_der2266) * (t427 - intermediate_der2266);
    U_idx_3 = t427 - intermediate_der2266;
    t443 = (intermediate_der2278 - intermediate_der2277) * (-(t427 -
      intermediate_der2266) / (t619 == 0.0 ? 1.0E-16 : t619)) +
      (intermediate_der2278 - intermediate_der2277) / (U_idx_3 == 0.0 ? 1.0E-16 :
      U_idx_3);
  }

  tlu2_2d_linear_linear_value(&cc_efOut[0ULL], &t32.mField1[0ULL], &t32.mField2
    [0ULL], &t390[0ULL], &t392[0ULL], ((_NeDynamicSystem*)(LC))->mField0, &t80
    [0ULL], &t45[0ULL], &t46[0ULL]);
  t301_idx_0 = cc_efOut[0];
  tlu2_2d_linear_linear_value(&dc_efOut[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &t391[0ULL], &t392[0ULL], ((_NeDynamicSystem*)(LC))->mField0, &t80
    [0ULL], &t45[0ULL], &t46[0ULL]);
  U_idx_3 = dc_efOut[0];
  intermediate_der2266 = (X[49ULL] * (t301_idx_0 * t443 + U_idx_3) + t445) *
    100.0 + intermediate_der2278;
  tlu2_2d_linear_linear_value(&ec_efOut[0ULL], &t37.mField1[0ULL], &t37.mField2
    [0ULL], &t43.mField0[0ULL], &t43.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t80[0ULL], &t45[0ULL], &t46[0ULL]);
  t305[0] = ec_efOut[0];
  intermediate_der2277 = t305[0ULL] * t463;
  tlu2_2d_linear_linear_value(&fc_efOut[0ULL], &t37.mField0[0ULL], &t37.mField2
    [0ULL], &t43.mField1[0ULL], &t43.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t80[0ULL], &t45[0ULL], &t46[0ULL]);
  t309[0] = fc_efOut[0];
  intermediate_der2278 = t305[0ULL] * intermediate_der4407 + t309[0ULL];
  tlu2_2d_linear_linear_value(&gc_efOut[0ULL], &t20.mField1[0ULL], &t20.mField2
    [0ULL], &t390[0ULL], &t392[0ULL], ((_NeDynamicSystem*)(LC))->mField30, &t80
    [0ULL], &t45[0ULL], &t46[0ULL]);
  t301_idx_0 = gc_efOut[0];
  tlu2_2d_linear_linear_value(&hc_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t391[0ULL], &t392[0ULL], ((_NeDynamicSystem*)(LC))->mField30, &t80
    [0ULL], &t45[0ULL], &t46[0ULL]);
  U_idx_3 = hc_efOut[0];
  t427 = t301_idx_0 * t436 + U_idx_3;
  tlu2_2d_linear_linear_value(&ic_efOut[0ULL], &t32.mField1[0ULL], &t32.mField2
    [0ULL], &t390[0ULL], &t392[0ULL], ((_NeDynamicSystem*)(LC))->mField30, &t80
    [0ULL], &t45[0ULL], &t46[0ULL]);
  t301_idx_0 = ic_efOut[0];
  tlu2_2d_linear_linear_value(&jc_efOut[0ULL], &t32.mField0[0ULL], &t32.mField2
    [0ULL], &t391[0ULL], &t392[0ULL], ((_NeDynamicSystem*)(LC))->mField30, &t80
    [0ULL], &t45[0ULL], &t46[0ULL]);
  U_idx_3 = jc_efOut[0];
  t433 = (intermediate_der2326 - t448) * (intermediate_der2326 - t448);
  intermediate_der2330 = ((t301_idx_0 * t443 + U_idx_3) - t427) *
    (-(intermediate_der2330 - t448) / (t433 == 0.0 ? 1.0E-16 : t433)) + -t427 /
    (t588 == 0.0 ? 1.0E-16 : t588);
  if (t450 <= 0.0) {
    t427 = 0.0;
  } else {
    t427 = t450 >= 1.0 ? 0.0 : intermediate_der2278 / (t588 == 0.0 ? 1.0E-16 :
      t588);
  }

  if (t450 <= 0.0) {
    t436 = 0.0;
  } else {
    t436 = t450 >= 1.0 ? 0.0 : intermediate_der2277 / (t588 == 0.0 ? 1.0E-16 :
      t588);
  }

  if (t450 <= 0.0) {
    t443 = 0.0;
  } else {
    t443 = t450 >= 1.0 ? 0.0 : intermediate_der2330;
  }

  t445 = ((t446 - t444) * t443 + (intermediate_der2266 - intermediate_der4413) *
          t451) + intermediate_der4413;
  intermediate_der2266 = (t446 - t444) * t436;
  intermediate_der2330 = (t446 - t444) * t427;
  t444 = t441 - intermediate_der2330;
  t441 = (X[0ULL] * t465 * 100.0 + 1.0) - intermediate_der2266;
  intermediate_der6068 = -t445;
  t446 = intermediate_der2330;
  if (X[26ULL] < intermediate_der4393) {
    intermediate_der2330 = 1.0 / (intermediate_der4393 == 0.0 ? 1.0E-16 :
      intermediate_der4393);
  } else {
    intermediate_der2330 = 0.0;
  }

  if (X[26ULL] < intermediate_der4393) {
    t588 = intermediate_der4393 * intermediate_der4393;
    t448 = -X[26ULL] / (t588 == 0.0 ? 1.0E-16 : t588) * intermediate_der4401;
  } else {
    t448 = 0.0;
  }

  if (X[27ULL] > t423) {
    t588 = (4000.0 - t423) * (4000.0 - t423);
    intermediate_der2326 = -t459 * (-(X[27ULL] - 4000.0) / (t588 == 0.0 ?
      1.0E-16 : t588));
  } else {
    intermediate_der2326 = 0.0;
  }

  if (X[27ULL] > t423) {
    t450 = 1.0 / (4000.0 - t423 == 0.0 ? 1.0E-16 : 4000.0 - t423);
  } else {
    t450 = 0.0;
  }

  tlu2_2d_linear_linear_value(&kc_efOut[0ULL], &t36.mField1[0ULL], &t36.mField2
    [0ULL], &t43.mField0[0ULL], &t43.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField31, &t107[0ULL], &t45[0ULL], &t46[0ULL]);
  t44[0] = kc_efOut[0];
  t451 = t44[0ULL] * intermediate_der2330;
  tlu2_2d_linear_linear_value(&lc_efOut[0ULL], &t375[0ULL], &t377[0ULL], &t397
    [0ULL], &t398[0ULL], ((_NeDynamicSystem*)(LC))->mField31, &t107[0ULL], &t45
    [0ULL], &t46[0ULL]);
  t301_idx_0 = lc_efOut[0];
  intermediate_der2330 = t44[0ULL] * t448 + t301_idx_0;
  tlu2_2d_linear_linear_value(&mc_efOut[0ULL], &t35.mField1[0ULL], &t35.mField2
    [0ULL], &t43.mField0[0ULL], &t43.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField32, &t107[0ULL], &t45[0ULL], &t46[0ULL]);
  t266[0] = mc_efOut[0];
  tlu2_2d_linear_linear_value(&nc_efOut[0ULL], &t369[0ULL], &t371[0ULL], &t397
    [0ULL], &t398[0ULL], ((_NeDynamicSystem*)(LC))->mField32, &t107[0ULL], &t45
    [0ULL], &t46[0ULL]);
  t301_idx_0 = nc_efOut[0];
  t448 = t266[0ULL] * intermediate_der2326 + t301_idx_0;
  intermediate_der2326 = t266[0ULL] * t450;
  t619 = -(X[28ULL] * Steam_Drum_v_liq);
  t588 = (X[28ULL] * Steam_Drum_v_liq + X[29ULL] * t452) * (X[28ULL] *
    Steam_Drum_v_liq + X[29ULL] * t452);
  t433 = X[28ULL] * Steam_Drum_v_liq + X[29ULL] * t452;
  t450 = t619 / (t588 == 0.0 ? 1.0E-16 : t588) * Steam_Drum_v_liq +
    Steam_Drum_v_liq / (t433 == 0.0 ? 1.0E-16 : t433);
  Steam_Drum_v_liq = t619 / (t588 == 0.0 ? 1.0E-16 : t588) * X[28ULL] * t451 +
    X[28ULL] * t451 / (t433 == 0.0 ? 1.0E-16 : t433);
  t451 = (X[28ULL] * intermediate_der2330 + X[29ULL] * t448) * (t619 / (t588 ==
    0.0 ? 1.0E-16 : t588)) + X[28ULL] * intermediate_der2330 / (t433 == 0.0 ?
    1.0E-16 : t433);
  t448 = t619 / (t588 == 0.0 ? 1.0E-16 : t588) * X[29ULL] * intermediate_der2326;
  intermediate_der2326 = t450;
  t450 = t451;
  intermediate_der2330 = t619 / (t588 == 0.0 ? 1.0E-16 : t588) * t452;
  if (X[147ULL] <= intermediate_der4393) {
    t451 = 1.0 / (intermediate_der4393 == 0.0 ? 1.0E-16 : intermediate_der4393);
  } else if (X[147ULL] >= t423) {
    t451 = 1.0 / (4000.0 - t423 == 0.0 ? 1.0E-16 : 4000.0 - t423);
  } else {
    t588 = t423 - intermediate_der4393;
    t451 = 1.0 / (t588 == 0.0 ? 1.0E-16 : t588);
  }

  if (X[147ULL] <= intermediate_der4393) {
    t588 = intermediate_der4393 * intermediate_der4393;
    t452 = -X[147ULL] / (t588 == 0.0 ? 1.0E-16 : t588) * intermediate_der4401;
  } else if (X[147ULL] >= t423) {
    U_idx_3 = (4000.0 - t423) * (4000.0 - t423);
    t452 = -t459 * (-(X[147ULL] - 4000.0) / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3));
  } else {
    U_idx_3 = (t423 - intermediate_der4393) * (t423 - intermediate_der4393);
    t619 = t423 - intermediate_der4393;
    t452 = (t459 - intermediate_der4401) * (-(X[147ULL] - intermediate_der4393) /
      (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3)) + -intermediate_der4401 / (t619 ==
      0.0 ? 1.0E-16 : t619);
  }

  t303[0ULL] = t454;
  tlu2_linear_linear_prelookup(&oc_efOut.mField0[0ULL], &oc_efOut.mField1[0ULL],
    &oc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t303[0ULL],
    &t80[0ULL], &t46[0ULL]);
  t32 = oc_efOut;
  tlu2_2d_linear_linear_value(&pc_efOut[0ULL], &t32.mField1[0ULL], &t32.mField2
    [0ULL], &t43.mField0[0ULL], &t43.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t80[0ULL], &t45[0ULL], &t46[0ULL]);
  t266[0] = pc_efOut[0];
  t619 = -(t266[0ULL] * t451);
  intermediate_der4393 = -t619;
  t366[0ULL] = t32.mField0[0ULL];
  t366[1ULL] = t32.mField0[1ULL];
  t368[0ULL] = t32.mField2[0ULL];
  tlu2_2d_linear_linear_value(&qc_efOut[0ULL], &t366[0ULL], &t368[0ULL], &t397
    [0ULL], &t398[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t80[0ULL], &t45
    [0ULL], &t46[0ULL]);
  t303[0] = qc_efOut[0];
  t619 = -(t266[0ULL] * t452 + t303[0ULL]);
  t423 = -t619;
  t619 = -(t265[0ULL] * t463);
  t451 = -t619;
  t619 = -(t265[0ULL] * intermediate_der4407 + t308[0ULL]);
  t451 = X[0ULL] * t451 * 100.0 + 1.0;
  t452 = (X[0ULL] * -t619 + intermediate_der4400) * 100.0;
  t619 = -(t305[0ULL] * t463);
  t454 = -t619;
  t619 = -(t305[0ULL] * intermediate_der4407 + t309[0ULL]);
  intermediate_der4400 = -t619;
  tlu2_2d_linear_linear_value(&rc_efOut[0ULL], &t37.mField1[0ULL], &t37.mField2
    [0ULL], &t43.mField0[0ULL], &t43.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t80[0ULL], &t45[0ULL], &t46[0ULL]);
  t44[0] = rc_efOut[0];
  t619 = -(t44[0ULL] * t463);
  intermediate_der4401 = -t619;
  tlu2_2d_linear_linear_value(&sc_efOut[0ULL], &t381[0ULL], &t383[0ULL], &t397
    [0ULL], &t398[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t80[0ULL], &t45
    [0ULL], &t46[0ULL]);
  t305[0] = sc_efOut[0];
  t619 = -(t44[0ULL] * intermediate_der4407 + t305[0ULL]);
  t459 = -t619;
  tlu2_2d_linear_linear_value(&tc_efOut[0ULL], &t38.mField1[0ULL], &t38.mField2
    [0ULL], &t39.mField0[0ULL], &t39.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t80[0ULL], &t45[0ULL], &t46[0ULL]);
  t308[0] = tc_efOut[0];
  t619 = -(t308[0ULL] * t460);
  t463 = -t619;
  tlu2_2d_linear_linear_value(&uc_efOut[0ULL], &t396[0ULL], &t374[0ULL], &t391
    [0ULL], &t392[0ULL], ((_NeDynamicSystem*)(LC))->mField0, &t80[0ULL], &t45
    [0ULL], &t46[0ULL]);
  t305[0] = uc_efOut[0];
  t619 = -(t308[0ULL] * intermediate_der4410 + t305[0ULL]);
  t463 = X[49ULL] * t463 * 100.0 + 1.0;
  t428 = (X[49ULL] * -t619 + t428) * 100.0;
  tlu2_2d_linear_linear_value(&vc_efOut[0ULL], &t38.mField1[0ULL], &t38.mField2
    [0ULL], &t39.mField0[0ULL], &t39.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t80[0ULL], &t45[0ULL], &t46[0ULL]);
  t309[0] = vc_efOut[0];
  t619 = -(t309[0ULL] * t460);
  intermediate_der4407 = -t619;
  tlu2_2d_linear_linear_value(&wc_efOut[0ULL], &t396[0ULL], &t374[0ULL], &t391
    [0ULL], &t392[0ULL], ((_NeDynamicSystem*)(LC))->mField30, &t80[0ULL], &t45
    [0ULL], &t46[0ULL]);
  t308[0] = wc_efOut[0];
  t619 = -(t309[0ULL] * intermediate_der4410 + t308[0ULL]);
  t465 = -t619;
  tlu2_2d_linear_linear_value(&xc_efOut[0ULL], &t38.mField1[0ULL], &t38.mField2
    [0ULL], &t39.mField0[0ULL], &t39.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t80[0ULL], &t45[0ULL], &t46[0ULL]);
  t309[0] = xc_efOut[0];
  t619 = -(t309[0ULL] * t460);
  t460 = -t619;
  tlu2_2d_linear_linear_value(&yc_efOut[0ULL], &t396[0ULL], &t374[0ULL], &t391
    [0ULL], &t392[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t80[0ULL], &t45
    [0ULL], &t46[0ULL]);
  t308[0] = yc_efOut[0];
  t619 = -(t309[0ULL] * intermediate_der4410 + t308[0ULL]);
  intermediate_der4410 = -t619;
  tlu2_2d_linear_linear_value(&ad_efOut[0ULL], &t34.mField1[0ULL], &t34.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t80[0ULL], &t45[0ULL], &t46[0ULL]);
  t309[0] = ad_efOut[0];
  t619 = -(t309[0ULL] * t467);
  intermediate_der4413 = -t619;
  tlu2_2d_linear_linear_value(&bd_efOut[0ULL], &t378[0ULL], &t380[0ULL], &t388
    [0ULL], &t389[0ULL], ((_NeDynamicSystem*)(LC))->mField0, &t80[0ULL], &t45
    [0ULL], &t46[0ULL]);
  t308[0] = bd_efOut[0];
  t619 = -(t309[0ULL] * t468 + t308[0ULL]);
  intermediate_der4413 = X[53ULL] * intermediate_der4413 * 100.0 + 1.0;
  intermediate_der4414 = (X[53ULL] * -t619 + intermediate_der4414) * 100.0;
  tlu2_2d_linear_linear_value(&cd_efOut[0ULL], &t34.mField1[0ULL], &t34.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t80[0ULL], &t45[0ULL], &t46[0ULL]);
  t44[0] = cd_efOut[0];
  t619 = -(t44[0ULL] * t467);
  t467 = -t619;
  tlu2_2d_linear_linear_value(&dd_efOut[0ULL], &t378[0ULL], &t380[0ULL], &t388
    [0ULL], &t389[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t80[0ULL], &t45
    [0ULL], &t46[0ULL]);
  t309[0] = dd_efOut[0];
  t619 = -(t44[0ULL] * t468 + t309[0ULL]);
  t468 = -t619;
  t438 = ((real_T)(M[56ULL] != 0) * 2.0 - 1.0) * t438 / 0.5;
  t619 = ((real_T)(M[56ULL] != 0) * 2.0 - 1.0) * intermediate_der6054;
  if (t442 <= 0.0) {
    intermediate_der6054 = 0.0;
  } else {
    intermediate_der6054 = t442 >= 1.0 ? 0.0 : -((t440 - 0.8) * t438 * 0.4);
  }

  if (t442 <= 0.0) {
    t440 = 0.0;
  } else {
    t440 = t442 >= 1.0 ? 0.0 : -((t440 - 0.8) * (t619 / 0.5) * 0.4);
  }

  t441 = t435 > 0.01 ? t441 * t628 : 0.0;
  intermediate_der6068 = t435 > 0.01 ? t453 * t440 + intermediate_der6068 * t628
    : 0.0;
  t442 = t435 > 0.01 ? t453 * intermediate_der6054 + t444 * t628 : 0.0;
  t435 = intermediate_der6054;
  t438 = t441;
  t628 = ((real_T)(M[63ULL] != 0) * 2.0 - 1.0) * X[56ULL] * t441;
  t310[0ULL] = 0.1;
  t310[1ULL] = 0.1;
  t310[2ULL] = t435;
  t310[3ULL] = t442;
  t310[4ULL] = t446;
  t310[5ULL] = t427;
  t310[6ULL] = intermediate_der2278 * 0.001;
  t310[7ULL] = ((real_T)(M[63ULL] != 0) * 2.0 - 1.0) * X[56ULL] * t442 * 0.001;
  t310[8ULL] = t450;
  t310[9ULL] = t423;
  t310[10ULL] = t452;
  t310[11ULL] = intermediate_der4400 * 0.001;
  t310[12ULL] = t459;
  t313[0ULL] = 0.1;
  t313[1ULL] = t440;
  t313[2ULL] = intermediate_der6068;
  t313[3ULL] = t445;
  t313[4ULL] = t443;
  t313[5ULL] = ((real_T)(M[63ULL] != 0) * 2.0 - 1.0) * X[56ULL] *
    intermediate_der6068 * 0.001;
  t313[6ULL] = t428;
  t313[7ULL] = t465 * 0.001;
  t313[8ULL] = intermediate_der4410;
  t314[0ULL] = 1.0;
  t314[1ULL] = t463;
  t314[2ULL] = intermediate_der4407 * 0.001;
  t314[3ULL] = t460;
  t315[0ULL] = 0.1;
  t315[1ULL] = 0.1;
  t315[2ULL] = intermediate_der4414;
  t315[3ULL] = t468;
  t317[0ULL] = 1.0;
  t317[1ULL] = 1.0;
  t317[2ULL] = 1.0;
  t317[3ULL] = ((real_T)(M[63ULL] != 0) * 2.0 - 1.0) * t627 * 0.001;
  t319[0ULL] = 1.0;
  t319[1ULL] = t438;
  t319[2ULL] = intermediate_der2266;
  t319[3ULL] = t436;
  t319[4ULL] = intermediate_der2277 * 0.001;
  t319[5ULL] = t628 * 0.001;
  t319[6ULL] = t451;
  t319[7ULL] = t454 * 0.001;
  t319[8ULL] = intermediate_der4401;
  for (t328 = 0ULL; t328 < 13ULL; t328++) {
    t261[t328] = t310[t328];
  }

  t261[13ULL] = Steam_Drum_v_liq;
  t261[14ULL] = t448;
  t261[15ULL] = intermediate_der2326;
  t261[16ULL] = intermediate_der2330;
  t261[17ULL] = t429;
  t261[18ULL] = t429;
  t261[19ULL] = intermediate_der2140;
  t261[20ULL] = intermediate_der2140;
  for (t328 = 0ULL; t328 < 9ULL; t328++) {
    t261[t328 + 21ULL] = t313[t328];
  }

  for (t328 = 0ULL; t328 < 4ULL; t328++) {
    t261[t328 + 30ULL] = t314[t328];
  }

  for (t328 = 0ULL; t328 < 4ULL; t328++) {
    t261[t328 + 34ULL] = t315[t328];
  }

  t261[38ULL] = 1.0;
  t261[39ULL] = intermediate_der4413;
  t261[40ULL] = t467;
  for (t328 = 0ULL; t328 < 4ULL; t328++) {
    t261[t328 + 41ULL] = t317[t328];
  }

  t261[45ULL] = -1.0;
  t261[46ULL] = intermediate_der2149;
  t261[47ULL] = 0.1;
  t261[48ULL] = t430;
  for (t328 = 0ULL; t328 < 9ULL; t328++) {
    t261[t328 + 49ULL] = t319[t328];
  }

  out.mX[0] = t261[0];
  out.mX[1] = t261[1];
  out.mX[2] = t261[2];
  out.mX[3] = t261[3];
  out.mX[4] = t261[4];
  out.mX[5] = t261[5];
  out.mX[6] = t261[6];
  out.mX[7] = t261[7];
  out.mX[8] = t261[8];
  out.mX[9] = t261[9];
  out.mX[10] = t261[10];
  out.mX[11] = t261[11];
  out.mX[12] = t261[12];
  out.mX[13] = t261[13];
  out.mX[14] = t261[14];
  out.mX[15] = t261[15];
  out.mX[16] = t261[16];
  out.mX[17] = t261[17];
  out.mX[18] = t261[18];
  out.mX[19] = t261[19];
  out.mX[20] = t261[20];
  out.mX[21] = t261[21];
  out.mX[22] = t261[22];
  out.mX[23] = t261[23];
  out.mX[24] = t261[24];
  out.mX[25] = t261[25];
  out.mX[26] = t261[26];
  out.mX[27] = t261[27];
  out.mX[28] = t261[28];
  out.mX[29] = t261[29];
  out.mX[30] = t261[30];
  out.mX[31] = t261[31];
  out.mX[32] = t261[32];
  out.mX[33] = t261[33];
  out.mX[34] = t261[34];
  out.mX[35] = t261[35];
  out.mX[36] = t261[36];
  out.mX[37] = t261[37];
  out.mX[38] = t261[38];
  out.mX[39] = t261[39];
  out.mX[40] = t261[40];
  out.mX[41] = t261[41];
  out.mX[42] = t261[42];
  out.mX[43] = t261[43];
  out.mX[44] = t261[44];
  out.mX[45] = t261[45];
  out.mX[46] = t261[46];
  out.mX[47] = t261[47];
  out.mX[48] = t261[48];
  out.mX[49] = t261[49];
  out.mX[50] = t261[50];
  out.mX[51] = t261[51];
  out.mX[52] = t261[52];
  out.mX[53] = t261[53];
  out.mX[54] = t261[54];
  out.mX[55] = t261[55];
  out.mX[56] = t261[56];
  out.mX[57] = t261[57];
  out.mX[58] = 1.0;
  out.mX[59] = 1.0;
  out.mX[60] = 0.099999999999999992;
  out.mX[61] = 1.0;
  out.mX[62] = intermediate_der4393;
  out.mX[63] = 1.0;
  out.mX[64] = 1.0;
  out.mX[65] = 1.0;
  out.mX[66] = 1.0;
  (void)LC;
  (void)t630;
  return 0;
}
