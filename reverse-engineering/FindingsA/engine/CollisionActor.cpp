// CollisionActor.cpp -- the physics every enemy and item runs on.
//
// CollisionActor sits between StageActor and everything that touches the floor.
// Its 0x17B0 bytes are almost entirely one member: a CollisionMgr at +0x288,
// 5352 bytes, which owns the six collision sensors, the six vertical edges and
// the per-frame result flags.
//
// The class tower, for orientation:
//
//   StageActor        0x284   position, speed, scale, rotation, an ActiveCollider
//     CollisionActor  0x17B0  + a CollisionMgr at +0x288
//       StateActor    0x17D4  + a StateWrapper at +0x17B0
//       MultiStateActor 0x17D8
//         Enemy       0x189C
//
// Reading this alongside readable/enemy/Goomba.cpp is the useful exercise: the
// Goomba's walk decision asks the CollisionMgr questions, and this file is what
// answers them.
//
// Deluxe (Switch) v1.0.0. Ledger: F0124-F0128.

#include "types.h"
#include "game/actor.h"

// ---------------------------------------------------------------------------
// The collision result word
// ---------------------------------------------------------------------------
//
// CollisionMgr::output is at CollisionMgr+0x8B0. With the manager at +0x288 that
// puts it at actor+0xB38 -- the byte the Goombrat ledge check reads, and the
// byte the slope getter below tests. One word, many readers, no copies: the
// manager writes it once per process() and every consumer reads the same bits.
//
// The flags that are established (see the sweet-dx collisionmgr.h for the same
// enumeration, and Goomba.cpp for the ledge check that uses bit 0):
enum CollisionFlags
{
    FlagOnGround      = 1 << 0,
    FlagOnSlope       = 1 << 1,
    FlagOnSemiSolid   = 1 << 4,
    FlagCollidedRight = 1 << 18,
    FlagCollidedLeft  = 1 << 19,
};


// ---------------------------------------------------------------------------
// Slopes
// ---------------------------------------------------------------------------

// 0x6014C4A4. Return the height of the slope the actor is standing on, or 0.
//
// The whole function, and it is worth reading in assembly because the index
// arithmetic is a useful lesson in what "6 entries" means here:
//
//     ldrb r2,[r1,#0x8B0]     ; output
//     tst  r2,#1              ; on the ground at all?
//     beq  return 0
//     ldr  r2,[r1,#0xA0C]     ; which of the six edges
//     cmp  r2,#5
//     bxgt return 0           ; > 5: not a slope
//     rsb  r0,r2,r2,lsl #3    ; r0 = 7*index
//     add  r0,r1,r0,lsl #3    ; r0 += 56*index
//     ldr  r0,[r0,#0xE18]     ; the edge's height
//
// So the six edges live at CollisionMgr+0xE18, 56 bytes each (0xE18..0xF68), and
// +0xA0C is the index of the one the actor is on. `cmp #5 / bxgt` means 0..5 are
// valid and anything higher is treated as "no slope" rather than clamped -- an
// actor that ends up with a junk index simply gets no slope height instead of
// reading past the table.
//
// Note that this is a *height*, not an angle: the two consumers below add it to
// position.y directly.
f32 CollisionMgr::getSlopeHeight()
{
    if (!(this->output & FlagOnGround))
        return 0.0f;

    u32 edge = *(u32*)((char*)this + 0xA0C);
    if (edge > 5)
        return 0.0f;

    return *(f32*)((char*)this + 0xE18 + 56 * edge);
}


