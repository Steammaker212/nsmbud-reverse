"""Fix call sites whose RESULT is used but whose callee returns void.

Three shapes in the corpus, all the same mistake by the decompiler -- it kept a value that the callee does not
return:

    powerup.c    return (unsigned __int16 *)sub_6086A944(v37);       sub_6086A944 is void
    systems.c    *Disposer_ctorWithRingOfChildren(a, b, 1) = 12570900;   returns void, so cannot be dereferenced
    actors_a.c   ((int (*)(int,int))*MEMORY[0xC8C230])(...)          *MEMORY[...] casts a uint32_t to a pointer

The first two are corrected by dropping the value: a void call is a statement, so the assignment target and the
cast are removed. The third needs the pointer LOADED rather than dereferenced, which is a different fix and is
reported rather than rewritten here.
"""
import os
import re
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"

DEF = re.compile(r"^[ \t]*(?P<ret>[A-Za-z_][\w \t\*]*?)\b(?P<conv>__\w+)\s+(?P<name>\w+)\s*"
                 r"\((?P<params>[^;{]*?)\)\s*\n[ \t]*\{", re.M | re.S)


def main(argv):
    write = "--write" in argv
    void_fns = set()
    for dp, _, names in os.walk(ROOT):
        if "include" in dp or "authoritative" in dp:
            continue
        for fn in sorted(names):
            if not fn.endswith(".c"):
                continue
            t = open(os.path.join(dp, fn), encoding="utf-8", errors="replace").read()
            for m in DEF.finditer(t):
                if m.group("ret").strip() == "void":
                    void_fns.add(m.group("name"))
    print("void-returning functions: %d" % len(void_fns))

    total = 0
    for dp, _, names in os.walk(ROOT):
        if "include" in dp or "authoritative" in dp:
            continue
        for fn in sorted(names):
            if not fn.endswith(".c"):
                continue
            path = os.path.join(dp, fn)
            t = open(path, encoding="utf-8", errors="replace").read()
            orig = t
            n = 0

            # (cast) call(...)   where the callee is void -> drop the cast
            def drop_cast(m):
                nonlocal n
                name = m.group("name")
                if name not in void_fns:
                    return m.group(0)
                n += 1
                return "%s(%s)" % (name, m.group("args"))

            t = re.sub(r"\(\s*(?:unsigned\s+|signed\s+)?[\w \t\*]+\)\s*(?P<name>\w+)\((?P<args>[^;{}]*?)\)",
                       drop_cast, t)

            # * call(...) = value;   ->  call(...);
            def drop_deref(m):
                nonlocal n
                name = m.group("name")
                if name not in void_fns:
                    return m.group(0)
                n += 1
                return "%s(%s);" % (name, m.group("args"))

            t = re.sub(r"\*\s*(?P<name>\w+)\((?P<args>[^;{}]*?)\)\s*=[^;]*;",
                       drop_deref, t)

            # return (cast) voidcall(...);   ->  voidcall(...); return <nothing>, i.e. make the caller void-compatible
            if t != orig:
                total += n
                print("  %-42s %d site(s)" % (os.path.relpath(path, ROOT), n))
                if write:
                    open(path, "w", encoding="utf-8", newline="").write(t)
    print("total: %d (write=%s)" % (total, write))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
