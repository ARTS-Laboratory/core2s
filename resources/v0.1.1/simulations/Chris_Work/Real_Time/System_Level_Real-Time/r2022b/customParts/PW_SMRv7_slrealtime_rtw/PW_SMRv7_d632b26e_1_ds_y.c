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
  NeDynamicSystemInput *t252, NeDsMethodOutput *t253)
{
  ETTS0 d_efOut;
  ETTS0 db_efOut;
  ETTS0 efOut;
  ETTS0 fb_efOut;
  ETTS0 g_efOut;
  ETTS0 hb_efOut;
  ETTS0 j_efOut;
  ETTS0 kb_efOut;
  ETTS0 m_efOut;
  ETTS0 ob_efOut;
  ETTS0 p_efOut;
  ETTS0 r_efOut;
  ETTS0 t10;
  ETTS0 t11;
  ETTS0 t12;
  ETTS0 t14;
  ETTS0 t17;
  ETTS0 t18;
  ETTS0 t8;
  ETTS0 t_efOut;
  ETTS0 v_efOut;
  ETTS0 x_efOut;
  PmRealVector out;
  real_T X[183];
  real_T t165[2];
  real_T t168[2];
  real_T ab_efOut[1];
  real_T b_efOut[1];
  real_T bb_efOut[1];
  real_T c_efOut[1];
  real_T cb_efOut[1];
  real_T e_efOut[1];
  real_T eb_efOut[1];
  real_T f_efOut[1];
  real_T gb_efOut[1];
  real_T h_efOut[1];
  real_T i_efOut[1];
  real_T ib_efOut[1];
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
  real_T t154[1];
  real_T t158[1];
  real_T t160[1];
  real_T u_efOut[1];
  real_T w_efOut[1];
  real_T y_efOut[1];
  real_T Preheating_Thermodynamic_Properties_Sensor_2P1_T;
  real_T Simscape_Component_ideal_outlet_enthalpy;
  real_T Simscape_Component_ideal_outlet_quality;
  real_T Simscape_Component_v_g_B;
  real_T Thermodynamic_Properties_Sensor_2P1_T;
  real_T Thermodynamic_Properties_Sensor_2P2_H;
  real_T Thermodynamic_Properties_Sensor_2P3_H;
  real_T U_idx_0;
  real_T U_idx_3;
  real_T intrm_sf_mf_124;
  real_T intrm_sf_mf_373;
  real_T t150_idx_0;
  real_T t178;
  real_T t179;
  real_T t189;
  real_T t192;
  real_T t193;
  real_T t194;
  real_T t195;
  real_T t199;
  real_T zc_int22;
  size_t t170[1];
  size_t t20[1];
  size_t t21[1];
  size_t t55[1];
  size_t t94[1];
  int32_T M[129];
  int32_T b;
  for (b = 0; b < 129; b++) {
    M[b] = t252->mM.mX[b];
  }

  U_idx_0 = t252->mU.mX[0];
  U_idx_3 = t252->mU.mX[3];
  for (b = 0; b < 183; b++) {
    X[b] = t252->mX.mX[b];
  }

  out = t253->mY;
  t160[0ULL] = X[0ULL];
  t20[0] = 100ULL;
  t21[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t160[0ULL], &t20
    [0ULL], &t21[0ULL]);
  t18 = efOut;
  t168[0ULL] = t18.mField0[0ULL];
  t168[1ULL] = t18.mField0[1ULL];
  t170[0ULL] = t18.mField2[0ULL];
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t168[0ULL], &t170[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t20[0ULL], &t21[0ULL]);
  t158[0] = b_efOut[0];
  Thermodynamic_Properties_Sensor_2P1_T = t158[0ULL];
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t168[0ULL], &t170[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t20[0ULL], &t21[0ULL]);
  t154[0] = c_efOut[0];
  Thermodynamic_Properties_Sensor_2P2_H = t154[0ULL];
  t158[0ULL] = X[43ULL];
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t158[0ULL],
    &t20[0ULL], &t21[0ULL]);
  t14 = d_efOut;
  tlu2_1d_linear_linear_value(&e_efOut[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t20[0ULL], &t21[0ULL]);
  t150_idx_0 = e_efOut[0];
  Simscape_Component_v_g_B = t150_idx_0;
  tlu2_1d_linear_linear_value(&f_efOut[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t20[0ULL], &t21[0ULL]);
  t150_idx_0 = f_efOut[0];
  if (X[44ULL] <= Simscape_Component_v_g_B) {
    Preheating_Thermodynamic_Properties_Sensor_2P1_T = X[44ULL] /
      (Simscape_Component_v_g_B == 0.0 ? 1.0E-16 : Simscape_Component_v_g_B) -
      1.0;
  } else if (X[44ULL] >= t150_idx_0) {
    Preheating_Thermodynamic_Properties_Sensor_2P1_T = (X[44ULL] - 4000.0) /
      (4000.0 - t150_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t150_idx_0) + 2.0;
  } else {
    t179 = t150_idx_0 - Simscape_Component_v_g_B;
    Preheating_Thermodynamic_Properties_Sensor_2P1_T = (X[44ULL] -
      Simscape_Component_v_g_B) / (t179 == 0.0 ? 1.0E-16 : t179);
  }

  t154[0ULL] = X[49ULL];
  tlu2_linear_linear_prelookup(&g_efOut.mField0[0ULL], &g_efOut.mField1[0ULL],
    &g_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t154[0ULL],
    &t20[0ULL], &t21[0ULL]);
  t12 = g_efOut;
  tlu2_1d_linear_linear_value(&h_efOut[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t20[0ULL], &t21[0ULL]);
  t150_idx_0 = h_efOut[0];
  Simscape_Component_v_g_B = t150_idx_0;
  tlu2_1d_linear_linear_value(&i_efOut[0ULL], &t12.mField0[0ULL], &t12.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t20[0ULL], &t21[0ULL]);
  t150_idx_0 = i_efOut[0];
  Simscape_Component_ideal_outlet_enthalpy = t150_idx_0;
  if (X[50ULL] <= Simscape_Component_v_g_B) {
    Thermodynamic_Properties_Sensor_2P3_H = X[50ULL] / (Simscape_Component_v_g_B
      == 0.0 ? 1.0E-16 : Simscape_Component_v_g_B) - 1.0;
  } else if (X[50ULL] >= t150_idx_0) {
    Thermodynamic_Properties_Sensor_2P3_H = (X[50ULL] - 4000.0) / (4000.0 -
      t150_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t150_idx_0) + 2.0;
  } else {
    t179 = t150_idx_0 - Simscape_Component_v_g_B;
    Thermodynamic_Properties_Sensor_2P3_H = (X[50ULL] - Simscape_Component_v_g_B)
      / (t179 == 0.0 ? 1.0E-16 : t179);
  }

  t154[0ULL] = X[53ULL];
  tlu2_linear_linear_prelookup(&j_efOut.mField0[0ULL], &j_efOut.mField1[0ULL],
    &j_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t154[0ULL],
    &t20[0ULL], &t21[0ULL]);
  t11 = j_efOut;
  tlu2_1d_linear_linear_value(&k_efOut[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t20[0ULL], &t21[0ULL]);
  t150_idx_0 = k_efOut[0];
  t179 = t150_idx_0;
  tlu2_1d_linear_linear_value(&l_efOut[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t20[0ULL], &t21[0ULL]);
  t150_idx_0 = l_efOut[0];
  if (X[54ULL] <= t179) {
    t178 = X[54ULL] / (t179 == 0.0 ? 1.0E-16 : t179) - 1.0;
  } else if (X[54ULL] >= t150_idx_0) {
    t178 = (X[54ULL] - 4000.0) / (4000.0 - t150_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t150_idx_0) + 2.0;
  } else {
    t189 = t150_idx_0 - t179;
    t178 = (X[54ULL] - t179) / (t189 == 0.0 ? 1.0E-16 : t189);
  }

  t154[0ULL] = X[79ULL];
  tlu2_linear_linear_prelookup(&m_efOut.mField0[0ULL], &m_efOut.mField1[0ULL],
    &m_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t154[0ULL],
    &t20[0ULL], &t21[0ULL]);
  t10 = m_efOut;
  tlu2_1d_linear_linear_value(&n_efOut[0ULL], &t10.mField0[0ULL], &t10.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t20[0ULL], &t21[0ULL]);
  t150_idx_0 = n_efOut[0];
  intrm_sf_mf_124 = t150_idx_0;
  tlu2_1d_linear_linear_value(&o_efOut[0ULL], &t10.mField0[0ULL], &t10.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t20[0ULL], &t21[0ULL]);
  t150_idx_0 = o_efOut[0];
  if (X[80ULL] <= intrm_sf_mf_124) {
    t179 = X[80ULL] / (intrm_sf_mf_124 == 0.0 ? 1.0E-16 : intrm_sf_mf_124) - 1.0;
  } else if (X[80ULL] >= t150_idx_0) {
    t179 = (X[80ULL] - 4000.0) / (4000.0 - t150_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t150_idx_0) + 2.0;
  } else {
    t194 = t150_idx_0 - intrm_sf_mf_124;
    t179 = (X[80ULL] - intrm_sf_mf_124) / (t194 == 0.0 ? 1.0E-16 : t194);
  }

  t154[0ULL] = Preheating_Thermodynamic_Properties_Sensor_2P1_T;
  t55[0] = 50ULL;
  tlu2_linear_linear_prelookup(&p_efOut.mField0[0ULL], &p_efOut.mField1[0ULL],
    &p_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t154[0ULL],
    &t55[0ULL], &t21[0ULL]);
  t8 = p_efOut;
  tlu2_2d_linear_linear_value(&q_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], &t14.mField0[0ULL], &t14.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t55[0ULL], &t20[0ULL], &t21[0ULL]);
  t150_idx_0 = q_efOut[0];
  Preheating_Thermodynamic_Properties_Sensor_2P1_T = t150_idx_0;
  t154[0ULL] = t179;
  tlu2_linear_linear_prelookup(&r_efOut.mField0[0ULL], &r_efOut.mField1[0ULL],
    &r_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t154[0ULL],
    &t55[0ULL], &t21[0ULL]);
  t8 = r_efOut;
  tlu2_2d_linear_linear_value(&s_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], &t10.mField0[0ULL], &t10.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t55[0ULL], &t20[0ULL], &t21[0ULL]);
  t150_idx_0 = s_efOut[0];
  intrm_sf_mf_124 = t150_idx_0;
  t189 = X[0ULL] - X[49ULL];
  if (X[97ULL] <= Thermodynamic_Properties_Sensor_2P1_T) {
    zc_int22 = X[97ULL] / (Thermodynamic_Properties_Sensor_2P1_T == 0.0 ?
      1.0E-16 : Thermodynamic_Properties_Sensor_2P1_T) - 1.0;
  } else if (X[97ULL] >= Thermodynamic_Properties_Sensor_2P2_H) {
    zc_int22 = (X[97ULL] - 4000.0) / (4000.0 -
      Thermodynamic_Properties_Sensor_2P2_H == 0.0 ? 1.0E-16 : 4000.0 -
      Thermodynamic_Properties_Sensor_2P2_H) + 2.0;
  } else {
    t179 = Thermodynamic_Properties_Sensor_2P2_H -
      Thermodynamic_Properties_Sensor_2P1_T;
    zc_int22 = (X[97ULL] - Thermodynamic_Properties_Sensor_2P1_T) / (t179 == 0.0
      ? 1.0E-16 : t179);
  }

  t154[0ULL] = zc_int22;
  tlu2_linear_linear_prelookup(&t_efOut.mField0[0ULL], &t_efOut.mField1[0ULL],
    &t_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t154[0ULL],
    &t55[0ULL], &t21[0ULL]);
  t17 = t_efOut;
  tlu2_2d_linear_linear_value(&u_efOut[0ULL], &t17.mField0[0ULL], &t17.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t55[0ULL], &t20[0ULL], &t21[0ULL]);
  t160[0] = u_efOut[0];
  zc_int22 = t160[0ULL];
  Simscape_Component_ideal_outlet_quality = t189 / 30.0;
  if (Simscape_Component_ideal_outlet_quality <= 0.0) {
    t192 = 0.0;
  } else {
    t192 = Simscape_Component_ideal_outlet_quality >= 1.0E+6 ? 1.0E+6 :
      Simscape_Component_ideal_outlet_quality;
  }

  Simscape_Component_ideal_outlet_quality = pmf_sqrt(t192) * 0.5;
  if (U_idx_3 <= 0.0) {
    t193 = 0.0;
  } else {
    t193 = U_idx_3 >= 1.0 ? 1.0 : U_idx_3;
  }

  t192 = Simscape_Component_ideal_outlet_quality * t193;
  t179 = fabs(t192);
  Simscape_Component_ideal_outlet_quality = t179 / 0.5;
  t194 = 0.8 - (Simscape_Component_ideal_outlet_quality - 0.8) *
    (Simscape_Component_ideal_outlet_quality - 0.8) * 0.2;
  Simscape_Component_ideal_outlet_quality = zc_int22 * X[0ULL] * 100.0 + X[97ULL];
  if (Simscape_Component_v_g_B <= Simscape_Component_v_g_B) {
    zc_int22 = Simscape_Component_v_g_B / (Simscape_Component_v_g_B == 0.0 ?
      1.0E-16 : Simscape_Component_v_g_B) - 1.0;
  } else if (Simscape_Component_v_g_B >=
             Simscape_Component_ideal_outlet_enthalpy) {
    zc_int22 = (Simscape_Component_v_g_B - 4000.0) / (4000.0 -
      Simscape_Component_ideal_outlet_enthalpy == 0.0 ? 1.0E-16 : 4000.0 -
      Simscape_Component_ideal_outlet_enthalpy) + 2.0;
  } else {
    t179 = Simscape_Component_ideal_outlet_enthalpy - Simscape_Component_v_g_B;
    zc_int22 = (Simscape_Component_v_g_B - Simscape_Component_v_g_B) / (t179 ==
      0.0 ? 1.0E-16 : t179);
  }

  t154[0ULL] = zc_int22;
  tlu2_linear_linear_prelookup(&v_efOut.mField0[0ULL], &v_efOut.mField1[0ULL],
    &v_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t154[0ULL],
    &t55[0ULL], &t21[0ULL]);
  t14 = v_efOut;
  tlu2_2d_linear_linear_value(&w_efOut[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t55[0ULL], &t20[0ULL], &t21[0ULL]);
  t150_idx_0 = w_efOut[0];
  t195 = X[49ULL] * t150_idx_0 * 100.0 + Simscape_Component_v_g_B;
  if (Simscape_Component_ideal_outlet_enthalpy <= Simscape_Component_v_g_B) {
    zc_int22 = Simscape_Component_ideal_outlet_enthalpy /
      (Simscape_Component_v_g_B == 0.0 ? 1.0E-16 : Simscape_Component_v_g_B) -
      1.0;
  } else if (Simscape_Component_ideal_outlet_enthalpy >=
             Simscape_Component_ideal_outlet_enthalpy) {
    zc_int22 = (Simscape_Component_ideal_outlet_enthalpy - 4000.0) / (4000.0 -
      Simscape_Component_ideal_outlet_enthalpy == 0.0 ? 1.0E-16 : 4000.0 -
      Simscape_Component_ideal_outlet_enthalpy) + 2.0;
  } else {
    t179 = Simscape_Component_ideal_outlet_enthalpy - Simscape_Component_v_g_B;
    zc_int22 = (Simscape_Component_ideal_outlet_enthalpy -
                Simscape_Component_v_g_B) / (t179 == 0.0 ? 1.0E-16 : t179);
  }

  t154[0ULL] = zc_int22;
  tlu2_linear_linear_prelookup(&x_efOut.mField0[0ULL], &x_efOut.mField1[0ULL],
    &x_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t154[0ULL],
    &t55[0ULL], &t21[0ULL]);
  t8 = x_efOut;
  tlu2_2d_linear_linear_value(&y_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t55[0ULL], &t20[0ULL], &t21[0ULL]);
  t150_idx_0 = y_efOut[0];
  zc_int22 = X[49ULL] * t150_idx_0 * 100.0 +
    Simscape_Component_ideal_outlet_enthalpy;
  tlu2_2d_linear_linear_value(&ab_efOut[0ULL], &t17.mField0[0ULL], &t17.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t55[0ULL], &t20[0ULL], &t21[0ULL]);
  t158[0] = ab_efOut[0];
  Simscape_Component_v_g_B = t158[0ULL];
  tlu2_2d_linear_linear_value(&bb_efOut[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t55[0ULL], &t20[0ULL], &t21[0ULL]);
  t150_idx_0 = bb_efOut[0];
  Simscape_Component_ideal_outlet_enthalpy = t150_idx_0;
  tlu2_2d_linear_linear_value(&cb_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t55[0ULL], &t20[0ULL], &t21[0ULL]);
  t150_idx_0 = cb_efOut[0];
  t179 = t150_idx_0 - Simscape_Component_ideal_outlet_enthalpy;
  Simscape_Component_ideal_outlet_enthalpy = (Simscape_Component_v_g_B -
    Simscape_Component_ideal_outlet_enthalpy) / (t179 == 0.0 ? 1.0E-16 : t179);
  if (Simscape_Component_ideal_outlet_enthalpy <= 0.0) {
    intrm_sf_mf_373 = 0.0;
  } else {
    intrm_sf_mf_373 = Simscape_Component_ideal_outlet_enthalpy >= 1.0 ? 1.0 :
      Simscape_Component_ideal_outlet_enthalpy;
  }

  Simscape_Component_ideal_outlet_enthalpy = (zc_int22 - t195) * intrm_sf_mf_373
    + t195;
  zc_int22 = Simscape_Component_ideal_outlet_quality -
    Simscape_Component_ideal_outlet_enthalpy;
  Simscape_Component_ideal_outlet_quality = intrm_sf_mf_373;
  t195 = t193;
  if (X[26ULL] < Thermodynamic_Properties_Sensor_2P1_T) {
    t193 = X[26ULL] / (Thermodynamic_Properties_Sensor_2P1_T == 0.0 ? 1.0E-16 :
                       Thermodynamic_Properties_Sensor_2P1_T) - 1.0;
  } else {
    t193 = 0.0;
  }

  if (X[27ULL] > Thermodynamic_Properties_Sensor_2P2_H) {
    intrm_sf_mf_373 = (X[27ULL] - 4000.0) / (4000.0 -
      Thermodynamic_Properties_Sensor_2P2_H == 0.0 ? 1.0E-16 : 4000.0 -
      Thermodynamic_Properties_Sensor_2P2_H) + 2.0;
  } else {
    intrm_sf_mf_373 = 1.0;
  }

  t154[0ULL] = t193;
  t94[0] = 25ULL;
  tlu2_linear_linear_prelookup(&db_efOut.mField0[0ULL], &db_efOut.mField1[0ULL],
    &db_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t154[0ULL],
    &t94[0ULL], &t21[0ULL]);
  t8 = db_efOut;
  tlu2_2d_linear_linear_value(&eb_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], &t168[0ULL], &t170[0ULL], ((_NeDynamicSystem*)(LC))->mField31, &t94
    [0ULL], &t20[0ULL], &t21[0ULL]);
  t150_idx_0 = eb_efOut[0];
  t193 = t150_idx_0;
  t154[0ULL] = intrm_sf_mf_373;
  tlu2_linear_linear_prelookup(&fb_efOut.mField0[0ULL], &fb_efOut.mField1[0ULL],
    &fb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t154[0ULL],
    &t94[0ULL], &t21[0ULL]);
  t8 = fb_efOut;
  tlu2_2d_linear_linear_value(&gb_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], &t168[0ULL], &t170[0ULL], ((_NeDynamicSystem*)(LC))->mField32, &t94
    [0ULL], &t20[0ULL], &t21[0ULL]);
  t150_idx_0 = gb_efOut[0];
  t179 = X[28ULL] * t193 + X[29ULL] * t150_idx_0;
  t193 = X[28ULL] * t193 / (t179 == 0.0 ? 1.0E-16 : t179);
  if (X[147ULL] <= Thermodynamic_Properties_Sensor_2P1_T) {
    intrm_sf_mf_373 = X[147ULL] / (Thermodynamic_Properties_Sensor_2P1_T == 0.0 ?
      1.0E-16 : Thermodynamic_Properties_Sensor_2P1_T) - 1.0;
  } else if (X[147ULL] >= Thermodynamic_Properties_Sensor_2P2_H) {
    intrm_sf_mf_373 = (X[147ULL] - 4000.0) / (4000.0 -
      Thermodynamic_Properties_Sensor_2P2_H == 0.0 ? 1.0E-16 : 4000.0 -
      Thermodynamic_Properties_Sensor_2P2_H) + 2.0;
  } else {
    t179 = Thermodynamic_Properties_Sensor_2P2_H -
      Thermodynamic_Properties_Sensor_2P1_T;
    intrm_sf_mf_373 = (X[147ULL] - Thermodynamic_Properties_Sensor_2P1_T) /
      (t179 == 0.0 ? 1.0E-16 : t179);
  }

  t154[0ULL] = intrm_sf_mf_373;
  tlu2_linear_linear_prelookup(&hb_efOut.mField0[0ULL], &hb_efOut.mField1[0ULL],
    &hb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t154[0ULL],
    &t55[0ULL], &t21[0ULL]);
  t14 = hb_efOut;
  tlu2_2d_linear_linear_value(&ib_efOut[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], &t168[0ULL], &t170[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t55
    [0ULL], &t20[0ULL], &t21[0ULL]);
  t154[0] = ib_efOut[0];
  t179 = -t154[0ULL];
  Thermodynamic_Properties_Sensor_2P1_T = -t179;
  t179 = -t160[0ULL];
  Thermodynamic_Properties_Sensor_2P2_H = X[0ULL] * -t179 * 100.0 + X[97ULL];
  t179 = -t158[0ULL];
  intrm_sf_mf_373 = -t179;
  t165[0ULL] = t17.mField0[0ULL];
  t165[1ULL] = t17.mField0[1ULL];
  t94[0ULL] = t17.mField2[0ULL];
  tlu2_2d_linear_linear_value(&jb_efOut[0ULL], &t165[0ULL], &t94[0ULL], &t168
    [0ULL], &t170[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t55[0ULL], &t20
    [0ULL], &t21[0ULL]);
  t158[0] = jb_efOut[0];
  t179 = -t158[0ULL];
  U_idx_3 = -t179;
  t160[0ULL] = Thermodynamic_Properties_Sensor_2P3_H;
  tlu2_linear_linear_prelookup(&kb_efOut.mField0[0ULL], &kb_efOut.mField1[0ULL],
    &kb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t160[0ULL],
    &t55[0ULL], &t21[0ULL]);
  t10 = kb_efOut;
  tlu2_2d_linear_linear_value(&lb_efOut[0ULL], &t10.mField0[0ULL], &t10.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t55[0ULL], &t20[0ULL], &t21[0ULL]);
  t158[0] = lb_efOut[0];
  t179 = -t158[0ULL];
  Thermodynamic_Properties_Sensor_2P3_H = X[49ULL] * -t179 * 100.0 + X[50ULL];
  tlu2_2d_linear_linear_value(&mb_efOut[0ULL], &t10.mField0[0ULL], &t10.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t55[0ULL], &t20[0ULL], &t21[0ULL]);
  t158[0] = mb_efOut[0];
  t179 = -t158[0ULL];
  t150_idx_0 = -t179;
  tlu2_2d_linear_linear_value(&nb_efOut[0ULL], &t10.mField0[0ULL], &t10.mField2
    [0ULL], &t12.mField0[0ULL], &t12.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t55[0ULL], &t20[0ULL], &t21[0ULL]);
  t158[0] = nb_efOut[0];
  t179 = -t158[0ULL];
  t199 = -t179;
  t160[0ULL] = t178;
  tlu2_linear_linear_prelookup(&ob_efOut.mField0[0ULL], &ob_efOut.mField1[0ULL],
    &ob_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t160[0ULL],
    &t55[0ULL], &t21[0ULL]);
  t8 = ob_efOut;
  tlu2_2d_linear_linear_value(&pb_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t55[0ULL], &t20[0ULL], &t21[0ULL]);
  t160[0] = pb_efOut[0];
  t179 = -t160[0ULL];
  t178 = X[53ULL] * -t179 * 100.0 + X[54ULL];
  tlu2_2d_linear_linear_value(&qb_efOut[0ULL], &t8.mField0[0ULL], &t8.mField2
    [0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t55[0ULL], &t20[0ULL], &t21[0ULL]);
  t160[0] = qb_efOut[0];
  t179 = -t160[0ULL];
  t192 = ((real_T)(M[56ULL] != 0) * 2.0 - 1.0) * t192 / 0.5;
  if (t194 <= 0.0) {
    t192 = 0.0;
  } else {
    t192 = t194 >= 1.0 ? 1.0 : 0.8 - (t192 - 0.8) * (t192 - 0.8) * 0.2;
  }

  zc_int22 = t189 > 0.01 ? zc_int22 * t192 : 0.0;
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
  out.mX[19] = t192;
  out.mX[20] = zc_int22;
  out.mX[21] = Simscape_Component_ideal_outlet_enthalpy;
  out.mX[22] = Simscape_Component_ideal_outlet_quality;
  out.mX[23] = Simscape_Component_v_g_B * 0.001;
  out.mX[24] = X[56ULL];
  out.mX[25] = t195;
  out.mX[26] = ((real_T)(M[63ULL] != 0) * 2.0 - 1.0) * X[56ULL] * zc_int22 *
    0.001;
  out.mX[27] = t193;
  out.mX[28] = Thermodynamic_Properties_Sensor_2P1_T - 273.15;
  out.mX[29] = Thermodynamic_Properties_Sensor_2P2_H;
  out.mX[30] = intrm_sf_mf_373 * 0.001;
  out.mX[31] = U_idx_3 - 273.15;
  out.mX[32] = Thermodynamic_Properties_Sensor_2P3_H;
  out.mX[33] = t150_idx_0 * 0.001;
  out.mX[34] = t199 - 273.15;
  out.mX[35] = t178;
  out.mX[36] = -t179 - 273.15;
  out.mX[37] = Preheating_Thermodynamic_Properties_Sensor_2P1_T - 273.15;
  out.mX[38] = X[179ULL];
  out.mX[39] = X[180ULL];
  out.mX[40] = X[181ULL];
  out.mX[41] = X[182ULL];
  (void)LC;
  (void)t253;
  return 0;
}
