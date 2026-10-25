// nsmbudx/log.h -- one-line debug log for mods.
//
// Writes through svcOutputDebugString. Ryujinx prints it in its log as
//   KernelSvc OutputDebugString: [nsmbudx] ...
// and on hardware it goes to the debug channel. Pieces are concatenated, so no
// printf is needed in a -nostdlib module:
//
//   nsmbudx::log("archive '", name, "' is not loaded");
//
// Deluxe (Switch) v1.0.0 only.

#pragma once

#include "types.h"

namespace nsmbudx {

void logRaw(const char* text, u32 length);

struct LogLine
{
    char buf[256];
    u32 len = 0;

    void put(const char* s);
    void put(u32 v);
};

template <typename... Parts>
inline void log(const Parts&... parts)
{
    LogLine line;
    line.put("[nsmbudx] ");
    (line.put(parts), ...);
    logRaw(line.buf, line.len);
}

} // namespace nsmbudx
