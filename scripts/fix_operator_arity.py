"""Split multi-argument allocation-operator calls onto a name that no prototype constrains.

THE PROBLEM
-----------
The decompiler emits `operator new(size)`, `operator new(size, heap, align)` and the `[]` forms. They
are rewritten to `__operator_new` etc. by fix_qualified_names.py. But `__operator_new` is a REAL
function in this binary at 0x008de044 and libs.h declares it from the database with exactly one
parameter. So the 994 three-argument call sites fail with "too many arguments".

Declaring the symbol variadically does not work either: that declaration contradicts libs.h's and took
the parse count from 432 to 0. The prototype is not mine to change.

THE FIX. The three-argument spelling is a DIFFERENT overload (the aligned/placement form), so it gets a
different name:

    __operator_new(48, 0, 4)   ->   __operator_new_al(48, 0, 4)

`__operator_new_al` is declared in nsmbudx_types.h with exactly three parameters, so it constrains
nothing else. The one-argument calls keep the real symbol and keep matching the real prototype. This is
honest about the structure: two overloads, two names, each declared once.

Only calls with MORE THAN ONE argument are touched, so the 1,113 single-argument sites -- which already
compile -- are left exactly as they are.
"""
import os
import re
import sys

PRE = r"(?:/\*\s*line:\s*\d+\s*\*/\s*)?"
# __operator_new(  ...  ) with at least one top-level comma inside.
MULTI = re.compile(
    r"\b(__operator_(?:new|delete))\(((?:[^()]|\([^()]*\))*)\)",
)


def split_args(s):
    """Top-level comma split, so nested calls are not cut."""
    depth = 0
    cur = []
    out = []
    for ch in s:
        if ch == "(":
            depth += 1
        elif ch == ")":
            depth -= 1
        if ch == "," and depth == 0:
            out.append("".join(cur))
            cur = []
        else:
            cur.append(ch)
    out.append("".join(cur))
    return out


def transform(text):
    changed = 0

    def repl(m):
        nonlocal changed
        name, args = m.group(1), m.group(2)
        if len(split_args(args)) < 2:
            return m.group(0)
        changed += 1
        return "%s_al(%s)" % (name, args)

    return MULTI.sub(repl, text), changed


def main(argv):
    if len(argv) < 2:
        print("usage: fix_operator_arity.py <dir> [--write]")
        return 2
    root, write = argv[1], "--write" in argv
    files = total = 0
    for dp, _, fs in os.walk(root):
        for f in fs:
            if not f.endswith(".c"):
                continue
            p = os.path.join(dp, f)
            with open(p, encoding="utf-8", errors="surrogateescape") as fh:
                text = fh.read()
            new, k = transform(text)
            if k:
                files += 1
                total += k
                if write:
                    with open(p, "w", encoding="utf-8", errors="surrogateescape", newline="") as fh:
                        fh.write(new)
    print("multi-arg allocation calls split: %d in %d files%s"
          % (total, files, "" if write else " (dry run)"))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
