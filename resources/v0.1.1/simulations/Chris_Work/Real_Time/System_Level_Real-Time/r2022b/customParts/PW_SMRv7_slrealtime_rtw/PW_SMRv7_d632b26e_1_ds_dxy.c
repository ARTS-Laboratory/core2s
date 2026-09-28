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
  NeDynamicSystemInput *t670, NeDsMethodOutput *t671)
{
  ETTS0 ab_efOut;
  ETTS0 cb_efOut;
  ETTS0 d_efOut;
  ETTS0 eb_efOut;
  ETTS0 efOut;
  ETTS0 g_efOut;
  ETTS0 gb_efOut;
  ETTS0 j_efOut;
  ETTS0 m_efOut;
  ETTS0 p_efOut;
  ETTS0 rc_efOut;
  ETTS0 s_efOut;
  ETTS0 sb_efOut;
  ETTS0 t21;
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
  ETTS0 t44;
  ETTS0 u_efOut;
  ETTS0 vb_efOut;
  PmRealVector out;
  real_T X[183];
  real_T t265[75];
  real_T t314[16];
  real_T t323[12];
  real_T t317[11];
  real_T t318[4];
  real_T t319[4];
  real_T t321[4];
  real_T t377[2];
  real_T t383[2];
  real_T t390[2];
  real_T t392[2];
  real_T t393[2];
  real_T t395[2];
  real_T t396[2];
  real_T t398[2];
  real_T t401[2];
  real_T t402[2];
  real_T t404[2];
  real_T t405[2];
  real_T ac_efOut[1];
  real_T ad_efOut[1];
  real_T b_efOut[1];
  real_T bb_efOut[1];
  real_T bc_efOut[1];
  real_T bd_efOut[1];
  real_T c_efOut[1];
  real_T cc_efOut[1];
  real_T cd_efOut[1];
  real_T db_efOut[1];
  real_T dc_efOut[1];
  real_T dd_efOut[1];
  real_T e_efOut[1];
  real_T ec_efOut[1];
  real_T ed_efOut[1];
  real_T f_efOut[1];
  real_T fb_efOut[1];
  real_T fc_efOut[1];
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
  real_T oc_efOut[1];
  real_T pb_efOut[1];
  real_T pc_efOut[1];
  real_T q_efOut[1];
  real_T qb_efOut[1];
  real_T qc_efOut[1];
  real_T r_efOut[1];
  real_T rb_efOut[1];
  real_T sc_efOut[1];
  real_T t266[1];
  real_T t269[1];
  real_T t271[1];
  real_T t272[1];
  real_T t304[1];
  real_T t309[1];
  real_T t311[1];
  real_T t45[1];
  real_T t80[1];
  real_T t_efOut[1];
  real_T tb_efOut[1];
  real_T tc_efOut[1];
  real_T ub_efOut[1];
  real_T uc_efOut[1];
  real_T v_efOut[1];
  real_T vc_efOut[1];
  real_T w_efOut[1];
  real_T wb_efOut[1];
  real_T wc_efOut[1];
  real_T x_efOut[1];
  real_T xb_efOut[1];
  real_T xc_efOut[1];
  real_T y_efOut[1];
  real_T yb_efOut[1];
  real_T yc_efOut[1];
  real_T U_idx_3;
  real_T intermediate_der2140;
  real_T intermediate_der2277;
  real_T intermediate_der2283;
  real_T intermediate_der2286;
  real_T intermediate_der2296;
  real_T intermediate_der2298;
  real_T intermediate_der2321;
  real_T intermediate_der4419;
  real_T intermediate_der4427;
  real_T intermediate_der4428;
  real_T intermediate_der4436;
  real_T intermediate_der4440;
  real_T intermediate_der5298;
  real_T intermediate_der6084;
  real_T intermediate_der6086;
  real_T intermediate_der6087;
  real_T intermediate_der6104;
  real_T t303_idx_0;
  real_T t431;
  real_T t434;
  real_T t436;
  real_T t437;
  real_T t438;
  real_T t440;
  real_T t441;
  real_T t444;
  real_T t445;
  real_T t447;
  real_T t452;
  real_T t453;
  real_T t454;
  real_T t455;
  real_T t457;
  real_T t458;
  real_T t459;
  real_T t461;
  real_T t465;
  real_T t467;
  real_T t468;
  real_T t469;
  real_T t470;
  real_T t471;
  real_T t472;
  real_T t473;
  real_T t474;
  real_T t476;
  real_T t479;
  real_T t480;
  real_T t482;
  real_T t483;
  real_T t484;
  real_T t485;
  real_T t489;
  real_T t576;
  real_T t603;
  real_T t624;
  real_T t626;
  real_T t628;
  real_T t666;
  real_T t669;
  size_t t111[1];
  size_t t376[1];
  size_t t379[1];
  size_t t382[1];
  size_t t385[1];
  size_t t391[1];
  size_t t394[1];
  size_t t397[1];
  size_t t400[1];
  size_t t403[1];
  size_t t406[1];
  size_t t46[1];
  size_t t47[1];
  size_t t81[1];
  size_t t334;
  int32_T M[128];
  int32_T b;
  for (b = 0; b < 128; b++) {
    M[b] = t670->mM.mX[b];
  }

  U_idx_3 = t670->mU.mX[3];
  for (b = 0; b < 183; b++) {
    X[b] = t670->mX.mX[b];
  }

  out = t671->mDXY;
  t45[0ULL] = X[0ULL];
  t46[0] = 100ULL;
  t47[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t45[0ULL], &t46
    [0ULL], &t47[0ULL]);
  t44 = efOut;
  t404[0ULL] = t44.mField0[0ULL];
  t404[1ULL] = t44.mField0[1ULL];
  t405[0ULL] = t44.mField1[0ULL];
  t405[1ULL] = t44.mField1[1ULL];
  t406[0ULL] = t44.mField2[0ULL];
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t404[0ULL], &t406[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t46[0ULL], &t47[0ULL]);
  t266[0] = b_efOut[0];
  intermediate_der4419 = t266[0ULL];
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t404[0ULL], &t406[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t46[0ULL], &t47[0ULL]);
  t311[0] = c_efOut[0];
  t431 = t311[0ULL];
  t266[0ULL] = X[43ULL];
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t266[0ULL],
    &t46[0ULL], &t47[0ULL]);
  t43 = d_efOut;
  t401[0ULL] = t43.mField0[0ULL];
  t401[1ULL] = t43.mField0[1ULL];
  t402[0ULL] = t43.mField1[0ULL];
  t402[1ULL] = t43.mField1[1ULL];
  t403[0ULL] = t43.mField2[0ULL];
  tlu2_1d_linear_linear_value(&e_efOut[0ULL], &t401[0ULL], &t403[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t46[0ULL], &t47[0ULL]);
  t309[0] = e_efOut[0];
  intermediate_der2298 = t309[0ULL];
  tlu2_1d_linear_linear_value(&f_efOut[0ULL], &t401[0ULL], &t403[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t46[0ULL], &t47[0ULL]);
  t269[0] = f_efOut[0];
  intermediate_der2277 = t269[0ULL];
  if (X[44ULL] <= intermediate_der2298) {
    intermediate_der2140 = X[44ULL] / (intermediate_der2298 == 0.0 ? 1.0E-16 :
      intermediate_der2298) - 1.0;
  } else if (X[44ULL] >= intermediate_der2277) {
    intermediate_der2140 = (X[44ULL] - 4000.0) / (4000.0 - intermediate_der2277 ==
      0.0 ? 1.0E-16 : 4000.0 - intermediate_der2277) + 2.0;
  } else {
    t438 = intermediate_der2277 - intermediate_der2298;
    intermediate_der2140 = (X[44ULL] - intermediate_der2298) / (t438 == 0.0 ?
      1.0E-16 : t438);
  }

  t311[0ULL] = X[49ULL];
  tlu2_linear_linear_prelookup(&g_efOut.mField0[0ULL], &g_efOut.mField1[0ULL],
    &g_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t311[0ULL],
    &t46[0ULL], &t47[0ULL]);
  t39 = g_efOut;
  t395[0ULL] = t39.mField0[0ULL];
  t395[1ULL] = t39.mField0[1ULL];
  t396[0ULL] = t39.mField1[0ULL];
  t396[1ULL] = t39.mField1[1ULL];
  t397[0ULL] = t39.mField2[0ULL];
  tlu2_1d_linear_linear_value(&h_efOut[0ULL], &t395[0ULL], &t397[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t46[0ULL], &t47[0ULL]);
  t80[0] = h_efOut[0];
  t434 = t80[0ULL];
  tlu2_1d_linear_linear_value(&i_efOut[0ULL], &t395[0ULL], &t397[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t46[0ULL], &t47[0ULL]);
  t271[0] = i_efOut[0];
  intermediate_der2283 = t271[0ULL];
  if (X[50ULL] <= t434) {
    t436 = X[50ULL] / (t434 == 0.0 ? 1.0E-16 : t434) - 1.0;
  } else if (X[50ULL] >= intermediate_der2283) {
    t436 = (X[50ULL] - 4000.0) / (4000.0 - intermediate_der2283 == 0.0 ? 1.0E-16
      : 4000.0 - intermediate_der2283) + 2.0;
  } else {
    intermediate_der6084 = intermediate_der2283 - t434;
    t436 = (X[50ULL] - t434) / (intermediate_der6084 == 0.0 ? 1.0E-16 :
      intermediate_der6084);
  }

  t309[0ULL] = X[53ULL];
  tlu2_linear_linear_prelookup(&j_efOut.mField0[0ULL], &j_efOut.mField1[0ULL],
    &j_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t309[0ULL],
    &t46[0ULL], &t47[0ULL]);
  t42 = j_efOut;
  t392[0ULL] = t42.mField0[0ULL];
  t392[1ULL] = t42.mField0[1ULL];
  t393[0ULL] = t42.mField1[0ULL];
  t393[1ULL] = t42.mField1[1ULL];
  t394[0ULL] = t42.mField2[0ULL];
  tlu2_1d_linear_linear_value(&k_efOut[0ULL], &t392[0ULL], &t394[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t46[0ULL], &t47[0ULL]);
  t272[0] = k_efOut[0];
  t437 = t272[0ULL];
  tlu2_1d_linear_linear_value(&l_efOut[0ULL], &t392[0ULL], &t394[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t46[0ULL], &t47[0ULL]);
  t304[0] = l_efOut[0];
  t438 = t304[0ULL];
  if (X[54ULL] <= t437) {
    intermediate_der4440 = X[54ULL] / (t437 == 0.0 ? 1.0E-16 : t437) - 1.0;
  } else if (X[54ULL] >= t438) {
    intermediate_der4440 = (X[54ULL] - 4000.0) / (4000.0 - t438 == 0.0 ? 1.0E-16
      : 4000.0 - t438) + 2.0;
  } else {
    intermediate_der6086 = t438 - t437;
    intermediate_der4440 = (X[54ULL] - t437) / (intermediate_der6086 == 0.0 ?
      1.0E-16 : intermediate_der6086);
  }

  t269[0ULL] = X[79ULL];
  tlu2_linear_linear_prelookup(&m_efOut.mField0[0ULL], &m_efOut.mField1[0ULL],
    &m_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t269[0ULL],
    &t46[0ULL], &t47[0ULL]);
  t41 = m_efOut;
  t401[0ULL] = t41.mField0[0ULL];
  t401[1ULL] = t41.mField0[1ULL];
  t390[0ULL] = t41.mField1[0ULL];
  t390[1ULL] = t41.mField1[1ULL];
  t391[0ULL] = t41.mField2[0ULL];
  tlu2_1d_linear_linear_value(&n_efOut[0ULL], &t401[0ULL], &t391[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t46[0ULL], &t47[0ULL]);
  t303_idx_0 = n_efOut[0];
  t440 = t303_idx_0;
  tlu2_1d_linear_linear_value(&o_efOut[0ULL], &t401[0ULL], &t391[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t46[0ULL], &t47[0ULL]);
  t303_idx_0 = o_efOut[0];
  t441 = t303_idx_0;
  if (X[80ULL] <= t440) {
    intermediate_der4427 = X[80ULL] / (t440 == 0.0 ? 1.0E-16 : t440) - 1.0;
  } else if (X[80ULL] >= t303_idx_0) {
    intermediate_der4427 = (X[80ULL] - 4000.0) / (4000.0 - t303_idx_0 == 0.0 ?
      1.0E-16 : 4000.0 - t303_idx_0) + 2.0;
  } else {
    t453 = t303_idx_0 - t440;
    intermediate_der4427 = (X[80ULL] - t440) / (t453 == 0.0 ? 1.0E-16 : t453);
  }

  intermediate_der6084 = X[0ULL] - X[49ULL];
  if (X[97ULL] <= intermediate_der4419) {
    t444 = X[97ULL] / (intermediate_der4419 == 0.0 ? 1.0E-16 :
                       intermediate_der4419) - 1.0;
  } else if (X[97ULL] >= t431) {
    t444 = (X[97ULL] - 4000.0) / (4000.0 - t431 == 0.0 ? 1.0E-16 : 4000.0 - t431)
      + 2.0;
  } else {
    t458 = t431 - intermediate_der4419;
    t444 = (X[97ULL] - intermediate_der4419) / (t458 == 0.0 ? 1.0E-16 : t458);
  }

  t80[0ULL] = t444;
  t81[0] = 50ULL;
  tlu2_linear_linear_prelookup(&p_efOut.mField0[0ULL], &p_efOut.mField1[0ULL],
    &p_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t80[0ULL],
    &t81[0ULL], &t47[0ULL]);
  t38 = p_efOut;
  t398[0ULL] = t38.mField0[0ULL];
  t398[1ULL] = t38.mField0[1ULL];
  t400[0ULL] = t38.mField2[0ULL];
  tlu2_2d_linear_linear_value(&q_efOut[0ULL], &t398[0ULL], &t400[0ULL], &t404
    [0ULL], &t406[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t81[0ULL], &t46
    [0ULL], &t47[0ULL]);
  t303_idx_0 = q_efOut[0];
  t444 = t303_idx_0;
  t624 = pmf_sqrt(t303_idx_0 * 461.5);
  tlu2_2d_linear_linear_value(&r_efOut[0ULL], &t38.mField0[0ULL], &t38.mField2
    [0ULL], &t44.mField0[0ULL], &t44.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t81[0ULL], &t46[0ULL], &t47[0ULL]);
  t45[0] = r_efOut[0];
  intermediate_der2296 = t45[0ULL];
  if (U_idx_3 <= 0.0) {
    intermediate_der6086 = 0.0;
  } else {
    intermediate_der6086 = U_idx_3 >= 1.0 ? 1.0 : U_idx_3;
  }

  t447 = intermediate_der6086 * 0.0002;
  t445 = X[49ULL] / (X[0ULL] == 0.0 ? 1.0E-16 : X[0ULL]);
  if (t445 <= 0.0) {
    intermediate_der6087 = 0.0;
  } else {
    intermediate_der6087 = t445 >= 1.0 ? 1.0 : t445;
  }

  intermediate_der5298 = (pmf_pow(intermediate_der6087, 1.5384615384615383) -
    pmf_pow(intermediate_der6087, 1.7692307692307689)) * 8.6666666666666661;
  if (intermediate_der5298 <= 0.0) {
    intermediate_der6104 = 0.0;
  } else {
    intermediate_der6104 = intermediate_der5298 >= 1.0E+6 ? 1.0E+6 :
      intermediate_der5298;
  }

  t603 = t447 * X[0ULL] * 0.85;
  t452 = t603 / (t624 == 0.0 ? 1.0E-16 : t624) * pmf_sqrt(intermediate_der6104);
  if (intermediate_der6087 < 0.545727733814065) {
    t453 = X[0ULL] * 0.85 / (t624 == 0.0 ? 1.0E-16 : t624) * 0.667262351240862 *
      t447 * 100000.0;
  } else {
    t453 = t452 * 100000.0;
  }

  intermediate_der6086 = intermediate_der6084 > 0.01 ? t453 : 0.0;
  t465 = fabs(intermediate_der6086);
  t452 = t465 / 1.5;
  t453 = (0.8 - (t452 - 0.8) * (t452 - 0.8) * 0.2) - (intermediate_der6087 -
    0.25) * (intermediate_der6087 - 0.25) * 0.35;
  if (t434 <= t434) {
    t454 = t434 / (t434 == 0.0 ? 1.0E-16 : t434) - 1.0;
  } else if (t434 >= intermediate_der2283) {
    t454 = (t434 - 4000.0) / (4000.0 - intermediate_der2283 == 0.0 ? 1.0E-16 :
      4000.0 - intermediate_der2283) + 2.0;
  } else {
    t469 = intermediate_der2283 - t434;
    t454 = (t434 - t434) / (t469 == 0.0 ? 1.0E-16 : t469);
  }

  t271[0ULL] = t454;
  tlu2_linear_linear_prelookup(&s_efOut.mField0[0ULL], &s_efOut.mField1[0ULL],
    &s_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t271[0ULL],
    &t81[0ULL], &t47[0ULL]);
  t21 = s_efOut;
  tlu2_2d_linear_linear_value(&t_efOut[0ULL], &t21.mField0[0ULL], &t21.mField2
    [0ULL], &t395[0ULL], &t397[0ULL], ((_NeDynamicSystem*)(LC))->mField0, &t81
    [0ULL], &t46[0ULL], &t47[0ULL]);
  t303_idx_0 = t_efOut[0];
  t454 = t303_idx_0;
  t455 = X[49ULL] * t303_idx_0 * 100.0 + t434;
  if (intermediate_der2283 <= t434) {
    intermediate_der2286 = intermediate_der2283 / (t434 == 0.0 ? 1.0E-16 : t434)
      - 1.0;
  } else if (intermediate_der2283 >= intermediate_der2283) {
    intermediate_der2286 = (intermediate_der2283 - 4000.0) / (4000.0 -
      intermediate_der2283 == 0.0 ? 1.0E-16 : 4000.0 - intermediate_der2283) +
      2.0;
  } else {
    t473 = intermediate_der2283 - t434;
    intermediate_der2286 = (intermediate_der2283 - t434) / (t473 == 0.0 ?
      1.0E-16 : t473);
  }

  t272[0ULL] = intermediate_der2286;
  tlu2_linear_linear_prelookup(&u_efOut.mField0[0ULL], &u_efOut.mField1[0ULL],
    &u_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t272[0ULL],
    &t81[0ULL], &t47[0ULL]);
  t40 = u_efOut;
  tlu2_2d_linear_linear_value(&v_efOut[0ULL], &t40.mField0[0ULL], &t40.mField2
    [0ULL], &t395[0ULL], &t397[0ULL], ((_NeDynamicSystem*)(LC))->mField0, &t81
    [0ULL], &t46[0ULL], &t47[0ULL]);
  t303_idx_0 = v_efOut[0];
  intermediate_der2286 = t303_idx_0;
  t457 = X[49ULL] * t303_idx_0 * 100.0 + intermediate_der2283;
  tlu2_2d_linear_linear_value(&w_efOut[0ULL], &t398[0ULL], &t400[0ULL], &t404
    [0ULL], &t406[0ULL], ((_NeDynamicSystem*)(LC))->mField30, &t81[0ULL], &t46
    [0ULL], &t47[0ULL]);
  t303_idx_0 = w_efOut[0];
  t458 = t303_idx_0;
  tlu2_2d_linear_linear_value(&x_efOut[0ULL], &t21.mField0[0ULL], &t21.mField2
    [0ULL], &t395[0ULL], &t397[0ULL], ((_NeDynamicSystem*)(LC))->mField30, &t81
    [0ULL], &t46[0ULL], &t47[0ULL]);
  t303_idx_0 = x_efOut[0];
  t459 = t303_idx_0;
  tlu2_2d_linear_linear_value(&y_efOut[0ULL], &t40.mField0[0ULL], &t40.mField2
    [0ULL], &t395[0ULL], &t397[0ULL], ((_NeDynamicSystem*)(LC))->mField30, &t81
    [0ULL], &t46[0ULL], &t47[0ULL]);
  t303_idx_0 = y_efOut[0];
  t461 = t303_idx_0;
  t626 = t303_idx_0 - t459;
  t465 = (t458 - t459) / (t626 == 0.0 ? 1.0E-16 : t626);
  if (t465 <= 0.0) {
    intermediate_der2321 = 0.0;
  } else {
    intermediate_der2321 = t465 >= 1.0 ? 1.0 : t465;
  }

  t468 = (intermediate_der2296 * X[0ULL] * 100.0 + X[97ULL]) - ((t457 - t455) *
    intermediate_der2321 + t455);
  if (X[26ULL] < intermediate_der4419) {
    t452 = X[26ULL] / (intermediate_der4419 == 0.0 ? 1.0E-16 :
                       intermediate_der4419) - 1.0;
  } else {
    t452 = 0.0;
  }

  if (X[27ULL] > t431) {
    t467 = (X[27ULL] - 4000.0) / (4000.0 - t431 == 0.0 ? 1.0E-16 : 4000.0 - t431)
      + 2.0;
  } else {
    t467 = 1.0;
  }

  t304[0ULL] = t452;
  t111[0] = 25ULL;
  tlu2_linear_linear_prelookup(&ab_efOut.mField0[0ULL], &ab_efOut.mField1[0ULL],
    &ab_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t304[0ULL],
    &t111[0ULL], &t47[0ULL]);
  t36 = ab_efOut;
  t383[0ULL] = t36.mField0[0ULL];
  t383[1ULL] = t36.mField0[1ULL];
  t385[0ULL] = t36.mField2[0ULL];
  tlu2_2d_linear_linear_value(&bb_efOut[0ULL], &t383[0ULL], &t385[0ULL], &t404
    [0ULL], &t406[0ULL], ((_NeDynamicSystem*)(LC))->mField31, &t111[0ULL], &t46
    [0ULL], &t47[0ULL]);
  t303_idx_0 = bb_efOut[0];
  t452 = t303_idx_0;
  t304[0ULL] = t467;
  tlu2_linear_linear_prelookup(&cb_efOut.mField0[0ULL], &cb_efOut.mField1[0ULL],
    &cb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t304[0ULL],
    &t111[0ULL], &t47[0ULL]);
  t34 = cb_efOut;
  t377[0ULL] = t34.mField0[0ULL];
  t377[1ULL] = t34.mField0[1ULL];
  t379[0ULL] = t34.mField2[0ULL];
  tlu2_2d_linear_linear_value(&db_efOut[0ULL], &t377[0ULL], &t379[0ULL], &t404
    [0ULL], &t406[0ULL], ((_NeDynamicSystem*)(LC))->mField32, &t111[0ULL], &t46
    [0ULL], &t47[0ULL]);
  t303_idx_0 = db_efOut[0];
  t467 = t303_idx_0;
  if (X[147ULL] <= intermediate_der4419) {
    t469 = X[147ULL] / (intermediate_der4419 == 0.0 ? 1.0E-16 :
                        intermediate_der4419) - 1.0;
  } else if (X[147ULL] >= t431) {
    t469 = (X[147ULL] - 4000.0) / (4000.0 - t431 == 0.0 ? 1.0E-16 : 4000.0 -
      t431) + 2.0;
  } else {
    t483 = t431 - intermediate_der4419;
    t469 = (X[147ULL] - intermediate_der4419) / (t483 == 0.0 ? 1.0E-16 : t483);
  }

  t484 = -t45[0ULL];
  t470 = -t484;
  t304[0ULL] = t436;
  tlu2_linear_linear_prelookup(&eb_efOut.mField0[0ULL], &eb_efOut.mField1[0ULL],
    &eb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t304[0ULL],
    &t81[0ULL], &t47[0ULL]);
  t37 = eb_efOut;
  t404[0ULL] = t37.mField0[0ULL];
  t404[1ULL] = t37.mField0[1ULL];
  t382[0ULL] = t37.mField2[0ULL];
  tlu2_2d_linear_linear_value(&fb_efOut[0ULL], &t404[0ULL], &t382[0ULL], &t395
    [0ULL], &t397[0ULL], ((_NeDynamicSystem*)(LC))->mField0, &t81[0ULL], &t46
    [0ULL], &t47[0ULL]);
  t303_idx_0 = fb_efOut[0];
  t436 = t303_idx_0;
  t304[0ULL] = intermediate_der4440;
  tlu2_linear_linear_prelookup(&gb_efOut.mField0[0ULL], &gb_efOut.mField1[0ULL],
    &gb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t304[0ULL],
    &t81[0ULL], &t47[0ULL]);
  t35 = gb_efOut;
  t398[0ULL] = t35.mField0[0ULL];
  t398[1ULL] = t35.mField0[1ULL];
  t376[0ULL] = t35.mField2[0ULL];
  tlu2_2d_linear_linear_value(&hb_efOut[0ULL], &t398[0ULL], &t376[0ULL], &t392
    [0ULL], &t394[0ULL], ((_NeDynamicSystem*)(LC))->mField0, &t81[0ULL], &t46
    [0ULL], &t47[0ULL]);
  t303_idx_0 = hb_efOut[0];
  intermediate_der4440 = t303_idx_0;
  intermediate_der6086 = ((real_T)(M[55ULL] != 0) * 2.0 - 1.0) *
    intermediate_der6086 / 1.5;
  if (t453 <= 0.0) {
    t472 = 0.0;
  } else {
    t472 = t453 >= 1.0 ? 1.0 : (0.8 - (intermediate_der6086 - 0.8) *
      (intermediate_der6086 - 0.8) * 0.2) - (intermediate_der6087 - 0.25) *
      (intermediate_der6087 - 0.25) * 0.35;
  }

  t473 = intermediate_der6084 > 0.01 ? t468 * t472 : 0.0;
  tlu2_1d_linear_linear_value(&ib_efOut[0ULL], &t405[0ULL], &t406[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t46[0ULL], &t47[0ULL]);
  t303_idx_0 = ib_efOut[0];
  t471 = t303_idx_0;
  tlu2_1d_linear_linear_value(&jb_efOut[0ULL], &t405[0ULL], &t406[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t46[0ULL], &t47[0ULL]);
  t303_idx_0 = jb_efOut[0];
  t474 = t303_idx_0;
  tlu2_1d_linear_linear_value(&kb_efOut[0ULL], &t402[0ULL], &t403[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t46[0ULL], &t47[0ULL]);
  t303_idx_0 = kb_efOut[0];
  t476 = t303_idx_0;
  tlu2_1d_linear_linear_value(&lb_efOut[0ULL], &t402[0ULL], &t403[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t46[0ULL], &t47[0ULL]);
  t303_idx_0 = lb_efOut[0];
  if (X[44ULL] <= intermediate_der2298) {
    intermediate_der4428 = 1.0 / (intermediate_der2298 == 0.0 ? 1.0E-16 :
      intermediate_der2298);
  } else if (X[44ULL] >= intermediate_der2277) {
    intermediate_der4428 = 1.0 / (4000.0 - intermediate_der2277 == 0.0 ? 1.0E-16
      : 4000.0 - intermediate_der2277);
  } else {
    t489 = intermediate_der2277 - intermediate_der2298;
    intermediate_der4428 = 1.0 / (t489 == 0.0 ? 1.0E-16 : t489);
  }

  if (X[44ULL] <= intermediate_der2298) {
    U_idx_3 = intermediate_der2298 * intermediate_der2298;
    t479 = -X[44ULL] / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3) * t476;
  } else if (X[44ULL] >= intermediate_der2277) {
    U_idx_3 = (4000.0 - intermediate_der2277) * (4000.0 - intermediate_der2277);
    t479 = -t303_idx_0 * (-(X[44ULL] - 4000.0) / (U_idx_3 == 0.0 ? 1.0E-16 :
      U_idx_3));
  } else {
    t576 = (intermediate_der2277 - intermediate_der2298) * (intermediate_der2277
      - intermediate_der2298);
    U_idx_3 = intermediate_der2277 - intermediate_der2298;
    t479 = (t303_idx_0 - t476) * (-(X[44ULL] - intermediate_der2298) / (t576 ==
      0.0 ? 1.0E-16 : t576)) + -t476 / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3);
  }

  tlu2_1d_linear_linear_value(&mb_efOut[0ULL], &t396[0ULL], &t397[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t46[0ULL], &t47[0ULL]);
  t303_idx_0 = mb_efOut[0];
  intermediate_der2298 = t303_idx_0;
  tlu2_1d_linear_linear_value(&nb_efOut[0ULL], &t396[0ULL], &t397[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t46[0ULL], &t47[0ULL]);
  t303_idx_0 = nb_efOut[0];
  intermediate_der2277 = t303_idx_0;
  if (X[50ULL] <= t434) {
    t476 = 1.0 / (t434 == 0.0 ? 1.0E-16 : t434);
  } else if (X[50ULL] >= intermediate_der2283) {
    t476 = 1.0 / (4000.0 - intermediate_der2283 == 0.0 ? 1.0E-16 : 4000.0 -
                  intermediate_der2283);
  } else {
    t628 = intermediate_der2283 - t434;
    t476 = 1.0 / (t628 == 0.0 ? 1.0E-16 : t628);
  }

  if (X[50ULL] <= t434) {
    t628 = t434 * t434;
    intermediate_der4436 = -X[50ULL] / (t628 == 0.0 ? 1.0E-16 : t628) *
      intermediate_der2298;
  } else if (X[50ULL] >= intermediate_der2283) {
    U_idx_3 = (4000.0 - intermediate_der2283) * (4000.0 - intermediate_der2283);
    intermediate_der4436 = -t303_idx_0 * (-(X[50ULL] - 4000.0) / (U_idx_3 == 0.0
      ? 1.0E-16 : U_idx_3));
  } else {
    t576 = (intermediate_der2283 - t434) * (intermediate_der2283 - t434);
    U_idx_3 = intermediate_der2283 - t434;
    intermediate_der4436 = (t303_idx_0 - intermediate_der2298) * (-(X[50ULL] -
      t434) / (t576 == 0.0 ? 1.0E-16 : t576)) + -intermediate_der2298 / (U_idx_3
      == 0.0 ? 1.0E-16 : U_idx_3);
  }

  tlu2_1d_linear_linear_value(&ob_efOut[0ULL], &t393[0ULL], &t394[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t46[0ULL], &t47[0ULL]);
  t303_idx_0 = ob_efOut[0];
  t480 = t303_idx_0;
  tlu2_1d_linear_linear_value(&pb_efOut[0ULL], &t393[0ULL], &t394[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t46[0ULL], &t47[0ULL]);
  t303_idx_0 = pb_efOut[0];
  if (X[54ULL] <= t437) {
    t482 = 1.0 / (t437 == 0.0 ? 1.0E-16 : t437);
  } else if (X[54ULL] >= t438) {
    t482 = 1.0 / (4000.0 - t438 == 0.0 ? 1.0E-16 : 4000.0 - t438);
  } else {
    t628 = t438 - t437;
    t482 = 1.0 / (t628 == 0.0 ? 1.0E-16 : t628);
  }

  if (X[54ULL] <= t437) {
    t628 = t437 * t437;
    t483 = -X[54ULL] / (t628 == 0.0 ? 1.0E-16 : t628) * t480;
  } else if (X[54ULL] >= t438) {
    U_idx_3 = (4000.0 - t438) * (4000.0 - t438);
    t483 = -t303_idx_0 * (-(X[54ULL] - 4000.0) / (U_idx_3 == 0.0 ? 1.0E-16 :
      U_idx_3));
  } else {
    t576 = (t438 - t437) * (t438 - t437);
    U_idx_3 = t438 - t437;
    t483 = (t303_idx_0 - t480) * (-(X[54ULL] - t437) / (t576 == 0.0 ? 1.0E-16 :
      t576)) + -t480 / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3);
  }

  tlu2_1d_linear_linear_value(&qb_efOut[0ULL], &t390[0ULL], &t391[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t46[0ULL], &t47[0ULL]);
  t303_idx_0 = qb_efOut[0];
  t437 = t303_idx_0;
  tlu2_1d_linear_linear_value(&rb_efOut[0ULL], &t390[0ULL], &t391[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t46[0ULL], &t47[0ULL]);
  t303_idx_0 = rb_efOut[0];
  if (X[80ULL] <= t440) {
    t480 = 1.0 / (t440 == 0.0 ? 1.0E-16 : t440);
  } else if (X[80ULL] >= t441) {
    t480 = 1.0 / (4000.0 - t441 == 0.0 ? 1.0E-16 : 4000.0 - t441);
  } else {
    t628 = t441 - t440;
    t480 = 1.0 / (t628 == 0.0 ? 1.0E-16 : t628);
  }

  if (X[80ULL] <= t440) {
    t628 = t440 * t440;
    t669 = -X[80ULL] / (t628 == 0.0 ? 1.0E-16 : t628) * t437;
  } else if (X[80ULL] >= t441) {
    U_idx_3 = (4000.0 - t441) * (4000.0 - t441);
    t669 = -t303_idx_0 * (-(X[80ULL] - 4000.0) / (U_idx_3 == 0.0 ? 1.0E-16 :
      U_idx_3));
  } else {
    t576 = (t441 - t440) * (t441 - t440);
    U_idx_3 = t441 - t440;
    t669 = (t303_idx_0 - t437) * (-(X[80ULL] - t440) / (t576 == 0.0 ? 1.0E-16 :
      t576)) + -t437 / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3);
  }

  t304[0ULL] = intermediate_der2140;
  tlu2_linear_linear_prelookup(&sb_efOut.mField0[0ULL], &sb_efOut.mField1[0ULL],
    &sb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t304[0ULL],
    &t81[0ULL], &t47[0ULL]);
  t33 = sb_efOut;
  tlu2_2d_linear_linear_value(&tb_efOut[0ULL], &t33.mField1[0ULL], &t33.mField2
    [0ULL], &t43.mField0[0ULL], &t43.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t81[0ULL], &t46[0ULL], &t47[0ULL]);
  t45[0] = tb_efOut[0];
  U_idx_3 = -(t45[0ULL] * intermediate_der4428);
  intermediate_der2140 = -U_idx_3;
  t401[0ULL] = t33.mField0[0ULL];
  t401[1ULL] = t33.mField0[1ULL];
  t400[0ULL] = t33.mField2[0ULL];
  tlu2_2d_linear_linear_value(&ub_efOut[0ULL], &t401[0ULL], &t400[0ULL], &t402
    [0ULL], &t403[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t81[0ULL], &t46
    [0ULL], &t47[0ULL]);
  t303_idx_0 = ub_efOut[0];
  U_idx_3 = -(t45[0ULL] * t479 + t303_idx_0);
  t437 = -U_idx_3;
  t304[0ULL] = intermediate_der4427;
  tlu2_linear_linear_prelookup(&vb_efOut.mField0[0ULL], &vb_efOut.mField1[0ULL],
    &vb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t304[0ULL],
    &t81[0ULL], &t47[0ULL]);
  t33 = vb_efOut;
  tlu2_2d_linear_linear_value(&wb_efOut[0ULL], &t33.mField1[0ULL], &t33.mField2
    [0ULL], &t41.mField0[0ULL], &t41.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t81[0ULL], &t46[0ULL], &t47[0ULL]);
  t45[0] = wb_efOut[0];
  U_idx_3 = -(t45[0ULL] * t480);
  t438 = -U_idx_3;
  t401[0ULL] = t33.mField0[0ULL];
  t401[1ULL] = t33.mField0[1ULL];
  t400[0ULL] = t33.mField2[0ULL];
  tlu2_2d_linear_linear_value(&xb_efOut[0ULL], &t401[0ULL], &t400[0ULL], &t390
    [0ULL], &t391[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t81[0ULL], &t46
    [0ULL], &t47[0ULL]);
  t304[0] = xb_efOut[0];
  U_idx_3 = -(t45[0ULL] * t669 + t304[0ULL]);
  t440 = -U_idx_3;
  if (X[97ULL] <= intermediate_der4419) {
    intermediate_der4427 = 1.0 / (intermediate_der4419 == 0.0 ? 1.0E-16 :
      intermediate_der4419);
  } else if (X[97ULL] >= t431) {
    intermediate_der4427 = 1.0 / (4000.0 - t431 == 0.0 ? 1.0E-16 : 4000.0 - t431);
  } else {
    t628 = t431 - intermediate_der4419;
    intermediate_der4427 = 1.0 / (t628 == 0.0 ? 1.0E-16 : t628);
  }

  if (X[97ULL] <= intermediate_der4419) {
    t628 = intermediate_der4419 * intermediate_der4419;
    intermediate_der4428 = -X[97ULL] / (t628 == 0.0 ? 1.0E-16 : t628) * t471;
  } else if (X[97ULL] >= t431) {
    U_idx_3 = (4000.0 - t431) * (4000.0 - t431);
    intermediate_der4428 = -t474 * (-(X[97ULL] - 4000.0) / (U_idx_3 == 0.0 ?
      1.0E-16 : U_idx_3));
  } else {
    t576 = (t431 - intermediate_der4419) * (t431 - intermediate_der4419);
    U_idx_3 = t431 - intermediate_der4419;
    intermediate_der4428 = (t474 - t471) * (-(X[97ULL] - intermediate_der4419) /
      (t576 == 0.0 ? 1.0E-16 : t576)) + -t471 / (U_idx_3 == 0.0 ? 1.0E-16 :
      U_idx_3);
  }

  tlu2_2d_linear_linear_value(&yb_efOut[0ULL], &t38.mField1[0ULL], &t38.mField2
    [0ULL], &t44.mField0[0ULL], &t44.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t81[0ULL], &t46[0ULL], &t47[0ULL]);
  t271[0] = yb_efOut[0];
  t479 = t271[0ULL] * intermediate_der4427;
  tlu2_2d_linear_linear_value(&ac_efOut[0ULL], &t38.mField0[0ULL], &t38.mField2
    [0ULL], &t44.mField1[0ULL], &t44.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t81[0ULL], &t46[0ULL], &t47[0ULL]);
  t80[0] = ac_efOut[0];
  t480 = t271[0ULL] * intermediate_der4428 + t80[0ULL];
  t489 = pmf_sqrt(t444 * 461.5) * 2.0;
  U_idx_3 = -(X[0ULL] * 0.85);
  t628 = pmf_sqrt(t444 * 461.5) * pmf_sqrt(t444 * 461.5);
  tlu2_2d_linear_linear_value(&bc_efOut[0ULL], &t38.mField1[0ULL], &t38.mField2
    [0ULL], &t44.mField0[0ULL], &t44.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t81[0ULL], &t46[0ULL], &t47[0ULL]);
  t311[0] = bc_efOut[0];
  t484 = t311[0ULL] * intermediate_der4427;
  tlu2_2d_linear_linear_value(&cc_efOut[0ULL], &t38.mField0[0ULL], &t38.mField2
    [0ULL], &t44.mField1[0ULL], &t44.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t81[0ULL], &t46[0ULL], &t47[0ULL]);
  t272[0] = cc_efOut[0];
  t485 = t311[0ULL] * intermediate_der4428 + t272[0ULL];
  t303_idx_0 = t447 * ((U_idx_3 / (t628 == 0.0 ? 1.0E-16 : t628) * (1.0 / (t489 ==
    0.0 ? 1.0E-16 : t489)) * t480 * 461.5 + 0.85 / (t624 == 0.0 ? 1.0E-16 : t624))
                       * 0.667262351240862);
  t444 = t447 * (U_idx_3 / (t628 == 0.0 ? 1.0E-16 : t628) * (1.0 / (t489 == 0.0 ?
    1.0E-16 : t489)) * t479 * 307.94157509765779);
  U_idx_3 = X[0ULL] * X[0ULL];
  if (t445 <= 0.0) {
    t666 = 0.0;
  } else {
    t666 = t445 >= 1.0 ? 0.0 : 1.0 / (X[0ULL] == 0.0 ? 1.0E-16 : X[0ULL]);
  }

  if (t445 <= 0.0) {
    t669 = 0.0;
  } else {
    t669 = t445 >= 1.0 ? 0.0 : -X[49ULL] / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3);
  }

  t445 = (pmf_pow(intermediate_der6087, 0.53846153846153832) * t666 *
          1.5384615384615383 - pmf_pow(intermediate_der6087, 0.76923076923076894)
          * t666 * 1.7692307692307689) * 8.6666666666666661;
  U_idx_3 = (pmf_pow(intermediate_der6087, 0.53846153846153832) * t669 *
             1.5384615384615383 - pmf_pow(intermediate_der6087,
              0.76923076923076894) * t669 * 1.7692307692307689) *
    8.6666666666666661;
  if (intermediate_der5298 <= 0.0) {
    t576 = 0.0;
  } else {
    t576 = intermediate_der5298 >= 1.0E+6 ? 0.0 : t445;
  }

  if (intermediate_der5298 <= 0.0) {
    t445 = 0.0;
  } else {
    t445 = intermediate_der5298 >= 1.0E+6 ? 0.0 : U_idx_3;
  }

  t441 = pmf_sqrt(intermediate_der6104) * 2.0;
  U_idx_3 = -(t447 * X[0ULL] * 0.85);
  t447 = (U_idx_3 / (t628 == 0.0 ? 1.0E-16 : t628) * (1.0 / (t489 == 0.0 ?
            1.0E-16 : t489)) * t480 * 461.5 + t447 * 0.85 / (t624 == 0.0 ?
           1.0E-16 : t624)) * pmf_sqrt(intermediate_der6104) + t603 / (t624 ==
    0.0 ? 1.0E-16 : t624) * (1.0 / (t441 == 0.0 ? 1.0E-16 : t441)) * t445;
  t445 = U_idx_3 / (t628 == 0.0 ? 1.0E-16 : t628) * (1.0 / (t489 == 0.0 ?
    1.0E-16 : t489)) * pmf_sqrt(intermediate_der6104) * t479 * 461.5;
  if (intermediate_der6087 < 0.545727733814065) {
    intermediate_der6104 = t444 * 100000.0;
  } else {
    intermediate_der6104 = t445 * 100000.0;
  }

  if (intermediate_der6087 < 0.545727733814065) {
    t444 = 0.0;
  } else {
    t444 = t603 / (t624 == 0.0 ? 1.0E-16 : t624) * (1.0 / (t441 == 0.0 ? 1.0E-16
      : t441)) * t576 * 100000.0;
  }

  if (intermediate_der6087 < 0.545727733814065) {
    t445 = t303_idx_0 * 100000.0;
  } else {
    t445 = t447 * 100000.0;
  }

  t447 = intermediate_der6084 > 0.01 ? t445 : 0.0;
  t445 = intermediate_der6084 > 0.01 ? t444 : 0.0;
  t444 = intermediate_der6084 > 0.01 ? intermediate_der6104 : 0.0;
  intermediate_der5298 = X[0ULL] * t484 * 100.0 + 1.0;
  intermediate_der6104 = (X[0ULL] * t485 + intermediate_der2296) * 100.0;
  if (t434 <= t434) {
    t624 = t434 * t434;
    intermediate_der2296 = -t434 / (t624 == 0.0 ? 1.0E-16 : t624) *
      intermediate_der2298 + intermediate_der2298 / (t434 == 0.0 ? 1.0E-16 :
      t434);
  } else if (t434 >= intermediate_der2283) {
    U_idx_3 = (4000.0 - intermediate_der2283) * (4000.0 - intermediate_der2283);
    intermediate_der2296 = -intermediate_der2277 * (-(t434 - 4000.0) / (U_idx_3 ==
      0.0 ? 1.0E-16 : U_idx_3)) + intermediate_der2298 / (4000.0 -
      intermediate_der2283 == 0.0 ? 1.0E-16 : 4000.0 - intermediate_der2283);
  } else {
    U_idx_3 = (intermediate_der2283 - t434) * (intermediate_der2283 - t434);
    t576 = intermediate_der2283 - t434;
    intermediate_der2296 = (intermediate_der2277 - intermediate_der2298) *
      (-(t434 - t434) / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3)) +
      (intermediate_der2298 - intermediate_der2298) / (t576 == 0.0 ? 1.0E-16 :
      t576);
  }

  tlu2_2d_linear_linear_value(&dc_efOut[0ULL], &t21.mField1[0ULL], &t21.mField2
    [0ULL], &t395[0ULL], &t397[0ULL], ((_NeDynamicSystem*)(LC))->mField0, &t81
    [0ULL], &t46[0ULL], &t47[0ULL]);
  t304[0] = dc_efOut[0];
  tlu2_2d_linear_linear_value(&ec_efOut[0ULL], &t21.mField0[0ULL], &t21.mField2
    [0ULL], &t396[0ULL], &t397[0ULL], ((_NeDynamicSystem*)(LC))->mField0, &t81
    [0ULL], &t46[0ULL], &t47[0ULL]);
  t303_idx_0 = ec_efOut[0];
  t484 = t304[0ULL] * intermediate_der2296 + t303_idx_0;
  t485 = (X[49ULL] * t484 + t454) * 100.0 + intermediate_der2298;
  if (intermediate_der2283 <= t434) {
    t624 = t434 * t434;
    t454 = -intermediate_der2283 / (t624 == 0.0 ? 1.0E-16 : t624) *
      intermediate_der2298 + intermediate_der2277 / (t434 == 0.0 ? 1.0E-16 :
      t434);
  } else if (intermediate_der2283 >= intermediate_der2283) {
    U_idx_3 = (4000.0 - intermediate_der2283) * (4000.0 - intermediate_der2283);
    t454 = -intermediate_der2277 * (-(intermediate_der2283 - 4000.0) / (U_idx_3 ==
      0.0 ? 1.0E-16 : U_idx_3)) + intermediate_der2277 / (4000.0 -
      intermediate_der2283 == 0.0 ? 1.0E-16 : 4000.0 - intermediate_der2283);
  } else {
    U_idx_3 = (intermediate_der2283 - t434) * (intermediate_der2283 - t434);
    t576 = intermediate_der2283 - t434;
    t454 = (intermediate_der2277 - intermediate_der2298) *
      (-(intermediate_der2283 - t434) / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3)) +
      (intermediate_der2277 - intermediate_der2298) / (t576 == 0.0 ? 1.0E-16 :
      t576);
  }

  tlu2_2d_linear_linear_value(&fc_efOut[0ULL], &t40.mField1[0ULL], &t40.mField2
    [0ULL], &t395[0ULL], &t397[0ULL], ((_NeDynamicSystem*)(LC))->mField0, &t81
    [0ULL], &t46[0ULL], &t47[0ULL]);
  t304[0] = fc_efOut[0];
  tlu2_2d_linear_linear_value(&gc_efOut[0ULL], &t40.mField0[0ULL], &t40.mField2
    [0ULL], &t396[0ULL], &t397[0ULL], ((_NeDynamicSystem*)(LC))->mField0, &t81
    [0ULL], &t46[0ULL], &t47[0ULL]);
  t303_idx_0 = gc_efOut[0];
  intermediate_der2298 = t304[0ULL] * t454 + t303_idx_0;
  t434 = (X[49ULL] * intermediate_der2298 + intermediate_der2286) * 100.0 +
    intermediate_der2277;
  tlu2_2d_linear_linear_value(&hc_efOut[0ULL], &t38.mField1[0ULL], &t38.mField2
    [0ULL], &t44.mField0[0ULL], &t44.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t81[0ULL], &t46[0ULL], &t47[0ULL]);
  t266[0] = hc_efOut[0];
  intermediate_der2298 = t266[0ULL] * intermediate_der4427;
  tlu2_2d_linear_linear_value(&ic_efOut[0ULL], &t38.mField0[0ULL], &t38.mField2
    [0ULL], &t44.mField1[0ULL], &t44.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t81[0ULL], &t46[0ULL], &t47[0ULL]);
  t309[0] = ic_efOut[0];
  intermediate_der2277 = t266[0ULL] * intermediate_der4428 + t309[0ULL];
  tlu2_2d_linear_linear_value(&jc_efOut[0ULL], &t21.mField1[0ULL], &t21.mField2
    [0ULL], &t395[0ULL], &t397[0ULL], ((_NeDynamicSystem*)(LC))->mField30, &t81
    [0ULL], &t46[0ULL], &t47[0ULL]);
  t304[0] = jc_efOut[0];
  tlu2_2d_linear_linear_value(&kc_efOut[0ULL], &t21.mField0[0ULL], &t21.mField2
    [0ULL], &t396[0ULL], &t397[0ULL], ((_NeDynamicSystem*)(LC))->mField30, &t81
    [0ULL], &t46[0ULL], &t47[0ULL]);
  t303_idx_0 = kc_efOut[0];
  intermediate_der2283 = t304[0ULL] * intermediate_der2296 + t303_idx_0;
  tlu2_2d_linear_linear_value(&lc_efOut[0ULL], &t40.mField1[0ULL], &t40.mField2
    [0ULL], &t395[0ULL], &t397[0ULL], ((_NeDynamicSystem*)(LC))->mField30, &t81
    [0ULL], &t46[0ULL], &t47[0ULL]);
  t304[0] = lc_efOut[0];
  tlu2_2d_linear_linear_value(&mc_efOut[0ULL], &t40.mField0[0ULL], &t40.mField2
    [0ULL], &t396[0ULL], &t397[0ULL], ((_NeDynamicSystem*)(LC))->mField30, &t81
    [0ULL], &t46[0ULL], &t47[0ULL]);
  t303_idx_0 = mc_efOut[0];
  intermediate_der2296 = t304[0ULL] * t454 + t303_idx_0;
  t624 = (t461 - t459) * (t461 - t459);
  t458 = (intermediate_der2296 - intermediate_der2283) * (-(t458 - t459) / (t624
    == 0.0 ? 1.0E-16 : t624)) + -intermediate_der2283 / (t626 == 0.0 ? 1.0E-16 :
    t626);
  if (t465 <= 0.0) {
    intermediate_der2283 = 0.0;
  } else {
    intermediate_der2283 = t465 >= 1.0 ? 0.0 : intermediate_der2277 / (t626 ==
      0.0 ? 1.0E-16 : t626);
  }

  if (t465 <= 0.0) {
    intermediate_der2296 = 0.0;
  } else {
    intermediate_der2296 = t465 >= 1.0 ? 0.0 : intermediate_der2298 / (t626 ==
      0.0 ? 1.0E-16 : t626);
  }

  if (t465 <= 0.0) {
    t454 = 0.0;
  } else {
    t454 = t465 >= 1.0 ? 0.0 : t458;
  }

  intermediate_der2286 = ((t457 - t455) * t454 + (t434 - t485) *
    intermediate_der2321) + t485;
  t434 = (t457 - t455) * intermediate_der2296;
  t458 = (t457 - t455) * intermediate_der2283;
  t455 = intermediate_der6104 - t458;
  intermediate_der6104 = intermediate_der5298 - t434;
  intermediate_der5298 = -intermediate_der2286;
  t457 = t458;
  t458 = t479;
  t459 = t480;
  t461 = t666;
  t465 = t669;
  if (X[26ULL] < intermediate_der4419) {
    intermediate_der2321 = 1.0 / (intermediate_der4419 == 0.0 ? 1.0E-16 :
      intermediate_der4419);
  } else {
    intermediate_der2321 = 0.0;
  }

  if (X[26ULL] < intermediate_der4419) {
    t624 = intermediate_der4419 * intermediate_der4419;
    t479 = -X[26ULL] / (t624 == 0.0 ? 1.0E-16 : t624) * t471;
  } else {
    t479 = 0.0;
  }

  if (X[27ULL] > t431) {
    t624 = (4000.0 - t431) * (4000.0 - t431);
    t480 = -t474 * (-(X[27ULL] - 4000.0) / (t624 == 0.0 ? 1.0E-16 : t624));
  } else {
    t480 = 0.0;
  }

  if (X[27ULL] > t431) {
    t484 = 1.0 / (4000.0 - t431 == 0.0 ? 1.0E-16 : 4000.0 - t431);
  } else {
    t484 = 0.0;
  }

  tlu2_2d_linear_linear_value(&nc_efOut[0ULL], &t36.mField1[0ULL], &t36.mField2
    [0ULL], &t44.mField0[0ULL], &t44.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField31, &t111[0ULL], &t46[0ULL], &t47[0ULL]);
  t45[0] = nc_efOut[0];
  t485 = t45[0ULL] * intermediate_der2321;
  tlu2_2d_linear_linear_value(&oc_efOut[0ULL], &t383[0ULL], &t385[0ULL], &t405
    [0ULL], &t406[0ULL], ((_NeDynamicSystem*)(LC))->mField31, &t111[0ULL], &t46
    [0ULL], &t47[0ULL]);
  t304[0] = oc_efOut[0];
  intermediate_der2321 = t45[0ULL] * t479 + t304[0ULL];
  tlu2_2d_linear_linear_value(&pc_efOut[0ULL], &t34.mField1[0ULL], &t34.mField2
    [0ULL], &t44.mField0[0ULL], &t44.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField32, &t111[0ULL], &t46[0ULL], &t47[0ULL]);
  t269[0] = pc_efOut[0];
  tlu2_2d_linear_linear_value(&qc_efOut[0ULL], &t377[0ULL], &t379[0ULL], &t405
    [0ULL], &t406[0ULL], ((_NeDynamicSystem*)(LC))->mField32, &t111[0ULL], &t46
    [0ULL], &t47[0ULL]);
  t304[0] = qc_efOut[0];
  t479 = t269[0ULL] * t480 + t304[0ULL];
  t480 = t269[0ULL] * t484;
  t441 = -(X[28ULL] * t452);
  t624 = (X[28ULL] * t452 + X[29ULL] * t467) * (X[28ULL] * t452 + X[29ULL] *
    t467);
  t603 = X[28ULL] * t452 + X[29ULL] * t467;
  t484 = t441 / (t624 == 0.0 ? 1.0E-16 : t624) * t452 + t452 / (t603 == 0.0 ?
    1.0E-16 : t603);
  t452 = t441 / (t624 == 0.0 ? 1.0E-16 : t624) * X[28ULL] * t485 + X[28ULL] *
    t485 / (t603 == 0.0 ? 1.0E-16 : t603);
  t485 = (X[28ULL] * intermediate_der2321 + X[29ULL] * t479) * (t441 / (t624 ==
    0.0 ? 1.0E-16 : t624)) + X[28ULL] * intermediate_der2321 / (t603 == 0.0 ?
    1.0E-16 : t603);
  intermediate_der2321 = t441 / (t624 == 0.0 ? 1.0E-16 : t624) * t467;
  t479 = t484;
  t467 = t441 / (t624 == 0.0 ? 1.0E-16 : t624) * X[29ULL] * t480;
  t480 = t485;
  if (X[147ULL] <= intermediate_der4419) {
    t484 = 1.0 / (intermediate_der4419 == 0.0 ? 1.0E-16 : intermediate_der4419);
  } else if (X[147ULL] >= t431) {
    t484 = 1.0 / (4000.0 - t431 == 0.0 ? 1.0E-16 : 4000.0 - t431);
  } else {
    t624 = t431 - intermediate_der4419;
    t484 = 1.0 / (t624 == 0.0 ? 1.0E-16 : t624);
  }

  if (X[147ULL] <= intermediate_der4419) {
    t624 = intermediate_der4419 * intermediate_der4419;
    t485 = -X[147ULL] / (t624 == 0.0 ? 1.0E-16 : t624) * t471;
  } else if (X[147ULL] >= t431) {
    t626 = (4000.0 - t431) * (4000.0 - t431);
    t485 = -t474 * (-(X[147ULL] - 4000.0) / (t626 == 0.0 ? 1.0E-16 : t626));
  } else {
    t628 = (t431 - intermediate_der4419) * (t431 - intermediate_der4419);
    U_idx_3 = t431 - intermediate_der4419;
    t485 = (t474 - t471) * (-(X[147ULL] - intermediate_der4419) / (t628 == 0.0 ?
      1.0E-16 : t628)) + -t471 / (U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3);
  }

  t269[0ULL] = t469;
  tlu2_linear_linear_prelookup(&rc_efOut.mField0[0ULL], &rc_efOut.mField1[0ULL],
    &rc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t269[0ULL],
    &t81[0ULL], &t47[0ULL]);
  t40 = rc_efOut;
  tlu2_2d_linear_linear_value(&sc_efOut[0ULL], &t40.mField1[0ULL], &t40.mField2
    [0ULL], &t44.mField0[0ULL], &t44.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t81[0ULL], &t46[0ULL], &t47[0ULL]);
  t45[0] = sc_efOut[0];
  t441 = -(t45[0ULL] * t484);
  intermediate_der4419 = -t441;
  t401[0ULL] = t40.mField0[0ULL];
  t401[1ULL] = t40.mField0[1ULL];
  t400[0ULL] = t40.mField2[0ULL];
  tlu2_2d_linear_linear_value(&tc_efOut[0ULL], &t401[0ULL], &t400[0ULL], &t405
    [0ULL], &t406[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t81[0ULL], &t46
    [0ULL], &t47[0ULL]);
  t269[0] = tc_efOut[0];
  t441 = -(t45[0ULL] * t485 + t269[0ULL]);
  t431 = -t441;
  t441 = -(t311[0ULL] * intermediate_der4427);
  t469 = -t441;
  t441 = -(t311[0ULL] * intermediate_der4428 + t272[0ULL]);
  t469 = X[0ULL] * t469 * 100.0 + 1.0;
  t470 = (X[0ULL] * -t441 + t470) * 100.0;
  t441 = -(t266[0ULL] * intermediate_der4427);
  t471 = -t441;
  t441 = -(t266[0ULL] * intermediate_der4428 + t309[0ULL]);
  t474 = -t441;
  t441 = -(t271[0ULL] * intermediate_der4427);
  intermediate_der4427 = -t441;
  t441 = -(t271[0ULL] * intermediate_der4428 + t80[0ULL]);
  intermediate_der4428 = -t441;
  tlu2_2d_linear_linear_value(&uc_efOut[0ULL], &t37.mField1[0ULL], &t37.mField2
    [0ULL], &t39.mField0[0ULL], &t39.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t81[0ULL], &t46[0ULL], &t47[0ULL]);
  t311[0] = uc_efOut[0];
  t441 = -(t311[0ULL] * t476);
  t484 = -t441;
  tlu2_2d_linear_linear_value(&vc_efOut[0ULL], &t404[0ULL], &t382[0ULL], &t396
    [0ULL], &t397[0ULL], ((_NeDynamicSystem*)(LC))->mField0, &t81[0ULL], &t46
    [0ULL], &t47[0ULL]);
  t309[0] = vc_efOut[0];
  t441 = -(t311[0ULL] * intermediate_der4436 + t309[0ULL]);
  t484 = X[49ULL] * t484 * 100.0 + 1.0;
  t436 = (X[49ULL] * -t441 + t436) * 100.0;
  tlu2_2d_linear_linear_value(&wc_efOut[0ULL], &t37.mField1[0ULL], &t37.mField2
    [0ULL], &t39.mField0[0ULL], &t39.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t81[0ULL], &t46[0ULL], &t47[0ULL]);
  t266[0] = wc_efOut[0];
  t441 = -(t266[0ULL] * t476);
  t485 = -t441;
  tlu2_2d_linear_linear_value(&xc_efOut[0ULL], &t404[0ULL], &t382[0ULL], &t396
    [0ULL], &t397[0ULL], ((_NeDynamicSystem*)(LC))->mField30, &t81[0ULL], &t46
    [0ULL], &t47[0ULL]);
  t311[0] = xc_efOut[0];
  t441 = -(t266[0ULL] * intermediate_der4436 + t311[0ULL]);
  t303_idx_0 = -t441;
  tlu2_2d_linear_linear_value(&yc_efOut[0ULL], &t37.mField1[0ULL], &t37.mField2
    [0ULL], &t39.mField0[0ULL], &t39.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t81[0ULL], &t46[0ULL], &t47[0ULL]);
  t266[0] = yc_efOut[0];
  t441 = -(t266[0ULL] * t476);
  t476 = -t441;
  tlu2_2d_linear_linear_value(&ad_efOut[0ULL], &t404[0ULL], &t382[0ULL], &t396
    [0ULL], &t397[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t81[0ULL], &t46
    [0ULL], &t47[0ULL]);
  t311[0] = ad_efOut[0];
  t441 = -(t266[0ULL] * intermediate_der4436 + t311[0ULL]);
  intermediate_der4436 = -t441;
  tlu2_2d_linear_linear_value(&bd_efOut[0ULL], &t35.mField1[0ULL], &t35.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t81[0ULL], &t46[0ULL], &t47[0ULL]);
  t266[0] = bd_efOut[0];
  t441 = -(t266[0ULL] * t482);
  U_idx_3 = -t441;
  tlu2_2d_linear_linear_value(&cd_efOut[0ULL], &t398[0ULL], &t376[0ULL], &t393
    [0ULL], &t394[0ULL], ((_NeDynamicSystem*)(LC))->mField0, &t81[0ULL], &t46
    [0ULL], &t47[0ULL]);
  t311[0] = cd_efOut[0];
  t441 = -(t266[0ULL] * t483 + t311[0ULL]);
  U_idx_3 = X[53ULL] * U_idx_3 * 100.0 + 1.0;
  intermediate_der4440 = (X[53ULL] * -t441 + intermediate_der4440) * 100.0;
  tlu2_2d_linear_linear_value(&dd_efOut[0ULL], &t35.mField1[0ULL], &t35.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t81[0ULL], &t46[0ULL], &t47[0ULL]);
  t45[0] = dd_efOut[0];
  t441 = -(t45[0ULL] * t482);
  t482 = -t441;
  tlu2_2d_linear_linear_value(&ed_efOut[0ULL], &t398[0ULL], &t376[0ULL], &t393
    [0ULL], &t394[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t81[0ULL], &t46
    [0ULL], &t47[0ULL]);
  t266[0] = ed_efOut[0];
  t441 = -(t45[0ULL] * t483 + t266[0ULL]);
  t447 = ((real_T)(M[55ULL] != 0) * 2.0 - 1.0) * t447 / 1.5;
  t445 = ((real_T)(M[55ULL] != 0) * 2.0 - 1.0) * t445 / 1.5;
  t444 = ((real_T)(M[55ULL] != 0) * 2.0 - 1.0) * t444 / 1.5;
  t489 = -((intermediate_der6086 - 0.8) * t445 * 0.4) - (intermediate_der6087 -
    0.25) * t666 * 0.7;
  t666 = -((intermediate_der6086 - 0.8) * t447 * 0.4) - (intermediate_der6087 -
    0.25) * t669 * 0.7;
  if (t453 <= 0.0) {
    intermediate_der6086 = 0.0;
  } else {
    intermediate_der6086 = t453 >= 1.0 ? 0.0 : -((intermediate_der6086 - 0.8) *
      t444 * 0.4);
  }

  if (t453 <= 0.0) {
    intermediate_der6087 = 0.0;
  } else {
    intermediate_der6087 = t453 >= 1.0 ? 0.0 : t489;
  }

  if (t453 <= 0.0) {
    t669 = 0.0;
  } else {
    t669 = t453 >= 1.0 ? 0.0 : t666;
  }

  intermediate_der6104 = intermediate_der6084 > 0.01 ? t468 *
    intermediate_der6086 + intermediate_der6104 * t472 : 0.0;
  intermediate_der5298 = intermediate_der6084 > 0.01 ? t468 *
    intermediate_der6087 + intermediate_der5298 * t472 : 0.0;
  t455 = intermediate_der6084 > 0.01 ? t468 * t669 + t455 * t472 : 0.0;
  intermediate_der6084 = intermediate_der6086;
  intermediate_der6086 = intermediate_der6087;
  intermediate_der6087 = t669;
  t453 = intermediate_der6104;
  t669 = ((real_T)(M[61ULL] != 0) * 2.0 - 1.0) * t473;
  t473 = ((real_T)(M[61ULL] != 0) * 2.0 - 1.0) * X[56ULL] * intermediate_der6104;
  t314[0ULL] = 0.1;
  t314[1ULL] = 0.1;
  t314[2ULL] = intermediate_der6087;
  t314[3ULL] = t455;
  t314[4ULL] = t457;
  t314[5ULL] = intermediate_der2283;
  t314[6ULL] = intermediate_der2277 * 0.001;
  t314[7ULL] = t459;
  t314[8ULL] = t447;
  t314[9ULL] = ((real_T)(M[61ULL] != 0) * 2.0 - 1.0) * X[56ULL] * t455 * 0.001;
  t314[10ULL] = t465;
  t314[11ULL] = t480;
  t314[12ULL] = t431;
  t314[13ULL] = t470;
  t314[14ULL] = t474 * 0.001;
  t314[15ULL] = intermediate_der4428;
  t317[0ULL] = 0.1;
  t317[1ULL] = intermediate_der6086;
  t317[2ULL] = intermediate_der5298;
  t317[3ULL] = intermediate_der2286;
  t317[4ULL] = t454;
  t317[5ULL] = t445;
  t317[6ULL] = ((real_T)(M[61ULL] != 0) * 2.0 - 1.0) * X[56ULL] *
    intermediate_der5298 * 0.001;
  t317[7ULL] = t461;
  t317[8ULL] = t436;
  t317[9ULL] = t303_idx_0 * 0.001;
  t317[10ULL] = intermediate_der4436;
  t318[0ULL] = 1.0;
  t318[1ULL] = t484;
  t318[2ULL] = t485 * 0.001;
  t318[3ULL] = t476;
  t319[0ULL] = 0.1;
  t319[1ULL] = 0.1;
  t319[2ULL] = intermediate_der4440;
  t319[3ULL] = -t441;
  t321[0ULL] = 1.0;
  t321[1ULL] = 1.0;
  t321[2ULL] = 1.0;
  t321[3ULL] = t669 * 0.001;
  t323[0ULL] = 1.0;
  t323[1ULL] = intermediate_der6084;
  t323[2ULL] = t453;
  t323[3ULL] = t434;
  t323[4ULL] = intermediate_der2296;
  t323[5ULL] = intermediate_der2298 * 0.001;
  t323[6ULL] = t458;
  t323[7ULL] = t444;
  t323[8ULL] = t473 * 0.001;
  t323[9ULL] = t469;
  t323[10ULL] = t471 * 0.001;
  t323[11ULL] = intermediate_der4427;
  for (t334 = 0ULL; t334 < 16ULL; t334++) {
    t265[t334] = t314[t334];
  }

  t265[16ULL] = t452;
  t265[17ULL] = t467;
  t265[18ULL] = t479;
  t265[19ULL] = intermediate_der2321;
  t265[20ULL] = t437;
  t265[21ULL] = t437;
  t265[22ULL] = intermediate_der2140;
  t265[23ULL] = intermediate_der2140;
  for (t334 = 0ULL; t334 < 11ULL; t334++) {
    t265[t334 + 24ULL] = t317[t334];
  }

  for (t334 = 0ULL; t334 < 4ULL; t334++) {
    t265[t334 + 35ULL] = t318[t334];
  }

  for (t334 = 0ULL; t334 < 4ULL; t334++) {
    t265[t334 + 39ULL] = t319[t334];
  }

  t265[43ULL] = 1.0;
  t265[44ULL] = U_idx_3;
  t265[45ULL] = t482;
  for (t334 = 0ULL; t334 < 4ULL; t334++) {
    t265[t334 + 46ULL] = t321[t334];
  }

  t265[50ULL] = -1.0;
  t265[51ULL] = t440;
  t265[52ULL] = 0.1;
  t265[53ULL] = t438;
  for (t334 = 0ULL; t334 < 12ULL; t334++) {
    t265[t334 + 54ULL] = t323[t334];
  }

  out.mX[0] = t265[0];
  out.mX[1] = t265[1];
  out.mX[2] = t265[2];
  out.mX[3] = t265[3];
  out.mX[4] = t265[4];
  out.mX[5] = t265[5];
  out.mX[6] = t265[6];
  out.mX[7] = t265[7];
  out.mX[8] = t265[8];
  out.mX[9] = t265[9];
  out.mX[10] = t265[10];
  out.mX[11] = t265[11];
  out.mX[12] = t265[12];
  out.mX[13] = t265[13];
  out.mX[14] = t265[14];
  out.mX[15] = t265[15];
  out.mX[16] = t265[16];
  out.mX[17] = t265[17];
  out.mX[18] = t265[18];
  out.mX[19] = t265[19];
  out.mX[20] = t265[20];
  out.mX[21] = t265[21];
  out.mX[22] = t265[22];
  out.mX[23] = t265[23];
  out.mX[24] = t265[24];
  out.mX[25] = t265[25];
  out.mX[26] = t265[26];
  out.mX[27] = t265[27];
  out.mX[28] = t265[28];
  out.mX[29] = t265[29];
  out.mX[30] = t265[30];
  out.mX[31] = t265[31];
  out.mX[32] = t265[32];
  out.mX[33] = t265[33];
  out.mX[34] = t265[34];
  out.mX[35] = t265[35];
  out.mX[36] = t265[36];
  out.mX[37] = t265[37];
  out.mX[38] = t265[38];
  out.mX[39] = t265[39];
  out.mX[40] = t265[40];
  out.mX[41] = t265[41];
  out.mX[42] = t265[42];
  out.mX[43] = t265[43];
  out.mX[44] = t265[44];
  out.mX[45] = t265[45];
  out.mX[46] = t265[46];
  out.mX[47] = t265[47];
  out.mX[48] = t265[48];
  out.mX[49] = t265[49];
  out.mX[50] = t265[50];
  out.mX[51] = t265[51];
  out.mX[52] = t265[52];
  out.mX[53] = t265[53];
  out.mX[54] = t265[54];
  out.mX[55] = t265[55];
  out.mX[56] = t265[56];
  out.mX[57] = t265[57];
  out.mX[58] = t265[58];
  out.mX[59] = t265[59];
  out.mX[60] = t265[60];
  out.mX[61] = t265[61];
  out.mX[62] = t265[62];
  out.mX[63] = t265[63];
  out.mX[64] = t265[64];
  out.mX[65] = t265[65];
  out.mX[66] = 1.0;
  out.mX[67] = 1.0;
  out.mX[68] = 0.099999999999999992;
  out.mX[69] = 1.0;
  out.mX[70] = intermediate_der4419;
  out.mX[71] = 1.0;
  out.mX[72] = 1.0;
  out.mX[73] = 1.0;
  out.mX[74] = 1.0;
  (void)LC;
  (void)t671;
  return 0;
}
