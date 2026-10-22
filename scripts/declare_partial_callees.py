"""Declare each file's out-of-file callees OLD-STYLE when the call passes fewer arguments than the definition.

Why old-style rather than the definition's prototype: this is the same mixed-arity situation as in the headers.
A single-function unit such as Player_ctor.c calls

    PlayerBase__PlayerBase(v5);                    1 argument
    definition: PlayerBase__PlayerBase(int a1, int a2, int a3)     3 parameters

Only some arguments are set up at that point in the constructor -- the rest are already in registers from the
caller. Declaring the callee with its full prototype makes the call an error; declaring it `()` accepts any
prefix and passes it through, which is what the ARM code does.

The earlier attempt at this declared the callees with their FULL prototypes and made things worse (463 -> 452),
because nearly every constructor in the corpus delegates with a partial argument list.
"""
import os
import re
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"

DEF = re.compile(r"^[ \t]*(?P<ret>[A-Za-z_][\w \t\*]*?)\b(?P<conv>__\w+)\s+(?P<name>\w+)\s*"
                 r"\((?P<params>[^;{]*?)\)\s*\n[ \t]*\{", re.M | re.S)
CALL = re.compile(r"\b(\w+)\s*\(([^;{}]*?)\)")


def na(s):
    return len([x for x in s.split(",") if x.strip()])


def main(argv):
    write = "--write" in argv
    sigs = {}
    for dp, _, names in os.walk(ROOT):
        if "include" in dp or "authoritative" in dp:
            continue
        for fn in sorted(names):
            if not fn.endswith(".c"):
                continue
            t = open(os.path.join(dp, fn), encoding="utf-8", errors="replace").read()
            for m in DEF.finditer(t):
                sigs.setdefault(m.group("name"),
                                (m.group("ret").strip(), m.group("conv"), m.group("params").strip(),
                                 na(m.group("params"))))

    header_names = set()
    inc = os.path.join(ROOT, "include")
    for fn in os.listdir(inc):
        if fn.endswith(".h"):
            t = open(os.path.join(inc, fn), encoding="utf-8", errors="replace").read()
            for m in re.finditer(r"^[ \t]*[A-Za-z_][\w \t\*]*?__\w+\s+(\w+)\s*\(", t, re.M):
                header_names.add(m.group(1))

    added = 0
    for dp, _, names in os.walk(ROOT):
        if "include" in dp or "authoritative" in dp:
            continue
        for fn in sorted(names):
            if not fn.endswith(".c"):
                continue
            path = os.path.join(dp, fn)
            t = open(path, encoding="utf-8", errors="replace").read()
            defined = {m.group("name") for m in DEF.finditer(t)}
            declared = set(re.findall(r"^[ \t]*[A-Za-z_][\w \t\*]*?__\w+\s+(\w+)\s*\(", t, re.M))
            need = []
            for m in CALL.finditer(t):
                n = m.group(1)
                if n in defined or n in declared or n in header_names:
                    continue
                s = sigs.get(n)
                if not s:
                    continue
                if na(m.group(2)) < s[3] and n not in need:
                    need.append(n)
            if not need:
                continue
            block = ["/* ---- called here with a partial argument list: declared old-style so the call is legal ---- */"]
            for n in sorted(need):
                ret, conv, _, _ = sigs[n]
                block.append("%s %s %s();" % (ret, conv, n))
            block.append("")
            text = "\n".join(block) + "\n"
            anchor = '#include "nsmbudx_prelude.h"\n'
            if anchor in t:
                t = t.replace(anchor, anchor + "\n" + text, 1)
                added += len(need)
                if write:
                    open(path, "w", encoding="utf-8", newline="").write(t)
    print("old-style declarations added: %d (write=%s)" % (added, write))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
