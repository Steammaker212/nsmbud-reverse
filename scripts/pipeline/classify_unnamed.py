"""Classify unnamed functions by structural evidence from their decompiled body.

For every function still carrying a ``sub_`` name, decide what kind of thing it
is, from the body Hex-Rays produced:

* ``thunk``        - tail-calls exactly one other function, no other work.
* ``getter``       - returns a single field load, no calls, no stores.
* ``setter``       - one store, no calls.
* ``accessor``     - single field load/store plus or minus one constant.
* ``wrapper``      - calls exactly one function and forwards its result.
* ``vcall``        - issues exactly one virtual call through a vtable offset.
* ``ctor_shaped``  - writes many fields through one pointer argument.
* ``other``        - anything else (needs manual review).

The output is evidence for naming, not a rename plan: it says what shape the
function has, so the naming pass can apply conventions like
``Class__getFoo`` only where the shape actually supports it.

Usage:
    python classify_unnamed.py --jsonl <export.jsonl> --out <classes.json>
"""
from __future__ import annotations

import argparse
import json
import re
from collections import Counter
from pathlib import Path

PLACEHOLDER = re.compile(r"^(sub_|loc_|nullsub_|j_sub_|j_nullsub_)")

# A call in Hex-Rays output: name(args) where name is an identifier.
CALL_RE = re.compile(r"\b([A-Za-z_]\w*)\s*\(")
KEYWORDS = {
    "if", "while", "for", "switch", "return", "sizeof", "do", "else", "case",
    "goto", "sizeof", "defined", "__int8", "__int16", "__int32", "__int64",
    "memset", "memcpy", "memmove", "strlen", "sqrtf", "sqrt", "fabsf", "fabs",
    "abs", "LABEL_",
}


def strip_decls(body: str) -> str:
    """Remove the leading local-declaration block from a Hex-Rays body."""
    start = body.find("{")
    if start < 0:
        return body
    depth = 0
    # Find the end of the declaration preamble: first statement line after the
    # opening brace that isn't a declaration or a blank.
    lines = body[start:].splitlines()
    out = []
    seen_stmt = False
    for ln in lines:
        s = ln.strip()
        if not seen_stmt:
            # A declaration ends with ';' and has no '(' at statement position
            # beyond function-pointer syntax; treat ' = ' or '(' as statement.
            if s and not s.startswith("//") and not s.startswith("/*"):
                looks_decl = (
                    s.endswith(";")
                    and (";" not in s[:-1])
                    and not s.startswith(("return", "if", "while", "for", "switch", "goto", "*", "(", "{"))
                    and ("=" not in s or " BYREF" in s or "[" in s)
                )
                if not looks_decl:
                    seen_stmt = True
                else:
                    continue
        out.append(ln)
    return "\n".join(out)


def calls_in(body: str) -> list[str]:
    names = []
    for m in CALL_RE.finditer(body):
        n = m.group(1)
        if n in KEYWORDS:
            continue
        names.append(n)
    return names


def classify(body: str) -> tuple[str, dict]:
    """Return (kind, evidence) for a decompiled function body."""
    if not body:
        return "unavailable", {}

    stmts = strip_decls(body)
    calls = calls_in(stmts)
    uniq = sorted(set(calls))

    # Field accesses: *(type *)(aN + 0x..)
    field_lds = re.findall(r"\*\s*\([^()]*\*\)\s*\(\s*a1\s*\+", stmts)
    field_sts = re.findall(r"\*\s*\([^()]*\*\)\s*\(\s*a1\s*\+\s*0x[0-9A-Fa-f]+\s*\)\s*=", stmts)
    vcalls = re.findall(r"\(\*[^)]*\)\s*\(", stmts)
    returns = re.findall(r"\breturn\b", stmts)

    # A tail-call thunk: one call, no stores, and that call is the last thing.
    tail = False
    if len(calls) == 1 and not field_sts:
        tail = bool(re.search(r"\breturn\s+%s\s*\(" % re.escape(calls[0]), stmts)) or bool(
            re.search(r"\b%s\s*\([^;]*\)\s*;" % re.escape(calls[0]), stmts)
        ) and stmts.strip().count(";") <= 2

    if uniq and len(uniq) == 1 and not field_sts and tail:
        return "thunk", {"target": uniq[0]}

    if not calls and len(field_sts) == 1 and len(field_lds) == 0:
        return "setter", {"stores": 1}
    if not calls and len(field_lds) == 1 and len(field_sts) == 0 and len(returns) >= 1:
        return "getter", {"loads": 1}
    if not calls and len(field_sts) >= 4:
        return "ctor_shaped", {"stores": len(field_sts)}
    if len(uniq) == 1 and not field_sts and not vcalls:
        return "wrapper", {"target": uniq[0]}
    if len(vcalls) >= 1 and len(uniq) <= 1:
        return "vcall", {"vcalls": len(vcalls)}
    if not calls and (field_lds or field_sts):
        return "accessor", {"loads": len(field_lds), "stores": len(field_sts)}
    return "other", {}


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--jsonl", required=True)
    ap.add_argument("--out", required=True)
    args = ap.parse_args()

    results = []
    counts: Counter[str] = Counter()
    with open(args.jsonl, encoding="utf-8") as fh:
        for line in fh:
            line = line.strip()
            if not line:
                continue
            r = json.loads(line)
            if not PLACEHOLDER.match(r["name"]):
                continue
            kind, ev = classify(r.get("c") or "")
            counts[kind] += 1
            results.append({"ea": hex(r["ea"]), "name": r["name"], "kind": kind, "evidence": ev})

    Path(args.out).write_text(json.dumps(results, indent=0))
    print("classified %d unnamed functions" % len(results))
    for k, v in counts.most_common():
        print("  %-12s %d" % (k, v))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
