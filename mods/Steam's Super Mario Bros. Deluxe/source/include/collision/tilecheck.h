#pragma once

#include "util/vec2.h"

class TileCheck
{
public:
    struct Result
    {
        u8 _0;
        u32 _4;
        u32 _8;
        u32 _C;
        u32 _10;
        u32 _14;
        u32 _18;
        u32 _1C;
        u32 _20;
    };

    struct Param
    {
        u8 _0;
        u8 _1;
        u8 _2;
        u8 _3;
        u32 _4;
        u32 _8;
    };

public:
    TileCheck(const Param& parm);
    // 0x0015DA30 (symbols/collision/collision_mgr.sym declares it with Result&).
    // It was declared with Result* here, which mangles to another name that no
    // .sym defines, so the call linked to nothing and crashed the game. The
    // game always passes a real Result (0x60003D38); its own is 0x28 bytes on
    // the stack there, so give it a little room (CheckResult).
    bool check(Result& result, const Vec2& pos1, const Vec2& pos2, u32 unk);

    struct CheckResult
    {
        Result result;
        u32 _pad[4];
    };

    u8 _0;
    u8 _1;
    u8 _2;
    u8 _3;
    u32 _4;
    u32 _8;
    u32 _C;
    u32 _10;
    u32 _14;
    u32 _18;
    u32 _1C;
    u32 _20;
    u32 _24;
    u32 _28;
    u32 _2C;
    u32 _30;
    u32 _34;
    u32 _38;
    u32 _3C;
    u32 _40;
    u32 _44;
    u32 _48;
};
