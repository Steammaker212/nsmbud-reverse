// modbase/game/objects/objects.h -- generated: C++ declarations for symbols/objects/objects.sym.
// Game classes and functions with ABI-exact types (pointers are void*); do not edit by hand.
// [hook] marks a function whose entry a sweet-dx trampoline can replay.
#pragma once

#include "core/types.h"

class BgCenter
{
public:
    BgCenter();  // 0x0082d154 C1/C2
    ~BgCenter();  // D0 0x0082d308
    bool checkDerivedRuntimeTypeInfo(void*) const;  // 0x0082d194 [hook]
    void* getRuntimeTypeInfo() const;  // 0x0082d294 [hook]
};

class Chain
{
public:
    Chain();  // 0x006e4be8 C1/C2
};

class CloudTerrainActor
{
public:
    CloudTerrainActor();  // 0x005a77a8 C1/C2
    s32 vf5();  // 0x005a77dc [hook]
    s32 vf49();  // 0x005a7a64 [hook]
    s32 vf50();  // 0x005a7a74 [hook]
    bool vf0(void*);  // 0x005a7a90 [hook]
    void* vf1();  // 0x005a7b94 [hook]
    void vf3();  // 0x005a7c08 [hook]
};

class FixedIcicle
{
public:
    FixedIcicle();  // 0x00623b7c C1/C2
    ~FixedIcicle();  // D1/D2 0x00624604, D0 0x00624674
    s32 onCreate();  // 0x00623db4 [hook]
    s32 onExecute();  // 0x00623fa0 [hook]
    s32 onDraw();  // 0x00623fe4 [hook]
    static s32 onDelete();  // 0x0062400c [hook]
    void* removeActiveColliders();  // 0x00624014 [hook]
    void* addActiveColliders();  // 0x00624060 [hook]
    s32 vf270();  // 0x006240c0 [hook]
    s32 vf274();  // 0x006241ac [hook]
    s32 collisionPlayer(void*, void*);  // 0x00624318 [hook]
    s32 collisionGroundPound(s32, s32);  // 0x0062436c [hook]
    s32 collisionGroundPoundYoshi(s32, s32);  // 0x006243c4 [hook]
    s32 collisionSlide(s32, s32);  // 0x00624414 [hook]
    s32 collisionStar();  // 0x0062446c [hook]
    s32 vfA8();  // 0x00624480 [hook]
    bool checkDerivedRuntimeTypeInfo(void*) const;  // 0x0062448c [hook]
    void* getRuntimeTypeInfo() const;  // 0x00624590 [hook]
    s32 collisionThrowableObject();  // 0x0062473c [hook]
};

class FlagSwitchBase
{
public:
    FlagSwitchBase(void*);  // 0x00603c0c C1/C2
    ~FlagSwitchBase();  // D0 0x00604490
    s32 onExecute();  // 0x00603c6c [hook]
    bool checkDerivedRuntimeTypeInfo(void*) const;  // 0x0060438c [hook]
    void* getRuntimeTypeInfo() const;  // 0x0060441c [hook]
};

class FlagSwitchRandom
{
public:
    ~FlagSwitchRandom();  // D0 0x00606358
    void* build();  // 0x00605f18 [hook]
    s32 onCreate();  // 0x006060e0 [hook]
    bool checkDerivedRuntimeTypeInfo(void*) const;  // 0x006061e0 [hook]
    void* getRuntimeTypeInfo() const;  // 0x006062e4 [hook]
};

class FloatingBubble
{
public:
    FloatingBubble();  // 0x00702b30 C1/C2
    s32 onCreate_helper(s32, s32);  // 0x0015bdb8 [hook]
    s32 onCreate();  // 0x00703160 [hook]
    s32 onCreate_helper_7035EC(s32);  // 0x007035ec [hook]
    s32 onExecute();  // 0x007039a4 [hook]
    s32 onDraw();  // 0x00703c2c [hook]
    bool vf0(void*);  // 0x00704028 [hook]
    void* vf1();  // 0x007040b8 [hook]
    void* vf2();  // 0x0070412c [hook]
    void vf3();  // 0x0070418c [hook]
};

