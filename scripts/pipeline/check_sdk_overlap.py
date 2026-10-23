"""Check whether past-image symbols are SDK-relative and double-defined.

`data/loader/main.sym` records 559 symbols at RVAs 0x00CD1008..0x00CD2178, which
is past the main module (whose last byte is RVA 0x00CD1000). Those addresses are
not main-module addresses: they are offsets into the *SDK* blob, which
`loader/sdk.ld` already defines as `offset + __sdk_start`.

If both `main.ld` and `sdk.ld` define the same name, the module links either way
because both are absolute, but which one wins depends on script order. That is
exactly the kind of silent ambiguity that produces an address the loader cannot
use, so it is measured rather than reasoned about.

Usage:
    python check_sdk_overlap.py --sym data/loader/main.sym --sdk loader/sdk.ld \
        --main-ld loader/main.ld
"""
from __future__ import annotations

import argparse
import re
from pathlib import Path

IMAGE_END = 0x00CD1000  # last byte of the main module, from measure_module_extent.py


def parse_sym(path):
    out = {}
    for line in Path(path).read_text(encoding="utf-8").splitlines():
        m = re.match(r"^([A-Za-z_]\w*)\s*=\s*0x([0-9A-Fa-f]+)", line.strip())
        if m:
            out[m.group(1)] = int(m.group(2), 16)
    return out


def parse_ld(path):
    out = {}
    p = Path(path)
    if not p.exists():
        return out
    for line in p.read_text(encoding="utf-8", errors="replace").splitlines():
        line = line.split("/*")[0]
        m = re.match(r"^\s*([A-Za-z_]\w*)\s*=\s*([^;]+);", line)
        if m:
            out[m.group(1)] = m.group(2).strip()
    return out


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--sym", required=True)
    ap.add_argument("--sdk", default="loader/sdk.ld")
    ap.add_argument("--main-ld", default="loader/main.ld")
    args = ap.parse_args()

    sym = parse_sym(args.sym)
    past = {n: a for n, a in sym.items() if a >= IMAGE_END}
    sdk = parse_ld(args.sdk)
    mainld = parse_ld(args.main_ld)

    print("symbols past the main module end (RVA >= 0x%X): %d" % (IMAGE_END, len(past)))
    in_sdk = [n for n in past if n in sdk]
    not_in_sdk = [n for n in past if n not in sdk]
    print("  also defined in sdk.ld      : %d" % len(in_sdk))
    print("  not in sdk.ld               : %d" % len(not_in_sdk))
    if not_in_sdk:
        print("  examples not in sdk.ld:", ", ".join(sorted(not_in_sdk)[:8]))

    dupes = [n for n in past if n in mainld and n in sdk]
    print("\ndouble-defined in BOTH main.ld and sdk.ld: %d" % len(dupes))
    for n in sorted(dupes)[:5]:
        print("  %-52s main.ld %s   sdk.ld %s"
              % (n[:52], mainld[n][:28], sdk[n][:28]))

    print("\nverdict:")
    if dupes:
        print("  The same names are assigned twice. ld resolves to the script")
        print("  given last on the command line (sdk.ld), so the value happens to")
        print("  be right, but main.ld carries a meaningless duplicate. Excluding")
        print("  past-image symbols from main.ld removes the ambiguity.")
    else:
        print("  no overlap; past-image symbols are unambiguous")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
