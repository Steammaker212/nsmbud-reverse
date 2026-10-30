// modbase/game/audio/sound.h -- generated: C++ declarations for symbols/audio/sound.sym.
// Game classes and functions with ABI-exact types (pointers are void*); do not edit by hand.
// [hook] marks a function whose entry a sweet-dx trampoline can replay.
#pragma once

#include "core/types.h"

class BasicSoundActor1
{
public:
    void vf1();  // 0x0002452c [hook]
    s32 vf9(void*, void*, s32);  // 0x0002453c [hook]
    s32 vf10(s32, void*, s32, s32);  // 0x0002459c [hook]
    void* playSound(void*, void*, void*);  // 0x0081380c
};

class BasicSoundActor2
{
public:
    void vf1();  // 0x00024604 [hook]
    s32 vf9(void*, void*, s32);  // 0x00024614 [hook]
    s32 vf10(s32, void*, s32, s32);  // 0x00024674 [hook]
    s32 vf0();  // 0x00813bd4
    void* play(void*, void*, void*);  // 0x00813bd8
};

class MovingSoundActorHandle
{
public:
    ~MovingSoundActorHandle();  // D1/D2 0x00026d64, D0 0x00026d94
};
