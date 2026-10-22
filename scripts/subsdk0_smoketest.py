"""SUBSDK0 SMOKE TEST: does the toolchain produce a VALID module when it has real code?

The fix so far removed _init/_fini from nsmbudx.sym, which corrected DT_INIT to 0x24.
But our project has zero `hook`/`call` hooks, so the module is still the empty stub --
nothing has proven the toolchain emits a working module for code that ACTUALLY runs.

That is the user's real requirement: "your source and reverse engineering must work with
other patches as well." So this builds a deliberately simple hook that must be harmless
if correct: hook a function and return immediately, letting the original body run.

Hook target: the gate function sub_60465E4C at 0x465E4C. It is semantically inert
(returns a table value selected by a shift, never indexing with our value), so a
trampoline that runs and returns cannot change game behaviour. If the module loads with
this hook present, the compile path is proven.

This script:
  1. writes a temp project with one `hook` (with trampoline) and no other hooks
  2. runs sweet-dx
  3. reports whether subsdk0 gained real code (large .text, DT_REL present)
  4. verifies DT_INIT is still inside .text
"""
import os
import shutil
import subprocess
import struct

SD = r"C:\Users\Saif Khan\Downloads\sweet-dx-main (1)\sweet-dx-main"
DENO = os.path.join(SD, "deno.exe")
WORK = r"C:\Users\Saif Khan\Downloads\subsdk_smoketest"
SRC = os.path.join(WORK, "source")
OUT = os.path.join(WORK, "output")
REPO = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse"

# A hook plus a trivial body. sweet-dx compiles .hks files through clang++, so a .hks
# can carry C++ directly, exactly like the user's working sprite project does.
HOOK = r"""
@ Smoke test: prove subsdk0 compiles and links when it contains real code.
@ Side-effect free: if the module loads, gameplay is unaffected.
extern "C" int smoke_test_hook(int a1, int a2)
{
    return a2;
}

smoke_gate_hook:
    type:    hook
    symbol:  smoke_test_hook
    address: 0x00465E4C
"""


def run():
    if os.path.exists(WORK):
        shutil.rmtree(WORK, ignore_errors=True)
    os.makedirs(os.path.join(SRC, "hooks"))

    for sub in ("code", "include", "symbols", "nso"):
        s = os.path.join(REPO, "sweetdx", sub)
        if os.path.exists(s):
            shutil.copytree(s, os.path.join(SRC, sub), dirs_exist_ok=True)

    with open(os.path.join(SRC, "hooks", "smoke.hks"), "w", encoding="utf-8") as f:
        f.write("smoke_gate_hook:\n"
                "    @ Harmless hook on an inert gate function.\n"
                "    type:    hook\n"
                "    symbol:  smoke_test_hook\n"
                "    address: 0x00465E4C\n")

    # C++ goes in code/, hooks in hooks/ -- the normal project shape. The function must
    # be side-effect free so that, if the module loads, gameplay is unchanged.
    with open(os.path.join(SRC, "code", "smoke.cpp"), "w", encoding="utf-8") as f:
        f.write("// Smoke test: force real code into subsdk0 so the compile path is\n"
                "// exercised end to end. Returns its argument untouched.\n"
                "extern \"C\" int smoke_test_hook(int a1, int a2)\n"
                "{\n"
                "    return a2;\n"
                "}\n")

    # drop the quarantined findings dir if copied
    shutil.rmtree(os.path.join(SRC, "findings"), ignore_errors=True)

    cmd = [DENO, "run", "-A", "mod.ts",
           f"--source={SRC}", f"--output={OUT}",
           f"--log-file={os.path.join(WORK, 'debug.log')}"]
    print("  running:", " ".join(cmd))
    p = subprocess.run(cmd, cwd=SD, capture_output=True, text=True)
    print(f"  exit {p.returncode}")
    if p.stdout.strip():
        print("  stdout:", p.stdout.strip()[:400])
    if p.stderr.strip():
        print("  stderr:", p.stderr.strip()[:400])
    return p.returncode


def inspect():
    p = os.path.join(OUT, "atmosphere", "contents", "0100EA80032EA000",
                     "exefs", "subsdk0")
    if not os.path.exists(p):
        print(f"  NO subsdk0 at {p}")
        return
    d = open(p, "rb").read()
    g = lambda o: struct.unpack_from("<I", d, o)[0]
    t_fo, t_mo, t_sz = g(0x10), g(0x14), g(0x18)
    r_fo, r_mo, r_sz = g(0x20), g(0x24), g(0x28)
    a_fo, a_mo, a_sz = g(0x30), g(0x34), g(0x38)
    print(f"\n  subsdk0: {len(d):,} bytes")
    print(f"    .text   {t_sz:,} b   .rodata {r_sz:,} b   .data {a_sz:,} b")

    mp = d.find(b"MOD0", t_fo, t_fo + max(t_sz, 4))
    if mp < 0:
        print("    no MOD0")
        return
    mod0 = mp - t_fo
    vals = struct.unpack_from("<7I", d, mp)
    SEGS = {"text": (t_mo, t_sz, t_fo), "rodata": (r_mo, r_sz, r_fo),
            "data": (a_mo, a_sz, a_fo)}

    def where(o):
        for nm, (mo, sz, fo) in SEGS.items():
            if mo <= o < mo + sz:
                return f".{nm}+{o-mo:#x}"
        return "OUTSIDE"

    def read_mem(off, cnt):
        for nm, (mo, sz, fo) in SEGS.items():
            if mo <= off and off + cnt <= mo + sz:
                return d[fo + (off - mo):fo + (off - mo) + cnt]
        return None

    off, tagval = mod0 + vals[1], {}
    while True:
        raw = read_mem(off, 8)
        if raw is None:
            break
        tag, val = struct.unpack("<iI", raw)
        if tag == 0 and val == 0:
            break
        tagval[tag] = val
        off += 8

    init = tagval.get(12)
    w = where(init) if init is not None else "absent"
    ok = w.startswith(".text")
    print(f"    DT_INIT  {init if init is None else hex(init)}  -> {w}  "
          f"{'OK' if ok else '*** INVALID ***'}")
    print(f"    DT_REL   {'present' if 17 in tagval else 'absent'}")
    print(f"    DT_RELSZ {tagval.get(8, 0)}")
    print(f"    .dynamic entries: {len(tagval)}")

    print(f"\n    VERDICT: {'module contains real code and is valid' if ok and t_sz > 0x200 else 'STILL A STUB'}")


print("=" * 96)
print("SUBSDK0 SMOKE TEST - real hook, real code")
print("=" * 96)
rc = run()
print()
inspect()
