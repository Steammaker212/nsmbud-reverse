"""Add the remaining engine headers, authored from recovered offsets.

These exist so real actor code (including the mods known to work) compiles
against this tree. They are written from the factual interface -- offsets, sizes,
and what each call does -- not copied from any GPL source. See NOTICE.md.
"""
import io
import os

INC = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx\include"

F = {}

F["math.h"] = """#pragma once

#include "types.h"

#define M_2PI       6.283185307f
#define M_PI        3.141592653f
#define M_PI_2      1.570796326f
#define M_PI_4      0.785398163f
#define M_SQRT2     1.414213562f
#define M_SQRT1_2   0.707106781f

// These resolve to the game's own math routines through symbols/nsmbudx.sym.
f32 sin(f32 x);
f32 cos(f32 x);
f32 tan(f32 x);
f32 asin(f32 x);
f32 acos(f32 x);
f32 atan2(f32 y, f32 x);
f32 exp(f32 x);
f32 log(f32 x);
f32 pow(f32 x, f32 y);
f32 sqrt(f32 a);
f32 fmod(f32 a, f32 b);

inline f32 fabs(f32 x) { return (x < 0.0f) ? -x : x; }

template <class T> const T& min(const T& a, const T& b) { return (a < b) ? a : b; }
template <class T> const T& max(const T& a, const T& b) { return (a < b) ? b : a; }

// Angle helpers. The game stores angles as a fixed-point 32-bit value where a
// full turn is 2^32; these convert to and from radians.
inline f32 deg_to_rad(f32 deg) { return (deg * M_PI) / 180.0f; }
inline f32 rad_to_deg(f32 rad) { return (rad * 180.0f) / M_PI; }

inline u32 fix_rad(f32 val)
{
    val = fmod(val, M_2PI);
    if (val < 0.0f) val += M_2PI;
    return (u32)(val * 683565276.0f);
}

inline f32 unfix_rad(u32 val) { return (f32)val / 683565248.0f; }

inline u32 fix_deg(f32 val)
{
    val = fmod(val, 360.0f);
    if (val < 0.0f) val += 360.0f;
    return (u32)(val * 11930465.0f);
}

inline f32 unfix_deg(u32 val) { return (f32)val / 11930465.0f; }
"""

F["util/mtx34.h"] = """#pragma once

#include "types.h"
#include "vec3.h"
#include "vec3i.h"

// 3x4 row-major transform, 0x30 bytes. ModelWrapper::setMtx consumes this.
class Mtx34
{
public:
    union
    {
        f32 rows[3][4];
        f32 cells[12];
    };

    inline void identity()
    {
        rows[0][0] = 1.0f; rows[0][1] = 0.0f; rows[0][2] = 0.0f; rows[0][3] = 0.0f;
        rows[1][0] = 0.0f; rows[1][1] = 1.0f; rows[1][2] = 0.0f; rows[1][3] = 0.0f;
        rows[2][0] = 0.0f; rows[2][1] = 0.0f; rows[2][2] = 1.0f; rows[2][3] = 0.0f;
    }

    inline void translate(const Vec3& t)
    {
        rows[0][3] = t.x;
        rows[1][3] = t.y;
        rows[2][3] = t.z;
    }

    inline void rotateAndTranslate(const Vec3i& rotation, const Vec3& translation)
    {
        identity();
        rotateX(rotation.x);
        rotateY(rotation.y);
        rotateZ(rotation.z);
        translate(translation);
    }

    void rotateX(const u32& rot);
    void rotateY(const u32& rot);
    void rotateZ(const u32& rot);
};
"""

F["actormgr.h"] = """#pragma once

#include "sead.h"

class Actor;
struct ActorBuildInfo;

class ActorMgr : public sead::IDisposer
{
public:
    static ActorMgr* instance;

    Actor* create(ActorBuildInfo* buildInfo, u32 unk);
};
"""

F["eventmgr.h"] = """#pragma once

#include "sead.h"

// Course-wide event switches, addressed by a small integer id.
class EventMgr : public sead::IDisposer
{
public:
    void set(u32 id, u32 time, bool active,
             u32 unk1 = 0, u32 unk2 = 0, u32 unk3 = 0, u32 unk4 = 0);

    inline u64 mask(u8 id) { return 1ULL << id; }

    inline bool isActive(u8 id)   { return (events & mask(id)) != 0; }
    inline bool isInactive(u8 id) { return (events & mask(id)) == 0; }

    static EventMgr* instance;

    u64 events;                 // +0x10
    u8  _unk18[0x940 - 0x18];
};
"""

