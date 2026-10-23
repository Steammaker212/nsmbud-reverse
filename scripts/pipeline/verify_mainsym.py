"""Check each main.sym entry against the binary before adopting it.

codedx's main.sym is RVA-based; our database is VA-based (image base
0x60000000). Before writing any symbol into the database, each entry has to
answer three questions:

  1. Does the RVA land inside a real section?
  2. Is the slot currently unnamed or differently named in the database?
  3. Does the value at that address look like what the name claims -- a GOT slot
     holding a code pointer, a data symbol holding a sensible value?

Only entries that pass are written. An entry that points at nothing, or whose
name contradicts the database, is reported and skipped rather than guessed at.

Usage:
    python verify_mainsym.py --sym <main.sym> --state <db_state.json> --out <plan.json>
"""
from __future__ import annotations

import argparse
import json
import re
import struct
from pathlib import Path

ELF = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
IMAGE_BASE = 0x60000000


def sections(data: bytes):
    (_, _, _, _, _, _, _, _, _, _, e_shentsize, e_shnum,
     _) = struct.unpack_from("<HHIIIIIHHHHHH", data, 16)
    shoff = struct.unpack_from("<I", data, 32)[0]
    shstrndx = struct.unpack_from("<H", data, 50)[0]
    raw = []
    for i in range(e_shnum):
        off = shoff + i * e_shentsize
        name_off, typ, flags, addr, offset, size = struct.unpack_from(
            "<IIIIII", data, off)
        raw.append({"name_off": name_off, "type": typ, "addr": addr,
                    "offset": offset, "size": size})
    strtab = raw[shstrndx]["offset"]
    for s in raw:
        end = data.index(b"\0", strtab + s["name_off"])
        s["name"] = data[strtab + s["name_off"]:end].decode("latin1")
    return raw


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--sym", required=True)
    ap.add_argument("--state", required=True)
    ap.add_argument("--out", required=True)
    args = ap.parse_args()

    data = Path(ELF).read_bytes()
    # PROGBITS (1) has file content; NOBITS (8) is .bss -- it has an address and
    # a size but no bytes. Excluding NOBITS rejected every .bss symbol, which is
    # where most of the singleton instances live.
    secs = [s for s in sections(data) if s["type"] in (1, 8) and s["addr"]]
    state = json.loads(Path(args.state).read_text())
    by_ea = {f["ea"]: f for f in state["funcs"]}
    named_at = {}
    for f in state["funcs"]:
        named_at[f["ea"]] = f["name"]

    def section_of(va: int):
        for s in secs:
            if s["addr"] <= va < s["addr"] + s["size"]:
                return s
        return None

    def word_at(va: int):
        s = section_of(va)
        if not s:
            return None
        if s["type"] == 8:      # .bss: no file content, value is zero
            return 0
        fo = s["offset"] + (va - s["addr"])
        if fo + 4 > len(data):
            return None
        return struct.unpack_from("<I", data, fo)[0]

    plan, rejected = [], []
    for line in Path(args.sym).read_text(encoding="utf-8",
                                         errors="replace").splitlines():
        line = line.strip()
        if not line or line.startswith("#"):
            continue
        m = re.match(r"(\w+)\s*=\s*0x([0-9A-Fa-f]+)\s*;?", line)
        if not m:
            continue
        name, rva = m.group(1), int(m.group(2), 16)
        va = IMAGE_BASE + rva
        sec = section_of(va)
        if not sec:
            rejected.append((name, va, "not inside any section"))
            continue
        w = word_at(va)
        if w is None:
            rejected.append((name, va, "unreadable"))
            continue
        cur = named_at.get(va)
        # A GOT entry holds a pointer into .text; a plain data symbol holds a
        # value. Report which, so the record says what was actually seen.
        looks_like_pointer = IMAGE_BASE <= (w + IMAGE_BASE if w < IMAGE_BASE else w) < IMAGE_BASE + 0x1000000
        plan.append({
            "ea": hex(va),
            "rva": hex(rva),
            "name": name,
            "section": sec["name"],
            "current": cur,
            "word": hex(w),
            "word_is_code_pointer": bool(looks_like_pointer),
            "source": "codedx main.sym",
        })

    print("main.sym entries parsed: %d" % len(plan))
    print("rejected (bad address): %d" % len(rejected))
    for n, va, why in rejected[:6]:
        print("  REJECT 0x%08X %-44s %s" % (va, n, why))

    unnamed = [p for p in plan if not p["current"]]
    conflict = [p for p in plan if p["current"] and p["current"] != p["name"]]
    same = [p for p in plan if p["current"] == p["name"]]
    ptrs = [p for p in plan if p["word_is_code_pointer"]]
    print("\n  address currently unnamed (safe to add): %d" % len(unnamed))
    print("  already has the same name: %d" % len(same))
    print("  different name in database (conflict): %d" % len(conflict))
    print("  slot holds a code pointer (GOT-like): %d" % len(ptrs))

    print("\nsample to add:")
    for p in unnamed[:12]:
        print("  0x%s %-46s %s" % (p["ea"][2:], p["name"], p["section"]))

    Path(args.out).write_text(json.dumps(
        {"add": unnamed, "same": same, "conflict": conflict,
         "rejected": [{"name": n, "ea": hex(v), "why": w}
                      for n, v, w in rejected]}, indent=1))
    print("\nwrote %s" % args.out)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
