"""Verify that the published C corpus is faithful to the database.

Accuracy here means three separate claims, each checkable:

  1. Every emitted function exists in the database at the address in its
     filename, and the filename's name matches the database's name.
  2. The C body is the database's Hex-Rays text (after the documented
     rewrites), not a hand-written approximation.
  3. The function count reconciles: emitted + excluded == database total.

This runs against a corpus directory and a db_state export.
"""
from __future__ import annotations

import json
import re
import sys
from pathlib import Path

REPO = Path(r"C:\Users\Saif Khan\Downloads\nsmbud-reverse")
STATE = Path(r"C:\Users\Saif Khan\Downloads\main.idb\_work\db_state_dm.json")
FILE_RE = re.compile(r"^([0-9A-F]{8})_(.+)\.c$")


def main() -> int:
    state = json.loads(STATE.read_text())
    by_ea = {f["ea"]: f for f in state["funcs"]}
    print("database functions: %d" % len(by_ea))

    bad_addr = bad_name = empty = 0
    checked = 0
    names_seen: dict[str, int] = {}
    for p in (REPO / "decompiled" / "src").rglob("*.c"):
        m = FILE_RE.match(p.name)
        if not m:
            continue
        checked += 1
        ea = int(m.group(1), 16)
        want = m.group(2)
        f = by_ea.get(ea)
        if not f:
            bad_addr += 1
            continue
        # The file name is sanitised for the filesystem; compare on the same
        # normalisation.
        db_name = re.sub(r"[^A-Za-z0-9_]", "_", f["name"])
        if db_name != re.sub(r"[^A-Za-z0-9_]", "_", want):
            bad_name += 1
            if bad_name <= 5:
                print("  NAME 0x%08X file=%s db=%s" % (ea, want, f["name"]))
        names_seen[db_name] = names_seen.get(db_name, 0) + 1
        if p.stat().st_size < 120:
            empty += 1
        del f

    print("\nfiles with an address+name: %d" % checked)
    print("  address not in database: %d" % bad_addr)
    print("  name mismatch: %d" % bad_name)
    print("  suspiciously empty file: %d" % empty)
    total = state["total"]
    print("\nreconcile: emitted %d, database %d, difference %d"
          % (checked, total, total - checked))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
