"""Rewrite C++ allocation-operator call sites into plain C identifiers.

Hex-Rays prints `operator new(size)`, `operator new(size, heap, align)` and `operator delete(p)`. None of those is
valid C -- but the corpus cannot simply declare `operator` as a function either, because it is a keyword. The
established approach in this repository (see decompiled/include/nsmbudx_types.h and scripts/fix_qualified_names.py)
is to rename the CALL SITES onto names that are declared:

    operator new(n)              -> __operator_new(n)
    operator new(n, heap, align) -> __operator_new_al(n, heap, align)
    operator new[](...)          -> __operator_new_array_al(...)
    operator delete(p)           -> __operator_delete(p)
    operator delete(p, h, a)     -> __operator_delete_al(p, h, a)
    operator delete[](p)         -> __operator_delete_array_al(p)

Counting the arguments is what distinguishes the overloads, and getting it wrong is what previously broke the parse
count, so the argument count is determined by bracket matching rather than a regex guess.

Scope: the recovered units and any corpus unit that still contains the raw spelling.
"""
import os
import re
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"


def split_top_level(argtext):
    """Split an argument list on commas that are not inside nested brackets."""
    args, depth, cur = [], 0, ""
    for ch in argtext:
        if ch in "([{":
            depth += 1
        elif ch in ")]}":
            depth -= 1
        if ch == "," and depth == 0:
            args.append(cur)
            cur = ""
            continue
        cur += ch
    if cur.strip():
        args.append(cur)
    return [a.strip() for a in args if a.strip()]


def find_call(text, pos):
    """From the index just after `operator new`, return (args, end) or (None, pos)."""
    i = pos
    n = len(text)
    while i < n and text[i] in " \t":
        i += 1
    if i >= n or text[i] != "(":
        return None, pos
    depth, start = 0, i
    while i < n:
        if text[i] == "(":
            depth += 1
        elif text[i] == ")":
            depth -= 1
            if depth == 0:
                return split_top_level(text[start + 1:i]), i + 1
        i += 1
    return None, pos


PATTERNS = [
    ("operator new[]", "__operator_new_array_al", (1,), (3,)),
    ("operator delete[]", "__operator_delete_array_al", (1,), (3,)),
    ("operator new", "__operator_new", (1,), (3,)),
    ("operator delete", "__operator_delete", (1,), (3,)),
]
# name used when the call uses the 3-argument (aligned/placement) form
ALIGNED = {
    "__operator_new": "__operator_new_al",
    "__operator_delete": "__operator_delete_al",
    "__operator_new_array_al": "__operator_new_array_al",
    "__operator_delete_array_al": "__operator_delete_array_al",
}


def rewrite(text):
    total = 0
    for spelling, plain, _ok, align in PATTERNS:
        out = []
        i = 0
        while True:
            j = text.find(spelling, i)
            if j < 0:
                out.append(text[i:])
                break
            out.append(text[i:j])
            args, end = find_call(text, j + len(spelling))
            if args is None:
                out.append(spelling)
                i = j + len(spelling)
                continue
            name = ALIGNED[plain] if len(args) in align else plain
            out.append("%s(%s)" % (name, ", ".join(args)))
            total += 1
            i = end
        text = "".join(out)
    return text, total


def main(argv):
    write = "--write" in argv
    grand = 0
    for dp, _, fs in os.walk(ROOT):
        if os.path.basename(dp) == "include":
            continue
        for fn in fs:
            if not fn.endswith(".c"):
                continue
            p = os.path.join(dp, fn)
            t = open(p, encoding="utf-8", errors="replace").read()
            if "operator new" not in t and "operator delete" not in t:
                continue
            new, n = rewrite(t)
            if n:
                grand += n
                print("  %-46s %d call site(s)" % (os.path.relpath(p, ROOT), n))
                if write:
                    open(p, "w", encoding="utf-8", newline="").write(new)
    print("  total rewritten: %d" % grand)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
