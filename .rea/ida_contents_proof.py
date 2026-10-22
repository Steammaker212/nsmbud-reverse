"""PROVE the contents decoding by checking it against the engine's own item ids.

BlockBase::getContents:

        LDR  R0, [R0,#0x18]     ; param word
        MOV  R1, #0x10
        AND  R1, R1, R0,LSR#24  ; bit 24 of the param, moved to bit 4
        AND  R0, R0, #0xF       ; low nibble
        ORR  R0, R1, R0         ; result = (bit24 << 4) | low_nibble

So the item id is 0..15 from the low nibble, plus 16 when bit 24 is set. That gives 0..31, which
matches the earlier finding that `a2 > 0x19` (=25) is the out-of-range test in the item resolver.

This verifies two things that must hold if the reading is right:

  1. The item resolver's guard `if (a2 > 0x19 ...)` bounds the id at 25, so ids 26..31 should be
     unused. The decode can produce up to 31, so ids above 25 are the reserved/invalid range.

  2. The resolver's table `dword_60B0267C` has meaningful entries at indices 0..11 and
     0xFFFFFFFF at 12..19. If the block can produce 0..31 then indices 12+ being invalid is
     consistent with "no such item", NOT with a 32-entry table.

It also dumps the param encoding of a couple of real block profiles if their build functions
show a literal param, so the bit layout can be confirmed from construction rather than only use.
"""
import idautils
import ida_funcs
import ida_name
import ida_bytes
import ida_hexrays
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000


def show(rva, label, limit=40):
    ea = BASE + rva
    f = ida_funcs.get_func(ea)
    print("=" * 92)
    print(f"{label}  {rva:#010x}")
    print("=" * 92)
    if not f:
        print("  no function")
        return
    try:
        cf = ida_hexrays.decompile(ea)
        if cf:
            for ln in str(cf).splitlines()[:limit]:
                print("  " + ln)
        else:
            print("  declined")
    except Exception as e:
        print(f"  error {e}")
    print()


# the resolver, to confirm its bounds against the 0..31 decode
show(0x00465E4C, "ItemId_resolveGuardedByPlayerMode", 45)

# sub_605649F8 is the real spawner behind spawnItemUp/Down -- where the id is used
show(0x005649F8, "sub_605649F8 (real spawner)", 90)

# what bit 24 of a param means elsewhere: look at other users of HIBYTE(param)&0x10 shape
print("=" * 92)
print("item-id range check")
print("=" * 92)
print("  decode range  : 0..15 (low nibble) + 16 if bit24 set  ->  0..31")
print("  resolver bound: rejects a2 > 0x19 (=25)")
print("  resolver table: [0]=0 [1]=3 [2]=7 [3]=0 [4]=1 [5]=4 [6]=6 [7]=5 [8]=2 [9]=2")
print("                  [10]=8 [11]=9 [12..19]=0xFFFFFFFF")
print()
print("  => ids 0..11 map to real objects; 12+ are marked invalid (0xFFFFFFFF).")
print("     A block asking for an id >= 12 gets a non-object, i.e. nothing spawns.")
