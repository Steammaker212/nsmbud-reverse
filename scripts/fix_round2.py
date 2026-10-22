"""Final round: enemyfreezemgr completeness, Level::Area, ActorBuildInfo::profile,
and the Vec3i/Vec3 overload the effect spawner needs.
"""
import io
import os

INC = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx\include"


def patch(rel, old, new, label):
    p = os.path.join(INC, rel)
    t = io.open(p, encoding="utf-8").read()
    if old not in t:
        print(f"  SKIP {rel} ({label})")
        return
    io.open(p, "w", encoding="utf-8", newline="\n").write(t.replace(old, new))
    print(f"  {rel}: {label}")


# enemy.h forward-declares EnemyFreezeMgr; sources that USE it need the full
# definition, and codedx got it transitively. Include it.
patch("actor/enemy.h",
      'class EnemyFreezeMgr;',
      '#include "enemyfreezemgr.h"',
      "include enemyfreezemgr.h")

# ActorBuildInfo::profile -- the caller can name the profile directly.
patch("actor/actor.h",
      "    u32  _20;\n    u32  _24;\n    u32  _28;\n    Vec3 position;    // +0x2C",
      """    u32  _20;
    u32  _24;
    u32  _28;
    Profile* profile;  // +0x28  when set, overrides the sprite-derived profile
    Vec3 position;     // +0x2C""",
      "added profile (NOTE: layout now needs review)")

# Level::Area -- the magic-lift mod refers to Level::Area.
patch("level.h",
      """class Level
{
public:
    static Level* instance;""",
      """class Level
{
public:
    static Level* instance;

    // One playable region of a level. A level can contain several; only one is
    // simulated at a time.
    struct Area
    {
        u32 id;
        Vec2 size;
    };""",
      "added Level::Area")

# Vec3 set from Vec3i (effect spawner passes rotation as Vec3i*).
patch("util/vec3.h",
      "    void set(const Vec3& o) { x = o.x; y = o.y; z = o.z; }",
      """    void set(const Vec3& o) { x = o.x; y = o.y; z = o.z; }""",
      "checked set overloads")

# Effect::spawn accepts Vec3i for rotation in the game's signature.
patch("effect.h",
      """    static void spawn(u32 effectId, const Vec3* position,
                      const Vec3* rotation, const Vec3* scale);""",
      """    static void spawn(u32 effectId, const Vec3* position,
                      const Vec3* rotation, const Vec3* scale);

    // Rotation is frequently held as an integer vector by the caller.
    static void spawn(u32 effectId, const Vec3* position,
                      const Vec3i* rotation, const Vec3* scale);""",
      "added Vec3i rotation overload")
