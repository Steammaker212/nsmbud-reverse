"""Insert only the forward declarations a region file actually needs.

THE DEFECT
----------
In an aggregated region file the functions appear in address order, but the call graph does not respect
that order. libs.c calls sub_608002B0 at line 74, and sub_608002B0's definition begins at line 82:

    sub_608002B0(a1);          /* implicit declaration here */
    ...
    float *__fastcall sub_608002B0(int a1)   /* conflicting definition here */

C99 reads the first as an implicit `int f()` declaration; the later definition contradicts it and clang
reports "conflicting types". systems/core.c and libs/... have the same shape.

WHY hoist_prototypes.py IS NOT THE ANSWER
-----------------------------------------
That script inserts a prototype for EVERY function into every file -- 33,474 declarations -- and was
measured neutral (434 before, 434 after). Volume is the problem: with thousands of unprototyped
declarations in the translation unit, the ones that matter are lost among them and can themselves
conflict.

WHAT THIS DOES INSTEAD
----------------------
Two passes over one file:
  1. record every function DEFINITION and the line it starts on;
  2. walk the file in order, and whenever a recorded name is CALLED before its definition line, note
     that name.
Then insert one prototype line for each such name, immediately after the include block. Nothing else is
touched, and in the common case a file needs zero or a handful.
"""
import os
import re
import sys

# `ret __fastcall NAME(args)` on its own line, followed by a line that is exactly `{`.
DEF = re.compile(r"^(?P<ret>[A-Za-z_][\w \t\*]*?)\b(?P<name>\w+)\((?P<args>[^;]*)\)[ \t]*$")
PRE = re.compile(r"^\s*(?:/\*\s*line:\s*\d+(?:,\s*address:\s*0x[0-9a-fA-F]+)?\s*\*/\s*)?")
INCLUDE = re.compile(r'^#include\b')


def strip_marker(line):
    """Drop the `/* line: N */` prefix the export puts on every source line."""
    return PRE.sub("", line, count=1)


def declared_in_headers(headers_dir):
    """Names that any generated header already declares, with their real signatures."""
    names = set()
    if not headers_dir or not os.path.isdir(headers_dir):
        return names
    for f in os.listdir(headers_dir):
        if not f.endswith(".h"):
            continue
        with open(os.path.join(headers_dir, f), encoding="utf-8", errors="replace") as fh:
            text = fh.read()
        names.update(re.findall(r"\b__fastcall\s+(\w+)\s*\(", text))
        names.update(re.findall(r"^#define\s+(\w+)", text, re.M))
    return names


