// This file was autogenerated.  Do not edit!
// See elog-gen.py for more details
#pragma once

#include <string>
#include <tuple>
#include <type_traits>
#include <sdbusplus/exception.hpp>
#include <phosphor-logging/log.hpp>
#include <phosphor-logging/elog.hpp>

namespace sdbusplus
{
namespace org
{
namespace open_power
{
namespace Host
{
namespace Error
{
    struct Checkstop;
} // namespace Error
} // namespace Host
} // namespace open_power
} // namespace org
} // namespace sdbusplus

namespace sdbusplus
{
namespace org
{
namespace open_power
{
namespace Host
{
namespace Error
{
    struct WatchdogTimedOut;
} // namespace Error
} // namespace Host
} // namespace open_power
} // namespace org
} // namespace sdbusplus


namespace phosphor
{

namespace logging
{

namespace org
{
namespace open_power
{
namespace Host
{
namespace _Checkstop
{


}  // namespace _Checkstop

struct Checkstop
{
    static constexpr auto L = level::ERR;
    using metadata_types = std::tuple<>;

};

} // namespace Host
} // namespace open_power
} // namespace org


namespace details
{

template <>
struct map_exception_type<sdbusplus::org::open_power::Host::Error::Checkstop>
{
    using type = org::open_power::Host::Checkstop;
};

}

namespace org
{
namespace open_power
{
namespace Host
{
namespace _WatchdogTimedOut
{


}  // namespace _WatchdogTimedOut

struct WatchdogTimedOut
{
    static constexpr auto L = level::ERR;
    using metadata_types = std::tuple<>;

};

} // namespace Host
} // namespace open_power
} // namespace org


namespace details
{

template <>
struct map_exception_type<sdbusplus::org::open_power::Host::Error::WatchdogTimedOut>
{
    using type = org::open_power::Host::WatchdogTimedOut;
};

}

} // namespace logging

} // namespace phosphor
