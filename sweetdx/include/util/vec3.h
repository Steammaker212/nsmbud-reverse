#pragma once

#include "types.h"

struct Vec3
{
    f32 x;
    f32 y;
    f32 z;

    Vec3() : x(0.0f), y(0.0f), z(0.0f) { }
    Vec3(f32 x_, f32 y_, f32 z_) : x(x_), y(y_), z(z_) { }

    Vec3 operator+(const Vec3& o) const { return Vec3(x + o.x, y + o.y, z + o.z); }
    Vec3 operator-(const Vec3& o) const { return Vec3(x - o.x, y - o.y, z - o.z); }
    Vec3 operator*(f32 s) const { return Vec3(x * s, y * s, z * s); }
};
