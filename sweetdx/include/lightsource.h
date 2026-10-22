#pragma once

#include "sead.h"
#include "util/vec3.h"

// A dynamic light. Layout confirmed by use in the light-actor mod.
class LightSource : public sead::IDisposer
{
public:
    LightSource();
    ~LightSource();

    bool update(u32 type, Vec3* position, f32* _24, f32* attenuationRadius,
                f32* _2C, sead::Color4f* color, f32* _40, f32* _44);
    bool update(Vec3* position, f32* _24, f32* attenuationRadius,
                f32* _2C, sead::Color4f* color, f32* _40, f32* _44);

    bool _10;                  // +0x10  initialised?
    u32* _14;                  // +0x14
    Vec3 position;             // +0x18
    f32  _24;                  // +0x24
    f32  attenuationRadius;    // +0x28  init 1.0
    f32  _2C;                  // +0x2C
    sead::Color4f color;       // +0x30
    f32  _40;                  // +0x40
    f32  _44;                  // +0x44
};
