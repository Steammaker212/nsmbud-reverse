#pragma once

#include "types.h"
#include "util/vec3.h"

class Enemy;

//
// Tracks how many ice actors are freezing an enemy and when it should break out.
//
// An enemy is frozen by being surrounded: each ice projectile registers itself,
// and when enough have landed the enemy becomes a solid ice block. This manager
// owns that bookkeeping.
//
class EnemyFreezeMgr
{
public:
    // Describes one freezing event.
    struct Info
    {
        u32  settings;   // +0x00  bit0: horizontally large, bit1: vertically large
        Vec3 position;   // +0x04
        Vec3 scale;      // +0x10
        u32  _1C;        // +0x1C
    };

    // Tuning for how the ice breaks.
    struct Flags
    {
        u8 breakTime;    // +0x00  stored into breakTime
        u8 _1;           // +0x01  gravity-related
        u8 _2;           // +0x02  gravity-related
    };

    EnemyFreezeMgr(Enemy* owner);

    bool freeze(const Info& info, u32 count);
    void setFlags(const Flags& flags);

    u8       iceActorCount;      // +0x00
    u32      iceActorIds[12];    // +0x04
    u8       breakTime;          // +0x34
    u8       _35;                // +0x35
    u8       _36;                // +0x36
    u32      _38;                // +0x38
    Enemy*   owner;              // +0x3C
    s16      _40;                // +0x40
    u16      _42;                // +0x42
    u16      _44;                // +0x44
    u16      _46;                // +0x46
    u8       _48;                // +0x48
    u8       _49;                // +0x49
    u8       _4A;                // +0x4A
    u8       _4B;                // +0x4B
    u8       _4C;                // +0x4C
};