// 0x60003624. The per-frame integration, and the best short summary of how this
// engine moves an actor:
//
//   1. Ask the collision manager for the surface. The low 24 bits are a fraction
//      and bits 20-27 are an index into a sine table, which is how the game gets
//      a slope angle without ever storing an angle:
//
//          v3 = (surface >> 20) & 0xFF0
//          v5 = (surface & 0xFFFFFF) * 0.000000059605f
//
//      0.000000059605 is 1/2^24, so `surface & 0xFFFFFF` is a 24-bit fraction.
//      The sine table is then sampled at a 16-byte granularity and interpolated
//      linearly between entries with that fraction -- a classic fixed-point
//      lookup, and the reason there is no atan2 anywhere in this path.
//
//   2. Rotate the actor's x speed into world space with that angle:
//
//          dy = speed.y + speed.x * sin(angle)
//          dx = speed.x * cos(angle)
//
//      Slopes are handled by rotating *velocity*, not by moving the actor up a
//      step: an actor walking at constant speed up a slope genuinely accelerates
//      vertically, which is why speed.y on a slope is not zero.
//
//   3. Halve dx when either slope-contact byte (+0x17A5, +0x17A6) is set. That is
//      the "getting friction on a slope" behaviour.
//
//   4. Add the accumulated acceleration (+0x1788, +0x178C) and the remaining
//      velocity (+0x1770) and move.
//
//   5. If +0x17AC is 1, apply friction to the remaining velocity: subtract
//      +0x1774 from its magnitude, and clamp to zero rather than crossing it. If
//      the actor is on the ground (bit 0 again) the remaining velocity is
//      cleared outright.
//
// Step 5's ordering is what makes the friction consistent: velocity is applied
// first and decayed second, so the actor never stalls one frame early.
void CollisionActor::handleSpeed()
{
    u32 surface = this->collisionMgr.getSurface();

    u32 angleIndex = (surface >> 20) & 0xFF0;
    f32 fraction   = (f32)(surface & 0xFFFFFF) * (1.0f / 16777216.0f);

    f32 sinAngle = sinLutSample(angleIndex, fraction);       // table + 0, +4
    f32 cosAngle = sinLutSample2(angleIndex, fraction);      // table + 8, +0xC

    f32 speedX = this->_._.speed.x;

    f32 dy = this->_._.speed.y + speedX * sinAngle;
    f32 dx = speedX * cosAngle;

    if (this->field_17A6 || this->field_17A5)
        dx *= 0.5f;

    dy += this->field_178C;
    dx += this->field_1788;

    f32 remaining = this->field_1770;

    if (this->field_17AC == 1)
    {
        if (this->collisionMgr.output & FlagOnGround)
        {
            // Standing on something: all residual motion is absorbed.
            remaining     = 0.0f;
            this->field_1770 = 0.0f;
            this->field_17AC = 0;
        }
        else
        {
            f32 friction = this->field_1774;
            if (remaining < 0.0f)
            {
                remaining += friction;
                if (remaining > 0.0f)
                    remaining = 0.0f;              // do not cross zero
            }
            else if (remaining > 0.0f)
            {
                remaining -= friction;
                if (remaining < 0.0f)
                    remaining = 0.0f;
            }

            this->field_1770 = remaining;
            if (remaining == 0.0f)
                this->field_17AC = 0;
        }
    }

    this->_._.position.x += dx + remaining;
    this->_._.position.y += dy;
}


// 0x6000355C. Gravity is a tail call into 0x6000100C -- it does not appear to
// add anything of its own, so the whole behaviour is in that function and this
// file records only that the entry point is a jump, not a distinct algorithm.
// Graded "seen" for the call, "unknown" for the callee's body.
void CollisionActor::handleGravity()
{
    return applyGravity(this);      // tail call to 0x6000100C
}


// ---------------------------------------------------------------------------
// CollisionMgr's own setup
// ---------------------------------------------------------------------------

