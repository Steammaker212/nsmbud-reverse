"""Check that every tileset a course names actually exists.

Each course area's block 0 holds four 32-byte tileset names (Pa0..Pa3). The
game loads them as archives by name and later looks files up in them with
sub_608226EC, which never checks for a missing archive: an absent tileset is
a null dereference on the Prepare Thread the moment the level loads.

A name is present if romfs/Unit/<name>.szs exists in the mod, or the base
game's file listing contains it.

Usage:
    python scripts/sdk/course_tilesets.py --romfs <mod romfs dir> --base-tree "<NSP Tree.txt>" <Course/*.sarc>
"""
from __future__ import annotations

import argparse
import re
import struct
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from course_sprites import sarc  # noqa: E402


def tilesets(course: bytes):
    for e in ("<", ">"):
        blocks = [struct.unpack_from(e + "II", course, i * 8) for i in range(15)]
        off, size = blocks[0]
        if off + size <= len(course) and size >= 128:
            return [course[off + i * 32: off + (i + 1) * 32].split(b"\0")[0].decode("ascii", "replace")
                    for i in range(4)]
    return []


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("--romfs", required=True)
    ap.add_argument("--base-tree", required=True)
    ap.add_argument("courses", nargs="+")
    args = ap.parse_args()

    mod_units = {p.stem for p in (Path(args.romfs) / "Unit").glob("*")}
    mod_units |= {p.name for p in (Path(args.romfs) / "Unit").glob("*")}
    tree = Path(args.base_tree).read_text(encoding="utf-8", errors="replace")
    base_units = set(re.findall(r"(Pa\d_[^\s\\/|]+?)\.szs", tree))

    missing = 0
    for path in args.courses:
        for name, data in sorted(sarc(Path(path).read_bytes()).items()):
            if not re.fullmatch(r"course/course\d\.bin", name):
                continue
            for slot, ts in enumerate(tilesets(data)):
                if not ts:
                    continue
                where = "mod" if ts in mod_units else "base" if ts in base_units else None
                if not where:
                    missing += 1
                print(f"{Path(path).name:12s} {name:20s} Pa{slot}: {ts:24s} "
                      f"{where or 'MISSING -> null archive, crash on load'}")
    print(f"\n{missing} missing tileset reference(s)")
    return 1 if missing else 0


if __name__ == "__main__":
    sys.exit(main())
