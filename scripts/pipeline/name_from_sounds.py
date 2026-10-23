"""Name sound-playing functions from the sound-event id they pass.

A function whose only distinctive string is a sound event (`SE_...`) is a sound
trigger, and the event is the best identity available: it says exactly which
sound this code exists to play. The name `Play_<event>` asserts only that.

Two conditions keep this honest:

* The string must look like a sound event (`SE_` prefix), not a label or file.
* At most one unnamed function may claim a given event name. If several play
  the same event they are different call sites and their identity is not just
  the event, so all of them are left alone.

Writes a plan; does not touch the database.

Usage:
    python name_from_sounds.py --jsonl <export> --state <db_state> --out <plan.json>
"""
from __future__ import annotations

import argparse
import json
import re
from pathlib import Path

LIT = re.compile(r'"(SE_[A-Z0-9_]{3,60})"')
# A name has to be a legal C identifier.
BAD = re.compile(r"[^A-Za-z0-9_]")


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--jsonl", required=True)
    ap.add_argument("--state", required=True)
    ap.add_argument("--out", required=True)
    args = ap.parse_args()

    state = json.loads(Path(args.state).read_text())
    by_ea = {f["ea"]: f for f in state["funcs"]}

    candidates = []  # (ea, event)
    for line in open(args.jsonl, encoding="utf-8"):
        line = line.strip()
        if not line:
            continue
        r = json.loads(line)
        name = r.get("name") or ""
        if not name.startswith(("sub_", "nullsub_")):
            continue
        ea = r.get("ea")
        if ea is None:
            m = re.match(r"sub_([0-9A-Fa-f]{8})", name)
            if not m:
                continue
            ea = int(m.group(1), 16)
        events = LIT.findall(r.get("c") or "")
        # The sound must be what the function is *for*, not something it
        # happens to do at the end. Requiring the whole body to be one call
        # that passes the event keeps the name honest: a function that also
        # runs physics and ends with a sound is not a "Play_" function.
        body = r.get("c") or ""
        stmts = [s.strip() for s in body.split("\n")
                 if s.strip().endswith(";") and not s.strip().startswith(("int ", "float ", "char ", "unsigned ", "const ", "_DWORD ", "void "))]
        if len(events) == 1 and len(stmts) <= 2:
            candidates.append((ea, events[0]))

    print("unnamed functions whose sole sound event is distinctive: %d"
          % len(candidates))

    # Only keep events that exactly one unnamed function references.
    counts: dict[str, int] = {}
    for _, ev in candidates:
        counts[ev] = counts.get(ev, 0) + 1
    unique = [(ea, ev) for ea, ev in candidates if counts[ev] == 1]
    print("of those, events claimed by exactly one function: %d" % len(unique))

    plan = []
    seen_name: set[str] = set()
    for ea, ev in unique:
        f = by_ea.get(ea)
        if not f or not f["name"].startswith(("sub_", "nullsub_")):
            continue
        new = "Play_" + BAD.sub("_", ev)
        if new in seen_name:
            continue
        seen_name.add(new)
        plan.append({
            "ea": hex(ea),
            "old": f["name"],
            "new": new,
            "basis": "sound_event",
            "evidence": 'plays "%s"' % ev,
        })

    print("proposed: %d" % len(plan))
    Path(args.out).write_text(json.dumps(plan, indent=1))
    for p in plan[:12]:
        print("  %-12s %-34s <- %s" % (p["ea"], p["new"], p["evidence"]))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
