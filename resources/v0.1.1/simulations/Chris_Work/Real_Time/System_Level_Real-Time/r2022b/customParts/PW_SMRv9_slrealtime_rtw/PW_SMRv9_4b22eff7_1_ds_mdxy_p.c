/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv9/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_sys_struct.h"
#include "PW_SMRv9_4b22eff7_1_ds_mdxy_p.h"
#include "PW_SMRv9_4b22eff7_1_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_externals.h"
#include "PW_SMRv9_4b22eff7_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv9_4b22eff7_1_ds_mdxy_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  static int32_T _cg_const_1[251] = { 0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
    12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
    12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
    12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 16, 16,
    16, 16, 16, 16, 16, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17,
    17, 17, 17, 17, 17, 17, 17, 17, 17, 21, 21, 21, 21, 23, 23, 24, 24, 24, 24,
    24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24,
    24, 24, 24, 24, 24, 24, 24, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
    28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
    28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
    28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
    28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28,
    28, 28, 28, 28, 28, 28, 28, 28 };

  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  (void)LC;
  out = t2->mMDXY_P;
  out.mNumCol = 250ULL;
  out.mNumRow = 92ULL;
  for (b = 0; b < 251; b++) {
    out.mJc[b] = _cg_const_1[b];
  }

  out.mIr[0] = 62;
  out.mIr[1] = 63;
  out.mIr[2] = 69;
  out.mIr[3] = 75;
  out.mIr[4] = 48;
  out.mIr[5] = 49;
  out.mIr[6] = 55;
  out.mIr[7] = 61;
  out.mIr[8] = 62;
  out.mIr[9] = 63;
  out.mIr[10] = 69;
  out.mIr[11] = 75;
  out.mIr[12] = 48;
  out.mIr[13] = 49;
  out.mIr[14] = 55;
  out.mIr[15] = 61;
  out.mIr[16] = 61;
  out.mIr[17] = 48;
  out.mIr[18] = 49;
  out.mIr[19] = 55;
  out.mIr[20] = 61;
  out.mIr[21] = 61;
  out.mIr[22] = 75;
  out.mIr[23] = 61;
  out.mIr[24] = 62;
  out.mIr[25] = 63;
  out.mIr[26] = 69;
  out.mIr[27] = 75;
  (void)LC;
  (void)t2;
  return 0;
}
