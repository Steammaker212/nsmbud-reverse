"""Add PlaySound, DrawMgr::drawTile, and make M_PI/angle constants available.

The remaining failures were all small omissions, not layout errors.
"""
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


# 1. sound.h: mapPositionToScreen + PlaySound convenience wrapper.
t = io.open(os.path.join(INC, "sound.h"), encoding="utf-8").read()
if "PlaySound" not in t:
    t += """

// Converts a world position to the screen coordinate the audio system needs.
void mapPositionToScreen(Vec2& out, const Vec2& position);

// Play a positional sound by label (e.g. "SE_OBJ_GET_COIN").
inline void PlaySound(const char* label, const Vec2& position)
{
    Vec2 screenPos;
    mapPositionToScreen(screenPos, position);
    GlobalBasicSoundActorA->playSound(label, &screenPos, 0);
}
"""
    io.open(os.path.join(INC, "sound.h"), "w", encoding="utf-8", newline="\n").write(t)
    print("  sound.h: added mapPositionToScreen + PlaySound")

# 2. DrawMgr::drawTile
patch("drawmgr.h",
      """class ModelWrapper;

class DrawMgr
{
public:
    static DrawMgr* instance;

    void drawModel(ModelWrapper* model);
};""",
      """class ModelWrapper;

class DrawMgr
{
public:
    static DrawMgr* instance;

    void drawModel(ModelWrapper* model);

    // Draw a single tile directly, without an actor. `position` is the world
    // position of the tile centre.
    void drawTile(u16 tile, const Vec3& position, const u32& rotation,
                  const Vec3& scale);
};""",
      "added drawTile")

# 3. drawmgr.h needs Vec3
t = io.open(os.path.join(INC, "drawmgr.h"), encoding="utf-8").read()
if '#include "util/vec3.h"' not in t:
    t = t.replace('#include "sead.h"', '#include "sead.h"\n#include "util/vec3.h"')
    io.open(os.path.join(INC, "drawmgr.h"), "w", encoding="utf-8", newline="\n").write(t)
    print("  drawmgr.h: added vec3 include")

# 4. types.h should expose M_PI/M_2PI: many actor sources use them without
#    including math.h.
t = io.open(os.path.join(INC, "types.h"), encoding="utf-8").read()
if "M_PI" not in t:
    t += """

// Angle constants. Repeated here because actor sources use them without
// including math.h; math.h redefines nothing.
#ifndef M_PI
#define M_PI        3.14159265358979323846f
#endif
#ifndef M_2PI
#define M_2PI       6.28318530717958647692f
#endif
#ifndef M_PI_2
#define M_PI_2      1.57079632679489661923f
#endif
#ifndef M_PI_4
#define M_PI_4      0.78539816339744830962f
#endif
"""
    io.open(os.path.join(INC, "types.h"), "w", encoding="utf-8", newline="\n").write(t)
    print("  types.h: added angle constants")
