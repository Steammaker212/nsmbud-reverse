// ============================================================================
// NSMBU Deluxe (Switch) - ?/brick block contents -> item pipeline
// Curated readable decompiles (annotated). Raw originals: .rea/decomp/*.c
// Generated from convertedmain.rebased.elf (IDA), base 0x60000000.
// ============================================================================

//----------------------------------------------------------------------------
// TABLES (verified by direct .rodata/.data reads)
//
//   dword_60B04164[]  contents(tkCmn) -> action-code      (codes 0..25)
//   dword_60B0267C[]  action-code   -> itemId             (11 entries, ids 0..10)
//   dword_60C9D3F4[]  itemId        -> item Profile* cell (11 entries)
//
//   itemId -> profile -> registration -> factory -> grant-mode:
//     0  prof 591  cell 0xAF3664  reg 0x60468200  fac 0x60467808  mode 1  (MUSHROOM)
//     1  prof 592  cell 0xAF3668  reg 0x6045E25C  fac 0x6045D76C  mode 2  (FIRE FLOWER)
//     2  prof 854  cell 0xAF3A80  reg 0x6046FDB4  fac 0x6046EDA0  mode 1 r3=0 (LightMask class)
//     3  prof 593  cell 0xAF366C  reg 0x60468E38  fac 0x60468284  mode 3  (PROPELLER)
//     4  prof 594  cell 0xAF3670  reg 0x6045EC08  fac 0x6045E2E0  mode 6  (STAR)
//     5  prof 595  cell 0xAF3674  reg 0x6046D3EC  fac 0x6046BA10  mode 4  (PENGUIN)
//     6  prof 596  cell 0xAF3678  reg 0x6046B98C  fac 0x6046AEF0  mode 5  (MINI MUSHROOM)
//     7  prof 597  cell 0xAF367C  reg 0x6046A49C  fac 0x604698EC  mode 1 r3=0 (1UP-ish)
//     8  prof 598  cell 0xAF3680  reg 0x60469868  fac 0x60468EBC  mode 7  (ICE FLOWER)
//     9  prof 599  cell 0xAF3684  reg 0x604708E8  fac 0x6046FEC8  mode 1 r3=0 (1UP-ish)
//    10  prof 601  cell 0xAF368C  reg 0x6046AE6C  fac 0x6046A538  mode 9  (YOSHI EGG)
//
//   Item vtables all derive from ItemBase (common ctor sub_60466BC4, size 6832;
//   item2 6992). Cells 0/1/3/5/8/32 unique per class; cell 56 (+0xE0) of each
//   extended vtable = the grant state handler referenced from .data/.relro.
//   Icon-name table (sub_6045CC68, slot order): I_kinoko, I_fireflower,
//   I_propeller, I_penguin, I_kinoko, I_star, I_iceflower, I_yoshichibi_egg,
//   I_yoshichibi_egg, I_musasabi, I_kinoko, I_crown  (consistent with
//   index = player mMode - 1; mode 10 = musasabi = our Approach B hammer slot).
//----------------------------------------------------------------------------

//----------------------------------------------------------------------------
// sub_60463998 - SHARED ITEM GIVE HELPER (the "grant" gate)
//   a1 = item actor, a2 = out result, a3 = target player MODE, a4 = contact flag
//   returns 1 with *a2=1 (will grant), *a2=2 (already has / feedback only), 0 (blocked)
// See ITEM_give_helper_60463998.c for the full body.
//   - target player = table[0xCC436C + 4*(a1+6208 field) + 48]
//   - same player RTTI check as sub_60465E4C
//   - a4==1: sub_607A2820(player, mode) == 1  -> reject (item stays)
//            else playerVf+1376(player, mode) ("canChangeTo")
//            ==1 -> sub_607A27A8(player, mode) -> *out=1 grant
//            else -> *out=2, SE_PLY_GET_ITEM_AGAIN + score popup
//   - a4==0: silent path (no feedback), returned 1 with *out untouched (0)
//----------------------------------------------------------------------------

//----------------------------------------------------------------------------
// Per-item grant handlers (all tiny; each = contact wrapper around 60463998).
// Disasm of each (anchor 0x6045DDC0 = fire flower, mode 2):
//
//   fire (itemId 1)  sub_6045DDC0:  mov r2,#2 ; mov r3,#1 ; bl 60463998
//   mush (itemId 0)  sub_60467F48:  mov r2,#1 ; mov r3,#1
//   prop (itemId 3)  sub_60468AD8:  mov r2,#3 ; mov r3,#1
//   star (itemId 4)  sub_6045E938:  mov r2,#6 ; mov r3,#1        (delayed variant)
//   peng (itemId 5)  sub_6046C364:  mov r2,#4 ; mov r3,#1
//   peng? (delayed)  sub_6046BB70:  countdown 1555 -> grant mode 4
//   peng? (floatg)   sub_6046CE38:  grant mode 4 while floating
//   ice  (itemId 8)  sub_604695B0:  mov r2,#7 ; mov r3,#1
//   mini (itemId 6)  sub_6046B6BC:  mov r2,#5 ; mov r3,#1
//   egg  (itemId 10) sub_6046AB90:  mov r2,#9 ; mov r3,#1
//   dud  (itemId 7)  sub_6046A078:  mov r2,#1 ; mov r3,#0  (silent)
//   dud  (itemId 9)  sub_60470430:  mov r2,#1 ; mov r3,#0  (silent)
//   ???  (itemId 2)  sub_6046F8FC:  mov r2,#1 ; mov r3,#0  (silent; LightMask glow class)
//----------------------------------------------------------------------------

