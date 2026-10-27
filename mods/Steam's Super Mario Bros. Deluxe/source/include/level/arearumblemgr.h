#pragma once

#include "nintendo/sead.h"

class AreaRumbleMgr : public sead::IDisposer
{
public:
    static AreaRumbleMgr* instance;

    void rumble(s32 intensity, s8 unk2, s8 unk3, s8 unk4);


    // Game API: generated from symbols/ (addresses there); types are ABI-exact.
public:
    void* createInstance();  // 0x004002f8 [hook]
    s32 rumbleForPlayer(s32, s32, s32, s32);  // 0x004006b0 [hook]
    s32 rumble2(s32, s8, s32);  // 0x00400a34 [hook]
    s32 rumbleForPlayer_helper(f32);  // 0x007dad70 [hook]
    s32 rumbleForPlayer_helper_7DBA1C(s32, void*, s32, s32, s32);  // 0x007dba1c [hook]
};
