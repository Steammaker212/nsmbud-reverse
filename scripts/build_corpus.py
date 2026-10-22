"""THE corpus build, in the one order that works.

The steps interact, and running them in the wrong order silently discards the earlier ones. Each
ordering bug found so far:

  * `make_decompiled_corpus.py` REWRITES the 11 region files from decompiled_clean, so any prelude
    include or forward declaration added before it is thrown away. It must run first.
  * `fix_asm_escapes.py` produces the `int32x4_t` typedef that collided with nsmbudx_types.h, so the
    clean tree must be asm-fixed BEFORE the corpus is assembled.
  * `hoist_prototypes.py` inserts declarations at the bottom-up position, so it must run after the
    files exist and after the prelude include, or its insert point is wrong.

Order, therefore:

    1. fix_asm_escapes   on decompiled_clean   (turns __asm into C; must precede assembly)
    2. make_decompiled_corpus                  (writes the 475 .c and the headers)
    3. restructure_includes                    (single type definition, measured include set)
    4. add_prelude                             (#include the prelude in every .c, incl. regions)
    5. gen_data_header                         (typed views of the 233 referenced data labels)
    6. hoist_prototypes                        (forward declarations for later-defined functions)
    7. verify                                  (clang -fsyntax-only on every file)

Running this end to end is the only supported way to rebuild; individual scripts are stages, not
commands.
"""
import os
import subprocess
import sys

REPO = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse"
CLEAN = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\decompiled_clean"
CLANG = r"C:\Program Files\LLVM\bin\clang.exe"
INC = os.path.join(REPO, "decompiled", "include")


def run(label, args):
    print("== %s" % label)
    r = subprocess.run(args, cwd=REPO, capture_output=True, text=True)
    out = (r.stdout or "") + (r.stderr or "")
    for line in out.strip().split("\n")[-4:]:
        if line.strip():
            print("   " + line.strip()[:110])
    if r.returncode != 0:
        print("   EXIT %d" % r.returncode)
    return r.returncode == 0


def verify():
    import glob
    ok = fail = 0
    bad = []
    for root, _, names in os.walk(os.path.join(REPO, "decompiled")):
        if os.path.abspath(root).startswith(os.path.abspath(INC)):
            continue
        for n in names:
            if not n.endswith(".c"):
                continue
            p = os.path.join(root, n)
            r = subprocess.run([CLANG, "-fsyntax-only", "-Wno-everything",
                                "-I", INC, "-ferror-limit=1", p],
                               capture_output=True, text=True)
            if r.returncode == 0:
                ok += 1
            else:
                fail += 1
                for line in (r.stderr or "").split("\n"):
                    if "error:" in line:
                        bad.append((n, line.split("error:", 1)[1].strip()[:80]))
                        break
    print()
    print("== verify: %d / %d parse as C" % (ok, ok + fail))
    from collections import Counter
    c = Counter(b.split("'")[0].strip() for _, b in bad)
    for k, v in c.most_common(8):
        print("   [%3d] %s" % (v, k))
    return ok, fail


