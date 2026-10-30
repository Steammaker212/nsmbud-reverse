"""Extract the world-map tables from the retail main NSO (v1.0.0) into reverse-engineering/FindingsG.

    python scripts/worldmap/wm_tables.py --nso <retail main>

Writes, all read straight from the binary (ledger F0237-F0246):

  reverse-engineering/FindingsG/event_sequences.csv   the 120 scripted map events ("scenes"):
                                      priority and step list (table 0x60BD5514)
  reverse-engineering/FindingsG/map_enemies.csv       per world: map-enemy slots, their start
                                      flag and the fight-course rotation

The NSO is your own dump and is never committed.
"""
from __future__ import annotations

import argparse
import csv
import struct
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(REPO / "scripts" / "sdk"))
import nso_dynsym  # noqa: E402

BASE = 0x60000000
EVENT_TABLE = 0x60BD5514        # {u32 priority, u32 steps*}[], 0 = no event
EVENT_END = 343                 # step code that ends a sequence (0x60190CEC)
EVENT_WAIT = 7                  # step 7(n): wait n frames
ENEMY_COUNT = 0x60AFA0E0        # s32[9]: map enemies per world
FIGHT_COURSES = 0x60AFD3B0      # s32[9][6]: 0-based course rotation, -1 = unused
ENEMY_FLAGS = 0x60AFD488        # s32[9][5]: flag-B mask of each slot's start point

# Map-enemy profile per [world][slot]: built in code by 0x6021EE50 (no data table).
ENEMY_PROFILES = [
    [908, 886, -1, -1, -1], [899, 870, 893, -1, -1], [888, 888, -1, -1, -1],
    [897, 897, 897, 897, 898], [891, 891, 891, -1, -1], [-1] * 5,
    [889, 889, 890, -1, -1], [-1] * 5, [-1] * 5,
]
PROFILE_NAMES = {870: "W2 Hammer Bro", 886: "CS Piranha Plant", 888: "CS jumping Cheep Cheep",
                 889: "CS Chorobon", 890: "CS W7 item", 891: "CS W5 Boo", 893: "CS Waddlewing",
                 897: "CS Pentaro (penguin)", 898: "CS W4 item", 899: "CS W2 Goomba", 908: "CS W1 item"}
# Flag table B (point flags, +0x430), bit -> name (0x60183F9C).
FLAGS_B = ("W1PakkunA,W1PakkunB,W1Item,W2Enemy0,W2Enemy1,W2EnemyA,W2EnemyB,W2EnemyC,W2maze,"
           "W3EnemyA,W3EnemyB,W4EnemyA,W4EnemyB,W4EnemyC,W4EnemyD,W4Circle,ChorobonA,ChorobonB,"
           "ChorobonC,W5bEnemy1,W5bEnemy2,W5bEnemy3,W5bEnemy4,W5bEnemy5,W5bEnemy6,W5bEnemy7,"
           "W5bDemo,W5bPreDemo,W5Teresa,noUI,restart").split(",")


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--nso", required=True, type=Path)
    ap.add_argument("--out", type=Path, default=REPO / "reverse-engineering" / "FindingsG")
    a = ap.parse_args()
    img = nso_dynsym.load_image(a.nso)
    u32 = lambda va: struct.unpack_from("<I", img, va - BASE)[0]
    s32 = lambda va: struct.unpack_from("<i", img, va - BASE)[0]
    a.out.mkdir(parents=True, exist_ok=True)

    rows = []
    i = 1                                           # entry 0 is "no event"
    while True:
        prio, ptr = u32(EVENT_TABLE + 8 * i), u32(EVENT_TABLE + 8 * i + 4)
        ptr = ptr if ptr >= BASE else ptr + BASE    # unrelocated image pointers
        if not 0x60A00000 <= ptr < 0x60C00000:
            break
        steps = []
        for k in range(256):
            code, arg = u32(ptr + 8 * k), s32(ptr + 8 * k + 4)
            if code == EVENT_END:
                break
            steps.append(f"{code}({arg})" if arg else str(code))
        rows.append([i, prio, f"0x{ptr:08X}", len(steps), " ".join(steps)])
        i += 1
    with (a.out / "event_sequences.csv").open("w", newline="", encoding="utf-8") as f:
        w = csv.writer(f, lineterminator="\n")
        w.writerow(["sequence", "priority", "steps_at", "step_count", "steps"])
        w.writerows(rows)

    with (a.out / "map_enemies.csv").open("w", newline="", encoding="utf-8") as f:
        w = csv.writer(f, lineterminator="\n")
        w.writerow(["world", "slot", "profile", "actor", "start_flag", "fight_courses"])
        for world in range(9):
            count = s32(ENEMY_COUNT + 4 * world)
            courses = [s32(FIGHT_COURSES + 4 * (world * 6 + k)) for k in range(6)]
            fights = " ".join(f"{world + 1}-{c + 1}" for c in courses if c >= 0)
            for slot in range(count):
                prof = ENEMY_PROFILES[world][slot]
                mask = u32(ENEMY_FLAGS + 4 * (world * 5 + slot))
                flag = FLAGS_B[mask.bit_length() - 1] if mask else ""
                w.writerow([world + 1, slot, prof, PROFILE_NAMES.get(prof, ""), flag, fights])
    print(f"wrote {a.out}: {len(rows)} event sequences, map enemies for 9 worlds")
    return 0


if __name__ == "__main__":
    sys.exit(main())
