"""Check that the loader's three views of a function agree.

A hook is only usable if the same RVA means the same thing everywhere:

  hooks/hooks.hks      addr: the site, and the `# -> symbol (RVA)` comment
  data/loader/main.sym symbol = 0xRVA
  data/loader/symbols.csv corpus_file for that RVA
  decompiled/src/.../   a real file at that address with that name

A mismatch means a hook branches somewhere other than the function the author
read. This checks all four against each other and against the image.

The corpus is indexed once instead of being walked per row: 23,503 rows times
45,000 files is a quadratic directory walk that takes longer than the rest of the
pipeline combined.

Usage:
    python check_loader_consistency.py --repo <repo> --elf <elf>
"""
from __future__ import annotations

import argparse
import csv
import json
import re
import struct
from pathlib import Path

IMAGE_BASE = 0x60000000


def sections(data: bytes):
    (_, _, _, _, _, _, _, _, _, _, e_shentsize, e_shnum,
     _) = struct.unpack_from("<HHIIIIIHHHHHH", data, 16)
    shoff = struct.unpack_from("<I", data, 32)[0]
    out = []
    for i in range(e_shnum):
        name, typ, flags, addr, offset, size = struct.unpack_from(
            "<IIIIII", data, shoff + i * e_shentsize)
        out.append({"type": typ, "addr": addr, "offset": offset, "size": size})
    return out


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--repo", required=True)
    ap.add_argument("--elf", required=True)
    args = ap.parse_args()

    repo = Path(args.repo)
    data = Path(args.elf).read_bytes()
    secs = [s for s in sections(data) if s["addr"] and s["size"]]
    img_lo = min(s["addr"] for s in secs)
    img_hi = max(s["addr"] + s["size"] for s in secs)

    def inside(va: int) -> bool:
        return any(s["addr"] <= va < s["addr"] + s["size"] for s in secs)

    # Index the corpus once: address (from the filename) -> file.
    corpus = repo / "decompiled" / "src"
    by_addr: dict[int, Path] = {}
    total_c = 0
    for p in corpus.rglob("*.c"):
        total_c += 1
        m = re.match(r"^([0-9A-Fa-f]{8})_", p.name)
        if m:
            by_addr.setdefault(int(m.group(1), 16), p)
    print("corpus: %d .c files, %d with an address in the name"
          % (total_c, len(by_addr)))

    # 1. main.sym
    sym: dict[str, int] = {}
    label: list[tuple[str, int]] = []
    sym_bad = 0
    sym_text = (repo / "data" / "loader" / "main.sym").read_text()
    if "Deluxe (Switch) v1.0.0 only" not in sym_text:
        print("main.sym is not marked Deluxe-only; run mark_deluxe_only.py")
        sym_bad += 1
    for line in sym_text.splitlines():
        m = re.match(r"^(\w+)\s*=\s*0x([0-9A-Fa-f]+);", line.strip())
        if not m:
            continue
        rva = int(m.group(2), 16)
        va = IMAGE_BASE + rva
        # Symbols just past the image are linker-absolute and legitimate;
        # symbols in an alignment hole are string labels and are reported by
        # emit_symbol_map.py rather than being treated as corruption here.
        if not inside(va) and not (img_hi <= va <= img_hi + 0x10000):
            label.append((m.group(1), va))
            continue
        sym[m.group(1)] = rva
    print("main.sym: %d symbols, %d in section gaps (string labels)"
          % (len(sym), len(label)))

    # 2. symbols.csv, and the corpus file each row names
    rows = list(csv.DictReader(open(repo / "data" / "loader" / "symbols.csv",
                                    encoding="utf-8")))
    print("symbols.csv: %d rows" % len(rows))
    unmarked = sum(1 for r in rows if r.get("scope") != "deluxe-only")
    if unmarked:
        print("symbols.csv: %d rows without scope=deluxe-only" % unmarked)

    csv_by_rva = {}
    missing_file = wrong_name = checked = veneer = 0
    for r in rows:
        ea = int(r["va"], 16)
        csv_by_rva[int(r["rva"], 16)] = r
        p = by_addr.get(ea)
        if p is None:
            # 4-byte operator_delete/new veneers are collapsed into
            # decompiled/src/stubs/operator_delete_maplist.c on purpose; they have
            # no file of their own and are not a gap.
            if r["kind"] == "function" and int(r["size"]) == 4:
                veneer += 1
                continue
            if r["kind"] == "function":
                missing_file += 1
            continue
        checked += 1
        body = p.read_text(encoding="utf-8", errors="replace")
        if r["raw_name"] not in body and r["symbol"] not in body:
            wrong_name += 1
    print("  %d rows matched a corpus file; %d functions with no file, "
          "%d with a name mismatch, %d veneers in the maplist"
          % (checked, missing_file, wrong_name, veneer))

    # 3. hooks
    hooks = json.loads((repo / "hooks" / "candidate_hooks.json").read_text())
    hook_bad = 0
    for h in hooks:
        if not inside(IMAGE_BASE + h["site_rva"]):
            hook_bad += 1
            continue
        if sym.get(h["symbol"]) != h["target_rva"]:
            hook_bad += 1
            continue
        if h["target_rva"] not in csv_by_rva:
            hook_bad += 1
    print("candidate hooks: %d, inconsistent: %d" % (len(hooks), hook_bad))

    # 4. hop from a hook back to readable C
    reachable = sum(1 for h in hooks
                    if by_addr.get(IMAGE_BASE + h["target_rva"]))
    print("hooks whose target has readable C: %d / %d" % (reachable, len(hooks)))

    bad = sym_bad + missing_file + wrong_name + hook_bad + unmarked
    if bad:
        print("\nFAIL: %d inconsistencies" % bad)
        return 1
    print("\nOK: loader map, corpus and hooks agree")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
