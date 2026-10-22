#pragma once

#include "types.h"
#include "vec3.h"
#include "vec3i.h"

// 3x4 row-major transform used by ModelWrapper::setMtx. 12 floats, 0x30 bytes.
struct Mtx34
{
    f32 m[3][4];

    void rotateAndTranslate(const Vec3i& rotation, const Vec3& position);
    void translate(const Vec3& position);
};
