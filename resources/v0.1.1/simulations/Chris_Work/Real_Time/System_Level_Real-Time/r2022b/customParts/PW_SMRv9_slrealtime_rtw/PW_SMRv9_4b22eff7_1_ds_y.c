/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv9/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_sys_struct.h"
#include "PW_SMRv9_4b22eff7_1_ds_y.h"
#include "PW_SMRv9_4b22eff7_1_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_externals.h"
#include "PW_SMRv9_4b22eff7_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv9_4b22eff7_1_ds_y(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t422, NeDsMethodOutput *t423)
{
  ETTS0 bb_efOut;
  ETTS0 cc_efOut;
  ETTS0 d_efOut;
  ETTS0 db_efOut;
  ETTS0 ec_efOut;
  ETTS0 efOut;
  ETTS0 g_efOut;
  ETTS0 gb_efOut;
  ETTS0 gc_efOut;
  ETTS0 ic_efOut;
  ETTS0 j_efOut;
  ETTS0 jb_efOut;
  ETTS0 lb_efOut;
  ETTS0 m_efOut;
  ETTS0 mc_efOut;
  ETTS0 p_efOut;
  ETTS0 r_efOut;
  ETTS0 rb_efOut;
  ETTS0 t13;
  ETTS0 t14;
  ETTS0 t16;
  ETTS0 t17;
  ETTS0 t19;
  ETTS0 t2;
  ETTS0 t25;
  ETTS0 t26;
  ETTS0 t27;
  ETTS0 u_efOut;
  ETTS0 ub_efOut;
  ETTS0 w_efOut;
  ETTS0 wb_efOut;
  ETTS0 y_efOut;
  PmRealVector out;
  real_T X[250];
  real_T t261[2];
  real_T ab_efOut[1];
  real_T ac_efOut[1];
  real_T b_efOut[1];
  real_T bc_efOut[1];
  real_T c_efOut[1];
  real_T cb_efOut[1];
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
  real_T ib_efOut[1];
  real_T jc_efOut[1];
  real_T k_efOut[1];
  real_T kb_efOut[1];
  real_T kc_efOut[1];
  real_T l_efOut[1];
  real_T lc_efOut[1];
  real_T mb_efOut[1];
  real_T n_efOut[1];
  real_T nb_efOut[1];
  real_T nc_efOut[1];
  real_T o_efOut[1];
  real_T ob_efOut[1];
  real_T oc_efOut[1];
  real_T pb_efOut[1];
  real_T q_efOut[1];
  real_T qb_efOut[1];
  real_T s_efOut[1];
  real_T sb_efOut[1];
  real_T t209[1];
  real_T t245[1];
  real_T t248[1];
  real_T t250[1];
  real_T t_efOut[1];
  real_T tb_efOut[1];
  real_T v_efOut[1];
  real_T vb_efOut[1];
  real_T x_efOut[1];
  real_T xb_efOut[1];
  real_T yb_efOut[1];
  real_T Preheating_Thermodynamic_Properties_Sensor_2P1_T;
  real_T Simscape_Component1_inlet_entropy;
  real_T Simscape_Component_h_A;
  real_T Synchronous_Machine_Measurement_pu_output;
  real_T Thermodynamic_Properties_Sensor_2P1_T;
  real_T Thermodynamic_Properties_Sensor_2P4_H;
  real_T U_idx_2;
  real_T U_idx_4;
  real_T U_idx_5;
  real_T U_idx_6;
  real_T t244_idx_0;
  real_T t278;
  real_T t279;
  real_T t280;
  real_T t290;
  real_T t292;
  real_T t294;
  real_T t295;
  real_T t308;
  real_T t313;
  real_T t314;
  real_T t316;
  real_T t318;
  real_T t319;
  real_T t321;
  real_T t322;
  real_T t323;
  real_T t324;
  real_T t325;
  real_T t330;
  real_T t331;
  real_T t332;
  real_T t334;
  real_T t335;
  real_T t336;
  real_T t337;
  real_T t338;
  real_T t341;
  real_T t342;
  real_T t347;
  real_T t411;
  real_T t419;
  real_T t421;
  real_T zc_int20;
  real_T zc_int26;
  real_T zc_int37;
  real_T zc_int38;
  size_t t169[1];
  size_t t263[1];
  size_t t29[1];
  size_t t30[1];
  size_t t64[1];
  int32_T M[163];
  int32_T b;
  for (b = 0; b < 163; b++) {
    M[b] = t422->mM.mX[b];
  }

  U_idx_2 = t422->mU.mX[2];
  U_idx_4 = t422->mU.mX[4];
  U_idx_5 = t422->mU.mX[5];
  U_idx_6 = t422->mU.mX[6];
  for (b = 0; b < 250; b++) {
    X[b] = t422->mX.mX[b];
  }

  out = t423->mY;
  t250[0ULL] = X[0ULL];
  t29[0] = 100ULL;
  t30[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t250[0ULL], &t29
    [0ULL], &t30[0ULL]);
  t27 = efOut;
  t261[0ULL] = t27.mField0[0ULL];
  t261[1ULL] = t27.mField0[1ULL];
  t263[0ULL] = t27.mField2[0ULL];
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t261[0ULL], &t263[0ULL],
    ((_NeDynamicSystem*)(LC))->mField7, &t29[0ULL], &t30[0ULL]);
  t248[0] = b_efOut[0];
  Synchronous_Machine_Measurement_pu_output = t248[0ULL];
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t261[0ULL], &t263[0ULL],
    ((_NeDynamicSystem*)(LC))->mField8, &t29[0ULL], &t30[0ULL]);
  t209[0] = c_efOut[0];
  Thermodynamic_Properties_Sensor_2P1_T = t209[0ULL];
  t248[0ULL] = X[73ULL];
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t248[0ULL],
    &t29[0ULL], &t30[0ULL]);
  t2 = d_efOut;
  tlu2_1d_linear_linear_value(&e_efOut[0ULL], &t2.mField0[0ULL], &t2.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t29[0ULL], &t30[0ULL]);
  t245[0] = e_efOut[0];
  Simscape_Component1_inlet_entropy = t245[0ULL];
  tlu2_1d_linear_linear_value(&f_efOut[0ULL], &t2.mField0[0ULL], &t2.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t29[0ULL], &t30[0ULL]);
  t244_idx_0 = f_efOut[0];
  if (X[74ULL] <= Simscape_Component1_inlet_entropy) {
    Preheating_Thermodynamic_Properties_Sensor_2P1_T = X[74ULL] /
      (Simscape_Component1_inlet_entropy == 0.0 ? 1.0E-16 :
       Simscape_Component1_inlet_entropy) - 1.0;
  } else if (X[74ULL] >= t244_idx_0) {
    Preheating_Thermodynamic_Properties_Sensor_2P1_T = (X[74ULL] - 4000.0) /
      (4000.0 - t244_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t244_idx_0) + 2.0;
  } else {
    t294 = t244_idx_0 - Simscape_Component1_inlet_entropy;
    Preheating_Thermodynamic_Properties_Sensor_2P1_T = (X[74ULL] -
      Simscape_Component1_inlet_entropy) / (t294 == 0.0 ? 1.0E-16 : t294);
  }

  t278 = X[84ULL] * 0.0012548887771113527;
  t279 = X[85ULL] * 0.0012548887771113527;
  t280 = X[86ULL] * 0.0012548887771113527;
  t209[0ULL] = X[88ULL];
  tlu2_linear_linear_prelookup(&g_efOut.mField0[0ULL], &g_efOut.mField1[0ULL],
    &g_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t209[0ULL],
    &t29[0ULL], &t30[0ULL]);
  t19 = g_efOut;
  tlu2_1d_linear_linear_value(&h_efOut[0ULL], &t19.mField0[0ULL], &t19.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t29[0ULL], &t30[0ULL]);
  t244_idx_0 = h_efOut[0];
  Simscape_Component1_inlet_entropy = t244_idx_0;
  tlu2_1d_linear_linear_value(&i_efOut[0ULL], &t19.mField0[0ULL], &t19.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t29[0ULL], &t30[0ULL]);
  t244_idx_0 = i_efOut[0];
  if (X[89ULL] <= Simscape_Component1_inlet_entropy) {
    t290 = X[89ULL] / (Simscape_Component1_inlet_entropy == 0.0 ? 1.0E-16 :
                       Simscape_Component1_inlet_entropy) - 1.0;
  } else if (X[89ULL] >= t244_idx_0) {
    t290 = (X[89ULL] - 4000.0) / (4000.0 - t244_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t244_idx_0) + 2.0;
  } else {
    t294 = t244_idx_0 - Simscape_Component1_inlet_entropy;
    t290 = (X[89ULL] - Simscape_Component1_inlet_entropy) / (t294 == 0.0 ?
      1.0E-16 : t294);
  }

  t245[0ULL] = X[92ULL];
  tlu2_linear_linear_prelookup(&j_efOut.mField0[0ULL], &j_efOut.mField1[0ULL],
    &j_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t245[0ULL],
    &t29[0ULL], &t30[0ULL]);
  t17 = j_efOut;
  tlu2_1d_linear_linear_value(&k_efOut[0ULL], &t17.mField0[0ULL], &t17.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t29[0ULL], &t30[0ULL]);
  t244_idx_0 = k_efOut[0];
  Simscape_Component1_inlet_entropy = t244_idx_0;
  tlu2_1d_linear_linear_value(&l_efOut[0ULL], &t17.mField0[0ULL], &t17.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t29[0ULL], &t30[0ULL]);
  t244_idx_0 = l_efOut[0];
  if (X[93ULL] <= Simscape_Component1_inlet_entropy) {
    Thermodynamic_Properties_Sensor_2P4_H = X[93ULL] /
      (Simscape_Component1_inlet_entropy == 0.0 ? 1.0E-16 :
       Simscape_Component1_inlet_entropy) - 1.0;
  } else if (X[93ULL] >= t244_idx_0) {
    Thermodynamic_Properties_Sensor_2P4_H = (X[93ULL] - 4000.0) / (4000.0 -
      t244_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t244_idx_0) + 2.0;
  } else {
    t294 = t244_idx_0 - Simscape_Component1_inlet_entropy;
    Thermodynamic_Properties_Sensor_2P4_H = (X[93ULL] -
      Simscape_Component1_inlet_entropy) / (t294 == 0.0 ? 1.0E-16 : t294);
  }

  t245[0ULL] = X[15ULL];
  tlu2_linear_linear_prelookup(&m_efOut.mField0[0ULL], &m_efOut.mField1[0ULL],
    &m_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t245[0ULL],
    &t29[0ULL], &t30[0ULL]);
  t16 = m_efOut;
  tlu2_1d_linear_linear_value(&n_efOut[0ULL], &t16.mField0[0ULL], &t16.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t29[0ULL], &t30[0ULL]);
  t244_idx_0 = n_efOut[0];
  Simscape_Component1_inlet_entropy = t244_idx_0;
  tlu2_1d_linear_linear_value(&o_efOut[0ULL], &t16.mField0[0ULL], &t16.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t29[0ULL], &t30[0ULL]);
  t244_idx_0 = o_efOut[0];
  t292 = (-X[95ULL] - X[122ULL]) + X[124ULL];
  if (X[118ULL] <= Simscape_Component1_inlet_entropy) {
    t294 = X[118ULL] / (Simscape_Component1_inlet_entropy == 0.0 ? 1.0E-16 :
                        Simscape_Component1_inlet_entropy) - 1.0;
  } else if (X[118ULL] >= t244_idx_0) {
    t294 = (X[118ULL] - 4000.0) / (4000.0 - t244_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t244_idx_0) + 2.0;
  } else {
    t294 = t244_idx_0 - Simscape_Component1_inlet_entropy;
    t294 = (X[118ULL] - Simscape_Component1_inlet_entropy) / (t294 == 0.0 ?
      1.0E-16 : t294);
  }

  t245[0ULL] = t294;
  t64[0] = 50ULL;
  tlu2_linear_linear_prelookup(&p_efOut.mField0[0ULL], &p_efOut.mField1[0ULL],
    &p_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t245[0ULL],
    &t64[0ULL], &t30[0ULL]);
  t25 = p_efOut;
  tlu2_2d_linear_linear_value(&q_efOut[0ULL], &t25.mField0[0ULL], &t25.mField2
    [0ULL], &t16.mField0[0ULL], &t16.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t64[0ULL], &t29[0ULL], &t30[0ULL]);
  t244_idx_0 = q_efOut[0];
  Simscape_Component1_inlet_entropy = t244_idx_0;
  t245[0ULL] = X[133ULL];
  tlu2_linear_linear_prelookup(&r_efOut.mField0[0ULL], &r_efOut.mField1[0ULL],
    &r_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t245[0ULL],
    &t29[0ULL], &t30[0ULL]);
  t14 = r_efOut;
  tlu2_1d_linear_linear_value(&s_efOut[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t29[0ULL], &t30[0ULL]);
  t244_idx_0 = s_efOut[0];
  t294 = t244_idx_0;
  tlu2_1d_linear_linear_value(&t_efOut[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t29[0ULL], &t30[0ULL]);
  t244_idx_0 = t_efOut[0];
  if (X[134ULL] <= t294) {
    t295 = X[134ULL] / (t294 == 0.0 ? 1.0E-16 : t294) - 1.0;
  } else if (X[134ULL] >= t244_idx_0) {
    t295 = (X[134ULL] - 4000.0) / (4000.0 - t244_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t244_idx_0) + 2.0;
  } else {
    t314 = t244_idx_0 - t294;
    t295 = (X[134ULL] - t294) / (t314 == 0.0 ? 1.0E-16 : t314);
  }

  t245[0ULL] = Preheating_Thermodynamic_Properties_Sensor_2P1_T;
  tlu2_linear_linear_prelookup(&u_efOut.mField0[0ULL], &u_efOut.mField1[0ULL],
    &u_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t245[0ULL],
    &t64[0ULL], &t30[0ULL]);
  t13 = u_efOut;
  tlu2_2d_linear_linear_value(&v_efOut[0ULL], &t13.mField0[0ULL], &t13.mField2
    [0ULL], &t2.mField0[0ULL], &t2.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t64[0ULL], &t29[0ULL], &t30[0ULL]);
  t244_idx_0 = v_efOut[0];
  Preheating_Thermodynamic_Properties_Sensor_2P1_T = t244_idx_0;
  t245[0ULL] = t295;
  tlu2_linear_linear_prelookup(&w_efOut.mField0[0ULL], &w_efOut.mField1[0ULL],
    &w_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t245[0ULL],
    &t64[0ULL], &t30[0ULL]);
  t13 = w_efOut;
  tlu2_2d_linear_linear_value(&x_efOut[0ULL], &t13.mField0[0ULL], &t13.mField2
    [0ULL], &t14.mField0[0ULL], &t14.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t64[0ULL], &t29[0ULL], &t30[0ULL]);
  t244_idx_0 = x_efOut[0];
  t295 = t244_idx_0;
  if (X[154ULL] <= Synchronous_Machine_Measurement_pu_output) {
    t308 = X[154ULL] / (Synchronous_Machine_Measurement_pu_output == 0.0 ?
                        1.0E-16 : Synchronous_Machine_Measurement_pu_output) -
      1.0;
  } else if (X[154ULL] >= Thermodynamic_Properties_Sensor_2P1_T) {
    t308 = (X[154ULL] - 4000.0) / (4000.0 -
      Thermodynamic_Properties_Sensor_2P1_T == 0.0 ? 1.0E-16 : 4000.0 -
      Thermodynamic_Properties_Sensor_2P1_T) + 2.0;
  } else {
    t332 = Thermodynamic_Properties_Sensor_2P1_T
      - Synchronous_Machine_Measurement_pu_output;
    t308 = (X[154ULL] - Synchronous_Machine_Measurement_pu_output) / (t332 ==
      0.0 ? 1.0E-16 : t332);
  }

  t245[0ULL] = t308;
  tlu2_linear_linear_prelookup(&y_efOut.mField0[0ULL], &y_efOut.mField1[0ULL],
    &y_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t245[0ULL],
    &t64[0ULL], &t30[0ULL]);
  t26 = y_efOut;
  tlu2_2d_linear_linear_value(&ab_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], &t27.mField0[0ULL], &t27.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t64[0ULL], &t29[0ULL], &t30[0ULL]);
  t248[0] = ab_efOut[0];
  t308 = t248[0ULL];
  t245[0] = 0.0;
  tlu2_linear_linear_prelookup(&bb_efOut.mField0[0ULL], &bb_efOut.mField1[0ULL],
    &bb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t245[0ULL],
    &t64[0ULL], &t30[0ULL]);
  t14 = bb_efOut;
  tlu2_2d_linear_linear_value(&cb_efOut[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], &t261[0ULL], &t263[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t64
    [0ULL], &t29[0ULL], &t30[0ULL]);
  t244_idx_0 = cb_efOut[0];
  t313 = 1.0 / (t244_idx_0 == 0.0 ? 1.0E-16 : t244_idx_0);
  t245[0] = 1.0;
  tlu2_linear_linear_prelookup(&db_efOut.mField0[0ULL], &db_efOut.mField1[0ULL],
    &db_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t245[0ULL],
    &t64[0ULL], &t30[0ULL]);
  t2 = db_efOut;
  tlu2_2d_linear_linear_value(&eb_efOut[0ULL], &t2.mField0[0ULL], &t2.mField2
    [0ULL], &t261[0ULL], &t263[0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t64
    [0ULL], &t29[0ULL], &t30[0ULL]);
  t244_idx_0 = eb_efOut[0];
  t314 = 1.0 / (t244_idx_0 == 0.0 ? 1.0E-16 : t244_idx_0);
  zc_int38 = X[0ULL] - X[15ULL];
  tlu2_2d_linear_linear_value(&fb_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], &t27.mField0[0ULL], &t27.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t64[0ULL], &t29[0ULL], &t30[0ULL]);
  t209[0] = fb_efOut[0];
  t316 = t209[0ULL];
  t342 = pmf_sqrt(t316 * 461.5);
  if (U_idx_5 <= 0.0) {
    t319 = 0.0;
  } else {
    t319 = U_idx_5 >= 1.0 ? 1.0 : U_idx_5;
  }

  t318 = t319 * 0.0002;
  zc_int20 = X[15ULL] / (X[0ULL] == 0.0 ? 1.0E-16 : X[0ULL]);
  if (zc_int20 <= 0.0) {
    t321 = 0.0;
  } else {
    t321 = zc_int20 >= 1.0 ? 1.0 : zc_int20;
  }

  zc_int20 = (pmf_pow(t321, 1.5384615384615383) - pmf_pow(t321,
    1.7692307692307689)) * 8.6666666666666661;
  if (zc_int20 <= 0.0) {
    t322 = 0.0;
  } else {
    t322 = zc_int20 >= 1.0E+6 ? 1.0E+6 : zc_int20;
  }

  zc_int20 = t318 * X[0ULL] * 0.85 / (t342 == 0.0 ? 1.0E-16 : t342) * pmf_sqrt
    (t322);
  if (t321 < 0.545727733814065) {
    t322 = X[0ULL] * 0.85 / (t342 == 0.0 ? 1.0E-16 : t342) * 0.667262351240862 *
      t318 * 100000.0;
  } else {
    t322 = zc_int20 * 100000.0;
  }

  zc_int20 = zc_int38 > 0.01 ? t322 : 0.0;
  t347 = fabs(zc_int20);
  Simscape_Component_h_A = t347 / 0.5;
  t322 = 0.8 - (Simscape_Component_h_A - 0.8) * (Simscape_Component_h_A - 0.8) *
    0.2;
  Simscape_Component_h_A = t308 * X[0ULL] * 100.0 + X[154ULL];
  if (X[15ULL] <= 1.0) {
    t308 = 1.0;
  } else {
    t308 = X[15ULL] >= 1000.0 ? 1000.0 : X[15ULL];
  }

  t245[0ULL] = t308;
  tlu2_linear_linear_prelookup(&gb_efOut.mField0[0ULL], &gb_efOut.mField1[0ULL],
    &gb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t245[0ULL],
    &t29[0ULL], &t30[0ULL]);
  t14 = gb_efOut;
  tlu2_1d_linear_linear_value(&hb_efOut[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t29[0ULL], &t30[0ULL]);
  t244_idx_0 = hb_efOut[0];
  t323 = t244_idx_0;
  tlu2_1d_linear_linear_value(&ib_efOut[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t29[0ULL], &t30[0ULL]);
  t244_idx_0 = ib_efOut[0];
  t324 = t244_idx_0;
  if (t323 <= t323) {
    t325 = t323 / (t323 == 0.0 ? 1.0E-16 : t323) - 1.0;
  } else if (t323 >= t244_idx_0) {
    t325 = (t323 - 4000.0) / (4000.0 - t244_idx_0 == 0.0 ? 1.0E-16 : 4000.0 -
      t244_idx_0) + 2.0;
  } else {
    t411 = t244_idx_0 - t323;
    t325 = (t323 - t323) / (t411 == 0.0 ? 1.0E-16 : t411);
  }

  t245[0ULL] = t325;
  tlu2_linear_linear_prelookup(&jb_efOut.mField0[0ULL], &jb_efOut.mField1[0ULL],
    &jb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t245[0ULL],
    &t64[0ULL], &t30[0ULL]);
  t13 = jb_efOut;
  tlu2_2d_linear_linear_value(&kb_efOut[0ULL], &t13.mField0[0ULL], &t13.mField2
    [0ULL], &t14.mField0[0ULL], &t14.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t64[0ULL], &t29[0ULL], &t30[0ULL]);
  t244_idx_0 = kb_efOut[0];
  t294 = t244_idx_0 * t308 * 100.0 + t323;
  if (t324 <= t323) {
    t325 = t324 / (t323 == 0.0 ? 1.0E-16 : t323) - 1.0;
  } else if (t324 >= t324) {
    t325 = (t324 - 4000.0) / (4000.0 - t324 == 0.0 ? 1.0E-16 : 4000.0 - t324) +
      2.0;
  } else {
    U_idx_5 = t324 - t323;
    t325 = (t324 - t323) / (U_idx_5 == 0.0 ? 1.0E-16 : U_idx_5);
  }

  t245[0ULL] = t325;
  tlu2_linear_linear_prelookup(&lb_efOut.mField0[0ULL], &lb_efOut.mField1[0ULL],
    &lb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t245[0ULL],
    &t64[0ULL], &t30[0ULL]);
  t2 = lb_efOut;
  tlu2_2d_linear_linear_value(&mb_efOut[0ULL], &t2.mField0[0ULL], &t2.mField2
    [0ULL], &t14.mField0[0ULL], &t14.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t64[0ULL], &t29[0ULL], &t30[0ULL]);
  t244_idx_0 = mb_efOut[0];
  t325 = t244_idx_0 * t308 * 100.0 + t324;
  tlu2_2d_linear_linear_value(&nb_efOut[0ULL], &t26.mField0[0ULL], &t26.mField2
    [0ULL], &t27.mField0[0ULL], &t27.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t64[0ULL], &t29[0ULL], &t30[0ULL]);
  t250[0] = nb_efOut[0];
  t308 = t250[0ULL];
  tlu2_2d_linear_linear_value(&ob_efOut[0ULL], &t13.mField0[0ULL], &t13.mField2
    [0ULL], &t14.mField0[0ULL], &t14.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t64[0ULL], &t29[0ULL], &t30[0ULL]);
  t244_idx_0 = ob_efOut[0];
  t323 = t244_idx_0;
  tlu2_2d_linear_linear_value(&pb_efOut[0ULL], &t2.mField0[0ULL], &t2.mField2
    [0ULL], &t14.mField0[0ULL], &t14.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t64[0ULL], &t29[0ULL], &t30[0ULL]);
  t244_idx_0 = pb_efOut[0];
  U_idx_5 = t244_idx_0 - t323;
  t323 = (t308 - t323) / (U_idx_5 == 0.0 ? 1.0E-16 : U_idx_5);
  if (t323 <= 0.0) {
    t324 = 0.0;
  } else {
    t324 = t323 >= 1.0 ? 1.0 : t323;
  }

  t323 = (t325 - t294) * t324 + t294;
  t325 = Simscape_Component_h_A - t323;
  Simscape_Component_h_A = t323;
  t323 = t324;
  t324 = t318;
  t318 = (real_T)(t321 < 0.545727733814065);
  t421 = pmf_sqrt(X[18ULL] * X[18ULL] + 1.0);
  zc_int26 = X[15ULL] - X[88ULL];
  tlu2_2d_linear_linear_value(&qb_efOut[0ULL], &t25.mField0[0ULL], &t25.mField2
    [0ULL], &t16.mField0[0ULL], &t16.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t64[0ULL], &t29[0ULL], &t30[0ULL]);
  t244_idx_0 = qb_efOut[0];
  t330 = t244_idx_0;
  U_idx_5 = pmf_sqrt(t244_idx_0 * 461.5);
  if (U_idx_6 <= 0.0) {
    zc_int37 = 0.0;
  } else {
    zc_int37 = U_idx_6 >= 1.0 ? 1.0 : U_idx_6;
  }

  t332 = zc_int37 * 0.0002;
  t331 = X[88ULL] / (X[15ULL] == 0.0 ? 1.0E-16 : X[15ULL]);
  if (t331 <= 0.0) {
    t335 = 0.0;
  } else {
    t335 = t331 >= 1.0 ? 1.0 : t331;
  }

  t331 = (pmf_pow(t335, 1.5384615384615383) - pmf_pow(t335, 1.7692307692307689))
    * 8.6666666666666661;
  if (t331 <= 0.0) {
    t336 = 0.0;
  } else {
    t336 = t331 >= 1.0E+6 ? 1.0E+6 : t331;
  }

  t331 = X[15ULL] * t332 * 0.85 / (U_idx_5 == 0.0 ? 1.0E-16 : U_idx_5) *
    pmf_sqrt(t336);
  if (t335 < 0.545727733814065) {
    t336 = X[15ULL] * 0.85 / (U_idx_5 == 0.0 ? 1.0E-16 : U_idx_5) *
      0.667262351240862 * t332 * 100000.0;
  } else {
    t336 = t331 * 100000.0;
  }

  t331 = zc_int26 > 0.01 ? t336 : 0.0;
  t411 = fabs(t331);
  t334 = t411 / 0.5;
  t336 = 0.8 - (t334 - 0.8) * (t334 - 0.8) * 0.2;
  t334 = Simscape_Component1_inlet_entropy * X[15ULL] * 100.0 + X[118ULL];
  if (X[88ULL] <= 1.0) {
    Simscape_Component1_inlet_entropy = 1.0;
  } else {
    Simscape_Component1_inlet_entropy = X[88ULL] >= 1000.0 ? 1000.0 : X[88ULL];
  }

  t245[0ULL] = Simscape_Component1_inlet_entropy;
  tlu2_linear_linear_prelookup(&rb_efOut.mField0[0ULL], &rb_efOut.mField1[0ULL],
    &rb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField6, &t245[0ULL],
    &t29[0ULL], &t30[0ULL]);
  t14 = rb_efOut;
  tlu2_1d_linear_linear_value(&sb_efOut[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField7, &t29[0ULL], &t30[0ULL]);
  t244_idx_0 = sb_efOut[0];
  t337 = t244_idx_0;
  tlu2_1d_linear_linear_value(&tb_efOut[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField8, &t29[0ULL], &t30[0ULL]);
  t244_idx_0 = tb_efOut[0];
  t338 = t244_idx_0;
  if (t337 <= t337) {
    t419 = t337 / (t337 == 0.0 ? 1.0E-16 : t337) - 1.0;
  } else if (t337 >= t244_idx_0) {
    t419 = (t337 - 4000.0) / (4000.0 - t244_idx_0 == 0.0 ? 1.0E-16 : 4000.0 -
      t244_idx_0) + 2.0;
  } else {
    U_idx_5 = t244_idx_0 - t337;
    t419 = (t337 - t337) / (U_idx_5 == 0.0 ? 1.0E-16 : U_idx_5);
  }

  t245[0ULL] = t419;
  tlu2_linear_linear_prelookup(&ub_efOut.mField0[0ULL], &ub_efOut.mField1[0ULL],
    &ub_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t245[0ULL],
    &t64[0ULL], &t30[0ULL]);
  t2 = ub_efOut;
  tlu2_2d_linear_linear_value(&vb_efOut[0ULL], &t2.mField0[0ULL], &t2.mField2
    [0ULL], &t14.mField0[0ULL], &t14.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t64[0ULL], &t29[0ULL], &t30[0ULL]);
  t244_idx_0 = vb_efOut[0];
  t294 = t244_idx_0 * Simscape_Component1_inlet_entropy * 100.0 + t337;
  if (t338 <= t337) {
    t419 = t338 / (t337 == 0.0 ? 1.0E-16 : t337) - 1.0;
  } else if (t338 >= t338) {
    t419 = (t338 - 4000.0) / (4000.0 - t338 == 0.0 ? 1.0E-16 : 4000.0 - t338) +
      2.0;
  } else {
    U_idx_5 = t338 - t337;
    t419 = (t338 - t337) / (U_idx_5 == 0.0 ? 1.0E-16 : U_idx_5);
  }

  t245[0ULL] = t419;
  tlu2_linear_linear_prelookup(&wb_efOut.mField0[0ULL], &wb_efOut.mField1[0ULL],
    &wb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t245[0ULL],
    &t64[0ULL], &t30[0ULL]);
  t13 = wb_efOut;
  tlu2_2d_linear_linear_value(&xb_efOut[0ULL], &t13.mField0[0ULL], &t13.mField2
    [0ULL], &t14.mField0[0ULL], &t14.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t64[0ULL], &t29[0ULL], &t30[0ULL]);
  t244_idx_0 = xb_efOut[0];
  t419 = t244_idx_0 * Simscape_Component1_inlet_entropy * 100.0 + t338;
  tlu2_2d_linear_linear_value(&yb_efOut[0ULL], &t25.mField0[0ULL], &t25.mField2
    [0ULL], &t16.mField0[0ULL], &t16.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t64[0ULL], &t29[0ULL], &t30[0ULL]);
  t244_idx_0 = yb_efOut[0];
  Simscape_Component1_inlet_entropy = t244_idx_0;
  tlu2_2d_linear_linear_value(&ac_efOut[0ULL], &t2.mField0[0ULL], &t2.mField2
    [0ULL], &t14.mField0[0ULL], &t14.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t64[0ULL], &t29[0ULL], &t30[0ULL]);
  t244_idx_0 = ac_efOut[0];
  t337 = t244_idx_0;
  tlu2_2d_linear_linear_value(&bc_efOut[0ULL], &t13.mField0[0ULL], &t13.mField2
    [0ULL], &t14.mField0[0ULL], &t14.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t64[0ULL], &t29[0ULL], &t30[0ULL]);
  t244_idx_0 = bc_efOut[0];
  U_idx_5 = t244_idx_0 - t337;
  t337 = (Simscape_Component1_inlet_entropy - t337) / (U_idx_5 == 0.0 ? 1.0E-16 :
    U_idx_5);
  if (t337 <= 0.0) {
    t338 = 0.0;
  } else {
    t338 = t337 >= 1.0 ? 1.0 : t337;
  }

  t337 = (t419 - t294) * t338 + t294;
  t419 = t334 - t337;
  t334 = t337;
  t337 = t338;
  t338 = t332;
  t332 = (real_T)(t335 < 0.545727733814065);
  if (X[32ULL] < Synchronous_Machine_Measurement_pu_output) {
    t341 = X[32ULL] / (Synchronous_Machine_Measurement_pu_output == 0.0 ?
                       1.0E-16 : Synchronous_Machine_Measurement_pu_output) -
      1.0;
  } else {
    t341 = 0.0;
  }

  if (X[33ULL] > Thermodynamic_Properties_Sensor_2P1_T) {
    t342 = (X[33ULL] - 4000.0) / (4000.0 - Thermodynamic_Properties_Sensor_2P1_T
      == 0.0 ? 1.0E-16 : 4000.0 - Thermodynamic_Properties_Sensor_2P1_T) + 2.0;
  } else {
    t342 = 1.0;
  }

  t245[0ULL] = t341;
  t169[0] = 25ULL;
  tlu2_linear_linear_prelookup(&cc_efOut.mField0[0ULL], &cc_efOut.mField1[0ULL],
    &cc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t245[0ULL],
    &t169[0ULL], &t30[0ULL]);
  t13 = cc_efOut;
  tlu2_2d_linear_linear_value(&dc_efOut[0ULL], &t13.mField0[0ULL], &t13.mField2
    [0ULL], &t261[0ULL], &t263[0ULL], ((_NeDynamicSystem*)(LC))->mField31,
    &t169[0ULL], &t29[0ULL], &t30[0ULL]);
  t244_idx_0 = dc_efOut[0];
  t341 = t244_idx_0;
  t245[0ULL] = t342;
  tlu2_linear_linear_prelookup(&ec_efOut.mField0[0ULL], &ec_efOut.mField1[0ULL],
    &ec_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t245[0ULL],
    &t169[0ULL], &t30[0ULL]);
  t2 = ec_efOut;
  tlu2_2d_linear_linear_value(&fc_efOut[0ULL], &t2.mField0[0ULL], &t2.mField2
    [0ULL], &t261[0ULL], &t263[0ULL], ((_NeDynamicSystem*)(LC))->mField32,
    &t169[0ULL], &t29[0ULL], &t30[0ULL]);
  t244_idx_0 = fc_efOut[0];
  U_idx_5 = X[34ULL] * t341 + X[35ULL] * t244_idx_0;
  t341 = X[34ULL] * t341 / (U_idx_5 == 0.0 ? 1.0E-16 : U_idx_5);
  if (X[160ULL] <= Synchronous_Machine_Measurement_pu_output) {
    t342 = X[160ULL] / (Synchronous_Machine_Measurement_pu_output == 0.0 ?
                        1.0E-16 : Synchronous_Machine_Measurement_pu_output) -
      1.0;
  } else if (X[160ULL] >= Thermodynamic_Properties_Sensor_2P1_T) {
    t342 = (X[160ULL] - 4000.0) / (4000.0 -
      Thermodynamic_Properties_Sensor_2P1_T == 0.0 ? 1.0E-16 : 4000.0 -
      Thermodynamic_Properties_Sensor_2P1_T) + 2.0;
  } else {
    t294 = Thermodynamic_Properties_Sensor_2P1_T
      - Synchronous_Machine_Measurement_pu_output;
    t342 = (X[160ULL] - Synchronous_Machine_Measurement_pu_output) / (t294 ==
      0.0 ? 1.0E-16 : t294);
  }

  t245[0ULL] = t342;
  tlu2_linear_linear_prelookup(&gc_efOut.mField0[0ULL], &gc_efOut.mField1[0ULL],
    &gc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t245[0ULL],
    &t64[0ULL], &t30[0ULL]);
  t13 = gc_efOut;
  tlu2_2d_linear_linear_value(&hc_efOut[0ULL], &t13.mField0[0ULL], &t13.mField2
    [0ULL], &t261[0ULL], &t263[0ULL], ((_NeDynamicSystem*)(LC))->mField16, &t64
    [0ULL], &t29[0ULL], &t30[0ULL]);
  t245[0] = hc_efOut[0];
  t411 = -t245[0ULL];
  Thermodynamic_Properties_Sensor_2P1_T = -t411;
  t411 = -t248[0ULL];
  t342 = X[0ULL] * -t411 * 100.0 + X[154ULL];
  t411 = -t250[0ULL];
  t294 = -t411;
  t411 = -t209[0ULL];
  U_idx_5 = -t411;
  t250[0ULL] = t290;
  tlu2_linear_linear_prelookup(&ic_efOut.mField0[0ULL], &ic_efOut.mField1[0ULL],
    &ic_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t250[0ULL],
    &t64[0ULL], &t30[0ULL]);
  t14 = ic_efOut;
  tlu2_2d_linear_linear_value(&jc_efOut[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], &t19.mField0[0ULL], &t19.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t64[0ULL], &t29[0ULL], &t30[0ULL]);
  t248[0] = jc_efOut[0];
  t411 = -t248[0ULL];
  t290 = X[88ULL] * -t411 * 100.0 + X[89ULL];
  tlu2_2d_linear_linear_value(&kc_efOut[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], &t19.mField0[0ULL], &t19.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t64[0ULL], &t29[0ULL], &t30[0ULL]);
  t248[0] = kc_efOut[0];
  t411 = -t248[0ULL];
  U_idx_6 = -t411;
  tlu2_2d_linear_linear_value(&lc_efOut[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], &t19.mField0[0ULL], &t19.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t64[0ULL], &t29[0ULL], &t30[0ULL]);
  t248[0] = lc_efOut[0];
  t411 = -t248[0ULL];
  t347 = -t411;
  t250[0ULL] = Thermodynamic_Properties_Sensor_2P4_H;
  tlu2_linear_linear_prelookup(&mc_efOut.mField0[0ULL], &mc_efOut.mField1[0ULL],
    &mc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField5, &t250[0ULL],
    &t64[0ULL], &t30[0ULL]);
  t13 = mc_efOut;
  tlu2_2d_linear_linear_value(&nc_efOut[0ULL], &t13.mField0[0ULL], &t13.mField2
    [0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t64[0ULL], &t29[0ULL], &t30[0ULL]);
  t250[0] = nc_efOut[0];
  t411 = -t250[0ULL];
  Thermodynamic_Properties_Sensor_2P4_H = X[92ULL] * -t411 * 100.0 + X[93ULL];
  tlu2_2d_linear_linear_value(&oc_efOut[0ULL], &t13.mField0[0ULL], &t13.mField2
    [0ULL], &t17.mField0[0ULL], &t17.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField16, &t64[0ULL], &t29[0ULL], &t30[0ULL]);
  t250[0] = oc_efOut[0];
  t411 = -t250[0ULL];
  if (t325 <= 0.0) {
    t244_idx_0 = 0.0;
  } else {
    t244_idx_0 = t325 >= 500.0 ? 500.0 : t325;
  }

  if (t419 <= 0.0) {
    t325 = 0.0;
  } else {
    t325 = t419 >= 500.0 ? 500.0 : t419;
  }

  zc_int20 = ((real_T)(M[107ULL] != 0) * 2.0 - 1.0) * zc_int20 / 0.5;
  if (t322 <= 0.0) {
    Synchronous_Machine_Measurement_pu_output = 0.0;
  } else {
    Synchronous_Machine_Measurement_pu_output = t322 >= 1.0 ? 1.0 : 0.8 -
      (zc_int20 - 0.8) * (zc_int20 - 0.8) * 0.2;
  }

  if (zc_int38 > 0.01) {
    t419 = (boolean_T)(real_T)(X[15ULL] > 1.0) ? t244_idx_0 *
      Synchronous_Machine_Measurement_pu_output : 0.0;
  } else {
    t419 = 0.0;
  }

  zc_int38 = ((real_T)(M[109ULL] != 0) * 2.0 - 1.0) * t331 / 0.5;
  if (t336 <= 0.0) {
    t322 = 0.0;
  } else {
    t322 = t336 >= 1.0 ? 1.0 : 0.8 - (zc_int38 - 0.8) * (zc_int38 - 0.8) * 0.2;
  }

  if (zc_int26 > 0.01) {
    t325 = (boolean_T)(real_T)(X[88ULL] > 1.0) ? t325 * t322 : 0.0;
  } else {
    t325 = 0.0;
  }

  t331 = ((real_T)(M[108ULL] != 0) * 2.0 - 1.0) * X[122ULL] * t419 / (t421 ==
    0.0 ? 1.0E-16 : t421) * 1000.0;
  t421 = -(-(((real_T)(M[110ULL] != 0) * 2.0 - 1.0) * t292 * t325) / (t421 ==
            0.0 ? 1.0E-16 : t421) * 1000.0);
  out.mX[0] = -t278;
  out.mX[1] = -t279;
  out.mX[2] = -t280;
  out.mX[3] = -X[82ULL] + X[81ULL];
  out.mX[4] = -X[83ULL] + X[82ULL];
  out.mX[5] = -X[81ULL] + X[83ULL];
  out.mX[6] = X[84ULL] * -0.0041659346462926084 + X[86ULL] *
    0.0041659346462926084;
  out.mX[7] = X[84ULL] * 0.0041659346462926084 + X[85ULL] *
    -0.0041659346462926084;
  out.mX[8] = X[85ULL] * 0.0041659346462926084 + X[86ULL] *
    -0.0041659346462926084;
  out.mX[9] = -X[127ULL] + X[126ULL];
  out.mX[10] = -X[128ULL] + X[127ULL];
  out.mX[11] = -X[126ULL] + X[128ULL];
  out.mX[12] = U_idx_2 * 1000.0 * 0.001;
  out.mX[13] = X[124ULL];
  out.mX[14] = X[112ULL];
  out.mX[15] = X[157ULL];
  out.mX[16] = -X[122ULL] + X[124ULL];
  out.mX[17] = X[122ULL];
  out.mX[18] = X[77ULL];
  out.mX[19] = X[162ULL];
  out.mX[20] = -X[75ULL] + X[164ULL];
  out.mX[21] = -X[113ULL];
  out.mX[22] = -X[96ULL];
  out.mX[23] = -X[99ULL];
  out.mX[24] = X[68ULL];
  out.mX[25] = X[100ULL];
  out.mX[26] = ((-(X[81ULL] * t278) - X[82ULL] * t279) - X[83ULL] * t280) *
    0.001 * 1000.0;
  out.mX[27] = U_idx_4 * 1000.0;
  out.mX[28] = Preheating_Thermodynamic_Properties_Sensor_2P1_T - 273.15;
  out.mX[29] = t295 - 273.15;
  out.mX[30] = X[88ULL] * 0.1;
  out.mX[31] = X[89ULL];
  out.mX[32] = X[15ULL] * 0.1;
  out.mX[33] = X[117ULL];
  out.mX[34] = X[92ULL] * 0.1;
  out.mX[35] = X[93ULL];
  out.mX[36] = X[0ULL] * 0.1;
  out.mX[37] = X[160ULL];
  out.mX[38] = X[92ULL] * 0.1;
  out.mX[39] = X[0ULL] * 0.1;
  out.mX[40] = X[154ULL];
  out.mX[41] = X[133ULL] * 0.1;
  out.mX[42] = X[61ULL] - 273.15;
  out.mX[43] = X[143ULL] - 273.15;
  out.mX[44] = X[173ULL] * 0.099999999999999992;
  out.mX[45] = X[172ULL] - 273.15;
  out.mX[46] = t313;
  out.mX[47] = t314;
  out.mX[48] = t322;
  out.mX[49] = t325;
  out.mX[50] = t334;
  out.mX[51] = t337;
  out.mX[52] = Simscape_Component1_inlet_entropy * 0.001;
  out.mX[53] = t330 - 273.15;
  out.mX[54] = -t292;
  out.mX[55] = zc_int38;
  out.mX[56] = t338;
  out.mX[57] = t332;
  out.mX[58] = zc_int37;
  out.mX[59] = t335;
  out.mX[60] = X[18ULL];
  out.mX[61] = -t421;
  out.mX[62] = Synchronous_Machine_Measurement_pu_output;
  out.mX[63] = t419;
  out.mX[64] = Simscape_Component_h_A;
  out.mX[65] = t323;
  out.mX[66] = t308 * 0.001;
  out.mX[67] = t316 - 273.15;
  out.mX[68] = X[122ULL];
  out.mX[69] = zc_int20;
  out.mX[70] = t324;
  out.mX[71] = t318;
  out.mX[72] = t319;
  out.mX[73] = t321;
  out.mX[74] = X[18ULL];
  out.mX[75] = t331;
  out.mX[76] = t341;
  out.mX[77] = X[233ULL];
  out.mX[78] = Thermodynamic_Properties_Sensor_2P1_T - 273.15;
  out.mX[79] = t342;
  out.mX[80] = t294 * 0.001;
  out.mX[81] = U_idx_5 - 273.15;
  out.mX[82] = t290;
  out.mX[83] = U_idx_6 * 0.001;
  out.mX[84] = t347 - 273.15;
  out.mX[85] = Thermodynamic_Properties_Sensor_2P4_H;
  out.mX[86] = -t411 - 273.15;
  out.mX[87] = Preheating_Thermodynamic_Properties_Sensor_2P1_T - 273.15;
  out.mX[88] = X[246ULL];
  out.mX[89] = X[247ULL];
  out.mX[90] = X[248ULL];
  out.mX[91] = X[249ULL];
  (void)LC;
  (void)t423;
  return 0;
}
