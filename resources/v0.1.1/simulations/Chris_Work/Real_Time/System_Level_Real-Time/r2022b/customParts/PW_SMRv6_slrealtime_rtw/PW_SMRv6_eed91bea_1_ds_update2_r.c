/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv6/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_sys_struct.h"
#include "PW_SMRv6_eed91bea_1_ds_update2_r.h"
#include "PW_SMRv6_eed91bea_1_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_externals.h"
#include "PW_SMRv6_eed91bea_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv6_eed91bea_1_ds_update2_r(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t33, NeDsMethodOutput *t34)
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
  real_T intrm_sf_mf_673;
  real_T t15;
  real_T t16;
  real_T t19;
  real_T t20;
  real_T t5;
  int32_T CI_idx_4;
  int32_T CI_idx_5;
  int32_T CI_idx_6;
  int32_T CI_idx_7;
  boolean_T t12;
  (void)LC;
  T_idx_0 = t33->mT.mX[0];
  U_idx_2 = t33->mU.mX[2];
  D_idx_0 = t33->mD.mX[0];
  D_idx_1 = t33->mD.mX[1];
  D_idx_2 = t33->mD.mX[2];
  D_idx_3 = t33->mD.mX[3];
  D_idx_4 = t33->mD.mX[4];
  D_idx_5 = t33->mD.mX[5];
  D_idx_6 = t33->mD.mX[6];
  D_idx_7 = t33->mD.mX[7];
  CI_idx_4 = t33->mCI.mX[4];
  CI_idx_5 = t33->mCI.mX[5];
  CI_idx_6 = t33->mCI.mX[6];
  CI_idx_7 = t33->mCI.mX[7];
  out = t34->mUPDATE2_R;
  Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C = U_idx_2 * 24.0;
  t15 = U_idx_2 * -24.0;
  t16 = T_idx_0 - D_idx_1;
  if (t16 <= D_idx_2 * 0.33333333333333331) {
    t5 = D_idx_3;
  } else {
    t5 = t16 <= D_idx_2 * 0.66666666666666663 ? (t16 - D_idx_2 *
      0.33333333333333331) * (t16 - D_idx_2 * 0.33333333333333331) * D_idx_0 *
      0.5 + D_idx_3 : (D_idx_0 * D_idx_2 * D_idx_2 * 0.055555555555555552 + (t16
      - D_idx_2 * 0.66666666666666663) * D_idx_0 * D_idx_2 * 0.33333333333333331)
      + D_idx_3;
  }

  t19 = t5 > 0.01 ? 0.01 : t5;
  t16 = t19 > 0.0 ? t19 : 0.0;
  intrm_sf_mf_673 = T_idx_0 - D_idx_5;
  if (intrm_sf_mf_673 <= D_idx_6 * 0.33333333333333331) {
    t19 = D_idx_7;
  } else {
    t19 = intrm_sf_mf_673 <= D_idx_6 * 0.66666666666666663 ? (intrm_sf_mf_673 -
      D_idx_6 * 0.33333333333333331) * (intrm_sf_mf_673 - D_idx_6 *
      0.33333333333333331) * D_idx_4 * 0.5 + D_idx_7 : (D_idx_4 * D_idx_6 *
      D_idx_6 * 0.055555555555555552 + (intrm_sf_mf_673 - D_idx_6 *
      0.66666666666666663) * D_idx_4 * D_idx_6 * 0.33333333333333331) + D_idx_7;
  }

  t20 = t19 > 0.01 ? 0.01 : t19;
  intrm_sf_mf_673 = t20 > 0.0 ? t20 : 0.0;
  if (!(fabs(24.0) == pmf_get_inf())) {
    t12 = (t15 > 0.0);
  } else {
    t12 = false;
  }

  if ((CI_idx_5 == 0) && t12) {
    if (0.01 - t16 == 0.0) {
      D_idx_0 = 0.0;
    } else {
      U_idx_2 = (0.01 - t16) / 0.01 * ((0.01 - t16) / 0.01) * 6.25;
      D_idx_0 = (0.01 - t16) / (U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2) * 6.0;
    }
  } else {
    if (!(fabs(24.0) == pmf_get_inf())) {
      t12 = (t15 < 0.0);
    } else {
      t12 = false;
    }

    if ((CI_idx_4 == 0) && t12) {
      if (t16 == 0.0) {
        D_idx_0 = 0.0;
      } else {
        U_idx_2 = t16 / 0.01 * (t16 / 0.01) * 6.25;
        D_idx_0 = t16 / (U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2) * -6.0;
      }
    }
  }

  if (!(fabs(24.0) == pmf_get_inf())) {
    t12 = (t15 > 0.0);
  } else {
    t12 = false;
  }

  if ((CI_idx_5 == 0) && t12) {
    t5 = T_idx_0;
  } else {
    if (!(fabs(24.0) == pmf_get_inf())) {
      t12 = (t15 < 0.0);
    } else {
      t12 = false;
    }

    t5 = (CI_idx_4 == 0) && t12 ? T_idx_0 : D_idx_1;
  }

  if (!(fabs(24.0) == pmf_get_inf())) {
    t12 = (t15 > 0.0);
  } else {
    t12 = false;
  }

  if ((CI_idx_5 == 0) && t12) {
    t19 = (0.01 - t16) / 0.01 * 2.5;
  } else {
    if (!(fabs(24.0) == pmf_get_inf())) {
      t12 = (t15 < 0.0);
    } else {
      t12 = false;
    }

    if ((CI_idx_4 == 0) && t12) {
      t19 = t16 / 0.01 * 2.5;
    } else {
      t19 = D_idx_2;
    }
  }

  if (!(fabs(24.0) == pmf_get_inf())) {
    t12 = (t15 > 0.0);
  } else {
    t12 = false;
  }

  if ((CI_idx_5 == 0) && t12) {
    t20 = t16;
  } else {
    if (!(fabs(24.0) == pmf_get_inf())) {
      t12 = (t15 < 0.0);
    } else {
      t12 = false;
    }

    t20 = (CI_idx_4 == 0) && t12 ? t16 : D_idx_3;
  }

  if ((CI_idx_7 == 0) && (Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C > 0.0))
  {
    if (0.01 - intrm_sf_mf_673 == 0.0) {
      D_idx_4 = 0.0;
    } else {
      U_idx_2 = (0.01 - intrm_sf_mf_673) / 0.01 * ((0.01 - intrm_sf_mf_673) /
        0.01) * 6.25;
      D_idx_4 = (0.01 - intrm_sf_mf_673) / (U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2) *
        6.0;
    }
  } else if ((CI_idx_6 == 0) && (Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C
              < 0.0)) {
    if (intrm_sf_mf_673 == 0.0) {
      D_idx_4 = 0.0;
    } else {
      U_idx_2 = intrm_sf_mf_673 / 0.01 * (intrm_sf_mf_673 / 0.01) * 6.25;
      D_idx_4 = intrm_sf_mf_673 / (U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2) * -6.0;
    }
  }

  if ((CI_idx_7 == 0) && (Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C > 0.0))
  {
    t15 = T_idx_0;
  } else {
    t15 = (CI_idx_6 == 0) && (Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C <
      0.0) ? T_idx_0 : D_idx_5;
  }

  if ((CI_idx_7 == 0) && (Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C > 0.0))
  {
    t16 = (0.01 - intrm_sf_mf_673) / 0.01 * 2.5;
  } else if ((CI_idx_6 == 0) && (Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C
              < 0.0)) {
    t16 = intrm_sf_mf_673 / 0.01 * 2.5;
  } else {
    t16 = D_idx_6;
  }

  if ((CI_idx_7 == 0) && (Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C > 0.0))
  {
  } else {
    intrm_sf_mf_673 = (CI_idx_6 == 0) &&
      (Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C < 0.0) ? intrm_sf_mf_673 :
      D_idx_7;
  }

  out.mX[0] = D_idx_0;
  out.mX[1] = t5;
  out.mX[2] = t19;
  out.mX[3] = t20;
  out.mX[4] = D_idx_4;
  out.mX[5] = t15;
  out.mX[6] = t16;
  out.mX[7] = intrm_sf_mf_673;
  (void)LC;
  (void)t34;
  return 0;
}
