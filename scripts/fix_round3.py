"""Final corrections: freezeMgr by value, Effect signature, Level::getArea, SoundSystem."""
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


# 1. freezeMgr is an embedded object, not a pointer. sizeof(Enemy) 0x189A minus
#    0x1808 leaves 0x92, which is the manager plus trailing fields -- a pointer
#    would leave far too much unexplained.
patch("actor/enemy.h",
      "EnemyFreezeMgr* freezeMgr;   // +0x1808  confirmed",
      "EnemyFreezeMgr freezeMgr;    // +0x1808  confirmed (embedded, not a pointer)",
      "freezeMgr by value")

# 2. Effect::spawn takes Vec3i* for rotation; drop my overload that caused the
#    ambiguity and match the real signature.
write("effect.h", r"""#pragma once

#include "sead.h"
#include "util/vec3.h"
#include "util/vec3i.h"
#include "util/mtx34.h"

//
// A running particle effect. The game owns the pool; callers get a handle they
// can follow or stop.
//
class Effect
{
public:
    Effect();

    bool update(Vec3* position, Vec3i* rotation, Vec3* scale);
    bool setEffectId(s32 effectId);

    // `effectId` indexes the game's effect table. Rotation is an integer vector;
    // position and scale are floats. Any pointer except position may be null.
    static bool spawn(s32 effectId, Vec3* position, Vec3i* rotation, Vec3* scale);

    Mtx34 mtx;      // +0x00
    u8    _30;      // +0x30
    u32*  _34;      // +0x34
    s32   _38;      // +0x38
    u32*  _3C;      // +0x3C
};


class EffectWrapper : public sead::IDisposer
{
public:
    EffectWrapper();

    bool update(s32 effectId, Vec3* position, Vec3i* rotation, Vec3* scale);

    // Follow an existing effect instead of spawning a new one.
    void follow(const Vec3* position);
    void stop();
};
""")

# 3. sound.h -- SoundSystem::GetItemLabel is used by the effect spawner.
write("sound.h", r"""#pragma once

#include "types.h"
#include "util/vec2.h"

//
// The game's audio front end. Sound items are addressed either by numeric id or
// by name ("SE_..." labels).
//
class SoundSystem
{
public:
    static SoundSystem* instance;

    const char* GetItemLabel(u32 id);
    u32         GetItemId(const char* label);

    void* soundArchive;
};


// A sound emitter attached to an object in the world.
class SoundActor
{
public:
    u32 _7C;
    u32 _80;
    u32 _84;
    u32 _88;
};


class BasicSoundActor : public SoundActor
{
public:
    void playSound(const char* label, Vec2* screenPos, u32 unk);
};

// Two global emitters the game keeps alive for UI and ambient sound.
extern BasicSoundActor* GlobalBasicSoundActorA;
extern BasicSoundActor* GlobalBasicSoundActorB;
""")

# 4. Level: real Area shape and getArea.
write("level.h", r"""#pragma once

#include "sead.h"
#include "util/vec2.h"
#include "util/vec3.h"

class StageActor;

//
// A level is split into up to four areas; only one is live at a time. Each area
// owns its block (tile object) lists.
//
class Level : public sead::IDisposer
{
public:
    class Area
    {
    public:
        struct Location
        {
            u16 x;      // +0x00
            u16 y;      // +0x02
            u16 w;      // +0x04
            u16 h;      // +0x06
            u8  id;     // +0x08
        };

        Location* getLocation(sead::Rect* rectOut, u8 id);

        u32  id;                     // +0x000
        void* blocks[15];            // +0x004
        u32  blockSizes[15];         // +0x040
        u32  blockEntryCounts[15];   // +0x07C
        u8   _B8[0x100];
        u8   _1B8[0x100];
        u8   _2B8[0x100];
    };

    Area* getArea(u32 id);

    static Level* instance;

    Area areas[4];
};


//
// The live position within the level: which world/level/area/entrance the player
// is in, plus where they are heading.
//
class LevelInfo : public sead::IDisposer
{
public:
    static LevelInfo* instance;

    u8  world;                 // +0x10
    u8  level;                 // +0x11
    u8  area;                  // +0x12
    u8  entrance;              // +0x13
    u32 zone;                  // +0x14
    u32 entranceType;          // +0x18
    u8  destWorld;             // +0x1C
    u8  destLevel;             // +0x1D
    u8  destArea;              // +0x1E
    u8  destEntrance;          // +0x1F
    u32 destZone;              // +0x20
    u32 destEntranceType;      // +0x24
};
""")

# 5. seam of LevelInfo used by tile.h is fine.
print("done")
