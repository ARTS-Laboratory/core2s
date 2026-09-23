/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv6/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_sys_struct.h"
#include "PW_SMRv6_eed91bea_1_ds_dxy.h"
#include "PW_SMRv6_eed91bea_1_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_externals.h"
#include "PW_SMRv6_eed91bea_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv6_eed91bea_1_ds_dxy(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t293, NeDsMethodOutput *t294)
{
  ETTS0 bb_efOut;
  ETTS0 d_efOut;
  ETTS0 eb_efOut;
  ETTS0 efOut;
  ETTS0 g_efOut;
  ETTS0 j_efOut;
  ETTS0 l_efOut;
  ETTS0 t16;
  ETTS0 t17;
  ETTS0 t18;
  ETTS0 t19;
  ETTS0 t20;
  ETTS0 x_efOut;
  PmRealVector out;
  real_T X[222];
  real_T t105[32];
  real_T t127[4];
  real_T t162[2];
  real_T t169[2];
  real_T t171[2];
  real_T t172[2];
  real_T t174[2];
  real_T t175[2];
  real_T ab_efOut[1];
  real_T b_efOut[1];
  real_T c_efOut[1];
  real_T cb_efOut[1];
  real_T db_efOut[1];
  real_T e_efOut[1];
  real_T f_efOut[1];
  real_T fb_efOut[1];
  real_T gb_efOut[1];
  real_T h_efOut[1];
  real_T i_efOut[1];
  real_T k_efOut[1];
  real_T m_efOut[1];
  real_T n_efOut[1];
  real_T o_efOut[1];
  real_T p_efOut[1];
  real_T q_efOut[1];
  real_T r_efOut[1];
  real_T s_efOut[1];
  real_T t124[1];
  real_T t8[1];
  real_T t_efOut[1];
  real_T u_efOut[1];
  real_T v_efOut[1];
  real_T w_efOut[1];
  real_T y_efOut[1];
  real_T intermediate_der1594;
  real_T intermediate_der1800;
  real_T intermediate_der2330;
  real_T intermediate_der2331;
  real_T intermediate_der2386;
  real_T intermediate_der2387;
  real_T intermediate_der4464;
  real_T intermediate_der4465;
  real_T intermediate_der4472;
  real_T intermediate_der4473;
  real_T t123_idx_0;
  real_T t200;
  real_T t203;
  real_T t204;
  real_T t205;
  real_T t207;
  real_T t208;
  real_T t211;
  real_T t212;
  real_T t213;
  real_T t217;
  real_T t218;
  real_T t220;
  real_T t276;
  real_T t283;
  real_T t290;
  real_T t292;
  size_t t161[1];
  size_t t170[1];
  size_t t173[1];
  size_t t176[1];
  size_t t22[1];
  size_t t23[1];
  size_t t43[1];
  size_t t79[1];
  size_t t133;
  int32_T M[163];
  int32_T b;
  for (b = 0; b < 163; b++) {
    M[b] = t293->mM.mX[b];
  }

  for (b = 0; b < 222; b++) {
    X[b] = t293->mX.mX[b];
  }

  out = t294->mDXY;
  t8[0ULL] = X[0ULL];
  t22[0] = 100ULL;
  t23[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t8[0ULL], &t22
    [0ULL], &t23[0ULL]);
  t20 = efOut;
  t174[0ULL] = t20.mField0[0ULL];
  t174[1ULL] = t20.mField0[1ULL];
  t175[0ULL] = t20.mField1[0ULL];
  t175[1ULL] = t20.mField1[1ULL];
  t176[0ULL] = t20.mField2[0ULL];
  tlu2_1d_linear_linear_value(&b_efOut[0ULL], &t174[0ULL], &t176[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t22[0ULL], &t23[0ULL]);
  t124[0] = b_efOut[0];
  intermediate_der4464 = t124[0ULL];
  tlu2_1d_linear_linear_value(&c_efOut[0ULL], &t174[0ULL], &t176[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t22[0ULL], &t23[0ULL]);
  t123_idx_0 = c_efOut[0];
  intermediate_der4465 = t123_idx_0;
  t124[0ULL] = X[51ULL];
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t124[0ULL],
    &t22[0ULL], &t23[0ULL]);
  t19 = d_efOut;
  t171[0ULL] = t19.mField0[0ULL];
  t171[1ULL] = t19.mField0[1ULL];
  t172[0ULL] = t19.mField1[0ULL];
  t172[1ULL] = t19.mField1[1ULL];
  t173[0ULL] = t19.mField2[0ULL];
  tlu2_1d_linear_linear_value(&e_efOut[0ULL], &t171[0ULL], &t173[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t22[0ULL], &t23[0ULL]);
  t123_idx_0 = e_efOut[0];
  intermediate_der1594 = t123_idx_0;
  tlu2_1d_linear_linear_value(&f_efOut[0ULL], &t171[0ULL], &t173[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t22[0ULL], &t23[0ULL]);
  t123_idx_0 = f_efOut[0];
  intermediate_der1800 = t123_idx_0;
  if (X[52ULL] <= intermediate_der1594) {
    intermediate_der4472 = X[52ULL] / (intermediate_der1594 == 0.0 ? 1.0E-16 :
      intermediate_der1594) - 1.0;
  } else if (X[52ULL] >= t123_idx_0) {
    intermediate_der4472 = (X[52ULL] - 4000.0) / (4000.0 - t123_idx_0 == 0.0 ?
      1.0E-16 : 4000.0 - t123_idx_0) + 2.0;
  } else {
    t204 = t123_idx_0 - intermediate_der1594;
    intermediate_der4472 = (X[52ULL] - intermediate_der1594) / (t204 == 0.0 ?
      1.0E-16 : t204);
  }

  t200 = -X[128ULL] + X[129ULL];
  intermediate_der2331 = X[126ULL] - X[57ULL];
  intermediate_der2330 = X[57ULL] / (X[126ULL] == 0.0 ? 1.0E-16 : X[126ULL]);
  if (intermediate_der2330 <= 0.0) {
    t203 = 0.0;
  } else {
    t203 = intermediate_der2330 >= 1.0 ? 1.0 : intermediate_der2330;
  }

  t204 = (1.0 - t203) * 500.0 / 0.7142857142857143 * 0.75;
  t124[0ULL] = X[126ULL];
  tlu2_linear_linear_prelookup(&g_efOut.mField0[0ULL], &g_efOut.mField1[0ULL],
    &g_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t124[0ULL],
    &t22[0ULL], &t23[0ULL]);
  t18 = g_efOut;
  t171[0ULL] = t18.mField0[0ULL];
  t171[1ULL] = t18.mField0[1ULL];
  t169[0ULL] = t18.mField1[0ULL];
  t169[1ULL] = t18.mField1[1ULL];
  t170[0ULL] = t18.mField2[0ULL];
  tlu2_1d_linear_linear_value(&h_efOut[0ULL], &t171[0ULL], &t170[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t22[0ULL], &t23[0ULL]);
  t123_idx_0 = h_efOut[0];
  t203 = t123_idx_0;
  tlu2_1d_linear_linear_value(&i_efOut[0ULL], &t171[0ULL], &t170[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t22[0ULL], &t23[0ULL]);
  t123_idx_0 = i_efOut[0];
  t205 = t123_idx_0;
  if (X[127ULL] <= t203) {
    t207 = X[127ULL] / (t203 == 0.0 ? 1.0E-16 : t203) - 1.0;
  } else if (X[127ULL] >= t123_idx_0) {
    t207 = (X[127ULL] - 4000.0) / (4000.0 - t123_idx_0 == 0.0 ? 1.0E-16 : 4000.0
      - t123_idx_0) + 2.0;
  } else {
    t212 = t123_idx_0 - t203;
    t207 = (X[127ULL] - t203) / (t212 == 0.0 ? 1.0E-16 : t212);
  }

  t208 = intermediate_der2331 > 0.01 ? t204 : 0.0;
  if (X[26ULL] < intermediate_der4464) {
    t204 = X[26ULL] / (intermediate_der4464 == 0.0 ? 1.0E-16 :
                       intermediate_der4464) - 1.0;
  } else {
    t204 = 0.0;
  }

  if (X[27ULL] > intermediate_der4465) {
    intermediate_der2386 = (X[27ULL] - 4000.0) / (4000.0 - intermediate_der4465 ==
      0.0 ? 1.0E-16 : 4000.0 - intermediate_der4465) + 2.0;
  } else {
    intermediate_der2386 = 1.0;
  }

  t124[0ULL] = t204;
  t43[0] = 25ULL;
  tlu2_linear_linear_prelookup(&j_efOut.mField0[0ULL], &j_efOut.mField1[0ULL],
    &j_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField20, &t124[0ULL],
    &t43[0ULL], &t23[0ULL]);
  t16 = j_efOut;
  t162[0ULL] = t16.mField0[0ULL];
  t162[1ULL] = t16.mField0[1ULL];
  t79[0ULL] = t16.mField2[0ULL];
  tlu2_2d_linear_linear_value(&k_efOut[0ULL], &t162[0ULL], &t79[0ULL], &t174
    [0ULL], &t176[0ULL], ((_NeDynamicSystem*)(LC))->mField30, &t43[0ULL], &t22
    [0ULL], &t23[0ULL]);
  t123_idx_0 = k_efOut[0];
  t204 = t123_idx_0;
  t124[0ULL] = intermediate_der2386;
  tlu2_linear_linear_prelookup(&l_efOut.mField0[0ULL], &l_efOut.mField1[0ULL],
    &l_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField22, &t124[0ULL],
    &t43[0ULL], &t23[0ULL]);
  t17 = l_efOut;
  t171[0ULL] = t17.mField0[0ULL];
  t171[1ULL] = t17.mField0[1ULL];
  t161[0ULL] = t17.mField2[0ULL];
  tlu2_2d_linear_linear_value(&m_efOut[0ULL], &t171[0ULL], &t161[0ULL], &t174
    [0ULL], &t176[0ULL], ((_NeDynamicSystem*)(LC))->mField31, &t43[0ULL], &t22
    [0ULL], &t23[0ULL]);
  t123_idx_0 = m_efOut[0];
  intermediate_der2386 = t123_idx_0;
  if (X[188ULL] <= intermediate_der4464) {
    intermediate_der4473 = X[188ULL] / (intermediate_der4464 == 0.0 ? 1.0E-16 :
      intermediate_der4464) - 1.0;
  } else if (X[188ULL] >= intermediate_der4465) {
    intermediate_der4473 = (X[188ULL] - 4000.0) / (4000.0 - intermediate_der4465
      == 0.0 ? 1.0E-16 : 4000.0 - intermediate_der4465) + 2.0;
  } else {
    t220 = intermediate_der4465 - intermediate_der4464;
    intermediate_der4473 = (X[188ULL] - intermediate_der4464) / (t220 == 0.0 ?
      1.0E-16 : t220);
  }

  tlu2_1d_linear_linear_value(&n_efOut[0ULL], &t175[0ULL], &t176[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t22[0ULL], &t23[0ULL]);
  t123_idx_0 = n_efOut[0];
  t211 = t123_idx_0;
  tlu2_1d_linear_linear_value(&o_efOut[0ULL], &t175[0ULL], &t176[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t22[0ULL], &t23[0ULL]);
  t123_idx_0 = o_efOut[0];
  t212 = t123_idx_0;
  tlu2_1d_linear_linear_value(&p_efOut[0ULL], &t172[0ULL], &t173[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t22[0ULL], &t23[0ULL]);
  t123_idx_0 = p_efOut[0];
  t213 = t123_idx_0;
  tlu2_1d_linear_linear_value(&q_efOut[0ULL], &t172[0ULL], &t173[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t22[0ULL], &t23[0ULL]);
  t123_idx_0 = q_efOut[0];
  if (X[52ULL] <= intermediate_der1594) {
    t292 = 1.0 / (intermediate_der1594 == 0.0 ? 1.0E-16 : intermediate_der1594);
  } else if (X[52ULL] >= intermediate_der1800) {
    t292 = 1.0 / (4000.0 - intermediate_der1800 == 0.0 ? 1.0E-16 : 4000.0 -
                  intermediate_der1800);
  } else {
    t276 = intermediate_der1800 - intermediate_der1594;
    t292 = 1.0 / (t276 == 0.0 ? 1.0E-16 : t276);
  }

  if (X[52ULL] <= intermediate_der1594) {
    t276 = intermediate_der1594 * intermediate_der1594;
    t290 = -X[52ULL] / (t276 == 0.0 ? 1.0E-16 : t276) * t213;
  } else if (X[52ULL] >= intermediate_der1800) {
    intermediate_der1800 = (4000.0 - intermediate_der1800) * (4000.0 -
      intermediate_der1800);
    t290 = -t123_idx_0 * (-(X[52ULL] - 4000.0) / (intermediate_der1800 == 0.0 ?
      1.0E-16 : intermediate_der1800));
  } else {
    t220 = (intermediate_der1800 - intermediate_der1594) * (intermediate_der1800
      - intermediate_der1594);
    intermediate_der1800 -= intermediate_der1594;
    t290 = (t123_idx_0 - t213) * (-(X[52ULL] - intermediate_der1594) / (t220 ==
      0.0 ? 1.0E-16 : t220)) + -t213 / (intermediate_der1800 == 0.0 ? 1.0E-16 :
      intermediate_der1800);
  }

  t276 = X[126ULL] * X[126ULL];
  if (intermediate_der2330 <= 0.0) {
    intermediate_der2387 = 0.0;
  } else {
    intermediate_der2387 = intermediate_der2330 >= 1.0 ? 0.0 : 1.0 / (X[126ULL] ==
      0.0 ? 1.0E-16 : X[126ULL]);
  }

  if (intermediate_der2330 <= 0.0) {
    t213 = 0.0;
  } else {
    t213 = intermediate_der2330 >= 1.0 ? 0.0 : -X[57ULL] / (t276 == 0.0 ?
      1.0E-16 : t276);
  }

  t283 = -t213 * 500.0;
  tlu2_1d_linear_linear_value(&r_efOut[0ULL], &t169[0ULL], &t170[0ULL],
    ((_NeDynamicSystem*)(LC))->mField3, &t22[0ULL], &t23[0ULL]);
  t123_idx_0 = r_efOut[0];
  t213 = t123_idx_0;
  tlu2_1d_linear_linear_value(&s_efOut[0ULL], &t169[0ULL], &t170[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t22[0ULL], &t23[0ULL]);
  t123_idx_0 = s_efOut[0];
  if (X[127ULL] <= t203) {
    t217 = 1.0 / (t203 == 0.0 ? 1.0E-16 : t203);
  } else if (X[127ULL] >= t205) {
    t217 = 1.0 / (4000.0 - t205 == 0.0 ? 1.0E-16 : 4000.0 - t205);
  } else {
    t276 = t205 - t203;
    t217 = 1.0 / (t276 == 0.0 ? 1.0E-16 : t276);
  }

  if (X[127ULL] <= t203) {
    t276 = t203 * t203;
    t218 = -X[127ULL] / (t276 == 0.0 ? 1.0E-16 : t276) * t213;
  } else if (X[127ULL] >= t205) {
    intermediate_der1800 = (4000.0 - t205) * (4000.0 - t205);
    t218 = -t123_idx_0 * (-(X[127ULL] - 4000.0) / (intermediate_der1800 == 0.0 ?
      1.0E-16 : intermediate_der1800));
  } else {
    t220 = (t205 - t203) * (t205 - t203);
    intermediate_der1800 = t205 - t203;
    t218 = (t123_idx_0 - t213) * (-(X[127ULL] - t203) / (t220 == 0.0 ? 1.0E-16 :
      t220)) + -t213 / (intermediate_der1800 == 0.0 ? 1.0E-16 :
                        intermediate_der1800);
  }

  t203 = intermediate_der2331 > 0.01 ? t283 / 0.7142857142857143 * 0.75 : 0.0;
  intermediate_der2330 = intermediate_der2331 > 0.01 ? -intermediate_der2387 *
    500.0 / 0.7142857142857143 * 0.75 : 0.0;
  if (X[26ULL] < intermediate_der4464) {
    t213 = 1.0 / (intermediate_der4464 == 0.0 ? 1.0E-16 : intermediate_der4464);
  } else {
    t213 = 0.0;
  }

  if (X[26ULL] < intermediate_der4464) {
    t276 = intermediate_der4464 * intermediate_der4464;
    intermediate_der1594 = -X[26ULL] / (t276 == 0.0 ? 1.0E-16 : t276) * t211;
  } else {
    intermediate_der1594 = 0.0;
  }

  if (X[27ULL] > intermediate_der4465) {
    t276 = (4000.0 - intermediate_der4465) * (4000.0 - intermediate_der4465);
    intermediate_der2387 = -t212 * (-(X[27ULL] - 4000.0) / (t276 == 0.0 ?
      1.0E-16 : t276));
  } else {
    intermediate_der2387 = 0.0;
  }

  if (X[27ULL] > intermediate_der4465) {
    t205 = 1.0 / (4000.0 - intermediate_der4465 == 0.0 ? 1.0E-16 : 4000.0 -
                  intermediate_der4465);
  } else {
    t205 = 0.0;
  }

  tlu2_2d_linear_linear_value(&t_efOut[0ULL], &t16.mField1[0ULL], &t16.mField2
    [0ULL], &t20.mField0[0ULL], &t20.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField30, &t43[0ULL], &t22[0ULL], &t23[0ULL]);
  t8[0] = t_efOut[0];
  t220 = t8[0ULL] * t213;
  tlu2_2d_linear_linear_value(&u_efOut[0ULL], &t162[0ULL], &t79[0ULL], &t175
    [0ULL], &t176[0ULL], ((_NeDynamicSystem*)(LC))->mField30, &t43[0ULL], &t22
    [0ULL], &t23[0ULL]);
  t123_idx_0 = u_efOut[0];
  t213 = t8[0ULL] * intermediate_der1594 + t123_idx_0;
  tlu2_2d_linear_linear_value(&v_efOut[0ULL], &t17.mField1[0ULL], &t17.mField2
    [0ULL], &t20.mField0[0ULL], &t20.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField31, &t43[0ULL], &t22[0ULL], &t23[0ULL]);
  t8[0] = v_efOut[0];
  tlu2_2d_linear_linear_value(&w_efOut[0ULL], &t171[0ULL], &t161[0ULL], &t175
    [0ULL], &t176[0ULL], ((_NeDynamicSystem*)(LC))->mField31, &t43[0ULL], &t22
    [0ULL], &t23[0ULL]);
  t123_idx_0 = w_efOut[0];
  intermediate_der1594 = t8[0ULL] * intermediate_der2387 + t123_idx_0;
  intermediate_der2387 = t8[0ULL] * t205;
  t283 = -(X[28ULL] * t204);
  t276 = (X[28ULL] * t204 + X[29ULL] * intermediate_der2386) * (X[28ULL] * t204
    + X[29ULL] * intermediate_der2386);
  intermediate_der1800 = X[28ULL] * t204 + X[29ULL] * intermediate_der2386;
  t205 = t283 / (t276 == 0.0 ? 1.0E-16 : t276) * t204 + t204 /
    (intermediate_der1800 == 0.0 ? 1.0E-16 : intermediate_der1800);
  t204 = t283 / (t276 == 0.0 ? 1.0E-16 : t276) * X[28ULL] * t220 + X[28ULL] *
    t220 / (intermediate_der1800 == 0.0 ? 1.0E-16 : intermediate_der1800);
  t220 = (X[28ULL] * t213 + X[29ULL] * intermediate_der1594) * (t283 / (t276 ==
    0.0 ? 1.0E-16 : t276)) + X[28ULL] * t213 / (intermediate_der1800 == 0.0 ?
    1.0E-16 : intermediate_der1800);
  t213 = t283 / (t276 == 0.0 ? 1.0E-16 : t276) * intermediate_der2386;
  intermediate_der1594 = t205;
  intermediate_der2386 = t283 / (t276 == 0.0 ? 1.0E-16 : t276) * X[29ULL] *
    intermediate_der2387;
  intermediate_der2387 = t220;
  if (X[188ULL] <= intermediate_der4464) {
    t205 = 1.0 / (intermediate_der4464 == 0.0 ? 1.0E-16 : intermediate_der4464);
  } else if (X[188ULL] >= intermediate_der4465) {
    t205 = 1.0 / (4000.0 - intermediate_der4465 == 0.0 ? 1.0E-16 : 4000.0 -
                  intermediate_der4465);
  } else {
    t276 = intermediate_der4465 - intermediate_der4464;
    t205 = 1.0 / (t276 == 0.0 ? 1.0E-16 : t276);
  }

  if (X[188ULL] <= intermediate_der4464) {
    t276 = intermediate_der4464 * intermediate_der4464;
    t220 = -X[188ULL] / (t276 == 0.0 ? 1.0E-16 : t276) * t211;
  } else if (X[188ULL] >= intermediate_der4465) {
    intermediate_der1800 = (4000.0 - intermediate_der4465) * (4000.0 -
      intermediate_der4465);
    t220 = -t212 * (-(X[188ULL] - 4000.0) / (intermediate_der1800 == 0.0 ?
      1.0E-16 : intermediate_der1800));
  } else {
    t220 = (intermediate_der4465 - intermediate_der4464) * (intermediate_der4465
      - intermediate_der4464);
    intermediate_der1800 = intermediate_der4465 - intermediate_der4464;
    t220 = (t212 - t211) * (-(X[188ULL] - intermediate_der4464) / (t220 == 0.0 ?
      1.0E-16 : t220)) + -t211 / (intermediate_der1800 == 0.0 ? 1.0E-16 :
      intermediate_der1800);
  }

  t124[0ULL] = intermediate_der4472;
  t79[0] = 50ULL;
  tlu2_linear_linear_prelookup(&x_efOut.mField0[0ULL], &x_efOut.mField1[0ULL],
    &x_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t124[0ULL],
    &t79[0ULL], &t23[0ULL]);
  t17 = x_efOut;
  tlu2_2d_linear_linear_value(&y_efOut[0ULL], &t17.mField1[0ULL], &t17.mField2
    [0ULL], &t19.mField0[0ULL], &t19.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t79[0ULL], &t22[0ULL], &t23[0ULL]);
  t8[0] = y_efOut[0];
  t283 = -(t8[0ULL] * t292);
  intermediate_der4464 = -t283;
  t171[0ULL] = t17.mField0[0ULL];
  t171[1ULL] = t17.mField0[1ULL];
  t161[0ULL] = t17.mField2[0ULL];
  tlu2_2d_linear_linear_value(&ab_efOut[0ULL], &t171[0ULL], &t161[0ULL], &t172
    [0ULL], &t173[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t79[0ULL], &t22
    [0ULL], &t23[0ULL]);
  t123_idx_0 = ab_efOut[0];
  t283 = -(t8[0ULL] * t290 + t123_idx_0);
  t124[0ULL] = intermediate_der4473;
  tlu2_linear_linear_prelookup(&bb_efOut.mField0[0ULL], &bb_efOut.mField1[0ULL],
    &bb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t124[0ULL],
    &t79[0ULL], &t23[0ULL]);
  t17 = bb_efOut;
  tlu2_2d_linear_linear_value(&cb_efOut[0ULL], &t17.mField1[0ULL], &t17.mField2
    [0ULL], &t20.mField0[0ULL], &t20.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField14, &t79[0ULL], &t22[0ULL], &t23[0ULL]);
  t8[0] = cb_efOut[0];
  t290 = -(t8[0ULL] * t205);
  intermediate_der4472 = -t290;
  t171[0ULL] = t17.mField0[0ULL];
  t171[1ULL] = t17.mField0[1ULL];
  t161[0ULL] = t17.mField2[0ULL];
  tlu2_2d_linear_linear_value(&db_efOut[0ULL], &t171[0ULL], &t161[0ULL], &t175
    [0ULL], &t176[0ULL], ((_NeDynamicSystem*)(LC))->mField14, &t79[0ULL], &t22
    [0ULL], &t23[0ULL]);
  t123_idx_0 = db_efOut[0];
  t290 = -(t8[0ULL] * t220 + t123_idx_0);
  intermediate_der4473 = -t290;
  t124[0ULL] = t207;
  tlu2_linear_linear_prelookup(&eb_efOut.mField0[0ULL], &eb_efOut.mField1[0ULL],
    &eb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t124[0ULL],
    &t79[0ULL], &t23[0ULL]);
  t17 = eb_efOut;
  tlu2_2d_linear_linear_value(&fb_efOut[0ULL], &t17.mField1[0ULL], &t17.mField2
    [0ULL], &t18.mField0[0ULL], &t18.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t79[0ULL], &t22[0ULL], &t23[0ULL]);
  t8[0] = fb_efOut[0];
  t290 = -(t8[0ULL] * t217);
  t207 = -t290;
  t171[0ULL] = t17.mField0[0ULL];
  t171[1ULL] = t17.mField0[1ULL];
  t161[0ULL] = t17.mField2[0ULL];
  tlu2_2d_linear_linear_value(&gb_efOut[0ULL], &t171[0ULL], &t161[0ULL], &t169
    [0ULL], &t170[0ULL], ((_NeDynamicSystem*)(LC))->mField0, &t79[0ULL], &t22
    [0ULL], &t23[0ULL]);
  t124[0] = gb_efOut[0];
  t290 = -(t8[0ULL] * t218 + t124[0ULL]);
  t212 = ((real_T)(M[141ULL] != 0) * 2.0 - 1.0) * t208;
  t292 = -(((real_T)(M[141ULL] != 0) * 2.0 - 1.0) * t208);
  t208 = ((real_T)(M[141ULL] != 0) * 2.0 - 1.0) * t200 * t203;
  t127[0ULL] = 0.1;
  t127[1ULL] = t203;
  t127[2ULL] = t208;
  t127[3ULL] = -t290;
  t105[0ULL] = intermediate_der2387;
  t105[1ULL] = intermediate_der4473;
  t105[2ULL] = t204;
  t105[3ULL] = intermediate_der2386;
  t105[4ULL] = intermediate_der1594;
  t105[5ULL] = t213;
  t105[6ULL] = -t283;
  t105[7ULL] = intermediate_der4464;
  t105[8ULL] = 0.1;
  t105[9ULL] = intermediate_der2330;
  t105[10ULL] = ((real_T)(M[141ULL] != 0) * 2.0 - 1.0) * t200 *
    intermediate_der2330;
  t105[11ULL] = 1.0;
  t105[12ULL] = 0.1;
  t105[13ULL] = 1.0;
  t105[14ULL] = -1.0;
  for (t133 = 0ULL; t133 < 4ULL; t133++) {
    t105[t133 + 15ULL] = t127[t133];
  }

  out.mX[0] = t105[0];
  out.mX[1] = t105[1];
  out.mX[2] = t105[2];
  out.mX[3] = t105[3];
  out.mX[4] = t105[4];
  out.mX[5] = t105[5];
  out.mX[6] = t105[6];
  out.mX[7] = t105[7];
  out.mX[8] = t105[8];
  out.mX[9] = t105[9];
  out.mX[10] = t105[10];
  out.mX[11] = t105[11];
  out.mX[12] = t105[12];
  out.mX[13] = t105[13];
  out.mX[14] = t105[14];
  out.mX[15] = t105[15];
  out.mX[16] = t105[16];
  out.mX[17] = t105[17];
  out.mX[18] = t105[18];
  out.mX[19] = 1.0;
  out.mX[20] = t207;
  out.mX[21] = -1.0;
  out.mX[22] = 1.0;
  out.mX[23] = t292;
  out.mX[24] = 1.0;
  out.mX[25] = -1.0;
  out.mX[26] = t212;
  out.mX[27] = 1.0;
  out.mX[28] = intermediate_der4472;
  out.mX[29] = -1.0;
  out.mX[30] = 1.0;
  out.mX[31] = 1.0;
  (void)LC;
  (void)t294;
  return 0;
}
