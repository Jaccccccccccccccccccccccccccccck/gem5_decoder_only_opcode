/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:50
 */

#ifndef __PARAMS__ArmSPI__
#define __PARAMS__ArmSPI__

namespace gem5 {
class ArmSPIGen;
} // namespace gem5

#include "params/ArmInterruptPin.hh"

namespace gem5
{
struct ArmSPIParams
    : public ArmInterruptPinParams
{
    gem5::ArmSPIGen * create() const;
};

} // namespace gem5

#endif // __PARAMS__ArmSPI__