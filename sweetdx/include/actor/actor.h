#pragma once

#include "types.h"
#include "util/vec2.h"
#include "util/vec3.h"
#include "sead.h"

class ActorMgr;
class Profile;
struct ActorInfo;
struct ActorBuildInfo;

// Everything the game hands an actor at construction: its spawn settings and
// initial transform.
struct ActorBuildInfo
{
    u32  id;          // +0x00
    u32  _04;
    u32  _08;
    u32  _0C;
    u32  _10;
    u32  _14;
    u32  _18;
    u32  _1C;
    u32  _20;
    u32  _24;
    u32  _28;
    Vec3 position;    // +0x2C
    Vec3 rotation;    // +0x38
    u32  _44;
    u32  _48;
    u8   layer;       // +0x4C
    u8   _4D;
    u8   _4E;
    u8   _4F;
};

// Static per-profile metadata.
struct ActorInfo
{
    u32 _00, _04, _08, _0C, _10, _14, _18, _1C;
    u32 _20, _24, _28, _2C;
};

// The base of every actor in the game.
//
// There is deliberately no explicit vtable member: this class declares virtual
// functions, so the compiler places the vptr at +0x00 itself. Declaring one by
// hand shifted every field by 4.
class Actor
{
public:
    Actor(const ActorBuildInfo* buildInfo);
    virtual ~Actor();

    virtual u32  onCreate();
    virtual u32  onExecute();
    virtual u32  onDraw();
    virtual u32  onDelete();

    // Engine callbacks wrapped around the above; StageActor overrides them.
    virtual void afterCreate(u32);
    virtual u32  beforeExecute();
    virtual void afterExecute(u32);
    virtual u32  beforeDraw();
    virtual u32  afterDraw();

    void* operator new(unsigned int size);

    u32      heapFlags;      // +0x04
    u32      id;             // +0x08
    Profile* profile;        // +0x0C  confirmed
    u32      _10;            // +0x10
    u32      settings1;      // +0x14  confirmed
    u32      settings2;      // +0x18
    u32      _1C;
    u32      _20;
    u32      _24;
    u32      _28;
    u32      _2C;
    u32      _30;
    u32      _34;
    Actor*   parent;         // +0x38  confirmed
    u32      _3C;
    u32      _40;
    u16      movementId;     // +0x44
    u16      _46;
    u32      _48;
    u8       isDeleted;      // +0x4C
    u8       _4D;
    u8       _4E;
    u8       _4F;
};
