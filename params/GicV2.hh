/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:50
 */

#ifndef __PARAMS__GicV2__
#define __PARAMS__GicV2__

namespace gem5 {
class GicV2;
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/BaseGic.hh"

namespace gem5
{
struct GicV2Params
    : public BaseGicParams
{
    gem5::GicV2 * create() const;
    Addr cpu_addr;
    Tick cpu_pio_delay;
    Addr cpu_size;
    Addr dist_addr;
    Tick dist_pio_delay;
    bool gem5_extensions;
    Tick int_latency;
    uint32_t it_lines;
};

} // namespace gem5

#endif // __PARAMS__GicV2__
