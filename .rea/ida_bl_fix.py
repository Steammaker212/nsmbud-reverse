"""FIX THE BL DECODER -- determine the actual encoding from a known call site.

The previous decoder found only 295 "BL" in 10 MB and missed Player_ctor, which has a known
call at 0x00794EBC. So the encoding assumption was wrong. Two candidates:

  (1) Thumb-2 BL with big-endian halfwords inside a little-endian stream. The NSO was converted
      from a big-endian Wii U image, and the earlier disassembly showed operands like
      `MOV R4, R2` for bytes `02 40 a0 e1`, i.e. the ARMs are byte-reversed relative to
      conventional little-endian Thumb. That is the ARM *BE8* / big-endian instruction encoding.
  (2) Some other encoding entirely.

Ground truth available: Player_ctor at RVA 0x794EC0, with a code xref from 0x00794EBC which is
4 bytes before -> the BL sits at 0x00794EB8. And PlayerBase_ctor at 0x75DEFC is called from
Yoshi_ctor at RVA 0x7CB7D8, so a BL sits near there.

This dumps the RAW BYTES at those sites and tries both byte orders, so the correct decoding is
established from a call we already know exists rather than from theory.
"""
import ida_bytes
import ida_bytes as ib
import ida_funcs
import ida_name
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

SITES = [
    (0x00794EB8, 0x00794EC0, "BL -> Player_ctor (xref came from 0x794EBC)"),
    (0x007CB7D4, 0x0075DEFC, "likely BL -> PlayerBase_ctor (xref from 0x7CB7D8)"),
]

for site, target, note in SITES:
    ea = BASE + site
    raw = bytes(ida_bytes.get_byte(ea + i) for i in range(8))
    print("=" * 88)
    print(f"site {site:#010x}  target {target:#010x}")
    print(f"  {note}")
    print(f"  raw bytes: {' '.join(f'{b:02x}' for b in raw)}")
    print(f"  disasm   : {idc.GetDisasm(ea)}")
    print(f"  IDA target of that insn: "
          f"{idc.get_operand_value(ea, 0) - BASE:#x}" if idc.get_operand_value(ea, 0) else "  ?")

    # try little-endian halfword order
    h1le = raw[0] | (raw[1] << 8)
    h2le = raw[2] | (raw[3] << 8)
    # try big-endian halfword order (byte-reversed)
    h1be = raw[1] | (raw[0] << 8)
    h2be = raw[3] | (raw[2] << 8)
    print(f"  LE halfwords: {h1le:04x} {h2le:04x}")
    print(f"  BE halfwords: {h1be:04x} {h2be:04x}")
    for tag, h1, h2 in (("LE", h1le, h2le), ("BE", h1be, h2be)):
        ok1 = (h1 & 0xF800) == 0xF000
        ok2 = (h2 & 0xD000) == 0xD000
        print(f"    {tag}: h1 is BL-prefix? {ok1}   h2 is BL-suffix? {ok2}")
    print()

# Also: what does IDA itself think each instruction is, across a small run, so the
# instruction stream can be matched against the raw bytes
print("=" * 88)
print("IDA instruction stream around the known call (to infer encoding by inspection)")
print("=" * 88)
for insn in idautils.Heads(BASE + 0x00794EA8, BASE + 0x00794ED0):
    raw = bytes(ida_bytes.get_byte(insn + i) for i in range(4))
    print(f"  {insn - BASE:#010x}  {' '.join(f'{b:02x}' for b in raw):<12} {idc.GetDisasm(insn)}")

import idautils
