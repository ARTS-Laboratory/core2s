#include "rte_PW_SMRv7_parameters.h"
#include "PW_SMRv7.h"
#include "PW_SMRv7_cal.h"

extern PW_SMRv7_cal_type PW_SMRv7_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&PW_SMRv7_cal_impl, (void**)&PW_SMRv7_cal, sizeof(PW_SMRv7_cal_type),
      2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime
