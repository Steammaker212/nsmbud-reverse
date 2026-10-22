"""Relax header prototypes where a call site passes FEWER arguments than the definition.

For the 466 single-function translation units there is no forward-declaration block, so all their prototypes
come from the shared headers. When Hex-Rays dropped arguments at such a call site the header prototype is too
strict and the unit will not compile:

    libs.h  int __fastcall sead__HeapMgr__setCurrentHeap_(int a1, int a2);
    call    v8 = sead__HeapMgr__setCurrentHeap_(MEMORY[0xCCEE90]);      <- 1 argument

Same reasoning as for the in-file declarations: the definition keeps its real parameters, and the header
declaration becomes old-style so it accepts any argument list and passes it through, which is what the original
ARM does.

Only prototypes with an ACTUAL lower-arity call somewhere in the corpus are relaxed, and a declaration is never
relaxed below the number of parameters the definition USES.
"""
import os
import re
import sys

REPO = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse"
ROOT = os.path.join(REPO, "decompiled")
INC = os.path.join(ROOT, "include")

DEF = re.compile(r"^[ \t]*(?P<ret>[A-Za-z_][\w \t\*]*?)\b(?P<conv>__\w+)\s+(?P<name>\w+)\s*"
                 r"\((?P<params>[^;{]*?)\)\s*\n[ \t]*\{", re.M | re.S)
PROTO = re.compile(r"^[ \t]*(?P<ret>[A-Za-z_][\w \t\*]*?)\b(?P<conv>__\w+)\s+(?P<name>\w+)\s*"
                   r"\((?P<params>[^;{\)]*)\)\s*;(?P<tail>[^\n]*)", re.M)
CALL = re.compile(r"\b(\w+)\s*\(([^;{}]*?)\)")


def np(s):
    return len([x for x in s.split(",") if x.strip()])


def main(argv):
    write = "--write" in argv
    defs = {}
    for dirpath, _, names in os.walk(ROOT):
        if "include" in dirpath or "authoritative" in dirpath:
            continue
        for fn in sorted(names):
            if not fn.endswith(".c"):
                continue
            t = open(os.path.join(dirpath, fn), encoding="utf-8", errors="replace").read()
            for m in DEF.finditer(t):
                defs.setdefault(m.group("name"), np(m.group("params")))

    least = {}
    for dirpath, _, names in os.walk(ROOT):
        if "include" in dirpath or "authoritative" in dirpath:
            continue
        for fn in sorted(names):
            if not fn.endswith(".c"):
                continue
            t = open(os.path.join(dirpath, fn), encoding="utf-8", errors="replace").read()
            for m in CALL.finditer(t):
                n = m.group(1)
                if n in defs:
                    k = np(m.group(2))
                    if n not in least or k < least[n]:
                        least[n] = k

    # A function that is EVER called with its full parameter list must keep its prototype. Relaxing it because
    # one call site omitted arguments breaks every full-arity call with "too many arguments" -- that is exactly
    # what happened to __operator_new_array_al(size, heap, align).
    most = {}
    for dirpath, _, names in os.walk(ROOT):
        if "include" in dirpath or "authoritative" in dirpath:
            continue
        for fn in sorted(names):
            if not fn.endswith(".c"):
                continue
            t = open(os.path.join(dirpath, fn), encoding="utf-8", errors="replace").read()
            for m in CALL.finditer(t):
                n = m.group(1)
                if n in defs:
                    k = np(m.group(2))
                    if n not in most or k > most[n]:
                        most[n] = k

    holes = {n for n, k in least.items() if k < defs[n] and most.get(n, 0) < defs[n]}
    print("functions called with fewer arguments than defined: %d" % len(holes))

    total = 0
    for fn in sorted(os.listdir(INC)):
        if not fn.endswith(".h"):
            continue
        path = os.path.join(INC, fn)
        t = open(path, encoding="utf-8", errors="replace").read()
        changed = 0

        def repl(m):
            nonlocal changed
            name = m.group("name")
            if name not in holes:
                return m.group(0)
            changed += 1
            return "%s %s %s();%s" % (m.group("ret").strip(), m.group("conv"), name, m.group("tail"))

        new = PROTO.sub(repl, t)
        if changed:
            total += changed
            print("  %-22s %d prototype(s) relaxed" % (fn, changed))
            if write:
                open(path, "w", encoding="utf-8", newline="").write(new)
    print("total relaxed: %d (write=%s)" % (total, write))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))