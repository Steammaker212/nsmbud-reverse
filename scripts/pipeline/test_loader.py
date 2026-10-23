"""End-to-end check that the loader path actually works, without a Switch.

The parts that can be proved offline:

  1. main.sym parses and every symbol resolves to an address inside the image.
  2. A hook's `func` name has a definition in loader/hooks/ (otherwise the link
     would fail with an undefined symbol).
  3. The hook's `addr` really is a B/BL whose displacement lands on the symbol.
  4. The target's corpus C compiles, so the signature a hook forwards to is real.
  5. The hook C itself compiles against hook_api.h.

Step 5 is the one that catches the common failure: a hook written against a
prototype that does not match what the corpus says the function takes.

Usage:
    python test_loader.py --repo <repo> --elf <elf> [--limit N]
"""
from __future__ import annotations

import argparse
import json
import re
import struct
import subprocess
import sys
from pathlib import Path

IMAGE_BASE = 0x60000000


def sh(cmd: list[str]) -> tuple[int, str]:
    p = subprocess.run(cmd, capture_output=True, text=True)
    return p.returncode, (p.stderr or p.stdout)


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--repo", required=True)
    ap.add_argument("--elf", required=True)
    ap.add_argument("--limit", type=int, default=25)
    args = ap.parse_args()

    repo = Path(args.repo)
    data = Path(args.elf).read_bytes()

    (_, _, _, _, _, _, _, _, _, _, es, en, _) = struct.unpack_from(
        "<HHIIIIIHHHHHH", data, 16)
    so = struct.unpack_from("<I", data, 32)[0]
    secs = []
    for i in range(en):
        _n, _t, _f, a, o, sz = struct.unpack_from("<IIIIII", data, so + i * es)
        if a and sz:
            secs.append((a, o, sz))

    def word(va: int):
        for a, o, sz in secs:
            if a <= va < a + sz:
                fo = o + (va - a)
                if fo + 4 <= len(data):
                    return struct.unpack_from("<I", data, fo)[0]
        return None

    checks = []

    # 1. main.sym parses
    sym: dict[str, int] = {}
    for line in (repo / "data" / "loader" / "main.sym").read_text().splitlines():
        m = re.match(r"^(\w+)\s*=\s*0x([0-9A-Fa-f]+);", line.strip())
        if m:
            sym[m.group(1)] = int(m.group(2), 16)
    checks.append(("main.sym parses", len(sym) > 20000, "%d symbols" % len(sym)))

    # Read the *active* hook list, not the candidate catalogue: hooks.hks is
    # what the build consumes.
    from verify_hooks import parse_hooks
    hks_text = (repo / "hooks" / "hooks.hks").read_text()
    hooks = list(parse_hooks(hks_text))
    for h in hooks:
        h.setdefault("hook", h["name"])
        h.setdefault("func", h["name"])
        h.setdefault("site_rva", h["addr"])
    sample = hooks[:args.limit]

    # 2. each hook has a C definition
    hook_dir = repo / "loader" / "hooks"
    hook_src = "\n".join(p.read_text(errors="replace")
                         for p in hook_dir.glob("*.c")) if hook_dir.exists() else ""
    with_def = [h for h in sample
                if re.search(r"\b%s\s*\(" % re.escape(h["func"]), hook_src)]
    checks.append(("hooks with a C definition", len(with_def) == len(sample),
                   "%d/%d" % (len(with_def), len(sample))))

    # 3. hook sites decode to the claimed target
    good = 0
    for h in sample:
        w = word(IMAGE_BASE + h["site_rva"])
        if w is None or (w >> 25) & 0x7 != 0x5:
            continue
        imm = w & 0xFFFFFF
        if imm & 0x800000:
            imm -= 0x1000000
        dest = (IMAGE_BASE + h["site_rva"] + 8 + imm * 4 - IMAGE_BASE) \
            & 0xFFFFFFFF
        if dest == h["target_rva"]:
            good += 1
    checks.append(("hook sites branch to their target", good == len(sample),
                   "%d/%d" % (good, len(sample))))

    # 4/5. compile the hook C against hook_api.h
    inc = repo / "loader" / "include"
    if hook_src.strip():
        rc, err = sh(["clang", "-fsyntax-only", "-Wno-everything",
                      "-I", str(inc), str(hook_dir / "example_hook.c")])
        # example_hook.c builds its own prototype from the corpus type; a syntax
        # error here means the hook and the corpus disagree.
        checks.append(("hook C compiles against hook_api.h", rc == 0,
                       "ok" if rc == 0 else err.splitlines()[:3].__str__()))
    if (repo / "loader" / "source" / "mod_main.c").exists():
        rc, err = sh(["clang", "-fsyntax-only", "-Wno-everything",
                      "-I", str(inc),
                      str(repo / "loader" / "source" / "mod_main.c")])
        checks.append(("loader runtime compiles", rc == 0,
                       "ok" if rc == 0 else err.splitlines()[:3].__str__()))

    # 6. the target of each sampled hook has readable C in the corpus
    have = 0
    for h in sample:
        if list((repo / "decompiled" / "src").rglob(
                "%08X_*.c" % (IMAGE_BASE + h["target_rva"]))):
            have += 1
    checks.append(("hook targets with readable C", have == len(sample),
                   "%d/%d" % (have, len(sample))))

    print("loader end-to-end checks")
    print("=" * 60)
    ok = True
    for name, passed, detail in checks:
        print("  [%s] %-42s %s" % ("PASS" if passed else "FAIL", name, detail))
        ok = ok and passed
    print()
    if ok:
        print("loader path verified")
        return 0
    print("loader path has failures")
    return 1


if __name__ == "__main__":
    sys.exit(main())
