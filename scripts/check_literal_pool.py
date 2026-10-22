"""Are the 'redirect' sites literal-pool words rather than instructions?

The 7 'instr' sites disassemble to nonsense in BOTH retail and patched images:

    0x78C58C  ldrshteq pc, [r7], -r0        (retail)  /  mlaseq fp, r8, lr, ip
    0x78E604  eorseq sp, r7, r0, ror ip
    0x78E7E8  eorseq sp, r7, r0, lsl #24
    0x795FF0  eorseq r6, r7, r8, ror r5
    0x7960F8  eorseq r6, r7, r4, lsr #5
    0x7982D8  eorseq r4, r7, r8, lsr #2

Conditional-execution data-processing ops with mismatched shift operands are what you
get when a LITERAL POOL (or a jump/data table embedded in .text) is run through a
disassembler. If so, 'overwriting an instruction' actually overwrites an in-code
constant -- which would silently corrupt arithmetic, table indexing, or drawing.

This script decides that question with evidence:
  1. Print the raw words before/after, and the surrounding bytes.
  2. Check whether a `LDR Rt, [PC, #imm]` a few instructions earlier targets this
     address (that is the definition of a literal pool entry).
  3. Check whether our hook's patched word still forms a plausible pointer/float.
  4. Decode the retail word as RVA -> offset to see if it lands in .rodata.
"""
import struct

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM

RETAIL = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
HAMMER = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"

SITES = [0x0078C58C, 0x0078E604, 0x0078E7E8, 0x00795FF0, 0x007960F8, 0x007982D8]


def segs(d):
    ph = struct.unpack_from("<I", d, 0x1C)[0]
    e = struct.unpack_from("<H", d, 0x2A)[0]
    n = struct.unpack_from("<H", d, 0x2C)[0]
    out = []
    for i in range(n):
        b = ph + i * e
        if struct.unpack_from("<I", d, b)[0] == 1:
            out.append((struct.unpack_from("<I", d, b + 8)[0],
                        struct.unpack_from("<I", d, b + 16)[0],
                        struct.unpack_from("<I", d, b + 4)[0]))
    return out


def off_of(S, rva):
    va = 0x60000000 + rva
    for v, sz, o in S:
        if v <= va < v + sz:
            return o + va - v
    return None


retail = open(RETAIL, "rb").read()
hammer = open(HAMMER, "rb").read()
SR, SH = segs(retail), segs(hammer)
md = Cs(CS_ARCH_ARM, CS_MODE_ARM)
md.detail = True

# .rodata extent from the ELF (in-image)
PH = struct.unpack_from("<I", retail, 0x1C)[0]
EN = struct.unpack_from("<H", retail, 0x2A)[0]
cnt = struct.unpack_from("<H", retail, 0x2C)[0]
RODATA_LO, RODATA_HI = None, None
for i in range(cnt):
    b = PH + i * EN
    v = struct.unpack_from("<I", retail, b + 8)[0]
    fs = struct.unpack_from("<I", retail, b + 16)[0]
    fl = struct.unpack_from("<I", retail, b + 24)[0]   # p_flags is at +24
    if fl == 4 and v >= 0x60000000:   # PF_R only, and actually mapped
        RODATA_LO, RODATA_HI = v - 0x60000000, v - 0x60000000 + fs
print(f".rodata (in-image RVA): {RODATA_LO:#x} .. {RODATA_HI:#x}\n")

for rva in SITES:
    ro, ho = off_of(SR, rva), off_of(SH, rva)
    if ro is None:
        print(f"{rva:#010x}: unmapped")
        continue
    rw = struct.unpack_from("<I", retail, ro)[0]
    hw = struct.unpack_from("<I", hammer, ho)[0]
    print("=" * 78)
    print(f"site {rva:#010x}")
    print(f"  retail word  {rw:#010x}   patched word {hw:#010x}   "
          f"{'SAME' if rw == hw else 'CHANGED'}")
    print(f"  retail as RVA  -> {rw:#x}  "
          f"{'lands in .rodata' if RODATA_LO <= rw < RODATA_HI else 'not .rodata'}")
    print(f"  patched as RVA -> {hw:#x}  "
          f"{'lands in .rodata' if RODATA_LO <= hw < RODATA_HI else 'not .rodata'}")
    print(f"  retail as float  {struct.unpack('<f', struct.pack('<I', rw))[0]:.6g}")
    print(f"  patched as float {struct.unpack('<f', struct.pack('<I', hw))[0]:.6g}")

    # context: 6 words before and after, disassembled
    print("  context (retail), 8 words ending at the site:")
    for delta in range(-7, 1):
        a = rva + delta * 4
        o = off_of(SR, a)
        if o is None:
            continue
        w = struct.unpack_from("<I", retail, o)[0]
        ins = next(md.disasm(struct.pack('<I', w), 0x60000000 + a), None)
        txt = f"{ins.mnemonic} {ins.op_str}" if ins else "?"
        mark = "  <== HOOK" if delta == 0 else ""
        print(f"    {a:#010x}  {w:08x}  {txt}{mark}")

    # Is a preceding LDR [PC, #imm] pointing at this address? Literal pool proof.
    pool_refs = []
    for delta in range(-40, 1):
        a = rva + delta * 4
        o = off_of(SR, a)
        if o is None:
            continue
        chunk = retail[o:o + 4]
        ins = next(md.disasm(chunk, 0x60000000 + a), None)
        if not ins or ins.mnemonic not in ("ldr", "add", "sub"):
            continue
        for op in ins.operands:
            if op.type == 2 and op.mem.base == 15:      # [PC, #imm]
                target = 0x60000000 + a + 8 + op.mem.disp
                if target - 0x60000000 == rva:
                    pool_refs.append((a, f"{ins.mnemonic} {ins.op_str}"))
    if pool_refs:
        print(f"  LITERAL POOL PROOF: {len(pool_refs)} LDR(s) load this word:")
        for a, t in pool_refs:
            mm = md.disasm(struct.pack("<I", struct.unpack_from("<I", retail, off_of(SR, a))[0]),
                           0x60000000 + a)
            print(f"    {a:#010x}  {t}")
    else:
        print("  no LDR [PC,#imm] found targeting this word within 40 instructions")
    print()
