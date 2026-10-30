// modbase/game/player/player.h -- generated: C++ declarations for symbols/player/player.sym.
// Game classes and functions with ABI-exact types (pointers are void*); do not edit by hand.
// [hook] marks a function whose entry a sweet-dx trampoline can replay.
#pragma once

#include "core/types.h"
class StateBase;

class Player
{
public:
    Player(void*);  // 0x00794ec0 C1/C2
    void playSound(const char*, s32, s32);  // 0x007734e8
    s32 applyPowerUpTransform(s32, s32, void*);  // 0x00475288 [hook]
    void createEffectsAndState();  // 0x001dbb64 [hook]
    void* ctor_helper(s32);  // 0x003e49b0 [hook]
    void* ctor_helper_3E568C(s32);  // 0x003e568c [hook]
    s32 vf90();  // 0x00760754 [hook]
    s32 vfE8();  // 0x00763cf8 [hook]
    s32 vfC8();  // 0x007647c0 [hook]
    s32 vfCC();  // 0x00764a94 [hook]
    s32 vfD8(s32, s32);  // 0x0076611c [hook]
    s32 vfDC();  // 0x00766160 [hook]
    s32 changeState(void*, s32);  // 0x00773dc0 [hook]
    void* ctor_helper_77B890(s32);  // 0x0077b890 [hook]
    static s32 animSet_load();  // 0x00782db0 [hook]
    void* ctor_helper_786018();  // 0x00786018 [hook]
    s32 getActorSlotChecked(u32);  // 0x00788dfc [hook]
    static void* animSetMetamorphose_load();  // 0x0078ba10 [hook]
    void* setupModelNodes_78E270();  // 0x0078e270 [hook]
    s32 animSetCarry_load(s32, s32, s32, s32, s32);  // 0x0078f32c [hook]
    s32 registerRideAnimations(s32, s32, s32);  // 0x007915d4 [hook]
    s32 ReleaseCarryableEnemy_helper();  // 0x007945e0 [hook]
    s32 ReleaseCarryableEnemy_helper_794678();  // 0x00794678 [hook]
    void* create();  // 0x00794ea4 [hook]
    s32 vf14();  // 0x0079569c [hook]
    s32 vf3C();  // 0x007957e0 [hook]
    bool vf2C();  // 0x00795814 [hook]
    s32 vf30();  // 0x0079585c [hook]
    s32 vf1C();  // 0x007958a0 [hook]
    s32 vf24(s32);  // 0x007958f0 [hook]
    s32 modeToGroupIndex(s32);  // 0x00796a60
    s32 vf88();  // 0x00796ab0 [hook]
    s32 vfA0(s32);  // 0x007976b0 [hook]
    bool vfA8();  // 0x007977ec [hook]
    void vf44();  // 0x0079781c [hook]
    s32 vfEC();  // 0x00797890 [hook]
    bool vf0(void*);  // 0x007979d4 [hook]
    s32 vf62(s32);  // 0x00799200 [hook]
    s32 vfFC();  // 0x00799358 [hook]
    void* vfAC();  // 0x00799a38 [hook]
    s32 vfB4();  // 0x0079a7d4 [hook]
    s32 vfBC();  // 0x0079adb4 [hook]
    s32 setupWristNodes_79D5A0(void*);  // 0x0079d5a0 [hook]
    void* ReleaseCarryableEnemy(s32);  // 0x0079e960 [hook]
    bool vf58();  // 0x0079f0a4 [hook]
    void* vf5C(s32);  // 0x0079f110 [hook]
    s32 vf54(s32);  // 0x0079f1b8 [hook]
    s32 vfD0();  // 0x0079f224 [hook]
    s32 poisonDownUpdate(s32, s32);  // 0x007a0e98 [hook]
    s32 stun(s32);  // 0x007a1f5c [hook]
    s32 beginState_Stunned();  // 0x007a205c [hook]
    s32 endState_Stunned();  // 0x007a20e0 [hook]
    s32 executeState_Stunned();  // 0x007a214c [hook]
    s32 playDownSound_7A6B18();  // 0x007a6b18 [hook]
    s32 playDownSound_7A72DC();  // 0x007a72dc [hook]
    s32 playDownSound_7A75EC();  // 0x007a75ec [hook]
    void playDoubleJumpSound(s32);  // 0x007af67c [hook]
    void* vf84();  // 0x007b3698 [hook]
    bool vf98();  // 0x007b6c38
    s32 setupRingNode_7B6D90();  // 0x007b6d90 [hook]
    s32 setupWristNodes_7B7140(void*);  // 0x007b7140 [hook]
    static StateBase StateID_PenguinSlide;  // 0x00cc4f8c
    static StateBase StateID_Crouch;  // 0x00cc4c4c
    static StateBase StateID_HipAttack;  // 0x00cc4cdc
};

