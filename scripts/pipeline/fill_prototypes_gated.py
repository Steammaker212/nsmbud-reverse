"""Fill nsmbudx_prototypes.h, but only where the call sites agree on arity.

## Why this is gated

Writing real parameter lists into the header fixes the "conflicting types" family
outright -- a definition may not contradict a prior `()` declaration, and that was
906 of the 907 single-error units in the bucket.

But a real prototype also *enforces* arity at every call site, and the decompiled
call sites do not always pass the number of arguments the definition takes. Doing
it unconditionally traded one error family for a larger one:

    member not found      2335
    too few arguments     1850     <- introduced
    too many arguments     635     <- introduced
    conflicting types       70     <- was 1136

So the write is now conditional on the unit set being consistent: a prototype is
only filled in when every call site in the corpus passes exactly as many top-level
arguments as the definition declares. Where call sites disagree, the `()` form is
kept, because it parses and does not assert anything false. Those functions are
counted and reported, not silently guessed.

## What "agree" means

Argument counting is done on the call's own parentheses, tracking nesting and
skipping string/char literals, so `f(g(a, b), c)` counts as two arguments and
`f("a,b")` counts as one. A call whose text cannot be parsed unambiguously
(balanced-paren failure) disqualifies the function rather than being skipped.

Deluxe (Switch) v1.0.0 only.
"""
from __future__ import annotations

import collections
import io
import re
from pathlib import Path

INC = Path("decompiled/src/include")
PROTO = INC / "nsmbudx_prototypes.h"
SRC = Path("decompiled/src")

DEF = re.compile(
    r"^(?!\s)([A-Za-z_][\w \t\*]*?)\b([A-Za-z_]\w*)\s*\(([^;{]*)\)\s*$", re.M)

HLINE = re.compile(
    r"^(?P<pre>[^\n]*?)\b(?P<name>[A-Za-z_]\w*)\s*\(\s*\)\s*;"
    r"(?P<post>\s*/\*\s*0x[0-9A-Fa-f]+\s*\*/)[ \t]*$", re.M)

KEYWORDS = {"if", "for", "while", "switch", "return", "sizeof", "do", "else"}


def split_args(s: str):
    """Top-level comma split, or None if the text is unbalanced.

    Tracks (), [] and {} depth and skips quoted strings, so a comma inside a
    nested call or a literal does not split an argument.
    """
    out, depth, cur = [], 0, ""
    i, n = 0, len(s)
    while i < n:
        c = s[i]
        if c in "\"'":
            q = c
            cur += c
            i += 1
            while i < n:
                if s[i] == "\\" and i + 1 < n:
                    cur += s[i:i + 2]
                    i += 2
                    continue
                cur += s[i]
                if s[i] == q:
                    i += 1
                    break
                i += 1
            continue
        if c in "([{":
            depth += 1
        elif c in ")]}":
            depth -= 1
            if depth < 0:
                return None
        if c == "," and depth == 0:
            out.append(cur.strip())
            cur = ""
        else:
            cur += c
        i += 1
    if depth != 0:
        return None
    if cur.strip():
        out.append(cur.strip())
    return out


def count_params(params: str) -> int:
    p = params.strip()
    if not p or p == "void":
        return 0
    parts = split_args(p)
    return len(parts) if parts is not None else -1


def collect_definitions():
    seen = collections.defaultdict(collections.Counter)
    for p in SRC.rglob("*.c"):
        try:
            txt = io.open(p, encoding="utf-8", errors="replace").read()
        except Exception:
            continue
        for m in DEF.finditer(txt):
            ret, name, params = (m.group(1).strip(), m.group(2),
                                 m.group(3).strip())
            if name in KEYWORDS:
                continue
            seen[name][(ret, params)] += 1
    return seen


def collect_call_arities():
    """{name: Counter of observed argument counts} and a set of unusable names."""
    arities = collections.defaultdict(collections.Counter)
    unparsable = set()
    for p in SRC.rglob("*.c"):
        try:
            txt = io.open(p, encoding="utf-8", errors="replace").read()
        except Exception:
            continue
        for m in re.finditer(r"\b([A-Za-z_]\w*)\s*\(", txt):
            name = m.group(1)
            if name in KEYWORDS:
                continue
            # Find the matching close paren.
            i = m.end()
            depth, start = 1, i
            while i < len(txt) and depth:
                c = txt[i]
                if c in "\"'":
                    q = c
                    i += 1
                    while i < len(txt):
                        if txt[i] == "\\":
                            i += 2
                            continue
                        if txt[i] == q:
                            break
                        i += 1
                elif c == "(":
                    depth += 1
                elif c == ")":
                    depth -= 1
                i += 1
            if depth:
                unparsable.add(name)
                continue
            inner = txt[start:i - 1]
            parts = split_args(inner)
            if parts is None:
                unparsable.add(name)
                continue
            arities[name][len(parts)] += 1
    return arities, unparsable


def main() -> int:
    defs = collect_definitions()
    arities, unparsable = collect_call_arities()
    print("functions with a definition : %d" % len(defs))
    print("functions with call sites   : %d" % len(arities))

    text = io.open(PROTO, encoding="utf-8").read()
    lines = text.splitlines()

    stats = collections.Counter()
    reasons = collections.Counter()

    for i, line in enumerate(lines):
        m = HLINE.match(line)
        if not m:
            continue
        name = m.group("name")
        cand = defs.get(name)
        if not cand:
            stats["no definition"] += 1
            continue
        if len(cand) > 1:
            stats["definitions disagree"] += 1
            continue
        (ret, params), _n = next(iter(cand.items()))
        if not params or params == "void":
            stats["zero-arg definition"] += 1
            continue
        if "\n" in params or "\r" in params:
            stats["multi-line definition"] += 1
            continue
        if "{" in params or "}" in params:
            stats["unusable definition"] += 1
            continue

        want = count_params(params)
        if want <= 0:
            stats["zero-arg definition"] += 1
            continue

        if name in unparsable:
            stats["call site unparsable"] += 1
            reasons[name] = 0
            continue

        seen = arities.get(name)
        if not seen:
            # Never called in the corpus: a real prototype cannot break anything.
            stats["filled (no call sites)"] += 1
        else:
            bad = {k: v for k, v in seen.items() if k != want}
            if bad:
                stats["held: call arity disagrees"] += 1
                continue
            stats["filled (call sites agree)"] += 1

        lines[i] = HLINE.sub(
            lambda mm: "%s%s(%s);%s" % (mm.group("pre"), mm.group("name"),
                                        params, mm.group("post")),
            line)
    print()
    for k in ("filled (call sites agree)", "filled (no call sites)",
              "held: call arity disagrees", "definitions disagree",
              "no definition", "multi-line definition",
              "call site unparsable", "zero-arg definition",
              "unusable definition"):
        if stats[k]:
            print("  %-32s %6d" % (k, stats[k]))

    io.open(PROTO, "w", encoding="utf-8", newline="\n").write("\n".join(lines) + "\n")
    print("\nwrote %s" % PROTO)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
