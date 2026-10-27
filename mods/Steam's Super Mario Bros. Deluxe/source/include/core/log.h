#pragma once

#include "nintendo/nn.h"

void socket_log(const char* str);
void socket_log_send(const char* str, u32 length);   // to the log server only, if connected

inline void LOG(const char* fmt, ...)
{
    va_list args;
	va_start(args, fmt);

    char buf[0x1000];
    if (nn::util::VSNPrintf(buf, 0x1000, fmt, args) > 0)
        socket_log(buf);

    va_end(args);
}
