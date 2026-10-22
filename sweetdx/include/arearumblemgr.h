#pragma once

#include "sead.h"

//
// Drives controller rumble for the area the player is currently in. Rumble
// requests from actors are routed here so overlapping effects can be blended.
//
class AreaRumbleMgr : public sead::IDisposer
{
public:
    static AreaRumbleMgr* instance;

    // `intensity` is the rumble strength. The three trailing bytes are
    // effect-shaping parameters; actors commonly pass (n, 3, 0, 0) or
    // (21, 3, 0, 0) for a short jolt.
    void rumble(s32 intensity, s8 unk2, s8 unk3, s8 unk4);
};
