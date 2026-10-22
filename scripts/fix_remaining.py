"""Close the remaining gaps so the known-working actor sources compile unmodified."""
import io
import os

INC = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx\include"


def write(rel, text):
    p = os.path.join(INC, rel.replace("/", os.sep))
    os.makedirs(os.path.dirname(p), exist_ok=True)
    io.open(p, "w", encoding="utf-8", newline="\n").write(text)
    print(f"  {rel}")


def patch(rel, old, new, label):
    p = os.path.join(INC, rel)
    t = io.open(p, encoding="utf-8").read()
    if old not in t:
        print(f"  SKIP {rel} ({label})")
        return
    io.open(p, "w", encoding="utf-8", newline="\n").write(t.replace(old, new))
    print(f"  {rel}: {label}")


# 1. Vec3::set(const Vec3&) already exists; effectspawner calls
#    scale.set(effectScales[...]) where the array is f32[]. Add that overload.
patch("util/vec3.h",
      "    void set(f32 x_, f32 y_, f32 z_) { x = x_; y = y_; z = z_; }",
      """    void set(f32 v) { x = y = z = v; }
    void set(f32 x_, f32 y_, f32 z_) { x = x_; y = y_; z = z_; }""",
      "added set(f32)")

# 2. ActorInfo::Default
patch("actor/actor.h",
      """// Static per-profile metadata.
struct ActorInfo
{
    u32 _00, _04, _08, _0C, _10, _14, _18, _1C;
    u32 _20, _24, _28, _2C;
};""",
      """// Static per-profile metadata. `Default` is the zeroed record the Profile
// constructor substitutes when a profile supplies no info block.
struct ActorInfo
{
    u32 _00, _04, _08, _0C, _10, _14, _18, _1C;
    u32 _20, _24, _28, _2C;

    static const ActorInfo Default;
};""",
      "added ActorInfo::Default")

# 3. ActorBuildInfo::settings1 -- the build info carries the spawn settings the
#    actor will see as its own settings1/settings2.
patch("actor/actor.h",
      """    u32  _20;
    u32  _24;
    u32  _28;
    Vec3 position;    // +0x2C""",
      """    u32  settings1;   // +0x14  becomes StageActor::settings1
    u32  settings2;   // +0x18  becomes StageActor::settings2
    u32  _1C;
    u32  _20;
    u32  _24;
    u32  _28;
    Vec3 position;    // +0x2C""",
      "added settings1/settings2")

# 4. enemyfreezemgr.h
write("enemyfreezemgr.h", r"""#pragma once

#include "types.h"
#include "util/vec3.h"

class Enemy;

//
// Tracks how many ice actors are freezing an enemy and when it should break out.
//
// An enemy is frozen by being surrounded: each ice projectile registers itself,
// and when enough have landed the enemy becomes a solid ice block. This manager
// owns that bookkeeping.
//
class EnemyFreezeMgr
{
public:
    // Describes one freezing event.
    struct Info
    {
        u32  settings;   // +0x00  bit0: horizontally large, bit1: vertically large
        Vec3 position;   // +0x04
        Vec3 scale;      // +0x10
        u32  _1C;        // +0x1C
    };

    // Tuning for how the ice breaks.
    struct Flags
    {
        u8 breakTime;    // +0x00  stored into breakTime
        u8 _1;           // +0x01  gravity-related
        u8 _2;           // +0x02  gravity-related
    };

    EnemyFreezeMgr(Enemy* owner);

    bool freeze(const Info& info, u32 count);
    void setFlags(const Flags& flags);

    u8       iceActorCount;      // +0x00
    u32      iceActorIds[12];    // +0x04
    u8       breakTime;          // +0x34
    u8       _35;                // +0x35
    u8       _36;                // +0x36
    u32      _38;                // +0x38
    Enemy*   owner;              // +0x3C
    s16      _40;                // +0x40
    u16      _42;                // +0x42
    u16      _44;                // +0x44
    u16      _46;                // +0x46
    u8       _48;                // +0x48
    u8       _49;                // +0x49
    u8       _4A;                // +0x4A
    u8       _4B;                // +0x4B
    u8       _4C;                // +0x4C
};
""")

# 5. level.h needs LevelInfo (tile code refers to LevelInfo::instance->area).
t = io.open(os.path.join(INC, "level.h"), encoding="utf-8").read()
if "LevelInfo" not in t:
    t = t.replace("""class Level
{
public:
    static Level* instance;""",
"""// The live area the player is in.
class LevelInfo
{
public:
    static LevelInfo* instance;

    u32 area;      // current area index
    u32 layer;
};

class Level
{
public:
    static Level* instance;""")
    io.open(os.path.join(INC, "level.h"), "w", encoding="utf-8", newline="\n").write(t)
    print("  level.h: added LevelInfo")

# 6. tile.h
write("tile.h", r"""#pragma once

#include "types.h"
#include "level.h"

//
// Tile access. A level is a grid of 16-bit tile ids per layer; a null pointer
// means the coordinates are outside the layer.
//

class TileLayer
{
public:
    // Returns a pointer to the tile at (x, y), or null if out of range. Optionally
    // reports which block owns that tile through blockIndexOut.
    u16* getTilePtr(u32 x, u32 y, u32* blockIndexOut = nullptr);
};


class TilesetMgr
{
public:
    static TilesetMgr* instance;

    TileLayer* getTileLayer(u32 area, u8 layer);
};


class TileMgr
{
public:
    static TileMgr* instance;

    static inline u16* getTilePtr(u16 x, u16 y, u32 area, u8 layer,
                                  u32* blockIndexOut = nullptr)
    {
        TileLayer* tileLayer = TilesetMgr::instance->getTileLayer(area, layer);
        if (!tileLayer)
            return nullptr;
        return tileLayer->getTilePtr(x, y, blockIndexOut);
    }

    static inline u16* getTilePtrCurrentArea(u16 x, u16 y, u8 layer,
                                             u32* blockIndexOut = nullptr)
    {
        return getTilePtr(x, y, LevelInfo::instance->area, layer, blockIndexOut);
    }
};
""")
