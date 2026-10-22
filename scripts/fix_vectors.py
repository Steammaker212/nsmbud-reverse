"""Give Vec2/Vec3 the conversions and math the actor sources rely on.

Two concrete failures:
  * PlaySound(label, position) passes a Vec3 where const Vec2& is wanted.
  * mrsun.cpp calls cos/sin without including math.h -- in codedx that came in
    transitively through util/vec2.h.
"""
import io
import os

INC = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx\include"


def write(rel, text):
    p = os.path.join(INC, rel.replace("/", os.sep))
    os.makedirs(os.path.dirname(p), exist_ok=True)
    io.open(p, "w", encoding="utf-8", newline="\n").write(text)
    print(f"  wrote {rel}")


write("util/vec2.h", r"""#pragma once

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
""")

write("util/vec3.h", r"""#pragma once

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
""")

write("util/vec3i.h", r"""#pragma once

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
""")

print("vec2/vec3/vec3i rewritten with conversions and math include")
