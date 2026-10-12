/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv9/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_sys_struct.h"
#include "PW_SMRv9_4b22eff7_1_ds_duf.h"
#include "PW_SMRv9_4b22eff7_1_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_externals.h"
#include "PW_SMRv9_4b22eff7_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv9_4b22eff7_1_ds_duf(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t391, NeDsMethodOutput *t392)
{
  ETTS0 b_efOut;
  ETTS0 bb_efOut;
  ETTS0 bc_efOut;
  ETTS0 d_efOut;
  ETTS0 db_efOut;
  ETTS0 ec_efOut;
  ETTS0 efOut;
  ETTS0 g_efOut;
  ETTS0 gb_efOut;
  ETTS0 gc_efOut;
  ETTS0 ib_efOut;
  ETTS0 j_efOut;
  ETTS0 kb_efOut;
  ETTS0 m_efOut;
  ETTS0 mb_efOut;
  ETTS0 o_efOut;
  ETTS0 p_efOut;
  ETTS0 pb_efOut;
  ETTS0 r_efOut;
  ETTS0 sb_efOut;
  ETTS0 t13;
  ETTS0 t15;
  ETTS0 t18;
  ETTS0 t19;
  ETTS0 t20;
  ETTS0 t21;
  ETTS0 t22;
  ETTS0 t23;
  ETTS0 u_efOut;
  ETTS0 ub_efOut;
  ETTS0 w_efOut;
  ETTS0 y_efOut;
  PmRealVector out;
  real_T X[250];
  real_T t199[19];
  real_T t241[6];
  real_T ab_efOut[1];
  real_T ac_efOut[1];
  real_T c_efOut[1];
  real_T cb_efOut[1];
  real_T cc_efOut[1];
  real_T dc_efOut[1];
  real_T e_efOut[1];
  real_T eb_efOut[1];
  real_T f_efOut[1];
  real_T fb_efOut[1];
  real_T fc_efOut[1];
  real_T h_efOut[1];
  real_T hb_efOut[1];
  real_T hc_efOut[1];
  real_T i_efOut[1];
  real_T ic_efOut[1];
  real_T jb_efOut[1];
  real_T jc_efOut[1];
  real_T k_efOut[1];
  real_T kc_efOut[1];
  real_T l_efOut[1];
  real_T lb_efOut[1];
  real_T n_efOut[1];
  real_T nb_efOut[1];
  real_T ob_efOut[1];
  real_T q_efOut[1];
  real_T qb_efOut[1];
  real_T rb_efOut[1];
  real_T s_efOut[1];
  real_T t184[1];
  real_T t_efOut[1];
  real_T tb_efOut[1];
  real_T v_efOut[1];
  real_T vb_efOut[1];
  real_T wb_efOut[1];
  real_T x_efOut[1];
  real_T xb_efOut[1];
  real_T yb_efOut[1];
  real_T D_idx_0;
  real_T Simscape_Component1_mdot_nozzle;
  real_T Simscape_Component_efficiency_raw;
  real_T Simscape_Component_ideal_enthalpy_drop_raw;
  real_T U_idx_0;
  real_T U_idx_3;
  real_T U_idx_5;
  real_T U_idx_6;
  real_T U_idx_7;
  real_T intermediate_der2548;
  real_T intermediate_der43;
  real_T intermediate_der5623;
  real_T intermediate_der6184;
  real_T intrm_sf_mf_627;
  real_T t230_idx_0;
  real_T t258;
  real_T t260;
  real_T t262;
  real_T t263;
  real_T t264;
  real_T t265;
  real_T t266;
  real_T t267;
  real_T t268;
  real_T t270;
  real_T t271;
  real_T t272;
  real_T t273;
  real_T t275;
  real_T t276;
  real_T t277;
  real_T t278;
  real_T t280;
  real_T t281;
  real_T t283;
  real_T t285;
  real_T t286;
  real_T t287;
  real_T t291;
  real_T t313;
  real_T t330;
  real_T t363;
  real_T t375;
  real_T t378;
  real_T t382;
  real_T t389;
  real_T zc_int16;
  size_t t114[1];
  size_t t32[1];
  size_t t40[1];
  size_t t61[1];
  size_t t246;
  int32_T M[163];
  int32_T b;
  boolean_T intrm_sf_mf_630;
  boolean_T intrm_sf_mf_631;
  for (b = 0; b < 163; b++) {
    M[b] = t391->mM.mX[b];
  }

  U_idx_0 = t391->mU.mX[0];
  U_idx_3 = t391->mU.mX[3];
  U_idx_5 = t391->mU.mX[5];
  U_idx_6 = t391->mU.mX[6];
  U_idx_7 = t391->mU.mX[7];
  for (b = 0; b < 250; b++) {
    X[b] = t391->mX.mX[b];
  }

  D_idx_0 = t391->mD.mX[0];
  out = t392->mDUF;
  t184[0ULL] = X[67ULL];
  t40[0] = 28ULL;
  t32[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t184[0ULL], &t40
    [0ULL], &t32[0ULL]);
  t21 = efOut;
  t184[0ULL] = X[62ULL];
  t61[0] = 27ULL;
  tlu2_linear_linear_prelookup(&b_efOut.mField0[0ULL], &b_efOut.mField1[0ULL],
    &b_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t184[0ULL],
    &t61[0ULL], &t32[0ULL]);
  t22 = b_efOut;
  tlu2_2d_linear_linear_value(&c_efOut[0ULL], &t21.mField0[0ULL], &t21.mField2
    [0ULL], &t22.mField0[0ULL], &t22.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t40[0ULL], &t61[0ULL], &t32[0ULL]);
  t230_idx_0 = c_efOut[0];
  intermediate_der43 = t230_idx_0;
  t258 = X[68ULL] / (t230_idx_0 == 0.0 ? 1.0E-16 : t230_idx_0);
  t264 = pmf_sqrt(U_idx_0 * U_idx_0 + 14.212146009999998) + U_idx_0;
  t263 = t264 / 2.0;
  t264 = 376.99 / (t263 == 0.0 ? 1.0E-16 : t263) * t258;
  if (t264 < 0.0) {
    t260 = 60.0;
  } else if (t264 * 1.0E+6 <= 13899.999999999998) {
    t260 = t264 * t264 * -103514.3108534755 + 60.0;
  } else if (t264 * 1.0E+6 <= 20833.333333333332) {
    t260 = (t264 * 8716.2370695159861 + t264 * t264 * -417048.01839002169) -
      0.57784763313609466;
  } else {
    t260 = (t264 * 1.0E+6 - 20833.333333333332) * -0.0086607636967349147;
  }

  if (t264 < 0.0) {
    intermediate_der6184 = 4.2;
  } else if (t264 * 1.0E+6 <= 13899.999999999998) {
    t266 = 27799.999999999996 - t264 * 1.0E+6;
    intermediate_der6184 = (116.75999999999999 - t264 * t264 *
      201438.84892086327) / (t266 == 0.0 ? 1.0E-16 : t266) * 1000.0;
  } else if (t264 * 1.0E+6 <= 20833.333333333332) {
    t268 = t264 * 1.0E+6 - 6966.6666666666661;
    intermediate_der6184 = (t264 * 201.92191570484619 - 0.013429256594724218) *
      t264 / (t268 == 0.0 ? 1.0E-16 : t268) * 1.0E+6;
  } else {
    intermediate_der6184 = 6.2999959744434655;
  }

  t265 = intermediate_der6184 / 376.99;
  t184[0ULL] = X[0ULL];
  t40[0] = 100ULL;
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t184[0ULL],
    &t40[0ULL], &t32[0ULL]);
  t18 = d_efOut;
  tlu2_1d_linear_linear_value(&e_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = e_efOut[0];
  intermediate_der6184 = t230_idx_0;
  tlu2_1d_linear_linear_value(&f_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = f_efOut[0];
  t266 = t230_idx_0;
  t184[0ULL] = X[92ULL];
  tlu2_linear_linear_prelookup(&g_efOut.mField0[0ULL], &g_efOut.mField1[0ULL],
    &g_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t184[0ULL],
    &t40[0ULL], &t32[0ULL]);
  t15 = g_efOut;
  tlu2_1d_linear_linear_value(&h_efOut[0ULL], &t15.mField0[0ULL], &t15.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = h_efOut[0];
  t267 = t230_idx_0;
  tlu2_1d_linear_linear_value(&i_efOut[0ULL], &t15.mField0[0ULL], &t15.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = i_efOut[0];
  t268 = t230_idx_0;
  t184[0ULL] = X[15ULL];
  tlu2_linear_linear_prelookup(&j_efOut.mField0[0ULL], &j_efOut.mField1[0ULL],
    &j_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t184[0ULL],
    &t40[0ULL], &t32[0ULL]);
  t13 = j_efOut;
  tlu2_1d_linear_linear_value(&k_efOut[0ULL], &t13.mField0[0ULL], &t13.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = k_efOut[0];
  t262 = t230_idx_0;
  tlu2_1d_linear_linear_value(&l_efOut[0ULL], &t13.mField0[0ULL], &t13.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = l_efOut[0];
  if (X[118ULL] <= t262) {
    zc_int16 = X[118ULL] / (t262 == 0.0 ? 1.0E-16 : t262) - 1.0;
  } else if (X[118ULL] >= t230_idx_0) {
    zc_int16 = (X[118ULL] - 4000.0) / (4000.0 - t230_idx_0 == 0.0 ? 1.0E-16 :
      4000.0 - t230_idx_0) + 2.0;
  } else {
    t273 = t230_idx_0 - t262;
    zc_int16 = (X[118ULL] - t262) / (t273 == 0.0 ? 1.0E-16 : t273);
  }

  t184[0ULL] = zc_int16;
  t61[0] = 50ULL;
  tlu2_linear_linear_prelookup(&m_efOut.mField0[0ULL], &m_efOut.mField1[0ULL],
    &m_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t184[0ULL],
    &t61[0ULL], &t32[0ULL]);
  t19 = m_efOut;
  tlu2_2d_linear_linear_value(&n_efOut[0ULL], &t19.mField0[0ULL], &t19.mField2
    [0ULL], &t13.mField0[0ULL], &t13.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t61[0ULL], &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = n_efOut[0];
  t262 = t230_idx_0;
  t270 = (X[81ULL] / 3.0 + X[82ULL] / 3.0) + X[83ULL] / 3.0;
  t271 = pmf_sqrt(((X[81ULL] - t270) * (X[81ULL] - t270) + (X[82ULL] - t270) *
                   (X[82ULL] - t270)) + (X[83ULL] - t270) * (X[83ULL] - t270));
  t272 = t271 * 0.816496580927726;
  t184[0] = 0.5;
  tlu2_linear_linear_prelookup(&o_efOut.mField0[0ULL], &o_efOut.mField1[0ULL],
    &o_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t184[0ULL],
    &t61[0ULL], &t32[0ULL]);
  t22 = o_efOut;
  t184[0ULL] = (X[92ULL] + X[133ULL]) / 2.0;
  tlu2_linear_linear_prelookup(&p_efOut.mField0[0ULL], &p_efOut.mField1[0ULL],
    &p_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t184[0ULL],
    &t40[0ULL], &t32[0ULL]);
  t21 = p_efOut;
  tlu2_2d_linear_linear_value(&q_efOut[0ULL], &t22.mField0[0ULL], &t22.mField2
    [0ULL], &t21.mField0[0ULL], &t21.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t61[0ULL], &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = q_efOut[0];
  t273 = 1.0000000000000001E-7 / (t230_idx_0 == 0.0 ? 1.0E-16 : t230_idx_0) *
    4.1209000000000006E-6 / 2.0;
  t184[0ULL] = X[133ULL];
  tlu2_linear_linear_prelookup(&r_efOut.mField0[0ULL], &r_efOut.mField1[0ULL],
    &r_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t184[0ULL],
    &t40[0ULL], &t32[0ULL]);
  t20 = r_efOut;
  tlu2_1d_linear_linear_value(&s_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = s_efOut[0];
  t275 = t230_idx_0;
  tlu2_1d_linear_linear_value(&t_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = t_efOut[0];
  intrm_sf_mf_627 = t230_idx_0;
  t382 = X[133ULL] - X[92ULL];
  if (X[137ULL] <= t267) {
    intermediate_der2548 = X[137ULL] / (t267 == 0.0 ? 1.0E-16 : t267) - 1.0;
  } else if (X[137ULL] >= t268) {
    intermediate_der2548 = (X[137ULL] - 4000.0) / (4000.0 - t268 == 0.0 ?
      1.0E-16 : 4000.0 - t268) + 2.0;
  } else {
    t280 = t268 - t267;
    intermediate_der2548 = (X[137ULL] - t267) / (t280 == 0.0 ? 1.0E-16 : t280);
  }

  t184[0ULL] = intermediate_der2548;
  tlu2_linear_linear_prelookup(&u_efOut.mField0[0ULL], &u_efOut.mField1[0ULL],
    &u_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t184[0ULL],
    &t61[0ULL], &t32[0ULL]);
  t22 = u_efOut;
  tlu2_2d_linear_linear_value(&v_efOut[0ULL], &t22.mField0[0ULL], &t22.mField2
    [0ULL], &t15.mField0[0ULL], &t15.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t61[0ULL], &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = v_efOut[0];
  intermediate_der2548 = t230_idx_0;
  if (X[138ULL] <= t275) {
    t276 = X[138ULL] / (t275 == 0.0 ? 1.0E-16 : t275) - 1.0;
  } else if (X[138ULL] >= intrm_sf_mf_627) {
    t276 = (X[138ULL] - 4000.0) / (4000.0 - intrm_sf_mf_627 == 0.0 ? 1.0E-16 :
      4000.0 - intrm_sf_mf_627) + 2.0;
  } else {
    t285 = intrm_sf_mf_627 - t275;
    t276 = (X[138ULL] - t275) / (t285 == 0.0 ? 1.0E-16 : t285);
  }

  t184[0ULL] = t276;
  tlu2_linear_linear_prelookup(&w_efOut.mField0[0ULL], &w_efOut.mField1[0ULL],
    &w_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t184[0ULL],
    &t61[0ULL], &t32[0ULL]);
  t21 = w_efOut;
  tlu2_2d_linear_linear_value(&x_efOut[0ULL], &t21.mField0[0ULL], &t21.mField2
    [0ULL], &t20.mField0[0ULL], &t20.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t61[0ULL], &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = x_efOut[0];
  t276 = t230_idx_0;
  if (X[139ULL] <= t267) {
    t277 = X[139ULL] / (t267 == 0.0 ? 1.0E-16 : t267) - 1.0;
  } else if (X[139ULL] >= t268) {
    t277 = (X[139ULL] - 4000.0) / (4000.0 - t268 == 0.0 ? 1.0E-16 : 4000.0 -
      t268) + 2.0;
  } else {
    t375 = t268 - t267;
    t277 = (X[139ULL] - t267) / (t375 == 0.0 ? 1.0E-16 : t375);
  }

  t184[0ULL] = t277;
  tlu2_linear_linear_prelookup(&y_efOut.mField0[0ULL], &y_efOut.mField1[0ULL],
    &y_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t184[0ULL],
    &t61[0ULL], &t32[0ULL]);
  t21 = y_efOut;
  tlu2_2d_linear_linear_value(&ab_efOut[0ULL], &t21.mField0[0ULL], &t21.mField2
    [0ULL], &t15.mField0[0ULL], &t15.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t61[0ULL], &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = ab_efOut[0];
  t267 = t230_idx_0;
  if (X[140ULL] <= t275) {
    t268 = X[140ULL] / (t275 == 0.0 ? 1.0E-16 : t275) - 1.0;
  } else if (X[140ULL] >= intrm_sf_mf_627) {
    t268 = (X[140ULL] - 4000.0) / (4000.0 - intrm_sf_mf_627 == 0.0 ? 1.0E-16 :
      4000.0 - intrm_sf_mf_627) + 2.0;
  } else {
    t285 = intrm_sf_mf_627 - t275;
    t268 = (X[140ULL] - t275) / (t285 == 0.0 ? 1.0E-16 : t285);
  }

  t184[0ULL] = t268;
  tlu2_linear_linear_prelookup(&bb_efOut.mField0[0ULL], &bb_efOut.mField1[0ULL],
    &bb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t184[0ULL],
    &t61[0ULL], &t32[0ULL]);
  t23 = bb_efOut;
  tlu2_2d_linear_linear_value(&cb_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t20.mField0[0ULL], &t20.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t61[0ULL], &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = cb_efOut[0];
  t275 = pmf_sqrt(t273 * 400000.0 + X[96ULL] * X[96ULL]);
  t267 = (t276 + t267) / 2.0;
  t267 = (-X[96ULL] / (t275 == 0.0 ? 1.0E-16 : t275) + 1.0) *
    ((intermediate_der2548 + t230_idx_0) / 2.0) / 2.0 + (1.0 - -X[96ULL] / (t275
    == 0.0 ? 1.0E-16 : t275)) * t267 / 2.0;
  t184[0ULL] = X[25ULL];
  tlu2_linear_linear_prelookup(&db_efOut.mField0[0ULL], &db_efOut.mField1[0ULL],
    &db_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t184[0ULL],
    &t40[0ULL], &t32[0ULL]);
  t21 = db_efOut;
  tlu2_1d_linear_linear_value(&eb_efOut[0ULL], &t21.mField0[0ULL], &t21.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = eb_efOut[0];
  t268 = t230_idx_0;
  tlu2_1d_linear_linear_value(&fb_efOut[0ULL], &t21.mField0[0ULL], &t21.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = fb_efOut[0];
  if (X[26ULL] <= t268) {
    t275 = X[26ULL] / (t268 == 0.0 ? 1.0E-16 : t268) - 1.0;
  } else if (X[26ULL] >= t230_idx_0) {
    t275 = (X[26ULL] - 4000.0) / (4000.0 - t230_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t230_idx_0) + 2.0;
  } else {
    t363 = t230_idx_0 - t268;
    t275 = (X[26ULL] - t268) / (t363 == 0.0 ? 1.0E-16 : t363);
  }

  t184[0ULL] = t275;
  t114[0] = 25ULL;
  tlu2_linear_linear_prelookup(&gb_efOut.mField0[0ULL], &gb_efOut.mField1[0ULL],
    &gb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t184[0ULL],
    &t114[0ULL], &t32[0ULL]);
  t22 = gb_efOut;
  tlu2_2d_linear_linear_value(&hb_efOut[0ULL], &t22.mField0[0ULL], &t22.mField2
    [0ULL], &t21.mField0[0ULL], &t21.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField23, &t114[0ULL], &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = hb_efOut[0];
  t268 = t230_idx_0;
  t184[0ULL] = t275;
  tlu2_linear_linear_prelookup(&ib_efOut.mField0[0ULL], &ib_efOut.mField1[0ULL],
    &ib_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField26, &t184[0ULL],
    &t61[0ULL], &t32[0ULL]);
  t23 = ib_efOut;
  tlu2_2d_linear_linear_value(&jb_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t21.mField0[0ULL], &t21.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField27, &t61[0ULL], &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = jb_efOut[0];
  t273 = t230_idx_0;
  t184[0ULL] = t275;
  tlu2_linear_linear_prelookup(&kb_efOut.mField0[0ULL], &kb_efOut.mField1[0ULL],
    &kb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t184[0ULL],
    &t114[0ULL], &t32[0ULL]);
  t20 = kb_efOut;
  tlu2_2d_linear_linear_value(&lb_efOut[0ULL], &t20.mField0[0ULL], &t20.mField2
    [0ULL], &t21.mField0[0ULL], &t21.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t114[0ULL], &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = lb_efOut[0];
  intrm_sf_mf_627 = t230_idx_0;
  if (X[154ULL] <= intermediate_der6184) {
    intermediate_der2548 = X[154ULL] / (intermediate_der6184 == 0.0 ? 1.0E-16 :
      intermediate_der6184) - 1.0;
  } else if (X[154ULL] >= t266) {
    intermediate_der2548 = (X[154ULL] - 4000.0) / (4000.0 - t266 == 0.0 ?
      1.0E-16 : 4000.0 - t266) + 2.0;
  } else {
    t363 = t266 - intermediate_der6184;
    intermediate_der2548 = (X[154ULL] - intermediate_der6184) / (t363 == 0.0 ?
      1.0E-16 : t363);
  }

  t184[0ULL] = intermediate_der2548;
  tlu2_linear_linear_prelookup(&mb_efOut.mField0[0ULL], &mb_efOut.mField1[0ULL],
    &mb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t184[0ULL],
    &t61[0ULL], &t32[0ULL]);
  t15 = mb_efOut;
  tlu2_2d_linear_linear_value(&nb_efOut[0ULL], &t15.mField0[0ULL], &t15.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t61[0ULL], &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = nb_efOut[0];
  intermediate_der6184 = t230_idx_0;
  t266 = X[0ULL] - X[15ULL];
  tlu2_2d_linear_linear_value(&ob_efOut[0ULL], &t15.mField0[0ULL], &t15.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t61[0ULL], &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = ob_efOut[0];
  t313 = pmf_sqrt(t230_idx_0 * 461.5);
  intermediate_der2548 = X[0ULL] * 0.85 / (t313 == 0.0 ? 1.0E-16 : t313) *
    0.667262351240862;
  if (U_idx_5 <= 0.0) {
    t277 = 0.0;
  } else {
    t277 = U_idx_5 >= 1.0 ? 1.0 : U_idx_5;
  }

  t278 = t277 * 0.0002;
  t277 = intermediate_der2548 * t278;
  Simscape_Component_efficiency_raw = X[15ULL] / (X[0ULL] == 0.0 ? 1.0E-16 : X
    [0ULL]);
  if (Simscape_Component_efficiency_raw <= 0.0) {
    t280 = 0.0;
  } else {
    t280 = Simscape_Component_efficiency_raw >= 1.0 ? 1.0 :
      Simscape_Component_efficiency_raw;
  }

  Simscape_Component_efficiency_raw = (pmf_pow(t280, 1.5384615384615383) -
    pmf_pow(t280, 1.7692307692307689)) * 8.6666666666666661;
  if (Simscape_Component_efficiency_raw <= 0.0) {
    t281 = 0.0;
  } else {
    t281 = Simscape_Component_efficiency_raw >= 1.0E+6 ? 1.0E+6 :
      Simscape_Component_efficiency_raw;
  }

  t278 = t278 * X[0ULL] * 0.85 / (t313 == 0.0 ? 1.0E-16 : t313) * pmf_sqrt(t281);
  if (t280 < 0.545727733814065) {
    Simscape_Component_efficiency_raw = t277 * 100000.0;
  } else {
    Simscape_Component_efficiency_raw = t278 * 100000.0;
  }

  t277 = t266 > 0.01 ? Simscape_Component_efficiency_raw : 0.0;
  t363 = fabs(t277);
  t278 = t363 / 0.5;
  Simscape_Component_efficiency_raw = 0.8 - (t278 - 0.8) * (t278 - 0.8) * 0.2;
  t278 = intermediate_der6184 * X[0ULL] * 100.0 + X[154ULL];
  if (X[15ULL] <= 1.0) {
    intermediate_der6184 = 1.0;
  } else {
    intermediate_der6184 = X[15ULL] >= 1000.0 ? 1000.0 : X[15ULL];
  }

  t184[0ULL] = intermediate_der6184;
  tlu2_linear_linear_prelookup(&pb_efOut.mField0[0ULL], &pb_efOut.mField1[0ULL],
    &pb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t184[0ULL],
    &t40[0ULL], &t32[0ULL]);
  t21 = pb_efOut;
  tlu2_1d_linear_linear_value(&qb_efOut[0ULL], &t21.mField0[0ULL], &t21.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = qb_efOut[0];
  Simscape_Component_ideal_enthalpy_drop_raw = t230_idx_0;
  tlu2_1d_linear_linear_value(&rb_efOut[0ULL], &t21.mField0[0ULL], &t21.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = rb_efOut[0];
  t283 = t230_idx_0;
  if (Simscape_Component_ideal_enthalpy_drop_raw <=
      Simscape_Component_ideal_enthalpy_drop_raw) {
    intermediate_der5623 = Simscape_Component_ideal_enthalpy_drop_raw /
      (Simscape_Component_ideal_enthalpy_drop_raw == 0.0 ? 1.0E-16 :
       Simscape_Component_ideal_enthalpy_drop_raw) - 1.0;
  } else if (Simscape_Component_ideal_enthalpy_drop_raw >= t230_idx_0) {
    intermediate_der5623 = (Simscape_Component_ideal_enthalpy_drop_raw - 4000.0)
      / (4000.0 - t230_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t230_idx_0) + 2.0;
  } else {
    t363 = t230_idx_0 - Simscape_Component_ideal_enthalpy_drop_raw;
    intermediate_der5623 = (Simscape_Component_ideal_enthalpy_drop_raw -
      Simscape_Component_ideal_enthalpy_drop_raw) / (t363 == 0.0 ? 1.0E-16 :
      t363);
  }

  t184[0ULL] = intermediate_der5623;
  tlu2_linear_linear_prelookup(&sb_efOut.mField0[0ULL], &sb_efOut.mField1[0ULL],
    &sb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t184[0ULL],
    &t61[0ULL], &t32[0ULL]);
  t22 = sb_efOut;
  tlu2_2d_linear_linear_value(&tb_efOut[0ULL], &t22.mField0[0ULL], &t22.mField2
    [0ULL], &t21.mField0[0ULL], &t21.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t61[0ULL], &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = tb_efOut[0];
  t285 = t230_idx_0 * intermediate_der6184 * 100.0 +
    Simscape_Component_ideal_enthalpy_drop_raw;
  if (t283 <= Simscape_Component_ideal_enthalpy_drop_raw) {
    intermediate_der5623 = t283 / (Simscape_Component_ideal_enthalpy_drop_raw ==
      0.0 ? 1.0E-16 : Simscape_Component_ideal_enthalpy_drop_raw) - 1.0;
  } else if (t283 >= t283) {
    intermediate_der5623 = (t283 - 4000.0) / (4000.0 - t283 == 0.0 ? 1.0E-16 :
      4000.0 - t283) + 2.0;
  } else {
    t363 = t283 - Simscape_Component_ideal_enthalpy_drop_raw;
    intermediate_der5623 = (t283 - Simscape_Component_ideal_enthalpy_drop_raw) /
      (t363 == 0.0 ? 1.0E-16 : t363);
  }

  t184[0ULL] = intermediate_der5623;
  tlu2_linear_linear_prelookup(&ub_efOut.mField0[0ULL], &ub_efOut.mField1[0ULL],
    &ub_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t184[0ULL],
    &t61[0ULL], &t32[0ULL]);
  t23 = ub_efOut;
  tlu2_2d_linear_linear_value(&vb_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t21.mField0[0ULL], &t21.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t61[0ULL], &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = vb_efOut[0];
  intermediate_der5623 = t230_idx_0 * intermediate_der6184 * 100.0 + t283;
  tlu2_2d_linear_linear_value(&wb_efOut[0ULL], &t15.mField0[0ULL], &t15.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t61[0ULL], &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = wb_efOut[0];
  intermediate_der6184 = t230_idx_0;
  tlu2_2d_linear_linear_value(&xb_efOut[0ULL], &t22.mField0[0ULL], &t22.mField2
    [0ULL], &t21.mField0[0ULL], &t21.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t61[0ULL], &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = xb_efOut[0];
  Simscape_Component_ideal_enthalpy_drop_raw = t230_idx_0;
  tlu2_2d_linear_linear_value(&yb_efOut[0ULL], &t23.mField0[0ULL], &t23.mField2
    [0ULL], &t21.mField0[0ULL], &t21.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t61[0ULL], &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = yb_efOut[0];
  t330 = t230_idx_0 - Simscape_Component_ideal_enthalpy_drop_raw;
  intermediate_der6184 = (intermediate_der6184 -
    Simscape_Component_ideal_enthalpy_drop_raw) / (t330 == 0.0 ? 1.0E-16 : t330);
  if (intermediate_der6184 <= 0.0) {
    Simscape_Component_ideal_enthalpy_drop_raw = 0.0;
  } else {
    Simscape_Component_ideal_enthalpy_drop_raw = intermediate_der6184 >= 1.0 ?
      1.0 : intermediate_der6184;
  }

  Simscape_Component_ideal_enthalpy_drop_raw = t278 - ((intermediate_der5623 -
    t285) * Simscape_Component_ideal_enthalpy_drop_raw + t285);
  t283 = pmf_sqrt(X[18ULL] * X[18ULL] + 1.0);
  t278 = X[15ULL] - X[88ULL];
  tlu2_2d_linear_linear_value(&ac_efOut[0ULL], &t19.mField0[0ULL], &t19.mField2
    [0ULL], &t13.mField0[0ULL], &t13.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t61[0ULL], &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = ac_efOut[0];
  t330 = pmf_sqrt(t230_idx_0 * 461.5);
  intermediate_der5623 = X[15ULL] * 0.85 / (t330 == 0.0 ? 1.0E-16 : t330) *
    0.667262351240862;
  if (U_idx_6 <= 0.0) {
    t286 = 0.0;
  } else {
    t286 = U_idx_6 >= 1.0 ? 1.0 : U_idx_6;
  }

  t287 = t286 * 0.0002;
  t286 = intermediate_der5623 * t287;
  Simscape_Component1_mdot_nozzle = X[88ULL] / (X[15ULL] == 0.0 ? 1.0E-16 : X
    [15ULL]);
  if (Simscape_Component1_mdot_nozzle <= 0.0) {
    t378 = 0.0;
  } else {
    t378 = Simscape_Component1_mdot_nozzle >= 1.0 ? 1.0 :
      Simscape_Component1_mdot_nozzle;
  }

  Simscape_Component1_mdot_nozzle = (pmf_pow(t378, 1.5384615384615383) - pmf_pow
    (t378, 1.7692307692307689)) * 8.6666666666666661;
  if (Simscape_Component1_mdot_nozzle <= 0.0) {
    t375 = 0.0;
  } else {
    t375 = Simscape_Component1_mdot_nozzle >= 1.0E+6 ? 1.0E+6 :
      Simscape_Component1_mdot_nozzle;
  }

  t287 = X[15ULL] * t287 * 0.85 / (t330 == 0.0 ? 1.0E-16 : t330) * pmf_sqrt(t375);
  if (t378 < 0.545727733814065) {
    Simscape_Component1_mdot_nozzle = t286 * 100000.0;
  } else {
    Simscape_Component1_mdot_nozzle = t287 * 100000.0;
  }

  t286 = t278 > 0.01 ? Simscape_Component1_mdot_nozzle : 0.0;
  t363 = fabs(t286);
  t287 = t363 / 0.5;
  Simscape_Component1_mdot_nozzle = 0.8 - (t287 - 0.8) * (t287 - 0.8) * 0.2;
  t287 = t262 * X[15ULL] * 100.0 + X[118ULL];
  if (X[88ULL] <= 1.0) {
    t262 = 1.0;
  } else {
    t262 = X[88ULL] >= 1000.0 ? 1000.0 : X[88ULL];
  }

  t184[0ULL] = t262;
  tlu2_linear_linear_prelookup(&bc_efOut.mField0[0ULL], &bc_efOut.mField1[0ULL],
    &bc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t184[0ULL],
    &t40[0ULL], &t32[0ULL]);
  t15 = bc_efOut;
  tlu2_1d_linear_linear_value(&cc_efOut[0ULL], &t15.mField0[0ULL], &t15.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = cc_efOut[0];
  t291 = t230_idx_0;
  tlu2_1d_linear_linear_value(&dc_efOut[0ULL], &t15.mField0[0ULL], &t15.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = dc_efOut[0];
  t276 = t230_idx_0;
  if (t291 <= t291) {
    intermediate_der6184 = t291 / (t291 == 0.0 ? 1.0E-16 : t291) - 1.0;
  } else if (t291 >= t230_idx_0) {
    intermediate_der6184 = (t291 - 4000.0) / (4000.0 - t230_idx_0 == 0.0 ?
      1.0E-16 : 4000.0 - t230_idx_0) + 2.0;
  } else {
    t363 = t230_idx_0 - t291;
    intermediate_der6184 = (t291 - t291) / (t363 == 0.0 ? 1.0E-16 : t363);
  }

  t184[0ULL] = intermediate_der6184;
  tlu2_linear_linear_prelookup(&ec_efOut.mField0[0ULL], &ec_efOut.mField1[0ULL],
    &ec_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t184[0ULL],
    &t61[0ULL], &t32[0ULL]);
  t21 = ec_efOut;
  tlu2_2d_linear_linear_value(&fc_efOut[0ULL], &t21.mField0[0ULL], &t21.mField2
    [0ULL], &t15.mField0[0ULL], &t15.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t61[0ULL], &t40[0ULL], &t32[0ULL]);
  t230_idx_0 = fc_efOut[0];
  t230_idx_0 = t230_idx_0 * t262 * 100.0 + t291;
  if (t276 <= t291) {
    intermediate_der6184 = t276 / (t291 == 0.0 ? 1.0E-16 : t291) - 1.0;
  } else if (t276 >= t276) {
    intermediate_der6184 = (t276 - 4000.0) / (4000.0 - t276 == 0.0 ? 1.0E-16 :
      4000.0 - t276) + 2.0;
  } else {
    t363 = t276 - t291;
    intermediate_der6184 = (t276 - t291) / (t363 == 0.0 ? 1.0E-16 : t363);
  }

  t184[0ULL] = intermediate_der6184;
  tlu2_linear_linear_prelookup(&gc_efOut.mField0[0ULL], &gc_efOut.mField1[0ULL],
    &gc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t184[0ULL],
    &t61[0ULL], &t32[0ULL]);
  t22 = gc_efOut;
  tlu2_2d_linear_linear_value(&hc_efOut[0ULL], &t22.mField0[0ULL], &t22.mField2
    [0ULL], &t15.mField0[0ULL], &t15.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t61[0ULL], &t40[0ULL], &t32[0ULL]);
  t184[0] = hc_efOut[0];
  t291 = t184[0ULL];
  intermediate_der6184 = t291 * t262 * 100.0 + t276;
  tlu2_2d_linear_linear_value(&ic_efOut[0ULL], &t19.mField0[0ULL], &t19.mField2
    [0ULL], &t13.mField0[0ULL], &t13.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t61[0ULL], &t40[0ULL], &t32[0ULL]);
  t184[0] = ic_efOut[0];
  t262 = t184[0ULL];
  tlu2_2d_linear_linear_value(&jc_efOut[0ULL], &t21.mField0[0ULL], &t21.mField2
    [0ULL], &t15.mField0[0ULL], &t15.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t61[0ULL], &t40[0ULL], &t32[0ULL]);
  t184[0] = jc_efOut[0];
  t291 = t184[0ULL];
  tlu2_2d_linear_linear_value(&kc_efOut[0ULL], &t22.mField0[0ULL], &t22.mField2
    [0ULL], &t15.mField0[0ULL], &t15.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t61[0ULL], &t40[0ULL], &t32[0ULL]);
  t184[0] = kc_efOut[0];
  t276 = t184[0ULL];
  t363 = t276 - t291;
  t262 = (t262 - t291) / (t363 == 0.0 ? 1.0E-16 : t363);
  if (t262 <= 0.0) {
    t291 = 0.0;
  } else {
    t291 = t262 >= 1.0 ? 1.0 : t262;
  }

  t291 = t287 - ((intermediate_der6184 - t230_idx_0) * t291 + t230_idx_0);
  t287 = ((((X[81ULL] * X[81ULL] - X[81ULL] * X[82ULL]) - X[81ULL] * X[83ULL]) +
           X[82ULL] * X[82ULL]) - X[82ULL] * X[83ULL]) + X[83ULL] * X[83ULL];
  if (t287 >= 0.0) {
    t276 = pmf_sqrt(t287);
  } else {
    t276 = -pmf_sqrt(-t287);
  }

  t287 = X[81ULL] - t270;
  intermediate_der6184 = X[82ULL] - t270;
  t230_idx_0 = X[83ULL] - t270;
  if (U_idx_7 <= 1.0E-6) {
    t270 = 1.0E-6;
  } else {
    t270 = U_idx_7 >= pmf_get_inf() ? pmf_get_inf() : U_idx_7;
  }

  t285 = t275 / 0.1;
  t363 = t285 * t285 * 3.0 - t285 * t285 * t285 * 2.0;
  t285 = (t275 - 0.9) / 0.099999999999999978;
  t262 = t285 * t285 * 3.0 - t285 * t285 * t285 * 2.0;
  if (t275 <= 0.0) {
    t285 = t268;
  } else if (t275 >= 0.1) {
    t285 = t273;
  } else {
    t285 = (1.0 - t363) * t268 + t273 * t363;
  }

  if (t275 <= 0.9) {
    t268 = t285;
  } else if (t275 >= 1.0) {
    t268 = intrm_sf_mf_627;
  } else {
    t268 = (1.0 - t262) * t285 + intrm_sf_mf_627 * t262;
  }

  if (Simscape_Component_ideal_enthalpy_drop_raw <= 0.0) {
    t273 = 0.0;
  } else {
    t273 = Simscape_Component_ideal_enthalpy_drop_raw >= 500.0 ? 500.0 :
      Simscape_Component_ideal_enthalpy_drop_raw;
  }

  if (t291 <= 0.0) {
    t275 = 0.0;
  } else {
    t275 = t291 >= 500.0 ? 500.0 : t291;
  }

  t262 = t270 * t270;
  intrm_sf_mf_627 = t270 * 10000.0 / (t262 == 0.0 ? 1.0E-16 : t262);
  Simscape_Component_ideal_enthalpy_drop_raw = 0.0 / (t262 == 0.0 ? 1.0E-16 :
    t262);
  intrm_sf_mf_630 = (D_idx_0 == 1.0);
  intrm_sf_mf_631 = (D_idx_0 == 0.0);
  t277 = ((real_T)(M[107ULL] != 0) * 2.0 - 1.0) * t277 / 0.5;
  t286 = ((real_T)(M[109ULL] != 0) * 2.0 - 1.0) * t286 / 0.5;
  if (fabs(t287) > t271 * 0.8 / 2.0) {
    t291 = (atan2(fabs((t276 * 2.0 + X[82ULL] * 1.7320508075688772) - X[83ULL] *
                       1.7320508075688772), (X[82ULL] - X[81ULL] * 2.0) + X
                  [83ULL]) * (real_T)(M[104ULL] != 0) + -atan2(fabs((t276 * 2.0
               + X[82ULL] * 1.7320508075688772) - X[83ULL] * 1.7320508075688772),
             (X[82ULL] - X[81ULL] * 2.0) + X[83ULL]) * (real_T)(M[104ULL] == 0))
      * -2.0;
  } else if (fabs(intermediate_der6184) > t271 * 0.8 / 2.0) {
    t291 = -2.0943951023931953 - (atan2(fabs((t276 * 2.0 + X[81ULL] *
      1.7320508075688772) - X[82ULL] * 1.7320508075688772), (X[81ULL] - X[83ULL]
      * 2.0) + X[82ULL]) * (real_T)(M[105ULL] != 0) + -atan2(fabs((t276 * 2.0 +
      X[81ULL] * 1.7320508075688772) - X[82ULL] * 1.7320508075688772), (X[81ULL]
      - X[83ULL] * 2.0) + X[82ULL]) * (real_T)(M[105ULL] == 0)) * 2.0;
  } else if (fabs(t230_idx_0) > t271 * 0.8 / 2.0) {
    t291 = 2.0943951023931953 - (atan2(fabs((t276 * 2.0 + X[83ULL] *
      1.7320508075688772) - X[81ULL] * 1.7320508075688772), (X[83ULL] - X[82ULL]
      * 2.0) + X[81ULL]) * (real_T)(M[106ULL] != 0) + -atan2(fabs((t276 * 2.0 +
      X[83ULL] * 1.7320508075688772) - X[81ULL] * 1.7320508075688772), (X[83ULL]
      - X[82ULL] * 2.0) + X[81ULL]) * (real_T)(M[106ULL] == 0)) * 2.0;
  } else {
    t291 = 0.0;
  }

  D_idx_0 = atan(tan(t291 / 2.0)) * 2.0;
  zc_int16 = atan2(fabs(0.0), t270) + -atan2(fabs(0.0), t270) * 0.0;
  t389 = D_idx_0 - zc_int16;
  t285 = pmf_sqrt(U_idx_0 * U_idx_0 + 14.212146009999998) * 2.0;
  t291 = (1.0 / (t285 == 0.0 ? 1.0E-16 : t285) * U_idx_0 * 2.0 + 1.0) / 2.0;
  t285 = t263 * t263;
  t276 = -376.99 / (t285 == 0.0 ? 1.0E-16 : t285) * t258 * t291;
  if (t264 < 0.0) {
    intermediate_der6184 = 0.0;
  } else if (t264 * 1.0E+6 <= 13899.999999999998) {
    intermediate_der6184 = t264 * t276 * -207028.621706951;
  } else if (t264 * 1.0E+6 <= 20833.333333333332) {
    intermediate_der6184 = t276 * 8716.2370695159861 + t264 * t276 *
      -834096.03678004339;
  } else {
    intermediate_der6184 = t276 * -8660.7636967349135;
  }

  t263 = intermediate_der43 * (t263 / 376.99 * (t263 / 376.99) *
    intermediate_der6184 + t263 / 376.99 * (t291 / 376.99) * t260 * 2.0) * 9.81;
  intermediate_der43 = t258 * t263;
  if (t264 < 0.0) {
    t258 = 0.0;
  } else if (t264 * 1.0E+6 <= 13899.999999999998) {
    t285 = (27799.999999999996 - t264 * 1.0E+6) * (27799.999999999996 - t264 *
      1.0E+6);
    t363 = 27799.999999999996 - t264 * 1.0E+6;
    t258 = (-(t276 * 1.0E+6) * (-(116.75999999999999 - t264 * t264 *
              201438.84892086327) / (t285 == 0.0 ? 1.0E-16 : t285)) + -(t264 *
             t276 * 402877.69784172653) / (t363 == 0.0 ? 1.0E-16 : t363)) *
      1000.0;
  } else if (t264 * 1.0E+6 <= 20833.333333333332) {
    t363 = (t264 * 1.0E+6 - 6966.6666666666661) * (t264 * 1.0E+6 -
      6966.6666666666661);
    t230_idx_0 = t264 * 1.0E+6 - 6966.6666666666661;
    t258 = (-((t264 * 201.92191570484619 - 0.013429256594724218) * t264) / (t363
             == 0.0 ? 1.0E-16 : t363) * t276 * 1.0E+6 + ((t264 *
              201.92191570484619 - 0.013429256594724218) * t276 + t264 * t276 *
             201.92191570484619) / (t230_idx_0 == 0.0 ? 1.0E-16 : t230_idx_0)) *
      1.0E+6;
  } else {
    t258 = 0.0;
  }

  t264 = t258 / 376.99;
  t230_idx_0 = U_idx_3 * 4.0;
  intermediate_der6184 = cosh(t230_idx_0 / 0.026250000000000002) * cosh
    (t230_idx_0 / 0.026250000000000002);
  t291 = 1.4583367435510368;
  t287 = t382 * t291;
  if (U_idx_5 <= 0.0) {
    t258 = 0.0;
  } else {
    t258 = (real_T)!(U_idx_5 >= 1.0);
  }

  t276 = t258 * 0.0002;
  t258 = intermediate_der2548 * t276;
  intermediate_der2548 = X[0ULL] * t276 * 0.85 / (t313 == 0.0 ? 1.0E-16 : t313) *
    pmf_sqrt(t281);
  if (t280 < 0.545727733814065) {
    t276 = t258 * 100000.0;
  } else {
    t276 = intermediate_der2548 * 100000.0;
  }

  t258 = t266 > 0.01 ? t276 : 0.0;
  if (U_idx_6 <= 0.0) {
    intermediate_der2548 = 0.0;
  } else {
    intermediate_der2548 = (real_T)!(U_idx_6 >= 1.0);
  }

  t276 = intermediate_der2548 * 0.0002;
  intermediate_der2548 = intermediate_der5623 * t276;
  t276 = X[15ULL] * t276 * 0.85 / (t330 == 0.0 ? 1.0E-16 : t330) * pmf_sqrt(t375);
  if (t378 < 0.545727733814065) {
    t280 = intermediate_der2548 * 100000.0;
  } else {
    t280 = t276 * 100000.0;
  }

  intermediate_der2548 = t278 > 0.01 ? t280 : 0.0;
  if (U_idx_7 <= 1.0E-6) {
    t276 = 0.0;
  } else {
    t276 = (real_T)!(U_idx_7 >= pmf_get_inf());
  }

  t375 = t270 * t270 * (t270 * t270);
  t285 = pmf_sqrt(intrm_sf_mf_627 * intrm_sf_mf_627 +
                  Simscape_Component_ideal_enthalpy_drop_raw *
                  Simscape_Component_ideal_enthalpy_drop_raw) * 2.0;
  intermediate_der5623 = ((-(t270 * 10000.0) / (t375 == 0.0 ? 1.0E-16 : t375) *
    t276 * t270 * 2.0 + t276 * 10000.0 / (t262 == 0.0 ? 1.0E-16 : t262)) *
    intrm_sf_mf_627 * 2.0 + -0.0 / (t375 == 0.0 ? 1.0E-16 : t375) * t276 * t270 *
    2.0 * Simscape_Component_ideal_enthalpy_drop_raw * 2.0) * (1.0 / (t285 ==
    0.0 ? 1.0E-16 : t285));
  intrm_sf_mf_627 = fabs(t382) * (152.38095238095238 * (1.0 /
    (intermediate_der6184 == 0.0 ? 1.0E-16 : intermediate_der6184))) *
    0.019886410139332317;
  if (Simscape_Component_efficiency_raw <= 0.0) {
    t260 = 0.0;
  } else {
    t260 = Simscape_Component_efficiency_raw >= 1.0 ? 0.0 : -((t277 - 0.8) *
      (((real_T)(M[107ULL] != 0) * 2.0 - 1.0) * t258 / 0.5) * 0.4);
  }

  if (t266 > 0.01) {
    t260 = (boolean_T)(real_T)(X[15ULL] > 1.0) ? t260 * t273 : 0.0;
  } else {
    t260 = 0.0;
  }

  intermediate_der6184 = -t260;
  if (Simscape_Component1_mdot_nozzle <= 0.0) {
    t266 = 0.0;
  } else {
    t266 = Simscape_Component1_mdot_nozzle >= 1.0 ? 0.0 : -((t286 - 0.8) *
      (((real_T)(M[109ULL] != 0) * 2.0 - 1.0) * intermediate_der2548 / 0.5) *
      0.4);
  }

  if (t278 > 0.01) {
    t266 = (boolean_T)(real_T)(X[88ULL] > 1.0) ? t266 * t275 : 0.0;
  } else {
    t266 = 0.0;
  }

  t262 = -t266;
  t382 = -fabs(0.0);
  t277 = fabs(0.0) * fabs(0.0) + t270 * t270;
  t270 = t382 / (t277 == 0.0 ? 1.0E-16 : t277) * t276 + -(t382 / (t277 == 0.0 ?
    1.0E-16 : t277) * t276) * 0.0;
  t363 = -t270;
  t260 = ((real_T)(M[108ULL] != 0) * 2.0 - 1.0) * X[122ULL] * t260 / (t283 ==
    0.0 ? 1.0E-16 : t283);
  t266 = -(((real_T)(M[110ULL] != 0) * 2.0 - 1.0) * ((-X[95ULL] - X[122ULL]) +
            X[124ULL]) * t266) / (t283 == 0.0 ? 1.0E-16 : t283);
  if (t271 > 100.0) {
    t230_idx_0 = t276 - -sin(zc_int16) * X[130ULL] * t272 * t270 * 0.0015;
  } else {
    t230_idx_0 = -(X[130ULL] * intermediate_der5623 * 0.001);
  }

  if (intrm_sf_mf_630) {
    zc_int16 = 0.0;
  } else {
    zc_int16 = -(cos(t389) * X[130ULL] * -t270);
  }

  if (intrm_sf_mf_630) {
    t270 = 0.0;
  } else {
    t270 = -(cos(t389 - 2.0943951023931953) * X[130ULL] * -t270);
  }

  if (intrm_sf_mf_630) {
    t271 = 0.0;
  } else {
    t271 = -(cos(t389 + 2.0943951023931953) * X[130ULL] * t363);
  }

  if (intrm_sf_mf_631) {
    t273 = -(-sin(D_idx_0 - t389) * -t363 * X[130ULL] * t272 * 0.0015);
  } else {
    t273 = 0.0;
  }

  if (intrm_sf_mf_631) {
    t275 = -(-t363 * cos(D_idx_0 - t389) * X[130ULL] * t272 * 0.0015);
  } else {
    t275 = 0.0;
  }

  t263 = -(t263 * 1.0E-5) / 1.0000000066221706;
  t363 = pmf_sqrt(U_idx_0 * U_idx_0 + 0.14212146009999999) * 2.0;
  t389 = (U_idx_0 * t264 + t265) * pmf_sqrt(U_idx_0 * U_idx_0 +
    0.14212146009999999) + 1.0 / (t363 == 0.0 ? 1.0E-16 : t363) * U_idx_0 *
    U_idx_0 * t265 * 2.0;
  t241[0ULL] = t230_idx_0 / 1.0E+7;
  t241[1ULL] = zc_int16;
  t241[2ULL] = t270;
  t241[3ULL] = t271;
  t241[4ULL] = t273;
  t241[5ULL] = t275;
  t199[0ULL] = t263;
  t199[1ULL] = intermediate_der43 * 0.001;
  t199[2ULL] = -(t389 / 142121.4601 * 1000.0);
  t199[3ULL] = -(t291 / (t267 == 0.0 ? 1.0E-16 : t267) * 1.0E-6);
  t199[4ULL] = -intrm_sf_mf_627;
  t199[5ULL] = t287 * 0.0001;
  t199[6ULL] = -(1000.0 / (X[27ULL] == 0.0 ? 1.0E-16 : X[27ULL]) * t268 *
                 6.367473975406809 / 10.0);
  t199[7ULL] = -t258;
  t199[8ULL] = -intermediate_der6184 / 3.1364973851700224;
  t199[9ULL] = -(t260 * 1000.0);
  t199[10ULL] = -intermediate_der2548;
  t199[11ULL] = -t262 / 1.1120535112716865;
  t199[12ULL] = -(t266 * 1000.0);
  for (t246 = 0ULL; t246 < 6ULL; t246++) {
    t199[t246 + 13ULL] = t241[t246];
  }

  out.mX[0] = t199[0];
  out.mX[1] = t199[1];
  out.mX[2] = t199[2];
  out.mX[3] = t199[3];
  out.mX[4] = t199[4];
  out.mX[5] = t199[5];
  out.mX[6] = t199[6];
  out.mX[7] = t199[7];
  out.mX[8] = t199[8];
  out.mX[9] = t199[9];
  out.mX[10] = t199[10];
  out.mX[11] = t199[11];
  out.mX[12] = t199[12];
  out.mX[13] = t199[13];
  out.mX[14] = t199[14];
  out.mX[15] = t199[15];
  out.mX[16] = t199[16];
  out.mX[17] = t199[17];
  out.mX[18] = t199[18];
  (void)LC;
  (void)t392;
  return 0;
}