F["arearumblemgr.h"] = """#pragma once

#include "sead.h"

// Drives controller rumble for the current area.
class AreaRumbleMgr : public sead::IDisposer
{
public:
    static AreaRumbleMgr* instance;

    void rumble(s32 intensity, s8 unk2, s8 unk3, s8 unk4);
};
"""

F["lightsource.h"] = """#pragma once

#include "sead.h"
#include "util/vec3.h"

// A dynamic light. Layout confirmed by use in the light-actor mod.
class LightSource : public sead::IDisposer
{
public:
    LightSource();
    ~LightSource();

    bool update(u32 type, Vec3* position, f32* _24, f32* attenuationRadius,
                f32* _2C, sead::Color4f* color, f32* _40, f32* _44);
    bool update(Vec3* position, f32* _24, f32* attenuationRadius,
                f32* _2C, sead::Color4f* color, f32* _40, f32* _44);

    bool _10;                  // +0x10  initialised?
    u32* _14;                  // +0x14
    Vec3 position;             // +0x18
    f32  _24;                  // +0x24
    f32  attenuationRadius;    // +0x28  init 1.0
    f32  _2C;                  // +0x2C
    sead::Color4f color;       // +0x30
    f32  _40;                  // +0x40
    f32  _44;                  // +0x44
};
"""

F["mask.h"] = """#pragma once

#include "sead.h"
#include "util/vec3.h"

// A spherical reveal mask: punches a hole in the darkness overlay.
class LightMask
{
public:
    LightMask();

    virtual bool init(sead::Heap* heap, u32 type);
    virtual bool update();
    virtual bool draw();

    f32  radius;     // +0x04
    f32  _8;         // +0x08
    Vec3 position;   // +0x0C
    u32* _18;        // +0x18
    u32  _1C;        // +0x1C
    u32  type;       // +0x20
    u32  _24;        // +0x24
};
"""

F["linefollower.h"] = """#pragma once

#include "states.h"
#include "util/vec2.h"

// Moves something along a rail/line in the level. 0x90 bytes.
class LineFollower
{
public:
    void init(const Vec2& position, u8 layer,
              bool noReverseOnStop, bool reversedDirection);
    void start(bool unk);

    inline void execute() { states.execute(); }

    StateWrapper<LineFollower> states;  // +0x00
    Vec2 _24[7];                        // +0x24
    Vec2 speed;                         // +0x5C
    Vec2 position;                      // +0x64
    Vec2 lastPosition;                  // +0x6C
    Vec2 blockPosition;                 // +0x74
    Vec2 _7C;                           // +0x7C
    u32  rotation;                      // +0x84
    f32  lineSpeed;                     // +0x88
    bool noReverseOnStop;               // +0x8C
    u8   layer;                         // +0x8D
    bool reversedDirection;             // +0x8E
    u8   _8F;                           // +0x8F
};
"""

F["collisionmgr.h"] = """#pragma once

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
"""


def main():
    # sead needs Color4f / Heap / Rect for the headers above.
    sead = os.path.join(INC, "sead.h")
    t = io.open(sead, encoding="utf-8").read()
    if "Color4f" not in t:
        t = t.replace("template <typename T>\nclass SafeStringBase : public SafeString",
"""struct Color4f
{
    f32 r, g, b, a;
};

struct Rect
{
    f32 x, y, w, h;
};

class Heap
{
public:
    static Heap* getCurrentHeap();
};

template <typename T>
class SafeStringBase : public SafeString""")
        io.open(sead, "w", encoding="utf-8", newline="\n").write(t)
        print("  sead.h: added Color4f, Rect, Heap")

    for rel, text in F.items():
        p = os.path.join(INC, rel.replace("/", os.sep))
        os.makedirs(os.path.dirname(p), exist_ok=True)
        io.open(p, "w", encoding="utf-8", newline="\n").write(text)
        print(f"  include/{rel}")
    print(f"\nadded {len(F)} headers")


if __name__ == "__main__":
    main()
