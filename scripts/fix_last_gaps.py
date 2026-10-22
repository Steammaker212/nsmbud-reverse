"""Fill the last small gaps found by compiling the known-working actors."""
import io
import os

INC = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx\include"


def patch(rel, old, new, label):
    p = os.path.join(INC, rel)
    t = io.open(p, encoding="utf-8").read()
    if old not in t:
        print(f"  SKIP {rel} ({label}: pattern absent)")
        return
    io.open(p, "w", encoding="utf-8", newline="\n").write(t.replace(old, new))
    print(f"  {rel}: {label}")


# 1. Vec3::set
patch("util/vec3.h",
      "    Vec3 operator*(f32 s) const { return Vec3(x * s, y * s, z * s); }",
      """    Vec3 operator*(f32 s) const { return Vec3(x * s, y * s, z * s); }

    void set(f32 x_, f32 y_, f32 z_) { x = x_; y = y_; z = z_; }
    void set(const Vec3& o) { x = o.x; y = o.y; z = o.z; }""",
      "added set() overloads")

# 2. EventMgr::isActive / isInactive (I removed them in the rewrite)
patch("eventmgr.h",
      """    static EventMgr* instance;

    u64 events;                 // +0x10  one bit per event id
    u8  rest[0x940 - 0x18];     // remaining manager state, not mapped""",
      """    // Queries. An event is either on or off; there is no third state.
    inline bool isActive(u8 id)   { return (events & (1ULL << id)) != 0; }
    inline bool isInactive(u8 id) { return (events & (1ULL << id)) == 0; }

    static EventMgr* instance;

    u64 events;                 // +0x10  one bit per event id
    u8  rest[0x940 - 0x18];     // remaining manager state, not mapped""",
      "added isActive/isInactive")

# 3. StageActor collision-callback surface used by Enemy subclasses.
#    Enemy exposes a static collisionCallback slot that subclasses assign to.
patch("actor/enemy.h",
      """    virtual void freeze();

    u8 _17D8[0x1808 - 0x17D8];   // +0x17D8..0x1808  unmapped""",
      """    virtual void freeze();

    // Default collision handler for enemies. Derived classes that need custom
    // contact behaviour assign their own here and let ActiveCollider::Info point
    // at it.
    static void collisionCallback(ActiveCollider* acSelf, ActiveCollider* acOther);

    u8 _17D8[0x1808 - 0x17D8];   // +0x17D8..0x1808  unmapped""",
      "added collisionCallback")

# 4. level.h -- what the magic-lift mod needs from the level/area manager.
p = os.path.join(INC, "level.h")
io.open(p, "w", encoding="utf-8", newline="\n").write(r"""#pragma once

#include "types.h"
#include "util/vec2.h"
#include "util/vec3.h"

class StageActor;

//
// The current level: its size in tiles, its tile layers, and the persistent
// state the course keeps across a play session.
//
class Level
{
public:
    static Level* instance;

    // Converts a world position to the tile indices containing it.
    void getTilePosition(const Vec3& world, Vec2* out) const;

    Vec2  size;          // level dimensions, in tiles
    u32   areaId;        // current area within the level
};
""")
print("  level.h: created")
