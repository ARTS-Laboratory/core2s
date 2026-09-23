/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv6/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_sys_struct.h"
#include "PW_SMRv6_eed91bea_1_ds_vmm.h"
#include "PW_SMRv6_eed91bea_1_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_externals.h"
#include "PW_SMRv6_eed91bea_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv6_eed91bea_1_ds_vmm(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  (void)LC;
  out = t2->mVMM;
  out.mX[0] = true;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = true;
  out.mX[4] = true;
  out.mX[5] = true;
  out.mX[6] = true;
  out.mX[7] = true;
  out.mX[8] = true;
  out.mX[9] = true;
  out.mX[10] = true;
  out.mX[11] = true;
  out.mX[12] = true;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = true;
  out.mX[20] = true;
  out.mX[21] = true;
  out.mX[22] = true;
  out.mX[23] = true;
  out.mX[24] = true;
  out.mX[25] = true;
  out.mX[26] = true;
  out.mX[27] = true;
  out.mX[28] = true;
  out.mX[29] = true;
  out.mX[30] = true;
  out.mX[31] = true;
  out.mX[32] = true;
  out.mX[33] = false;
  out.mX[34] = false;
  out.mX[35] = false;
  out.mX[36] = true;
  out.mX[37] = true;
  out.mX[38] = false;
  out.mX[39] = false;
  out.mX[40] = true;
  out.mX[41] = true;
  out.mX[42] = true;
  out.mX[43] = true;
  out.mX[44] = true;
  out.mX[45] = true;
  out.mX[46] = true;
  out.mX[47] = true;
  out.mX[48] = true;
  out.mX[49] = true;
  out.mX[50] = false;
  out.mX[51] = false;
  out.mX[52] = false;
  out.mX[53] = false;
  out.mX[54] = false;
  out.mX[55] = false;
  out.mX[56] = false;
  out.mX[57] = false;
  out.mX[58] = false;
  out.mX[59] = false;
  out.mX[60] = false;
  out.mX[61] = false;
  out.mX[62] = false;
  out.mX[63] = false;
  (void)LC;
  (void)t2;
  return 0;
}
