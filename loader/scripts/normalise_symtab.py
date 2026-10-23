"""Normalise `objdump -t` output into the symbol table hooks_to_ips.py reads.

The patcher needs, for each hook `func:` name, the module-relative address of
that function. Two details decide whether it works:

  * **Only definitions count.** The module links against ~22,900 *absolute* game
    symbols from `main.ld`, and those appear in the symbol table as absolute
    values. Handing one to the patcher would make it branch into the game's own
    function instead of into our hook -- a silent no-op patch. So absolute
    symbols are dropped and only `.text` function definitions are kept.

  * **The address must be module-relative.** `hooks_to_ips.py` adds the module
    base (`0x00CD1000`) itself, so the value written here is the link address,
    which for our module is the offset from 0.

The input format is whichever objdump is on the machine, which differ:

  GNU:  ``00000d18 g     F .text\t00000054 Enemy__endState_DieFumi_hook``
  LLVM: ``00000d18 g     F .text  00000054 Enemy__endState_DieFumi_hook``

GNU splits the 7-character flag field into up to two whitespace-separated
columns, so the parse below is token-count based rather than fixed-offset:
``addr flags... section size name``, where the last three tokens are always the
section, the size and the name, and a bare ``F`` token marks a function.

Usage:
    objdump -t out/mod.elf | python normalise_symtab.py -o out/mod.sym

Note on encoding: `-o` is preferred over a shell redirect. PowerShell's `>`
writes UTF-16LE with a BOM, which the symbol reader cannot decode; when writing
to stdout this script therefore writes UTF-8 bytes explicitly, and `-o` bypasses
the shell entirely.
"""
from __future__ import annotations

import argparse
import sys

# Section names that hold functions we can branch to. `.crt0` matters: the
# `static_init_hook` entry point lives there, and it is the *only* way
# `mod_init` ever runs. Filtering to `.text` alone silently omitted it, which
# would have produced a module that loads, does nothing, and still passes every
# other check -- the worst possible failure mode.
TEXT_SECTIONS = (".text", ".crt0")


def is_text(section: str) -> bool:
    return any(section.startswith(t) for t in TEXT_SECTIONS)


def parse(line: str):
    """Return (addr, flags, section, size, name) or None.

    Two row shapes occur, both with the name last and section/size immediately
    before it:

        ``00000d18 g     F .text  00000054 SomeFunction``   -> 6 tokens
        ``00000028 g             .crt0   00000000 asm_label`` -> 5 tokens

    The five-token case is an assembly label, which has no type flag at all.
    Requiring six tokens silently dropped every such label -- including
    ``static_init_hook``, the one symbol the module cannot run without.
    """
    toks = line.replace("\t", " ").split()
    if len(toks) < 5:
        return None
    name = toks[-1]
    size = toks[-2]
    section = toks[-3]
    addr = toks[0]
    flags = toks[1:-3]
    try:
        int(addr, 16)
        int(size, 16)
    except ValueError:
        return None
    return addr, flags, section, size, name


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("input", nargs="?", default="-",
                    help="objdump -t output file, or - for stdin")
    ap.add_argument("-o", "--out", default=None,
                    help="write here instead of stdout (avoids shell encoding)")
    ap.add_argument("--elf", default=None,
                    help="run objdump on this ELF directly instead of reading "
                         "a dump; avoids shell redirection entirely")
    ap.add_argument("--objdump", default="arm-none-eabi-objdump")
    opt = ap.parse_args()
    out_path = opt.out

    if opt.elf:
        # Preferred path. Running objdump from here rather than from a make
        # recipe means the output never passes through sh's `>` redirection,
        # which on this platform produced a zero-byte file.
        import subprocess
        r = subprocess.run([opt.objdump, "-t", opt.elf],
                           capture_output=True, text=True,
                           errors="replace", timeout=300)
        if r.returncode != 0:
            sys.stderr.write("objdump failed (%d): %s\n"
                             % (r.returncode, r.stderr[:400]))
            return 1
        lines = r.stdout.splitlines()
    elif opt.input == "-":
        lines = sys.stdin.read().splitlines()
    else:
        with open(opt.input, "r", errors="replace") as fh:
            lines = fh.read().splitlines()

    kept = 0
    skipped = 0
    out = []
    for line in lines:
        p = parse(line.rstrip("\n"))
        if p is None:
            continue
        addr, flags, section, _size, name = p

        # A symbol counts if it is a defined object/function in a code section.
        # The `F` (function) flag is *not* required: labels written in assembly
        # carry no type at all, and `static_init_hook` is exactly that -- a plain
        # `.global` label in crt0.s. Requiring `F` dropped it, which silently
        # removed the one hook that makes the module's constructor run.
        flag_str = "".join(flags)
        if "d" in flag_str:                 # debug/section symbol, not code
            skipped += 1
            continue
        if "U" in flag_str:                 # undefined
            skipped += 1
            continue
        if "a" in flag_str:                 # absolute: a game address, not ours
            skipped += 1
            continue
        if not is_text(section):            # not code we can branch to
            skipped += 1
            continue
        if not name or name.startswith("."):
            skipped += 1
            continue
        a = int(addr, 16)
        if a == 0 and name != "_crt0_section":
            # Address 0 is the module's first byte; only the crt0 label itself
            # legitimately sits there.
            skipped += 1
            continue

        out.append("%s = 0x%08X;" % (name, a))
        kept += 1

    # Write bytes, not text: under a Windows redirect sys.stdout defaults to the
    # console encoding and emits a BOM, and the symbol reader then fails with a
    # UnicodeDecodeError on the first line.
    text = "\n".join(out) + ("\n" if out else "")
    if out_path:
        with open(out_path, "w", encoding="utf-8", newline="\n") as fh:
            fh.write(text)
        sys.stderr.write("normalise_symtab: wrote %s\n" % out_path)
    else:
        sys.stdout.buffer.write(text.encode("utf-8"))
        sys.stdout.buffer.flush()
    sys.stderr.write("normalise_symtab: kept %d function definition(s), "
                     "skipped %d\n" % (kept, skipped))
    return 0 if kept else 1


if __name__ == "__main__":
    raise SystemExit(main())
