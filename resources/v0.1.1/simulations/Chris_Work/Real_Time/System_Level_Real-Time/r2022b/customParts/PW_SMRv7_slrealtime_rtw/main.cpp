/* Main generated for Simulink Real-Time model PW_SMRv7 */
#include <ModelInfo.hpp>
#include <utilities.hpp>
#include "PW_SMRv7.h"
#include "rte_PW_SMRv7_parameters.h"

/* Task descriptors */
slrealtime::TaskInfo task_1( 0u, std::bind(PW_SMRv7_step), slrealtime::TaskInfo::PERIODIC, 0.01, 0, 40);

/* Executable base address for XCP */
#ifdef __linux__
extern char __executable_start;
static uintptr_t const base_address = reinterpret_cast<uintptr_t>(&__executable_start);
#else
/* Set 0 as placeholder, to be parsed later from /proc filesystem */
static uintptr_t const base_address = 0;
#endif

/* Model descriptor */
slrealtime::ModelInfo PW_SMRv7_Info =
{
    "PW_SMRv7",
    PW_SMRv7_initialize,
    PW_SMRv7_terminate,
    []()->char const*& { return PW_SMRv7_M->errorStatus; },
    []()->unsigned char& { return PW_SMRv7_M->Timing.stopRequestedFlag; },
    { task_1 },
    slrealtime::getSegmentVector()
};

int main(int argc, char *argv[]) {
    slrealtime::BaseAddress::set(base_address);
    return slrealtime::runModel(argc, argv, PW_SMRv7_Info);
}
