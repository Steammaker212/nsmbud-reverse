"""Check why relax_undersupplied reports relaxations but changes nothing."""
import os
import re

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
INC = os.path.join(ROOT, "include")

DEF = re.compile(r"^[ \t]*(?P<ret>[A-Za-z_][\w \t\*]*?)\b(?P<conv>__\w+)\s+(?P<name>\w+)\s*"
                 r"\((?P<params>[^;{]*?)\)\s*\n[ \t]*\{", re.M | re.S)
PROTO = re.compile(r"^[ \t]*(?P<ret>[A-Za-z_][\w \t\*]*?)\b(?P<conv>__\w+)\s+(?P<name>\w+)\s*"
                   r"\((?P<params>[^;{\)]*)\)\s*;(?P<tail>[^\n]*)", re.M)
CALL = re.compile(r"\b(\w+)\s*\(([^;{}]*?)\)")


def nargs(s):
    return len([x for x in s.split(",") if x.strip()])


defs, least, most = {}, {}, {}
for dp, _, names in os.walk(ROOT):
    if "include" in dp or "authoritative" in dp:
        continue
    for fn in sorted(names):
        if not fn.endswith(".c"):
            continue
        t = open(os.path.join(dp, fn), encoding="utf-8", errors="replace").read()
        for m in DEF.finditer(t):
            defs.setdefault(m.group("name"), nargs(m.group("params")))
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

targets = {n for n, k in least.items() if k < defs[n] and most.get(n, 0) < defs[n]}
print("targets: %d" % len(targets))
name = "sead__HeapMgr__setCurrentHeap_"
print("%s: in targets=%s  def=%s least=%s most=%s" %
      (name, name in targets, defs.get(name), least.get(name), most.get(name)))

text = open(os.path.join(INC, "libs.h"), encoding="utf-8").read()
ms = list(PROTO.finditer(text))
print("proto matches in libs.h: %d" % len(ms))
for m in ms:
    if m.group("name") == name:
        print("  matched: %r" % m.group(0)[:100])
        print("  params : %r" % m.group("params"))
        break
else:
    print("  NOT matched by PROTO at all")
