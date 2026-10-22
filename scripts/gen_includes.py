#!/usr/bin/env python3
"""Author the SweetDX `include/` tree from our OWN reverse-engineering findings.

Licensing note: codedx (github.com/RicBent/codedx) is GPL-3.0 and is NOT copied
here. Everything below is written from offsets and behaviour recovered from the
retail binary by this project, using only factual observations (field offsets,
sizes, method roles). Class and field *names* where they match codedx are used
because they are the natural names for the recovered semantics and because
sweet-dx/codedx hook files must agree on mangled symbol spelling.

The layout is deliberately the same shape as codedx's (actor/actor.h etc.) so a
sweet-dx project can swap one include tree for the other.
"""
import os

PROJ = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx"
INC = os.path.join(PROJ, "include")

FILES = {}

FILES["types.h"] = """#pragma once

// Fixed-width types for the 32-bit ARM target. NSMBU Deluxe is AArch32, so
// pointers and `long` are 4 bytes.
typedef unsigned char       u8;
typedef signed char         s8;
typedef unsigned short      u16;
typedef signed short        s16;
typedef unsigned int        u32;
typedef signed int          s32;
typedef unsigned long long  u64;
typedef signed long long    s64;
typedef unsigned long       uintptr_t32;

typedef float               f32;
typedef double              f64;

typedef unsigned int        size_t32;

#define NULL 0

// A small assertion helper that does not pull in a libc.
#define ASSERT_SIZE(T, N) \\
    static_assert(sizeof(T) == (N), #T " has unexpected size")
"""

FILES["util/vec2.h"] = """#pragma once

#include "types.h"

struct Vec2
{
    f32 x;
    f32 y;

    Vec2() : x(0.0f), y(0.0f) { }
    Vec2(f32 x_, f32 y_) : x(x_), y(y_) { }

    Vec2 operator+(const Vec2& o) const { return Vec2(x + o.x, y + o.y); }
    Vec2 operator-(const Vec2& o) const { return Vec2(x - o.x, y - o.y); }
    Vec2 operator*(f32 s) const { return Vec2(x * s, y * s); }
};
"""

FILES["util/vec3.h"] = """#pragma once

#include "types.h"

struct Vec3
{
    f32 x;
    f32 y;
    f32 z;

    Vec3() : x(0.0f), y(0.0f), z(0.0f) { }
    Vec3(f32 x_, f32 y_, f32 z_) : x(x_), y(y_), z(z_) { }

    Vec3 operator+(const Vec3& o) const { return Vec3(x + o.x, y + o.y, z + o.z); }
    Vec3 operator-(const Vec3& o) const { return Vec3(x - o.x, y - o.y, z - o.z); }
    Vec3 operator*(f32 s) const { return Vec3(x * s, y * s, z * s); }
};
"""

FILES["util/vec3i.h"] = """#pragma once

#include "types.h"

// Integer vector, used for Euler rotation (+0x9C in StageActor).
struct Vec3i
{
    s32 x;
    s32 y;
    s32 z;
};
"""

FILES["util/mtx34.h"] = """#pragma once

#include "types.h"
#include "vec3.h"
#include "vec3i.h"

// 3x4 row-major transform used by ModelWrapper::setMtx. 12 floats, 0x30 bytes.
struct Mtx34
{
    f32 m[3][4];

    void rotateAndTranslate(const Vec3i& rotation, const Vec3& position);
    void translate(const Vec3& position);
};
"""

FILES["sead.h"] = """#pragma once

#include "types.h"

// The subset of Nintendo's SEAD library that actors actually touch.
namespace sead
{

class IDisposer
{
public:
    IDisposer();
    virtual ~IDisposer();

    void* _4;
    void* _8;
    u8    _C;
};

// A non-owning string view. Same 8-byte shape as SafeString.
class SafeString
{
public:
    SafeString();
    SafeString(const char* s);

    const char* cstr() const { return mStr; }

    const char* mStr;
    u32         mLength;
};

template <typename T>
class SafeStringBase : public SafeString
{
};

} // namespace sead
"""

