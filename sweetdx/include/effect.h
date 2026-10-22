#pragma once

#include "types.h"
#include "util/vec3.h"

class Effect
{
public:
    static void spawn(u32 effectId, const Vec3* position,
                      const Vec3* rotation, const Vec3* scale);
};
