#pragma once

#include "types.h"
#include "util/vec2.h"
#include "util/vec3.h"
#include "sead.h"
#include "profile.h"

class ActorMgr;
struct ActorInfo;
struct ActorBuildInfo
{
    u32      settings1;    // +0x00
    u32      settings2;    // +0x04
    u32      parentId;     // +0x08
    Profile* profile;      // +0x0C  when set, overrides the sprite-derived profile
    Vec3     position;     // +0x10  verified: read as 3 words into this+0x6C
    u32      rotation;     // +0x1C
    u8       unk20;        // +0x20  verified: byte, becomes StageActor::layer (+0x56)
    u8       eventId1;     // +0x21
    u8       eventId2;     // +0x22
    u8       _23;          // +0x23
    u8       movementId;   // +0x24
    u8       linkId;       // +0x25
    u8       initStateFlag;// +0x26
    u8       _27;          // +0x27
    u32      _28;          // +0x28
};

// Static per-profile metadata. `Default` is the zeroed record the Profile
// constructor substitutes when a profile supplies no info block.
struct ActorInfo
{
    u32 _00, _04, _08, _0C, _10, _14, _18, _1C;
    u32 _20, _24, _28, _2C;

    static const ActorInfo Default;
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

    // +0x04: the heap this actor was allocated from. The lowest bits double as
    // allocation flags, so the engine sometimes reads it as a plain u32.
    sead::Heap* heap;        // +0x04

    u32      id;             // +0x08  actor instance id
    Profile* profile;        // +0x0C  confirmed

    u8       _10;            // +0x10
    u8       _11;            // +0x11
    u8       _12;            // +0x12
    bool     isDeleted;      // +0x13
    u32      settings1;      // +0x14  confirmed
    u32      settings2;      // +0x18
    u8       movementId;     // +0x1C
    u8       linkId;         // +0x1D  ties this actor to a movement group
    u8       initStateFlag;  // +0x1E
    u8       _1F;            // +0x1F

    u32      _20;            // +0x20  sead::ListNode
    u32      _24;            // +0x24
    u32      childCount;     // +0x28
    s32      _2C;            // +0x2C
    u32      _30;            // +0x30
    u32      _34;            // +0x34
    Actor*   parent;         // +0x38  confirmed
    u32      _3C;            // +0x3C
    u32      _40;            // +0x40
    u32      _44;            // +0x44
    u32      _48;            // +0x48
    u32      _4C;            // +0x4C
};
