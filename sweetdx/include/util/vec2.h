#pragma once

#include "types.h"

struct Vec2
{
    f32 x;
    f32 y;

    Vec2() : x(0.0f), y(0.0f) { }
    Vec2(f32 x_, f32 y_) : x(x_), y(y_) { }

    Vec2 operator+(const Vec2& o) const { return Vec2(x + o.x, y + o.y); }
    Vec2 operator-(const Vec2& o) const { return Vec2(x - o.x, y - o.y); }
    Vec2 operator*(f32 s) const { return Vec2(x * s, y * s); }
};
