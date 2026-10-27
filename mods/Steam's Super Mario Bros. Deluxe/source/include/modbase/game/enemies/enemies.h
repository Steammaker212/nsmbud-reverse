// modbase/game/enemies/enemies.h -- generated: C++ declarations for symbols/enemies/enemies.sym.
// Game classes and functions with ABI-exact types (pointers are void*); do not edit by hand.
// [hook] marks a function whose entry a sweet-dx trampoline can replay.
#pragma once

#include "core/types.h"

class Amp
{
public:
    Amp();  // 0x00258228 C1/C2
    ~Amp();  // D1/D2 0x00259bd0, D0 0x00259c7c
    s32 onExecute();  // 0x00258d50 [hook]
    s32 onDraw();  // 0x00259018 [hook]
    void vf270();  // 0x00259044 [hook]
    static s32 onDelete();  // 0x00259048 [hook]
    s32 vf274();  // 0x00259050 [hook]
    s32 vfD0();  // 0x002591ac [hook]
    s32 collisionFireball(s32, s32);  // 0x00259234 [hook]
    s32 collisionPlayer(void*, void*);  // 0x00259298 [hook]
    s32 collisionPenguinSlide(s32, s32);  // 0x002593ec [hook]
    s32 collisionYoshi(s32, s32);  // 0x002594d4 [hook]
    void* beginState_DieFall();  // 0x00259560 [hook]
    static void endState_DieFall();  // 0x0025974c [hook]
    f32 executeState_DieFall();  // 0x00259750 [hook]
    bool checkDerivedRuntimeTypeInfo(void*) const;  // 0x00259a58 [hook]
    void* getRuntimeTypeInfo() const;  // 0x00259b5c [hook]
    s32 vf120();  // 0x00259d2c [hook]
    static s32 collisionGroundPound();  // 0x00259d34 [hook]
    static s32 collisionPipeCannon();  // 0x00259d3c [hook]
};

class BanzaiBill
{
public:
    BanzaiBill();  // 0x0032a740 C1/C2
    void* vf2();  // 0x0032089c [hook]
    void* vf18();  // 0x00320a78 [hook]
    s32 vf19();  // 0x00320b4c [hook]
    s32 vf56();  // 0x00320d1c [hook]
    s32 vf79(s32, s32);  // 0x00320d28 [hook]
    s32 vf42(void*);  // 0x00320f00 [hook]
    s32 initColliders();  // 0x003212e0 [hook]
    s32 initColliders_helper();  // 0x0032166c [hook]
    f32 vf160();  // 0x00321950 [hook]
    s32 vf111();  // 0x00322180 [hook]
    f32 vf112();  // 0x00322208 [hook]
    s32 vf114();  // 0x00322240 [hook]
    f32 vf115();  // 0x00322278 [hook]
    s32 vf138();  // 0x003222e4 [hook]
    void* vf139();  // 0x003222f8 [hook]
    void vf66(void*, void*);  // 0x0032232c [hook]
    void vf67(void*, void*);  // 0x00322534
    bool vf64(void*, void*);  // 0x00322d28 [hook]
    s32 vf73(s32, s32);  // 0x00322d98 [hook]
    s32 vf74(s32, s32);  // 0x00322dcc [hook]
    s32 vf71(s32, s32);  // 0x00322e00 [hook]
    s32 vf15();  // 0x003231cc [hook]
    s32 vf54();  // 0x00323200 [hook]
    s32 vf53();  // 0x00323254 [hook]
    s32 vf26();  // 0x00323280 [hook]
    s32 vf27(void*);  // 0x003232e8 [hook]
    s32 vf28(void*);  // 0x0032337c [hook]
    s32 vf30(void*);  // 0x00323410 [hook]
    bool vf0(void*);  // 0x003234a4 [hook]
    void* vf1();  // 0x003235a8 [hook]
    f32 vf156();  // 0x0032a930 [hook]
    s32 vf161();  // 0x0032a938 [hook]
    s32 vf8();  // 0x0032ac6c
    s32 vf12();  // 0x0032ac70
    s32 vf157();  // 0x0032ac74 [hook]
    void vf3();  // 0x0032adf8 [hook]
    s32 vf159();  // 0x0032aee8 [hook]
};

class BigBoo
{
public:
    BigBoo();  // 0x003ac538 C1/C2
    f32 onCreate_helper();  // 0x0000a3f8 [hook]
    s32 vf156();  // 0x003ac898 [hook]
    void* onCreate_helper_3ACE60();  // 0x003ace60 [hook]
    s32 onExecute();  // 0x003ad5c4 [hook]
    s32 vf12();  // 0x003ad820 [hook]
    s32 vf15();  // 0x003ad8ac [hook]
    s32 vf26();  // 0x003add4c [hook]
    void vf66(s32, s32);  // 0x003ae9d8 [hook]
    s32 vf73(s32, s32);  // 0x003aecb8 [hook]
    s32 vf74(s32, s32);  // 0x003aeda0 [hook]
    s32 vf71(s32, s32);  // 0x003af02c [hook]
    s32 vf84(s32, s32);  // 0x003af114 [hook]
    bool vf0(void*);  // 0x003af360 [hook]
    void* vf1();  // 0x003af464 [hook]
    void* vf2();  // 0x003af4d8 [hook]
    void vf3();  // 0x003af5ac [hook]
    s32 vf78();  // 0x003af684 [hook]
    s32 vf79(s32, s32);  // 0x003af68c [hook]
    s32 vf80(s32, s32);  // 0x003af6f0 [hook]
    s32 vf85();  // 0x003af704 [hook]
    s32 onCreate_helper_423EBC(s32);  // 0x00423ebc [hook]
};

class BillBlaster
{
public:
    BillBlaster();  // 0x00324218 C1/C2
    ~BillBlaster();  // D1/D2 0x00327368, D0 0x003273b8
    s32 onDraw();  // 0x00326148 [hook]
    s32 onDelete();  // 0x00326298 [hook]
    bool checkRTTI(void*);  // 0x00327264 [hook]
    static void* getRTTI();  // 0x003272f4 [hook]
};

class BooCircle
{
public:
    BooCircle();  // 0x003b2268 C1/C2
    ~BooCircle();  // D1/D2 0x003b2b68, D0 0x003b2b98
    s32 onCreate();  // 0x003b2328 [hook]
    s32 onExecute();  // 0x003b2604 [hook]
    static s32 onDraw();  // 0x003b2688 [hook]
    void* vf49(void*, u32);  // 0x003b2728 [hook]
    bool checkRTTI(void*);  // 0x003b2a64 [hook]
    static void* getRTTI();  // 0x003b2af4 [hook]
};

class CooliganSunglasses
{
public:
    CooliganSunglasses();  // 0x0036b7e0 C1/C2
};

