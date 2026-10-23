"""Give header declarations the definition's prototype -- but only where no call site disagrees.

The previous attempt rewrote all 1,909 empty-parameter header declarations at once and made the corpus worse
(2288 -> 2461). The reason is visible in the data: for many of these functions the aggregate files call them with
inconsistent arity. `Level_getArea` has an arity-2 definition but is called with one argument at 20 sites and two
at four. The empty `()` in the header is what lets all of those compile, so tightening it from the definition alone
converts working call sites into errors.

This narrows the change to functions where the evidence is unambiguous: every call site in the corpus passes the
same number of arguments as the definition takes. For those, the header can carry the real prototype with no call
site becoming invalid. Everything else is left as `()` and counted, because the disagreement is a fact about the
corpus that should be reported rather than papered over.

The script measures before and after and genuinely restores the files if the result is not an improvement; an
earlier version reported a revert while leaving them rewritten.
"""
import collections
import os
import re
import subprocess
import sys

CLANG = r"C:\Program Files\LLVM\bin\clang.exe"
ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
INC = os.path.join(ROOT, "include")
FILES = ["libs\\libs.c", "systems\\systems.c", "systems\\states.c", "actors\\actors_b.c",
         "actors\\actor_construction.c", "actors\\actors_a.c", "systems\\core.c",
         "player\\player.c", "powerup\\powerup.c"]


def total_errors():
    n = 0
    for f in FILES:
        path = os.path.join(ROOT, f)
        if not os.path.exists(path):
            continue
        r = subprocess.run([CLANG, "-fsyntax-only", "-Wno-everything", "-ferror-limit=0", "-I", INC, path],
                           capture_output=True, text=True, errors="replace")
        n += r.stderr.count("error:")
    return n


def arity(params):
    p = params.strip()
    if not p or p == "void":
        return 0
    return p.count(",") + 1


def collect():
    """Return definitions and every observed call arity per callee."""
    defs = {}
    calls = collections.defaultdict(collections.Counter)
    for dirpath, _, names in os.walk(ROOT):
        if os.path.basename(dirpath) == "include":
            continue
        for name in names:
            if not name.endswith(".c"):
                continue
            text = open(os.path.join(dirpath, name), encoding="utf-8", errors="replace").read()
            lines = text.split("\n")
            for i in range(len(lines) - 1):
                if lines[i + 1].strip() != "{":
                    continue
                m = re.match(r"^\s*([A-Za-z_][\w \*]*?)\s*\b([A-Za-z_]\w*)\s*\(([^()]*)\)\s*$", lines[i])
                if m and m.group(3).strip():
                    defs.setdefault(m.group(2), m.group(3).strip())
            # call sites: name( ... ) where the name is a known callee candidate
            for m in re.finditer(r"\b([A-Za-z_]\w*)\s*\(([^;{}]*?)\)\s*[;,\)]", text):
                fname, args = m.group(1), m.group(2)
                if fname in ("if", "while", "for", "switch", "return", "sizeof"):
                    continue
                a = args.strip()
                calls[fname][0 if not a else a.count(",") + 1] += 1
    return defs, calls


def main(argv):
    write = "--write" in argv
    before = total_errors()
    defs, calls = collect()
    print("  corpus errors before: %d" % before)
    print("  definitions with prototypes: %d" % len(defs))

    # a function is safe only if every call arity equals its definition arity
    safe = {}
    disagree = 0
    for name, params in defs.items():
        n = arity(params)
        seen = calls.get(name)
        if not seen:
            safe[name] = params        # never called in the corpus: nothing to break
            continue
        if set(seen) == {n}:
            safe[name] = params
        else:
            disagree += 1
    print("  safe to tighten (calls all agree):      %d" % len(safe))
    print("  left as () because callers disagree:    %d" % disagree)

    originals = {}
    changed = 0
    for header in sorted(os.listdir(INC)):
        if not header.endswith(".h"):
            continue
        path = os.path.join(INC, header)
        text = open(path, encoding="utf-8", errors="replace").read()
        originals[path] = text

        def repl(m):
            nonlocal changed
            name = m.group(2)
            if name not in safe:
                return m.group(0)
            changed += 1
            return "%s(%s);" % (m.group(1), safe[name])

        new = re.sub(r"(?m)^([^\n;]*?\b([A-Za-z_]\w*)\s*)\(\s*\)\s*;", repl, text)
        if new != text and write:
            open(path, "w", encoding="utf-8", newline="").write(new)

    print("  declarations rewritten: %d" % changed)
    after = total_errors()
    print("  corpus errors after:  %d  (%+d)" % (after, after - before))

    if after > before:
        if write:
            for path, orig in originals.items():
                open(path, "w", encoding="utf-8", newline="").write(orig)
            print("  regression -- headers restored, corpus now %d" % total_errors())
        else:
            print("  regression -- nothing written")
        return 1
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
