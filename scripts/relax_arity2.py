import re, os, sys
# The relaxer anchored on `ret` with a single space, but reader output varies ("int __fastcall ..." vs
# "int *__fastcall ..."). Match the convention and name, ignore the exact return-type spacing.
root = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
DEF = re.compile(r"^[ \t]*(?P<ret>[A-Za-z_][\w \t\*]*?)\b(?P<conv>__\w+)\s+(?P<name>\w+)\s*"
                 r"\((?P<params>[^;{]*?)\)\s*\n[ \t]*\{", re.M | re.S)
CALL = re.compile(r"\b(\w+)\s*\(([^;{}]*?)\)")
PROTO = re.compile(r"^[ \t]*(?P<ret>[A-Za-z_][\w \t\*]*?)\b(?P<conv>__\w+)\s+(?P<name>\w+)\s*"
                   r"\((?P<params>[^;{\)]*)\)\s*;[ \t]*$", re.M)

def np(s):
    return len([x for x in s.split(",") if x.strip()])

for dp, _, fs in os.walk(root):
    if "include" in dp or "authoritative" in dp: continue
    for fn in sorted(fs):
        if not fn.endswith(".c"): continue
        p = os.path.join(dp, fn)
        t = open(p, encoding="utf-8", errors="replace").read()
        defs = {}
        for m in DEF.finditer(t):
            defs.setdefault(m.group("name"), np(m.group("params")))
        least = {}
        for m in CALL.finditer(t):
            n = m.group(1)
            if n in defs:
                k = np(m.group(2))
                if n not in least or k < least[n]: least[n] = k
        # Only relax when the LOWEST call is genuinely the contract. A function that is also called with the
        # full parameter count elsewhere (e.g. __operator_new_array_al(size, heap, align)) must keep its
        # prototype: relaxing it breaks the 3-argument calls. So require that NO call site uses the full arity.
        most = {}
        for m in CALL.finditer(t):
            n = m.group(1)
            if n in defs:
                k = np(m.group(2))
                if n not in most or k > most[n]: most[n] = k
        holes = {n for n, k in least.items() if k < defs[n] and most.get(n, 0) < defs[n]}
        if not holes: continue
        n_fixed = 0
        def repl(m):
            global n_fixed
            if m.group("name") in holes:
                n_fixed += 1
                return "%s %s %s();" % (m.group("ret").strip(), m.group("conv"), m.group("name"))
            return m.group(0)
        new = PROTO.sub(repl, t)
        if n_fixed:
            open(p, "w", encoding="utf-8", newline="").write(new)
            print("  %-26s %d decl(s) relaxed" % (fn, n_fixed))