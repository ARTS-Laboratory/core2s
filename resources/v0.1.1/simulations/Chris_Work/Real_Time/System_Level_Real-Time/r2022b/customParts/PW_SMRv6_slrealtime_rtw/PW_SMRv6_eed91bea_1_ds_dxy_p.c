/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv6/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_sys_struct.h"
#include "PW_SMRv6_eed91bea_1_ds_dxy_p.h"
#include "PW_SMRv6_eed91bea_1_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_externals.h"
#include "PW_SMRv6_eed91bea_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv6_eed91bea_1_ds_dxy_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  static int32_T _cg_const_1[223] = { 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 4, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 7, 8, 8, 8, 8, 8, 11, 12, 12, 12, 12, 12,
    12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
    12, 12, 12, 12, 12, 13, 13, 13, 13, 13, 14, 14, 14, 14, 14, 14, 14, 14, 14,
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 15, 15, 15, 15, 15, 15,
    15, 15, 15, 15, 15, 15, 19, 21, 24, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27,
    27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 28, 28, 28, 28, 28, 28, 28, 28, 28,
    28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
    28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 29, 29, 29, 29, 29, 29, 29, 29,
    29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 30, 31,
    32, 32, 32, 32, 32, 32, 32 };

  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  (void)LC;
  out = t2->mDXY_P;
  out.mNumCol = 222ULL;
  out.mNumRow = 21ULL;
  for (b = 0; b < 223; b++) {
    out.mJc[b] = _cg_const_1[b];
  }

  out.mIr[0] = 12;
  out.mIr[1] = 16;
  out.mIr[2] = 12;
  out.mIr[3] = 12;
  out.mIr[4] = 12;
  out.mIr[5] = 12;
  out.mIr[6] = 18;
  out.mIr[7] = 18;
  out.mIr[8] = 6;
  out.mIr[9] = 10;
  out.mIr[10] = 11;
  out.mIr[11] = 7;
  out.mIr[12] = 8;
  out.mIr[13] = 3;
  out.mIr[14] = 2;
  out.mIr[15] = 4;
  out.mIr[16] = 10;
  out.mIr[17] = 11;
  out.mIr[18] = 17;
  out.mIr[19] = 5;
  out.mIr[20] = 17;
  out.mIr[21] = 1;
  out.mIr[22] = 2;
  out.mIr[23] = 11;
  out.mIr[24] = 1;
  out.mIr[25] = 2;
  out.mIr[26] = 11;
  out.mIr[27] = 9;
  out.mIr[28] = 16;
  out.mIr[29] = 15;
  out.mIr[30] = 20;
  out.mIr[31] = 19;
  (void)LC;
  (void)t2;
  return 0;
}
