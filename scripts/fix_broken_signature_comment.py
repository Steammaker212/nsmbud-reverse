"""Repair C files whose function signature line was swallowed by a broken comment.

THE DEFECT
----------
~50 files begin like this:

    #include "nsmbudx_prelude.h"

    // ---- addr: 0x60563544 */ int __fastcall BlockBase_BlockBase(int a1)
    /* line: 1 */ {
    /* line: 2, address: 0x6056354c */   MovementBlockCoinBase__MovementBlockCoinBase();

The header comment `/* ---- addr: 0x60563544 */` has been truncated to `// ---- addr: 0x60563544 */`
-- presumably by an earlier pass that rewrote `/*` to `//`. The signature after the stray `*/` is
therefore commented out, the `{` on the next line opens nothing, and clang reports "expected
identifier or '('" at the signature. That single line accounts for all 50 remaining failures of that
class.

THE REPAIR is to restore the intended shape: put the comment back around the address only, and leave
the signature as real code.

    /* ---- addr: 0x60563544 */ int __fastcall BlockBase_BlockBase(int a1)

Only lines matching the exact broken shape are touched, and the transformed line is verified to still
contain a function signature, so a near-miss cannot be silently mangled further.
"""
import re
import sys
from pathlib import Path

# `// ---- addr: 0xADDR */ <signature>`  ->  `/* ---- addr: 0xADDR */ <signature>`
BROKEN = re.compile(r"^//(\s*----\s*addr:\s*0x[0-9A-Fa-f]+\s*\*/)(.*)$")

# A plausible signature after the comment: something with parentheses.
SIGNATURE = re.compile(r"\w+\s*\([^)]*\)")


def main(argv):
    if len(argv) < 2:
        print("usage: fix_broken_signature_comment.py <dir> [--write]")
        return 2
    root = Path(argv[1])
    write = "--write" in argv
    files = 0
    lines_fixed = 0
    rejected = 0
    for p in sorted(root.rglob("*.c")):
        text = p.read_text(encoding="utf-8", errors="surrogateescape")
        if "---- addr:" not in text:
            continue
        out = []
        changed = False
        for line in text.splitlines(True):
            m = BROKEN.match(line.rstrip("\r\n"))
            if m and SIGNATURE.search(m.group(2)):
                eol = "\r\n" if line.endswith("\r\n") else "\n"
                out.append("/*" + m.group(1) + m.group(2) + eol)
                changed = True
                lines_fixed += 1
            elif m:
                # matched the comment shape but no signature follows: leave alone, report it
                rejected += 1
                out.append(line)
            else:
                out.append(line)
        if changed:
            files += 1
            if write:
                p.write_text("".join(out), encoding="utf-8", errors="surrogateescape")
    print("signature comments repaired: %d in %d files%s"
          % (lines_fixed, files, "" if write else " (dry run)"))
    if rejected:
        print("  left alone (no signature after comment): %d" % rejected)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
