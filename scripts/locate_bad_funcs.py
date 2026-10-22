import os, re, sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
FUNC_START = re.compile(r"^[ \t]*[A-Za-z_][\w \t\*]*?__\w+\s+\w+\s*\([^;{]*\)\s*$", re.M)

def func_braces(path):
    """Per-function brace balance: a function runs from its signature to the next signature."""
    src = open(path, encoding="utf-8", errors="replace").read()
    starts = [m.start() for m in FUNC_START.finditer(src)]
    out = []
    for k, s in enumerate(starts):
        e = starts[k + 1] if k + 1 < len(starts) else len(src)
        body = src[s:e]
        # strip comments and literals so braces inside them do not count
        body = re.sub(r"/\*.*?\*/", "", body, flags=re.S)
        body = re.sub(r"//[^\n]*", "", body)
        body = re.sub(r'"(?:\\.|[^"\\])*"', '""', body)
        body = re.sub(r"'(?:\\.|[^'\\])*'", "''", body)
        d = body.count("{") - body.count("}")
        if d != 0:
            line = src[:s].count("\n") + 1
            m = re.search(r"__\w+\s+(\w+)\s*\(", src[s:s + 200])
            out.append((line, m.group(1) if m else "?", d))
    return out

for fn in ["actors/actor_construction.c", "actors/actors_a.c", "actors/actors_b.c", "libs/libs.c",
           "powerup/powerup.c", "systems/core.c", "systems/states.c"]:
    path = os.path.join(ROOT, fn.replace("/", os.sep))
    bad = func_braces(path)
    print("=== %s : %d function(s) with unbalanced braces ===" % (fn, len(bad)))
    for line, name, d in bad[:6]:
        print("   line %6d  %-34s depth %+d" % (line, name, d))