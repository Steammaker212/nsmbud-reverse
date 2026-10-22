#!/usr/bin/env python3
"""Verify the hand-written mangled names in RENAMES are correct.

We generate a translation unit that declares the same signatures the codedx
headers declare, compile it, and read the actual mangled symbol clang emits.
Compare against what gen_sweetdx_sym.py wrote.
"""
import os
import re
import subprocess
import tempfile

FLAGS = [
    "--no-default-config",
    "--target=armv7l-none-eabihf",
    "-fPIC",
    "-nostdlib",
    "-fno-rtti",
    "-fno-exceptions",
    "-c",
]

# Signatures copied verbatim from codedx include/actor/stageactor.h and enemy.h
SRC = r"""
struct Vec2 { float x, y; };
struct Vec3 { float x, y, z; };

class Actor {
public:
    virtual void vf00();
    virtual void vf04();
};

class StageActor : public Actor {
public:
    virtual void setPlayerId(signed char);
    virtual void removeActiveColliders();
    virtual void addActiveColliders();
    virtual void* getCollisionMgr();
    virtual void vf54();
    virtual unsigned vf58();
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

    signed char distanceToPlayer(const Vec2& out);
    unsigned char directionToPlayerH(const Vec3& position);
    unsigned char directionToPlayerV(const Vec3& position);
    void cullCheck(unsigned unkMask = 0);
};

class Enemy : public StageActor {
public:
    virtual void freeze();
};

// Force the compiler to emit every one of them.
void __force(StageActor* s, Enemy* e, Vec2* v2, Vec3* v3, unsigned* u) {
    s->directionToPlayerH(*v3);
    s->directionToPlayerV(*v3);
    s->distanceToPlayer(*v2);
    s->cullCheck(*u);
    e->freeze();
}
"""

EXPECT = {
    "directionToPlayerH": "Vec3 const&",
    "directionToPlayerV": "Vec3 const&",
    "freeze": "Enemy::freeze",
    "beforeDraw": "StageActor::beforeDraw",
}


def mangle(sig_decl):
    """Compile a one-line class method declaration and return its symbol."""
    with tempfile.TemporaryDirectory() as td:
        cpp = os.path.join(td, "m.cpp")
        obj = os.path.join(td, "m.o")
        with open(cpp, "w") as f:
            f.write(sig_decl + "\n")
        r = subprocess.run(["clang++", *FLAGS, cpp, "-o", obj],
                           capture_output=True, text=True)
        if r.returncode:
            return None, r.stderr.strip().splitlines()[-1][:200]
        nm = subprocess.run(["arm-none-eabi-nm", "-C", obj],
                            capture_output=True, text=True)
        nm2 = subprocess.run(["arm-none-eabi-nm", obj],
                             capture_output=True, text=True)
        return nm2.stdout, None


def check(src, expect_mangled, label):
    with tempfile.TemporaryDirectory() as td:
        cpp = os.path.join(td, "m.cpp")
        obj = os.path.join(td, "m.o")
        with open(cpp, "w") as f:
            f.write(src)
        r = subprocess.run(["clang++", *FLAGS, cpp, "-o", obj],
                           capture_output=True, text=True)
        if r.returncode:
            print(f"  compile FAIL: {r.stderr.strip().splitlines()[-1][:200]}")
            return None
        nm = subprocess.run(["arm-none-eabi-nm", obj],
                            capture_output=True, text=True)
        syms = [ln.split()[-1] for ln in nm.stdout.splitlines() if " " in ln]
        return syms


if __name__ == "__main__":
    print("=== real mangled names clang emits for the codedx signatures ===")
    # Declare-only, with definitions forced via explicit instantiation of calls.
    syms = check(SRC, None, "all")
    if syms is None:
        raise SystemExit(1)

    wanted = ["directionToPlayerH", "directionToPlayerV", "freeze"]
    for w in wanted:
        hits = [s for s in syms if w in s and s.startswith("_Z")]
        print(f"\n  {w}:")
        for h in hits:
            print(f"    {h}")

    print("\n=== what StageActor::beforeDraw mangles to ===")
    syms2 = check(
        "class Actor { public: virtual void vf00(); };\n"
        "class StageActor : public Actor { public: virtual void beforeDraw(); };\n"
        "void f(StageActor* s){ s->beforeDraw(); }\n", None, "bd")
    for s in syms2 or []:
        if "beforeDraw" in s:
            print(f"    {s}")
