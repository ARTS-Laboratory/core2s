/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv9/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_sys_struct.h"
#include "PW_SMRv9_4b22eff7_1_ds_qx_p.h"
#include "PW_SMRv9_4b22eff7_1_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_externals.h"
#include "PW_SMRv9_4b22eff7_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv9_4b22eff7_1_ds_qx_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  static int32_T _cg_const_1[251] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3,
    4, 5, 5, 6, 6, 6, 7, 7, 7, 7, 9, 9, 11, 11, 11, 11, 11, 11, 11, 15, 19, 23,
    23, 23, 23, 23, 23, 23, 23, 24, 27, 28, 28, 28, 29, 30, 30, 30, 30, 30, 30,
    30, 30, 30, 30, 30, 30, 32, 33, 33, 33, 33, 33, 33, 34, 35, 35, 38, 38, 41,
    41, 41, 41, 41, 42, 42, 42, 42, 42, 42, 43, 43, 43, 43, 43, 43, 44, 44, 44,
    44, 46, 46, 48, 48, 48, 48, 51, 54, 57, 57, 59, 59, 60, 61, 64, 64, 65, 66,
    68, 70, 70, 71, 71, 71, 71, 71, 71, 71, 71, 72, 73, 74, 75, 75, 75, 75, 75,
    75, 75, 75, 75, 75, 75, 77, 79, 79, 79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
    79, 79, 79, 79, 79, 79, 79, 79, 79, 79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
    79, 79, 79, 79, 79, 79, 79, 79, 79, 79, 79, 79, 79, 79, 79, 79, 79, 79, 79,
    79, 79, 79, 79, 79, 79, 83, 83, 83, 83, 83 };

  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  (void)LC;
  out = t2->mQX_P;
  out.mNumCol = 250ULL;
  out.mNumRow = 250ULL;
  for (b = 0; b < 251; b++) {
    out.mJc[b] = _cg_const_1[b];
  }

  out.mIr[0] = 55;
  out.mIr[1] = 56;
  out.mIr[2] = 57;
  out.mIr[3] = 65;
  out.mIr[4] = 66;
  out.mIr[5] = 68;
  out.mIr[6] = 71;
  out.mIr[7] = 75;
  out.mIr[8] = 164;
  out.mIr[9] = 77;
  out.mIr[10] = 163;
  out.mIr[11] = 84;
  out.mIr[12] = 85;
  out.mIr[13] = 86;
  out.mIr[14] = 245;
  out.mIr[15] = 84;
  out.mIr[16] = 85;
  out.mIr[17] = 86;
  out.mIr[18] = 245;
  out.mIr[19] = 84;
  out.mIr[20] = 85;
  out.mIr[21] = 86;
  out.mIr[22] = 245;
  out.mIr[23] = 94;
  out.mIr[24] = 95;
  out.mIr[25] = 122;
  out.mIr[26] = 124;
  out.mIr[27] = 96;
  out.mIr[28] = 99;
  out.mIr[29] = 100;
  out.mIr[30] = 112;
  out.mIr[31] = 159;
  out.mIr[32] = 113;
  out.mIr[33] = 119;
  out.mIr[34] = 120;
  out.mIr[35] = 95;
  out.mIr[36] = 122;
  out.mIr[37] = 124;
  out.mIr[38] = 95;
  out.mIr[39] = 122;
  out.mIr[40] = 124;
  out.mIr[41] = 129;
  out.mIr[42] = 135;
  out.mIr[43] = 141;
  out.mIr[44] = 145;
  out.mIr[45] = 188;
  out.mIr[46] = 147;
  out.mIr[47] = 189;
  out.mIr[48] = 151;
  out.mIr[49] = 152;
  out.mIr[50] = 153;
  out.mIr[51] = 151;
  out.mIr[52] = 152;
  out.mIr[53] = 153;
  out.mIr[54] = 151;
  out.mIr[55] = 152;
  out.mIr[56] = 153;
  out.mIr[57] = 155;
  out.mIr[58] = 159;
  out.mIr[59] = 157;
  out.mIr[60] = 158;
  out.mIr[61] = 112;
  out.mIr[62] = 155;
  out.mIr[63] = 159;
  out.mIr[64] = 161;
  out.mIr[65] = 162;
  out.mIr[66] = 77;
  out.mIr[67] = 163;
  out.mIr[68] = 75;
  out.mIr[69] = 164;
  out.mIr[70] = 166;
  out.mIr[71] = 174;
  out.mIr[72] = 175;
  out.mIr[73] = 176;
  out.mIr[74] = 177;
  out.mIr[75] = 145;
  out.mIr[76] = 188;
  out.mIr[77] = 147;
  out.mIr[78] = 189;
  out.mIr[79] = 84;
  out.mIr[80] = 85;
  out.mIr[81] = 86;
  out.mIr[82] = 245;
  (void)LC;
  (void)t2;
  return 0;
}
