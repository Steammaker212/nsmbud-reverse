// modbase/game/enemies/bros.h -- generated: C++ declarations for symbols/enemies/bros.sym.
// Game classes and functions with ABI-exact types (pointers are void*); do not edit by hand.
// [hook] marks a function whose entry a sweet-dx trampoline can replay.
#pragma once

#include "core/types.h"
class StateBase;

class BoomerangBro
{
public:
    BoomerangBro();  // 0x00262520 C1/C2
    bool vf181();  // 0x00262570 [hook]
    s32 vf180();  // 0x00262618
    void* vf183();  // 0x00262678 [hook]
    s32 vf189();  // 0x002626ac [hook]
    f32 vf178();  // 0x002626f0 [hook]
    f32 vf179();  // 0x002626f8
    void vf186();  // 0x00262704 [hook]
    void* vf187();  // 0x00262878 [hook]
    s32 vf55();  // 0x002629fc [hook]
    void vf188();  // 0x00262a48 [hook]
    f32 vf184();  // 0x00262b2c
    void vf202();  // 0x00262d44 [hook]
    bool vf0(void*);  // 0x00262e1c [hook]
    void* vf1();  // 0x00262f94 [hook]
    void vf3();  // 0x002630b4 [hook]
    s32 vf182();  // 0x00263164 [hook]
    s32 vf190();  // 0x0026316c [hook]
};

class BroFileball
{
public:
    BroFileball();  // 0x0013734c C1/C2
};

class FireBros
{
public:
    FireBros();  // 0x002a9a68 C1/C2
    ~FireBros();  // D0 0x002aa09c
    bool vf2D4();  // 0x002a9a9c [hook]
    void* setWalkingSpeed();  // 0x002a9ad0 [hook]
    s32 setHopTimer();  // 0x002a9afc [hook]
    static f32 getProjectileThrowFrame();  // 0x002a9ea4
    bool checkDerivedRuntimeTypeInfo(void*) const;  // 0x002a9eb0 [hook]
    void* getRuntimeTypeInfo() const;  // 0x002aa028 [hook]
    static s32 getTextureId();  // 0x002aa14c [hook]
    s32 setWalkingTimer();  // 0x002aa154 [hook]
    s32 throwProjectile();  // 0x002aa190 [hook]
};

class FireballBase
{
public:
    FireballBase(void*);  // 0x00135a90 C1/C2
    ~FireballBase();  // D1/D2 0x00136f64, D0 0x00136ff0
    s32 onCreate();  // 0x00135bd8 [hook]
    s32 beforeExecute();  // 0x00135db0 [hook]
    s32 onExecute();  // 0x00135e48 [hook]
    s32 onDraw();  // 0x0013616c [hook]
    s32 onDelete();  // 0x00136184 [hook]
    void* removeActiveColliders();  // 0x001361b0 [hook]
    void* addActiveColliders();  // 0x001361fc [hook]
    void vf65();  // 0x0013625c [hook]
    s32 vf67();  // 0x00136318 [hook]
    void vfC0();  // 0x001367b4 [hook]
    void vfC8();  // 0x001367b8 [hook]
    void vfC4();  // 0x001367bc [hook]
    bool checkRTTI(void*);  // 0x00136e60 [hook]
    static void* getRTTI();  // 0x00136ef0 [hook]
    s32 vf62();  // 0x001371b4 [hook]
    s32 vf63();  // 0x001371bc [hook]
    f32 vf72();  // 0x001371cc
};

class HammerActor
{
public:
    static StateBase StateID_Thrown;  // 0x00c87ce4
    s32 setupModel();  // 0x0013fcd4 [hook]
};

class HammerBro
{
public:
    HammerBro();  // 0x002cbb20 C1/C2
};

class HammerBros
{
public:
    s32 vf2D4();  // 0x002cbb8c [hook]
    s32 setWalkingSpeed();  // 0x002cbba4 [hook]
    bool vf300();  // 0x002cbbd0 [hook]
    s32 setHopTimer();  // 0x002cbd14 [hook]
    s32 setHopSpeed();  // 0x002cbd58 [hook]
    void vf2E8();  // 0x002cbe30 [hook]
    void throwProjectile();  // 0x002cc124 [hook]
    void* createProjectile();  // 0x002cc208 [hook]
    void* createHammer();  // 0x002cc244 [hook]
    s32 collisionIceball(s32, s32);  // 0x002cc380 [hook]
    void* vf314();  // 0x002cc3f8 [hook]
    s32 doAttack();  // 0x002cc608 [hook]
    s32 setThrowAnimation();  // 0x002cc650 [hook]
    s32 setWalkingTimer();  // 0x002cc6a0 [hook]
    static f32 getProjectileCreateFrame();  // 0x002cc70c [hook]
    static f32 getProjectileThrowFrame();  // 0x002cc714 [hook]
    s32 beginState_JumpSt();  // 0x002cc71c [hook]
    static void endState_JumpSt();  // 0x002cc754 [hook]
    s32 executeState_JumpSt();  // 0x002cc758 [hook]
    s32 beginState_AirAttack();  // 0x002cc93c [hook]
    s32 endState_AirAttack();  // 0x002cc97c [hook]
    void executeState_AirAttack();  // 0x002cc9a0 [hook]
    void vf324();  // 0x002ccbe0 [hook]
    void vf328();  // 0x002ccbe4 [hook]
    void vf330();  // 0x002ccd70 [hook]
    void vf334();  // 0x002ccd74 [hook]
    bool checkDerivedRuntimeTypeInfo(void*) const;  // 0x002ccd78 [hook]
    void* getRuntimeTypeInfo() const;  // 0x002ccef0 [hook]
    static s32 getTextureId();  // 0x002cd014 [hook]
    f64 vf2E0();  // 0x002cd01c
    s32 doAirAttack();  // 0x002cd030 [hook]
    s32 vf318();  // 0x002cd048 [hook]
};

