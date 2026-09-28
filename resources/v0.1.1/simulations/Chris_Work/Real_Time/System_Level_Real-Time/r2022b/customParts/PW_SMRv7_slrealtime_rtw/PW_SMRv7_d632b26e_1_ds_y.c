/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv7/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv7_d632b26e_1_ds_sys_struct.h"
#include "PW_SMRv7_d632b26e_1_ds_y.h"
#include "PW_SMRv7_d632b26e_1_ds.h"
#include "PW_SMRv7_d632b26e_1_ds_externals.h"
#include "PW_SMRv7_d632b26e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv7_d632b26e_1_ds_y(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t256, NeDsMethodOutput *t257)
{
  ETTS0 d_efOut;
  ETTS0 eb_efOut;
  ETTS0 efOut;
  ETTS0 g_efOut;
  ETTS0 gb_efOut;
  ETTS0 ib_efOut;
  ETTS0 j_efOut;
  ETTS0 kb_efOut;
  ETTS0 m_efOut;
  ETTS0 ob_efOut;
  ETTS0 p_efOut;
  ETTS0 r_efOut;
  ETTS0 t12;
  ETTS0 t13;
  ETTS0 t14;
  ETTS0 t16;
  ETTS0 t18;
  ETTS0 t19;
  ETTS0 t9;
  ETTS0 t_efOut;
  ETTS0 w_efOut;
  ETTS0 y_efOut;
  PmRealVector out;
  real_T X[183];
  real_T t163[2];
  real_T ab_efOut[1];
  real_T b_efOut[1];
  real_T bb_efOut[1];
  real_T c_efOut[1];
  real_T cb_efOut[1];
  real_T db_efOut[1];
  real_T e_efOut[1];
  real_T f_efOut[1];
  real_T fb_efOut[1];
  real_T h_efOut[1];
  real_T hb_efOut[1];
  real_T i_efOut[1];
  real_T jb_efOut[1];
  real_T k_efOut[1];
  real_T l_efOut[1];
  real_T lb_efOut[1];
  real_T mb_efOut[1];
  real_T n_efOut[1];
  real_T nb_efOut[1];
  real_T o_efOut[1];
  real_T pb_efOut[1];
  real_T q_efOut[1];
  real_T qb_efOut[1];
  real_T s_efOut[1];
  real_T t138[1];
  real_T t139[1];
  real_T t157[1];
  real_T t159[1];
  real_T u_efOut[1];
  real_T v_efOut[1];
  real_T x_efOut[1];
  real_T Preheating_Thermodynamic_Properties_Sensor_2P1_T;
  real_T Simscape_Component_ideal_outlet_enthalpy;
  real_T Simscape_Component_nozzle_area_out;
  real_T Simscape_Component_pressure_ratio_out;
  real_T Simscape_Component_v_g_B;
  real_T Steam_Drum_V_frac_liq;
  real_T Thermodynamic_Properties_Sensor_2P1_T;
  real_T Thermodynamic_Properties_Sensor_2P2_H;
  real_T Thermodynamic_Properties_Sensor_2P3_H;
  real_T U_idx_0;
  real_T U_idx_3;
  real_T intrm_sf_mf_124;
  real_T t154_idx_0;
  real_T t171;
  real_T t172;
  real_T t182;
  real_T t183;
  real_T t184;
  real_T t185;
  real_T t186;
  real_T t188;
  real_T t190;
  real_T t192;
  real_T t194;
  real_T t197;
  real_T zc_int20;
  size_t t165[1];
  size_t t21[1];
  size_t t22[1];
  size_t t56[1];
  size_t t98[1];
  int32_T M[128];
  int32_T b;
  for (b = 0; b < 128; b++) {
    M[b] = t256->mM.mX[b];
  }

  U_idx_0 = t256->mU.mX[0];
  U_idx_3 = t256->mU.mX[3];
  for (b = 0; b < 183; b++) {
    X[b] = t256->mX.mX[b];
  }

  out = t257->mY;
  t159[0ULL] = X[0ULL];
  t21[0] = 100ULL;
  t22[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t159[0ULL], &t21
    [0ULL], &t22[0ULL]);
  t19 = efOut;
  t163[0ULL] = t19.mField0[0ULL];
  t163[1ULL] = t19.mField0[1ULL];
  t165[0ULL] = t19.mField2[0ULL];
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t163[0ULL], &t165[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t21[0ULL], &t22[0ULL]);
  t157[0] = b_efOut[0];
  Thermodynamic_Properties_Sensor_2P1_T = t157[0ULL];
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t163[0ULL], &t165[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t21[0ULL], &t22[0ULL]);
  t138[0] = c_efOut[0];
  Thermodynamic_Properties_Sensor_2P2_H = t138[0ULL];
  t157[0ULL] = X[43ULL];
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t157[0ULL],
    &t21[0ULL], &t22[0ULL]);
  t16 = d_efOut;
  tlu2_1d_linear_linear_value(&e_efOut[0ULL], &t16.mField0[0ULL], &t16.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t21[0ULL], &t22[0ULL]);
  t139[0] = e_efOut[0];
  Simscape_Component_v_g_B = t139[0ULL];
  tlu2_1d_linear_linear_value(&f_efOut[0ULL], &t16.mField0[0ULL], &t16.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t21[0ULL], &t22[0ULL]);
  t154_idx_0 = f_efOut[0];
  if (X[44ULL] <= Simscape_Component_v_g_B) {
    Preheating_Thermodynamic_Properties_Sensor_2P1_T = X[44ULL] /
      (Simscape_Component_v_g_B == 0.0 ? 1.0E-16 : Simscape_Component_v_g_B) -
      1.0;
  } else if (X[44ULL] >= t154_idx_0) {
    Preheating_Thermodynamic_Properties_Sensor_2P1_T = (X[44ULL] - 4000.0) /
      (4000.0 - t154_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t154_idx_0) + 2.0;
  } else {
    t172 = t154_idx_0 - Simscape_Component_v_g_B;
    Preheating_Thermodynamic_Properties_Sensor_2P1_T = (X[44ULL] -
      Simscape_Component_v_g_B) / (t172 == 0.0 ? 1.0E-16 : t172);
  }

  t138[0ULL] = X[49ULL];
  tlu2_linear_linear_prelookup(&g_efOut.mField0[0ULL], &g_efOut.mField1[0ULL],
    &g_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t138[0ULL],
    &t21[0ULL], &t22[0ULL]);
  t14 = g_efOut;
  tlu2_1d_linear_linear_value(&h_efOut[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t21[0ULL], &t22[0ULL]);
  t154_idx_0 = h_efOut[0];
  Simscape_Component_v_g_B = t154_idx_0;
  tlu2_1d_linear_linear_value(&i_efOut[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t21[0ULL], &t22[0ULL]);
  t154_idx_0 = i_efOut[0];
  Simscape_Component_ideal_outlet_enthalpy = t154_idx_0;
  if (X[50ULL] <= Simscape_Component_v_g_B) {
    Thermodynamic_Properties_Sensor_2P3_H = X[50ULL] / (Simscape_Component_v_g_B
      == 0.0 ? 1.0E-16 : Simscape_Component_v_g_B) - 1.0;
  } else if (X[50ULL] >= t154_idx_0) {
    Thermodynamic_Properties_Sensor_2P3_H = (X[50ULL] - 4000.0) / (4000.0 -
      t154_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t154_idx_0) + 2.0;
  } else {
    t172 = t154_idx_0 - Simscape_Component_v_g_B;
    Thermodynamic_Properties_Sensor_2P3_H = (X[50ULL] - Simscape_Component_v_g_B)
      / (t172 == 0.0 ? 1.0E-16 : t172);
  }

  t139[0ULL] = X[53ULL];
  tlu2_linear_linear_prelookup(&j_efOut.mField0[0ULL], &j_efOut.mField1[0ULL],
    &j_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t139[0ULL],
    &t21[0ULL], &t22[0ULL]);
  t13 = j_efOut;
  tlu2_1d_linear_linear_value(&k_efOut[0ULL], &t13.mField0[0ULL], &t13.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t21[0ULL], &t22[0ULL]);
  t154_idx_0 = k_efOut[0];
  t172 = t154_idx_0;
  tlu2_1d_linear_linear_value(&l_efOut[0ULL], &t13.mField0[0ULL], &t13.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t21[0ULL], &t22[0ULL]);
  t154_idx_0 = l_efOut[0];
  if (X[54ULL] <= t172) {
    t171 = X[54ULL] / (t172 == 0.0 ? 1.0E-16 : t172) - 1.0;
  } else if (X[54ULL] >= t154_idx_0) {
    t171 = (X[54ULL] - 4000.0) / (4000.0 - t154_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t154_idx_0) + 2.0;
  } else {
    t182 = t154_idx_0 - t172;
    t171 = (X[54ULL] - t172) / (t182 == 0.0 ? 1.0E-16 : t182);
  }

  t139[0ULL] = X[79ULL];
  tlu2_linear_linear_prelookup(&m_efOut.mField0[0ULL], &m_efOut.mField1[0ULL],
    &m_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t139[0ULL],
    &t21[0ULL], &t22[0ULL]);
  t12 = m_efOut;
  tlu2_1d_linear_linear_value(&n_efOut[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t21[0ULL], &t22[0ULL]);
  t154_idx_0 = n_efOut[0];
  intrm_sf_mf_124 = t154_idx_0;
  tlu2_1d_linear_linear_value(&o_efOut[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t21[0ULL], &t22[0ULL]);
  t154_idx_0 = o_efOut[0];
  if (X[80ULL] <= intrm_sf_mf_124) {
    t172 = X[80ULL] / (intrm_sf_mf_124 == 0.0 ? 1.0E-16 : intrm_sf_mf_124) - 1.0;
  } else if (X[80ULL] >= t154_idx_0) {
    t172 = (X[80ULL] - 4000.0) / (4000.0 - t154_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t154_idx_0) + 2.0;
  } else {
    Simscape_Component_pressure_ratio_out = t154_idx_0 - intrm_sf_mf_124;
    t172 = (X[80ULL] - intrm_sf_mf_124) / (Simscape_Component_pressure_ratio_out
      == 0.0 ? 1.0E-16 : Simscape_Component_pressure_ratio_out);
  }

  t139[0ULL] = Preheating_Thermodynamic_Properties_Sensor_2P1_T;
  t56[0] = 50ULL;
  tlu2_linear_linear_prelookup(&p_efOut.mField0[0ULL], &p_efOut.mField1[0ULL],
    &p_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t139[0ULL],
    &t56[0ULL], &t22[0ULL]);
  t9 = p_efOut;
  tlu2_2d_linear_linear_value(&q_efOut[0ULL], &t9.mField0[0ULL], &t9.mField2
    [0ULL], &t16.mField0[0ULL], &t16.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t56[0ULL], &t21[0ULL], &t22[0ULL]);
  t154_idx_0 = q_efOut[0];
  Preheating_Thermodynamic_Properties_Sensor_2P1_T = t154_idx_0;
  t139[0ULL] = t172;
  tlu2_linear_linear_prelookup(&r_efOut.mField0[0ULL], &r_efOut.mField1[0ULL],
    &r_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t139[0ULL],
    &t56[0ULL], &t22[0ULL]);
  t9 = r_efOut;
  tlu2_2d_linear_linear_value(&s_efOut[0ULL], &t9.mField0[0ULL], &t9.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t56[0ULL], &t21[0ULL], &t22[0ULL]);
  t154_idx_0 = s_efOut[0];
  intrm_sf_mf_124 = t154_idx_0;
  t182 = X[0ULL] - X[49ULL];
  if (X[97ULL] <= Thermodynamic_Properties_Sensor_2P1_T) {
    t183 = X[97ULL] / (Thermodynamic_Properties_Sensor_2P1_T == 0.0 ? 1.0E-16 :
                       Thermodynamic_Properties_Sensor_2P1_T) - 1.0;
  } else if (X[97ULL] >= Thermodynamic_Properties_Sensor_2P2_H) {
    t183 = (X[97ULL] - 4000.0) / (4000.0 - Thermodynamic_Properties_Sensor_2P2_H
      == 0.0 ? 1.0E-16 : 4000.0 - Thermodynamic_Properties_Sensor_2P2_H) + 2.0;
  } else {
    t172 = Thermodynamic_Properties_Sensor_2P2_H -
      Thermodynamic_Properties_Sensor_2P1_T;
    t183 = (X[97ULL] - Thermodynamic_Properties_Sensor_2P1_T) / (t172 == 0.0 ?
      1.0E-16 : t172);
  }

  t139[0ULL] = t183;
  tlu2_linear_linear_prelookup(&t_efOut.mField0[0ULL], &t_efOut.mField1[0ULL],
    &t_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t139[0ULL],
    &t56[0ULL], &t22[0ULL]);
  t18 = t_efOut;
  tlu2_2d_linear_linear_value(&u_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t19.mField0[0ULL], &t19.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t56[0ULL], &t21[0ULL], &t22[0ULL]);
  t138[0] = u_efOut[0];
  t183 = t138[0ULL];
  t172 = pmf_sqrt(t183 * 461.5);
  tlu2_2d_linear_linear_value(&v_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t19.mField0[0ULL], &t19.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t56[0ULL], &t21[0ULL], &t22[0ULL]);
  t159[0] = v_efOut[0];
  t185 = t159[0ULL];
  if (U_idx_3 <= 0.0) {
    Simscape_Component_pressure_ratio_out = 0.0;
  } else {
    Simscape_Component_pressure_ratio_out = U_idx_3 >= 1.0 ? 1.0 : U_idx_3;
  }

  t186 = Simscape_Component_pressure_ratio_out * 0.0002;
  t184 = X[49ULL] / (X[0ULL] == 0.0 ? 1.0E-16 : X[0ULL]);
  if (t184 <= 0.0) {
    zc_int20 = 0.0;
  } else {
    zc_int20 = t184 >= 1.0 ? 1.0 : t184;
  }

  t184 = (pmf_pow(zc_int20, 1.5384615384615383) - pmf_pow(zc_int20,
           1.7692307692307689)) * 8.6666666666666661;
  if (t184 <= 0.0) {
    t190 = 0.0;
  } else {
    t190 = t184 >= 1.0E+6 ? 1.0E+6 : t184;
  }

  t184 = t186 * X[0ULL] * 0.85 / (t172 == 0.0 ? 1.0E-16 : t172) * pmf_sqrt(t190);
  if (zc_int20 < 0.545727733814065) {
    t190 = X[0ULL] * 0.85 / (t172 == 0.0 ? 1.0E-16 : t172) * 0.667262351240862 *
      t186 * 100000.0;
  } else {
    t190 = t184 * 100000.0;
  }

  t184 = t182 > 0.01 ? t190 : 0.0;
  t172 = fabs(t184);
  t188 = t172 / 1.5;
  t190 = (0.8 - (t188 - 0.8) * (t188 - 0.8) * 0.2) - (zc_int20 - 0.25) *
    (zc_int20 - 0.25) * 0.35;
  t188 = t185 * X[0ULL] * 100.0 + X[97ULL];
  if (Simscape_Component_v_g_B <= Simscape_Component_v_g_B) {
    t185 = Simscape_Component_v_g_B / (Simscape_Component_v_g_B == 0.0 ? 1.0E-16
      : Simscape_Component_v_g_B) - 1.0;
  } else if (Simscape_Component_v_g_B >=
             Simscape_Component_ideal_outlet_enthalpy) {
    t185 = (Simscape_Component_v_g_B - 4000.0) / (4000.0 -
      Simscape_Component_ideal_outlet_enthalpy == 0.0 ? 1.0E-16 : 4000.0 -
      Simscape_Component_ideal_outlet_enthalpy) + 2.0;
  } else {
    t172 = Simscape_Component_ideal_outlet_enthalpy - Simscape_Component_v_g_B;
    t185 = (Simscape_Component_v_g_B - Simscape_Component_v_g_B) / (t172 == 0.0 ?
      1.0E-16 : t172);
  }

  t139[0ULL] = t185;
  tlu2_linear_linear_prelookup(&w_efOut.mField0[0ULL], &w_efOut.mField1[0ULL],
    &w_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t139[0ULL],
    &t56[0ULL], &t22[0ULL]);
  t12 = w_efOut;
  tlu2_2d_linear_linear_value(&x_efOut[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &t14.mField0[0ULL], &t14.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t56[0ULL], &t21[0ULL], &t22[0ULL]);
  t154_idx_0 = x_efOut[0];
  Simscape_Component_nozzle_area_out = X[49ULL] * t154_idx_0 * 100.0 +
    Simscape_Component_v_g_B;
  if (Simscape_Component_ideal_outlet_enthalpy <= Simscape_Component_v_g_B) {
    t185 = Simscape_Component_ideal_outlet_enthalpy / (Simscape_Component_v_g_B ==
      0.0 ? 1.0E-16 : Simscape_Component_v_g_B) - 1.0;
  } else if (Simscape_Component_ideal_outlet_enthalpy >=
             Simscape_Component_ideal_outlet_enthalpy) {
    t185 = (Simscape_Component_ideal_outlet_enthalpy - 4000.0) / (4000.0 -
      Simscape_Component_ideal_outlet_enthalpy == 0.0 ? 1.0E-16 : 4000.0 -
      Simscape_Component_ideal_outlet_enthalpy) + 2.0;
  } else {
    t172 = Simscape_Component_ideal_outlet_enthalpy - Simscape_Component_v_g_B;
    t185 = (Simscape_Component_ideal_outlet_enthalpy - Simscape_Component_v_g_B)
      / (t172 == 0.0 ? 1.0E-16 : t172);
  }

  t139[0ULL] = t185;
  tlu2_linear_linear_prelookup(&y_efOut.mField0[0ULL], &y_efOut.mField1[0ULL],
    &y_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t139[0ULL],
    &t56[0ULL], &t22[0ULL]);
  t9 = y_efOut;
  tlu2_2d_linear_linear_value(&ab_efOut[0ULL], &t9.mField0[0ULL], &t9.mField2
    [0ULL], &t14.mField0[0ULL], &t14.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t56[0ULL], &t21[0ULL], &t22[0ULL]);
  t154_idx_0 = ab_efOut[0];
  t185 = X[49ULL] * t154_idx_0 * 100.0 +
    Simscape_Component_ideal_outlet_enthalpy;
  tlu2_2d_linear_linear_value(&bb_efOut[0ULL], &t18.mField0[0ULL], &t18.mField2
    [0ULL], &t19.mField0[0ULL], &t19.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t56[0ULL], &t21[0ULL], &t22[0ULL]);
  t157[0] = bb_efOut[0];
  Simscape_Component_v_g_B = t157[0ULL];
  tlu2_2d_linear_linear_value(&cb_efOut[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &t14.mField0[0ULL], &t14.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t56[0ULL], &t21[0ULL], &t22[0ULL]);
  t154_idx_0 = cb_efOut[0];
  Simscape_Component_ideal_outlet_enthalpy = t154_idx_0;
  tlu2_2d_linear_linear_value(&db_efOut[0ULL], &t9.mField0[0ULL], &t9.mField2
    [0ULL], &t14.mField0[0ULL], &t14.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t56[0ULL], &t21[0ULL], &t22[0ULL]);
  t154_idx_0 = db_efOut[0];
  t172 = t154_idx_0 - Simscape_Component_ideal_outlet_enthalpy;
  Simscape_Component_ideal_outlet_enthalpy = (Simscape_Component_v_g_B -
    Simscape_Component_ideal_outlet_enthalpy) / (t172 == 0.0 ? 1.0E-16 : t172);
  if (Simscape_Component_ideal_outlet_enthalpy <= 0.0) {
    t192 = 0.0;
  } else {
    t192 = Simscape_Component_ideal_outlet_enthalpy >= 1.0 ? 1.0 :
      Simscape_Component_ideal_outlet_enthalpy;
  }

  Simscape_Component_ideal_outlet_enthalpy = (t185 -
    Simscape_Component_nozzle_area_out) * t192 +
    Simscape_Component_nozzle_area_out;
  t185 = t188 - Simscape_Component_ideal_outlet_enthalpy;
  t188 = t192;
  Simscape_Component_nozzle_area_out = t186;
  t186 = (real_T)(zc_int20 < 0.545727733814065);
  t192 = Simscape_Component_pressure_ratio_out;
  Simscape_Component_pressure_ratio_out = zc_int20;
  if (X[26ULL] < Thermodynamic_Properties_Sensor_2P1_T) {
    Steam_Drum_V_frac_liq = X[26ULL] / (Thermodynamic_Properties_Sensor_2P1_T ==
      0.0 ? 1.0E-16 : Thermodynamic_Properties_Sensor_2P1_T) - 1.0;
  } else {
    Steam_Drum_V_frac_liq = 0.0;
  }

  if (X[27ULL] > Thermodynamic_Properties_Sensor_2P2_H) {
    t194 = (X[27ULL] - 4000.0) / (4000.0 - Thermodynamic_Properties_Sensor_2P2_H
      == 0.0 ? 1.0E-16 : 4000.0 - Thermodynamic_Properties_Sensor_2P2_H) + 2.0;
  } else {
    t194 = 1.0;
  }

  t139[0ULL] = Steam_Drum_V_frac_liq;
  t98[0] = 25ULL;
  tlu2_linear_linear_prelookup(&eb_efOut.mField0[0ULL], &eb_efOut.mField1[0ULL],
    &eb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t139[0ULL],
    &t98[0ULL], &t22[0ULL]);
  t9 = eb_efOut;
  tlu2_2d_linear_linear_value(&fb_efOut[0ULL], &t9.mField0[0ULL], &t9.mField2
    [0ULL], &t163[0ULL], &t165[0ULL], ((_NeDynamicSystem*)(LC))->mField31, &t98
    [0ULL], &t21[0ULL], &t22[0ULL]);
  t154_idx_0 = fb_efOut[0];
  Steam_Drum_V_frac_liq = t154_idx_0;
  t139[0ULL] = t194;
  tlu2_linear_linear_prelookup(&gb_efOut.mField0[0ULL], &gb_efOut.mField1[0ULL],
    &gb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t139[0ULL],
    &t98[0ULL], &t22[0ULL]);
  t9 = gb_efOut;
  tlu2_2d_linear_linear_value(&hb_efOut[0ULL], &t9.mField0[0ULL], &t9.mField2
    [0ULL], &t163[0ULL], &t165[0ULL], ((_NeDynamicSystem*)(LC))->mField32, &t98
    [0ULL], &t21[0ULL], &t22[0ULL]);
  t154_idx_0 = hb_efOut[0];
  t172 = X[28ULL] * Steam_Drum_V_frac_liq + X[29ULL] * t154_idx_0;
  Steam_Drum_V_frac_liq = X[28ULL] * Steam_Drum_V_frac_liq / (t172 == 0.0 ?
    1.0E-16 : t172);
  if (X[147ULL] <= Thermodynamic_Properties_Sensor_2P1_T) {
    t194 = X[147ULL] / (Thermodynamic_Properties_Sensor_2P1_T == 0.0 ? 1.0E-16 :
                        Thermodynamic_Properties_Sensor_2P1_T) - 1.0;
  } else if (X[147ULL] >= Thermodynamic_Properties_Sensor_2P2_H) {
    t194 = (X[147ULL] - 4000.0) / (4000.0 -
      Thermodynamic_Properties_Sensor_2P2_H == 0.0 ? 1.0E-16 : 4000.0 -
      Thermodynamic_Properties_Sensor_2P2_H) + 2.0;
  } else {
    t172 = Thermodynamic_Properties_Sensor_2P2_H -
      Thermodynamic_Properties_Sensor_2P1_T;
    t194 = (X[147ULL] - Thermodynamic_Properties_Sensor_2P1_T) / (t172 == 0.0 ?
      1.0E-16 : t172);
  }

  t139[0ULL] = t194;
  tlu2_linear_linear_prelookup(&ib_efOut.mField0[0ULL], &ib_efOut.mField1[0ULL],
    &ib_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t139[0ULL],
    &t56[0ULL], &t22[0ULL]);
  t16 = ib_efOut;
  tlu2_2d_linear_linear_value(&jb_efOut[0ULL], &t16.mField0[0ULL], &t16.mField2
    [0ULL], &t163[0ULL], &t165[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t56
    [0ULL], &t21[0ULL], &t22[0ULL]);
  t139[0] = jb_efOut[0];
  t172 = -t139[0ULL];
  Thermodynamic_Properties_Sensor_2P1_T = -t172;
  t172 = -t159[0ULL];
  Thermodynamic_Properties_Sensor_2P2_H = X[0ULL] * -t172 * 100.0 + X[97ULL];
  t172 = -t157[0ULL];
  t194 = -t172;
  t172 = -t138[0ULL];
  U_idx_3 = -t172;
  t159[0ULL] = Thermodynamic_Properties_Sensor_2P3_H;
  tlu2_linear_linear_prelookup(&kb_efOut.mField0[0ULL], &kb_efOut.mField1[0ULL],
    &kb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t159[0ULL],
    &t56[0ULL], &t22[0ULL]);
  t12 = kb_efOut;
  tlu2_2d_linear_linear_value(&lb_efOut[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &t14.mField0[0ULL], &t14.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t56[0ULL], &t21[0ULL], &t22[0ULL]);
  t157[0] = lb_efOut[0];
  t172 = -t157[0ULL];
  Thermodynamic_Properties_Sensor_2P3_H = X[49ULL] * -t172 * 100.0 + X[50ULL];
  tlu2_2d_linear_linear_value(&mb_efOut[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &t14.mField0[0ULL], &t14.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t56[0ULL], &t21[0ULL], &t22[0ULL]);
  t157[0] = mb_efOut[0];
  t172 = -t157[0ULL];
  t154_idx_0 = -t172;
  tlu2_2d_linear_linear_value(&nb_efOut[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], &t14.mField0[0ULL], &t14.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t56[0ULL], &t21[0ULL], &t22[0ULL]);
  t157[0] = nb_efOut[0];
  t172 = -t157[0ULL];
  t197 = -t172;
  t159[0ULL] = t171;
  tlu2_linear_linear_prelookup(&ob_efOut.mField0[0ULL], &ob_efOut.mField1[0ULL],
    &ob_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t159[0ULL],
    &t56[0ULL], &t22[0ULL]);
  t9 = ob_efOut;
  tlu2_2d_linear_linear_value(&pb_efOut[0ULL], &t9.mField0[0ULL], &t9.mField2
    [0ULL], &t13.mField0[0ULL], &t13.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t56[0ULL], &t21[0ULL], &t22[0ULL]);
  t159[0] = pb_efOut[0];
  t172 = -t159[0ULL];
  t171 = X[53ULL] * -t172 * 100.0 + X[54ULL];
  tlu2_2d_linear_linear_value(&qb_efOut[0ULL], &t9.mField0[0ULL], &t9.mField2
    [0ULL], &t13.mField0[0ULL], &t13.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t56[0ULL], &t21[0ULL], &t22[0ULL]);
  t159[0] = qb_efOut[0];
  t172 = -t159[0ULL];
  t184 = ((real_T)(M[55ULL] != 0) * 2.0 - 1.0) * t184 / 1.5;
  if (t190 <= 0.0) {
    zc_int20 = 0.0;
  } else {
    zc_int20 = t190 >= 1.0 ? 1.0 : (0.8 - (t184 - 0.8) * (t184 - 0.8) * 0.2) -
      (zc_int20 - 0.25) * (zc_int20 - 0.25) * 0.35;
  }

  t185 = t182 > 0.01 ? t185 * zc_int20 : 0.0;
  out.mX[0] = U_idx_0 * 1000.0 * 0.001;
  out.mX[1] = X[56ULL];
  out.mX[2] = X[56ULL];
  out.mX[3] = X[100ULL];
  out.mX[4] = -X[57ULL];
  out.mX[5] = Preheating_Thermodynamic_Properties_Sensor_2P1_T - 273.15;
  out.mX[6] = intrm_sf_mf_124 - 273.15;
  out.mX[7] = X[49ULL] * 0.1;
  out.mX[8] = X[50ULL];
  out.mX[9] = X[53ULL] * 0.1;
  out.mX[10] = X[54ULL];
  out.mX[11] = X[0ULL] * 0.1;
  out.mX[12] = X[147ULL];
  out.mX[13] = X[53ULL] * 0.1;
  out.mX[14] = X[0ULL] * 0.1;
  out.mX[15] = X[97ULL];
  out.mX[16] = X[79ULL] * 0.1;
  out.mX[17] = X[119ULL] * 0.099999999999999992;
  out.mX[18] = X[118ULL] - 273.15;
  out.mX[19] = zc_int20;
  out.mX[20] = t185;
  out.mX[21] = Simscape_Component_ideal_outlet_enthalpy;
  out.mX[22] = t188;
  out.mX[23] = Simscape_Component_v_g_B * 0.001;
  out.mX[24] = t183 - 273.15;
  out.mX[25] = X[56ULL];
  out.mX[26] = t184;
  out.mX[27] = Simscape_Component_nozzle_area_out;
  out.mX[28] = t186;
  out.mX[29] = t192;
  out.mX[30] = ((real_T)(M[61ULL] != 0) * 2.0 - 1.0) * X[56ULL] * t185 * 0.001;
  out.mX[31] = Simscape_Component_pressure_ratio_out;
  out.mX[32] = Steam_Drum_V_frac_liq;
  out.mX[33] = Thermodynamic_Properties_Sensor_2P1_T - 273.15;
  out.mX[34] = Thermodynamic_Properties_Sensor_2P2_H;
  out.mX[35] = t194 * 0.001;
  out.mX[36] = U_idx_3 - 273.15;
  out.mX[37] = Thermodynamic_Properties_Sensor_2P3_H;
  out.mX[38] = t154_idx_0 * 0.001;
  out.mX[39] = t197 - 273.15;
  out.mX[40] = t171;
  out.mX[41] = -t172 - 273.15;
  out.mX[42] = Preheating_Thermodynamic_Properties_Sensor_2P1_T - 273.15;
  out.mX[43] = X[179ULL];
  out.mX[44] = X[180ULL];
  out.mX[45] = X[181ULL];
  out.mX[46] = X[182ULL];
  (void)LC;
  (void)t257;
  return 0;
}
