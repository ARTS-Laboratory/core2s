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
  static int32_T _cg_const_1[184] = { 0, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17,
    17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 18, 19, 20,
    21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 23, 25, 25, 25, 25,
    25, 37, 41, 41, 41, 45, 48, 48, 52, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53,
    53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 55, 56, 56, 56, 56, 56, 56,
    56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 68, 68, 68, 69, 69, 69, 69, 69,
    69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 70, 71, 71, 71, 71, 71,
    71, 71, 71, 71, 71, 71, 71, 71, 71, 71, 71, 71, 71, 71, 71, 71, 71, 71, 71,
    71, 71, 71, 71, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73,
    73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 73, 74, 75,
    76, 77 };

  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  (void)LC;
  out = t2->mTDXY_P;
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
  out.mIr[9] = 28;
  out.mIr[10] = 30;
  out.mIr[11] = 31;
  out.mIr[12] = 32;
  out.mIr[13] = 33;
  out.mIr[14] = 34;
  out.mIr[15] = 35;
  out.mIr[16] = 36;
  out.mIr[17] = 32;
  out.mIr[18] = 32;
  out.mIr[19] = 32;
  out.mIr[20] = 32;
  out.mIr[21] = 5;
  out.mIr[22] = 42;
  out.mIr[23] = 5;
  out.mIr[24] = 42;
  out.mIr[25] = 7;
  out.mIr[26] = 19;
  out.mIr[27] = 20;
  out.mIr[28] = 21;
  out.mIr[29] = 22;
  out.mIr[30] = 26;
  out.mIr[31] = 28;
  out.mIr[32] = 30;
  out.mIr[33] = 31;
  out.mIr[34] = 37;
  out.mIr[35] = 38;
  out.mIr[36] = 39;
  out.mIr[37] = 8;
  out.mIr[38] = 37;
  out.mIr[39] = 38;
  out.mIr[40] = 39;
  out.mIr[41] = 9;
  out.mIr[42] = 13;
  out.mIr[43] = 40;
  out.mIr[44] = 41;
  out.mIr[45] = 10;
  out.mIr[46] = 40;
  out.mIr[47] = 41;
  out.mIr[48] = 1;
  out.mIr[49] = 2;
  out.mIr[50] = 25;
  out.mIr[51] = 30;
  out.mIr[52] = 4;
  out.mIr[53] = 6;
  out.mIr[54] = 16;
  out.mIr[55] = 6;
  out.mIr[56] = 15;
  out.mIr[57] = 19;
  out.mIr[58] = 20;
  out.mIr[59] = 21;
  out.mIr[60] = 22;
  out.mIr[61] = 23;
  out.mIr[62] = 24;
  out.mIr[63] = 26;
  out.mIr[64] = 30;
  out.mIr[65] = 34;
  out.mIr[66] = 35;
  out.mIr[67] = 36;
  out.mIr[68] = 3;
  out.mIr[69] = 18;
  out.mIr[70] = 17;
  out.mIr[71] = 12;
  out.mIr[72] = 33;
  out.mIr[73] = 43;
  out.mIr[74] = 44;
  out.mIr[75] = 45;
  out.mIr[76] = 46;
  (void)LC;
  (void)t2;
  return 0;
}
