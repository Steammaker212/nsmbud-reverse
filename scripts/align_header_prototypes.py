"""Align the shared prototype headers to the definitions in the .c files.

The forward declarations are generated FROM the definitions, so they are correct:

    libs.c:37   void __fastcall sub_608044F0(int a1, int a2, float *a3, _BYTE *a4, int a5, int a6);
    libs.c:5632 void __fastcall sub_608044F0(int a1, int a2, float *a3, _BYTE *a4, int a5, int a6)   <- body

but libs.h still carries an older guess:

    libs.h     int __fastcall sub_608044F0(int a1, int a2, int a3, _BYTE *a4, int a5, int a6);

so the unit fails with "conflicting types". The definition wins: it is the decompiled body, while the header
entry was written before that body existed.

This rewrites each header prototype to match its definition, but ONLY when the parameter COUNT already agrees.
A differing arity is left alone and reported, because that is a real disagreement about the calling convention
and needs a decision rather than a silent overwrite.
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


def np(s):
    return len([x for x in s.split(",") if x.strip()])


def norm(s):
    return " ".join(s.split())


def main(argv):
    write = "--write" in argv

    defs = {}
    # authoritative/ holds fresh Hex-Rays output taken from main.i64. When a function was re-decompiled there,
    # that signature is the one to trust -- merging it into a .c file does NOT update a stale header prototype,
    # which is how sub_6084A81C ended up declared with 5 parameters in libs.h while its corrected definition has
    # 6 (the fifth is a float, and there is a sixth pointer). Read those first so setdefault keeps them.
    auth = os.path.join(ROOT, "authoritative")
    auth_names = set()
    if os.path.isdir(auth):
        for fn in sorted(os.listdir(auth)):
            if not fn.endswith(".c"):
                continue
            t = open(os.path.join(auth, fn), encoding="utf-8", errors="replace").read()
            for m in DEF.finditer(t):
                auth_names.add(m.group("name"))
                defs.setdefault(m.group("name"),
                                (norm(m.group("ret")), m.group("conv"), norm(m.group("params"))))
    print("authoritative definitions: %d" % len(defs))

    for dirpath, _, names in os.walk(ROOT):
        if "include" in dirpath or "authoritative" in dirpath:
            continue
        for fn in sorted(names):
            if not fn.endswith(".c"):
                continue
            t = open(os.path.join(dirpath, fn), encoding="utf-8", errors="replace").read()
            for m in DEF.finditer(t):
                defs.setdefault(m.group("name"),
                                (norm(m.group("ret")), m.group("conv"), norm(m.group("params"))))
    print("definitions collected: %d" % len(defs))

    total = 0
    arity = []
    for fn in sorted(os.listdir(INC)):
        if not fn.endswith(".h"):
            continue
        path = os.path.join(INC, fn)
        t = open(path, encoding="utf-8", errors="replace").read()
        changed = 0

        def repl(m):
            nonlocal changed
            name = m.group("name")
            if name not in defs:
                return m.group(0)
            ret, conv, dparams = defs[name]
            # A parameter count of ZERO in the header means an old-style `()` declaration, which carries no
            # prototype at all. Replacing it with the real list is always safe and is exactly what is needed:
            # `()` and `(int, int, float *, char, float *)` genuinely conflict. Only NON-ZERO disagreements are
            # a real question about the calling convention, and those are reported instead of rewritten.
            hdr_n = np(m.group("params"))
            if hdr_n != 0 and hdr_n != np(dparams) and name not in auth_names:
                arity.append((fn, name, np(m.group("params")), np(dparams)))
                return m.group(0)
            new = "%s %s %s(%s);%s" % (ret, conv, name, dparams, m.group("tail"))
            if norm(new) == norm(m.group(0)):
                return m.group(0)
            changed += 1
            return new

        new = PROTO.sub(repl, t)
        if changed:
            total += changed
            print("  %-22s %d prototype(s) aligned" % (fn, changed))
            if write:
                open(path, "w", encoding="utf-8", newline="").write(new)

    print("\nprototypes aligned: %d, arity disagreements left visible: %d" % (total, len(arity)))
    for fn, name, a, b in arity[:15]:
        print("   %-18s %-22s header %d vs definition %d" % (fn, name, a, b))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))