#pragma once

#include "actor/stageactor.h"

// Per-actor collision manager. Offsets confirmed against the retail binary.
class CollisionMgr
{
public:
    struct Sensor { f32 _0, _4, _8; };

    enum Flags
    {
        FlagOnGround      = 1 << 0,
        FlagOnSlope       = 1 << 1,
        FlagOnSemiSolid   = 1 << 4,
        FlagCollidedRight = 1 << 18,
        FlagCollidedLeft  = 1 << 19
    };

    CollisionMgr();
    virtual ~CollisionMgr();

    virtual void process();
    virtual void vf14();
    virtual void vf18();
    virtual u32  vf1C() = 0;
    virtual u32  vf20() = 0;
    virtual u32  vf24() = 0;
    virtual void vf28();
    virtual void vf2C();
    virtual void vf30();
    virtual void vf34();

    void init(StageActor* owner, const Sensor* below, const Sensor* above,
              const Sensor* adjacent);
    void setSensor(const Sensor* sensor, u32 sensorId);

    inline bool isOnGround()      { return output & FlagOnGround; }
    inline bool isCollidedRight() { return output & FlagCollidedRight; }
    inline bool isCollidedLeft()  { return output & FlagCollidedLeft; }

    inline bool isCollided(u32 direction)
    {
        if (direction > 1) return false;
        return output & (FlagCollidedRight << direction);
    }

    u8          _unk04[0x894 - 0x04];

    StageActor* owner;      // +0x894
    u32         _898;       // +0x898
    Vec3*       position;   // +0x89C  &owner->position
    Vec3*       _8A0;       // +0x8A0  &owner->_248
    u8*         _8A4;       // +0x8A4  &owner->_56
    u8*         _8A8;       // +0x8A8  &owner->_57
    s8*         playerId;   // +0x8AC  &owner->playerId
    u32         output;     // +0x8B0

    u8 _unk8B4[0x934 - 0x8B4];

    Sensor rightSensor;     // +0x934
    Sensor leftSensor;      // +0x940
    Sensor aboveSensor;     // +0x94C
    Sensor belowSensor;     // +0x958

    u8 _unk964[0x14E8 - 0x964];
};

class ActorCollisionMgr : public CollisionMgr
{
public:
    ActorCollisionMgr();

    u32 vf1C() override;
    u32 vf20() override;
    u32 vf24() override;
};