def process(path, write, headers=None):
    with open(path, encoding="utf-8", errors="surrogateescape") as fh:
        lines = fh.read().splitlines(True)

    # pass 1: definitions
    defs = {}
    for i in range(len(lines) - 1):
        body = strip_marker(lines[i]).rstrip()
        if not body.endswith(")"):
            continue
        m = DEF.match(body)
        if not m:
            continue
        if strip_marker(lines[i + 1]).strip() != "{":
            continue
        defs[m.group("name")] = i

    if not defs:
        return 0, []

    # pass 2: calls that precede the definition.
    #
    # Must be indexed, not a nested loop. The obvious `for lines: for defs:` form is O(lines x defs)
    # and these files carry ~6,000 definitions and ~50,000 lines each, so it ran for over ten minutes
    # without finishing. Collecting every call-shaped identifier ONCE per line and intersecting with
    # the definition table is linear.
    #
    # A single-function file is skipped entirely. Its one occurrence of the name is the definition
    # itself, and "the call precedes the definition" is trivially false -- but the naive scan sees the
    # name on the definition LINE and reports it, producing a prototype of a function that is already
    # being defined.
    if len(defs) < 2:
        return 0, []

    CALLISH = re.compile(r"\b([A-Za-z_]\w*)\s*\(")
    needed = []
    seen = set()
    # A call INSIDE the function's own body is recursion, not a forward reference. The naive scan
    # cannot tell the difference, and here it was actively harmful: __operator_delete is called
    # recursively hundreds of times inside its own body, the first such call was taken as "called
    # above its definition", and a prototype was synthesised from an inline call expression --
    # `_DWORD *__fastcall __operator_delete(void *a1)` -- which contradicts both libs.h's real
    # declaration and the definition. Track which definition we are inside and skip those.
    #
    # `inside` is the name of the definition whose body we are currently in. An earlier version set
    # `cur_def` on the first definition AND then `break`-ed out of the loop entirely, so the whole
    # file was inspected only up to its first function and nothing was ever reported. That is why the
    # tool kept printing "0 in 0 files" while libs.c plainly called sub_608002B0 above its definition.
    inside = None
    depth = 0
    for i, raw in enumerate(lines):
        body = strip_marker(raw)
        dm = DEF.match(body.rstrip())
        if dm and i + 1 < len(lines) and strip_marker(lines[i + 1]).strip() == "{":
            inside = dm.group("name")
            depth = 0
        for m in CALLISH.finditer(body):
            name = m.group(1)
            defline = defs.get(name)
            if defline is None or i >= defline or name in seen:
                continue
            if name == inside:
                continue
            needed.append(name)
            seen.add(name)
        if inside is not None:
            depth += body.count("{") - body.count("}")
            if depth <= 0 and "}" in body:
                inside = None

    if not needed:
        return 0, []

    # rebuild the prototype text.
    #
    # The signature is taken from the DEFINITION LINE only when that line is a clean signature.
    # Inferring it from a call expression is what produced `_DWORD *__fastcall __operator_delete(void *a1)`
    # -- a prototype synthesised out of an inline recursive call, contradicting the real declaration.
    # `DEF` only matches a line that is `ret __fastcall NAME(args)` followed by `{`, so a match here is
    # a real signature; anything else is dropped rather than guessed.
    protos = []
    already = declared_in_headers(headers)
    # Also treat anything already declared IN THIS FILE's preamble as satisfied. Without this the
    # script is not idempotent: it re-inserts the same 980 prototypes on every run, so the build never
    # converges and the file grows by ~1000 lines each time.
    in_file = set()
    first_def = min(defs.values())
    for raw in lines[:first_def]:
        m = re.match(r"^\s*(?:[A-Za-z_][\w \t\*]*?)\b(\w+)\s*\([^;]*\)\s*;\s*$",
                     strip_marker(raw))
        if m:
            in_file.add(m.group(1))
    for name in needed:
        if name in already or name in in_file:
            # The header already carries the authoritative signature (from the database), or this file
            # already declares it above. Adding a second, locally-derived one is how a forward
            # declaration ends up contradicting the real prototype -- which is what broke libs.c.
            continue
        i = defs[name]
        m = DEF.match(strip_marker(lines[i]).rstrip())
        if not m:
            continue
        ret, args = m.group("ret"), m.group("args")
        protos.append("%s%s(%s);\n" % (ret, name, args))

    # insert after the last #include
    insert_at = 0
    for i, raw in enumerate(lines[: defs[min(defs, key=lambda k: defs[k])]]):
        if INCLUDE.match(raw):
            insert_at = i + 1
    block = ["\n", "/* ---- forward declarations: these are called above where they are defined ---- */\n"]
    block += protos
    new = lines[:insert_at] + block + lines[insert_at:]

    if write:
        with open(path, "w", encoding="utf-8", errors="surrogateescape", newline="") as fh:
            fh.write("".join(new))
    return len(protos), needed


def main(argv):
    if len(argv) < 2:
        print("usage: add_forward_decls.py <dir> [--write]")
        return 2
    root, write = argv[1], "--write" in argv
    headers = None
    if "--headers" in argv:
        headers = argv[argv.index("--headers") + 1]
    files = total = 0
    print("declared in headers: %d" % len(declared_in_headers(headers)))
    for dp, _, fs in os.walk(root):
        for f in fs:
            if not f.endswith(".c"):
                continue
            p = os.path.join(dp, f)
            n, needed = process(p, write, headers)
            if n:
                files += 1
                total += n
                print("  %s: %d (%s)" % (f, n, ", ".join(sorted(needed)[:6])))
    print("forward declarations added: %d in %d files%s"
          % (total, files, "" if write else " (dry run)"))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
