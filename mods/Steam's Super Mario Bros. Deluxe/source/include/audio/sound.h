#pragma once

#include "nintendo/nn/atk.h"
#include "util/vec2.h"


class SoundSystem
{
public:
    nn::atk::SoundArchive* getSoundArchive();
    
    inline const char* GetItemLabel(u32 id) { return getSoundArchive()->GetItemLabel(id); }
    inline u32 GetItemId(char const* label) { return getSoundArchive()->GetItemId(label); }


    static SoundSystem* instance;


    // Game API: generated from symbols/ (addresses there); types are ABI-exact.
public:
    void* createInstance_helper_helper_8058AC(void*);  // 0x008058ac [hook]
    s32 createInstance_helper_helper_805A04();  // 0x00805a04 [hook]
    s32 createInstance_helper_helper_805A0C();  // 0x00805a0c [hook]
    s32 createInstance_helper_helper_805A14();  // 0x00805a14 [hook]
    s32 createInstance_helper_helper_805A1C();  // 0x00805a1c [hook]
    void* createInstance_helper();  // 0x00805a24 [hook]
    s32 createInstance();  // 0x00806f40 [hook]
    s32 getSoundArchivePlayer();  // 0x00809b54
    void* createInstance_helper_helper_9107C4();  // 0x009107c4
    s32 createInstance_helper_helper_910804(s32);  // 0x00910804 [hook]
    s32 createInstance_helper_helper_91080C(s32);  // 0x0091080c [hook]
    s32 createInstance_helper_helper_910814(s32);  // 0x00910814 [hook]
    s32 createInstance_helper_helper_91081C(s32);  // 0x0091081c [hook]
};


class SoundActor : public nn::atk::SoundActor
{
public:
    u32 _7C;
	u32 _80;
	u32 _84;
	u32 _88;


    // Game API: generated from symbols/ (addresses there); types are ABI-exact.
public:
    SoundActor() = default;  // keeps the implicit default constructor
    SoundActor(s32, void*);  // 0x00812804 C1/C2
    s32 vf0();  // 0x00812900 [hook]
    void vf1();  // 0x0081293c [hook]
    s32 vf8(s32, s32);  // 0x00812a30 [hook]
};


class BasicSoundActor : public SoundActor
{
public:
    void playSound(const char* label, Vec2* screenPos, u32 unk);


    // Game API: generated from symbols/ (addresses there); types are ABI-exact.
public:
    BasicSoundActor() = default;  // keeps the implicit default constructor
    BasicSoundActor(s32);  // 0x00810a64 C1/C2
    s32 vf0();  // 0x00024494 [hook]
    s32 vf10(s32, void*, s32, void*);  // 0x00812208
    void vf1();  // 0x008127f4 [hook]
};

// Both are dereived classes from BasicSoundActor
extern BasicSoundActor* GlobalBasicSoundActorA;
extern BasicSoundActor* GlobalBasicSoundActorB;


class MovingSoundActor : public SoundActor
{
public:
    class Handle : public sead::IDisposer
    {
    public:
        u32 _10;
        f32 _14;
    };

public:
    MovingSoundActor(u32 unk1, u32 unk2);
    void setPosition(const Vec2& position);

    u32 _8C;
    u32 _90;
    u32 _94;
    u32 _98;
    Handle handles[6];  // 9C
    u32 _12C;
    u32 _130;


    // Game API: generated from symbols/ (addresses there); types are ABI-exact.
public:
    MovingSoundActor(s32, s32);  // 0x0080f088 C1/C2
    u32 setPosition(void*);  // 0x0080f194 [hook]
};


// Convenience

void mapPositionToScreen(Vec2& out, const Vec2& position);

inline void PlaySound(const char* label, const Vec2& position)
{
    Vec2 screenPos;
    mapPositionToScreen(screenPos, position);
    GlobalBasicSoundActorA->playSound(label, &screenPos, 0);
}
