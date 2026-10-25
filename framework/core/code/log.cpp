// log.cpp -- see nsmbudx/log.h.

#include "nsmbudx/log.h"

namespace nsmbudx {

void logRaw(const char* text, u32 length)
{
    // svcOutputDebugString(const char* str, size_t size): svc 0x27 in AArch32.
    register const char* r0 asm("r0") = text;
    register u32 r1 asm("r1") = length;
    asm volatile("svc #0x27" : "+r"(r0) : "r"(r1) : "memory");
}

void LogLine::put(const char* s)
{
    if (!s)
        s = "(null)";
    for (u32 i = 0; s[i] && len < sizeof(buf) - 1 && i < 160; i++)
        buf[len++] = s[i];
    buf[len] = '\0';
}

void LogLine::put(u32 v)
{
    char tmp[11];
    u32 n = 0;
    do {
        tmp[n++] = char('0' + v % 10);
        v /= 10;
    } while (v && n < sizeof(tmp));
    while (n && len < sizeof(buf) - 1)
        buf[len++] = tmp[--n];
    buf[len] = '\0';
}

} // namespace nsmbudx