// 0x6014B9E8. Not a plain constructor: it takes a StateActor and *three optional
// sensor templates*, and derives the six sensors from them.
//
//   CollisionMgr_init(mgr, owner, blowSensor, aboveSensor, adjacentSensor)
//
// The three arguments are each nullable, and each null selects a different
// behaviour rather than "no sensor":
//
//   blowSensor      -> belowSensor.  Null: belowSensor zeroed and its
//                                  "disabled" byte (+0x7C) set to 1.
//   aboveSensor     -> aboveSensor.  Null: zeroed, +0x7B set to 1.
//   adjacentSensor  -> rightSensor AND leftSensor. Null: both zeroed and both
//                                  disabled (+0x79 and +0x7A set to 1).
//
// The adjacent case is the one worth reading: the right and left sensors get the
// *same* a/b/c, except that the left sensor's c is negated (`v17 = -v16`). That
// is how the engine expresses "the left probe is the mirror of the right one"
// without storing two sets of numbers -- a profile supplies its side probe once.
//
// The owner back-pointers are set at the very end, from the StateActor:
// owner (+0x894), position (&owner->position, +0x89C), field_8A0 (&owner->_248),
// field_8A4/8A8 (&owner->_56/_57), playerId (&owner->playerId, +0x8AC).
//
// Each sensor also owns a "disabled" byte next to it, which is why a null sensor
// is a *disabled* sensor rather than a zero one -- the collision pass skips it
// instead of testing a zero-volume box.
//
// The full table, from the str/strb offsets in the init and setSensor bodies.
// Slots are 12 bytes apart at +0x934, and only the first four are used; the
// index order is right, left, above, below:
//
//   idx  sensor        floats at   disabled at (+0x929+idx)   flag (+0x925+idx)
//    0   rightSensor     +0x934      +0x929     1 = skip
//    1   leftSensor      +0x940      +0x92A     1 = skip
//    2   aboveSensor     +0x94C      +0x92B     1 = skip
//    3   belowSensor     +0x958      +0x92C     1 = skip
//
// Each block in the disassembly writes its float address and its disable byte
// together, which is what establishes the pairing: 0x92C with 0x958,
// 0x92B with 0x94C, 0x929 with 0x934, 0x92A with 0x940.
//
// A caveat rather than a claim: the two byte arrays are only four apart
// (+0x925 and +0x929), so ids 4 and 5 would make them overlap. Only four slots
// are ever addressed by this code, which is presumably why that is harmless --
// but the diagonal slots recorded in the type layout are therefore NOT reached
// through setSensor.
//
// The three fixed bytes +0x922, +0x923 and +0x925+idx are "re-read me" markers
// set on every change, so the collision pass knows the sensors moved.
void CollisionMgr::init(StateActor* owner,
                        Sensor* blowSensor,
                        Sensor* aboveSensor,
                        Sensor* adjacentSensor)
{
    // belowSensor: from blowSensor, or zeroed and disabled.
    this->belowSensorActive = 1;
    if (blowSensor)
    {
        this->belowSensorDisabled = 0;
        this->belowSensor.a = blowSensor->a;
        this->belowSensor.b = blowSensor->b;
        this->belowSensor.c = blowSensor->c;
    }
    else
    {
        this->belowSensorDisabled = 1;
        this->belowSensor.a = 0.0f;
        this->belowSensor.b = 0.0f;
        this->belowSensor.c = 0.0f;
    }

    // aboveSensor: same treatment, its own disable byte.
    if (aboveSensor)
    {
        this->aboveSensorDisabled = 0;
        this->aboveSensor.a = aboveSensor->a;
        this->aboveSensor.b = aboveSensor->b;
        this->aboveSensor.c = aboveSensor->c;
    }
    else
    {
        this->aboveSensorDisabled = 1;
        this->aboveSensor.a = 0.0f;
        this->aboveSensor.b = 0.0f;
        this->aboveSensor.c = 0.0f;
    }

    // rightSensor and leftSensor both come from one "adjacent" template, and the
    // left one is the mirror image: same a and b, negated c.
    if (adjacentSensor)
    {
        this->leftSensorDisabled = 0;

        this->rightSensor.a = adjacentSensor->a;
        this->rightSensor.b = adjacentSensor->b;
        this->rightSensor.c = adjacentSensor->c;

        this->leftSensor.a  = adjacentSensor->a;
        this->leftSensor.b  = adjacentSensor->b;
        this->leftSensor.c  = -adjacentSensor->c;
    }
    else
    {
        this->rightSensorDisabled = 1;
        this->rightSensor.a = 0.0f;
        this->rightSensor.b = 0.0f;
        this->rightSensor.c = 0.0f;

        this->leftSensorDisabled = 1;
        this->leftSensor.a = 0.0f;
        this->leftSensor.b = 0.0f;
        this->leftSensor.c = 0.0f;
    }

    this->owner    = owner;
    this->position = &owner->position;         // +0x89C
    this->field_8A0 = &owner->field_248;
    this->field_8A4 = &owner->field_56;
    this->field_8A8 = &owner->field_57;
    this->playerId  = &owner->playerId;        // +0x8AC
}


// 0x6014BB58. Replace one sensor at run time.
//
//   CollisionMgr_setSensor(mgr, sensor, id)
//
// The assembly is unambiguous about the addressing:
//
//     str  r2,[r0,#0x934 + 12*id]     ; sensor slot id, three floats
//     strb r3,[r0 + id + 0x929]       ; 0 if a sensor was supplied, 1 if null
//     strb ip,[r0 + id + 0x925]       ; always 1
//     strb ip,[r0,#0x922]             ; always 1
//     strb ip,[r0,#0x923]             ; always 1
//
// So the sensors are an array at +0x934 (12 bytes each), indexed by `id`, and
// each entry has a companion "this slot is disabled" byte at +0x929+id (1 means
// skip), plus a second flag byte at +0x925+id which this function always sets to
// 1. The two fixed bytes at +0x922/+0x923 are manager-level "something changed"
// markers for the collision pass to re-read.
//
// As with init(), a null sensor disables the slot rather than zeroing it --
// except that the floats *are* also zeroed, so a disabled slot is harmless even
// if the disable flag were missed.
void CollisionMgr::setSensor(Sensor* sensor, u32 id)
{
    this->dirty1 = 1;                       // +0x922
    this->dirty2[id] = 1;                   // +0x925 + id
    this->dirty3 = 1;                       // +0x923

    Sensor* slot = &this->sensors[id];
    if (sensor)
    {
        this->sensorDisabled[id] = 0;       // +0x929 + id
        slot->a = sensor->a;
        slot->b = sensor->b;
        slot->c = sensor->c;
    }
    else
    {
        this->sensorDisabled[id] = 1;
        slot->a = 0.0f;
        slot->b = 0.0f;
        slot->c = 0.0f;
    }
}
