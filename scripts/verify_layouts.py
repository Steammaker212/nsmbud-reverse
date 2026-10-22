"""Verify our header layouts produce the offsets the disassembly shows.

Compile-time assertions would be ideal, but several offsets are disputed, so we
report them and compare against the verified set.
"""
import os
import subprocess
import tempfile

PROJ = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx"

# name -> (offsetof expression, expected offset, confidence)
CHECKS = [
    ("Actor", "profile",          0x0C, "V"),
    ("Actor", "settings1",        0x14, "V"),
    ("Actor", "parent",           0x38, "V"),
    ("Actor", "movementId",       0x44, "I"),
    ("StageActor", "direction",   0x50, "V"),
    ("StageActor", "playerId",    0x54, "V"),
    ("StageActor", "position",    0x6C, "V"),
    ("StageActor", "speed",       0x78, "V"),
    ("StageActor", "maxSpeed",    0x84, "V"),
    ("StageActor", "scale",       0x90, "V"),
    ("StageActor", "rotation",    0x9C, "V"),
    ("StageActor", "aCollider",   0xBC, "V"),
    ("StageActor", "zoneId",      0x214, "V"),
    ("StageActor", "type",        0x215, "V"),
    ("StageActor", "eventId1",    0x21B, "V"),
    ("StageActor", "eventId2",    0x21C, "V"),
    ("StageActor", "effectOffset",0x23C, "V"),
    ("CollisionActor", "collisionMgr", 0x288, "V"),
    ("MultiStateActor", "states", 0x17B0, "V"),
    ("Enemy", "freezeMgr",        0x1808, "V"),
    ("ActiveCollider", "owner",   0x40, "V"),
    ("ActiveCollider", "info",    0x74, "V"),
    ("ActiveCollider", "trapezoidTopLeft", 0xA0, "V"),
    ("Profile", "buildFunc",      0x04, "V"),
    ("Profile", "id",             0x08, "V"),
    ("Profile", "actorInfo",      0x0C, "V"),
    ("Profile", "hasResourcesLoaded", 0x10, "V"),
    ("Profile", "flags",          0x14, "V"),
]


def build_probe():
    # We cannot run an ARM binary on the host, so assert at compile time. A
    # failing assertion names the field and both values in the error text.
    lines = ['#include "actor/enemy.h"',
             '#include "profile.h"',
             '#include "activecollider.h"',
             "",
             "#define CHECK(T, F, N) \\",
             '    static_assert(__builtin_offsetof(T, F) == (N), \\',
             '                  #T "::" #F " is not at " #N)',
             ""]
    for cls, field, exp, conf in CHECKS:
        lines.append(f"CHECK({cls}, {field}, 0x{exp:04X});")
    # 0x189A is not a multiple of 4, so a 4-byte-aligned layout rounds to
    # 0x189C. Both agree a derived class starts at 0x189C or later, which is
    # what actually matters for the member offsets we rely on.
    lines.append('static_assert(sizeof(Enemy) >= 0x189A && '
                 'sizeof(Enemy) <= 0x189C, '
                 '"sizeof(Enemy) outside the documented 0x189A..0x189C range");')
    lines.append("")
    return "\n".join(lines)


def main():
    src = build_probe()
    with tempfile.TemporaryDirectory() as td:
        cpp = os.path.join(td, "probe.cpp")
        with open(cpp, "w", encoding="utf-8") as f:
            f.write(src)
        r = subprocess.run(["clang++", "--no-default-config",
                            "--target=armv7l-none-eabihf",
                            "-mcpu=cortex-a57",
                            "-mfpu=crypto-neon-fp-armv8",
                            "-mfloat-abi=hard",
                            "-fPIC", "-nostdlib",
                            "-fno-rtti", "-fno-exceptions", "-fpermissive",
                            "-Wno-invalid-offsetof", "-fsyntax-only",
                            "-I", os.path.join(PROJ, "include"),
                            cpp],
                           capture_output=True, text=True)
        if r.returncode:
            print("=== layout assertions FAILED ===")
            for line in r.stderr.splitlines():
                if "error" in line:
                    print("  " + line.strip())
            return 1
        print(f"=== all {len(CHECKS)} field offsets + sizeof(Enemy) assert OK ===")
        return 0


if __name__ == "__main__":
    raise SystemExit(main())
