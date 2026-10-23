"""Rebuild the recovered translation units from the database in the ONE order that is known to work.

The individual merge scripts each rewrite their output file from scratch, so running one after another in the wrong
order silently discards earlier repairs. That happened twice: regenerating `recovered_missing.c` dropped the
`arr_` subscript rewrites (597 errors came back at 1,473) and dropped the forward prototypes.

Order matters and is fixed here:

    1. merge_recovered_missing.py --write      regenerate bodies from the database
    2. merge_recovered_stubs.py --write        regenerate the stub unit
    3. insert_forward_prototypes.py --write    prototypes for call-before-definition
    4. use_array_macro_forms.py --write        `dword_X[i]` -> `arr_dword_X[i]`
    5. add_vtable_members.py --write           `vtable` at offset 0 on the blobs that need it

Steps 3-5 are idempotent and only touch what the compiler currently rejects, so re-running this script is safe.

Each step is measured before and after, and the run aborts loudly if the total gets WORSE, because every regression so
far was caused by a repair that compiled differently than expected rather than by the data changing.
"""
import os
import subprocess
import sys

REPO = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse"
SCRIPTS = os.path.join(REPO, "scripts")
DEC = os.path.join(REPO, "decompiled")
INC = os.path.join(DEC, "include")
CLANG = r"C:\Program Files\LLVM\bin\clang.exe"
TUS = [os.path.join(DEC, "recovered", f)
       for f in ("recovered_named.c", "recovered_missing.c", "recovered_stubs.c")]

STEPS = [
    ("merge_recovered_missing.py", ["--write"]),
    ("merge_recovered_stubs.py", ["--write"]),
    ("insert_forward_prototypes.py", ["--write"]),
    ("use_array_macro_forms.py", ["--write"]),
    ("add_vtable_members.py", ["--write"]),
]


def errors(path):
    r = subprocess.run([CLANG, "-fsyntax-only", "-Wno-everything", "-ferror-limit=0", "-I", INC, path],
                       capture_output=True, text=True, errors="replace")
    return r.stderr.count("error:")


def total():
    return sum(errors(t) for t in TUS if os.path.exists(t))


def main(argv):
    check = "--check" in argv
    before = total()
    print("  errors before: %d" % before)
    if check:
        return 0
    for script, args in STEPS:
        p = os.path.join(SCRIPTS, script)
        if not os.path.exists(p):
            print("  MISSING step: %s" % script)
            continue
        subprocess.run([sys.executable, p] + args, capture_output=True, text=True, errors="replace")
        print("  ran %-34s errors now %d" % (script, total()))
    after = total()
    print("  errors after:  %d  (%+d)" % (after, after - before))
    if after > before:
        print("  REGRESSION: the pipeline made things worse; inspect which step did it.")
        return 1
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
