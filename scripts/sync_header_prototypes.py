"""Give header declarations the same prototype as the function's definition.

The headers were generated with empty parameter lists -- `int __fastcall Level_getArea();` -- while the definitions
in the aggregate files have real prototypes. An empty list in C means "unspecified arguments", so every call
compiles, but the two disagree and clang reports the call sites as argument-count errors against whichever
declaration it saw first.

This copies the definition's parameter list into the header. It only touches a declaration when the function has a
definition immediately followed by `{`, so the prototype is read from code, not guessed. Return types are left
alone: a mismatch there is a separate error class and changing two things at once would make the measurement
ambiguous.

Every rewrite is followed by a corpus measurement, and the script reverts entirely if the total does not improve.
"""
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


def collect_definitions():
    """name -> (return_type, params) from `... name(params)` followed by `{`."""
    defs = {}
    for dirpath, _, names in os.walk(ROOT):
        if os.path.basename(dirpath) == "include":
            continue
        for name in names:
            if not name.endswith(".c"):
                continue
            lines = open(os.path.join(dirpath, name), encoding="utf-8", errors="replace").read().split("\n")
            for i in range(len(lines) - 1):
                if lines[i + 1].strip() != "{":
                    continue
                m = re.match(r"^\s*([A-Za-z_][\w \*]*?)\s*\b([A-Za-z_]\w*)\s*\(([^()]*)\)\s*$", lines[i])
                if not m:
                    continue
                params = m.group(3).strip()
                if not params:
                    continue
                # keep the first sighting; a function may appear in several aggregates with identical text
                defs.setdefault(m.group(2), params)
    return defs


def main(argv):
    write = "--write" in argv
    before = total_errors()
    defs = collect_definitions()
    print("  corpus errors before: %d" % before)
    print("  definitions with prototypes: %d" % len(defs))

    changed = 0
    details = []
    originals = {}
    for header in sorted(os.listdir(INC)):
        if not header.endswith(".h"):
            continue
        path = os.path.join(INC, header)
        text = open(path, encoding="utf-8", errors="replace").read()
        orig = text
        originals[path] = orig

        def repl(m):
            nonlocal changed
            name = m.group(2)
            if name not in defs:
                return m.group(0)
            params = defs[name]
            changed += 1
            details.append((header, name, params))
            return "%s(%s);" % (m.group(1), params)

        text = re.sub(r"(?m)^([^\n;]*?\b([A-Za-z_]\w*)\s*)\(\s*\)\s*;", repl, text)
        if text != orig and write:
            open(path, "w", encoding="utf-8", newline="").write(text)

    print("  declarations to give prototypes: %d" % changed)
    after = total_errors()
    print("  corpus errors after:  %d  (%+d)" % (after, after - before))
    for h, n, p in details[:8]:
        print("    %-14s %-30s (%s)" % (h, n, p[:48]))

    if after >= before:
        # Restore every header that was modified. An earlier version of this script reported the revert but left
        # the files rewritten, so the corpus stayed regressed while the log claimed otherwise -- measure after
        # restoring, not before.
        if write:
            for path, orig in originals.items():
                open(path, "w", encoding="utf-8", newline="").write(orig)
            restored = total_errors()
            print("  not an improvement -- headers restored, corpus now %d" % restored)
            if restored != before:
                print("  WARNING: restore did not return to the baseline")
        else:
            print("  not an improvement -- nothing written (dry run)")
        return 1
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
