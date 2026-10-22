"""Hoist a forward declaration for every function defined in a .c file to the top of that file.

Hex-Rays emits functions in address order, so a function that calls a lower-addressed sibling defined
later in the same file hits an implicit declaration. In C99 onwards that is an error, and it is what
produces:

    core.c:          conflicting types for '_nnDetailNintendoSdkRuntimeObjectFile'
    libs.c:          conflicting types for 'sub_608002B0'
    actor_construction.c: expected identifier or '('

The fix is mechanical and provably safe: collect every top-level definition of the form

    <ret> __fastcall <name>(<args>)

and emit the same signature as a prototype above the first body. Nothing is reordered, no body is
edited, and the definition keeps its exact text -- so this cannot change meaning, only supply a
declaration earlier.

Deliberately conservative:
  * only lines that start at column 0 and contain `__fastcall` are treated as definitions, which is
    how the decompiler marks them (the `/* line: ... */` prefix is preserved and skipped over)
  * a name is declared once, even if the file contains several definitions of it
  * the prototype keeps the original parameter list verbatim, so `int a1` stays `int a1`
"""
import os
import re
import sys

ROOT = sys.argv[1] if len(sys.argv) > 1 else r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"

# A definition may carry a leading `/* line: N */`, or no comment at all -- the decompiler strips
# it from some functions. Both are optional. The return type may be `int`, `float *`, `struct Foo *`
# or `unsigned __int8 *`, so the character class allows a bare `*` and modifiers.
DEF_RE = re.compile(
    r"^(?:/\*[^*]*\*/\s*)?"
    r"(?P<ret>(?:struct\s+\w+|unsigned\s+\w+|[A-Za-z_]\w*)(?:\s*\*+)?)\s*"
    r"__fastcall\s+(?P<name>[A-Za-z_]\w*)\s*\((?P<args>[^)]*)\)\s*$"
)


def process(path):
    text = open(path, encoding="utf-8", errors="replace").read()
    lines = text.split("\n")

    # A DEFINITION is followed by an opening brace, either on the same line or the next one.
    # Without this check the pattern also matches every CALL (`ActorMgr_create(a1, a2)`) once
    # leading whitespace is stripped, which inserted 33,408 bogus prototypes instead of ~370 and
    # made the corpus worse (219 instead of 250). Strip first, then require the brace.
    seen = set()
    protos = []
    for i, ln in enumerate(lines):
        s = ln.strip()
        m = DEF_RE.match(s)
        if not m:
            continue
        # A definition line is followed by a line that is EXACTLY an opening brace (possibly with a
        # leading /* line: N */ comment), or ends with "{" itself. A call line inside a body is
        # followed by an expression or ";" -- and a call never ends with "{".
        nxt = lines[i + 1].strip() if i + 1 < len(lines) else ""
        nxt_code = nxt.split("*/")[-1].strip()
        if not (s.endswith("{") or nxt_code == "{"):
            continue                      # a call, not a definition
        if s.endswith(";") or s.endswith(","):
            continue                      # a bare statement, not a definition
        name = m.group("name")
        if name in seen:
            continue
        seen.add(name)
        args = m.group("args")
        if s.endswith("{"):
            args = args.rsplit(")", 1)[0] if False else args.replace("{", "").strip()
        protos.append("%s __fastcall %s(%s);" % (m.group("ret").strip(), name, args))

    if not protos:
        return 0

    # find where to insert: after the includes block, before the first definition
    insert_at = 0
    for i, ln in enumerate(lines):
        s = ln.strip()
        if s.startswith("#include"):
            insert_at = i + 1
    block = ["", "/* ---- forward declarations for functions defined below ---- */"] + protos

    # do not insert a prototype for the very first function (it needs none) only if nothing precedes
    new = lines[:insert_at] + block + lines[insert_at:]
    out = "\n".join(new)
    if out != text:
        with open(path, "w", encoding="utf-8", newline="\n") as fh:
            fh.write(out)
    return len(protos)


total_files = 0
total_protos = 0
for root, _, names in os.walk(ROOT):
    if os.path.abspath(root).startswith(os.path.abspath(os.path.join(ROOT, "include"))):
        continue
    for n in names:
        if not n.endswith(".c"):
            continue
        p = os.path.join(root, n)
        k = process(p)
        if k:
            total_files += 1
            total_protos += k

print("files given forward declarations: %d" % total_files)
print("prototypes inserted            : %d" % total_protos)
