"""Make forward declarations agree with the definition in the same file -- single pass, linear time.

Symptom this fixes:

    player.c:53    int *__fastcall sub_60787B8C(int a1, int a2, int a3);           <- stale
    player.c:3206  int *__fastcall sub_60787B8C(int a1, unsigned int a2, int a3)   <- definition

They differ only in a2's type, but clang reports "conflicting types" and the whole unit fails.

The first version of this script re-scanned and rewrote the whole file once per function, which is quadratic:
on a 1.1 MB player.c with ~900 definitions it had to be killed after 10 minutes. This version reads each file
once, collects every definition, then rewrites declarations in a single pass.

Only declarations whose parameter COUNT matches the definition are rewritten, so a genuine arity disagreement
stays visible instead of being silently papered over.
"""
import os
import re
import sys

DEF = re.compile(r"^[ \t]*(?P<ret>[A-Za-z_][\w \t\*]*?)\b(?P<conv>__\w+)\s+(?P<name>\w+)\s*"
                 r"\((?P<params>[^;{]*?)\)\s*\n[ \t]*\{", re.M | re.S)

DECL = re.compile(r"^[ \t]*(?P<ret>[A-Za-z_][\w \t\*]*?)\b(?P<conv>__\w+)\s+(?P<name>\w+)\s*"
                  r"\((?P<params>[^;{\)]*)\)\s*;", re.M)


def nparams(s):
    return len([x for x in s.split(",") if x.strip()])


def norm(s):
    return " ".join(s.split())


def process(text):
    defs = {}
    for m in DEF.finditer(text):
        name = m.group("name")
        defs.setdefault(name, (norm(m.group("ret")), m.group("conv"), norm(m.group("params"))))

    changed = 0
    out = []
    last = 0
    for m in DECL.finditer(text):
        name = m.group("name")
        if name not in defs:
            continue
        ret, conv, dparams = defs[name]
        if nparams(dparams) != nparams(m.group("params")):
            continue
        new = "%s %s %s(%s);" % (ret, conv, name, dparams)
        old = m.group(0)
        if norm(old) == norm(new):
            continue
        out.append(text[last:m.start()])
        out.append(new)
        last = m.end()
        changed += 1
    out.append(text[last:])
    return "".join(out), changed


def main(argv):
    write = "--write" in argv
    root = argv[argv.index("--all") + 1] if "--all" in argv else None
    if root is None:
        path = argv[1]
        with open(path, encoding="utf-8", errors="replace") as fh:
            text = fh.read()
        new, n = process(text)
        print("%s: %d declaration(s) synchronised" % (os.path.basename(path), n))
        if write and n:
            with open(path, "w", encoding="utf-8", newline="") as fh:
                fh.write(new)
        return 0

    total = 0
    files = 0
    for dirpath, _, names in os.walk(root):
        if "include" in dirpath or "authoritative" in dirpath:
            continue
        for fn in sorted(names):
            if not fn.endswith(".c"):
                continue
            path = os.path.join(dirpath, fn)
            with open(path, encoding="utf-8", errors="replace") as fh:
                text = fh.read()
            new, n = process(text)
            if n:
                files += 1
                total += n
                print("  %-42s %d decl(s)" % (fn, n))
                if write:
                    with open(path, "w", encoding="utf-8", newline="") as fh:
                        fh.write(new)
    print("\nfiles: %d, declarations synchronised: %d (write=%s)" % (files, total, write))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))