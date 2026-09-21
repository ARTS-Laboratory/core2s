/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv6/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_sys_struct.h"
#include "PW_SMRv6_eed91bea_1_ds_lock_r.h"
#include "PW_SMRv6_eed91bea_1_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_externals.h"
#include "PW_SMRv6_eed91bea_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv6_eed91bea_1_ds_lock_r(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  real_T Subsystem3_x3_Position_Valve_Actuator_elm_2_A_C;
  real_T U_idx_2;
  int32_T CI_idx_0;
  int32_T CI_idx_1;
  int32_T CI_idx_2;
  int32_T CI_idx_3;
  boolean_T indicator0;
  boolean_T indicator1;
  (void)LC;
  U_idx_2 = t1->mU.mX[2];
  CI_idx_0 = t1->mCI.mX[0];
  CI_idx_1 = t1->mCI.mX[1];
  CI_idx_2 = t1->mCI.mX[2];
  CI_idx_3 = t1->mCI.mX[3];
  out = t2->mLOCK_R;
  Subsystem3_x3_Position_Valve_Actuator_elm_2_A_C = U_idx_2 * -24.0 + 24.0;
  U_idx_2 *= 24.0;
  if ((CI_idx_1 == 0) && (Subsystem3_x3_Position_Valve_Actuator_elm_2_A_C >=
                          12.0)) {
    indicator0 = true;
  } else {
    indicator0 = ((CI_idx_0 == 0) &&
                  (Subsystem3_x3_Position_Valve_Actuator_elm_2_A_C < 12.0));
  }

  if ((CI_idx_3 == 0) && (U_idx_2 >= 12.0)) {
    indicator1 = true;
  } else {
    indicator1 = ((CI_idx_2 == 0) && (U_idx_2 < 12.0));
  }

  out.mX[0] = indicator0;
  out.mX[1] = indicator0;
  out.mX[2] = indicator0;
  out.mX[3] = indicator0;
  out.mX[4] = indicator1;
  out.mX[5] = indicator1;
  out.mX[6] = indicator1;
  out.mX[7] = indicator1;
  (void)LC;
  (void)t2;
  return 0;
}
