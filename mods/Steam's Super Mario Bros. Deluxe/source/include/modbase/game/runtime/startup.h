// modbase/game/runtime/startup.h -- generated: C++ declarations for symbols/runtime/startup.sym.
// Game classes and functions with ABI-exact types (pointers are void*); do not edit by hand.
// [hook] marks a function whose entry a sweet-dx trampoline can replay.
#pragma once

#include "core/types.h"

class AreaTask
{
public:
    AreaTask(s32);  // 0x003f1530 C1/C2
    void* create();  // 0x00022dcc [hook]
    f32 getWrappedXPos(f32);  // 0x003f4900 [hook]
};

class CalculateTask2
{
public:
    CalculateTask2(s32, s32);  // 0x00818330 C1/C2
};

class CalculateTask3
{
public:
    CalculateTask3(s32, s32);  // 0x007f5ad8 C1/C2
};

class ReadAndDecompSZS
{
public:
    s32 helper(void*, u32);  // 0x00903b44 [hook]
};

class RootTask
{
public:
    void vf5C();  // 0x008183b4 [hook]
    s32 vf10();  // 0x00822c24
    s32 vf24();  // 0x00822c28 [hook]
    s32 vf12();  // 0x008253ec
    void vf1();  // 0x00825400 [hook]
    bool vf2(void*);  // 0x00825410 [hook]
};

namespace game {
u32 LoadProfileArchives(s32, void*);  // 0x00008f10 [hook]
void UnsetResourcesLoadedForAllProfiles(s32);  // 0x00009250 [hook]
s32 checkWaveCollision(void*, void*);  // 0x00151d34 [hook]
void* createWaterSplash(void*);  // 0x003ee2fc [hook]
s32 createWaterSplash_helper(s32, s32, void*, s32, s32);  // 0x003ef6e4 [hook]
s32 distanceToPLayer(void*, void*);  // 0x0000aa44 [hook]
s32 MtxTranslateGetItFromHere(void*);  // 0x000ddef0 [hook]
void* CreateRootTask(s32);  // 0x00562a50 [hook]
void debugPrintRelated(void*);  // 0x0088239c [hook]
void debugPrintRelated2(void*);  // 0x00882024 [hook]
void debugPrintRelated3(void*);  // 0x00882120 [hook]
u32 decompressYaz0(void*, void*);  // 0x00912314 [hook]
void* ReadAndDecompSZS(s32, void*, s32, void*, void*, void*);  // 0x009040cc [hook]
s32 table_init(s32, s32, s32, s32);  // 0x008691ac [hook]
}

namespace sinit {
void* SpriteToProfileTable();  // 0x00014724 [hook]
s32 ProfileArchiveLists();  // 0x00018fd0 [hook]
s32 RollingHill();  // 0x0060985c [hook]
s32 Enemy2();  // 0x00026fdc [hook]
s32 BobOmb();  // 0x0025c830 [hook]
void BroBase();  // 0x00267668 [hook]
void Enemy();  // 0x002a8314 [hook]
s32 Kanibo();  // 0x0030ee18 [hook]
void* DryBones();  // 0x00318108 [hook]
s32 KoopaTroopa();  // 0x00359364 [hook]
}