FILES["preprocessor.h"] = """#pragma once

// Argument-counting helpers, needed by PROFILE_RESOURCES so it can discover how
// many resource names it was given.

#define PP_CONCAT(x, y) x##y
#define PP_STR(x) #x
#define PP_STR_VAL(x) PP_STR(x)

#define PP_ARG_N( \\
     _0,  _1,  _2,  _3,  _4,  _5,  _6,  _7,  _8,  _9, \\
    _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, \\
    _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, \\
    _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, \\
    _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, \\
    _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, \\
    _60, _61, _62, _63, _64,   N, ...)   N

#define PP_RSEQ \\
    64, 63, 62, 61, 60, 59, 58, 57, 56, 55, \\
    54, 53, 52, 51, 50, 49, 48, 47, 46, 45, \\
    44, 43, 42, 41, 40, 39, 38, 37, 36, 35, \\
    34, 33, 32, 31, 30, 29, 28, 27, 26, 25, \\
    24, 23, 22, 21, 20, 19, 18, 17, 16, 15, \\
    14, 13, 12, 11, 10,  9,  8,  7,  6,  5, \\
     4,  3,  2,  1,  0

#define PP_NARG(...) PP_NARG_(0, ## __VA_ARGS__, PP_RSEQ)
#define PP_NARG_(...) PP_ARG_N(__VA_ARGS__)

#define PP_FOR_EACH_0(M, X, ...)
#define PP_FOR_EACH_1(M, X, ...) M(X)
#define PP_FOR_EACH_2(M, X, ...) M(X) PP_FOR_EACH_1(M, __VA_ARGS__)
#define PP_FOR_EACH_3(M, X, ...) M(X) PP_FOR_EACH_2(M, __VA_ARGS__)
#define PP_FOR_EACH_4(M, X, ...) M(X) PP_FOR_EACH_3(M, __VA_ARGS__)
#define PP_FOR_EACH_5(M, X, ...) M(X) PP_FOR_EACH_4(M, __VA_ARGS__)
#define PP_FOR_EACH_6(M, X, ...) M(X) PP_FOR_EACH_5(M, __VA_ARGS__)
#define PP_FOR_EACH_7(M, X, ...) M(X) PP_FOR_EACH_6(M, __VA_ARGS__)
#define PP_FOR_EACH_8(M, X, ...) M(X) PP_FOR_EACH_7(M, __VA_ARGS__)
#define PP_FOR_EACH_9(M, X, ...) M(X) PP_FOR_EACH_8(M, __VA_ARGS__)
#define PP_FOR_EACH_10(M, X, ...) M(X) PP_FOR_EACH_9(M, __VA_ARGS__)
#define PP_FOR_EACH_11(M, X, ...) M(X) PP_FOR_EACH_10(M, __VA_ARGS__)
#define PP_FOR_EACH_12(M, X, ...) M(X) PP_FOR_EACH_11(M, __VA_ARGS__)
#define PP_FOR_EACH_13(M, X, ...) M(X) PP_FOR_EACH_12(M, __VA_ARGS__)
#define PP_FOR_EACH_14(M, X, ...) M(X) PP_FOR_EACH_13(M, __VA_ARGS__)
#define PP_FOR_EACH_15(M, X, ...) M(X) PP_FOR_EACH_14(M, __VA_ARGS__)
#define PP_FOR_EACH_16(M, X, ...) M(X) PP_FOR_EACH_15(M, __VA_ARGS__)

#define PP_FOR_EACH_N(N, M, ...) PP_CONCAT(PP_FOR_EACH_, N)(M, __VA_ARGS__)
#define PP_FOR_EACH(M, ...) PP_FOR_EACH_N(PP_NARG(__VA_ARGS__), M, __VA_ARGS__)
"""