class Lava
{
public:
    Lava();  // 0x005a7d30 C1/C2
    s32 onCreate();  // 0x005a7d68 [hook]
    s32 onCreate_helper();  // 0x005a8104 [hook]
    f32 vf49();  // 0x005a8794 [hook]
    s32 vf50();  // 0x005a87b8 [hook]
    void* vf52();  // 0x005a8ad4 [hook]
    s32 vf8();  // 0x005a8ba0 [hook]
    s32 vf53();  // 0x005a8bdc [hook]
    void vfDC();  // 0x005a8bf8 [hook]
    f32 vf56();  // 0x005a9070
    void vfE8();  // 0x005a909c [hook]
    f32 vf57();  // 0x005a90a0 [hook]
    bool vf0(void*);  // 0x005a90f8 [hook]
    void* vf1();  // 0x005a91fc [hook]
    void vf3();  // 0x005a9270 [hook]
};

class LavaGeyser
{
public:
    LavaGeyser();  // 0x0070ba1c C1/C2
    s32 vf156();  // 0x003e3b68 [hook]
    void* vf2();  // 0x003e3d10 [hook]
    s32 vf5();  // 0x0070bd94 [hook]
    s32 vf8();  // 0x0070c198 [hook]
    s32 vf12();  // 0x0070c200 [hook]
    s32 vf15();  // 0x0070c29c [hook]
    void vf157();  // 0x0070c2e0 [hook]
    s32 vf158();  // 0x0070c40c [hook]
    void* vf159();  // 0x0070c5a0 [hook]
    s32 vf162();  // 0x0070c72c [hook]
    void* vf163();  // 0x0070c77c [hook]
    s32 vf169();  // 0x0070c984 [hook]
    void* vf171();  // 0x0070c9f8 [hook]
    s32 vf170();  // 0x0070ca4c [hook]
    s32 vf172();  // 0x0070ca9c [hook]
    void* vf174();  // 0x0070cb1c [hook]
    s32 vf173();  // 0x0070cb70 [hook]
    void* vf175();  // 0x0070cbc0 [hook]
    s32 vf176();  // 0x0070cbe8 [hook]
    s32 vf178();  // 0x0070cc54 [hook]
    s32 vf179();  // 0x0070ccb4 [hook]
    s32 vf181();  // 0x0070ce4c [hook]
    s32 vf182();  // 0x0070cec0 [hook]
    void* vf184();  // 0x0070d02c [hook]
    s32 vf185();  // 0x0070d068 [hook]
    f32 vf187();  // 0x0070d200 [hook]
    s32 vf188();  // 0x0070d240 [hook]
    void vf3();  // 0x0070d32c [hook]
    s32 vf42();  // 0x0070d33c [hook]
    s32 vf161();  // 0x0070d344 [hook]
    s32 vf167();  // 0x0070d360 [hook]
    s32 vf168();  // 0x0070d398 [hook]
};

class Poison
{
public:
    Poison();  // 0x005a99ec C1/C2
    ~Poison();  // D0 0x005aa5a8
    s32 onCreate();  // 0x005a9a20 [hook]
    s32 vf49();  // 0x005aa00c [hook]
    s32 vf50();  // 0x005aa01c [hook]
    s32 onExecute();  // 0x005aa034
    void* vf52();  // 0x005aa304 [hook]
    f32 vf56();  // 0x005aa3a8
    void vfE8();  // 0x005aa3d4 [hook]
    f32 vf57();  // 0x005aa3d8 [hook]
    bool checkRTTI(void*);  // 0x005aa430 [hook]
    static void* getRTTI();  // 0x005aa534 [hook]
};

class Quicksand
{
public:
    Quicksand();  // 0x005aa770 C1/C2
    s32 onCreate();  // 0x005aa7a4 [hook]
    s32 vf49();  // 0x005aaddc [hook]
    s32 vf50();  // 0x005aadec [hook]
    s32 vf12();  // 0x005aae08 [hook]
    f32 vf56();  // 0x005aae5c
    void vfE8();  // 0x005aae88 [hook]
    void* vf57();  // 0x005aae8c
    bool vf0(void*);  // 0x005aaf14 [hook]
    void* vf1();  // 0x005ab018 [hook]
    void vf3();  // 0x005ab08c [hook]
};

class RollingHill
{
public:
    RollingHill();  // 0x006097c8 C1/C2
    ~RollingHill();  // D1/D2 0x0060a65c, D0 0x0060a68c
    s32 onCreate();  // 0x00609b28 [hook]
    s32 updateModel();  // 0x00609dc8 [hook]
    s32 onExecute();  // 0x00609fa4 [hook]
    s32 onDraw();  // 0x0060a354 [hook]
    bool checkRTTI(void*);  // 0x0060a474 [hook]
    static void* getRTTI();  // 0x0060a5e8 [hook]
};

