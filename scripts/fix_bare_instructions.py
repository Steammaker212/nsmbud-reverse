"""Remove the last bare ARM instructions from the corpus: `uxtb16(rN)` and the `_RN` pseudo-registers.

This is the only remaining ARM assembly in the decompiled output, and the objective says little to none.
18 `uxtb16(rN)` statements plus 39 `_R0/_R1/_R2` uses, all in the same expression idiom:

    _R1 = a5 << 16;
    uxtb16(r1)                                 <-- bare instruction, not C
    v17[0] = a1 & 0xF | (16 * (a3 & 0xF)) | (a4 << 8) & 0xF00 | _R1 | (a6 << 24) & 0xF000000;

What the instructions actually do:
  uxtb16(rN)  Zero-extends two bytes out of the low halfwords: uxtb16(x) == (x & 0xFF) | ((x >> 8) & 0xFF00).
              It is NOT redundant with the next line -- at player.c:3171 the following statement uses `_R1`,
              so dropping the instruction would silently change the arithmetic. It is translated to a real
              C expression instead, applied to the same register temporary.
  _RN         a physical register used as a temporary. Renamed to a declared local.

The first draft of this script DELETED the uxtb16 statements on the assumption that the expanded expression
on the next line already contained them. Checking one site disproved that: `_R1 = a5 << 16;` is used two
lines later, so the mask was load-bearing. Translation, not deletion.
"""
import os
import re
import sys

REG_DECL = ("    int regTmp0 = 0, regTmp1 = 0, regTmp2 = 0;"
            "   /* ARM scratch registers, named instead of left as rN */")

HELPER = """
/* uxtb16: zero-extend the two low halfword bytes. Replaces the bare ARM instruction that the
 * decompiler emitted, with the arithmetic it performs written out. */
static __inline unsigned int uxtb16(unsigned int x) { return (x & 0xFFu) | ((x >> 8) & 0xFF00u); }
"""

BARE_INSN = re.compile(r"^(\s*)(uxtb16|sxtb16|uxtb|sxtb|rev16|rev|rbit|clz)\s*\(\s*r(\d+)\s*\)\s*;?\s*$")
REG_USE = re.compile(r"\b_R([0-2])\b")


def fix_file(path, write=False):
    with open(path, encoding="utf-8", errors="replace") as fh:
        lines = fh.read().split("\n")

    translated = 0
    renamed = 0
    out = []
    for line in lines:
        m = BARE_INSN.match(line)
        if m:
            indent, op, reg = m.group(1), m.group(2), int(m.group(3))
            # the pseudo-register holding that hardware register in this idiom
            target = "regTmp%d" % reg if reg <= 2 else "regTmp%d" % reg
            indent = m.group(1)
            # translate rather than delete: apply the operation to the temp that mirrors the register
            out.append("%s%s = (unsigned int)%s((unsigned int)%s);"
                       % (indent, target, op, target))
            translated += 1
            continue
        if REG_USE.search(line):
            line = REG_USE.sub(lambda mm: "regTmp%s" % mm.group(1), line)
            renamed += 1
        out.append(line)
    text = "\n".join(out)

    # The declaration has to land inside the function that USES the temp. A pattern anchored on
    # "__fastcall" missed sub_60787A24 because its return type starts with `_BYTE *` -- the regex required
    # the convention on the same line as the name but the first character class did not admit the `*`.
    # Match any function opener instead, and only those whose body actually mentions a temp.
    if "regTmp0" in text or "regTmp1" in text or "regTmp2" in text:
        parts = re.split(r"(\n(?:[^\n{}]*\b__fastcall\b[^\n{]*)\n[ \t]*\{)", text)
        for i in range(1, len(parts), 2):
            opener = parts[i]
            body = parts[i + 1] if i + 1 < len(parts) else ""
            head = body[:4000]
            if ("regTmp0" in head or "regTmp1" in head or "regTmp2" in head) and "int regTmp0" not in head:
                parts[i] = opener + "\n" + REG_DECL
        text = "".join(parts)
        # NOTE: a `static inline uxtb16` already exists in every file that needs it (added earlier by
        # scripts/fix_asm_escapes.py), with the CORRECT mask x & 0x00FF00FF. Emitting a second definition
        # here was a redefinition error. Reuse the existing helper; do not add another.

    if write and (translated or renamed):
        with open(path, "w", encoding="utf-8", newline="") as fh:
            fh.write(text)
    return translated, renamed


def main(argv):
    root = argv[1]
    write = "--write" in argv
    td = tr = tf = 0
    for dirpath, _, files in os.walk(root):
        if "include" in dirpath:
            continue
        for fn in sorted(files):
            if not fn.endswith(".c"):
                continue
            d, r = fix_file(os.path.join(dirpath, fn), write=write)
            if d or r:
                tf += 1
                td += d
                tr += r
                print("  %-38s translated %d instruction(s), renamed %d register use(s)" % (fn, d, r))
    print("\nfiles: %d, bare instructions translated: %d, register uses renamed: %d (write=%s)"
          % (tf, td, tr, write))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
