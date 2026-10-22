"""Make a forward declaration tolerant of call sites that pass FEWER arguments than the definition.

player.c really contains both:

    L2877   sub_60787118();                                   <- 0 arguments
    L2908   int __fastcall sub_60787118(int a1, int a2)       <- 2 parameters, and both are USED

Hex-Rays drops arguments at some call sites, so the corpus is internally inconsistent about arity. The
definition is authoritative (it uses a1 and a2), so the declaration must stay 2-parameter -- but a
prototype would then reject the 0-argument call.

An old-style declaration, `int __fastcall sub_60787118();`, states the return type WITH NO PROTOTYPE. C then
accepts any argument list and passes the call through unchanged, which is exactly the behaviour the original
ARM has. This is not a workaround that loses information: the return type is kept, and the definition below it
keeps the real parameter list.

Applied only where a call site genuinely passes fewer arguments than the definition declares.
"""
import os
import re
import sys

DEF = re.compile(r"^[ \t]*(?P<ret>[A-Za-z_][\w \t\*]*?)\b(?P<conv>__\w+)\s+(?P<name>\w+)\s*"
                 r"\((?P<params>[^;{]*?)\)\s*\n[ \t]*\{", re.M | re.S)
CALL = re.compile(r"\b(\w+)\s*\(([^;{}]*?)\)\s*;")


def nparams(s):
    return len([x for x in s.split(",") if x.strip()])


def process(path, write):
    text = open(path, encoding="utf-8", errors="replace").read()
    if text.count("\n") < 50:
        return 0

    defs = {}
    for m in DEF.finditer(text):
        defs.setdefault(m.group("name"), (m.group("ret").strip(), m.group("conv"),
                                          nparams(m.group("params"))))
    if not defs:
        return 0

    # smallest argument count seen at any call site, per function
    least = {}
    for m in CALL.finditer(text):
        n = m.group(1)
        if n in defs:
            k = nparams(m.group("args")) if False else len([x for x in m.group(2).split(",") if x.strip()])
            if n not in least or k < least[n]:
                least[n] = k

    holes = {n: k for n, k in least.items() if k < defs[n][2]}
    if not holes:
        return 0

    changed = 0
    out = []
    last = 0
    for m in DEF.finditer(text):
        name = m.group("name")
        if name not in holes:
            continue
        ret, conv, _ = defs[name]
        newdecl = "%s %s %s();" % (ret, conv, name)
        # the declaration sits in the forward-declaration block near the top
        old = m.group(0)
        head = old[:old.index("(")]
        start = m.start()
        out.append(text[last:start])
        out.append(newdecl + "\n" + old)
        last = start
        changed += 1
    # simpler and safer: just prepend the tolerant declaration to the forward block
    return changed, holes


def main(argv):
    root = argv[1]
    write = "--write" in argv
    for dirpath, _, names in os.walk(root):
        if "include" in dirpath or "authoritative" in dirpath:
            continue
        for fn in sorted(names):
            if not fn.endswith(".c"):
                continue
            p = os.path.join(dirpath, fn)
            text = open(p, encoding="utf-8", errors="replace").read()
            defs = {}
            for m in DEF.finditer(text):
                defs.setdefault(m.group("name"), (m.group("ret").strip(), m.group("conv"),
                                                  nparams(m.group("params"))))
            least = {}
            for m in CALL.finditer(text):
                n = m.group(1)
                if n in defs:
                    k = len([x for x in m.group(2).split(",") if x.strip()])
                    if n not in least or k < least[n]:
                        least[n] = k
            holes = {n: k for n, k in least.items() if k < defs[n][2]}
            if not holes:
                continue
            print("  %-28s %d function(s) called with fewer arguments" % (fn, len(holes)))
            if write:
                # find each stale prototype line and relax it
                for name in sorted(holes):
                    ret, conv, want = defs[name]
                    pat = re.compile(r"^[ \t]*" + re.escape(ret) + r"\s+" + re.escape(conv) + r"\s+"
                                     + re.escape(name) + r"\s*\([^;{\)]*\)\s*;", re.M)
                    text = pat.sub("%s %s %s();" % (ret, conv, name), text)
                open(p, "w", encoding="utf-8", newline="").write(text)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))