// modbase/game/actors/profiles.h -- generated: C++ declarations for symbols/actors/profiles.sym.
// Game classes and functions with ABI-exact types (pointers are void*); do not edit by hand.
// [hook] marks a function whose entry a sweet-dx trampoline can replay.
#pragma once

#include "core/types.h"

class ArchiveManagerMaybe
{
public:
    s32 loadPack(void*, s32);  // 0x00821b28 [hook]
};

class LoadProfileArchives
{
public:
    s32 helper();  // 0x003ee6ec [hook]
};
