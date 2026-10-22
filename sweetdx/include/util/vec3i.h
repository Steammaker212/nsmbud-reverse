#pragma once

#include "types.h"
#include "util/vec3.h"

// An integer 3D vector. The engine uses this for rotations, which are stored as
// fixed-point angles rather than floats.
struct Vec3i
{
    s32 x;
    s32 y;
    s32 z;

    Vec3i() : x(0), y(0), z(0) { }
    Vec3i(s32 v) : x(v), y(v), z(v) { }
    Vec3i(s32 x_, s32 y_, s32 z_) : x(x_), y(y_), z(z_) { }

    void set(s32 v) { x = y = z = v; }
    void set(s32 x_, s32 y_, s32 z_) { x = x_; y = y_; z = z_; }

    s32& operator[](int i) { return i == 0 ? x : (i == 1 ? y : z); }

    bool operator==(const Vec3i& o) const { return x == o.x && y == o.y && z == o.z; }

    Vec3i operator+(const Vec3i& o) const { return Vec3i(x + o.x, y + o.y, z + o.z); }
    Vec3i operator-(const Vec3i& o) const { return Vec3i(x - o.x, y - o.y, z - o.z); }
};