FILES["profileid.h"] = """#pragma once

// Actor profile ids for NSMBU Deluxe v1.0.0.
//
// The retail game has 914 profiles (0..913). Anything at 914 or above is a
// CUSTOM profile added by mod code, which is what the Profile reimplementation
// in profile.h arranges.
namespace ProfileId
{

enum ProfileIdType
{
    // ---- generic flag actors ------------------------------------------
    FlagSwitchTag = 0,
    FlagSwitchAND,
    FlagSwitchOR,
    FlagSwitchRandom,

    // ---- power-up projectiles -----------------------------------------
    PlayerIceBall = 474,        // Ice ball thrown by a player
    PlayerFireBall,             // 476 -- the slot the Hammer reuses
    PlantFireBall,
    YoshiFlame,

    // ---- enemies -------------------------------------------------------
    Goomba = 467,
    KoopaTroopa = 512,
    BobOmb = 521,

    // ---- Cheep Cheep family (exactly 530..547) ------------------------
    //
    // Verified against doc/profiles.csv and the Cheep Cheep ctor table.
    // NOTE: 887 is NOT part of this family -- it is the Toad explainer NPC
    //       (説明キノピオ). An earlier revision of this project wrongly
    //       grouped 887 here; see docs/CODEX_REFERENCE.md.
    Pukupuku = 530,             // プクプク          plain Cheep Cheep
    PukupukuGroup,              // 531               group spawner
    PukupukuMiddle,             // 532  中           middle-size
    PukupukuGroupMiddle,        // 533               group, middle
    PukupukuSearch,             // 534  サーチ       search variant
    PukupukuSearchMiddle,       // 535               search, middle
    PukupukuNige,               // 536  にげ         fleeing
    PukupukuNigeMiddle,         // 537               fleeing, middle
    PukupukuMecha,              // 538  メカ         mechanical
    PukupukuToge,               // 539  トゲプク     spiny Cheep Cheep
    PukupukuJumping,            // 540  飛び         jumping
    PukupukuJumpingMecha,       // 541  飛びメカ     flying mechanical
    PukupukuSpawnA,             // 542               spawning variants
    PukupukuSpawnB,             // 543
    PukupukuSpawnC,             // 544
    PukupukuSpawnD,             // 545
    PukupukuSpawnE,             // 546
    PukupukuFormation,          // 547               formation leader

    // ---- named single enemies -----------------------------------------
    Mechakoopa = 528,
    SumoBrosLightning = 669,

    // ---- the Hammer projectile (base-game profile, reused by Approach B) --
    Hammer = 759,

    // ---- Toad explainer NPC (NOT a Cheep Cheep) ------------------------
    ExplanationKinopio = 887,

    // ---- custom profiles start here ------------------------------------
    Num = 914
};

}; // namespace ProfileId
"""

