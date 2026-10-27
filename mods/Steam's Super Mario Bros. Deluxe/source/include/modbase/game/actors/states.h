// modbase/game/actors/states.h -- generated: C++ declarations for symbols/actors/states.sym.
// Game classes and functions with ABI-exact types (pointers are void*); do not edit by hand.
// [hook] marks a function whose entry a sweet-dx trampoline can replay.
#pragma once

#include "core/types.h"

class NullState
{
public:
    s32 getId();  // 0x00013db4 [hook]
};

class StateMgrExt
{
public:
    void* changeState(void*);  // 0x00818290 [hook]
};
