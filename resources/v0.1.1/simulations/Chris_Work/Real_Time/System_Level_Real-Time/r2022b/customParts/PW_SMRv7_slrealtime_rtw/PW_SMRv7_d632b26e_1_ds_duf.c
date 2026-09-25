/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv7/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv7_d632b26e_1_ds_sys_struct.h"
#include "PW_SMRv7_d632b26e_1_ds_duf.h"
#include "PW_SMRv7_d632b26e_1_ds.h"
#include "PW_SMRv7_d632b26e_1_ds_externals.h"
#include "PW_SMRv7_d632b26e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv7_d632b26e_1_ds_duf(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t223, NeDsMethodOutput *t224)
{
  ETTS0 bb_efOut;
  ETTS0 d_efOut;
  ETTS0 db_efOut;
  ETTS0 efOut;
  ETTS0 fb_efOut;
  ETTS0 g_efOut;
  ETTS0 hb_efOut;
  ETTS0 j_efOut;
  ETTS0 jb_efOut;
  ETTS0 k_efOut;
  ETTS0 lb_efOut;
  ETTS0 m_efOut;
  ETTS0 p_efOut;
  ETTS0 r_efOut;
  ETTS0 t11;
  ETTS0 t14;
  ETTS0 t15;
  ETTS0 t16;
  ETTS0 t5;
  ETTS0 t7;
  ETTS0 t_efOut;
  ETTS0 v_efOut;
  ETTS0 x_efOut;
  PmRealVector out;
  real_T X[183];
  real_T ab_efOut[1];
  real_T b_efOut[1];
  real_T c_efOut[1];
  real_T cb_efOut[1];
  real_T e_efOut[1];
  real_T eb_efOut[1];
  real_T f_efOut[1];
  real_T gb_efOut[1];
  real_T h_efOut[1];
  real_T i_efOut[1];
  real_T ib_efOut[1];
  real_T kb_efOut[1];
  real_T l_efOut[1];
  real_T mb_efOut[1];
  real_T n_efOut[1];
  real_T nb_efOut[1];
  real_T o_efOut[1];
  real_T ob_efOut[1];
  real_T pb_efOut[1];
  real_T q_efOut[1];
  real_T s_efOut[1];
  real_T t154[1];
  real_T u_efOut[1];
  real_T w_efOut[1];
  real_T y_efOut[1];
  real_T Fixed_Displacement_Pump_2P_p_diff;
  real_T Fixed_Displacement_Pump_2P_v_avg;
  real_T Simscape_Component_Dp;
  real_T Simscape_Component_h_g_B;
  real_T U_idx_1;
  real_T U_idx_3;
  real_T intermediate_der1673;
  real_T intermediate_der2094;
  real_T intermediate_der5255;
  real_T intrm_sf_mf_276;
  real_T intrm_sf_mf_278;
  real_T t150_idx_0;
  real_T t164;
  real_T t170;
  real_T t211;
  real_T t219;
  real_T t220;
  real_T t221;
  real_T t222;
  size_t t18[1];
  size_t t19[1];
  size_t t39[1];
  size_t t86[1];
  int32_T M[129];
  int32_T b;
  for (b = 0; b < 129; b++) {
    M[b] = t223->mM.mX[b];
  }

  U_idx_1 = t223->mU.mX[1];
  U_idx_3 = t223->mU.mX[3];
  for (b = 0; b < 183; b++) {
    X[b] = t223->mX.mX[b];
  }

  out = t224->mDUF;
  t154[0ULL] = X[0ULL];
  t18[0] = 100ULL;
  t19[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t154[0ULL], &t18
    [0ULL], &t19[0ULL]);
  t16 = efOut;
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t16.mField0[0ULL], &t16.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t18[0ULL], &t19[0ULL]);
  t150_idx_0 = b_efOut[0];
  t222 = t150_idx_0;
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t16.mField0[0ULL], &t16.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t18[0ULL], &t19[0ULL]);
  t150_idx_0 = c_efOut[0];
  t164 = t150_idx_0;
  t154[0ULL] = X[49ULL];
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t154[0ULL],
    &t18[0ULL], &t19[0ULL]);
  t15 = d_efOut;
  tlu2_1d_linear_linear_value(&e_efOut[0ULL], &t15.mField0[0ULL], &t15.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t18[0ULL], &t19[0ULL]);
  t150_idx_0 = e_efOut[0];
  Simscape_Component_h_g_B = t150_idx_0;
  tlu2_1d_linear_linear_value(&f_efOut[0ULL], &t15.mField0[0ULL], &t15.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t18[0ULL], &t19[0ULL]);
  t150_idx_0 = f_efOut[0];
  intrm_sf_mf_278 = t150_idx_0;
  t154[0ULL] = X[53ULL];
  tlu2_linear_linear_prelookup(&g_efOut.mField0[0ULL], &g_efOut.mField1[0ULL],
    &g_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t154[0ULL],
    &t18[0ULL], &t19[0ULL]);
  t14 = g_efOut;
  tlu2_1d_linear_linear_value(&h_efOut[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t18[0ULL], &t19[0ULL]);
  t150_idx_0 = h_efOut[0];
  Fixed_Displacement_Pump_2P_v_avg = t150_idx_0;
  tlu2_1d_linear_linear_value(&i_efOut[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t18[0ULL], &t19[0ULL]);
  t150_idx_0 = i_efOut[0];
  intermediate_der5255 = t150_idx_0;
  t154[0] = 0.5;
  t39[0] = 50ULL;
  tlu2_linear_linear_prelookup(&j_efOut.mField0[0ULL], &j_efOut.mField1[0ULL],
    &j_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t154[0ULL],
    &t39[0ULL], &t19[0ULL]);
  t7 = j_efOut;
  t154[0ULL] = (X[53ULL] + X[79ULL]) / 2.0;
  tlu2_linear_linear_prelookup(&k_efOut.mField0[0ULL], &k_efOut.mField1[0ULL],
    &k_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t154[0ULL],
    &t18[0ULL], &t19[0ULL]);
  t5 = k_efOut;
  tlu2_2d_linear_linear_value(&l_efOut[0ULL], &t7.mField0[0ULL], &t7.mField2
    [0ULL], &t5.mField0[0ULL], &t5.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t39[0ULL], &t18[0ULL], &t19[0ULL]);
  t150_idx_0 = l_efOut[0];
  t221 = 1.0000000000000001E-7 / (t150_idx_0 == 0.0 ? 1.0E-16 : t150_idx_0) *
    4.1209000000000006E-6 / 2.0;
  t154[0ULL] = X[79ULL];
  tlu2_linear_linear_prelookup(&m_efOut.mField0[0ULL], &m_efOut.mField1[0ULL],
    &m_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t154[0ULL],
    &t18[0ULL], &t19[0ULL]);
  t11 = m_efOut;
  tlu2_1d_linear_linear_value(&n_efOut[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t18[0ULL], &t19[0ULL]);
  t150_idx_0 = n_efOut[0];
  intrm_sf_mf_276 = t150_idx_0;
  tlu2_1d_linear_linear_value(&o_efOut[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t18[0ULL], &t19[0ULL]);
  t150_idx_0 = o_efOut[0];
  intermediate_der1673 = t150_idx_0;
  Fixed_Displacement_Pump_2P_p_diff = X[79ULL] - X[53ULL];
  if (X[83ULL] <= Fixed_Displacement_Pump_2P_v_avg) {
    Simscape_Component_Dp = X[83ULL] / (Fixed_Displacement_Pump_2P_v_avg == 0.0 ?
      1.0E-16 : Fixed_Displacement_Pump_2P_v_avg) - 1.0;
  } else if (X[83ULL] >= intermediate_der5255) {
    Simscape_Component_Dp = (X[83ULL] - 4000.0) / (4000.0 - intermediate_der5255
      == 0.0 ? 1.0E-16 : 4000.0 - intermediate_der5255) + 2.0;
  } else {
    t150_idx_0 = intermediate_der5255 - Fixed_Displacement_Pump_2P_v_avg;
    Simscape_Component_Dp = (X[83ULL] - Fixed_Displacement_Pump_2P_v_avg) /
      (t150_idx_0 == 0.0 ? 1.0E-16 : t150_idx_0);
  }

  t154[0ULL] = Simscape_Component_Dp;
  tlu2_linear_linear_prelookup(&p_efOut.mField0[0ULL], &p_efOut.mField1[0ULL],
    &p_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t154[0ULL],
    &t39[0ULL], &t19[0ULL]);
  t5 = p_efOut;
  tlu2_2d_linear_linear_value(&q_efOut[0ULL], &t5.mField0[0ULL], &t5.mField2
    [0ULL], &t14.mField0[0ULL], &t14.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t39[0ULL], &t18[0ULL], &t19[0ULL]);
  t150_idx_0 = q_efOut[0];
  Simscape_Component_Dp = t150_idx_0;
  if (X[84ULL] <= intrm_sf_mf_276) {
    t220 = X[84ULL] / (intrm_sf_mf_276 == 0.0 ? 1.0E-16 : intrm_sf_mf_276) - 1.0;
  } else if (X[84ULL] >= intermediate_der1673) {
    t220 = (X[84ULL] - 4000.0) / (4000.0 - intermediate_der1673 == 0.0 ? 1.0E-16
      : 4000.0 - intermediate_der1673) + 2.0;
  } else {
    t211 = intermediate_der1673 - intrm_sf_mf_276;
    t220 = (X[84ULL] - intrm_sf_mf_276) / (t211 == 0.0 ? 1.0E-16 : t211);
  }

  t154[0ULL] = t220;
  tlu2_linear_linear_prelookup(&r_efOut.mField0[0ULL], &r_efOut.mField1[0ULL],
    &r_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t154[0ULL],
    &t39[0ULL], &t19[0ULL]);
  t5 = r_efOut;
  tlu2_2d_linear_linear_value(&s_efOut[0ULL], &t5.mField0[0ULL], &t5.mField2
    [0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t39[0ULL], &t18[0ULL], &t19[0ULL]);
  t150_idx_0 = s_efOut[0];
  t220 = t150_idx_0;
  if (X[85ULL] <= Fixed_Displacement_Pump_2P_v_avg) {
    intermediate_der2094 = X[85ULL] / (Fixed_Displacement_Pump_2P_v_avg == 0.0 ?
      1.0E-16 : Fixed_Displacement_Pump_2P_v_avg) - 1.0;
  } else if (X[85ULL] >= intermediate_der5255) {
    intermediate_der2094 = (X[85ULL] - 4000.0) / (4000.0 - intermediate_der5255 ==
      0.0 ? 1.0E-16 : 4000.0 - intermediate_der5255) + 2.0;
  } else {
    t211 = intermediate_der5255 - Fixed_Displacement_Pump_2P_v_avg;
    intermediate_der2094 = (X[85ULL] - Fixed_Displacement_Pump_2P_v_avg) / (t211
      == 0.0 ? 1.0E-16 : t211);
  }

  t154[0ULL] = intermediate_der2094;
  tlu2_linear_linear_prelookup(&t_efOut.mField0[0ULL], &t_efOut.mField1[0ULL],
    &t_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t154[0ULL],
    &t39[0ULL], &t19[0ULL]);
  t5 = t_efOut;
  tlu2_2d_linear_linear_value(&u_efOut[0ULL], &t5.mField0[0ULL], &t5.mField2
    [0ULL], &t14.mField0[0ULL], &t14.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t39[0ULL], &t18[0ULL], &t19[0ULL]);
  t150_idx_0 = u_efOut[0];
  Fixed_Displacement_Pump_2P_v_avg = t150_idx_0;
  if (X[86ULL] <= intrm_sf_mf_276) {
    intermediate_der5255 = X[86ULL] / (intrm_sf_mf_276 == 0.0 ? 1.0E-16 :
      intrm_sf_mf_276) - 1.0;
  } else if (X[86ULL] >= intermediate_der1673) {
    intermediate_der5255 = (X[86ULL] - 4000.0) / (4000.0 - intermediate_der1673 ==
      0.0 ? 1.0E-16 : 4000.0 - intermediate_der1673) + 2.0;
  } else {
    t211 = intermediate_der1673 - intrm_sf_mf_276;
    intermediate_der5255 = (X[86ULL] - intrm_sf_mf_276) / (t211 == 0.0 ? 1.0E-16
      : t211);
  }

  t154[0ULL] = intermediate_der5255;
  tlu2_linear_linear_prelookup(&v_efOut.mField0[0ULL], &v_efOut.mField1[0ULL],
    &v_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t154[0ULL],
    &t39[0ULL], &t19[0ULL]);
  t7 = v_efOut;
  tlu2_2d_linear_linear_value(&w_efOut[0ULL], &t7.mField0[0ULL], &t7.mField2
    [0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t39[0ULL], &t18[0ULL], &t19[0ULL]);
  t150_idx_0 = w_efOut[0];
  intrm_sf_mf_276 = pmf_sqrt(t221 * 400000.0 + X[57ULL] * X[57ULL]);
  Fixed_Displacement_Pump_2P_v_avg = (t220 + Fixed_Displacement_Pump_2P_v_avg) /
    2.0;
  Fixed_Displacement_Pump_2P_v_avg = (-X[57ULL] / (intrm_sf_mf_276 == 0.0 ?
    1.0E-16 : intrm_sf_mf_276) + 1.0) * ((Simscape_Component_Dp + t150_idx_0) /
    2.0) / 2.0 + (1.0 - -X[57ULL] / (intrm_sf_mf_276 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_276)) * Fixed_Displacement_Pump_2P_v_avg / 2.0;
  t154[0ULL] = X[21ULL];
  tlu2_linear_linear_prelookup(&x_efOut.mField0[0ULL], &x_efOut.mField1[0ULL],
    &x_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t154[0ULL],
    &t18[0ULL], &t19[0ULL]);
  t11 = x_efOut;
  tlu2_1d_linear_linear_value(&y_efOut[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField3, &t18[0ULL], &t19[0ULL]);
  t150_idx_0 = y_efOut[0];
  intermediate_der5255 = t150_idx_0;
  tlu2_1d_linear_linear_value(&ab_efOut[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], ((_NeDynamicSystem*)(LC))->mField4, &t18[0ULL], &t19[0ULL]);
  t150_idx_0 = ab_efOut[0];
  if (X[22ULL] <= intermediate_der5255) {
    intrm_sf_mf_276 = X[22ULL] / (intermediate_der5255 == 0.0 ? 1.0E-16 :
      intermediate_der5255) - 1.0;
  } else if (X[22ULL] >= t150_idx_0) {
    intrm_sf_mf_276 = (X[22ULL] - 4000.0) / (4000.0 - t150_idx_0 == 0.0 ?
      1.0E-16 : 4000.0 - t150_idx_0) + 2.0;
  } else {
    t211 = t150_idx_0 - intermediate_der5255;
    intrm_sf_mf_276 = (X[22ULL] - intermediate_der5255) / (t211 == 0.0 ? 1.0E-16
      : t211);
  }

  t154[0ULL] = intrm_sf_mf_276;
  t86[0] = 25ULL;
  tlu2_linear_linear_prelookup(&bb_efOut.mField0[0ULL], &bb_efOut.mField1[0ULL],
    &bb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t154[0ULL],
    &t86[0ULL], &t19[0ULL]);
  t5 = bb_efOut;
  tlu2_2d_linear_linear_value(&cb_efOut[0ULL], &t5.mField0[0ULL], &t5.mField2
    [0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField23, &t86[0ULL], &t18[0ULL], &t19[0ULL]);
  t150_idx_0 = cb_efOut[0];
  intermediate_der5255 = t150_idx_0;
  t154[0ULL] = intrm_sf_mf_276;
  tlu2_linear_linear_prelookup(&db_efOut.mField0[0ULL], &db_efOut.mField1[0ULL],
    &db_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField27, &t154[0ULL],
    &t39[0ULL], &t19[0ULL]);
  t7 = db_efOut;
  tlu2_2d_linear_linear_value(&eb_efOut[0ULL], &t7.mField0[0ULL], &t7.mField2
    [0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField28, &t39[0ULL], &t18[0ULL], &t19[0ULL]);
  t150_idx_0 = eb_efOut[0];
  t221 = t150_idx_0;
  t154[0ULL] = intrm_sf_mf_276;
  tlu2_linear_linear_prelookup(&fb_efOut.mField0[0ULL], &fb_efOut.mField1[0ULL],
    &fb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t154[0ULL],
    &t86[0ULL], &t19[0ULL]);
  t14 = fb_efOut;
  tlu2_2d_linear_linear_value(&gb_efOut[0ULL], &t14.mField0[0ULL], &t14.mField2
    [0ULL], &t11.mField0[0ULL], &t11.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField24, &t86[0ULL], &t18[0ULL], &t19[0ULL]);
  t150_idx_0 = gb_efOut[0];
  intermediate_der1673 = t150_idx_0;
  Simscape_Component_Dp = X[0ULL] - X[49ULL];
  if (X[97ULL] <= t222) {
    t220 = X[97ULL] / (t222 == 0.0 ? 1.0E-16 : t222) - 1.0;
  } else if (X[97ULL] >= t164) {
    t220 = (X[97ULL] - 4000.0) / (4000.0 - t164 == 0.0 ? 1.0E-16 : 4000.0 - t164)
      + 2.0;
  } else {
    t211 = t164 - t222;
    t220 = (X[97ULL] - t222) / (t211 == 0.0 ? 1.0E-16 : t211);
  }

  t154[0ULL] = t220;
  tlu2_linear_linear_prelookup(&hb_efOut.mField0[0ULL], &hb_efOut.mField1[0ULL],
    &hb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t154[0ULL],
    &t39[0ULL], &t19[0ULL]);
  t5 = hb_efOut;
  tlu2_2d_linear_linear_value(&ib_efOut[0ULL], &t5.mField0[0ULL], &t5.mField2
    [0ULL], &t16.mField0[0ULL], &t16.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t39[0ULL], &t18[0ULL], &t19[0ULL]);
  t150_idx_0 = ib_efOut[0];
  t164 = Simscape_Component_Dp / 30.0;
  if (t164 <= 0.0) {
    t220 = 0.0;
  } else {
    t220 = t164 >= 1.0E+6 ? 1.0E+6 : t164;
  }

  t164 = pmf_sqrt(t220) * 0.5;
  if (U_idx_3 <= 0.0) {
    intermediate_der2094 = 0.0;
  } else {
    intermediate_der2094 = U_idx_3 >= 1.0 ? 1.0 : U_idx_3;
  }

  t219 = t164 * intermediate_der2094;
  t211 = fabs(t219);
  intermediate_der2094 = t211 / 0.5;
  t170 = 0.8 - (intermediate_der2094 - 0.8) * (intermediate_der2094 - 0.8) * 0.2;
  intermediate_der2094 = t150_idx_0 * X[0ULL] * 100.0 + X[97ULL];
  if (Simscape_Component_h_g_B <= Simscape_Component_h_g_B) {
    t222 = Simscape_Component_h_g_B / (Simscape_Component_h_g_B == 0.0 ? 1.0E-16
      : Simscape_Component_h_g_B) - 1.0;
  } else if (Simscape_Component_h_g_B >= intrm_sf_mf_278) {
    t222 = (Simscape_Component_h_g_B - 4000.0) / (4000.0 - intrm_sf_mf_278 ==
      0.0 ? 1.0E-16 : 4000.0 - intrm_sf_mf_278) + 2.0;
  } else {
    t211 = intrm_sf_mf_278 - Simscape_Component_h_g_B;
    t222 = (Simscape_Component_h_g_B - Simscape_Component_h_g_B) / (t211 == 0.0 ?
      1.0E-16 : t211);
  }

  t154[0ULL] = t222;
  tlu2_linear_linear_prelookup(&jb_efOut.mField0[0ULL], &jb_efOut.mField1[0ULL],
    &jb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t154[0ULL],
    &t39[0ULL], &t19[0ULL]);
  t11 = jb_efOut;
  tlu2_2d_linear_linear_value(&kb_efOut[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &t15.mField0[0ULL], &t15.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t39[0ULL], &t18[0ULL], &t19[0ULL]);
  t150_idx_0 = kb_efOut[0];
  t150_idx_0 = X[49ULL] * t150_idx_0 * 100.0 + Simscape_Component_h_g_B;
  if (intrm_sf_mf_278 <= Simscape_Component_h_g_B) {
    t222 = intrm_sf_mf_278 / (Simscape_Component_h_g_B == 0.0 ? 1.0E-16 :
      Simscape_Component_h_g_B) - 1.0;
  } else if (intrm_sf_mf_278 >= intrm_sf_mf_278) {
    t222 = (intrm_sf_mf_278 - 4000.0) / (4000.0 - intrm_sf_mf_278 == 0.0 ?
      1.0E-16 : 4000.0 - intrm_sf_mf_278) + 2.0;
  } else {
    t211 = intrm_sf_mf_278 - Simscape_Component_h_g_B;
    t222 = (intrm_sf_mf_278 - Simscape_Component_h_g_B) / (t211 == 0.0 ? 1.0E-16
      : t211);
  }

  t154[0ULL] = t222;
  tlu2_linear_linear_prelookup(&lb_efOut.mField0[0ULL], &lb_efOut.mField1[0ULL],
    &lb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t154[0ULL],
    &t39[0ULL], &t19[0ULL]);
  t7 = lb_efOut;
  tlu2_2d_linear_linear_value(&mb_efOut[0ULL], &t7.mField0[0ULL], &t7.mField2
    [0ULL], &t15.mField0[0ULL], &t15.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t39[0ULL], &t18[0ULL], &t19[0ULL]);
  t154[0] = mb_efOut[0];
  t222 = t154[0ULL];
  Simscape_Component_h_g_B = X[49ULL] * t222 * 100.0 + intrm_sf_mf_278;
  tlu2_2d_linear_linear_value(&nb_efOut[0ULL], &t5.mField0[0ULL], &t5.mField2
    [0ULL], &t16.mField0[0ULL], &t16.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t39[0ULL], &t18[0ULL], &t19[0ULL]);
  t154[0] = nb_efOut[0];
  t222 = t154[0ULL];
  tlu2_2d_linear_linear_value(&ob_efOut[0ULL], &t11.mField0[0ULL], &t11.mField2
    [0ULL], &t15.mField0[0ULL], &t15.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t39[0ULL], &t18[0ULL], &t19[0ULL]);
  t154[0] = ob_efOut[0];
  intrm_sf_mf_278 = t154[0ULL];
  tlu2_2d_linear_linear_value(&pb_efOut[0ULL], &t7.mField0[0ULL], &t7.mField2
    [0ULL], &t15.mField0[0ULL], &t15.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t39[0ULL], &t18[0ULL], &t19[0ULL]);
  t154[0] = pb_efOut[0];
  t220 = t154[0ULL];
  t220 -= intrm_sf_mf_278;
  t222 = (t222 - intrm_sf_mf_278) / (t220 == 0.0 ? 1.0E-16 : t220);
  if (t222 <= 0.0) {
    intrm_sf_mf_278 = 0.0;
  } else {
    intrm_sf_mf_278 = t222 >= 1.0 ? 1.0 : t222;
  }

  Simscape_Component_h_g_B = intermediate_der2094 - ((Simscape_Component_h_g_B -
    t150_idx_0) * intrm_sf_mf_278 + t150_idx_0);
  t222 = intrm_sf_mf_276 / 0.1;
  intrm_sf_mf_278 = t222 * t222 * 3.0 - t222 * t222 * t222 * 2.0;
  t222 = (intrm_sf_mf_276 - 0.9) / 0.099999999999999978;
  intermediate_der2094 = t222 * t222 * 3.0 - t222 * t222 * t222 * 2.0;
  if (intrm_sf_mf_276 <= 0.0) {
    t222 = intermediate_der5255;
  } else if (intrm_sf_mf_276 >= 0.1) {
    t222 = t221;
  } else {
    t222 = (1.0 - intrm_sf_mf_278) * intermediate_der5255 + t221 *
      intrm_sf_mf_278;
  }

  if (intrm_sf_mf_276 <= 0.9) {
    intrm_sf_mf_278 = t222;
  } else if (intrm_sf_mf_276 >= 1.0) {
    intrm_sf_mf_278 = intermediate_der1673;
  } else {
    intrm_sf_mf_278 = (1.0 - intermediate_der2094) * t222 + intermediate_der1673
      * intermediate_der2094;
  }

  t222 = ((real_T)(M[56ULL] != 0) * 2.0 - 1.0) * t219 / 0.5;
  t150_idx_0 = U_idx_1 * 4.0;
  t219 = cosh(t150_idx_0 / 0.025) * cosh(t150_idx_0 / 0.025);
  intermediate_der1673 = 1.3257606759554879;
  if (U_idx_3 <= 0.0) {
    intermediate_der5255 = 0.0;
  } else {
    intermediate_der5255 = (real_T)!(U_idx_3 >= 1.0);
  }

  t221 = t164 * intermediate_der5255;
  if (t170 <= 0.0) {
    t222 = 0.0;
  } else {
    t222 = t170 >= 1.0 ? 0.0 : -((t222 - 0.8) * (((real_T)(M[56ULL] != 0) * 2.0
      - 1.0) * t221 / 0.5) * 0.4);
  }

  t164 = -(Simscape_Component_Dp > 0.01 ? Simscape_Component_h_g_B * t222 : 0.0);
  t222 = fabs(Fixed_Displacement_Pump_2P_p_diff) * (160.0 * (1.0 / (t219 == 0.0 ?
    1.0E-16 : t219))) * 0.018078554672120287;
  t164 = -t164 / 43.65995201283193;
  out.mX[0] = -(intermediate_der1673 / (Fixed_Displacement_Pump_2P_v_avg == 0.0 ?
    1.0E-16 : Fixed_Displacement_Pump_2P_v_avg) * 1.0E-6);
  out.mX[1] = -t222;
  out.mX[2] = Fixed_Displacement_Pump_2P_p_diff * intermediate_der1673 * 0.0001;
  out.mX[3] = -(1000.0 / (X[23ULL] == 0.0 ? 1.0E-16 : X[23ULL]) *
                intrm_sf_mf_278 * 6.367473975406809 / 10.0);
  out.mX[4] = M[60ULL] != 0 ? -t221 : 0.0;
  out.mX[5] = t164;
  (void)LC;
  (void)t224;
  return 0;
}