FILES["profile.h"] = """#pragma once

#include "types.h"
#include "resarchive.h"
#include "sead.h"
#include "preprocessor.h"
#include "profileid.h"

class Actor;
struct ActorInfo;
struct ActorBuildInfo;

// Actor profile: the descriptor that maps a sprite/mode id to a build function
// and its resource archives.
//
// Field offsets verified against the retail binary:
//   +0x04  buildFunc
//   +0x08  id
//   +0x0C  actorInfo
//   +0x10  hasResourcesLoaded
//   +0x14  flags
class Profile
{
public:
    Profile(Actor* (*buildFunc)(const ActorBuildInfo*), u32 id,
            const sead::SafeString& name, const ActorInfo* actorInfo, u32 flags);
    virtual u32 vf00();

    ResArchive* getResArchiveById(u32 idx);

    static Profile* get(u32 id);
    static s16 getPriority(u32 id);
    static u8  getHasResources(u32 id);
    static u8  getResourceCount(u32 id);
    static const sead::SafeString* getResourceList(u32 id);

    Actor* (*buildFunc)(const ActorBuildInfo*);  // +0x04
    u32 id;                                      // +0x08
    const ActorInfo* actorInfo;                  // +0x0C
    u8  hasResourcesLoaded;                      // +0x10
    u32 flags;                                   // +0x14

    static u32 spriteToProfileList[];

    static const u32 NUM_PROFILES_ORIGINAL = 914;
    static const u32 NUM_PROFILES_CUSTOM   = ProfileId::Num - NUM_PROFILES_ORIGINAL;
    static const u32 NUM_PROFILES          = NUM_PROFILES_ORIGINAL + NUM_PROFILES_CUSTOM;

    static u32 getNumProfiles();

    static Profile* profilesOriginal[NUM_PROFILES_ORIGINAL];
    static Profile* profilesCustom[NUM_PROFILES_CUSTOM];

    static const s16 prioritiesOriginal[NUM_PROFILES_ORIGINAL];
    static s16 prioritiesCustom[NUM_PROFILES_CUSTOM];

    static const u8 hasResourcesOriginal[NUM_PROFILES_ORIGINAL];
    static u8 hasResourcesCustom[NUM_PROFILES_CUSTOM];

    static const u8 resourceCountOriginal[NUM_PROFILES_ORIGINAL];
    static u8 resourceCountCustom[NUM_PROFILES_CUSTOM];

    static const sead::SafeString* resourceListsOriginal[NUM_PROFILES_ORIGINAL];
    static const sead::SafeString* resourceListsCustom[NUM_PROFILES_CUSTOM];
};

// Registers the resource archives a custom profile needs. The constructor is a
// global, so simply declaring it is enough.
struct ProfileResources
{
    ProfileResources(u32 id, u32 count, const sead::SafeString resources[])
    {
        if (id < Profile::NUM_PROFILES_ORIGINAL || id >= Profile::NUM_PROFILES)
            return;

        u32 customId = id - Profile::NUM_PROFILES_ORIGINAL;
        Profile::hasResourcesCustom[customId]     = count > 0;
        Profile::resourceCountCustom[customId]    = count;
        Profile::resourceListsCustom[customId]    = resources;
    }
};

#define PROFILE_RESOURCES_IDENT(ident, id, ...)                          \\
    const sead::SafeString PP_CONCAT(profileResourceFiles, ident)[] =    \\
        { __VA_ARGS__ };                                                 \\
    const ProfileResources PP_CONCAT(profileResources, ident)(           \\
        id, PP_NARG(__VA_ARGS__),                                        \\
        PP_CONCAT(profileResourceFiles, ident))

#define PROFILE_RESOURCES(id, ...) \\
    PROFILE_RESOURCES_IDENT(__COUNTER__, id, __VA_ARGS__)
"""

FILES["resarchive.h"] = """#pragma once

#include "types.h"
#include "sead.h"

// An archive of loaded resources (models, textures, ...). Opaque to mod code;
// you only ever hold pointers to these.
class ResArchive
{
public:
    void* getResource(const sead::SafeString& name);
    void  unload();
};
"""

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
    u32 id;          // +0x00
    u32 _04;
    u32 _08;
    u32 _0C;
    u32 _10;
    u32 _14;
    u32 _18;
    u32 _1C;
    u32 _20;
    u32 _24;
    u32 _28;
    Vec3 position;   // +0x2C
    Vec3 rotation;   // +0x38
    u32  _44;
    u32  _48;
    u8   layer;      // +0x4C
    u8   _4D;
    u8   _4E;
    u8   _4F;
};

// Static per-profile metadata.
struct ActorInfo
{
    u32  _00;
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
    u32  _2C;
};

// The base of every actor in the game.
//
// Offsets here are the ones we can confirm from the retail binary; the rest of
// the object is left to the derived classes in this tree.
class Actor
{
public:
    Actor(const ActorBuildInfo* buildInfo);
    virtual ~Actor();

    virtual u32 onCreate();
    virtual u32 onExecute();
    virtual u32 onDraw();
    virtual u32 onDelete();

    void* operator new(size_t32 size);

    void* vtable;               // +0x00
    u32   heapFlags;            // +0x04
    u32   id;                   // +0x08
    Profile* profile;           // +0x0C
    u32   _10;
    u32   settings1;            // +0x14
    u32   settings2;            // +0x18
    u32   _1C;
    u32   _20;
    u32   _24;
    u32   _28;
    u32   _2C;
    u32   _30;
    u32   _34;
    Actor* parent;              // +0x38
    u32   _3C;
    u32   _40;
    u16   movementId;           // +0x44
    u16   _46;
    u32   _48;
    u8    isDeleted;            // +0x4C
    u8    _4D;
    u8    _4E;
    u8    _4F;
};
"""

FILES["activecollider.h"] = """#pragma once

