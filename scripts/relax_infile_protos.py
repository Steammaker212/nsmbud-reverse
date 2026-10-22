"""Relax in-file forward declarations that conflict with a relaxed header.

A header that declares a mixed-arity name `()` conflicts with a full prototype in the .c file:

    libs.h   unsigned int __fastcall sub_6080E034();                                     <- relaxed to ()
    libs.c   unsigned int __fastcall sub_6080E034(int, int, float *, char, float *);     <- "conflicting types"

Both must be old-style. This rewrites the prototypes in the .c file and leaves DEFINITIONS alone (a definition
must keep its parameters, or its body would reference names that no longer exist).
"""
import os
import re
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
INC = os.path.join(ROOT, "include")

DEF = re.compile(r"^[ \t]*[A-Za-z_][\w \t\*]*?__\w+\s+(?P<name>\w+)\s*\([^;{]*\)\s*\n[ \t]*\{",
                 re.M | re.S)
PROTO = re.compile(r"^[ \t]*(?P<ret>[A-Za-z_][\w \t\*]*?)\b(?P<conv>__\w+)\s+(?P<name>\w+)\s*"
                   r"\((?P<params>[^;{\)]*)\)\s*;(?P<tail>[^\n]*)", re.M)


def relaxed_header_names():
    """Names a header declares old-style ()."""
    names = set()
    for fn in os.listdir(INC):
        if not fn.endswith(".h"):
            continue
        t = open(os.path.join(INC, fn), encoding="utf-8", errors="replace").read()
        for m in PROTO.finditer(t):
            if not m.group("params").strip():
                names.add(m.group("name"))
    return names


def main(argv):
    write = "--write" in argv
    names = relaxed_header_names()
    print("names declared old-style in a header: %d" % len(names))
    total = 0
    for dp, _, fns in os.walk(ROOT):
        if "include" in dp or "authoritative" in dp:
            continue
        for fn in sorted(fns):
            if not fn.endswith(".c"):
                continue
            path = os.path.join(dp, fn)
            t = open(path, encoding="utf-8", errors="replace").read()
            def_spans = [(m.start(), m.end()) for m in DEF.finditer(t)]
            hits = []

            def repl(m):
                if m.group("name") not in names or not m.group("params").strip():
                    return m.group(0)
                if any(a <= m.start() < b for a, b in def_spans):
                    return m.group(0)
                hits.append(m.group("name"))
                return "%s %s %s();%s" % (m.group("ret").strip(), m.group("conv"),
                                          m.group("name"), m.group("tail"))

            new = PROTO.sub(repl, t)
            if hits:
                total += len(hits)
                print("  %-40s %3d" % (os.path.relpath(path, ROOT), len(hits)))
                if write:
                    open(path, "w", encoding="utf-8", newline="").write(new)
    print("in-file declarations relaxed: %d (write=%s)" % (total, write))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
