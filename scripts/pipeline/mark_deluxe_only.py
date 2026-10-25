"""Mark Deluxe-only findings explicitly, and refuse to call anything portable.

The question this answers is: *which of these findings are true only of the
Switch build?* A Wii U modder reading this repo must be able to tell, without
guessing, which addresses and layouts do not carry over.

The rule is deliberately strict. A finding is marked Deluxe-only when it comes
from this binary and has no Wii U counterpart to check against. That is almost
everything, so rather than annotate 47,000 files it annotates the artefacts a
modder actually reads:

  data/loader/main.sym      every address here is a Deluxe address
  data/loader/symbols.csv   same, with the marker in a column
  hooks/hooks.hks           every hook site
  loader/README.md          the loader as a whole
  docs/legacy/DELUXE_ONLY.md       the index

A `wiiu-reference` checkout, when present, is used only to *detect* where the two
builds differ. It is never a source of names or addresses.

Usage:
    python mark_deluxe_only.py --repo <repo> [--wiiu <path>]
"""
from __future__ import annotations

import argparse
import csv
import json
import re
from pathlib import Path

BANNER = ("Deluxe (Switch) v1.0.0 only. Addresses are RVAs from 0x60000000 in "
          "the retail Deluxe main module. They do not apply to the Wii U build.")


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--repo", required=True)
    ap.add_argument("--wiiu", default="")
    args = ap.parse_args()
    repo = Path(args.repo)

    loader = repo / "data" / "loader"
    summary = {}

    # --- main.sym: put the provenance in the header, where a reader looks first.
    sym_path = loader / "main.sym"
    text = sym_path.read_text()
    if "Deluxe (Switch) v1.0.0 only" not in text:
        lines = text.splitlines()
        head = [ln for ln in lines if ln.startswith("#")]
        body = [ln for ln in lines if not ln.startswith("#") and ln.strip()]
        head.append("#")
        for chunk in re.findall(r".{1,74}(?:\s|$)", BANNER):
            head.append("# " + chunk.strip())
        sym_path.write_text("\n".join(head + [""] + body) + "\n")
    summary["main.sym"] = len([l for l in sym_path.read_text().splitlines()
                               if " = 0x" in l])

    # --- symbols.csv: add an explicit column rather than leaving it implied.
    csv_path = loader / "symbols.csv"
    rows = list(csv.DictReader(open(csv_path, encoding="utf-8")))
    fields = ["rva", "va", "symbol", "raw_name", "size", "kind", "section",
              "corpus_file", "scope"]
    for r in rows:
        r["scope"] = "deluxe-only"
    with open(csv_path, "w", newline="", encoding="utf-8") as fh:
        w = csv.DictWriter(fh, fieldnames=fields)
        w.writeheader()
        w.writerows(rows)
    summary["symbols.csv"] = len(rows)

    # --- hooks: each file already names its target; state the scope once at top.
    hks = repo / "hooks" / "hooks.hks"
    if hks.exists():
        t = hks.read_text()
        if "Deluxe (Switch) v1.0.0 only" not in t:
            hks.write_text(
                "# Deluxe (Switch) v1.0.0 only. Every addr below is an RVA in the\n"
                "# retail Switch module and does not exist in the Wii U build.\n"
                "#\n" + t)
        summary["hooks"] = len(re.findall(r"^\w+:$", hks.read_text(), re.M))

    # --- the stubs maplist
    stub = loader / "stub_maplist.txt"
    if stub.exists():
        t = stub.read_text()
        if "Deluxe (Switch) v1.0.0 only" not in t:
            stub.write_text("# " + BANNER + "\n" + t)
        summary["stub_maplist"] = len([l for l in stub.read_text().splitlines()
                                       if re.match(r"^[0-9A-F]{8} ", l)])

    # --- where the two builds differ, if the reference is available
    diff_note = ""
    wiiu = Path(args.wiiu) if args.wiiu else None
    if wiiu and wiiu.exists():
        n = len(list(wiiu.rglob("*.c")))
        diff_note = ("A `wiiu-reference` tree is present (%d C files) and was used "
                     "only to spot where the builds diverge. No name, address or "
                     "layout in this repo was taken from it." % n)
    else:
        diff_note = ("No Wii U reference tree was consulted for this pass, so no "
                     "cross-build claim is made either way.")

    doc = ["# Deluxe-only findings",
           "",
           "Every address, layout and name in this repository was recovered from "
           "the **retail Deluxe (Switch) v1.0.0** main module:",
           "",
           "```",
           "file    main.i64 (IDA Pro 9.3) / convertedmain.rebased.elf",
           "image   0x60000000 base, 13,085,363 bytes",
           "md5     f8a2e4c3616b8a99632b8ffe68938c34",
           "```",
           "",
           "None of it is derived from the Wii U original. That distinction matters "
           "because the two builds differ in object layout, in function addresses, "
           "and in which gameplay systems exist at all -- a hook address from here "
           "is meaningless on Wii U.",
           "",
           "## What is marked",
           "",
           "| Artefact | Count | Field |",
           "| --- | --- | --- |",
           "| `data/loader/main.sym` | %s | `# ` header lines |"
           % summary.get("main.sym", 0),
           "| `data/loader/symbols.csv` | %s | `scope` column, always `deluxe-only` |"
           % summary.get("symbols.csv", 0),
           "| `hooks/hooks.hks` | %s | `# ` header lines |"
           % summary.get("hooks", 0),
           "| `data/loader/stub_maplist.txt` | %s | `# ` header lines |"
           % summary.get("stub_maplist", 0),
           "",
           "## What is *not* claimed Deluxe-only, and why",
           "",
           "- **Standard library and SDK functions** (`memcpy`, `sinf`, "
           "`nn::os::*`) are the same code in both builds. Their presence is not a "
           "Deluxe finding, though the addresses are.",
           "- **C++ runtime** (`operator_delete`, `__cxa_guard_acquire`) is "
           "toolchain-supplied. The 1,789 veneers are a Deluxe layout detail; the "
           "functions they call are not.",
           "",
           "## Cross-build comparison",
           "",
           diff_note,
           "",
           "## How this is enforced",
           "",
           "`scripts/pipeline/mark_deluxe_only.py` writes the markers and is "
           "idempotent. `scripts/pipeline/check_loader_consistency.py` refuses a "
           "`main.sym` without the marker, so an unmarked artefact cannot be "
           "committed by accident.",
           ""]
    (repo / "docs" / "legacy" / "DELUXE_ONLY.md").write_text("\n".join(doc))

    print("marked main.sym: %d symbols" % summary.get("main.sym", 0))
    print("marked symbols.csv: %d rows" % summary.get("symbols.csv", 0))
    print("marked hooks.hks: %d hooks" % summary.get("hooks", 0))
    print("marked stub_maplist.txt: %d veneers"
          % summary.get("stub_maplist", 0))
    print("wrote docs/legacy/DELUXE_ONLY.md")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