class DryBones
{
public:
    DryBones();  // 0x00311e10 C1/C2
    ~DryBones();  // D1/D2 0x00317fb4, D0 0x00318040
    s32 beginState_Walk();  // 0x00312034 [hook]
    static void endState_Walk();  // 0x003124f4 [hook]
    s32 beginState_Turn();  // 0x003124f8 [hook]
    s32 executeState_Turn();  // 0x00312618 [hook]
    static void endState_Turn();  // 0x00312764 [hook]
    s32 onDraw();  // 0x00314d30 [hook]
    static s32 onDelete();  // 0x00314e3c [hook]
    s32 vfE0();  // 0x00314e44 [hook]
    void collisionEnemy();  // 0x003158dc [hook]
    void collisionPlayer(void*, void*);  // 0x00315b68 [hook]
    void collisionYoshi(void*, void*);  // 0x00315edc [hook]
    s32 collisionGroundPound(s32, s32);  // 0x00316408 [hook]
    s32 collisionGroundPoundYoshi(s32, s32);  // 0x00316454 [hook]
    s32 collisionFireball(s32, s32);  // 0x003164a0 [hook]
    s32 collisionIceball();  // 0x00316504 [hook]
    s32 collisionPropellerDrill(s32, s32);  // 0x003165c8 [hook]
    s32 collisionSlide(s32, s32);  // 0x00316614 [hook]
    s32 collisionThrowableObject(s32, s32);  // 0x003167c4 [hook]
    s32 damageFromUnder();  // 0x00316828 [hook]
    s32 vf188(s32);  // 0x003169dc [hook]
    s32 vf190(s32);  // 0x00316aa0 [hook]
    s32 vf19C(s32);  // 0x00316b64 [hook]
    s32 vfD0();  // 0x00316c28 [hook]
    u32 vfD4();  // 0x00316d2c [hook]
    void* vfD8();  // 0x00316e0c [hook]
    s32 checkCollapse();  // 0x00316e28 [hook]
    void* addActiveColliders();  // 0x0031755c [hook]
    void* removeActiveColliders();  // 0x00317698 [hook]
    void vf1F8();  // 0x00317a88 [hook]
    void vf200();  // 0x00317a8c
    void vf1FC();  // 0x00317a90 [hook]
    s32 beginState_DieFall();  // 0x00317a94 [hook]
    static void endState_DieFall();  // 0x00317cd0
    bool checkDerivedRuntimeTypeInfo(void*) const;  // 0x00317e3c [hook]
    void* getRuntimeTypeInfo() const;  // 0x00317f40 [hook]
    s32 vfB4();  // 0x003180d0 [hook]
};

class FireSnake
{
public:
    FireSnake(void*);  // 0x002abde8 C1/C2
    ~FireSnake();  // D1/D2 0x002ae85c, D0 0x002ae908
    void* build();  // 0x002aa284 [hook]
    s32 onCreate();  // 0x002ac064 [hook]
    s32 onExecute();  // 0x002aca38 [hook]
    s32 onDraw();  // 0x002ad3d0 [hook]
    s32 onDelete();  // 0x002ad518 [hook]
    s32 splashWater(void*);  // 0x002ad530 [hook]
    s32 splashLava(void*);  // 0x002ad5b4 [hook]
    s32 splashPoison(void*);  // 0x002ad5e0 [hook]
    void* removeActiveColliders();  // 0x002ad664 [hook]
    s32 collisionIceball(s32, s32);  // 0x002ad780 [hook]
    s32 vf150(s32, s32);  // 0x002ad7e8 [hook]
    s32 beginState_DieFall();  // 0x002adb68 [hook]
    static void endState_DieFall();  // 0x002adcfc
    s32 executeState_DieFall();  // 0x002add00 [hook]
    bool checkDerivedRuntimeTypeInfo(void*) const;  // 0x002ae6e4 [hook]
    void* getRuntimeTypeInfo() const;  // 0x002ae7e8 [hook]
    static s32 collisionGroundPound();  // 0x002ae9b8 [hook]
    s32 collisionFireball(s32, s32);  // 0x002ae9c0 [hook]
};

