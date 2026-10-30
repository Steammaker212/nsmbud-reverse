// log.cpp -- see modbase/log.h.

#include "modbase/log.h"
#include "core/log.h"     // socket_log_send

namespace ModBase {

void logRaw(const char* text, u32 length)
{
#if MODBASE_NETWORK_LOG
    // The socket is a byte stream, so the line is ended here (svc 0x27 needs no newline).
    socket_log_send(text, length);
    socket_log_send("\n", 1);
#else
    // svcOutputDebugString(const char* str, size_t size): svc 0x27 in AArch32.
    register const char* r0 asm("r0") = text;
    register u32 r1 asm("r1") = length;
    asm volatile("svc #0x27" : "+r"(r0) : "r"(r1) : "memory");
#endif
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

void LogLine::put(s32 v)
{
    if (v < 0)
    {
        if (len < sizeof(buf) - 1)
            buf[len++] = '-';
        // Negate in unsigned space so INT_MIN does not overflow.
        put(0u - (u32)v);
        return;
    }
    put((u32)v);
}

void LogLine::put(bool v)
{
    put(v ? "true" : "false");
}

void LogLine::put(f32 v)
{
    if (!(v == v))            // NaN
    {
        put("nan");
        return;
    }

    if (v < 0.0f)
    {
        if (len < sizeof(buf) - 1)
            buf[len++] = '-';
        v = -v;
    }
    if (v > 32767.0f)         // far outside any coordinate; keep it short
    {
        put("inf");
        return;
    }

    u32 whole = (u32)v;
    // Round the fraction rather than truncate, so 12.9999 prints as 13.000.
    u32 frac = (u32)((v - (f32)whole) * 1000.0f + 0.5f);
    if (frac >= 1000)
    {
        whole += 1;
        frac = 0;
    }

    put(whole);
    put(".");

    char digits[3] = { char('0' + (frac / 100) % 10),
                       char('0' + (frac / 10) % 10),
                       char('0' + frac % 10) };
    for (u32 i = 0; i < 3 && len < sizeof(buf) - 1; i++)
        buf[len++] = digits[i];
    buf[len] = '\0';
}

} // namespace ModBase
