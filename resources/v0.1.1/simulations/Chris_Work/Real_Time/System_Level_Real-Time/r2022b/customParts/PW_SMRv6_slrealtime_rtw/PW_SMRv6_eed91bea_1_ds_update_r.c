/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv6/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_sys_struct.h"
#include "PW_SMRv6_eed91bea_1_ds_update_r.h"
#include "PW_SMRv6_eed91bea_1_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_externals.h"
#include "PW_SMRv6_eed91bea_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv6_eed91bea_1_ds_update_r(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t24, NeDsMethodOutput *t25)
{
  PmRealVector out;
  real_T D_idx_0;
  real_T D_idx_1;
  real_T D_idx_2;
  real_T D_idx_3;
  real_T D_idx_4;
  real_T D_idx_5;
  real_T D_idx_6;
  real_T D_idx_7;
  real_T Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C;
  real_T T_idx_0;
  real_T U_idx_2;
  real_T intrm_sf_mf_669;
  real_T intrm_sf_mf_673;
  real_T t11;
  real_T t12;
  real_T t3;
  real_T t6;
  int32_T CI_idx_0;
  int32_T CI_idx_1;
  int32_T CI_idx_2;
  int32_T CI_idx_3;
  (void)LC;
  T_idx_0 = t24->mT.mX[0];
  U_idx_2 = t24->mU.mX[2];
  D_idx_0 = t24->mD.mX[0];
  D_idx_1 = t24->mD.mX[1];
  D_idx_2 = t24->mD.mX[2];
  D_idx_3 = t24->mD.mX[3];
  D_idx_4 = t24->mD.mX[4];
  D_idx_5 = t24->mD.mX[5];
  D_idx_6 = t24->mD.mX[6];
  D_idx_7 = t24->mD.mX[7];
  CI_idx_0 = t24->mCI.mX[0];
  CI_idx_1 = t24->mCI.mX[1];
  CI_idx_2 = t24->mCI.mX[2];
  CI_idx_3 = t24->mCI.mX[3];
  out = t25->mUPDATE_R;
  t6 = U_idx_2 * -24.0 + 24.0;
  Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C = U_idx_2 * 24.0;
  intrm_sf_mf_669 = T_idx_0 - D_idx_1;
  if (intrm_sf_mf_669 <= D_idx_2 * 0.33333333333333331) {
    t3 = D_idx_3;
  } else {
    t3 = intrm_sf_mf_669 <= D_idx_2 * 0.66666666666666663 ? (intrm_sf_mf_669 -
      D_idx_2 * 0.33333333333333331) * (intrm_sf_mf_669 - D_idx_2 *
      0.33333333333333331) * D_idx_0 * 0.5 + D_idx_3 : (D_idx_0 * D_idx_2 *
      D_idx_2 * 0.055555555555555552 + (intrm_sf_mf_669 - D_idx_2 *
      0.66666666666666663) * D_idx_0 * D_idx_2 * 0.33333333333333331) + D_idx_3;
  }

  t11 = t3 > 0.01 ? 0.01 : t3;
  intrm_sf_mf_669 = t11 > 0.0 ? t11 : 0.0;
  intrm_sf_mf_673 = T_idx_0 - D_idx_5;
  if (intrm_sf_mf_673 <= D_idx_6 * 0.33333333333333331) {
    t11 = D_idx_7;
  } else {
    t11 = intrm_sf_mf_673 <= D_idx_6 * 0.66666666666666663 ? (intrm_sf_mf_673 -
      D_idx_6 * 0.33333333333333331) * (intrm_sf_mf_673 - D_idx_6 *
      0.33333333333333331) * D_idx_4 * 0.5 + D_idx_7 : (D_idx_4 * D_idx_6 *
      D_idx_6 * 0.055555555555555552 + (intrm_sf_mf_673 - D_idx_6 *
      0.66666666666666663) * D_idx_4 * D_idx_6 * 0.33333333333333331) + D_idx_7;
  }

  t12 = t11 > 0.01 ? 0.01 : t11;
  intrm_sf_mf_673 = t12 > 0.0 ? t12 : 0.0;
  if ((CI_idx_1 == 0) && (t6 >= 12.0)) {
    if (0.01 - intrm_sf_mf_669 == 0.0) {
      D_idx_0 = 0.0;
    } else {
      U_idx_2 = (0.01 - intrm_sf_mf_669) / 0.01 * ((0.01 - intrm_sf_mf_669) /
        0.01) * 6.25;
      D_idx_0 = (0.01 - intrm_sf_mf_669) / (U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2) *
        6.0;
    }
  } else if ((CI_idx_0 == 0) && (t6 < 12.0)) {
    if (intrm_sf_mf_669 == 0.0) {
      D_idx_0 = 0.0;
    } else {
      U_idx_2 = intrm_sf_mf_669 / 0.01 * (intrm_sf_mf_669 / 0.01) * 6.25;
      D_idx_0 = intrm_sf_mf_669 / (U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2) * -6.0;
    }
  }

  if ((CI_idx_1 == 0) && (t6 >= 12.0)) {
    t3 = T_idx_0;
  } else {
    t3 = (CI_idx_0 == 0) && (t6 < 12.0) ? T_idx_0 : D_idx_1;
  }

  if ((CI_idx_1 == 0) && (t6 >= 12.0)) {
    t11 = (0.01 - intrm_sf_mf_669) / 0.01 * 2.5;
  } else if ((CI_idx_0 == 0) && (t6 < 12.0)) {
    t11 = intrm_sf_mf_669 / 0.01 * 2.5;
  } else {
    t11 = D_idx_2;
  }

  if ((CI_idx_1 == 0) && (t6 >= 12.0)) {
    t12 = intrm_sf_mf_669;
  } else {
    t12 = (CI_idx_0 == 0) && (t6 < 12.0) ? intrm_sf_mf_669 : D_idx_3;
  }

  if ((CI_idx_3 == 0) && (Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C >=
                          12.0)) {
    if (0.01 - intrm_sf_mf_673 == 0.0) {
      t6 = 0.0;
    } else {
      U_idx_2 = (0.01 - intrm_sf_mf_673) / 0.01 * ((0.01 - intrm_sf_mf_673) /
        0.01) * 6.25;
      t6 = (0.01 - intrm_sf_mf_673) / (U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2) * 6.0;
    }
  } else if ((CI_idx_2 == 0) && (Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C
              < 12.0)) {
    if (intrm_sf_mf_673 == 0.0) {
      t6 = 0.0;
    } else {
      U_idx_2 = intrm_sf_mf_673 / 0.01 * (intrm_sf_mf_673 / 0.01) * 6.25;
      t6 = intrm_sf_mf_673 / (U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2) * -6.0;
    }
  } else {
    t6 = D_idx_4;
  }

  if ((CI_idx_3 == 0) && (Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C >=
                          12.0)) {
    intrm_sf_mf_669 = T_idx_0;
  } else {
    intrm_sf_mf_669 = (CI_idx_2 == 0) &&
      (Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C < 12.0) ? T_idx_0 :
      D_idx_5;
  }

  if ((CI_idx_3 == 0) && (Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C >=
                          12.0)) {
    D_idx_6 = (0.01 - intrm_sf_mf_673) / 0.01 * 2.5;
  } else if ((CI_idx_2 == 0) && (Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C
              < 12.0)) {
    D_idx_6 = intrm_sf_mf_673 / 0.01 * 2.5;
  }

  if ((CI_idx_3 == 0) && (Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C >=
                          12.0)) {
  } else {
    intrm_sf_mf_673 = (CI_idx_2 == 0) &&
      (Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C < 12.0) ? intrm_sf_mf_673
      : D_idx_7;
  }

  out.mX[0] = D_idx_0;
  out.mX[1] = t3;
  out.mX[2] = t11;
  out.mX[3] = t12;
  out.mX[4] = t6;
  out.mX[5] = intrm_sf_mf_669;
  out.mX[6] = D_idx_6;
  out.mX[7] = intrm_sf_mf_673;
  (void)LC;
  (void)t25;
  return 0;
}
