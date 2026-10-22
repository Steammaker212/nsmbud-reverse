"""Relax exactly the prototypes that a real call site under-supplies, in the SHARED headers.

Why this exists alongside relax_header_arity.py: that one applies a conservative global rule (relax only if NO
call site uses the full arity). That rule is right for functions like __operator_new_array_al, which are called
both ways, but it also skips genuine defects such as

    libs.h   int __fastcall sead__HeapMgr__setCurrentHeap_(int a1, int a2);
    call     v8 = sead__HeapMgr__setCurrentHeap_(MEMORY[0xCCEE90]);            <- 1 argument, never 2

    header   int __fastcall sub_6089725C(_DWORD *a1, int a2, int a3);
    call     v25 = sub_6089725C(v24);                                        <- 1 argument, never 3

Here the header was in error from the start: the DECOMPILER dropped trailing arguments at the call site, so the
true contract is "some prefix of these parameters". An old-style declaration `()` models exactly that -- it
accepts any argument list and passes it through, which is what the ARM calling convention does.

The two protections are: never relax a prototype that some call site DOES call with the full parameter list, and
never relax a definition (only declarations, and only in the include/ directory).
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


def nargs(s):
    return len([x for x in s.split(",") if x.strip()])


def main(argv):
    write = "--write" in argv
    defs, least, most = {}, {}, {}
    for dirpath, _, names in os.walk(ROOT):
        if "include" in dirpath or "authoritative" in dirpath:
            continue
        for fn in sorted(names):
            if not fn.endswith(".c"):
                continue
            path = os.path.join(dirpath, fn)
            t = open(path, encoding="utf-8", errors="replace").read()
            for m in DEF.finditer(t):
                defs.setdefault(m.group("name"), nargs(m.group("params")))
            # Count call arities on a copy with every DEFINITION replaced by a placeholder. Without this the
            # definition's own parameter list is counted as a call at full arity, `most` becomes the definition
            # arity for every function, and nothing is ever eligible -- which is exactly what happened:
            # 93 targets were found and 0 were rewritten.
            scan = DEF.sub(lambda m: m.group("name") + "(DEFINITION)", t)
            for m in CALL.finditer(scan):
                n = m.group(1)
                if n not in defs or m.group(2) == "DEFINITION":
                    continue
                k = nargs(m.group(2))
                if n not in least or k < least[n]:
                    least[n] = k
                if n not in most or k > most[n]:
                    most[n] = k

    # under-supplied AND never called at full arity
    targets = {n for n, k in least.items() if k < defs[n] and most.get(n, 0) < defs[n]}
    print("under-supplied and never full-arity: %d" % len(targets))

    total = 0
    for fn in sorted(os.listdir(INC)):
        if not fn.endswith(".h"):
            continue
        path = os.path.join(INC, fn)
        t = open(path, encoding="utf-8", errors="replace").read()
        hits = []

        def repl(m):
            name = m.group("name")
            if name not in targets:
                return m.group(0)
            hits.append(name)
            return "%s %s %s();%s" % (m.group("ret").strip(), m.group("conv"), name, m.group("tail"))

        new = PROTO.sub(repl, t)
        if hits:
            total += len(hits)
            print("  %-24s %d relaxed: %s" % (fn, len(hits), ", ".join(sorted(set(hits))[:6])))
            if write:
                open(path, "w", encoding="utf-8", newline="").write(new)
    print("total relaxed: %d (write=%s)" % (total, write))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
