#pragma once

#include "collisionactor.h"
#include "states.h"

// A CollisionActor driven by a StateWrapper at +0x17B0 (confirmed).
class MultiStateActor : public CollisionActor
{
public:
    MultiStateActor(const ActorBuildInfo* buildInfo);
    virtual ~MultiStateActor();

    virtual void doStateChange(StateBase* state);

    StateWrapper<MultiStateActor> states;   // +0x17B0  confirmed
    u32 _17D4;                              // +0x17D4
};
