"""Rewrite the actor headers with exact padding so every verified offset lands.

The vptr is compiler-inserted (Actor declares virtuals), so no explicit vtable
member. Every class below pads to the next known-good offset, and each padding
field carries the range it occupies so the next reader can see the arithmetic.

Verified targets (from disassembly unless noted):
    StageActor::direction      +0x50
    StageActor::position       +0x6C
    StageActor::aCollider      +0xBC
    StageActor::type           +0x215
    StageActor::effectOffset   +0x23C
    CollisionActor::collisionMgr +0x288
    MultiStateActor::states    +0x17B0
    Enemy::freezeMgr           +0x1808
"""
import io
import os

INC = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx\include"

FILES = {}

# ---------------------------------------------------------------- ActiveCollider
FILES["activecollider.h"] = """#pragma once

#include "types.h"
#include "sead.h"
#include "util/vec2.h"

class StageActor;

// A collision shape owned by a StageActor.
//
// SIZE CAVEAT
// -----------
// Our Cheep Cheep decompilation writes members at +0x174 and +0x178 through
// `this`, which only makes sense if ActiveCollider ends before 0x174 -- i.e. is
// at most 0xB8 bytes. One independent Switch-side reference gives 0x130, which
// would span 0xBC..0x1EC and swallow both offsets. We cannot settle this from
// the retail binary alone, so the size below is documented rather than asserted.
class ActiveCollider : public sead::IDisposer
{
public:
    typedef void (*Callback)(ActiveCollider* acSelf, ActiveCollider* acOther);

    enum Shape
    {
        ShapeRectangle      = 0,
        ShapeCircle         = 1,
        ShapeTrapezoidVert  = 2,
        ShapeTrapezoidHoriz = 3
    };

    struct Info
    {
        Vec2 distToCenter;   // +0x00
        Vec2 distToEdge;     // +0x08
        u32  shape;          // +0x10
        u32  _14;            // +0x14
        u32  _18;            // +0x18
        u32  _1C;            // +0x1C
        u32  _20;            // +0x20
        u32  _24;            // +0x24
        Callback callback;   // +0x28
    };

    ActiveCollider();
    virtual ~ActiveCollider();

    void init(StageActor* owner, const Info* info, u32 unk);

    f32 getTop();
    f32 getBottom();
    f32 getLeft();
    f32 getRight();
    f32 getCenterX();
    f32 getCenterY();

    // sead::IDisposer occupies 0x00..0x10 (vptr + 3 words).
    u8 _10[0x40 - 0x10];      // +0x10..0x40  four list nodes, not modelled
    StageActor* owner;        // +0x40        confirmed
    u8 _44[0x74 - 0x44];      // +0x44..0x74  timer/state words
    Info info;                // +0x74        confirmed (sizeof 0x2C)
    f32  trapezoidTopLeft;    // +0xA0
    f32  trapezoidTopRight;   // +0xA4
    f32  trapezoidBottomLeft; // +0xA8
    f32  trapezoidBottomR;    // +0xAC
    u8 _B0[0x130 - 0xB0];     // +0xB0..0x130 tail (see size caveat)
};
"""

# ------------------------------------------------------------------- Actor
FILES["actor/actor.h"] = """#pragma once

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
"""

# --------------------------------------------------------------- StageActor
FILES["actor/stageactor.h"] = """#pragma once

#include "actor.h"
#include "activecollider.h"
#include "util/vec3i.h"

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
    u32   _26C;              // +0x26C
    u32   _270;
    u32   _274;
    u32   _278;
    u32   _27C;
    u32   _280;
    u32   _284;              // +0x284  pads to 0x288 for CollisionActor
};
"""

# ------------------------------------------------------------ CollisionActor
FILES["actor/collisionactor.h"] = """#pragma once

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
"""

# ------------------------------------------------------------ MultiStateActor
FILES["states.h"] = """#pragma once

#include "types.h"

class StateBase
{
public:
    virtual void execute();
    virtual void draw();
};

// A state machine held inside an actor. Occupies 0x24 bytes, as observed at
// MultiStateActor::states (+0x17B0).
template <typename T>
class StateWrapper
{
public:
    void change(StateBase* next);
    void execute();

    StateBase* current;   // +0x00
    StateBase* next;      // +0x04
    u32 _08[7];           // +0x08..0x24
};
"""

FILES["actor/multistateactor.h"] = """#pragma once

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
"""

# -------------------------------------------------------------------- Enemy
FILES["actor/enemy.h"] = """#pragma once

#include "multistateactor.h"

class EnemyFreezeMgr;

// An enemy. freezeMgr sits at +0x1808 (confirmed).
//
// A note on the size: one reference records sizeof(Enemy) == 0x189A, which is
// not a multiple of 4. With 4-byte alignment our layout rounds to 0x189C. The
// two agree on where a derived class starts (0x189C is past the end either way),
// so members we add at 0x189C and beyond are correct regardless.
class Enemy : public MultiStateActor
{
public:
    Enemy(const ActorBuildInfo* buildInfo);
    virtual ~Enemy();

    virtual void freeze();

    u8 _17D8[0x1808 - 0x17D8];   // +0x17D8..0x1808  unmapped
    EnemyFreezeMgr* freezeMgr;   // +0x1808  confirmed
    u8 _180C[0x189A - 0x180C];   // +0x180C..0x189A  unmapped tail
};
"""


def main():
    for rel, text in FILES.items():
        p = os.path.join(INC, rel.replace("/", os.sep))
        os.makedirs(os.path.dirname(p), exist_ok=True)
        io.open(p, "w", encoding="utf-8", newline="\n").write(text)
        print(f"  include/{rel}")
    print(f"\nrewrote {len(FILES)} headers")


if __name__ == "__main__":
    main()