class RopeLadder
{
public:
    RopeLadder();  // 0x0063568c C1/C2
    ~RopeLadder();  // D1/D2 0x00636110, D0 0x00636140
    s32 onCreate();  // 0x00635ca8 [hook]
    s32 onExecute();  // 0x00635e70 [hook]
    s32 onDraw();  // 0x006360ec [hook]
};

class Seaweed
{
public:
    Seaweed();  // 0x006d4c60 C1/C2
    ~Seaweed();  // D0 0x006d5540
    s32 onCreate();  // 0x006d4ca8 [hook]
    s32 onExecute();  // 0x006d4f08 [hook]
    s32 onDraw();  // 0x006d4f58 [hook]
    static s32 onDelete();  // 0x006d4fb0 [hook]
    s32 setupModels();  // 0x006d4fb8 [hook]
    bool vf0(void*);  // 0x006d5358 [hook]
    void* vf1();  // 0x006d54cc [hook]
};

class SwingingVine
{
public:
    SwingingVine();  // 0x006e4db8 C1/C2
};

class TerrainActor
{
public:
    TerrainActor(void*);  // 0x005a2e8c C1/C2
    ~TerrainActor();  // D1/D2 0x005a5764, D0 0x005a5808
    static void updateModel();  // 0x005a2c08 [hook]
    static void draw();  // 0x005a2c0c [hook]
    s32 onExecute();  // 0x005a4dec [hook]
    s32 onDraw();  // 0x005a5098 [hook]
    s32 vfD4();  // 0x005a548c [hook]
    void vfDC();  // 0x005a54a8 [hook]
    f32 vfD8();  // 0x005a54ac [hook]
    s32 vfE0();  // 0x005a5594 [hook]
    void vfE8();  // 0x005a55a8 [hook]
    f32 vfE4();  // 0x005a55ac
    bool checkRTTi(void*);  // 0x005a5660 [hook]
    static void* getRTTI();  // 0x005a56f0 [hook]
    void vfC4();  // 0x005a58b0 [hook]
    void vfC8();  // 0x005a58b4 [hook]
};

class TerrainEffects
{
public:
    TerrainEffects();  // 0x00705470 C1/C2
    s32 init_helper_helper_44C1FC(s32, s32, s32, s32, s32);  // 0x0044c1fc [hook]
    s32 draw_helper();  // 0x0044c4ac [hook]
    s32 init_helper_helper_44E288(s32, s32, s32);  // 0x0044e288 [hook]
    bool vf0(void*);  // 0x005a2d08 [hook]
    void* vf1();  // 0x005a2d8c [hook]
    u32 init_helper(s32, void*);  // 0x007057f0 [hook]
    s32 update();  // 0x00705f6c [hook]
    void* update_helper();  // 0x00706440 [hook]
    s32 update_helper_7067D8();  // 0x007067d8 [hook]
    s32 update_helper_helper_707290(s32, s32);  // 0x00707290 [hook]
    u32 draw();  // 0x00707390 [hook]
    s32 init_helper_helper_707504();  // 0x00707504 [hook]
    s32 init_helper_helper_707734(void*, void*);  // 0x00707734 [hook]
};

class TorchFlame
{
public:
    TorchFlame();  // 0x006e813c C1/C2
};

class TrampolineCloud
{
public:
    TrampolineCloud();  // 0x006edb24 C1/C2
    s32 vf8();  // 0x006ee364 [hook]
    s32 vf12();  // 0x006ee4d8 [hook]
    bool vf0(void*);  // 0x006ee524 [hook]
    void* vf1();  // 0x006ee5b4 [hook]
    void* vf2();  // 0x006ee628 [hook]
    void vf3();  // 0x006ee688 [hook]
};

class Water
{
public:
    Water();  // 0x005ab254 C1/C2
    ~Water();  // D0 0x005acbb8
    void* onExecute_helper();  // 0x005ac130 [hook]
    s32 onDraw_helper();  // 0x005ac470 [hook]
    f32 vf49();  // 0x005ac6a4 [hook]
    s32 onExecute();  // 0x005ac75c [hook]
    s32 onDraw();  // 0x005ac930 [hook]
    bool checkRTTI(void*);  // 0x005aca40 [hook]
    static void* getRTTI();  // 0x005acb44 [hook]
};