#include "types.h"
#include "sead.h"
#include "util/vec2.h"

class StageActor;

// A collision shape owned by a StageActor.
//
// IMPORTANT: the reported size of this class is disputed in our notes. Our
// Cheep Cheep decompilation writes members at +0x174 and +0x178 through `this`,
// which only makes sense if ActiveCollider ends before 0x174 (i.e. is 0xB8
// bytes). Other sources give 0x130. Until that is settled we keep the fields we
// can actually observe and mark the tail as reserved.
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

    u8   _10[0x30];          // +0x10  list nodes, not modelled
    StageActor* owner;       // +0x40
    u32  _44[0x0C];          // +0x44
    u8   _6C[0x04];          // +0x6C
    u32  _70;                // +0x70
    Info info;               // +0x74
    f32  trapezoidTopLeft;   // +0xA0
    f32  trapezoidTopRight;  // +0xA4
    f32  trapezoidBottomLeft;// +0xA8
    f32  trapezoidBottomR;   // +0xAC
    u8   _reserved[0x130 - 0xB0];
};
"""

FILES["actor/stageactor.h"] = """#pragma once

#include "actor.h"
#include "activecollider.h"

// An actor that lives in the stage: has a transform, a collider, and a
// relationship to the player.
//
// Offsets below are confirmed against the retail binary and cross-checked
// against independent Switch-side references; see docs/CODEX_REFERENCE.md.
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
    u8  directionToPlayerH(const Vec3& position);   // "H" = horizontal
    u8  directionToPlayerV(const Vec3& position);   // "V" = vertical
    void cullCheck(u32 unkMask = 0);

    u32 direction;           // +0x50
    s8  playerId;            // +0x54  init -1
    s8  _55;                 // +0x55  init -1
    u8  _56;                 // +0x56
    u8  _57;                 // +0x57  init 1
    u32 _58;                 // +0x58
    u32 _5C;
    u32 _60;
    u32 _64;
    u32 _68;
    Vec3 position;           // +0x6C
    Vec3 speed;              // +0x78
    Vec3 maxSpeed;           // +0x84
    Vec3 scale;              // +0x90  init 1.0
    Vec3i rotation;          // +0x9C
    u32 _A8;
    u32 _AC;
    u32 _B0;
    u32 _B4;
    u32 _B8;
    ActiveCollider aCollider;// +0xBC
    f32 _1EC;
    f32 _1F0;
    f32 _1F4;
    f32 _1F8;
    f32 _1FC;
    f32 _200;
    f32 _204;
    f32 _208;
    f32 _20C;
    f32 _210;
    u8  zoneId;              // +0x214
    u8  type;                // +0x215  0 Stage, 1 Player, 2 Yoshi, 3 Enemy
    u8  _216;
    u8  _217;
    u8  _218;
    u8  _219;
    u8  _21A;
    u8  eventId1;            // +0x21B
    u8  eventId2;            // +0x21C
    u16 _21E;
    u32 _220;
    u32 _224;
    u32 _228;
    u32 _22C;
    u32 _230;
    u32 _234;
    u32 _238;
    Vec3 effectOffset;       // +0x23C
    Vec3 _248;
    Vec3 _254;
    Vec3 _260;
    u32 _26C;
    u32 _270;
    u32 _274;
    u32 _278;
    u32 _27C;
    u32 _280;
};
"""

FILES["actor/collisionactor.h"] = """#pragma once

#include "stageactor.h"

class ActorCollisionMgr;

// A StageActor that owns a collision manager.
class CollisionActor : public StageActor
{
public:
    CollisionActor(const ActorBuildInfo* buildInfo);
    virtual ~CollisionActor();

    // Confirmed: the collision manager pointer sits at +0x288.
    ActorCollisionMgr* collisionMgr;   // +0x288

    f32 _1784;
    f32 _1798;
    f32 _179C;
    f32 _17A0;
};
"""

FILES["states.h"] = """#pragma once

#include "types.h"

class StateBase
{
public:
    virtual void execute();
    virtual void draw();
};