def main():
    # 1. asm escapes on the clean tree (idempotent: re-running finds nothing left)
    tmp = os.path.join(os.environ.get("TEMP", "."), "stage1_asm.py")
    src = open(os.path.join(REPO, "scripts", "fix_asm_escapes.py"), encoding="utf-8").read()
    src = src.replace(r'decompiled_all', 'decompiled_clean')
    open(tmp, "w", encoding="utf-8").write(src)
    run("1/6 fix asm escapes", [sys.executable, tmp, "--apply"])

    # 1b. C++-qualified names -> C identifiers, on the clean tree, before the corpus is assembled.
    #     IDA recovered many callees under their Itanium-demangled names, so the pseudo-code says
    #     `StateMgr::changeState(...)`, which is not C: the parser reads it as a declaration and the
    #     whole translation unit fails with "expected identifier or '('". This was 137 files and
    #     18,598 call sites -- by far the largest single cause of unparseable output. It must run
    #     before step 2 because step 2 aggregates the clean tree into the region files.
    #     BOTH source trees need this. make_decompiled_corpus.py reads the 10 aggregate region files
    #     from `decompiled_clean` AND the ~464 per-function files from `decompiled`; fixing only the
    #     first left the per-function files with qualified names, so 257/475 did not move at all.
    CLEAN = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\decompiled_clean"
    PERFN = r"C:\Users\Saif Khan\Downloads\main.idb\.rea"
    run("1b/8 fix qualified names",
        [sys.executable, "scripts/fix_qualified_names.py", CLEAN, "--write"])
    run("1c/8 fix qualified names (per-function)",
        [sys.executable, "scripts/fix_qualified_names.py", PERFN, "--write"])
    # The 10 aggregate region files are re-copied from decompiled_clean on every build (step 2), so a
    # rewrite applied only to the repo copy is undone each time and re-applied each time. Applying it
    # to the SOURCE as well makes the two trees agree and the build converge.
    run("1d/9 array labels (clean tree)",
        [sys.executable, "scripts/fix_array_data_macros.py", CLEAN, "--write"])
    run("1e/9 array labels (per-function)",
        [sys.executable, "scripts/fix_array_data_macros.py", PERFN, "--write"])
    # Duplicate function blocks live in the SOURCE region files, so they are re-copied on every build
    # and re-dropped on every build. Removing them at the source is what makes the build converge.
    run("1f/9 dedupe function blocks (clean tree)",
        [sys.executable, "scripts/dedupe_function_blocks.py", CLEAN, "--write"])
    # modes.c and projectile.c are copied from EXTRA (.rea\decompiled), not from the clean tree, so
    # that is the copy that keeps re-introducing the duplicate. Both sources must be clean.
    run("1g/9 dedupe function blocks (extra tree)",
        [sys.executable, "scripts/dedupe_function_blocks.py",
         os.path.join(PERFN, "decompiled"), "--write"])
    # Multi-argument allocation calls (`__operator_new(48, 0, 4)`) collide with the database prototype
    # for the one-argument symbol. They are the aligned/placement overload, so they get their own
    # name and their own declaration. Must run after fix_qualified_names has produced the base name.
    run("1h/9 operator arity",
        [sys.executable, "scripts/fix_operator_arity.py", CLEAN, "--write"])
    run("1i/9 operator arity (per-function)",
        [sys.executable, "scripts/fix_operator_arity.py", PERFN, "--write"])
    run("1j/9 operator arity (repo tree)",
        [sys.executable, "scripts/fix_operator_arity.py",
         os.path.join(REPO, "decompiled"), "--write"])

    # 2. assemble corpus
    run("2/7 build corpus", [sys.executable, "scripts/make_decompiled_corpus.py"])
    # 2b. the ~369 per-function files live at the ROOT of decompiled/ and are NOT part of the
    #     LAYOUT-driven copy above -- make_decompiled_corpus.py only knows about the 11 region files.
    #     They therefore still carried `StateMgr::execute(...)` and kept their errors. Fixing them in
    #     place took the parse count from 257 to 323; without this step a rebuild reverts that,
    #     because the files are regenerated into decompiled/ by the export, not by this script.
    run("2b/8 fix qualified names (repo tree)",
        [sys.executable, "scripts/fix_qualified_names.py",
         os.path.join(REPO, "decompiled"), "--write"])
    # 2b2. ~50 files had their function signature swallowed by a broken header comment:
    #      `// ---- addr: 0x... */ int __fastcall Foo(int a1)` -- the `/*` had been rewritten to `//`,
    #      so the signature was commented out and the following `{` opened nothing. That one line was
    #      the entire "expected identifier or '('" class, the largest remaining error group.
    run("2b2/9 fix broken signature comments",
        [sys.executable, "scripts/fix_broken_signature_comment.py",
         os.path.join(REPO, "decompiled"), "--write"])
    # 2b3. two region files defined the same function twice. The second banner in each case pointed
    #      INSIDE the function (0x78e6a8 is within the 0x1e0-byte function at 0x78e608), so IDA
    #      returned the containing function and the pseudocode was emitted twice -- "redefinition of
    #      'sub_6078E608'" costs the whole file. Must run after the copy above and BEFORE the label
    #      derivation, so the duplicate's callees do not inflate the data-label set.
    run("2b3/9 dedupe function blocks",
        [sys.executable, "scripts/dedupe_function_blocks.py",
         os.path.join(REPO, "decompiled"), "--write"])
    # 2c. the data-label JSON that gen_data_header.py consumes listed only 233 labels, but the
    #     corpus references 23,704 distinct dword_/unk_/byte_ names. The 23,471 that were never
    #     exported are simply undefined when the header is included -- that is the whole
    #     "use of undeclared identifier 'dword_...'" class. Derive the full set from the corpus,
    #     so it cannot drift out of sync with what the code actually mentions.
    LABELS = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\data_labels_full.json"
    run("2c/8 derive data labels",
        [sys.executable, "scripts/gen_data_labels_from_corpus.py",
         os.path.join(REPO, "decompiled"), LABELS])
    # 3. data header MUST precede restructure: restructure regenerates the prelude, and if
    #    nsmbudx_data.h does not exist yet the prelude cannot reference it. Getting this backwards
    #    silently dropped 31 files (250 -> 219) with no error, because the include still resolved.
    run("3/7 data header", [sys.executable, "scripts/gen_data_header.py"])
    # sub-function declarations: 9 exact signatures + 32,164 unprototyped ones. Must precede
    # restructure too, for the same reason the data header must.
    run("3b/7 subfunc header", [sys.executable, "scripts/gen_subfuncs_header.py"])
    # 3b2. the names NO header declares: 292 nullsub_* stubs (987 call sites), 48 algn_* padding
    #      labels, the _S<n> SIMD pseudo-registers, float slots and 258 rodata string arrays. Must run
    #      AFTER the prototype headers exist, because it consults them to skip anything already
    #      declared -- that check is what keeps it from repeating tier 2's 250 -> 0 failure.
    run("3b2/9 undeclared calls",
        [sys.executable, "scripts/gen_undeclared_calls.py",
         os.path.join(REPO, "decompiled"),
         os.path.join(REPO, "decompiled", "include"),
         os.path.join(REPO, "decompiled", "include", "nsmbudx_undeclared.h"), "--write"])
    # 3c. data labels that are INDEXED (`dword_X[i]`) cannot use the scalar macro -- at that point
    #     the macro is an integer and clang rejects the subscript. The header emits an `arr_` pointer
    #     form for every label; this rewrites only the subscripted uses. Must follow the data header.
    run("3c/9 array data labels",
        [sys.executable, "scripts/fix_array_data_macros.py",
         os.path.join(REPO, "decompiled"), "--write"])
    # 4. one type definition, and the measured include set (also mounts the data header)
    run("4/7 restructure includes", [sys.executable, "scripts/restructure_includes.py"])
    # 5. prelude include in every .c, including the region files just written
    run("5/7 add prelude", [sys.executable, "scripts/add_prelude.py"])
    # 5b. drop conflicting duplicate prototypes. Two distinct functions were named the same
    #     (Pokey__vf15C at 0x2856dc and 0x3835e8, ShellEnemy__vf110 at 0x2725ac and 0x3a1418,
    #     Enemy__beforeExecute at 0x2a1bc8 and 0x40a800), so the header declared each identifier
    #     twice. That is three conflicts, but every .c includes actors.h, so all of them failed.
    for g in ("actors", "systems", "libs", "player", "powerup"):
        hdr = os.path.join(REPO, "decompiled", "include", "%s.h" % g)
        if os.path.exists(hdr):
            run("5b/8 dedupe %s.h" % g,
                [sys.executable, "scripts/dedupe_header_decls.py", hdr, "--write"])
    # 5c. four one-line thunks are DEFINED with `()` -- unspecified arguments -- while libs.h
    #     declares the same name with one parameter. In C those conflict outright, costing the whole
    #     file for a one-call body. Only names the headers declare with exactly one parameter are
    #     touched, so the ~70 other `()` thunks that parse fine are left alone. Must run AFTER the
    #     headers exist (this step) but before the final verify.
    run("5c/9 thunk signatures",
        [sys.executable, "scripts/fix_thunk_signatures.py",
         os.path.join(REPO, "decompiled"),
         "--headers", os.path.join(REPO, "decompiled", "include"), "--write"])
    # 6. forward declarations. This is NEUTRAL for parsing (measured identical with and without)
    #    and is NOT run by default: it inserts thousands of prototypes into every region file for no
    #    compile benefit. Pass --hoist to enable it. Kept as a stage because a reader may want the
    #    declarations, not because they fix anything.
    if "--hoist" in sys.argv:
        run("6/7 hoist prototypes", [sys.executable, "scripts/hoist_prototypes.py"])
    else:
        print("== 6/7 hoist prototypes: SKIPPED (measured neutral; pass --hoist to run)")
    # 7. verify
    verify()


if __name__ == "__main__":
    main()
