/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_FmtStackTrace_HH__
#define __DEBUG_FmtStackTrace_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union FmtStackTrace
{
    ~FmtStackTrace() {}
    SimpleFlag FmtStackTrace = {
        "FmtStackTrace", "Print a stack trace after every debug message", true
    };
} FmtStackTrace;
} // namespace unions

inline constexpr const auto& FmtStackTrace = 
    ::gem5::debug::unions::FmtStackTrace.FmtStackTrace;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_FmtStackTrace_HH__