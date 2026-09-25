/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv7/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv7_d632b26e_1_ds_sys_struct.h"
#include "PW_SMRv7_d632b26e_1_ds_dxm_p.h"
#include "PW_SMRv7_d632b26e_1_ds.h"
#include "PW_SMRv7_d632b26e_1_ds_externals.h"
#include "PW_SMRv7_d632b26e_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv7_d632b26e_1_ds_dxm_p(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  static int32_T _cg_const_1[184] = { 0, 3, 3, 3, 9, 16, 22, 23, 24, 25, 26, 27,
    28, 29, 30, 32, 36, 40, 44, 48, 52, 56, 57, 58, 59, 59, 59, 60, 61, 63, 65,
    71, 78, 84, 85, 86, 87, 88, 89, 90, 91, 92, 94, 94, 94, 94, 94, 94, 94, 94,
    94, 94, 94, 94, 94, 94, 94, 94, 94, 95, 96, 96, 96, 96, 96, 96, 96, 96, 96,
    96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96,
    96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96,
    96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96,
    96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96,
    96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96,
    97, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98,
    98 };

  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  (void)LC;
  out = t2->mDXM_P;
  out.mNumCol = 183ULL;
  out.mNumRow = 56ULL;
  for (b = 0; b < 184; b++) {
    out.mJc[b] = _cg_const_1[b];
  }

  out.mIr[0] = 0;
  out.mIr[1] = 36;
  out.mIr[2] = 37;
  out.mIr[3] = 3;
  out.mIr[4] = 4;
  out.mIr[5] = 5;
  out.mIr[6] = 6;
  out.mIr[7] = 7;
  out.mIr[8] = 9;
  out.mIr[9] = 3;
  out.mIr[10] = 4;
  out.mIr[11] = 5;
  out.mIr[12] = 6;
  out.mIr[13] = 7;
  out.mIr[14] = 8;
  out.mIr[15] = 9;
  out.mIr[16] = 4;
  out.mIr[17] = 5;
  out.mIr[18] = 6;
  out.mIr[19] = 7;
  out.mIr[20] = 8;
  out.mIr[21] = 9;
  out.mIr[22] = 10;
  out.mIr[23] = 10;
  out.mIr[24] = 10;
  out.mIr[25] = 10;
  out.mIr[26] = 10;
  out.mIr[27] = 10;
  out.mIr[28] = 10;
  out.mIr[29] = 10;
  out.mIr[30] = 11;
  out.mIr[31] = 12;
  out.mIr[32] = 19;
  out.mIr[33] = 20;
  out.mIr[34] = 21;
  out.mIr[35] = 22;
  out.mIr[36] = 19;
  out.mIr[37] = 20;
  out.mIr[38] = 21;
  out.mIr[39] = 22;
  out.mIr[40] = 23;
  out.mIr[41] = 24;
  out.mIr[42] = 25;
  out.mIr[43] = 26;
  out.mIr[44] = 23;
  out.mIr[45] = 24;
  out.mIr[46] = 25;
  out.mIr[47] = 26;
  out.mIr[48] = 27;
  out.mIr[49] = 28;
  out.mIr[50] = 29;
  out.mIr[51] = 30;
  out.mIr[52] = 27;
  out.mIr[53] = 28;
  out.mIr[54] = 29;
  out.mIr[55] = 30;
  out.mIr[56] = 31;
  out.mIr[57] = 31;
  out.mIr[58] = 32;
  out.mIr[59] = 0;
  out.mIr[60] = 0;
  out.mIr[61] = 0;
  out.mIr[62] = 36;
  out.mIr[63] = 0;
  out.mIr[64] = 37;
  out.mIr[65] = 40;
  out.mIr[66] = 41;
  out.mIr[67] = 42;
  out.mIr[68] = 43;
  out.mIr[69] = 44;
  out.mIr[70] = 46;
  out.mIr[71] = 40;
  out.mIr[72] = 41;
  out.mIr[73] = 42;
  out.mIr[74] = 43;
  out.mIr[75] = 44;
  out.mIr[76] = 45;
  out.mIr[77] = 46;
  out.mIr[78] = 41;
  out.mIr[79] = 42;
  out.mIr[80] = 43;
  out.mIr[81] = 44;
  out.mIr[82] = 45;
  out.mIr[83] = 46;
  out.mIr[84] = 47;
  out.mIr[85] = 47;
  out.mIr[86] = 47;
  out.mIr[87] = 47;
  out.mIr[88] = 47;
  out.mIr[89] = 47;
  out.mIr[90] = 47;
  out.mIr[91] = 47;
  out.mIr[92] = 48;
  out.mIr[93] = 49;
  out.mIr[94] = 10;
  out.mIr[95] = 10;
  out.mIr[96] = 47;
  out.mIr[97] = 47;
  (void)LC;
  (void)t2;
  return 0;
}
