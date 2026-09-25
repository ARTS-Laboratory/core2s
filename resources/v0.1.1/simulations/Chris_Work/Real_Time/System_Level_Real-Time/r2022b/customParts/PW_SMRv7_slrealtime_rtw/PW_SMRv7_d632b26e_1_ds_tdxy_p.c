/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv7/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv7_d632b26e_1_ds_sys_struct.h"
#include "PW_SMRv7_d632b26e_1_ds_tdxy_p.h"
#include "PW_SMRv7_d632b26e_1_ds.h"
#include "PW_SMRv7_d632b26e_1_ds_externals.h"
#include "PW_SMRv7_d632b26e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv7_d632b26e_1_ds_tdxy_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  static int32_T _cg_const_1[184] = { 0, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
    13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 14, 15, 16,
    17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 19, 21, 21, 21, 21,
    21, 30, 34, 34, 34, 38, 41, 41, 45, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46,
    46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 48, 49, 49, 49, 49, 49, 49,
    49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 58, 58, 58, 59, 59, 59, 59, 59,
    59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 60, 61, 61, 61, 61, 61,
    61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61,
    61, 61, 61, 61, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63,
    63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 64, 65,
    66, 67 };

  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  (void)LC;
  out = t2->mTDXY_P;
  out.mNumCol = 183ULL;
  out.mNumRow = 42ULL;
  for (b = 0; b < 184; b++) {
    out.mJc[b] = _cg_const_1[b];
  }

  out.mIr[0] = 11;
  out.mIr[1] = 14;
  out.mIr[2] = 19;
  out.mIr[3] = 20;
  out.mIr[4] = 21;
  out.mIr[5] = 22;
  out.mIr[6] = 23;
  out.mIr[7] = 26;
  out.mIr[8] = 27;
  out.mIr[9] = 28;
  out.mIr[10] = 29;
  out.mIr[11] = 30;
  out.mIr[12] = 31;
  out.mIr[13] = 27;
  out.mIr[14] = 27;
  out.mIr[15] = 27;
  out.mIr[16] = 27;
  out.mIr[17] = 5;
  out.mIr[18] = 37;
  out.mIr[19] = 5;
  out.mIr[20] = 37;
  out.mIr[21] = 7;
  out.mIr[22] = 19;
  out.mIr[23] = 20;
  out.mIr[24] = 21;
  out.mIr[25] = 22;
  out.mIr[26] = 26;
  out.mIr[27] = 32;
  out.mIr[28] = 33;
  out.mIr[29] = 34;
  out.mIr[30] = 8;
  out.mIr[31] = 32;
  out.mIr[32] = 33;
  out.mIr[33] = 34;
  out.mIr[34] = 9;
  out.mIr[35] = 13;
  out.mIr[36] = 35;
  out.mIr[37] = 36;
  out.mIr[38] = 10;
  out.mIr[39] = 35;
  out.mIr[40] = 36;
  out.mIr[41] = 1;
  out.mIr[42] = 2;
  out.mIr[43] = 24;
  out.mIr[44] = 26;
  out.mIr[45] = 4;
  out.mIr[46] = 6;
  out.mIr[47] = 16;
  out.mIr[48] = 6;
  out.mIr[49] = 15;
  out.mIr[50] = 20;
  out.mIr[51] = 21;
  out.mIr[52] = 22;
  out.mIr[53] = 23;
  out.mIr[54] = 26;
  out.mIr[55] = 29;
  out.mIr[56] = 30;
  out.mIr[57] = 31;
  out.mIr[58] = 3;
  out.mIr[59] = 18;
  out.mIr[60] = 17;
  out.mIr[61] = 12;
  out.mIr[62] = 28;
  out.mIr[63] = 38;
  out.mIr[64] = 39;
  out.mIr[65] = 40;
  out.mIr[66] = 41;
  (void)LC;
  (void)t2;
  return 0;
}
