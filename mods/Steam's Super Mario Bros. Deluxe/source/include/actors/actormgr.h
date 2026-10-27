#pragma once

#include "nintendo/sead.h"


class Actor;
class ActorBuildInfo;

class ActorMgr : public sead::IDisposer
{
public:
    static ActorMgr* instance;

    Actor* create(ActorBuildInfo* buildInfo, u32 unk);


    // Game API: generated from symbols/ (addresses there); types are ABI-exact.
public:
    s32 unk(void*);  // 0x00007c5c [hook]
};