class PlayerAnimStateTable
{
public:
    static s32 init();  // 0x0077bfac [hook]
};

class PlayerBase
{
public:
    PlayerBase(void*);  // 0x0075defc C1/C2
    s32 ctor_helper();  // 0x001542dc [hook]
    s32 ctor_helper_7501D0();  // 0x007501d0 [hook]
    void* vf2();  // 0x0075e5c0 [hook]
    void vf3();  // 0x0075e75c [hook]
    s32 vf5();  // 0x0075e76c [hook]
    s32 vf7();  // 0x0075e8f8 [hook]
    s32 vf8();  // 0x0075ea1c [hook]
    s32 vf9(s32);  // 0x0075eafc [hook]
    s32 vf11();  // 0x0075ed80 [hook]
    s32 vf32();  // 0x007600a4 [hook]
    bool vf0(void*);  // 0x00760564 [hook]
    void* vf1();  // 0x007606d8 [hook]
    s32 vf20();  // 0x0076074c [hook]
    void* ctor_helper_76DE28(void*);  // 0x0076de28 [hook]
    s32 ctor_helper_7862A4();  // 0x007862a4 [hook]
    s32 dispatchVirtual3(s32, f32);  // 0x007948e8 [hook]
};

class PlayerFireball
{
public:
    PlayerFireball();  // 0x0013a7a4 C1/C2
};

class PlayerLookTarget
{
public:
    PlayerLookTarget(s32);  // 0x0000b258 C1/C2
    void* vf0();  // 0x0000b29c [hook]
    void vf1();  // 0x0000b2e4 [hook]
};

class PlayerLookTargetList
{
public:
    s32 add(s32);  // 0x0000b4d4 [hook]
};

class PlayerLookTargetMgr
{
public:
    void* remove(s32);  // 0x0000b4fc [hook]
};

class PlayerMgr
{
public:
    static PlayerMgr* instance;  // 0x00cc436c
    s32 hasPlayer(u32);  // 0x00789d20 [hook]
};

class PlayerModel
{
public:
    void setPlayerMode(u32);  // 0x0078e608
};

class PlayerStates
{
public:
    s32 loadModelResources_helper(s8);  // 0x0028fda0 [hook]
    s32 loadModelResources_helper_28FE94();  // 0x0028fe94 [hook]
    s32 updateModelAndAnims_helper(s32);  // 0x00290228 [hook]
    s32 updateModelAndAnims_helper_40C134(s32);  // 0x0040c134 [hook]
    s32 updateModelAndAnims_helper_40E87C();  // 0x0040e87c [hook]
    s32 loadModelResources_helper_4210B8(void*);  // 0x004210b8 [hook]
    s32 loadModelResources_helper_43B8B0(s32, s32, s32, void*, void*);  // 0x0043b8b0 [hook]
    bool vf2(void*);  // 0x007dfa5c [hook]
    s32 loadModelResources();  // 0x007e55dc [hook]
    s32 updateModelAndAnims();  // 0x007e8220 [hook]
    s32 updateModelAndAnims_helper_7EA13C();  // 0x007ea13c [hook]
    s32 updateModelAndAnims_helper_7EA278(s32, void*, void*);  // 0x007ea278 [hook]
    void* loadModelResources_helper_872A2C();  // 0x00872a2c [hook]
    s32 loadModelResources_helper_872AC4(void*, s32, u32);  // 0x00872ac4 [hook]
};

class UserInfo
{
public:
    void* createInstance();  // 0x0082c9f0 [hook]
    void init();  // 0x0082ca70 [hook]
    void getUid(void*);  // 0x0082cad4 [hook]
};