class Fuzzy
{
public:
    Fuzzy();  // 0x00275378 C1/C2
    ~Fuzzy();  // D1/D2 0x00278814, D0 0x002788c0
    s32 onCreate();  // 0x0027650c [hook]
    s32 setupModel();  // 0x00276d00 [hook]
    s32 beforeExecute();  // 0x0027730c [hook]
    s32 onExecute();  // 0x0027733c [hook]
    s32 onDraw();  // 0x0027767c [hook]
    s32 onDelete();  // 0x002776b8 [hook]
    s32 vfE0();  // 0x00277760 [hook]
    void vfD4();  // 0x002778cc [hook]
    void collisionPlayer(s32, s32);  // 0x00277bd4 [hook]
    s32 collisionYoshi(void*, void*);  // 0x00277c98 [hook]
    s32 collisionGroundPound(s32, s32);  // 0x00277d34 [hook]
    s32 vf270(s32, s32);  // 0x00277dfc [hook]
    s32 collisionPenguinSlide(s32, s32);  // 0x00277ec4 [hook]
    s32 collisionGroundPoundYoshi(s32, s32);  // 0x00277f8c [hook]
    s32 killAtGoal();  // 0x00277fd4 [hook]
    void* addActiveColliders();  // 0x0027820c [hook]
    void* removeActiveColliders();  // 0x0027826c [hook]
    s32 splashWater(void*);  // 0x002782f0 [hook]
    s32 splashPoison(void*);  // 0x00278364 [hook]
    s32 splashLava(void*);  // 0x002783a0 [hook]
    s32 beginState_DieFall();  // 0x002783dc [hook]
    static void endState_DieFall();  // 0x00278458
    void executeState_DieFall();  // 0x0027845c [hook]
    s32 vf210();  // 0x002784d8 [hook]
    s32 vf218();  // 0x00278534
    void* vf214();  // 0x00278538
    s32 vf234();  // 0x0027853c [hook]
    s32 vf23C();  // 0x00278598
    void* vf238();  // 0x0027859c
    s32 vf264();  // 0x002785a0 [hook]
    void* vf26C();  // 0x0027861c
    s32 vf268();  // 0x00278620 [hook]
    bool checkDerivedRuntimeTypeInfo(void*) const;  // 0x0027869c [hook]
    void* getRuntimeTypeInfo() const;  // 0x002787a0 [hook]
    s32 vfB8();  // 0x00278970 [hook]
    void* vfDC();  // 0x002789dc [hook]
    static s32 collisionSlide();  // 0x00278b30 [hook]
    static s32 collisionPropellerDrill();  // 0x00278b38 [hook]
    void vf180();  // 0x00278b40 [hook]
};

class Kanibo
{
public:
    Kanibo();  // 0x0030e308 C1/C2
    ~Kanibo();  // D0 0x0031056c
    void* beginState_Wait();  // 0x0030e498 [hook]
    void executeState_Wait();  // 0x0030e4ac [hook]
    void* endState_Wait();  // 0x0030e72c [hook]
    void beginState_RockUp();  // 0x0030e73c [hook]
    void executeState_RockUp();  // 0x0030e7a0 [hook]
    void endState_RockUp();  // 0x0030e968 [hook]
    void beginState_Jump();  // 0x0030e970 [hook]
    void* executeState_Jump();  // 0x0030e9cc [hook]
    static void endState_Jump();  // 0x0030eb74 [hook]
    void beginState_BackMove();  // 0x0030eb78 [hook]
    void executeState_BackMove();  // 0x0030ec88 [hook]
    static void endState_BackMove();  // 0x0030ee10 [hook]
    s32 onCreate();  // 0x0030f220 [hook]
    void createModel();  // 0x0030f3c0 [hook]
    s32 updateModelMatrix();  // 0x0030f544 [hook]
    s32 onExecute();  // 0x0030f798 [hook]
    s32 onDraw();  // 0x0030fc38 [hook]
    s32 collisionPlayer(void*, void*);  // 0x0030fc64 [hook]
    s32 collisionYoshi(void*, s32);  // 0x0030fcfc [hook]
    s32 vf184(void*);  // 0x0030fd54
    s32 vfD0();  // 0x0030fd8c [hook]
    s32 vfDC();  // 0x0030fe98 [hook]
    void setTamaAction(s32);  // 0x0030feb0 [hook]
    s32 vf264();  // 0x00310008 [hook]
    void* vf26C();  // 0x00310024
    s32 vf268();  // 0x00310028 [hook]
    s32 beginState_DieFall();  // 0x00310044 [hook]
    s32 beginState_DieFumi();  // 0x003100cc [hook]
    static void endState_DieFall();  // 0x00310154
    s32 executeState_DieFall();  // 0x00310158 [hook]
    static void endState_DieFumi();  // 0x0031017c
    s32 executeState_DieFumi();  // 0x00310180 [hook]
    s32 killAtGoal();  // 0x00310320 [hook]
    s32 splashWater(void*);  // 0x00310370 [hook]
    s32 splashLava(void*);  // 0x0031039c [hook]
    s32 splashPoison(void*);  // 0x003103c8 [hook]
    bool checkDerivedRuntimeTypeInfo(void*) const;  // 0x003103f4 [hook]
    void* getRuntimeTypeInfo() const;  // 0x003104f8 [hook]
    s32 vfE0();  // 0x003105c0
};

