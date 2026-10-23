"""Demangle the C++ names the database kept verbatim.

1,896 functions are named `j__Z...` or `_ZN...` -- Itanium ABI mangled names,
mostly PLT thunks to libc/libnn (`_Z3sinf` -> `sinf`) and operator wrappers. A
mangled name is not readable C and it is not a name a modder can search for.

This rewrites them to legal C identifiers: `_Z3sinf` -> `sinf`,
`_ZN4sead12GlobalRandom8instanceE` -> `sead__GlobalRandom__instance`. The
transform is mechanical and reversible (the mangled form is kept in the file
header comment by the corpus generator), so nothing is inferred.

Writes a rename plan; does not touch the database.

Usage:
    python demangle_names.py --state <db_state.json> --out <plan.json>
"""
from __future__ import annotations

import argparse
import json
import re
from pathlib import Path

# Itanium length-prefixed identifier: <len><chars>
LENPREFIX = re.compile(r"(\d+)")


def demangle(name: str) -> str | None:
    """Return a readable identifier, or None if the shape is not recognised."""
    s = name
    is_thunk = False
    if s.startswith("j_"):
        # A PLT thunk: `j_` + mangled target.
        is_thunk = True
        s = s[2:]
    if not s.startswith("_Z"):
        return None
    body = s[2:]

    # Operator names the ABI spells with a fixed two-letter code, optionally
    # followed by IDA's `_N` de-duplication suffix. `_ZdlPv` is
    # `operator delete(void*)`; `_Znwj` is `operator new(unsigned int)`.
    OP = {
        "dl": "operator_delete", "da": "operator_delete_array",
        "nw": "operator_new", "na": "operator_new_array",
    }
    op = OP.get(body[:2])
    if op:
        return op

    # Nested name: N <len><id> ... E
    if body.startswith("N"):
        body = body[1:]
        parts = []
        i = 0
        while i < len(body):
            if body[i] == "E":
                break
            m = LENPREFIX.match(body, i)
            if not m:
                # Operator or template code we do not attempt to read.
                return None
            n = int(m.group(1))
            start = m.end()
            ident = body[start:start + n]
            if len(ident) != n or not ident:
                return None
            parts.append(ident)
            i = start + n
        if not parts:
            return None
        out = "__".join(parts)
    else:
        m = LENPREFIX.match(body)
        if not m:
            return None
        n = int(m.group(1))
        ident = body[m.end():m.end() + n]
        if not ident or len(ident) != n:
            return None
        # Trailing parameter types mean it is a real function signature; the
        # bare name is still the best identifier, so drop the suffix.
        out = ident

    # Special names the ABI spells out.
    special = {
        "C1": "ctor", "C2": "ctor", "C3": "ctor",
        "D0": "dtor", "D1": "dtor", "D2": "dtor",
    }
    if out in special:
        return None

    out = re.sub(r"\W", "_", out)
    if not out or out[0].isdigit():
        out = "_" + out
    if is_thunk:
        out = out + "__thunk"
    return out


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--state", required=True)
    ap.add_argument("--out", required=True)
    args = ap.parse_args()

    state = json.loads(Path(args.state).read_text())
    plan = []
    usable = 0
    for f in state["funcs"]:
        name = f["name"]
        if "_Z" not in name:
            continue
        usable += 1
        new = demangle(name)
        if not new or new == name:
            continue
        plan.append({
            "ea": hex(f["ea"]),
            "old": name,
            "new": new,
            "basis": "itanium_demangle",
            "evidence": "mangled name decoded",
        })

    # One name per address and per identifier. The PLT holds ~1,800 copies of
    # `operator delete`, so a colliding name gets the address suffix the
    # database already uses for same-named functions (`_9ADAF0`).
    seen_addr, seen_name, unique = set(), set(), []
    for p in plan:
        if p["ea"] in seen_addr:
            continue
        name = p["new"]
        if name in seen_name:
            name = "%s_%X" % (name, int(p["ea"], 16) & 0xFFFFFF)
        if name in seen_name:
            continue
        p["new"] = name
        seen_addr.add(p["ea"])
        seen_name.add(name)
        unique.append(p)

    print("functions with a mangled name: %d" % usable)
    print("demangled to a clean identifier: %d" % len(unique))
    Path(args.out).write_text(json.dumps(unique, indent=1))
    for p in unique[:12]:
        print("  %-12s %-34s <- %s" % (p["ea"], p["new"], p["old"]))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
