// modbase/game/graphics/rendering.h -- generated: C++ declarations for symbols/graphics/rendering.sym.
// Game classes and functions with ABI-exact types (pointers are void*); do not edit by hand.
// [hook] marks a function whose entry a sweet-dx trampoline can replay.
#pragma once

#include "core/types.h"

class EffectData
{
public:
    EffectData();  // 0x00235dd0 C1/C2
    s32 setEffectId(s32);  // 0x00235ea0 [hook]
    void init();  // 0x0023601c [hook]
    s32 update(void*, void*, void*);  // 0x00236430 [hook]
    s32 setEffectId_helper(u32);  // 0x00239bdc [hook]
    s32 setEffectId_helper_239BF4(void*, s32, u32);  // 0x00239bf4 [hook]
    s32 init_helper();  // 0x00881ba4 [hook]
};

class MistEffect
{
public:
    MistEffect();  // 0x005a9488 C1/C2
    s32 vf5();  // 0x005a94bc [hook]
    s32 vf49();  // 0x005a9720 [hook]
    s32 vf50();  // 0x005a9730 [hook]
    bool vf0(void*);  // 0x005a974c [hook]
    void* vf1();  // 0x005a9850 [hook]
    void vf3();  // 0x005a98c4 [hook]
};
