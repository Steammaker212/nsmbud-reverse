#pragma once

#include "math.h"
#include "types.h"

class Vec3;

// A 2D float vector. Deliberately mirrors the engine's own: the game treats Vec2
// and Vec3 as layout-compatible for the leading two floats, and code passes one
// where the other is expected.
struct Vec2
{
    f32 x;
    f32 y;

    Vec2() : x(0.0f), y(0.0f) { }
    Vec2(f32 v) : x(v), y(v) { }
    Vec2(f32 x_, f32 y_) : x(x_), y(y_) { }

    // Truncating conversion: the z component is dropped.
    inline Vec2(const Vec3& v);

    void set(f32 v) { x = v; y = v; }
    void set(f32 x_, f32 y_) { x = x_; y = y_; }

    f32& operator[](int i) { return i ? y : x; }

    Vec2 operator+(const Vec2& o) const { return Vec2(x + o.x, y + o.y); }
    Vec2 operator-(const Vec2& o) const { return Vec2(x - o.x, y - o.y); }
    Vec2 operator*(f32 s) const { return Vec2(x * s, y * s); }
    Vec2 operator/(f32 s) const { return Vec2(x / s, y / s); }

    Vec2& operator+=(const Vec2& o) { x += o.x; y += o.y; return *this; }
    Vec2& operator-=(const Vec2& o) { x -= o.x; y -= o.y; return *this; }
    Vec2& operator*=(f32 s) { x *= s; y *= s; return *this; }

    f32 magSq() const { return x * x + y * y; }
    f32 mag() const { return sqrt(magSq()); }
    f32 dot(const Vec2& o) const { return x * o.x + y * o.y; }
    f32 distSq(const Vec2& o) const { return (x - o.x) * (x - o.x) + (y - o.y) * (y - o.y); }
    f32 dist(const Vec2& o) const { return sqrt(distSq(o)); }
};
