// modbase/game/graphics/models.h -- generated: C++ declarations for symbols/graphics/models.sym.
// Game classes and functions with ABI-exact types (pointers are void*); do not edit by hand.
// [hook] marks a function whose entry a sweet-dx trampoline can replay.
#pragma once

#include "core/types.h"

class AnimationBase
{
public:
    AnimationBase();  // 0x0040e8d8 C1/C2
};

class AnimationCtrl
{
public:
    AnimationCtrl();  // 0x00418368 C1/C2
};

class SkeletalAnim
{
public:
    SkeletalAnim();  // 0x00448610 C1/C2
    s32 init(s32, s32, void*, s32);  // 0x004486c8 [hook]
    s32 calculate();  // 0x00448bb0 [hook]
    void* init_helper();  // 0x00877d6c [hook]
    s32 init_helper_877EB0(void*, s32, u32);  // 0x00877eb0 [hook]
    s32 play_helper(s32);  // 0x00877fb4 [hook]
};
