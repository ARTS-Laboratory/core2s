#include "rte_PW_SMRv9_parameters.h"
#include "PW_SMRv9.h"
#include "PW_SMRv9_cal.h"

extern PW_SMRv9_cal_type PW_SMRv9_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&PW_SMRv9_cal_impl, (void**)&PW_SMRv9_cal, sizeof(PW_SMRv9_cal_type),
      2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime
