#pragma once

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
