#pragma once

#include "sead.h"
#include "util/vec3.h"

// A spherical reveal mask: punches a hole in the darkness overlay.
class LightMask
{
public:
    LightMask();

    virtual bool init(sead::Heap* heap, u32 type);
    virtual bool update();
    virtual bool draw();

    f32  radius;     // +0x04
    f32  _8;         // +0x08
    Vec3 position;   // +0x0C
    u32* _18;        // +0x18
    u32  _1C;        // +0x1C
    u32  type;       // +0x20
    u32  _24;        // +0x24
};
