"""SETTLE THE WIDTH OF Player + 0x528: byte or word?

The docs currently say "byte-sized (STRB)". That came from functions around 0x45xxxx. But
Player_ctor (0x794EC0), PlayerBase_ctor (0x75DEFC) and Player_setPowerupMode (0x795CDC) all
access it with a full word LDR/STR, and the mode tables are indexed with LSL#2 (dword stride).

Both cannot be right for the same struct -- they are different structs that happen to share the
displacement. This groups every access by (region, mnemonic) so the picture is unambiguous, and
prints a couple of contexts for each so the base register can be judged.
"""
import collections
import idautils
import ida_funcs
import ida_name
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

REGIONS = [
    (0x000000, 0x0F0000, "core"), (0x0F0000, 0x200000, "actor_construction"),
    (0x200000, 0x300000, "actors_a"), (0x300000, 0x450000, "actors_b"),
    (0x450000, 0x480000, "powerup"), (0x480000, 0x600000, "systems"),
    (0x600000, 0x780000, "states"), (0x780000, 0x7C0000, "player"),
    (0x7C0000, 0x800000, "player_states"), (0x800000, 0x9A0000, "libs"),
]


def region_of(rva):
    for lo, hi, n in REGIONS:
        if lo <= rva < hi:
            return n
    return "?"


buckets = collections.Counter()
samples = collections.defaultdict(list)

for insn in idautils.Heads():
    m = idc.print_insn_mnem(insn)
    if not (m.startswith("LDR") or m.startswith("STR")):
        continue
    hit = False
    for opn in range(4):
        if idc.get_operand_type(insn, opn) in (idc.o_displ, idc.o_phrase):
            if idc.get_operand_value(insn, opn) == 0x528:
                hit = True
                break
    if not hit:
        continue
    f = ida_funcs.get_func(insn)
    if not f:
        continue
    reg = region_of(f.start_ea - BASE)
    buckets[(reg, m)] += 1
    if len(samples[(reg, m)]) < 3:
        samples[(reg, m)].append((f.start_ea - BASE, insn - BASE,
                                  idc.GetDisasm(insn), ida_name.get_name(f.start_ea)))

print("=" * 96)
print("ACCESS WIDTH of displacement 0x528, by region and mnemonic")
print("=" * 96)
for (reg, m), n in sorted(buckets.items()):
    print(f"  {reg:<20}{m:<8}{n:>4}")
    for frva, srva, dis, nm in samples[(reg, m)]:
        print(f"      func {frva:#010x} site {srva:#010x}  {dis:<34} {nm}")

print()
print("=" * 96)
print("VERDICT")
print("=" * 96)
player_word = buckets.get(("player", "LDR"), 0) + buckets.get(("player", "STR"), 0)
player_byte = buckets.get(("player", "LDRB"), 0) + buckets.get(("player", "STRB"), 0)
print(f"  player region, word accesses: {player_word}")
print(f"  player region, byte accesses: {player_byte}")
print()
if player_word and not player_byte:
    print("  => In the PLAYER region the field is accessed as a 4-byte word.")
    print("     The STRB accesses elsewhere are a DIFFERENT struct at the same displacement.")
    print("     The documented 'byte-sized' claim was wrong and must be corrected.")
elif player_byte and not player_word:
    print("  => byte-sized in the player region, as documented.")
else:
    print("  => mixed; handle carefully and report both.")
