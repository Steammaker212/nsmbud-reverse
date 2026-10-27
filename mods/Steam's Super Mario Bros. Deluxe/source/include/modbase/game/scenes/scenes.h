// modbase/game/scenes/scenes.h -- generated: C++ declarations for symbols/scenes/scenes.sym.
// Game classes and functions with ABI-exact types (pointers are void*); do not edit by hand.
// [hook] marks a function whose entry a sweet-dx trampoline can replay.
#pragma once

#include "core/types.h"

class BootScene
{
public:
    BootScene(s32);  // 0x007deed0 C1/C2
    s32 create();  // 0x00022c68 [hook]
    s32 ctor_helper();  // 0x0048210c [hook]
};

class ChallengeResultScene
{
public:
    ChallengeResultScene(s32);  // 0x007e0ee0 C1/C2
    s32 create();  // 0x000247b0 [hook]
    static s32 ctor_helper_helper_3F625C();  // 0x003f625c [hook]
    s32 ctor_helper();  // 0x00520bb0 [hook]
    void* ctor_helper_523680();  // 0x00523680 [hook]
};

class ChallengeRetryScene
{
public:
    ChallengeRetryScene(s32);  // 0x007e1c78 C1/C2
    s32 create();  // 0x00024784 [hook]
    s32 ctor_helper();  // 0x00485a74 [hook]
};

class DarkCloudDemoScene
{
public:
    DarkCloudDemoScene(s32);  // 0x007e3508 C1/C2
    void* create();  // 0x00024890 [hook]
};

class DemoScene
{
public:
    DemoScene(s32);  // 0x007e4f40 C1/C2
    s32 create();  // 0x00024754 [hook]
};

class GameOverScene
{
public:
    GameOverScene(s32);  // 0x007ec020 C1/C2
    s32 create();  // 0x000247dc [hook]
    s32 ctor_helper_helper_4BA62C();  // 0x004ba62c [hook]
    s32 ctor_helper();  // 0x004e3564 [hook]
};

class GameSetupScene
{
public:
    GameSetupScene(s32);  // 0x007ed9d8 C1/C2
    s32 create();  // 0x00024808 [hook]
    s32 ctor_helper();  // 0x00542880 [hook]
    s32 ctor_helper_556930();  // 0x00556930 [hook]
    s32 ctor_helper_55B894();  // 0x0055b894 [hook]
};

class MenuLayoutTable
{
public:
    s32 init(s32, s32, void*);  // 0x00476a7c [hook]
    static void* init_helper();  // 0x00478b70 [hook]
    s32 init_helper_478D70(s32, s32);  // 0x00478d70 [hook]
};

class MultiPlayCourseSelectScene
{
public:
    MultiPlayCourseSelectScene(s32);  // 0x007f1b88 C1/C2
    s32 create();  // 0x00024838 [hook]
};

class ResultScene
{
public:
    ResultScene(s32);  // 0x007f4bfc C1/C2
    s32 create();  // 0x00024864 [hook]
};

class SceneMgr
{
public:
    s32 doSceneChange(s32, void*, s32, s32);  // 0x007f5ff8 [hook]
};

class StaffCreditTable
{
public:
    s32 init();  // 0x0047dccc [hook]
};

class TitleScene
{
public:
    TitleScene(s32);  // 0x007f89c4 C1/C2
    void* create();  // 0x00024728 [hook]
};
