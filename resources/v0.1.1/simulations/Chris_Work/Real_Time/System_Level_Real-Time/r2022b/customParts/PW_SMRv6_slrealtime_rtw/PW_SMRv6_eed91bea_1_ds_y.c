/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv6/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_sys_struct.h"
#include "PW_SMRv6_eed91bea_1_ds_y.h"
#include "PW_SMRv6_eed91bea_1_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_externals.h"
#include "PW_SMRv6_eed91bea_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv6_eed91bea_1_ds_y(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t102, NeDsMethodOutput *t103)
{
  ETTS0 d_efOut;
  ETTS0 efOut;
  ETTS0 g_efOut;
  ETTS0 j_efOut;
  ETTS0 l_efOut;
  ETTS0 n_efOut;
  ETTS0 p_efOut;
  ETTS0 r_efOut;
  ETTS0 t2;
  ETTS0 t4;
  ETTS0 t6;
  ETTS0 t7;
  PmRealVector out;
  real_T X[222];
  real_T b_efOut[1];
  real_T c_efOut[1];
  real_T e_efOut[1];
  real_T f_efOut[1];
  real_T h_efOut[1];
  real_T i_efOut[1];
  real_T k_efOut[1];
  real_T m_efOut[1];
  real_T o_efOut[1];
  real_T q_efOut[1];
  real_T s_efOut[1];
  real_T t70[1];
  real_T Controlled_Heat_Flow_Rate_Source_Q;
  real_T Mass_Energy_Flow_Rate_Sensor_2P1_M;
  real_T Subsystem3_Conn2;
  real_T Subsystem3_PS_Subtract_I2;
  real_T U_idx_0;
  real_T U_idx_2;
  real_T t69_idx_0;
  real_T t75;
  real_T t80;
  real_T t82;
  real_T zc_int21;
  size_t t10[1];
  size_t t42[1];
  size_t t9[1];
  int32_T M[163];
  int32_T b;
  for (b = 0; b < 163; b++) {
    M[b] = t102->mM.mX[b];
  }

  U_idx_0 = t102->mU.mX[0];
  U_idx_2 = t102->mU.mX[2];
  for (b = 0; b < 222; b++) {
    X[b] = t102->mX.mX[b];
  }

  out = t103->mY;
  t70[0ULL] = X[0ULL];
  t9[0] = 100ULL;
  t10[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t70[0ULL], &t9
    [0ULL], &t10[0ULL]);
  t6 = efOut;
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t6.mField0[0ULL], &t6.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t9[0ULL], &t10[0ULL]);
  t69_idx_0 = b_efOut[0];
  Subsystem3_Conn2 = t69_idx_0;
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t6.mField0[0ULL], &t6.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t9[0ULL], &t10[0ULL]);
  t69_idx_0 = c_efOut[0];
  Subsystem3_PS_Subtract_I2 = t69_idx_0;
  t70[0ULL] = X[51ULL];
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t70[0ULL], &t9
    [0ULL], &t10[0ULL]);
  t7 = d_efOut;
  tlu2_1d_linear_linear_value(&e_efOut[0ULL], &t7.mField0[0ULL], &t7.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t9[0ULL], &t10[0ULL]);
  t69_idx_0 = e_efOut[0];
  Controlled_Heat_Flow_Rate_Source_Q = t69_idx_0;
  tlu2_1d_linear_linear_value(&f_efOut[0ULL], &t7.mField0[0ULL], &t7.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t9[0ULL], &t10[0ULL]);
  t69_idx_0 = f_efOut[0];
  if (X[52ULL] <= Controlled_Heat_Flow_Rate_Source_Q) {
    Controlled_Heat_Flow_Rate_Source_Q = X[52ULL] /
      (Controlled_Heat_Flow_Rate_Source_Q == 0.0 ? 1.0E-16 :
       Controlled_Heat_Flow_Rate_Source_Q) - 1.0;
  } else if (X[52ULL] >= t69_idx_0) {
    Controlled_Heat_Flow_Rate_Source_Q = (X[52ULL] - 4000.0) / (4000.0 -
      t69_idx_0 == 0.0 ? 1.0E-16 : 4000.0 - t69_idx_0) + 2.0;
  } else {
    t75 = t69_idx_0 - Controlled_Heat_Flow_Rate_Source_Q;
    Controlled_Heat_Flow_Rate_Source_Q = (X[52ULL] -
      Controlled_Heat_Flow_Rate_Source_Q) / (t75 == 0.0 ? 1.0E-16 : t75);
  }

  Mass_Energy_Flow_Rate_Sensor_2P1_M = -X[128ULL] + X[129ULL];
  zc_int21 = X[57ULL] / (X[126ULL] == 0.0 ? 1.0E-16 : X[126ULL]);
  if (zc_int21 <= 0.0) {
    t80 = 0.0;
  } else {
    t80 = zc_int21 >= 1.0 ? 1.0 : zc_int21;
  }

  t70[0ULL] = X[126ULL];
  tlu2_linear_linear_prelookup(&g_efOut.mField0[0ULL], &g_efOut.mField1[0ULL],
    &g_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t70[0ULL], &t9
    [0ULL], &t10[0ULL]);
  t4 = g_efOut;
  tlu2_1d_linear_linear_value(&h_efOut[0ULL], &t4.mField0[0ULL], &t4.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t9[0ULL], &t10[0ULL]);
  t69_idx_0 = h_efOut[0];
  zc_int21 = t69_idx_0;
  tlu2_1d_linear_linear_value(&i_efOut[0ULL], &t4.mField0[0ULL], &t4.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t9[0ULL], &t10[0ULL]);
  t69_idx_0 = i_efOut[0];
  if (X[127ULL] <= zc_int21) {
    t82 = X[127ULL] / (zc_int21 == 0.0 ? 1.0E-16 : zc_int21) - 1.0;
  } else if (X[127ULL] >= t69_idx_0) {
    t82 = (X[127ULL] - 4000.0) / (4000.0 - t69_idx_0 == 0.0 ? 1.0E-16 : 4000.0 -
      t69_idx_0) + 2.0;
  } else {
    t75 = t69_idx_0 - zc_int21;
    t82 = (X[127ULL] - zc_int21) / (t75 == 0.0 ? 1.0E-16 : t75);
  }

  zc_int21 = X[126ULL] - X[57ULL] > 0.01 ? (1.0 - t80) * 500.0 /
    0.7142857142857143 * 0.75 : 0.0;
  if (X[26ULL] < Subsystem3_Conn2) {
    t80 = X[26ULL] / (Subsystem3_Conn2 == 0.0 ? 1.0E-16 : Subsystem3_Conn2) -
      1.0;
  } else {
    t80 = 0.0;
  }

  if (X[27ULL] > Subsystem3_PS_Subtract_I2) {
    t75 = (X[27ULL] - 4000.0) / (4000.0 - Subsystem3_PS_Subtract_I2 == 0.0 ?
      1.0E-16 : 4000.0 - Subsystem3_PS_Subtract_I2) + 2.0;
  } else {
    t75 = 1.0;
  }

  t70[0ULL] = t80;
  t42[0] = 25ULL;
  tlu2_linear_linear_prelookup(&j_efOut.mField0[0ULL], &j_efOut.mField1[0ULL],
    &j_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t70[0ULL],
    &t42[0ULL], &t10[0ULL]);
  t2 = j_efOut;
  tlu2_2d_linear_linear_value(&k_efOut[0ULL], &t2.mField0[0ULL], &t2.mField2
    [0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t42[0ULL], &t9[0ULL], &t10[0ULL]);
  t69_idx_0 = k_efOut[0];
  t80 = t69_idx_0;
  t70[0ULL] = t75;
  tlu2_linear_linear_prelookup(&l_efOut.mField0[0ULL], &l_efOut.mField1[0ULL],
    &l_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t70[0ULL],
    &t42[0ULL], &t10[0ULL]);
  t2 = l_efOut;
  tlu2_2d_linear_linear_value(&m_efOut[0ULL], &t2.mField0[0ULL], &t2.mField2
    [0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField31, &t42[0ULL], &t9[0ULL], &t10[0ULL]);
  t69_idx_0 = m_efOut[0];
  t75 = X[28ULL] * t80 + X[29ULL] * t69_idx_0;
  t80 = X[28ULL] * t80 / (t75 == 0.0 ? 1.0E-16 : t75);
  if (X[188ULL] <= Subsystem3_Conn2) {
    t75 = X[188ULL] / (Subsystem3_Conn2 == 0.0 ? 1.0E-16 : Subsystem3_Conn2) -
      1.0;
  } else if (X[188ULL] >= Subsystem3_PS_Subtract_I2) {
    t75 = (X[188ULL] - 4000.0) / (4000.0 - Subsystem3_PS_Subtract_I2 == 0.0 ?
      1.0E-16 : 4000.0 - Subsystem3_PS_Subtract_I2) + 2.0;
  } else {
    t75 = Subsystem3_PS_Subtract_I2 - Subsystem3_Conn2;
    t75 = (X[188ULL] - Subsystem3_Conn2) / (t75 == 0.0 ? 1.0E-16 : t75);
  }

  t70[0ULL] = Controlled_Heat_Flow_Rate_Source_Q;
  t42[0] = 50ULL;
  tlu2_linear_linear_prelookup(&n_efOut.mField0[0ULL], &n_efOut.mField1[0ULL],
    &n_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t70[0ULL],
    &t42[0ULL], &t10[0ULL]);
  t2 = n_efOut;
  tlu2_2d_linear_linear_value(&o_efOut[0ULL], &t2.mField0[0ULL], &t2.mField2
    [0ULL], &t7.mField0[0ULL], &t7.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t42[0ULL], &t9[0ULL], &t10[0ULL]);
  t69_idx_0 = o_efOut[0];
  Subsystem3_PS_Subtract_I2 = t69_idx_0;
  t70[0ULL] = t75;
  tlu2_linear_linear_prelookup(&p_efOut.mField0[0ULL], &p_efOut.mField1[0ULL],
    &p_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t70[0ULL],
    &t42[0ULL], &t10[0ULL]);
  t2 = p_efOut;
  tlu2_2d_linear_linear_value(&q_efOut[0ULL], &t2.mField0[0ULL], &t2.mField2
    [0ULL], &t6.mField0[0ULL], &t6.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t42[0ULL], &t9[0ULL], &t10[0ULL]);
  t69_idx_0 = q_efOut[0];
  t70[0ULL] = t82;
  tlu2_linear_linear_prelookup(&r_efOut.mField0[0ULL], &r_efOut.mField1[0ULL],
    &r_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t70[0ULL],
    &t42[0ULL], &t10[0ULL]);
  t2 = r_efOut;
  tlu2_2d_linear_linear_value(&s_efOut[0ULL], &t2.mField0[0ULL], &t2.mField2
    [0ULL], &t4.mField0[0ULL], &t4.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t42[0ULL], &t9[0ULL], &t10[0ULL]);
  t70[0] = s_efOut[0];
  t75 = -t70[0ULL];
  out.mX[0] = U_idx_0 * 1000.0 * 1000.0;
  out.mX[1] = Mass_Energy_Flow_Rate_Sensor_2P1_M;
  out.mX[2] = (-X[114ULL] - X[129ULL]) + X[128ULL];
  out.mX[3] = X[92ULL];
  out.mX[4] = X[126ULL] * 0.1;
  out.mX[5] = X[127ULL];
  out.mX[6] = X[57ULL] * 0.1;
  out.mX[7] = X[58ULL];
  out.mX[8] = X[87ULL] * 0.1;
  out.mX[9] = X[149ULL] - 273.15;
  out.mX[10] = zc_int21;
  out.mX[11] = ((real_T)(M[141ULL] != 0) * 2.0 - 1.0) *
    Mass_Energy_Flow_Rate_Sensor_2P1_M * zc_int21;
  out.mX[12] = t80;
  out.mX[13] = U_idx_2 * 24.0;
  out.mX[14] = (1.0 - U_idx_2) * 24.0;
  out.mX[15] = -X[213ULL] - 0.0025;
  out.mX[16] = t69_idx_0 - 273.15;
  out.mX[17] = -t75;
  out.mX[18] = Subsystem3_PS_Subtract_I2 - 273.15;
  out.mX[19] = X[215ULL];
  out.mX[20] = X[214ULL];
  (void)LC;
  (void)t103;
  return 0;
}