class KaniboTama
{
public:
    KaniboTama();  // 0x00310638 C1/C2
    ~KaniboTama();  // D1/D2 0x00311b24, D0 0x00311bb4
    void* beginState_Unk1();  // 0x00310718 [hook]
    void* executeState_Unk1();  // 0x003107ec [hook]
    static void endState_Unk1();  // 0x0031098c [hook]
    void beginState_Unk2();  // 0x00310990 [hook]
    void* executeState_Unk2();  // 0x00310a2c [hook]
    static void endState_Unk2();  // 0x00310aa8 [hook]
    s32 beginState_Unk3();  // 0x00310aac [hook]
    void executeState_Unk3();  // 0x00310abc [hook]
    static void endState_Unk3();  // 0x00310b48 [hook]
    s32 onCreate();  // 0x00310b4c [hook]
    s32 updateModel();  // 0x00310cf4 [hook]
    s32 onExecute();  // 0x00310ec4 [hook]
    s32 onDraw();  // 0x00310f30 [hook]
    s32 damageFromUnder();  // 0x00310f6c [hook]
    s32 sub_60310F74(s32);  // 0x00310f74 [hook]
    s32 killAtGoal();  // 0x003110e4 [hook]
    s32 vf8C();  // 0x0031117c [hook]
    f32 vf90(f32);  // 0x0031119c [hook]
    s32 vf188(s32);  // 0x003116ec [hook]
    s32 vf190(s32);  // 0x00311840 [hook]
    bool checkDerivedRuntimeTypeInfo(void*) const;  // 0x003119ac [hook]
    void* getRuntimeTypeInfo() const;  // 0x00311ab0 [hook]
    s32 vf94();  // 0x00311c48 [hook]
    static s32 isOnGround();  // 0x00311c54 [hook]
    void vf178();  // 0x00311c5c [hook]
    void vf180();  // 0x00311c60 [hook]
};

class Mechakoopa
{
public:
    Mechakoopa();  // 0x00347340 C1/C2
};

class PlantFireball
{
public:
    PlantFireball();  // 0x00139918 C1/C2
    s32 vf75();  // 0x0013657c [hook]
    s32 vf70();  // 0x00136624 [hook]
    s32 vf71(f32);  // 0x001366cc [hook]
    void vfD8();  // 0x001367c0 [hook]
    void vfE0();  // 0x001367c4 [hook]
    void* vf55();  // 0x001367c8 [hook]
    void vfE4();  // 0x001367f0 [hook]
    void vfEC();  // 0x001367f4 [hook]
    void vfE8();  // 0x001367f8 [hook]
    s32 vf51();  // 0x001367fc [hook]
    void vfD4();  // 0x00136870 [hook]
    s32 vf52();  // 0x00136874 [hook]
    s32 vf60();  // 0x00137080 [hook]
    s32 vf61();  // 0x001370dc [hook]
    s32 vf73();  // 0x001371d8 [hook]
    s32 vf63();  // 0x00139cfc
    s32 vf65();  // 0x00139fd8 [hook]
    s32 vf66();  // 0x0013a050 [hook]
    s32 vf64();  // 0x0013a07c [hook]
    bool vf67();  // 0x0013a104 [hook]
    f32 vf72();  // 0x0013a1c4 [hook]
    s32 vf74();  // 0x0013a1e8
    s32 vf48();  // 0x0013a214 [hook]
    s32 vf49();  // 0x0013a234 [hook]
    bool vf0(void*);  // 0x0013a374 [hook]
    void* vf1();  // 0x0013a478 [hook]
    void vf3();  // 0x0013a4ec [hook]
};

