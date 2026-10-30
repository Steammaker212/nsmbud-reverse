// modbase/game/items/blocks.h -- generated: C++ declarations for symbols/items/blocks.sym.
// Game classes and functions with ABI-exact types (pointers are void*); do not edit by hand.
// [hook] marks a function whose entry a sweet-dx trampoline can replay.
#pragma once

#include "core/types.h"

class BabyYoshiBlock
{
public:
    void* create();  // 0x005767dc [hook]
    s32 onCreate();  // 0x0057680c [hook]
    s32 spawnItemUp();  // 0x00576b8c
    s32 spawnItemDown();  // 0x00576b90
    bool checkDerivedRuntimeTypeInfo(void*) const;  // 0x00576b94 [hook]
};

class BlockAmbush
{
public:
    static void bump(void*);  // 0x00569738
};

class BlockBabyYoshi
{
public:
    static void bump(void*);  // 0x00576938
};

class BlockCoinBase
{
public:
    BlockCoinBase(void*);  // 0x005b2988 C1/C2
    ~BlockCoinBase();  // D1/D2 0x005b1bec, D0 0x005b6da0
    static void spawnItemUp();  // 0x005b1c90 [hook]
    static void spawnItemDown();  // 0x005b1c94 [hook]
    s32 vfEC();  // 0x005b1c98 [hook]
    void spawnCoinShower();  // 0x005b5958 [hook]
    void* vfE8(s32);  // 0x005b65a8 [hook]
    s32 beginState_BumpUp();  // 0x005b6648 [hook]
    static void endState_BumpUp();  // 0x005b6688 [hook]
    s32 beginState_BlockCoinBaseUnk1();  // 0x005b6720 [hook]
    static void endState_BlockCoinBaseUnk1();  // 0x005b6730 [hook]
    s32 executeState_BlockCoinBaseUnk1();  // 0x005b6734 [hook]
    s32 beginState_BumpDown();  // 0x005b674c [hook]
    static void endState_BumpDown();  // 0x005b678c [hook]
    s32 beginState_BlockCoinBaseUnk2();  // 0x005b6818 [hook]
    static void endState_BlockCoinBaseUnk2();  // 0x005b6828 [hook]
    void* executeState_BlockCoinBaseUnk2();  // 0x005b682c [hook]
    s32 beginState_BumpUp2();  // 0x005b6858 [hook]
    static void endState_BumpUp2();  // 0x005b68dc [hook]
    s32 beginState_BumpDown2();  // 0x005b6b38 [hook]
    static void endState_BumpDown2();  // 0x005b6b84 [hook]
    s32 beginState_BlockCoinUnk3();  // 0x005b6c40 [hook]
    static void endState_BlockCoinUnk3();  // 0x005b6c50 [hook]
    s32 executeState_BlockCoinUnk3();  // 0x005b6c54 [hook]
    bool checkDerivedRuntimeTypeInfo(void*) const;  // 0x005b6c9c [hook]
    void* getRuntimeTypeInfo() const;  // 0x005b6d2c [hook]
};

class BrickBlockHuge
{
public:
    s32 create();  // 0x00565ac8 [hook]
    s32 onCreate();  // 0x00565ca8 [hook]
    s32 onExecute();  // 0x00565ee8 [hook]
    s32 onDraw();  // 0x00565fa8 [hook]
    s32 vf178();  // 0x00566100
    s32 vf17C();  // 0x00566228
    s32 spawnCoinShower();  // 0x0056622c [hook]
    s32 spawnItemUp();  // 0x00566488
    s32 spawnItemDown();  // 0x0056648c
    bool vf180();  // 0x00566628 [hook]
    bool checkDerivedRuntimeTypeInfo(void*) const;  // 0x005666b8 [hook]
};

class FlyingBlock
{
public:
    void* create();  // 0x00568888 [hook]
    s32 onCreate();  // 0x005688b8 [hook]
    s32 vf184();  // 0x00568b14 [hook]
    s32 vf188();  // 0x00568b44
    s32 vf18C();  // 0x00568bd4 [hook]
    bool vf190();  // 0x00568c78 [hook]
    bool checkDerivedRuntimeTypeInfo(void*) const;  // 0x00568cec [hook]
};

class FlyingBlockForAmbush
{
public:
    void* create();  // 0x00569474 [hook]
    s32 onCreate();  // 0x005694b4 [hook]
    s32 onExecute();  // 0x00569668 [hook]
    u32 vf16C();  // 0x00569738
    s32 vf1A0();  // 0x0056973c [hook]
    void vf1A8();  // 0x0056974c [hook]
    s32 vf1A4();  // 0x00569750 [hook]
    bool checkDerivedRuntimeTypeInfo(void*) const;  // 0x005697fc [hook]
};

class PowBlock
{
public:
    PowBlock();  // 0x006bc194 C1/C2
    s32 vf7();  // 0x005c9330 [hook]
    s32 vf8();  // 0x005c93d4 [hook]
    s32 vf66();  // 0x005c9878 [hook]
    void vf69(s32);  // 0x005c988c [hook]
    s32 vf70();  // 0x005c99f8 [hook]
    s32 vf73(s32, s32);  // 0x005c9a0c [hook]
    s32 vf74();  // 0x005c9a70 [hook]
    s32 vf77();  // 0x005c9a84 [hook]
    s32 vf78();  // 0x005c9a8c [hook]
    s32 vf23(s32);  // 0x005c9c40 [hook]
    void vf61();  // 0x005c9c80 [hook]
    s32 vf58();  // 0x005ca070 [hook]
    s32 vf59();  // 0x005ca0ec
    u32 vf60();  // 0x005ca0f0 [hook]
    s32 vf10();  // 0x005ca32c [hook]
    s32 vf22();  // 0x005ca338 [hook]
    s32 vf39();  // 0x005ca348 [hook]
    s32 vf9(s32);  // 0x005cc3dc [hook]
    s32 vf15();  // 0x005cc478 [hook]
    s32 vf32();  // 0x005cc8c4 [hook]
    s32 vf40();  // 0x005cc8ec [hook]
    void vfC0();  // 0x005cc920 [hook]
    s32 onCreate();  // 0x006bcb34 [hook]
    void* vf63();  // 0x006bd728 [hook]
    s32 vf12();  // 0x006bd734 [hook]
    s32 vf64();  // 0x006bdb70 [hook]
    s32 vf62();  // 0x006bdf54 [hook]
    void* vf21(s32, u16);  // 0x006bdfc0 [hook]
    s32 vf49();  // 0x006bdff0
    void* vf51();  // 0x006bdff4
    s32 vf50();  // 0x006bdff8
    s32 vf52();  // 0x006bdffc [hook]
    s32 vf54();  // 0x006be084
    void* vf53();  // 0x006be088 [hook]
    void vf55();  // 0x006be2b0 [hook]
    s32 vf57();  // 0x006be31c
    void* vf56();  // 0x006be320 [hook]
    bool vf0(void*);  // 0x006be4ec [hook]
    void* vf1();  // 0x006be664 [hook]
    void* vf2();  // 0x006be6d8 [hook]
    void vf3();  // 0x006be728 [hook]
};
