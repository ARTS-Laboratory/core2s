/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv6/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_sys_struct.h"
#include "PW_SMRv6_eed91bea_1_ds_ddf.h"
#include "PW_SMRv6_eed91bea_1_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_externals.h"
#include "PW_SMRv6_eed91bea_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv6_eed91bea_1_ds_ddf(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  real_T D_idx_0;
  real_T D_idx_1;
  real_T D_idx_2;
  real_T D_idx_4;
  real_T D_idx_5;
  real_T D_idx_6;
  real_T T_idx_0;
  real_T intermediate_der6737;
  real_T intermediate_der6738;
  real_T intermediate_der6745;
  real_T intermediate_der6758;
  real_T intermediate_der6760;
  int32_T M[163];
  int32_T b;
  (void)LC;
  for (b = 0; b < 163; b++) {
    M[b] = t1->mM.mX[b];
  }

  T_idx_0 = t1->mT.mX[0];
  D_idx_0 = t1->mD.mX[0];
  D_idx_1 = t1->mD.mX[1];
  D_idx_2 = t1->mD.mX[2];
  D_idx_4 = t1->mD.mX[4];
  D_idx_5 = t1->mD.mX[5];
  D_idx_6 = t1->mD.mX[6];
  out = t2->mDDF;
  intermediate_der6745 = T_idx_0 - D_idx_1;
  intermediate_der6758 = T_idx_0 - D_idx_5;
  D_idx_1 = (intermediate_der6745 - D_idx_2 * 0.33333333333333331) *
    (intermediate_der6745 - D_idx_2 * 0.33333333333333331) * 0.5;
  intermediate_der6760 = D_idx_2 * D_idx_2 * 0.055555555555555552 +
    (intermediate_der6745 - D_idx_2 * 0.66666666666666663) * D_idx_2 *
    0.33333333333333331;
  if (M[15ULL] != 0) {
    intermediate_der6737 = 0.0;
  } else if (M[26ULL] != 0) {
    intermediate_der6737 = 0.0;
  } else {
    intermediate_der6737 = 1.0;
  }

  if (M[15ULL] != 0) {
    intermediate_der6738 = 0.0;
  } else if (M[26ULL] != 0) {
    intermediate_der6738 = 0.0;
  } else if (M[37ULL] != 0) {
    intermediate_der6738 = 0.0;
  } else {
    intermediate_der6738 = M[48ULL] != 0 ? (-(intermediate_der6745 - D_idx_2 *
      0.33333333333333331) - (intermediate_der6745 - D_idx_2 *
      0.33333333333333331)) * D_idx_0 * 0.5 : -(D_idx_0 * D_idx_2) *
      0.33333333333333331;
  }

  if (M[15ULL] != 0) {
    intermediate_der6745 = 0.0;
  } else if (M[26ULL] != 0) {
    intermediate_der6745 = 0.0;
  } else if (M[37ULL] != 0) {
    intermediate_der6745 = 0.0;
  } else {
    intermediate_der6745 = M[48ULL] != 0 ? ((intermediate_der6745 - D_idx_2 *
      0.33333333333333331) * -0.33333333333333331 + (intermediate_der6745 -
      D_idx_2 * 0.33333333333333331) * -0.33333333333333331) * D_idx_0 * 0.5 :
      ((D_idx_2 * 0.1111111111111111 + D_idx_2 * 0.1111111111111111) * D_idx_0 *
       0.5 + D_idx_0 * D_idx_2 * -0.22222222222222221) + (intermediate_der6745 -
      D_idx_2 * 0.66666666666666663) * D_idx_0 * 0.33333333333333331;
  }

  if (M[15ULL] != 0) {
    D_idx_1 = 0.0;
  } else if (M[26ULL] != 0) {
    D_idx_1 = 0.0;
  } else if (M[37ULL] != 0) {
    D_idx_1 = 0.0;
  } else {
    D_idx_1 = M[48ULL] != 0 ? D_idx_1 : intermediate_der6760;
  }

  T_idx_0 = intermediate_der6737;
  if (M[57ULL] != 0) {
    intermediate_der6737 = 0.0;
  } else if (M[66ULL] != 0) {
    intermediate_der6737 = 0.0;
  } else {
    intermediate_der6737 = 1.0;
  }

  if (M[57ULL] != 0) {
    D_idx_5 = 0.0;
  } else if (M[66ULL] != 0) {
    D_idx_5 = 0.0;
  } else if (M[77ULL] != 0) {
    D_idx_5 = 0.0;
  } else {
    D_idx_5 = M[88ULL] != 0 ? ((intermediate_der6758 - D_idx_6 *
      0.33333333333333331) * -0.33333333333333331 + (intermediate_der6758 -
      D_idx_6 * 0.33333333333333331) * -0.33333333333333331) * D_idx_4 * 0.5 :
      ((D_idx_6 * 0.1111111111111111 + D_idx_6 * 0.1111111111111111) * D_idx_4 *
       0.5 + D_idx_4 * D_idx_6 * -0.22222222222222221) + (intermediate_der6758 -
      D_idx_6 * 0.66666666666666663) * D_idx_4 * 0.33333333333333331;
  }

  if (M[57ULL] != 0) {
    intermediate_der6760 = 0.0;
  } else if (M[66ULL] != 0) {
    intermediate_der6760 = 0.0;
  } else if (M[77ULL] != 0) {
    intermediate_der6760 = 0.0;
  } else {
    intermediate_der6760 = M[88ULL] != 0 ? (-(intermediate_der6758 - D_idx_6 *
      0.33333333333333331) - (intermediate_der6758 - D_idx_6 *
      0.33333333333333331)) * D_idx_4 * 0.5 : -(D_idx_4 * D_idx_6) *
      0.33333333333333331;
  }

  if (M[57ULL] != 0) {
    intermediate_der6758 = 0.0;
  } else if (M[66ULL] != 0) {
    intermediate_der6758 = 0.0;
  } else if (M[77ULL] != 0) {
    intermediate_der6758 = 0.0;
  } else {
    intermediate_der6758 = M[88ULL] != 0 ? (intermediate_der6758 - D_idx_6 *
      0.33333333333333331) * (intermediate_der6758 - D_idx_6 *
      0.33333333333333331) * 0.5 : D_idx_6 * D_idx_6 * 0.055555555555555552 +
      (intermediate_der6758 - D_idx_6 * 0.66666666666666663) * D_idx_6 *
      0.33333333333333331;
  }

  out.mX[0] = -D_idx_1;
  out.mX[1] = -intermediate_der6738;
  out.mX[2] = -intermediate_der6745;
  out.mX[3] = -T_idx_0;
  out.mX[4] = intermediate_der6758;
  out.mX[5] = intermediate_der6760;
  out.mX[6] = D_idx_5;
  out.mX[7] = intermediate_der6737;
  (void)LC;
  (void)t2;
  return 0;
}