class IceBro
{
public:
    IceBro();  // 0x002f19f4 C1/C2
    bool vf181();  // 0x002f1c84 [hook]
    s32 vf180();  // 0x002f1c98 [hook]
    s32 vf189();  // 0x002f1cc4 [hook]
    s32 vf80(s32, s32);  // 0x002f1d08 [hook]
    s32 vf194();  // 0x002f1f6c [hook]
    s32 vf183();  // 0x002f21c4 [hook]
    f32 vf179();  // 0x002f2200
    bool vf203();  // 0x002f220c [hook]
    bool vf0(void*);  // 0x002f23b4 [hook]
    void* vf1();  // 0x002f252c [hook]
    void vf3();  // 0x002f25a0 [hook]
    s32 vf182();  // 0x002f2650 [hook]
    void vf188();  // 0x002f2658
    s32 vf196();  // 0x002f2664 [hook]
};

class MegaHammer
{
public:
    MegaHammer();  // 0x00144b24 C1/C2
};

class SledgeBro
{
public:
    SledgeBro(void*);  // 0x002d5210 C1/C2
    ~SledgeBro();  // D1/D2 0x002d76f4, D0 0x002d77bc
    void* build();  // 0x002d2e68 [hook]
    s32 onCreate();  // 0x002d545c [hook]
    s32 onExecute();  // 0x002d5b50 [hook]
    s32 afterExecute(s32);  // 0x002d6000 [hook]
    s32 vfE0();  // 0x002d6030
    s32 onDraw();  // 0x002d61fc [hook]
    void vf270();  // 0x002d6228 [hook]
    s32 onDelete();  // 0x002d622c [hook]
    s32 collisionPlayer(void*, void*);  // 0x002d630c [hook]
    s32 collisionStar(s32, s32);  // 0x002d639c [hook]
    s32 collisionYoshi(void*, void*);  // 0x002d64fc [hook]
    s32 vfC8(s32, s32);  // 0x002d6548 [hook]
    s32 collisionGroundPound(s32, s32);  // 0x002d6760
    s32 vfD0();  // 0x002d693c [hook]
    s32 vfD4();  // 0x002d69d0 [hook]
    s32 collisionIceball(s32, s32);  // 0x002d6a88 [hook]
    s32 vfDC();  // 0x002d6b00 [hook]
    void* beginState_DieFumi();  // 0x002d6b18 [hook]
    static void endState_DieFumi();  // 0x002d6c1c
    f32 executeState_DieFumi();  // 0x002d6c20 [hook]
    void* beginState_DieFall();  // 0x002d6c40 [hook]
    static void endState_DieFall();  // 0x002d6d38
    f32 executeState_DieFall();  // 0x002d6d3c [hook]
    s32 killAtGoal();  // 0x002d6d5c [hook]
    bool checkDerivedRuntimeTypeInfo(void*) const;  // 0x002d757c [hook]
    void* getRuntimeTypeInfo() const;  // 0x002d7680 [hook]
    void* removeActiveColliders();  // 0x002d7888 [hook]
    void* addActiveColliders();  // 0x002d78fc [hook]
};

class SumoBro
{
public:
    s32 StunPlayers();  // 0x002d6764 [hook]
};

class SumoBroLightning
{
public:
    SumoBroLightning();  // 0x00334ba4 C1/C2
    s32 executeState_Down();  // 0x00334cac [hook]
    s32 onCreate();  // 0x00335270 [hook]
    s32 vf7();  // 0x00335470 [hook]
    s32 vf8();  // 0x00335484 [hook]
    s32 vf12();  // 0x00335570 [hook]
    bool vf49(s32, s32);  // 0x00335604 [hook]
    s32 vf50(s32, s32);  // 0x0033564c [hook]
    s32 vf51(s32, s32);  // 0x00335678 [hook]
    s32 vf52(s32, s32);  // 0x003356a4 [hook]
    s32 vf53(s32, s32);  // 0x003356d4 [hook]
    s32 vf54(s32);  // 0x00335704 [hook]
    s32 vf55();  // 0x0033572c [hook]
    s32 vf32();  // 0x00335740 [hook]
    bool vf0(void*);  // 0x00335848 [hook]
    void* vf1();  // 0x003358d8 [hook]
    void* vf2();  // 0x0033594c [hook]
    void vf3();  // 0x003359d8 [hook]
    s32 vf56();  // 0x00335a68 [hook]
};
