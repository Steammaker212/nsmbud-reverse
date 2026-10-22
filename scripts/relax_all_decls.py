"""Make every header declaration of a mixed-arity function old-style, and keep it that way.

A function called BOTH ways in the corpus cannot be declared with a full prototype anywhere:

    int f();              old-style: accepts any argument list
    int f(int a, int b);  <- a later full prototype OVERRIDES it and re-enables checking
    f(1);                 error: too few arguments to call, expected 2, have 1

That is why simply relaxing a prototype did not help: the same name is declared again with its full parameter
list further down the same header (or in another one), and the last declaration wins. Both forms have to become
old-style.

Examples that motivate it:

    libs.h   int __fastcall sead__HeapMgr__setCurrentHeap_(int a1, int a2);
    calls    sead__HeapMgr__setCurrentHeap_(MEMORY[0xCCEE90]);                    <- 1 arg, 2 sites
             sead__HeapMgr__setCurrentHeap_(MEMORY[0xCCEE90], v26);                <- 2 args, 14 sites

Both are real. The two-argument form passes a value; the one-argument form is what the decompiler produced where
the second argument was already in the register. Old-style passes both through unchanged.
"""
import os
import re
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
INC = os.path.join(ROOT, "include")

DEF = re.compile(r"^[ \t]*(?P<ret>[A-Za-z_][\w \t\*]*?)\b(?P<conv>__\w+)\s+(?P<name>\w+)\s*"
                 r"\((?P<params>[^;{]*?)\)\s*\n[ \t]*\{", re.M | re.S)
PROTO = re.compile(r"^[ \t]*(?P<ret>[A-Za-z_][\w \t\*]*?)\b(?P<conv>__\w+)\s+(?P<name>\w+)\s*"
                   r"\((?P<params>[^;{\)]*)\)\s*;(?P<tail>[^\n]*)", re.M)
CALL = re.compile(r"\b(\w+)\s*\(([^;{}]*?)\)")


def na(s):
    return len([x for x in s.split(",") if x.strip()])


def main(argv):
    write = "--write" in argv
    defs, least, most = {}, {}, {}
    for dp, _, names in os.walk(ROOT):
        if "include" in dp or "authoritative" in dp:
            continue
        for fn in sorted(names):
            if not fn.endswith(".c"):
                continue
            t = open(os.path.join(dp, fn), encoding="utf-8", errors="replace").read()
            for m in DEF.finditer(t):
                defs.setdefault(m.group("name"), na(m.group("params")))
            scan = DEF.sub(lambda m: m.group("name") + "(DEFINITION)", t)
            for m in CALL.finditer(scan):
                n = m.group(1)
                if n not in defs or m.group(2) == "DEFINITION":
                    continue
                k = na(m.group(2))
                if n not in least or k < least[n]:
                    least[n] = k
                if n not in most or k > most[n]:
                    most[n] = k

    mixed = {n for n in least if least[n] < defs.get(n, 0) and most.get(n, 0) <= defs.get(n, 0)}
    print("mixed-arity functions (called with fewer than defined): %d" % len(mixed))

    total = 0
    for fn in sorted(os.listdir(INC)):
        if not fn.endswith(".h"):
            continue
        path = os.path.join(INC, fn)
        t = open(path, encoding="utf-8", errors="replace").read()
        hits = []

        def repl(m):
            name = m.group("name")
            if name not in mixed:
                return m.group(0)
            if not m.group("params").strip():
                return m.group(0)
            hits.append(name)
            return "%s %s %s();%s" % (m.group("ret").strip(), m.group("conv"), name, m.group("tail"))

        new = PROTO.sub(repl, t)
        if hits:
            total += len(hits)
            print("  %-24s %3d declaration(s) made old-style" % (fn, len(hits)))
            if write:
                open(path, "w", encoding="utf-8", newline="").write(new)
    print("total: %d (write=%s)" % (total, write))

    # The same rule has to be applied to the prototypes INSIDE the .c aggregates. A header that declares a
    # mixed-arity name `()` still conflicts with a full prototype in the .c file that includes it:
    #
    #     libs.h   unsigned int __fastcall sub_6080E034();                                  <- relaxed
    #     libs.c   unsigned int __fastcall sub_6080E034(int, int, float *, char, float *);   <- conflict
    #
    # Declarations only: a DEFINITION keeps its real parameter list.
    inc_total = 0
    for dirpath, _, names in os.walk(ROOT):
        if "include" in dirpath or "authoritative" in dirpath:
            continue
        for fn in sorted(names):
            if not fn.endswith(".c"):
                continue
            path = os.path.join(dirpath, fn)
            t = open(path, encoding="utf-8", errors="replace").read()
            hits = []

            def repl2(m):
                name = m.group("name")
                if name not in mixed or not m.group("params").strip():
                    return m.group(0)
                hits.append(name)
                return "%s %s %s();%s" % (m.group("ret").strip(), m.group("conv"), name, m.group("tail"))

            # A DEFINITION must keep its parameters: relaxing it would leave the body referring to names
            # that no longer exist. Only prototypes are rewritten, so record the byte ranges of definitions
            # and skip any match that starts one.
            def_ranges = [(m.start(), m.end()) for m in DEF.finditer(t)]

            def is_definition(pos):
                return any(a <= pos < b for a, b in def_ranges)

            new = PROTO.sub(lambda m: m.group(0) if is_definition(m.start()) else repl2(m), t)
            if hits:
                inc_total += len(hits)
                print("  %-40s %3d in-file declaration(s) made old-style"
                      % (os.path.relpath(path, ROOT), len(hits)))
                if write:
                    open(path, "w", encoding="utf-8", newline="").write(new)
    print("in-file declarations relaxed: %d" % inc_total)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
