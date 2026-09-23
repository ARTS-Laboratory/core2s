/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv6/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_sys_struct.h"
#include "PW_SMRv6_eed91bea_1_ds_lock2_r.h"
#include "PW_SMRv6_eed91bea_1_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_externals.h"
#include "PW_SMRv6_eed91bea_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv6_eed91bea_1_ds_lock2_r(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t3, NeDsMethodOutput *t4)
{
  PmBoolVector out;
  real_T Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C;
  real_T U_idx_2;
  int32_T CI_idx_4;
  int32_T CI_idx_5;
  int32_T CI_idx_6;
  int32_T CI_idx_7;
  boolean_T indicator2;
  boolean_T t0;
  (void)LC;
  U_idx_2 = t3->mU.mX[2];
  CI_idx_4 = t3->mCI.mX[4];
  CI_idx_5 = t3->mCI.mX[5];
  CI_idx_6 = t3->mCI.mX[6];
  CI_idx_7 = t3->mCI.mX[7];
  out = t4->mLOCK2_R;
  Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C = U_idx_2 * 24.0;
  U_idx_2 *= -24.0;
  if (!(fabs(24.0) == pmf_get_inf())) {
    t0 = (U_idx_2 > 0.0);
  } else {
    t0 = false;
  }

  if ((CI_idx_5 == 0) && t0) {
    indicator2 = true;
  } else {
    if (!(fabs(24.0) == pmf_get_inf())) {
      t0 = (U_idx_2 < 0.0);
    } else {
      t0 = false;
    }

    indicator2 = ((CI_idx_4 == 0) && t0);
  }

  if ((CI_idx_7 == 0) && (Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C > 0.0))
  {
    t0 = true;
  } else {
    t0 = ((CI_idx_6 == 0) && (Subsystem3_x3_Position_Valve_Actuator_elm_2_B_C <
           0.0));
  }

  out.mX[0] = indicator2;
  out.mX[1] = indicator2;
  out.mX[2] = indicator2;
  out.mX[3] = indicator2;
  out.mX[4] = t0;
  out.mX[5] = t0;
  out.mX[6] = t0;
  out.mX[7] = t0;
  (void)LC;
  (void)t4;
  return 0;
}
