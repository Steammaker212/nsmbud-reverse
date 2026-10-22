#pragma once

#include "sead.h"

class Actor;
struct ActorBuildInfo;

//
// Owns every live actor in the stage and is the entry point for spawning new
// ones at runtime.
//
// Reached through the single global instance pointer; the game populates it
// during boot, so it is always valid by the time actor code runs.
//
class ActorMgr : public sead::IDisposer
{
public:
    static ActorMgr* instance;

    // Allocates and constructs an actor from the supplied build info, registers
    // it with the stage, and returns it. `unk` is passed through to the actor's
    // post-construction path.
    Actor* create(ActorBuildInfo* buildInfo, u32 unk);
};
