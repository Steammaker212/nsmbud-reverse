"""Normalise RVA-formatted `address` fields in the ledger to VAs.

The `address` column holds two forms: a VA (0x60xxxxxx) and an RVA (0x00xxxxxx)
that a hook file names. Mixing them in one column is the ambiguity
`validate_findings.py` flags, and it has already caused confusion when reading
rows back. This rewrites the RVA rows to VAs and says so in the claim, so every
`address` is comparable at a glance.

    python scripts/normalise_ledger_addresses.py --dry-run
    python scripts/normalise_ledger_addresses.py
"""
from __future__ import annotations

import argparse
import csv
import re
from pathlib import Path

REPO = Path(__file__).resolve().parent.parent
LEDGER = REPO / "data" / "findings" / "ledger.csv"


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()

    with LEDGER.open(encoding="utf-8", newline="") as f:
        r = csv.reader(f)
        header = next(r)
        rows = [x for x in r if x]

    ai = header.index("address")
    ci = header.index("claim")
    changed = []

    for row in rows:
        raw = row[ai].strip()
        m = re.fullmatch(r"0x0*([0-9A-Fa-f]{1,8})", raw)
        if not m:
            continue
        val = int(m.group(1), 16)
        if val == 0 or val >= 0x60000000:
            continue
        va = val + 0x60000000
        row[ai] = f"0x{va:08X}"
        # Make the claim say what form it now is, so the row is self-consistent.
        claim = row[ci]
        if " RVA " in claim or "RVA 0x" in claim:
            claim = re.sub(r"\bRVA 0x0*([0-9A-Fa-f]{1,8})",
                           lambda mm: f"RVA 0x{int(mm.group(1), 16):08X} (VA 0x{int(mm.group(1), 16) + 0x60000000:08X})",
                           claim, count=1)
            row[ci] = claim
        changed.append((row[0], raw, row[ai]))

    for rid, old, new in changed:
        print(f"{rid}: {old} -> {new}")

    if not changed:
        print("nothing to change")
        return 0

    if args.dry_run:
        print(f"\n(dry run: {len(changed)} row(s) would change)")
        return 0

    with LEDGER.open("w", encoding="utf-8", newline="") as f:
        w = csv.writer(f)
        w.writerow(header)
        w.writerows(rows)
    print(f"\nrewrote {len(changed)} row(s)")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
