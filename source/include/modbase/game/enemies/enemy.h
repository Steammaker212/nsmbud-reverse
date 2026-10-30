// modbase/game/enemies/enemy.h -- generated: C++ declarations for symbols/enemies/enemy.sym.
// Game classes and functions with ABI-exact types (pointers are void*); do not edit by hand.
// [hook] marks a function whose entry a sweet-dx trampoline can replay.
#pragma once

#include "core/types.h"

class CarryableEnemy
{
public:
    CarryableEnemy(void*);  // 0x00271d84 C1/C2
    ~CarryableEnemy();  // D0 0x00273774
    s32 beforeExecute();  // 0x00271dd4
    s32 onDelete();  // 0x00271dd8 [hook]
    s32 vf5C(void*);  // 0x00272064 [hook]
    s32 collisionPlayer(void*, void*);  // 0x002725cc [hook]
    s32 vf27C(void*, void*);  // 0x00272684 [hook]
    s32 vf280(void*, s32);  // 0x00272760 [hook]
    void vf284(void*, void*);  // 0x0027286c [hook]
    void vf270();  // 0x00272980 [hook]
    void vf274();  // 0x00272984 [hook]
    s32 vf278(void*);  // 0x00272988
    s32 collisionIceball(s32, s32);  // 0x0027298c [hook]
    s32 vf158(void*, s32, s32);  // 0x00272cdc [hook]
    s32 vf294();  // 0x00272d5c [hook]
    s32 vf29C();  // 0x00272de8 [hook]
    s32 vf298();  // 0x00272ed0 [hook]
    s32 vf2AC();  // 0x0027341c [hook]
    void vf2B0();  // 0x002734a0 [hook]
    s32 vf2B4();  // 0x002734a4 [hook]
    void vf2A0();  // 0x00273508 [hook]
    void vf2A4();  // 0x0027350c [hook]
    void vf2A8();  // 0x00273510 [hook]
    bool checkDerivedRuntimeTypeInfo(void*) const;  // 0x002735fc [hook]
    void* getRuntimeTypeInfo() const;  // 0x00273700 [hook]
    void vf288();  // 0x002737c8 [hook]
};

class IceActor
{
public:
    s32 setScale(void*);  // 0x002ee238 [hook]
    f32 setScale_helper();  // 0x002ee480 [hook]
    s32 setScale_helper_2EE580();  // 0x002ee580 [hook]
    void* setScale_helper_2F2A44(void*);  // 0x002f2a44 [hook]
    void* setScale_helper_2F47C0(f32);  // 0x002f47c0
};

