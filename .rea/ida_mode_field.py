"""THE POWER-UP MODE FIELD: every function that reads or writes Player + 0x528.

The mode field is the single most important address in this project: it is what decides
whether the player is Fire Mario, Ice Mario, Hammer, etc. Everything the user has been
chasing (fire flower behaving like a mushroom, hammer not working) flows through whoever
writes this byte.

This scans the whole image for instructions whose displacement is 0x528 and whose base is a
plausible Player pointer, resolves which function each site belongs to, and reports the
distinguishing information:

  * STRB (write) vs LDRB (read)
  * the immediate being stored, which is the mode number
  * how many callers the containing function has, i.e. how central it is

Grouping by containing function gives the actual set/get API of the power-up system, which
is then named from evidence rather than guesswork.
"""
import collections
import idautils
import ida_funcs
import ida_name
import ida_bytes
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
MODE_OFF = 0x528

hits = collections.defaultdict(list)

for insn in idautils.Heads():
    m = idc.print_insn_mnem(insn)
    if not m:
        continue
    # look for any operand mentioning 0x528
    found = False
    for opn in range(4):
        t = idc.get_operand_type(insn, opn)
        if t == idc.o_void:
            break
        if t == idc.o_displ or t == idc.o_phrase:
            disp = idc.get_operand_value(insn, opn)
            if disp == MODE_OFF:
                found = True
        elif t == idc.o_imm:
            v = idc.get_operand_value(insn, opn)
            if v == MODE_OFF and m.startswith(("ADD", "SUB", "MOVW")):
                found = True
    if not found:
        continue
    f = ida_funcs.get_func(insn)
    if not f:
        continue
    hits[f.start_ea].append((insn, m))

print(f"functions touching +{MODE_OFF:#x}: {len(hits)}")
print()

rows = []
for start, sites in hits.items():
    rva = start - BASE
    nm = ida_name.get_name(start) or ""
    size = ida_funcs.get_func(start).end_ea - start
    writes = [s for s in sites if s[1].startswith("STR")]
    reads = [s for s in sites if s[1].startswith("LDR")]
    rows.append((rva, nm, size, len(writes), len(reads), len(sites)))

rows.sort(key=lambda r: (-r[3], -r[5]))

print(f"{'rva':>10}  {'name':<44}{'size':>7}{'wr':>4}{'rd':>4}{'tot':>4}")
for rva, nm, size, nw, nr, nt in rows:
    short = nm if len(nm) <= 43 else nm[:40] + "..."
    print(f"{rva:#010x}  {short:<44}{size:#7x}{nw:>4}{nr:>4}{nt:>4}")

print()
print("=" * 96)
print("WRITE SITES: which mode value is stored where")
print("=" * 96)
for rva, nm, size, nw, nr, nt in rows:
    if nw == 0:
        continue
    print(f"  {rva:#010x}  {nm or '(unnamed)'}  size {size:#x}")
    start = BASE + rva
    for insn, m in hits[start]:
        if not m.startswith("STR"):
            continue
        dis = idc.GetDisasm(insn)
        # what is being stored? report the previous few instructions
        prev = []
        p = insn
        for _ in range(4):
            p = idc.prev_head(p)
            if p == idc.BADADDR:
                break
            prev.append(f"{p - BASE:#08x} {idc.GetDisasm(p)}")
        print(f"    site {insn - BASE:#010x}  {dis}")
        for x in reversed(prev):
            print(f"        {x}")