class PlantIceball
{
public:
    PlantIceball();  // 0x00143930 C1/C2
};

class Pokey
{
public:
    Pokey();  // 0x0037f5a8 C1/C2
    ~Pokey();  // D1/D2 0x00384a40, D0 0x00384afc
    s32 onDraw();  // 0x003813f8 [hook]
    s32 vfE4();  // 0x00381694 [hook]
    s32 vf8C();  // 0x003816a0 [hook]
    s32 vf90();  // 0x003816b0 [hook]
    void* removeActiveColliders();  // 0x003816c0 [hook]
    void* addActiveColliders();  // 0x00381740 [hook]
    s32 killAtGoal();  // 0x003817d4 [hook]
    s32 vfA8(void*);  // 0x00381814 [hook]
    s32 damageFromUnder();  // 0x00382680 [hook]
    s32 collisionStar(s32, s32);  // 0x00382744 [hook]
    s32 vf154(s32, s32);  // 0x00382924 [hook]
    static s32 collisionSlide();  // 0x00382aac [hook]
    s32 collisionPenguinSlide(s32, s32);  // 0x00382ab4 [hook]
    s32 collisionThrowableObject(s32, s32);  // 0x00382b8c [hook]
    s32 collisionFireballYoshi(s32, void*);  // 0x00382ef4 [hook]
    s32 vf14C(s32, s32);  // 0x00383010 [hook]
    s32 vfF4(void*, void*);  // 0x003830c4 [hook]
    s32 collisionFireball(s32, s32);  // 0x003832f4 [hook]
    s32 collisionIceball(s32, s32);  // 0x00383520 [hook]
    s32 vf15C();  // 0x003835e8 [hook]
    s32 collisionEnemy(s32, s32);  // 0x003836a0 [hook]
    s32 collisionYoshi(void*, void*);  // 0x00383814 [hook]
    bool vfF8(void*, void*);  // 0x00383978
    bool isOnGround();  // 0x00384198 [hook]
    bool checkDerivedRuntimeTypeInfo(void*) const;  // 0x003848c8 [hook]
    void* getRuntimeTypeInfo() const;  // 0x003849cc [hook]
    void* vfE0();  // 0x00384bbc [hook]
    static s32 collisionPropellerDrill();  // 0x00384c80 [hook]
    static s32 collisionGroundPound();  // 0x00384c88 [hook]
    void vf180();  // 0x00384c90 [hook]
};

class RiverPiranha
{
public:
    RiverPiranha();  // 0x003dd1c4 C1/C2
    ~RiverPiranha();  // D1/D2 0x003dffb0, D0 0x003e0068
    s32 vf270();  // 0x003dd37c [hook]
    s32 onCreate();  // 0x003de3d4 [hook]
    s32 onExecute();  // 0x003deb84 [hook]
    s32 onDraw();  // 0x003df25c [hook]
    static s32 onDelete();  // 0x003df288 [hook]
    s32 collisionGroundPoundYoshi(s32, s32);  // 0x003df290 [hook]
    s32 collisionIceball(s32, s32);  // 0x003df374 [hook]
    s32 vfD0();  // 0x003df394 [hook]
    void* vfDC();  // 0x003df400 [hook]
    s32 beginState_DieFall();  // 0x003dfb28 [hook]
    static void endState_DieFall();  // 0x003dfc1c
    s32 executeState_DieFall();  // 0x003dfc20 [hook]
    s32 collisionYoshi(void*, void*);  // 0x003dfca0 [hook]
    s32 collisionPenguinSlide(s32, s32);  // 0x003dfcd4 [hook]
    s32 killAtGoal();  // 0x003dfd9c [hook]
    bool checkDerivedRuntimeTypeInfo(void*) const;  // 0x003dfe38 [hook]
    void* getRuntimeTypeInfo() const;  // 0x003dff3c [hook]
    void* removeActiveColliders();  // 0x003e0124 [hook]
    void* addActiveColliders();  // 0x003e0198 [hook]
    void* vfE0();  // 0x003e023c
    static s32 collisionSlide();  // 0x003e0240 [hook]
    static s32 collisionPropellerDrill();  // 0x003e0248 [hook]
    static s32 collisionGroundPound();  // 0x003e0250 [hook]
    void vf180();  // 0x003e0258 [hook]
};

