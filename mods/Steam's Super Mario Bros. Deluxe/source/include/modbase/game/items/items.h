// modbase/game/items/items.h -- generated: C++ declarations for symbols/items/items.sym.
// Game classes and functions with ABI-exact types (pointers are void*); do not edit by hand.
// [hook] marks a function whose entry a sweet-dx trampoline can replay.
#pragma once

#include "core/types.h"
struct ActorInfo;

class ActorCoin
{
public:
    void* create();  // 0x00576eec [hook]
};

class CoinBase
{
public:
    CoinBase(s32);  // 0x00579890 C1/C2
    ~CoinBase();  // D0 0x0057bae4
    s32 onExecute();  // 0x00579ba0 [hook]
    s32 onDraw();  // 0x00579ee0 [hook]
    s32 vf154();  // 0x00579f9c [hook]
    s32 vf164();  // 0x00579fb0 [hook]
    s32 vfA0(s32);  // 0x0057a134 [hook]
    static void damageFromUnder();  // 0x0057a1d4 [hook]
    s32 vf8C();  // 0x0057a650 [hook]
    s32 vf90(f32);  // 0x0057a668 [hook]
    s32 splashWater(s32);  // 0x0057ab10 [hook]
    s32 splashLava(s32);  // 0x0057ab58 [hook]
    s32 splashLavaWave(s32);  // 0x0057abac [hook]
    s32 splashPoison(s32);  // 0x0057ac00 [hook]
    s32 vf16C();  // 0x0057af9c [hook]
    void vf174();  // 0x0057b10c [hook]
    void vf180();  // 0x0057b3d8 [hook]
    s32 vf17C();  // 0x0057b3dc [hook]
    bool vf168();  // 0x0057b8ac [hook]
    bool checkDerivedRuntimeTypeInfo(void*) const;  // 0x0057b8f8 [hook]
    void* getRuntimeTypeInfo() const;  // 0x0057ba70 [hook]
};

class FireFlower
{
public:
    static ActorInfo actorInfo;  // 0x00b02594
};

class Item
{
public:
    s32 grantMode(s32*, s32, s32);  // 0x00463998
    s32 grantFeedback(s32, u32);  // 0x00463cd0
    s32 playAppearSound_461C50();  // 0x00461c50 [hook]
    s32 loadKinokoSwitch_46DD80();  // 0x0046dd80 [hook]
    s32 loadMusasabi_470B10();  // 0x00470b10 [hook]
};

class ItemNameTable
{
public:
    static s32 init();  // 0x0045cc68 [hook]
    static void* build();  // 0x004f2044 [hook]
};

class MovementBlockCoinBase
{
public:
    MovementBlockCoinBase(void*);  // 0x005cfa04 C1/C2
    ~MovementBlockCoinBase();  // D0 0x005d0c28
    s32 vfEC();  // 0x005d009c [hook]
    void* vf150();  // 0x005d00fc [hook]
    s32 spawnItemUp();  // 0x005d0a80 [hook]
    s32 spawnItemDown();  // 0x005d0aa4 [hook]
    bool checkDerivedRuntimeTypeInfo(void*) const;  // 0x005d0ab0 [hook]
    void* getRuntimeTypeInfo() const;  // 0x005d0bb4 [hook]
};

class RedCoin
{
public:
    RedCoin();  // 0x006c4ea8 C1/C2
    void* vf2();  // 0x00617680 [hook]
    s32 vf49();  // 0x0061772c [hook]
    s32 vf50();  // 0x00617734 [hook]
    s32 onCreate();  // 0x006c4ed8 [hook]
    bool vf0(void*);  // 0x006c51ec [hook]
    void* vf1();  // 0x006c52f0 [hook]
    void vf3();  // 0x006c5364 [hook]
    s32 onExecute();  // 0x006c79a0 [hook]
    s32 vf12();  // 0x006c7df0 [hook]
    s32 vf15();  // 0x006c7e44 [hook]
    s32 vf32();  // 0x006c7e4c [hook]
    s32 vf51();  // 0x006c931c [hook]
    void vfD4();  // 0x006c932c [hook]
    s32 vf52();  // 0x006c9330 [hook]
    s32 vf54();  // 0x006c940c [hook]
    void vfE0();  // 0x006c946c [hook]
    s32 vf55(f32);  // 0x006c9470 [hook]
};

class SpinningStar
{
public:
    SpinningStar();  // 0x006720b0 C1/C2
    ~SpinningStar();  // D1/D2 0x006737b0, D0 0x00673800
    s32 onCreate();  // 0x00672aac [hook]
    s32 onExecute();  // 0x00673140 [hook]
    void* onExecute_helper();  // 0x00673344 [hook]
    s32 onDraw();  // 0x0067348c [hook]
    bool checkRTTI(void*);  // 0x006736ac [hook]
    static void* getRTTI();  // 0x0067373c [hook]
    void* ctor_helper();  // 0x00673858 [hook]
    f32 onExecute_helper_674470(void*);  // 0x00674470 [hook]
};

class StarCoin
{
public:
    StarCoin();  // 0x005f357c C1/C2
    ~StarCoin();  // D0 0x005f3a48
    s32 onCreate();  // 0x005f35cc [hook]
    s32 onExecute();  // 0x005f3714 [hook]
    bool vf0(void*);  // 0x005f38d0 [hook]
    void* vf1();  // 0x005f39d4 [hook]
};

class StarCoinBase
{
public:
    StarCoinBase(void*);  // 0x005f3b14 C1/C2
    ~StarCoinBase();  // D0 0x005f5614
    s32 vf39();  // 0x005f3a7c [hook]
    void vfC4();  // 0x005f3a84 [hook]
    void vfC8();  // 0x005f3a88 [hook]
    void vfD0();  // 0x005f3a8c [hook]
    s32 onDraw();  // 0x005f485c [hook]
    static s32 onDelete();  // 0x005f4884 [hook]
    s32 updateModel();  // 0x005f488c [hook]
    s32 vf32();  // 0x005f4a14 [hook]
    void* vf51();  // 0x005f4ad4 [hook]
    s32 vf40(s32);  // 0x005f52fc [hook]
    bool checkRTTI(void*);  // 0x005f5510 [hook]
    static void* getRTTI();  // 0x005f55a0 [hook]
    static s32 onCreate();  // 0x005f5648 [hook]
    static s32 onExecute();  // 0x005f5650 [hook]
};

class TreasureChest
{
public:
    TreasureChest();  // 0x006d9d10 C1/C2
};
