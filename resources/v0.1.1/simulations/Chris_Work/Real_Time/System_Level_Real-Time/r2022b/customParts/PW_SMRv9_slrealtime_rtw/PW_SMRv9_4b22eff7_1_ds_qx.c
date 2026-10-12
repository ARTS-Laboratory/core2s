/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv9/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_sys_struct.h"
#include "PW_SMRv9_4b22eff7_1_ds_qx.h"
#include "PW_SMRv9_4b22eff7_1_ds.h"
#include "PW_SMRv9_4b22eff7_1_ds_externals.h"
#include "PW_SMRv9_4b22eff7_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv9_4b22eff7_1_ds_qx(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  (void)LC;
  out = t2->mQX;
  out.mX[0] = 2.0;
  out.mX[1] = 2.0;
  out.mX[2] = 2.0;
  out.mX[3] = 2.0E+6;
  out.mX[4] = 3.0E+6;
  out.mX[5] = 5.0;
  out.mX[6] = 2.0;
  out.mX[7] = 6.0E+6;
  out.mX[8] = -2.0E+6;
  out.mX[9] = 6.0;
  out.mX[10] = -2.0;
  out.mX[11] = 0.00017351730756675032;
  out.mX[12] = -6.9420045908724477E-5;
  out.mX[13] = -6.9420045908724477E-5;
  out.mX[14] = -1.7355011477181119E-5;
  out.mX[15] = -6.9420045908724477E-5;
  out.mX[16] = 0.00017351730756675032;
  out.mX[17] = -6.9420045908724477E-5;
  out.mX[18] = -1.7355011477181119E-5;
  out.mX[19] = -6.9420045908724477E-5;
  out.mX[20] = -6.9420045908724477E-5;
  out.mX[21] = 0.00017351730756675032;
  out.mX[22] = -1.7355011477181119E-5;
  out.mX[23] = 3.0;
  out.mX[24] = 5.0;
  out.mX[25] = 3.0;
  out.mX[26] = -3.0;
  out.mX[27] = 6.0;
  out.mX[28] = 3.0E+6;
  out.mX[29] = 3.0E+6;
  out.mX[30] = 3.0E+6;
  out.mX[31] = -1.0E+6;
  out.mX[32] = 3.0E+6;
  out.mX[33] = 2.0E+6;
  out.mX[34] = 2.0E+6;
  out.mX[35] = 3.0;
  out.mX[36] = 10.0;
  out.mX[37] = -6.0;
  out.mX[38] = -3.0;
  out.mX[39] = -6.0;
  out.mX[40] = 8.0;
  out.mX[41] = 2.0;
  out.mX[42] = 3.0E+6;
  out.mX[43] = 2.0;
  out.mX[44] = 4.0E+6;
  out.mX[45] = -1.0E+6;
  out.mX[46] = 4.0;
  out.mX[47] = -1.0;
  out.mX[48] = 2.0;
  out.mX[49] = 1.0;
  out.mX[50] = 1.0;
  out.mX[51] = 1.0;
  out.mX[52] = 2.0;
  out.mX[53] = 1.0;
  out.mX[54] = 1.0;
  out.mX[55] = 1.0;
  out.mX[56] = 2.0;
  out.mX[57] = 4.0E+6;
  out.mX[58] = -2.0E+6;
  out.mX[59] = 5.0;
  out.mX[60] = 5.0E+6;
  out.mX[61] = -1.0E+6;
  out.mX[62] = -2.0E+6;
  out.mX[63] = 6.0E+6;
  out.mX[64] = 3.0;
  out.mX[65] = 3.0E+6;
  out.mX[66] = -2.0;
  out.mX[67] = 3.0;
  out.mX[68] = -2.0E+6;
  out.mX[69] = 3.0E+6;
  out.mX[70] = 2.0E+6;
  out.mX[71] = 2.0E+6;
  out.mX[72] = 2.0E+6;
  out.mX[73] = 2.0;
  out.mX[74] = 2.0;
  out.mX[75] = -1.0E+6;
  out.mX[76] = 2.0E+6;
  out.mX[77] = -1.0;
  out.mX[78] = 2.0;
  out.mX[79] = -1.7355011477181119E-5;
  out.mX[80] = -1.7355011477181119E-5;
  out.mX[81] = -1.7355011477181119E-5;
  out.mX[82] = 5.2065097712793352E-5;
  (void)LC;
  (void)t2;
  return 0;
}
