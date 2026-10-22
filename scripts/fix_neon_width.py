"""Point 2-lane NEON helper calls at the 2-lane declaration.

THE DEFECT
----------
`vmin_f32` / `vmax_f32` are declared taking float32x4_t, because most call sites pass a quadword. But
some pass a DOUBLEWORD:

    passing 'float32x2_t' to parameter of incompatible type 'float32x4_t'

C has no overloading, so one name cannot take both. The generator therefore declares a `_v2` variant for
the 2-lane form, and this script routes the narrow call sites to it.

HOW THE WIDTH IS DECIDED
------------------------
Not guessed. The argument's declared type in the same function is read from the local declarations:

    float32x2_t v1;    ->  v1 is narrow
    float32x4_t v2;    ->  v2 is wide

If any argument of a call resolves to float32x2_t, the call takes the `_v2` name. If the type cannot be
resolved -- the argument is a field expression, a call result, or a local with no visible declaration --
the call is LEFT ALONE, and the site will still fail. That is deliberate: renaming on a guess would
produce code that compiles and means the wrong thing, which is worse than code that does not compile.
"""
import os
import re
import sys

HELPERS = ("vmin_f32", "vmax_f32", "vadd_f32", "vsub_f32", "vmul_f32",
           "vminq_f32", "vmaxq_f32")
CALL = re.compile(r"\b(%s)\s*\(" % "|".join(HELPERS))
# a local declaration of the form `float32x2_t name;` or `float32x4_t name;`
DECL = re.compile(r"\b(float32x[24]_t)\s+(\w+)\s*(?:[;,\[])")


def split_args(text, start):
    """Split the argument list beginning just after '(' at index start."""
    depth = 1
    i = start
    cur = []
    out = []
    while i < len(text) and depth:
        ch = text[i]
        if ch == "(":
            depth += 1
        elif ch == ")":
            depth -= 1
            if depth == 0:
                break
        if ch == "," and depth == 1:
            out.append("".join(cur).strip())
            cur = []
        else:
            cur.append(ch)
        i += 1
    out.append("".join(cur).strip())
    return out, i


def transform(text):
    # gather declared widths once for the whole file: name -> 'float32x2_t' / 'float32x4_t'
    widths = {}
    for m in DECL.finditer(text):
        widths.setdefault(m.group(2), set()).add(m.group(1))

    changed = 0
    out = []
    pos = 0
    for m in CALL.finditer(text):
        name = m.group(1)
        if text[max(0, m.start() - 12):m.start()].strip().endswith("float32x") or \
           text[m.end():m.end() + 1] == "(":
            continue
        args, end = split_args(text, m.end())
        narrow = False
        resolved = False
        for a in args:
            ids = re.findall(r"\b([A-Za-z_]\w*)\b", a)
            for ident in ids:
                w = widths.get(ident)
                if w:
                    resolved = True
                    if "float32x2_t" in w:
                        narrow = True
        # only rewrite when the width is known AND narrow
        if not (resolved and narrow):
            continue
        out.append(text[pos:m.start()])
        out.append(name + "_v2")
        out.append(text[m.start() + len(name):m.end()])
        pos = m.end()
        changed += 1
    out.append(text[pos:])
    return "".join(out), changed


def main(argv):
    if len(argv) < 2:
        print("usage: fix_neon_width.py <dir> [--write]")
        return 2
    root, write = argv[1], "--write" in argv
    files = total = 0
    for dp, _, fs in os.walk(root):
        for f in fs:
            if not f.endswith(".c"):
                continue
            p = os.path.join(dp, f)
            with open(p, encoding="utf-8", errors="surrogateescape") as fh:
                text = fh.read()
            new, k = transform(text)
            if k:
                files += 1
                total += k
                if write:
                    with open(p, "w", encoding="utf-8", errors="surrogateescape", newline="") as fh:
                        fh.write(new)
    print("2-lane NEON calls retargeted: %d in %d files%s"
          % (total, files, "" if write else " (dry run)"))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