class SpikeTop
{
public:
    SpikeTop();  // 0x003b630c C1/C2
};

class Spiny
{
public:
    Spiny();  // 0x003bb740 C1/C2
};

class SpinyBase
{
public:
    SpinyBase(void*);  // 0x003bd010 C1/C2
};

class SpinyUpsideDown
{
public:
    SpinyUpsideDown();  // 0x00379bdc C1/C2
};

class StoneEye
{
public:
    StoneEye();  // 0x0068cf54 C1/C2
    void vfDC();  // 0x0063adf4 [hook]
    s32 vf12();  // 0x0068d364 [hook]
    s32 vf48(s32, s32);  // 0x0068d38c [hook]
    s32 vf49(s32);  // 0x0068d398 [hook]
    s32 vf50();  // 0x0068d4a4 [hook]
    s32 vf51();  // 0x0068d7c8 [hook]
    s32 vf53();  // 0x0068d7d0 [hook]
    s32 vf58(s32);  // 0x0068e5c4 [hook]
    s32 vf59();  // 0x0068e5cc [hook]
    void* vf60();  // 0x0068e5d4
    bool vf0(void*);  // 0x0068e960 [hook]
    void* vf1();  // 0x0068ea64 [hook]
    void* vf2();  // 0x0068ead8 [hook]
    void vf3();  // 0x0068eb54 [hook]
    s32 onCreate();  // 0x006ca1ec [hook]
    s32 vf8();  // 0x006ca2e0 [hook]
    bool vf11();  // 0x006ca390 [hook]
    s32 vf56(s32, s32, s32);  // 0x006ca4cc [hook]
    s32 vf57(s32, s32, s32);  // 0x006ca4dc [hook]
    void vfD0();  // 0x006ca508 [hook]
};

class Thwomp
{
public:
    Thwomp();  // 0x0029d114 C1/C2
    ~Thwomp();  // D1/D2 0x0029ef04, D0 0x0029efa0
    s32 onCreate();  // 0x0029da4c [hook]
    s32 updateModel();  // 0x0029e02c [hook]
    s32 onExecute();  // 0x0029e1ac [hook]
    s32 onDraw();  // 0x0029e21c [hook]
    static s32 onDelete();  // 0x0029e244 [hook]
    s32 collisionStar();  // 0x0029e24c [hook]
    s32 collisionPenguinSlide(s32, s32);  // 0x0029e258 [hook]
    s32 vf15C(s32);  // 0x0029e328 [hook]
    static void killAtGoal();  // 0x0029e42c [hook]
    s32 beginState_DieFall();  // 0x0029eaa4 [hook]
    static void endState_DieFall();  // 0x0029ebf4 [hook]
    bool checkDerivedRuntimeTypeInfo(void*) const;  // 0x0029ed8c [hook]
    void* getRuntimeTypeInfo() const;  // 0x0029ee90 [hook]
    static void damageFromUnder();  // 0x0029f040 [hook]
    static s32 collisionPropellerDrill();  // 0x0029f044 [hook]
    static s32 collisionGroundPound();  // 0x0029f04c [hook]
    static s32 collisionThrowableObject();  // 0x0029f054 [hook]
    s32 collisionFireball(s32, s32);  // 0x0029f05c [hook]
    s32 collisionIceball(s32, s32);  // 0x0029f0c0 [hook]
};
