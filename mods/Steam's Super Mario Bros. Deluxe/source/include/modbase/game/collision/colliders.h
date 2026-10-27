// modbase/game/collision/colliders.h -- generated: C++ declarations for symbols/collision/colliders.sym.
// Game classes and functions with ABI-exact types (pointers are void*); do not edit by hand.
// [hook] marks a function whose entry a sweet-dx trampoline can replay.
#pragma once

#include "core/types.h"

class ColliderList
{
public:
    s32 insertBack(s32);  // 0x00153bcc [hook]
    s32 remove(s32);  // 0x00153c94 [hook]
    void* insert(void*, void*);  // 0x0015407c [hook]
    s32 insertFront(s32);  // 0x001540c0 [hook]
    s32 clear();  // 0x001540f4 [hook]
};

class ColliderNode
{
public:
    ColliderNode();  // 0x0015df90 C1/C2
};

class ColliderNodeUnk1
{
public:
    ColliderNodeUnk1();  // 0x00166934 C1/C2
};

class MaskManager
{
public:
    MaskManager();  // 0x0068bb2c C1/C2
    void* ctor_helper();  // 0x0068aeec [hook]
    static s32 ctor_helper_68AF18();  // 0x0068af18 [hook]
    s32 ctor_helper_68B3C4(void*);  // 0x0068b3c4 [hook]
    s32 ctor_helper_68B678(void*, s32);  // 0x0068b678 [hook]
    s32 ctor_helper_68B770(s32);  // 0x0068b770 [hook]
    s32 ctor_helper_68B778(s32, s32);  // 0x0068b778 [hook]
    s32 createInstance_();  // 0x0068b8e8 [hook]
};

class MaskManager_createInstance
{
public:
    s32 helper();  // 0x0068b9a0 [hook]
};

class SolidOnTopColliderWrapper
{
public:
    ~SolidOnTopColliderWrapper();  // D0 0x000a462c
    bool checkRTTI(void*);  // 0x000a463c [hook]
    static void* getRTTI();  // 0x000a47b0 [hook]
};

class SwingingCollider
{
public:
    SwingingCollider();  // 0x001653a4 C1/C2
    ~SwingingCollider();  // D1/D2 0x001653ec, D0 0x00165424
    s32 vf18();  // 0x00165978 [hook]
    s32 vf30();  // 0x00165984 [hook]
    s32 vf3C(void*, f32);  // 0x00165be0 [hook]
    s32 execute();  // 0x00165cc4 [hook]
    void* execute_helper();  // 0x00165d48 [hook]
    s32 vf24(s32, s32, void*, s32, void*);  // 0x00165f80 [hook]
    s32 vf28(void*, void*);  // 0x00166490 [hook]
    s32 vf2C(void*);  // 0x0016660c [hook]
    bool checkRTTI(void*);  // 0x00166620 [hook]
    static void* getRTTI();  // 0x00166720 [hook]
    s32 vf14();  // 0x00166794 [hook]
    s32 vf20();  // 0x0016679c [hook]
    void vf38();  // 0x001667a4 [hook]
    bool vf28_helper(void*);  // 0x0016717c [hook]
};
