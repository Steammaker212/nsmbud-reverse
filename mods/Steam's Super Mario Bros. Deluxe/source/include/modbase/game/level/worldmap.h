// modbase/game/level/worldmap.h -- generated: C++ declarations for symbols/level/worldmap.sym.
// Game classes and functions with ABI-exact types (pointers are void*); do not edit by hand.
// [hook] marks a function whose entry a sweet-dx trampoline can replay.
#pragma once

#include "core/types.h"

class CourseNameTable
{
public:
    static s32 init(u32, u32, void*);  // 0x0047c13c [hook]
};

class CourseSelectMgr
{
public:
    static CourseSelectMgr* instance;  // 0x00c89e18
};

class CourseSelectTask
{
public:
    CourseSelectTask(s32);  // 0x001fd6e4 C1/C2
    void* create();  // 0x000248e8 [hook]
};

class StorySave
{
public:
    static StorySave* instance;  // 0x00cc6d78
};

class WorldNameTable
{
public:
    s32 init(u32);  // 0x0047bec0 [hook]
};