class ShellEnemy
{
public:
    ShellEnemy(void*, s32, s8, s8);  // 0x0039ef44 C1/C2
    ~ShellEnemy();  // D1/D2 0x0037a610, D0 0x003a52f0
    static s32 collisionGroundPound_thunk();  // 0x0034bf2c
    static s32 collisionPropellerDrill_thunk();  // 0x0034bf30
    static s32 collisionSlide_thunk();  // 0x0034bf34
    static s32 collisionPenguinSlide_thunk();  // 0x0034bf38
    void vf310_thunk();  // 0x0034d570
    s32 vf318_thunk();  // 0x0034d574
    void vf314_thunk();  // 0x0034d578
    void vf32C_thunk();  // 0x0034d850
    static s32 collisionGroundPound_thunk_35BE30();  // 0x0035be30
    static s32 collisionPropellerDrill_thunk_35BE34();  // 0x0035be34
    static s32 collisionSlide_thunk_35BE38();  // 0x0035be38
    static s32 collisionPenguinSlide_thunk_35BE3C();  // 0x0035be3c
    s32 vf2A0_thunk();  // 0x0035d270
    s32 vf2A8_thunk();  // 0x0035d274
    static s32 beginState_DieFall_thunk();  // 0x0035d550
    static s32 executeState_DieFall_thunk();  // 0x0035d558
    void vf310_thunk_37A4BC();  // 0x0037a4bc
    s32 vf318_thunk_37A4C0();  // 0x0037a4c0
    bool vf58();  // 0x0037a76c [hook]
    void afterCreate(u32);  // 0x0039f2a8 [hook]
    s32 beforeExecute();  // 0x0039f350 [hook]
    s32 afterExecute(s32);  // 0x0039f4a8 [hook]
    s32 vf100(void*, s32);  // 0x0039fe58 [hook]
    s32 collisionPlayer(s32, s32);  // 0x0039ff68
    static void collisionYoshi();  // 0x003a0098
    s32 vf2C0();  // 0x003a0558 [hook]
    s32 collisionEnemy(s32, s32);  // 0x003a0c74 [hook]
    s32 collisionGroundPound(s32, s32);  // 0x003a1250 [hook]
    s32 collisionPropellerDrill(s32, s32);  // 0x003a1344 [hook]
    s32 collisionGroundPoundYoshi(s32, s32);  // 0x003a1360
    s32 collisionThrowableObject(s32, s32);  // 0x003a1364 [hook]
    void vf110(s32, s32);  // 0x003a1418 [hook]
    void vf178(s32);  // 0x003a1580 [hook]
    s32 vf188(s32);  // 0x003a15c8 [hook]
    s32 damageFromUnder();  // 0x003a174c [hook]
    s32 vfD4();  // 0x003a1c38 [hook]
    void* vfDC();  // 0x003a1c9c [hook]
    s32 vf28C();  // 0x003a1f30 [hook]
    void vf2E4();  // 0x003a227c [hook]
    s32 vf2D8();  // 0x003a2284 [hook]
    s32 vf54(s32, s16);  // 0x003a240c [hook]
    s32 vf150(void*, void*);  // 0x003a2500 [hook]
    s32 collisionSlide(s32, s32);  // 0x003a2630 [hook]
    s32 collisionPenguinSlide(s32, s32);  // 0x003a272c [hook]
    s32 vf2A0();  // 0x003a2fb8 [hook]
    s32 vf2A8();  // 0x003a3070 [hook]
    s32 vf2A4();  // 0x003a30b0 [hook]
    s32 vf294();  // 0x003a3540 [hook]
    s32 vf29C();  // 0x003a35fc [hook]
    s32 vf298();  // 0x003a3618 [hook]
    void vf310();  // 0x003a36f8 [hook]
    void* vf318();  // 0x003a3900 [hook]
    s32 vf31C();  // 0x003a3f8c [hook]
    void vf324();  // 0x003a3fe4 [hook]
    s32 vf328();  // 0x003a40e4 [hook]
    void vf330();  // 0x003a410c [hook]
    s32 vf334();  // 0x003a4218 [hook]
    void vf33C();  // 0x003a4270 [hook]
    s32 vf338();  // 0x003a4274 [hook]
    s32 beginState_DieFall();  // 0x003a4378 [hook]
    static void endState_DieFall();  // 0x003a44b0
    s32 executeState_DieFall();  // 0x003a44b4 [hook]
    s32 vf8C();  // 0x003a4dd4 [hook]
    s32 vf90();  // 0x003a4f60 [hook]
    s32 vf2EC(s32);  // 0x003a4f8c
    s32 vf300(s32);  // 0x003a4fa0
    s32 killAtGoal();  // 0x003a4fb4 [hook]
    static void splashWater();  // 0x003a4fec [hook]
    static void splashLava();  // 0x003a4ff0 [hook]
    static void splashPoison();  // 0x003a4ff4 [hook]
    s32 vfC4();  // 0x003a4ff8 [hook]
    f32 getRect(void*);  // 0x003a50ac [hook]
    bool checkDerivedRuntimeTypeInfo(void*) const;  // 0x003a5104 [hook]
    void* getRuntimeTypeInfo() const;  // 0x003a527c [hook]
    void vf2C8();  // 0x003a53a0 [hook]
    void vf2CC();  // 0x003a53a4 [hook]
    s32 vf2D4();  // 0x003a53a8 [hook]
    s32 damageFromUnder_thunk();  // 0x003bdad0
    void vf320_thunk();  // 0x003be03c
};
