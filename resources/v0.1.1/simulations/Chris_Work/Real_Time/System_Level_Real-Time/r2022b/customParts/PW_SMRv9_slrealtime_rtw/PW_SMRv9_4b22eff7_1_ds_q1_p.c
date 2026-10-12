/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv9/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_sys_struct.h"
#include "PW_SMRv9_4b22eff7_1_ds_q1_p.h"
#include "PW_SMRv9_4b22eff7_1_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_externals.h"
#include "PW_SMRv9_4b22eff7_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv9_4b22eff7_1_ds_q1_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  (void)LC;
  out = t2->mQ1_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 250ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 47;
  out.mIr[0] = 55;
  out.mIr[1] = 56;
  out.mIr[2] = 57;
  out.mIr[3] = 65;
  out.mIr[4] = 66;
  out.mIr[5] = 68;
  out.mIr[6] = 71;
  out.mIr[7] = 75;
  out.mIr[8] = 77;
  out.mIr[9] = 84;
  out.mIr[10] = 85;
  out.mIr[11] = 86;
  out.mIr[12] = 94;
  out.mIr[13] = 95;
  out.mIr[14] = 96;
  out.mIr[15] = 99;
  out.mIr[16] = 100;
  out.mIr[17] = 112;
  out.mIr[18] = 113;
  out.mIr[19] = 119;
  out.mIr[20] = 120;
  out.mIr[21] = 122;
  out.mIr[22] = 124;
  out.mIr[23] = 129;
  out.mIr[24] = 135;
  out.mIr[25] = 141;
  out.mIr[26] = 145;
  out.mIr[27] = 147;
  out.mIr[28] = 151;
  out.mIr[29] = 152;
  out.mIr[30] = 153;
  out.mIr[31] = 155;
  out.mIr[32] = 157;
  out.mIr[33] = 158;
  out.mIr[34] = 159;
  out.mIr[35] = 161;
  out.mIr[36] = 162;
  out.mIr[37] = 163;
  out.mIr[38] = 164;
  out.mIr[39] = 166;
  out.mIr[40] = 174;
  out.mIr[41] = 175;
  out.mIr[42] = 176;
  out.mIr[43] = 177;
  out.mIr[44] = 188;
  out.mIr[45] = 189;
  out.mIr[46] = 245;
  (void)LC;
  (void)t2;
  return 0;
}
