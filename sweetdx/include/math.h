#pragma once

#include "types.h"

#define M_2PI       6.283185307f
#define M_PI        3.141592653f
#define M_PI_2      1.570796326f
#define M_PI_4      0.785398163f
#define M_SQRT2     1.414213562f
#define M_SQRT1_2   0.707106781f

// These resolve to the game's own math routines through symbols/nsmbudx.sym.
f32 sin(f32 x);
f32 cos(f32 x);
f32 tan(f32 x);
f32 asin(f32 x);
f32 acos(f32 x);
f32 atan2(f32 y, f32 x);
f32 exp(f32 x);
f32 log(f32 x);
f32 pow(f32 x, f32 y);
f32 sqrt(f32 a);
f32 fmod(f32 a, f32 b);

inline f32 fabs(f32 x) { return (x < 0.0f) ? -x : x; }

template <class T> const T& min(const T& a, const T& b) { return (a < b) ? a : b; }
template <class T> const T& max(const T& a, const T& b) { return (a < b) ? b : a; }

// Angle helpers. The game stores angles as a fixed-point 32-bit value where a
// full turn is 2^32; these convert to and from radians.
inline f32 deg_to_rad(f32 deg) { return (deg * M_PI) / 180.0f; }
inline f32 rad_to_deg(f32 rad) { return (rad * 180.0f) / M_PI; }

inline u32 fix_rad(f32 val)
{
    val = fmod(val, M_2PI);
    if (val < 0.0f) val += M_2PI;
    return (u32)(val * 683565276.0f);
}

inline f32 unfix_rad(u32 val) { return (f32)val / 683565248.0f; }

inline u32 fix_deg(f32 val)
{
    val = fmod(val, 360.0f);
    if (val < 0.0f) val += 360.0f;
    return (u32)(val * 11930465.0f);
}

inline f32 unfix_deg(u32 val) { return (f32)val / 11930465.0f; }
