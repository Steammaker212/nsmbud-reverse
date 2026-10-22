#pragma once

#include "sead.h"
#include "util/vec2.h"
#include "util/vec3.h"

class StageActor;
class CollisionMgr;

//
// Static world colliders: the shapes the level itself is made of (ground,
// walls, water, lava) as distinct from the ActiveCollider that a moving actor
// carries.
//
// The family shares a base that holds the list links, the bounding rectangle and
// the owner back-pointer, then each concrete shape adds its own geometry.
//

class ColliderBase : public sead::IDisposer     // 0x154 bytes
{
public:
    typedef void (*Callback)(ColliderBase* cSelf, CollisionMgr* otherMgr, u32 unk);

    class List
    {
    public:
        struct Node
        {
            ColliderBase* owner;   // +0x00
            Node* next;            // +0x04
            Node* prev;            // +0x08
        };

        virtual void insert(Node* where, Node* node);
        virtual void remove(Node* node);
        virtual void insertBack(Node* node);
        virtual void insertFront(Node* node);
        virtual void clear();

        Node* first;               // +0x04
        Node* last;                // +0x08
    };

    struct Node
    {
        struct Unk { u32 _0; u32 _4; f32 _8; u32 _C; };

        u16 _0;
        Unk _4;
        u32 _14;
        u32 _18;
        u32 _1C;
    };

    enum Types
    {
        TypeSolid      = 0,
        TypeCoin       = 1,
        TypeBlueCoin   = 3,
        TypeWater      = 19,
        TypeLava       = 20,
        TypePoison     = 21,
        TypeQuicksand  = 22
    };

    enum SurfaceTypes
    {
        SurfaceRegular   = 0,
        SurfaceIce       = 1,
        SurfaceSnow      = 2,
        SurfaceQuicksand = 3,
        SurfaceSand      = 4,
        SurfaceGrass     = 5
    };

    ColliderBase();
    virtual ~ColliderBase();

    virtual bool vf10(u32* unk1, u32 unkMask);
    virtual u32  vf14(u32* unk);
    virtual void vf18() = 0;
    virtual void execute() = 0;
    virtual bool vf20(u32* a, u32* b, u32* c, Vec2* d, u32 e) = 0;
    virtual bool vf24(u32* a, u32* b, Vec2* c, u32 d, u32* e) = 0;
    virtual bool vf28(u32* a, Vec2* b) = 0;
    virtual bool vf2C(u32* a) = 0;
    virtual void vf30();
    virtual void vf34() = 0;
    virtual void vf38(u32* a) = 0;
    virtual bool vf3C(Vec2* a) = 0;

    void setType(u32 type);
    void setSolidity(u32 solidity);
    void setSurfaceType(u32 surfaceType);

    List::Node  listNodes[8];    // +0x10
    sead::Rect  rect;            // +0x70
    u8          _80[0x90 - 0x80];
    StageActor* owner;           // +0x90
    u32         _94;
    Vec3*       ownerPosition;   // +0x98
    Vec3*       owner248;        // +0x9C
    u8*         owner56;         // +0xA0
    u8*         owner57;         // +0xA4
    u8*         ownerPlayerId;   // +0xA8
    Vec2        distToCenter;    // +0xAC
    u8          _B4[0xF4 - 0xB4];
    u32         rotation;        // +0xF4
    u8          _F8[0x138 - 0xF8];
    Callback    _138;            // +0x138
    Callback    _13C;            // +0x13C
    Callback    _140;            // +0x140
    u8          _144[0x154 - 0x144];
};


class ShapedCollider : public ColliderBase      // 0x16C bytes
{
public:
    struct Info
    {
        Vec2 distToCenter;   // +0x00
        f32  _8;             // +0x08
        f32  _C;             // +0x0C
        Vec2 topLeft;        // +0x10
        Vec2 bottomRight;    // +0x18
        u32  rotation;       // +0x20
    };

    ShapedCollider();
    virtual ~ShapedCollider();

    void init(StageActor* owner, const Info& info);

    bool vf10(u32* a, u32 m) override;
    u32  vf14(u32* a) override;
    void vf18() override;
    void execute() override;
    bool vf20(u32* a, u32* b, u32* c, Vec2* d, u32 e) override;
    bool vf24(u32* a, u32* b, Vec2* c, u32 d, u32* e) override;
    bool vf28(u32* a, Vec2* b) override;
    bool vf2C(u32* a) override;
    void vf30() override;
    void vf34() override;
    void vf38(u32* a) override;
    bool vf3C(Vec2* a) override;
    virtual void vf40();

    u8 _154[0x16C - 0x154];
};


class RectCollider : public ShapedCollider      // 0x290 bytes
{
public:
    RectCollider();

    bool vf28(u32* a, Vec2* b) override;

    u8   _16C[0x190 - 0x16C];
    Node nodes[8];               // +0x190
};


class SolidOnTopCollider : public ColliderBase  // 0x170 bytes
{
public:
    struct Info
    {
        Vec2  distToCenter;   // +0x00
        f32   _8;             // +0x08
        f32   _C;             // +0x0C
        Vec2* points;         // +0x10
        u32   rotation;       // +0x14
    };

    SolidOnTopCollider();
    virtual ~SolidOnTopCollider();

    void init(StageActor* owner, const Info& info, u32 numPoints,
              sead::Heap* heap = nullptr);

    void vf18() override;
    void execute() override;
    bool vf20(u32* a, u32* b, u32* c, Vec2* d, u32 e) override;
    bool vf24(u32* a, u32* b, Vec2* c, u32 d, u32* e) override;
    bool vf28(u32* a, Vec2* b) override;
    bool vf2C(u32* a) override;
    void vf30() override;
    void vf34() override;
    void vf38(u32* a) override;
    bool vf3C(Vec2* a) override;

    u32 numPoints;               // +0x154
    u8  _158[0x16C - 0x158];
    f32 _16C;
};


class CircularCollider : public ColliderBase    // 0x190 bytes
{
public:
    struct Info
    {
        Vec2 distToCenter;   // +0x00
        f32  _8;             // +0x08
        f32  _C;             // +0x0C
        f32  _10;            // +0x10
        f32  _14;            // +0x14
        f32  radius;         // +0x18
        u32  rotation;       // +0x1C
    };

    CircularCollider();

    void init(StageActor* owner, const Info& info);

    bool vf10(u32* a, u32 m) override;
    u32  vf14(u32* a) override;
    void vf18() override;
    void execute() override;
    bool vf20(u32* a, u32* b, u32* c, Vec2* d, u32 e) override;
    bool vf24(u32* a, u32* b, Vec2* c, u32 d, u32* e) override;
    bool vf28(u32* a, Vec2* b) override;
    bool vf2C(u32* a) override;
    void vf30() override;
    void vf34() override;
    void vf38(u32* a) override;
    bool vf3C(Vec2* a) override;

    u8 _154[0x190 - 0x154];
};


// Owns the seven collider lists the world is bucketed into.
class ColliderMgr : public sead::IDisposer      // 0x64 bytes
{
public:
    void add(ColliderBase* collider);

    static ColliderMgr* instance;

    ColliderBase::List lists[7];   // +0x10
};
