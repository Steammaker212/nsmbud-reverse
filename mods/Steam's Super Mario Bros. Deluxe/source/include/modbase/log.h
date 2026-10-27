// modbase/log.h -- one-line debug log for mods.
//
// Where it goes is MODBASE_NETWORK_LOG (modbase/build_config.h): 1 sends it to
// the TCP log server (code/debug/socket_log.cpp), 0 writes it through
// svcOutputDebugString, which Ryujinx prints in its log as
//   KernelSvc OutputDebugString: [ModBase] ...
// (on hardware it goes to the debug channel). codedx's LOG() and socket_log
// follow the same switch. Pieces are concatenated, so no printf is needed in a
// -nostdlib module:
//
//   ModBase::log("archive '", name, "' is not loaded");
//
// Deluxe (Switch) v1.0.0 only.

#pragma once

#include "core/types.h"

#if __has_include("modbase/build_config.h")
#include "modbase/build_config.h"     // MODBASE_NETWORK_LOG
#endif
#ifndef MODBASE_NETWORK_LOG
#define MODBASE_NETWORK_LOG 1
#endif

namespace ModBase {

// One line to the log (no newline needed), wherever MODBASE_NETWORK_LOG points.
void logRaw(const char* text, u32 length);

struct LogLine
{
    char buf[256];
    u32 len = 0;

    void put(const char* s);
    void put(u32 v);
    void put(s32 v);
    void put(bool v);
    // Fixed point, 3 decimals -- no printf in a -nostdlib module. This overload
    // is also what keeps a float argument from being ambiguous between the two
    // integer overloads.
    void put(f32 v);
};

template <typename... Parts>
inline void log(const Parts&... parts)
{
    LogLine line;
    line.put("[ModBase] ");
    (line.put(parts), ...);
    logRaw(line.buf, line.len);
}

} // namespace ModBase