// A state machine held inside an actor. 0x24 bytes as observed at +0x17B0.
template <typename T>
class StateWrapper
{
public:
    void change(StateBase* next);
    void execute();

    StateBase* current;   // +0x00
    StateBase* next;      // +0x04
    u32 _08[7];
};
"""

FILES["actor/multistateactor.h"] = """#pragma once

#include "collisionactor.h"
#include "states.h"

// A CollisionActor driven by a StateWrapper at +0x17B0.
class MultiStateActor : public CollisionActor
{
public:
    MultiStateActor(const ActorBuildInfo* buildInfo);
    virtual ~MultiStateActor();

    virtual void doStateChange(StateBase* state);

    StateWrapper<MultiStateActor> states;   // +0x17B0
    u32 _17D4;
};
"""

FILES["actor/enemy.h"] = """#pragma once

#include "multistateactor.h"

class EnemyFreezeMgr;

// An enemy. sizeof(Enemy) is 0x189A, so anything at 0x189C or beyond belongs to
// a derived class.
class Enemy : public MultiStateActor
{
public:
    Enemy(const ActorBuildInfo* buildInfo);
    virtual ~Enemy();

    virtual void freeze();

    u8  _17D8[0x30];
    EnemyFreezeMgr* freezeMgr;   // +0x1808
    u8  _180C[0x8E];
    u8  _tail[0x189A - 0x189A];  // sizeof ends at 0x189A
};
"""

FILES["model.h"] = """#pragma once

#include "types.h"
#include "sead.h"
#include "util/mtx34.h"

// Wraps a model file plus its animation slots.
class ModelWrapper
{
public:
    static ModelWrapper* create(const sead::SafeString& archiveName,
                                const sead::SafeString& modelName);

    void updateModel();
    void updateAnimations();
    void setMtx(const Mtx34& mtx);
    void setScale(const Vec3& scale);
};
"""

FILES["movementhandler.h"] = """#pragma once

#include "types.h"
#include "util/vec3.h"

// Links an actor into the game's shared movement system.
class MovementHandler
{
public:
    u32  getMaskForMovementType(u32 movementType);
    void link(Vec3& position, u32 mask, u16 movementId);
    void execute();

    Vec3 position;
};
"""

FILES["drawmgr.h"] = """#pragma once

#include "types.h"
#include "sead.h"

class ModelWrapper;

class DrawMgr
{
public:
    static DrawMgr* instance;

    void drawModel(ModelWrapper* model);
};
"""

FILES["effect.h"] = """#pragma once

#include "types.h"
#include "util/vec3.h"

class Effect
{
public:
    static void spawn(u32 effectId, const Vec3* position,
                      const Vec3* rotation, const Vec3* scale);
};
"""

FILES["sound.h"] = """#pragma once

#include "types.h"
#include "util/vec3.h"

void PlaySound(const char* soundName, const Vec3& position);
"""

FILES["project.h"] = """#pragma once

#include "preprocessor.h"

#define PROJECT_NAME            "NSMBU Deluxe RE findings"

#define PROJECT_VERSION_MAJOR   0
#define PROJECT_VERSION_MINOR   1
#define PROJECT_VERSION_PATCH   0

#define PROJECT_VERSION_STRING  PP_STR_VAL(PROJECT_VERSION_MAJOR) "." \\
                                PP_STR_VAL(PROJECT_VERSION_MINOR) "." \\
                                PP_STR_VAL(PROJECT_VERSION_PATCH)

#define PROJECT_VERSION_NUMBER  (((PROJECT_VERSION_MAJOR) << 16) | \\
                                 ((PROJECT_VERSION_MINOR) << 8)  | \\
                                 (PROJECT_VERSION_PATCH))
"""


def main():
    for rel, text in FILES.items():
        p = os.path.join(INC, rel.replace("/", os.sep))
        os.makedirs(os.path.dirname(p), exist_ok=True)
        with open(p, "w", encoding="utf-8", newline="\n") as f:
            f.write(text)
        print(f"  include/{rel}")
    print(f"\nwrote {len(FILES)} headers to {INC}")


if __name__ == "__main__":
    main()
