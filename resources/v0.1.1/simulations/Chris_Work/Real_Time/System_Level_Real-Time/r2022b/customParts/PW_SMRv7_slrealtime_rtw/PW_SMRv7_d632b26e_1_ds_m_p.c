/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv7/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv7_d632b26e_1_ds_sys_struct.h"
#include "PW_SMRv7_d632b26e_1_ds_m_p.h"
#include "PW_SMRv7_d632b26e_1_ds.h"
#include "PW_SMRv7_d632b26e_1_ds_externals.h"
#include "PW_SMRv7_d632b26e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv7_d632b26e_1_ds_m_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  static int32_T _cg_const_1[184] = { 0, 1, 2, 3, 5, 8, 10, 11, 12, 13, 14, 15,
    16, 17, 18, 19, 21, 23, 25, 27, 29, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
    42, 45, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 56, 56, 56, 56, 56, 56, 56,
    56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
    56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
    56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
    56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
    56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
    56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
    56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
    56 };

  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  (void)LC;
  out = t2->mM_P;
  out.mNumCol = 183ULL;
  out.mNumRow = 183ULL;
  for (b = 0; b < 184; b++) {
    out.mJc[b] = _cg_const_1[b];
  }

  out.mIr[0] = 27;
  out.mIr[1] = 0;
  out.mIr[2] = 1;
  out.mIr[3] = 2;
  out.mIr[4] = 4;
  out.mIr[5] = 2;
  out.mIr[6] = 3;
  out.mIr[7] = 4;
  out.mIr[8] = 2;
  out.mIr[9] = 3;
  out.mIr[10] = 6;
  out.mIr[11] = 8;
  out.mIr[12] = 7;
  out.mIr[13] = 13;
  out.mIr[14] = 12;
  out.mIr[15] = 9;
  out.mIr[16] = 10;
  out.mIr[17] = 11;
  out.mIr[18] = 5;
  out.mIr[19] = 14;
  out.mIr[20] = 15;
  out.mIr[21] = 14;
  out.mIr[22] = 15;
  out.mIr[23] = 16;
  out.mIr[24] = 17;
  out.mIr[25] = 16;
  out.mIr[26] = 17;
  out.mIr[27] = 18;
  out.mIr[28] = 19;
  out.mIr[29] = 18;
  out.mIr[30] = 19;
  out.mIr[31] = 21;
  out.mIr[32] = 22;
  out.mIr[33] = 20;
  out.mIr[34] = 23;
  out.mIr[35] = 24;
  out.mIr[36] = 28;
  out.mIr[37] = 29;
  out.mIr[38] = 25;
  out.mIr[39] = 26;
  out.mIr[40] = 30;
  out.mIr[41] = 32;
  out.mIr[42] = 30;
  out.mIr[43] = 31;
  out.mIr[44] = 32;
  out.mIr[45] = 30;
  out.mIr[46] = 31;
  out.mIr[47] = 34;
  out.mIr[48] = 36;
  out.mIr[49] = 35;
  out.mIr[50] = 37;
  out.mIr[51] = 41;
  out.mIr[52] = 40;
  out.mIr[53] = 38;
  out.mIr[54] = 39;
  out.mIr[55] = 33;
  (void)LC;
  (void)t2;
  return 0;
}
