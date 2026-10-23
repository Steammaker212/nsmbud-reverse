"""Prove the pointer-aware rewrite against the audit's own measured cases.

Each case is a function whose published C was flattened, with the correct
nested form read off the disassembly by docs/ARROW_CHAIN_AUDIT.md section 5.
The test runs the actual rewrite_body() over the actual pre-rewrite body and
requires the actual output to contain the correct expression.

This is the regression test for the dispatch bug: StateMgr__execute is the case
where flattening changes which pointer is called, not merely which value is
loaded.
"""
from __future__ import annotations

import io
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", ".."))
sys.path.insert(0, HERE)

from rewrite_arrows import load_types, rewrite_body  # noqa: E402

LAYOUTS = os.path.join(ROOT, "data", "recovered", "type_layouts.json")
PRE = r"C:\Users\Saif Khan\Downloads\main.idb\_work\export_vt\all_functions.jsonl"

# (name, published-wrong fragment, correct fragment that must appear)
CASES = [
    ("Actor__getProfileId",
     "FIELD_U32(a1, 0x14)",
     "FIELD_U32(FIELD_U32(a1, 0xC), 0x8)"),
    ("sub_600082CC",
     "FIELD_U32(buildInfo, 0x14)",
     "FIELD_U32(FIELD_U32(buildInfo, 0xC), 0x8)"),
    ("Enemy__vfF8",
     "FIELD_U8(acOther, 0x94)",
     "FIELD_U8(FIELD_U32(acOther, 0x40), 0x54)"),
    ("StateMgr__execute",
     "FIELD_U32(this, 0x0) + 2",
     "FIELD_U32(FIELD_U32(this, 0x0), 0x0) + 2"),
]


def load_pre(path):
    bodies = {}
    with io.open(path, encoding="utf-8", errors="replace") as f:
        for line in f:
            try:
                r = json.loads(line)
            except Exception:
                continue
            bodies[r.get("name")] = r.get("c") or ""
    return bodies


def main() -> int:
    types = load_types(LAYOUTS)
    bodies = load_pre(PRE)
    print("pre-rewrite bodies: %d" % len(bodies))

    fails = 0
    for name, wrong, right in CASES:
        body = bodies.get(name)
        if body is None:
            print("SKIP  %-24s not in export" % name)
            continue
        out, resolved, _unres = rewrite_body(body, types)
        if right in out:
            status = "OK"
        elif wrong in out:
            status = "STILL-FLATTENED"
            fails += 1
        else:
            status = "OTHER"
            fails += 1
        print("%-16s %-26s resolved=%d" % (status, name, resolved))
        if status != "OK":
            for ln in out.splitlines():
                if "FIELD_" in ln:
                    print("      %s" % ln.strip()[:110])
    print()
    print("RESULT: %d/%d correct" % (len(CASES) - fails, len(CASES)))
    return 1 if fails else 0


if __name__ == "__main__":
    raise SystemExit(main())
