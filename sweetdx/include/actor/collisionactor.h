#pragma once

#include "stageactor.h"

class ActorCollisionMgr;

// A StageActor that owns a collision manager.
//
// The manager pointer is at +0x288 (confirmed). After it comes a large
// collision-data block we have not fully mapped; it is represented as opaque
// padding up to the next verified offset (+0x1784), so the class size comes out
// at exactly 0x17B0 where MultiStateActor's state machine begins.
class CollisionActor : public StageActor
{
public:
    CollisionActor(const ActorBuildInfo* buildInfo);
    virtual ~CollisionActor();

    ActorCollisionMgr* collisionMgr;   // +0x288  confirmed
    u8  _collisionData[0x1784 - 0x28C];// +0x28C..0x1784  unmapped block
    f32 _1784;                         // +0x1784
    u8  _1788[0x1798 - 0x1788];        // +0x1788..0x1798
    f32 _1798;                         // +0x1798
    f32 _179C;                         // +0x179C
    f32 _17A0;                         // +0x17A0
    u8  _17A4[0x17B0 - 0x17A4];        // +0x17A4..0x17B0
};