//----------------------------------------------------------------------------
// sub_60465E4C - ITEM-ELIGIBILITY GATE (block side; called via sub_60466328)
//   Full body: ITEM_gate_60465E4C.c
//   code mask 0x24004E0 = {5,6,7,10,22,25} -> player must exist AND
//   (mMode-1) must be in mask 0x1FB = {1,2,4,5,6,7,8,9}  (i.e. mMode 1..9 except 3)
//
//   *** APPROACH B HAZARD *** : our hammer mode is 10, so mMode-1 = 9, and bit 9
//   of 0x1FB is CLEAR -> a hammer player would receive NOTHING from a ?-block.
//   4 patch sites (2 copies of the same check):
//     copy A: cmp r0,#8   @ 0x60465F34   -> #9 (APPLIED)
//             movw r1,#0x1FB     @ 0x60465F40   -> #0x3FB (APPLIED)
//     copy B: cmp r0,#8   @ 0x60466000   -> #9 (APPLIED)
//             movw r1,#0x1FB     @ 0x6046600C   -> #0x3FB (APPLIED)
//   APPLIED 2026-10-21 to convertedmain.hammer_b.elf only (new MD5 1134cf5f37d16a55f150fadebc3dfb87).
//----------------------------------------------------------------------------

//----------------------------------------------------------------------------
// sub_60466328 - block-side wrapper: gate then spawn
//   sub_60465E4C(...); sub_604663F4(posBuilding, itemId, a4);
//   sub_604663F4 = one-time-fill of dword_60C9D3F4[] item-profile table +
//                  Profile::get lookup + item spawn at block position.
//   Full bodies: BLOCK_gate_wrap_60466328.c / BLOCK_populate_604663F4.c
//----------------------------------------------------------------------------

//----------------------------------------------------------------------------
// Block-family instance fields (all offsets decimal, actor at r0):
//   +24    contents bitfield (5 bits, from buildinfo/level tile)
//   +6852  buildinfo param bit
//   +6856  action code  = dword_60B04164[getContents()]   (reloaded on init)
//   +6860  action param
//   +6876  "empty block (code 21)" flag (byte)
//   +6877  item-gate bypass flag (byte; ONLY t27 sets it to 1)
//   +6878  "has extra param (a1+7304)" flag
//   +6896  "code 13" flag (byte)
//   +7280/84  collider extents (floats 64.0)
//   +7296  collision shape id (48 or 49)
//   +7300  contents>>2 lut value (unk_60AF2188 shake/param)
//   +7304  buildinfo byte param
//   +7368  block-type (0 = plain/solid, 1 = bumpable tile block)
//   +7376  "bumpable" flag (byte, block-type-1 classes)
//   +7400  tile height multiplier (multi-tile blocks, t13)
// Distinguishing onCreate patterns (see BLOCK_oncreate_all.txt):
//   t10/t11: +7296=49, collider 7, parse helpers sub_6056EAA4 / sub_605736E0
//   t13:     multi-tile (+7400), sub_605635AC(a1,0,0), colliders 6432..6456
//   t17:     block-type 1, +7296=48, +7376=1, +6852=(param>>8)&1, collider 8 @+6120,
//            sub_605635AC(a1,1,1), code-21 -> +6876=1, code-13 -> +6896=1,
//            +7300 lut, profile==MEMORY[0xAF31BC] scale split (single vs tall row)
//   t18:     block-type 1, collider 8, no +6852/+7300/+7304 handling
//   t19-t21: same family (6856/6876/7368 markers)
//   t23:     block-type 0, +6872=1, collider 7, sub_605635AC(a1,0,1)
//   t24:     block-type 0, +6872=2, collider 7, checkLiquidCollisions (water block)
//   t27:     ONLY class setting +6877=1 (gate bypass); own contents loader
//            sub_60563BB8(a1,0) instead of shared sub_605635AC
//   t3:      BrickBlockHuge (named previously); ONLY class overriding vf94/95 break
//            cells (0x60566100/0x60566228); collider types 10/11
//----------------------------------------------------------------------------
