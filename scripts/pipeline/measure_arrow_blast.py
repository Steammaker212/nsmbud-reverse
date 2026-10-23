"""Measure the blast radius of the pointer-aware rewrite before regenerating.

The rewrite changes output only where a chain crosses a pointer hop. This script
compares old-vs-new rewrite output per function so the corpus regeneration is a
measured change, not a hopeful one.

It reports three numbers that must reconcile:
  changed      functions whose rewritten body differs
  improved     changed functions where the new output is a nested FIELD read
  regressed    changed functions where resolution was LOST (count dropped)

Anything in `regressed` is a bug in the fix, not a cost of it.
"""
from __future__ import annotations

import io
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", ".."))
sys.path.insert(0, HERE)

import rewrite_arrows as RA  # noqa: E402

LAYOUTS = os.path.join(ROOT, "data", "recovered", "type_layouts.json")
PRE = r"C:\Users\Saif Khan\Downloads\main.idb\_work\export_vt\all_functions.jsonl"


def old_rewrite(body, types):
    """The pre-fix algorithm: sum every hop's offset, pointers included."""
    import re
    vt = RA.var_types(body)
    resolved = unresolved = 0

    def repl(m):
        nonlocal resolved, unresolved
        base, index, chain = m.group(1), m.group(2) or "", m.group(3) or ""
        toks = [t for t in re.split(r"->|\.", chain) if t.strip()]
        if not toks:
            unresolved += 1
            return m.group(0)
        last, hops = toks[-1], toks[:-1]
        for t in vt.get(base, ()):
            cur, total, ok = t, 0, True
            for h in hops:
                info = types.get(cur, (0, {}))[1].get(h)
                if not info:
                    ok = False
                    break
                # The old loader stripped '*', so the tuple has only 3 fields
                # in the old code path; here types carry 4, so ignore is_ptr.
                off, _macro, mt, _is_ptr = info
                total += off
                cur = mt
                if not cur:
                    ok = False
                    break
            if not ok:
                continue
            info = types.get(cur, (0, {}))[1].get(last)
            if not info:
                continue
            off, macro, _mt, _p = info
            total += off
            size = types.get(t, (0, {}))[0]
            idx = index.strip()
            if idx:
                if not size:
                    unresolved += 1
                    return m.group(0)
                inner = idx[1:-1].strip()
                resolved += 1
                return "%s(%s + (%s) * %d, 0x%X)" % (macro, base, inner, size, total)
            resolved += 1
            return "%s(%s, 0x%X)" % (macro, base, total)
        unresolved += 1
        return m.group(0)

    return RA.CHAIN.sub(repl, body), resolved, unresolved


def main() -> int:
    types = RA.load_types(LAYOUTS)
    n = changed = improved = regressed = same = 0
    regressed_names = []

    with io.open(PRE, encoding="utf-8", errors="replace") as f:
        for line in f:
            try:
                r = json.loads(line)
            except Exception:
                continue
            body = r.get("c") or ""
            if not body:
                continue
            n += 1
            old_out, old_res, _ = old_rewrite(body, types)
            new_out, new_res, _ = RA.rewrite_body(body, types)
            if old_out == new_out:
                same += 1
                continue
            changed += 1
            if new_res >= old_res:
                improved += 1
            else:
                regressed += 1
                if len(regressed_names) < 15:
                    regressed_names.append((r.get("name"), old_res, new_res))

    print("functions scanned      : %d" % n)
    print("identical              : %d" % same)
    print("changed                : %d" % changed)
    print("  resolution kept/up   : %d" % improved)
    print("  resolution LOST      : %d" % regressed)
    if regressed_names:
        print()
        print("regressions (name, old_resolved, new_resolved):")
        for nm, o, nw in regressed_names:
            print("  %-34s %d -> %d" % (nm, o, nw))
    return 1 if regressed else 0


if __name__ == "__main__":
    raise SystemExit(main())
