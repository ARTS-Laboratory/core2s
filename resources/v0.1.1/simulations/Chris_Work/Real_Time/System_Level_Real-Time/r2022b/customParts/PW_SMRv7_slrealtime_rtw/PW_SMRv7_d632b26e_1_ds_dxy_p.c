/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv7/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv7_d632b26e_1_ds_sys_struct.h"
#include "PW_SMRv7_d632b26e_1_ds_dxy_p.h"
#include "PW_SMRv7_d632b26e_1_ds.h"
#include "PW_SMRv7_d632b26e_1_ds_externals.h"
#include "PW_SMRv7_d632b26e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv7_d632b26e_1_ds_dxy_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  static int32_T _cg_const_1[184] = { 0, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 17, 18, 19,
    20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 22, 24, 24, 24, 24,
    24, 35, 39, 39, 39, 43, 46, 46, 50, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
    51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 53, 54, 54, 54, 54, 54, 54,
    54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 66, 66, 66, 67, 67, 67, 67, 67,
    67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 68, 69, 69, 69, 69, 69,
    69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69,
    69, 69, 69, 69, 71, 71, 71, 71, 71, 71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
    71, 71, 71, 71, 71, 71, 71, 71, 71, 71, 71, 71, 71, 71, 71, 71, 71, 72, 73,
    74, 75 };

  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  (void)LC;
  out = t2->mDXY_P;
  out.mNumCol = 183ULL;
  out.mNumRow = 47ULL;
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
  out.mIr[7] = 24;
  out.mIr[8] = 26;
  out.mIr[9] = 30;
  out.mIr[10] = 31;
  out.mIr[11] = 32;
  out.mIr[12] = 33;
  out.mIr[13] = 34;
  out.mIr[14] = 35;
  out.mIr[15] = 36;
  out.mIr[16] = 32;
  out.mIr[17] = 32;
  out.mIr[18] = 32;
  out.mIr[19] = 32;
  out.mIr[20] = 5;
  out.mIr[21] = 42;
  out.mIr[22] = 5;
  out.mIr[23] = 42;
  out.mIr[24] = 7;
  out.mIr[25] = 19;
  out.mIr[26] = 20;
  out.mIr[27] = 21;
  out.mIr[28] = 22;
  out.mIr[29] = 26;
  out.mIr[30] = 30;
  out.mIr[31] = 31;
  out.mIr[32] = 37;
  out.mIr[33] = 38;
  out.mIr[34] = 39;
  out.mIr[35] = 8;
  out.mIr[36] = 37;
  out.mIr[37] = 38;
  out.mIr[38] = 39;
  out.mIr[39] = 9;
  out.mIr[40] = 13;
  out.mIr[41] = 40;
  out.mIr[42] = 41;
  out.mIr[43] = 10;
  out.mIr[44] = 40;
  out.mIr[45] = 41;
  out.mIr[46] = 1;
  out.mIr[47] = 2;
  out.mIr[48] = 25;
  out.mIr[49] = 30;
  out.mIr[50] = 4;
  out.mIr[51] = 6;
  out.mIr[52] = 16;
  out.mIr[53] = 6;
  out.mIr[54] = 15;
  out.mIr[55] = 19;
  out.mIr[56] = 20;
  out.mIr[57] = 21;
  out.mIr[58] = 22;
  out.mIr[59] = 23;
  out.mIr[60] = 24;
  out.mIr[61] = 26;
  out.mIr[62] = 30;
  out.mIr[63] = 34;
  out.mIr[64] = 35;
  out.mIr[65] = 36;
  out.mIr[66] = 3;
  out.mIr[67] = 18;
  out.mIr[68] = 17;
  out.mIr[69] = 12;
  out.mIr[70] = 33;
  out.mIr[71] = 43;
  out.mIr[72] = 44;
  out.mIr[73] = 45;
  out.mIr[74] = 46;
  (void)LC;
  (void)t2;
  return 0;
}
