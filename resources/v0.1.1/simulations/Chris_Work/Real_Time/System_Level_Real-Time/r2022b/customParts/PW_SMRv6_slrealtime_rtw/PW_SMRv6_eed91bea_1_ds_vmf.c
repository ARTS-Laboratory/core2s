/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'PW_SMRv6/Solver Configuration'.
 */

#include "ne_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_sys_struct.h"
#include "PW_SMRv6_eed91bea_1_ds_vmf.h"
#include "PW_SMRv6_eed91bea_1_ds.h"
#include "PW_SMRv6_eed91bea_1_ds_externals.h"
#include "PW_SMRv6_eed91bea_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T PW_SMRv6_eed91bea_1_ds_vmf(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  static boolean_T _cg_const_1[222] = { true, true, false, true, true, false,
    true, true, true, true, true, true, true, true, false, false, false, false,
    false, false, false, true, true, true, true, true, true, true, true, true,
    false, true, true, false, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true };

  PmBoolVector out;
  int32_T b;
  boolean_T t0[222];
  (void)t1;
  (void)LC;
  out = t2->mVMF;
  for (b = 0; b < 222; b++) {
    t0[b] = _cg_const_1[b];
  }

  for (b = 0; b < 222; b++) {
    out.mX[b] = t0[b];
  }

  (void)LC;
  (void)t2;
  return 0;
}
