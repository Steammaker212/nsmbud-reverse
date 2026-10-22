#pragma once

#include "types.h"

// The subset of Nintendo's SEAD library that actors actually touch.
namespace sead
{

class IDisposer
{
public:
    IDisposer();
    virtual ~IDisposer();

    void* _4;
    void* _8;
    u8    _C;
};

// A non-owning string view. Same 8-byte shape as SafeString.
class SafeString
{
public:
    SafeString();
    SafeString(const char* s);

    const char* cstr() const { return mStr; }

    const char* mStr;
    u32         mLength;
};

struct Color4f
{
    f32 r, g, b, a;
};

struct Rect
{
    f32 x, y, w, h;
};

class Heap
{
public:
    static Heap* getCurrentHeap();
};

template <typename T>
class SafeStringBase : public SafeString
{
};

} // namespace sead

// ---------------------------------------------------------------------------
// Random numbers
// ---------------------------------------------------------------------------
//
// The game runs a single global generator; there is no per-object state worth
// exposing. getU32 returns a full 32-bit value.
//
namespace sead {

class Random
{
public:
    u32 getU32();
};

class GlobalRandom : public Random
{
public:
    static GlobalRandom* instance;
};

} // namespace sead


// Range helpers. These scale a 32-bit random into [0, max) by taking the high
// half of the product, which avoids the modulo bias a plain % would introduce.
inline u32 randU32()
{
    return sead::GlobalRandom::instance->getU32();
}

inline u32 randU32(u32 max)
{
    u64 x = (u64)sead::GlobalRandom::instance->getU32() * max;
    return (u32)(x >> 32);
}

inline s32 randS32(s32 min, s32 max)
{
    s32 range = max - min;
    u64 x = (u64)sead::GlobalRandom::instance->getU32() * range;
    return min + (s32)(x >> 32);
}

inline bool randBool()
{
    return (sead::GlobalRandom::instance->getU32() & 1) != 0;
}

// 1 / 2^32, for converting a u32 into [0, 1).
#define SEAD_RAND_F32_SCALE 0.00000000023283064f

inline f32 randF32()
{
    return (f32)sead::GlobalRandom::instance->getU32() * SEAD_RAND_F32_SCALE;
}

inline f32 randF32(f32 max)
{
    return (f32)sead::GlobalRandom::instance->getU32() * SEAD_RAND_F32_SCALE * max;
}

inline f32 randF32(f32 min, f32 max)
{
    return min + randF32() * (max - min);
}