// modbase/game/level/level.h -- generated: C++ declarations for symbols/level/level.sym.
// Game classes and functions with ABI-exact types (pointers are void*); do not edit by hand.
// [hook] marks a function whose entry a sweet-dx trampoline can replay.
#pragma once

#include "core/types.h"

class RumbleMgr
{
public:
    RumbleMgr(s32);  // 0x00456b44 C1/C2
    void* create();  // 0x008264f8 [hook]
};

class TileGod
{
public:
    TileGod();  // 0x005cef18 C1/C2
    ~TileGod();  // D0 0x005cf908
    s32 onCreate();  // 0x005cef60 [hook]
    s32 onExecute();  // 0x005cf660 [hook]
    s32 onExecute_helper();  // 0x005cf690 [hook]
    bool checkRTTI(void*);  // 0x005cf804 [hook]
    static void* getRTTI();  // 0x005cf894 [hook]
};
