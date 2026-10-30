#pragma once

#include "nintendo/sead.h"

class LightSource : sead::IDisposer
{
public:
    LightSource();
    ~LightSource();

    bool update(u32 type, Vec3* position, f32* _24, f32* attenuationRadius, f32* _2C, sead::Color4f* color, f32* _40, f32* _44);
    bool update(Vec3* position, f32* _24, f32* attenuationRadius, f32* _2C, sead::Color4f* color, f32* _40, f32* _44);

    bool _10;                       // 10   Inited?
    u32* _14;                       // 14   Pointer to a class
    Vec3 position;                  // 18
    f32 _24;                        // 24
    f32 attenuationRadius;          // 28   Inited to 1.0
    f32 _2C;                        // 2C
    sead::Color4f color;            // 30
    f32 _40;                        // 40
    f32 _44;                        // 44


    // Game API: generated from symbols/ (addresses there); types are ABI-exact.
public:
    void* update1_helper();  // 0x004148f4 [hook]
    bool unkUpdate3();  // 0x00423ecc [hook]
    s32 update1_helper_helper_424120();  // 0x00424120 [hook]
    void* update1_helper_4242A8(void*);  // 0x004242a8 [hook]
};
