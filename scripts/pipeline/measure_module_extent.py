"""Find where the main module's address space really ends.

The module must load *after* the game, so its link base (codedx uses 0x00CD1000)
has to be beyond every byte the game occupies. If a symbol map contains addresses
past the assumed end, either the assumption is wrong or those symbols are not
game addresses at all -- and putting our code on top of them would corrupt
whatever is there.

This script answers it from two independent sources:

  * the ELF's own sections, i.e. the bytes we actually have
  * every RVA in data/loader/symbols.csv, grouped by section, which shows which
    symbols fall outside the ELF and what they claim to be

Usage:
    python measure_module_extent.py --elf <elf> --symbols data/loader/symbols.csv
"""
from __future__ import annotations

import argparse
import csv
import struct
from pathlib import Path

BASE = 0x60000000


def sections(data):
    (_, _, _, _, _, _, _, _, _, _, es, en, _) = struct.unpack_from(
        "<HHIIIIIHHHHHH", data, 16)
    shoff = struct.unpack_from("<I", data, 32)[0]
    shstr = struct.unpack_from("<H", data, 50)[0]
    raw = []
    for i in range(en):
        no, typ, fl, addr, off, size = struct.unpack_from(
            "<IIIIII", data, shoff + i * es)
        raw.append({"no": no, "type": typ, "flags": fl, "addr": addr,
                    "offset": off, "size": size})
    st = raw[shstr]["offset"]
    for s in raw:
        end = data.index(b"\0", st + s["no"])
        s["name"] = data[st + s["no"]:end].decode("latin1")
    return raw


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--elf", required=True)
    ap.add_argument("--symbols", required=True)
    args = ap.parse_args()

    data = Path(args.elf).read_bytes()
    secs = sections(data)
    alloc = [s for s in secs if s["addr"] and s["size"]]
    lo = min(s["addr"] for s in alloc)
    hi = max(s["addr"] + s["size"] for s in alloc)
    print("ELF base          0x%08X" % lo)
    print("ELF last byte     0x%08X  (RVA 0x%X)" % (hi, hi - BASE))
    print()
    print("allocated sections:")
    for s in sorted(alloc, key=lambda s: s["addr"]):
        print("  %-22s %08X..%08X  size %08X  type %d"
              % (s["name"], s["addr"], s["addr"] + s["size"], s["size"], s["type"]))

    rows = list(csv.DictReader(Path(args.symbols).open()))
    beyond = [r for r in rows if int(r["rva"], 0) + BASE >= hi]
    print("\nsymbols past the ELF's last byte: %d of %d" % (len(beyond), len(rows)))

    by_sec = {}
    for r in beyond:
        by_sec.setdefault(r["section"], []).append(r)
    for sec, rs in sorted(by_sec.items(), key=lambda kv: -len(kv[1])):
        mn = min(int(r["rva"], 0) for r in rs)
        mx = max(int(r["rva"], 0) for r in rs)
        print("  section %-18s %5d symbols  RVA 0x%X..0x%X" % (sec, len(rs), mn, mx))

    # Names beyond the image tell us what kind of thing lives there.
    samples = sorted({r["symbol"] for r in beyond})[:12]
    print("\nsample names past the image:")
    for s in samples:
        print("  %s" % s)

    print("\nmodule must therefore load at or after RVA 0x%X "
          "(plus bss).  codedx assumes 0x00CD1000." % (hi - BASE))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
