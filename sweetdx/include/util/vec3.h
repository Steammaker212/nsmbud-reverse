#pragma once

#include "math.h"
#include "types.h"
#include "util/vec2.h"

// A 3D float vector.
struct Vec3
{
    f32 x;
    f32 y;
    f32 z;

    Vec3() : x(0.0f), y(0.0f), z(0.0f) { }
    Vec3(f32 v) : x(v), y(v), z(v) { }
    Vec3(f32 x_, f32 y_, f32 z_) : x(x_), y(y_), z(z_) { }
    Vec3(const Vec2& v) : x(v.x), y(v.y), z(0.0f) { }

    void set(f32 v) { x = y = z = v; }
    void set(f32 x_, f32 y_, f32 z_) { x = x_; y = y_; z = z_; }
    void set(const Vec3& o) { x = o.x; y = o.y; z = o.z; }

    f32& operator[](int i) { return i == 0 ? x : (i == 1 ? y : z); }

    Vec3 operator+(const Vec3& o) const { return Vec3(x + o.x, y + o.y, z + o.z); }
    Vec3 operator-(const Vec3& o) const { return Vec3(x - o.x, y - o.y, z - o.z); }
    Vec3 operator*(f32 s) const { return Vec3(x * s, y * s, z * s); }
    Vec3 operator/(f32 s) const { return Vec3(x / s, y / s, z / s); }

    Vec3& operator+=(const Vec3& o) { x += o.x; y += o.y; z += o.z; return *this; }
    Vec3& operator-=(const Vec3& o) { x -= o.x; y -= o.y; z -= o.z; return *this; }
    Vec3& operator*=(f32 s) { x *= s; y *= s; z *= s; return *this; }

    f32 magSq() const { return x * x + y * y + z * z; }
    f32 mag() const { return sqrt(magSq()); }
    f32 dot(const Vec3& o) const { return x * o.x + y * o.y + z * o.z; }
    f32 distSq(const Vec3& o) const { return (*this - o).magSq(); }
    f32 dist(const Vec3& o) const { return sqrt(distSq(o)); }

    Vec3 cross(const Vec3& o) const
    {
        return Vec3(y * o.z - z * o.y,
                    z * o.x - x * o.z,
                    x * o.y - y * o.x);
    }
};

// Defined here because Vec2's declaration could not see Vec3.
inline Vec2::Vec2(const Vec3& v) : x(v.x), y(v.y) { }
