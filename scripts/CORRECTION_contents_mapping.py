"""Correct the contents -> item claim, and record what IDA actually proved.

MY EARLIER CLAIM WAS WRONG
==========================
I wrote that "contents 2 and 3 both resolve to action code 0, therefore they are the
same item, therefore relabelling either is free". That was based on reading
dword_60B04164 as a flat, contents-indexed table.

IDA/Hex-Rays shows dword_60B04164 is indexed by the result of a VIRTUAL CALL
(sub_605635AC: `v8 = (*(...)(*(_DWORD*)a1 + 360))(a1); v9 = dword_60B04164[v8];`),
not by the raw contents field. The block-contents path instead runs:

    sub_60466328 -> sub_60465E4C(code) -> sub_604663F4(itemId)

so my action-code comparison was not measuring what I said it measured.

WHAT IS ACTUALLY ESTABLISHED (see ida_verify.py for the reproducible checks)
==========================================================================
1. dword_60B0267C maps a block-contents/code value to an ITEM ID, and
   sub_604663F4 then does Profile::get(profile_table[itemId + 1]). Verified by
   decompilation of both functions.
2. The editor's labels come from a different, correctly-keyed table that I have not
   yet identified. My two candidate tables produce
        contents 2 -> 7, 4 -> 1, 5 -> 4
   while the editor says
        contents 2 = Fire Flower, 4 = Propeller, 5 = Penguin
   These agree only if itemId 7 = Fire Flower and itemId 1 = Propeller, which
   contradicts the grant-handler table in HAMMER_POWERUP_REPORT.md. So the label
   mapping is UNRESOLVED and must not be asserted further.
3. The one thing that IS solid, and is verified byte-for-byte on the actual Hammer
   build: the mode bitset gate.
       retail  movw r1, #0x1FB
       hammer  movw r1, #0x3FB
   0x1FB permits modes 1,2,4,5,6,7,8,9.  0x3FB adds bit 9 = mode 10.
   This gate is what decides whether a gated item grants anything while the player
   already holds mode 10.
4. The Fire Flower grant handler passes mode 2 in retail and mode 10 in the build
   (bytes 0220a0e3 vs 0a20a0e3 at 0x6045DDCC), and the suit-colour gate is
   cmp r0,#2 vs cmp r0,#10 (0x6078E6A8).

CONSEQUENCE FOR THE PATCH
=========================
The HammerQuestionBlock patch relabels contents 2 and 3 to "Hammer". Given (2), that
label is NOT yet justified by evidence. The patch is therefore marked unreleased
until the contents->item mapping is pinned down, because shipping a dropdown that
says Hammer over a value that dispenses a Mushroom would be worse than shipping
nothing.
"""
print(__doc__)

print("\n=== the verified bitset arithmetic ===")
for name, imm in (("retail", 0x1FB), ("hammer", 0x3FB)):
    bits = [b for b in range(16) if imm >> b & 1]
    print(f"  {name:6} 0x{imm:03X} = {imm:011b}b  bits {bits}"
          f"  -> modes {[b + 1 for b in bits]}")
print("\n  mode 10 needs bit 9. 0x1FB has bits 0,1,3,4,5,6,7,8 (no 9).")
print("  0x3FB has bits 0,1,3,4,5,6,7,8,9 (bit 9 present) -> mode 10 permitted.")
