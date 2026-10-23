"""Find game symbols whose names collide with symbols our own linker defines.

`main.sym` records every name in the game database, and a few of those names are
also names the module's own link defines: `_DYNAMIC`, `_init`, `__bss_start__`.
An absolute assignment for one of those does not merely shadow our definition --
because `-T script` assignments are absolute, the assignment *wins*, and the
module ships a `_DYNAMIC` pointing into the game's address space.

That exact failure is what broke the first sweetdx build (DT_INIT outside the
module, every model black), so it is checked mechanically rather than
remembered.

Usage:
    python check_linker_collisions.py --sym data/loader/main.sym \
        --elf loader/out/mod.elf
"""
from __future__ import annotations

import argparse
import re
import subprocess
import sys
from pathlib import Path

from module_symbols import MODULE_SYMBOLS


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--sym", required=True)
    ap.add_argument("--elf", default=None)
    ap.add_argument("--readelf", default="arm-none-eabi-readelf")
    args = ap.parse_args()

    names = []
    for line in Path(args.sym).read_text(encoding="utf-8").splitlines():
        m = re.match(r"^([A-Za-z_]\w*)\s*=\s*0x([0-9A-Fa-f]+)", line.strip())
        if m:
            names.append((m.group(1), int(m.group(2), 16)))

    collisions = [(n, a) for n, a in names if n in MODULE_SYMBOLS]
    print("game symbols colliding with module-defined names: %d" % len(collisions))
    for n, a in sorted(collisions):
        print("  %-32s RVA 0x%08X" % (n, a))

    bad = 0
    if args.elf:
        out = subprocess.run([args.readelf, "-s", "-W", args.elf],
                             capture_output=True, text=True).stdout
        print("\nmodule symbol table values for those names:")
        for n, _ in sorted(collisions):
            for line in out.splitlines():
                parts = line.split()
                if len(parts) >= 8 and parts[-1] == n:
                    print("  %-32s value 0x%08X" % (n, int(parts[1], 16)))
                    if int(parts[1], 16) > 0x80000000:
                        print("      ^ WRONG: this is the game's address, not ours")
                        bad += 1
                    break

    return 1 if bad else 0


if __name__ == "__main__":
    sys.exit(main())
