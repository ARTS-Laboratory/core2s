#include "rte_PW_SMRv6_parameters.h"
#include "PW_SMRv6.h"
#include "PW_SMRv6_cal.h"

extern PW_SMRv6_cal_type PW_SMRv6_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&PW_SMRv6_cal_impl, (void**)&PW_SMRv6_cal, sizeof(PW_SMRv6_cal_type),
      2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime
