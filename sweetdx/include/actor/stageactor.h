#pragma once

#include "actor.h"
#include "activecollider.h"
#include "util/vec3i.h"
#include "movementhandler.h"

// An actor that lives in the stage: a transform, a collider, and a relationship
// to the player. Layout ends exactly at 0x288 so CollisionActor can place its
// manager there.
class StageActor : public Actor
{
public:
    StageActor(const ActorBuildInfo* buildInfo);
    virtual ~StageActor();

    void afterCreate(u32) override;
    u32  beforeExecute() override;
    void afterExecute(u32) override;
    u32  beforeDraw() override;

    virtual void setPlayerId(s8);
    virtual void removeActiveColliders();
    virtual void addActiveColliders();
    virtual void* getCollisionMgr();
    virtual void vf54();
    virtual u32  vf58();
    virtual void vf5C();
    virtual void vf60();
    virtual void vf64();
    virtual void killAtGoal();
    virtual void splashWater(Vec3*);
    virtual void splashLava(Vec3*);
    virtual void splashLavaWave(Vec3*);
    virtual void splashPoison(Vec3*);
    virtual bool isOffScreen();
    virtual void damageFromUnder();

    s8  distanceToPlayer(const Vec2& out);
    u8  directionToPlayerH(const Vec3& position);   // H = horizontal
    u8  directionToPlayerV(const Vec3& position);   // V = vertical
    void cullCheck(u32 unkMask = 0);

    u32   direction;         // +0x50  confirmed
    s8    playerId;          // +0x54  confirmed, init -1
    s8    _55;               // +0x55  init -1
    u8    _56;               // +0x56
    u8    _57;               // +0x57  init 1
    u32   _58;
    u32   _5C;
    u32   _60;
    u32   _64;
    u32   _68;
    Vec3  position;          // +0x6C  confirmed
    Vec3  speed;             // +0x78  confirmed
    Vec3  maxSpeed;          // +0x84  confirmed
    Vec3  scale;             // +0x90  confirmed, init 1.0
    Vec3i rotation;          // +0x9C  confirmed
    u32   _A8;
    u32   _AC;
    u32   _B0;
    u32   _B4;
    u32   _B8;
    ActiveCollider aCollider;// +0xBC  confirmed
    f32   _1EC;              // +0x1EC
    f32   _1F0;
    f32   _1F4;
    f32   _1F8;
    f32   _1FC;
    f32   _200;
    f32   _204;
    f32   _208;
    f32   _20C;
    f32   _210;
    u8    zoneId;            // +0x214
    u8    type;              // +0x215  confirmed; 3 = Enemy
    u8    _216;
    u8    _217;
    u8    _218;
    u8    _219;
    u8    _21A;
    u8    eventId1;          // +0x21B
    u8    eventId2;          // +0x21C
    u16   _21E;
    u32   _220;
    u32   _224;
    u32   _228;
    u32   _22C;
    u32   _230;
    u32   _234;
    u32   _238;
    Vec3  effectOffset;      // +0x23C  confirmed
    Vec3  _248;
    Vec3  _254;
    Vec3  _260;
    // MovementHandler link state. OFFSET IS INFERRED, not confirmed: the retail
    // binary shows the link call and the fields it writes, but not this member's
    // exact base. +0x26C is the first unclaimed 12-byte slot, so it fits, and the
    // padding below keeps every later verified offset correct either way.
    MovementHandler movementHandler;  // +0x26C  [I]
    u32   _278;              // +0x278
    u32   _27C;
    u32   _280;
    u32   _284;              // +0x284  pads to 0x288 for CollisionActor
};
