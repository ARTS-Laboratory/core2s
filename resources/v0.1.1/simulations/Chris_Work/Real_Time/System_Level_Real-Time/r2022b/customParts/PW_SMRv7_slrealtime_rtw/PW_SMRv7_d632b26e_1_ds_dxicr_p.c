/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv7/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv7_d632b26e_1_ds_sys_struct.h"
#include "PW_SMRv7_d632b26e_1_ds_dxicr_p.h"
#include "PW_SMRv7_d632b26e_1_ds.h"
#include "PW_SMRv7_d632b26e_1_ds_externals.h"
#include "PW_SMRv7_d632b26e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv7_d632b26e_1_ds_dxicr_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  static int32_T _cg_const_1[184] = { 0, 2, 3, 4, 8, 12, 16, 21, 26, 31, 33, 35,
    37, 39, 41, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 43, 44, 44, 44, 44, 44,
    48, 52, 56, 61, 66, 71, 73, 75, 77, 79, 81, 82, 83, 84, 85, 85, 85, 85, 85,
    85, 85, 85, 85, 85, 85, 89, 93, 97, 98, 99, 99, 99, 99, 99, 99, 99, 99, 99,
    99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99,
    99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 100, 100, 100, 100, 100, 100,
    100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,
    100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,
    104, 104, 104, 104, 104, 104, 108, 108, 108, 108, 108, 108, 108, 109, 109,
    109, 109, 109, 109, 109, 109, 109, 109, 113, 113, 113, 113, 113, 114, 115,
    115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115, 115,
    115, 115, 115 };

  static int32_T _cg_const_2[115] = { 0, 8, 0, 1, 3, 4, 5, 7, 3, 4, 5, 7, 3, 4,
    5, 7, 2, 3, 4, 5, 6, 2, 3, 4, 5, 6, 2, 3, 4, 5, 6, 2, 7, 2, 6, 2, 3, 2, 4, 2,
    5, 2, 8, 9, 11, 12, 13, 15, 11, 12, 13, 15, 11, 12, 13, 15, 10, 11, 12, 13,
    14, 10, 11, 12, 13, 14, 10, 11, 12, 13, 14, 10, 11, 10, 15, 10, 14, 10, 12,
    10, 13, 10, 0, 1, 1, 3, 4, 5, 7, 3, 4, 5, 6, 3, 4, 5, 6, 2, 2, 8, 11, 12, 13,
    15, 11, 12, 13, 14, 9, 11, 12, 13, 14, 10, 10 };

  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  (void)LC;
  out = t2->mDXICR_P;
  out.mNumCol = 183ULL;
  out.mNumRow = 16ULL;
  for (b = 0; b < 184; b++) {
    out.mJc[b] = _cg_const_1[b];
  }

  for (b = 0; b < 115; b++) {
    out.mIr[b] = _cg_const_2[b];
  }

  (void)LC;
  (void)t2;
  return 0;
}
