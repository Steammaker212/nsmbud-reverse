"""Compare our naming against codedx's, and extract what only codedx has.

codedx is a mod loader, not a decompilation: 13 hand-written .cpp files. Its
value is in two data files:

  doc/profiles.csv  911 actor profile rows with Japanese and English names
  main.sym          472 lines of GOT/data symbol assignments

This checks whether either contains a name our database lacks, and pulls the
profile table into a form usable as modding reference (actor id -> name).
"""
from __future__ import annotations

import csv
import json
import re
import sys

CODEDX = r"C:\Users\Saif Khan\Downloads\codedx"
STATE = r"C:\Users\Saif Khan\Downloads\main.idb\_work\db_state_vt.json"
OUT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\data\recovered\profiles.json"


def main() -> int:
    state = json.loads(open(STATE, encoding="utf-8").read())
    known_names = {f["name"] for f in state["funcs"]}
    known_ea = {f["ea"] for f in state["funcs"]}
    print("our functions: %d, named: %d" % (len(state["funcs"]), len(known_names)))

    # --- main.sym: does it name an address we do not?
    sym_new = sym_total = 0
    sym_addrs = []
    for line in open(CODEDX + r"\main.sym", encoding="utf-8", errors="replace"):
        line = line.strip()
        m = re.match(r"(\w+)\s*=\s*0x([0-9A-Fa-f]+)", line)
        if not m:
            continue
        sym_total += 1
        name, rva = m.group(1), int(m.group(2), 16)
        va = 0x60000000 + rva
        if va not in known_ea:
            sym_new += 1
            sym_addrs.append((name, va))
    print("\nmain.sym entries: %d, pointing at a function we lack: %d"
          % (sym_total, sym_new))
    for n, va in sym_addrs[:8]:
        print("  0x%08X %s" % (va, n))

    # --- profiles.csv: actor id -> names. This is reference data, not naming.
    rows = []
    with open(CODEDX + r"\doc\profiles.csv", encoding="utf-8", errors="replace") as fh:
        for rec in csv.reader(fh):
            if len(rec) < 6:
                continue
            pid, sprite, jp, en = rec[0], rec[1], rec[2], rec[3]
            addr = rec[4]
            if not re.fullmatch(r"[0-9A-Fa-f]{8}", addr or ""):
                continue
            rows.append({
                "profile_id": int(pid) if pid.isdigit() else None,
                "sprite_id": int(sprite) if sprite.isdigit() else None,
                "name_jp": jp, "name_en": en,
                "factory_va": int(addr, 16),
            })
    print("\nprofiles parsed: %d" % len(rows))
    have = sum(1 for r in rows if r["factory_va"] in known_ea)
    print("  their factory address is a function we have: %d" % have)
    named_there = sum(1 for r in rows
                      if any(f["ea"] == r["factory_va"] and
                             not f["name"].startswith(("sub_", "nullsub_"))
                             for f in state["funcs"]))
    print("  ...and that function already has a real name: %d" % named_there)

    with open(OUT, "w", encoding="utf-8") as fh:
        json.dump({"source": "codedx doc/profiles.csv (GPL-3.0, reference only)",
                   "rows": rows}, fh, indent=1)
    print("\nwrote %s" % OUT)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
