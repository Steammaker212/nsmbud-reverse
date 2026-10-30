// modbase/game/player/yoshi.h -- generated: C++ declarations for symbols/player/yoshi.sym.
// Game classes and functions with ABI-exact types (pointers are void*); do not edit by hand.
// [hook] marks a function whose entry a sweet-dx trampoline can replay.
#pragma once

#include "core/types.h"

class BabyYoshiBaseProbably
{
public:
    BabyYoshiBaseProbably(void*, s32);  // 0x005d7040 C1/C2
    void* ctor_helper(s32);  // 0x005e454c [hook]
};

class Yoshi
{
public:
    Yoshi(void*);  // 0x007cb7d0 C1/C2
    void* ctor_helper();  // 0x003e45e4 [hook]
    void* ctor_helper_7D6354(s32);  // 0x007d6354 [hook]
};

class YoshiFlame
{
public:
    YoshiFlame();  // 0x007d2640 C1/C2
};
