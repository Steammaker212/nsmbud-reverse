#pragma once

#include "sead.h"
#include "util/vec3.h"
#include "util/vec3i.h"
#include "util/mtx34.h"

//
// A running particle effect. The game owns the pool; callers get a handle they
// can follow or stop.
//
class Effect
{
public:
    Effect();

    bool update(Vec3* position, Vec3i* rotation, Vec3* scale);
    bool setEffectId(s32 effectId);

    // `effectId` indexes the game's effect table. Rotation is an integer vector;
    // position and scale are floats. Any pointer except position may be null.
    static bool spawn(s32 effectId, Vec3* position, Vec3i* rotation, Vec3* scale);

    Mtx34 mtx;      // +0x00
    u8    _30;      // +0x30
    u32*  _34;      // +0x34
    s32   _38;      // +0x38
    u32*  _3C;      // +0x3C
};


class EffectWrapper : public sead::IDisposer
{
public:
    EffectWrapper();

    bool update(s32 effectId, Vec3* position, Vec3i* rotation, Vec3* scale);

    // Follow an existing effect instead of spawning a new one.
    void follow(const Vec3* position);
    void stop();
};
