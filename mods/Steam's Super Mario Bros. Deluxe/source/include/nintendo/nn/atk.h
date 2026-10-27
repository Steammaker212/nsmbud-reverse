#pragma once

#include "core/types.h"

namespace nn { namespace atk { 

class SoundArchive
{
public:
    const char* GetItemLabel(u32 id) const;
    u32 GetItemId(char const* label) const;


    // Game API: generated from symbols/ (addresses there); types are ABI-exact.
public:
    SoundArchive();  // 0x008a9954 C1/C2
    void vf0();  // 0x008a997c [hook]
};

class SoundActor    // Inherits SoundStartable, size: 0x7C
{
public:
    virtual ~SoundActor();
    u8 data[0x7C-0x4];


    // Game API: generated from symbols/ (addresses there); types are ABI-exact.
public:
    SoundActor() = default;  // keeps the implicit default constructor
    SoundActor(s32);  // 0x008a95f8 C1/C2
    s32 GetPlayingSoundCount(s32) const;  // 0x008a97a4 [hook]
    s32 SetPlayableSoundCount(s32, s32);  // 0x008a97d0 [hook]
    s32 SetupSound(void*, s32, s32, void*);  // 0x008a97e0 [hook]
    s32 detail_SetupSound(s32, s32, s8, s32, s32);  // 0x008a98bc [hook]
    s32 detail_GetItemId();  // 0x008a9914 [hook]
    s32 detail_GetItemId_8A9934();  // 0x008a9934 [hook]
};

} }
