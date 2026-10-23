import os, re, sys
ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
SKIP = {"include","recovered","authoritative"}
MARKER = "/* Forward prototypes inserted"
DEF = re.compile(r"(?m)^[ \t]*(?P<ret>[A-Za-z_][\w \t\*]*?(?:\s+__\w+)?)\s+(?P<name>[A-Za-z_]\w*)\s*\((?P<args>[^;{()]*(?:\([^()]*\)[^;{()]*)*)\)\s*\n\s*\{")
IDENT = re.compile(r"\b([A-Za-z_]\w*)\s*\(")

def analyse(text):
    defs = {}
    for m in DEF.finditer(text):
        n = m.group("name")
        if n in ("if","for","while","switch","return","sizeof"): continue
        defs.setdefault(n, (m.start(), m.group("ret").strip()))
    first = {}
    for m in IDENT.finditer(text):
        n = m.group(1)
        if n not in defs or n in first: continue
        ls = text.rfind("\n", 0, m.start()) + 1
        line = text[ls:text.find("\n", m.start())]
        if line.lstrip().startswith(("*","/*","//")): continue
        if re.match(r"\s*[A-Za-z_][\w \t\*]*\s+\**%s\s*\(" % re.escape(n), line): continue
        first[n] = m.start()
    # Emit `()` -- unspecified arguments -- NOT the definition's parameter list. Measuring on libs.c showed the full
    # form makes things worse (609 -> 657 errors): these functions have call sites whose arity disagrees with the
    # definition, and a full prototype re-enables arity checking at every one of them. `()` suppresses that while
    # still giving the name a declared return type, which is what removes the "conflicting types" error. Same
    # reasoning as the corpus's own relax_all_decls.py.
    need = ["%s %s();" % (defs[n][1], n) for n,p in first.items() if p < defs[n][0]]
    return sorted(set(need)), len(defs)

write = "--write" in sys.argv
targets = []
for dp,_,fs in os.walk(ROOT):
    if os.path.basename(dp) in SKIP: continue
    for fn in fs:
        if fn.endswith(".c"): targets.append(os.path.join(dp,fn))
grand = 0
for p in targets:
    t = open(p, encoding="utf-8", errors="replace").read()
    if MARKER in t: continue
    need, nd = analyse(t)
    if not need: continue
    grand += len(need)
    print("  %-46s defs %5d  prototypes %3d" % (os.path.relpath(p, ROOT), nd, len(need)))
    if write:
        lines = t.split("\n")
        inc = [i for i,l in enumerate(lines) if l.startswith("#include")]
        at = (max(inc)+1) if inc else 0
        block = ("\n/* Forward prototypes inserted because these are called before they are defined; an\n"
                 " * implicit `int` declaration would otherwise conflict with the real definition. */\n"
                 + "\n".join(need) + "\n")
        lines.insert(at, block)
        open(p,"w",encoding="utf-8",newline="").write("\n".join(lines))
print("  total: %d" % grand)