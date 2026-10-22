/**
 * player_powerup_hammer.cpp  —  NSMBU Deluxe (Switch)
 *
 * Readable reconstruction of the player power-up / projectile path, and of the
 * "Approach B" custom Hammer power-up patch plan.
 *
 * Recovered from convertedmain.rebased.elf
 *   ARM32 / AArch32 (ARMv8-A), image base 0x60000000
 *   MD5 f8a2e4c3616b8a99632b8ffe68938c34
 *
 * PROVENANCE / CONFIDENCE
 *   [V]  verified in IDA *and* byte-checked against the ELF
 *   [Vd] verified from IDA decompilation only
 *   [I]  inferred from use-site
 *   [P]  patch-plan value (planned write, not a fact about the original)
 *
 * Address convention: all VAs are IDA virtual addresses (base + RVA). Pointer
 * cells store unrebased RVAs and rely on R_ARM_RELATIVE, so a *static ELF patch*
 * writes an RVA while a *runtime memory patch* writes the rebased VA.
 */

#include <player/PlayerBase.h>

// ===========================================================================
// 1. Player object layout (offsets verified against use-sites)
// ===========================================================================
//
// Player vtable is at 0x60C24C74.
//
// The player object is allocated at ~11.9 KB; the Hammer actor's allocation
// (11912 bytes) is a useful cross-check on the shared Enemy/Player bucket.

static constexpr u32 cPlayerVtableVA      = 0x60C24C74;   // [V]

// --- mode / state -----------------------------------------------------------
static constexpr u32 cOff_mMode           = 1320;   // +0x528   [V]
static constexpr u32 cOff_mModePrev       = 11384;  // +0x2C78  [V]
static constexpr u32 cOff_mModeNext       = 11388;  // +0x2C7C  [V]
static constexpr u32 cOff_mModelMgr       = 11368;  // +0x2C68  [V]

// --- identity / collision ---------------------------------------------------
static constexpr u32 cOff_mPlayerNo       = 84;     // +0x54   player index  [Vd]
static constexpr u32 cOff_mLayer          = 86;     // +0x56   [Vd]
static constexpr u32 cOff_mAttackType     = 87;     // +0x57   [Vd]
static constexpr u32 cOff_mHeightClass    = 12048;  // +0x2F10 [Vd]

// --- vtable slots -----------------------------------------------------------
// vf+0x090 -> 0x60760754  tail-calls vf+0x94 with r1 unchanged      [V]
// vf+0x094 -> 0x60795CDC  setPlayerModeImpl                        [V]
// vf+0x098 -> 0x607B6C38  global bool (isCoop-like), NOT getTallType [V]
// vf+0x09C -> 0x60796A60  getTallType(mode)                        [V]
// vf+0x270 -> 0x60766698  sets bit 2 in player+9700                [V]
// vf+0x560 -> 0x607A26F8  canChangeTo                              [V]

static constexpr u32 cVf_canChangeTo      = 0x560;  // *4 -> 0x1580 bytes
static constexpr u32 cVf_getTallType      = 0x09C;


// ===========================================================================
// 2. Mode enumeration
// ===========================================================================
/**
 * Compiled-in power-up modes. Only 0..9 are structurally valid: the tables
 * below (cPlayerModelData, flt_60B0C2BC, dword_60B0C300) each have exactly ten
 * entries, which is why Approach B has to relocate two of them.
 *
 * Mode 2 is Fire. Approach B reassigns Fire Flower pickup to mode 10, leaving
 * mode 2 unreachable by normal play.                    [Vd]
 */
enum PowerUpMode
{
    cMode_Normal  = 0,
    cMode_Mini    = 1,
    cMode_Fire    = 2,
    cMode_Propeller = 3,
    cMode_Ice     = 5,      // 4 and 5 are the two "ice-ish" modes
    cMode_Penguin = 6,
    // ...
    cMode_Hammer  = 10,     // [P] new, out of range of the 10-entry tables
};


// ===========================================================================
// 3. Fire Flower grant path
// ===========================================================================

/**
 * sub_6045DDC0  —  Fire Flower grant.                        [Vd]
 *
 * The decisive instruction is at 0x6045DDCC:
 *      E3A02002   mov r2, #2        (mode = Fire)
 * changed by Approach B to:
 *      E3A0200A   mov r2, #10       (mode = Hammer)           [P]
 *
 * Verified against the ELF: original bytes at 0x6045DDCC are 02 20 A0 E3.
 */
int __fastcall GrantFireFlower(int* self)
{
    int out = 0;
    // sub_60463998(self, &out, mode=2, 1)
    int r = sub_60463998(self, &out, cMode_Fire, 1);
    if (r == 1)
        return sub_60463CD0(self, out, *(_DWORD *)((u8*)self + 6208));
    return 0;
}

// --- resolved grant chain ---------------------------------------------------
// sub_6045DDC0 -> sub_60463998 -> sub_607A2820 (dust effect)
//   -> vf+0x560 (canChangeTo) -> sub_607A27A8
//   -> task sub_603E56C0 -> sub_607A2F40
//   -> vf+0x90 (0x60760754) -> vf+0x94 (0x60795CDC)          [Vd]

/**
 * sub_607A2820  —  spawn the "poof" dust effect at the player's feet.  [Vd]
 * The +4.0f Y offset is the effect origin lift.
 */
int __fastcall SpawnDustEffect(Player* self, int reason)
{
    if (reason == 3)
        return 0;
    if (*(u32*)((u8*)self + cOff_mMode) != 3)
        return 0;
    if ((*(u8*)((u8*)self + 1219) & 2) != 0)
        return 0;

    f32 pos[3];
    pos[0] = *(f32*)((u8*)self + 108);
    pos[1] = *(f32*)((u8*)self + 112) + 4.0f;
    pos[2] = *(f32*)((u8*)self + 116);

    return sub_60155C38((u8*)self + 1328, pos, 0, 0);
}

/**
 * sub_607A27A8  —  request a mode change.                          [Vd]
 *
 * Writes mModeNext (+11388) and, if mMode (+1320) differs, calls
 * vf+0x270 = sub_60766698 (which only sets bit 2 in player+9700 -- it does
 * NOT perform the mode change; that happens later in the task chain).
 */
int __fastcall RequestModeChange(Player* self, int mode)
{
    if (sub_60766708(self))
        return 0;
    if (*(u32*)((u8*)self + cOff_mModeNext) == mode)
        return 0;

    *(u32*)((u8*)self + cOff_mModeNext) = (u32)mode;

    if (*(u32*)((u8*)self + cOff_mMode) == mode)
        return 0;

    (*(void(**)(Player*, int))(*self + 624))(self, 2);
    sub_60777F54(MEMORY[0xCBFA90], (int)self);
    return 1;
}


// ===========================================================================
// 4. canChangeTo  —  the mode-10 gate
// ===========================================================================
/**
 * canChangeTo lives at 0x607A26F8 (vtable slot +0x560) and dispatches through
 * a 9-entry jump table at 0x607A2724.                          [Vd]
 *
 *   idx 1 -> generic handler at 0x607A2748
 *
 * Modes 0..8 map to their own handlers; anything else (i.e. >= 9) falls to a
 * `bxhi lr` early-return that reports "no". Mode 10 therefore returns false
 * before any handler runs.
 *
 * Approach B patches the single instruction at 0x607A2708:
 *     1E FF 2F 81   bxhi lr       ->    01 30 A0 83   movhi r3, #1   [P]
 *
 * That routes mode 10 into the generic handler at 0x607A2748 instead of
 * bailing out. Verified: ELF bytes at 0x607A2708 are 1E FF 2F 81.
 */
bool __fastcall canChangeTo(Player* self, int newMode)
{
    // ... jump table dispatch over newMode ...
    // for newMode >= 9 the original code path returns false here:
    if (newMode >= 9)
        return false;                 // <- replaced by movhi r3,#1 in Approach B

    // idx 1 generic handler @ 0x607A2748
    // ...
}


// ===========================================================================
// 5. Fire action chain
// ===========================================================================
/**
 * State descriptor for the fire action is at RVA 0xCC4D6C.
 * Enter / execute / exit:  0x607AAF18 / 0x607AAF80 / 0x607AAF68   [V]
 */

// ---------------------------------------------------------------------------
// sub_607AAF18  —  fire action ENTER                              [Vd]
// ---------------------------------------------------------------------------
/**
 * No mode gate at all. Sets animation 33 ("fire_at"), the frame, and flags.
 * Because there is no gate, the enter path works for any mode -- nothing to
 * patch here. The flag mask 0x40C20 is OR-ed into +1224 (dword index 306).
 */
int __fastcall FireAction_enter(Player* self)
{
    sub_607948E8((int)self + 11356, 33);                 // animation 33
    *(u32*)((u8*)self + 160) = sub_60773F3C(self, *(u32*)((u8*)self + 80));
    *(u32*)((u8*)self + 12048) = *(u32*)((u8*)self + 80);
    return *(u32*)((u8*)self + 1224) |= 0x40C20;
}

// ---------------------------------------------------------------------------
// sub_607AAA00  —  setFireBallAction                              [Vd]
// ---------------------------------------------------------------------------
/**
 * Called unconditionally from sub_607965CC at 0x607966BC.
 *
 * MODE GATE at 0x607AAA88:  E3500002  cmp r0, #2   ->  cmp r0, #10    [P]
 * Verified original bytes: 02 00 50 E3.
 */
int __fastcall setFireBallAction(Player* self)
{
    if ((*(int(**)(Player*))(*self + 1064))(self))
        return 0;
    if ((*(u8*)((u8*)self + 1225) & 2) == 0)
        return 0;
    if (sub_60786670((u8*)self + 688) != 1)
        return 0;

    u32 mode = *(u32*)((u8*)self + cOff_mMode);

    if (mode - 5 >= 2)                       // not ice/penguin
    {
        if (mode != cMode_Fire)              // <<< 0x607AAA88 gate   [P]
            return 0;

        u32 pno = *(u8*)((u8*)self + cOff_mPlayerNo);
        int idx = (pno < 4) ? (s8)pno : 0;
        if (*(int*)(MEMORY[0xC7B420] + 8 * idx + 104) >= 2)
            return 0;
    }
    else
    {
        u32 pno = *(u8*)((u8*)self + cOff_mPlayerNo);
        int idx = (pno < 4) ? (s8)pno : 0;
        if (*(int*)(MEMORY[0xC7B420] + 8 * idx + 136) > 1)
            return 0;
    }

    // Ducking / swimming guards.
    if ((*(u8*)((u8*)self + 1207) & 0x40) == 0) { /* fall through */ }
    else if ((*(u8*)((u8*)self + 6905) & 0x80) != 0 && sub_60763E28(self))
        return 0;

    // Only switch state if we are currently in the idle state.
    int cur = StateMgr::getCurrentState((u8*)self + 9916);
    int curId = (*(int(**)(int))(*(u32*)cur + 8))(cur);

    if (curId == (*(int(**)(void))(MEMORY[0xCC4BE0] + 8))())
    {
        int wasSwimming = sub_607865A4((u8*)self + 688, 5);
        Player_changeState(self, 13389164 /* 0x00CC4D6C fire state */, 0);
        if (wasSwimming == 1)
            sub_6078667C((u32*)((u8*)self + 688), 5);
        return 1;
    }

    Player_changeState(self, 13389164, 0);
    return 1;
}

// ---------------------------------------------------------------------------
// sub_607AA954  —  checkSetFireBall                               [Vd]
// ---------------------------------------------------------------------------
/**
 * MODE GATE at 0x607AA9BC:  E3510002  cmp r1, #2   ->  cmp r1, #10    [P]
 * Verified original bytes: 02 00 51 E3.
 */
int __fastcall checkSetFireBall(Player* self)
{
    if (sub_60786670((u8*)self + 688) != 1)
        return 0;

    u32 mode = *(u32*)((u8*)self + cOff_mMode);

    if (mode - 5 >= 2)
    {
        if (mode == cMode_Fire)              // <<< 0x607AA9BC gate   [P]
        {
            u32 pno = *(u8*)((u8*)self + cOff_mPlayerNo);
            int idx = (pno < 4) ? (s8)pno : 0;
            if (*(int*)(MEMORY[0xC7B420] + 8 * idx + 104) < 2)
                return 1;
        }
    }
    else
    {
        u32 pno = *(u8*)((u8*)self + cOff_mPlayerNo);
        int idx = (pno < 4) ? (s8)pno : 0;
        if (*(int*)(MEMORY[0xC7B420] + 8 * idx + 136) <= 1)
            return 1;
    }
    return 0;
}

// ---------------------------------------------------------------------------
// sub_607AABA0  —  createFireBall                                 [Vd]
// ---------------------------------------------------------------------------
/**
 * This is the projectile spawn. The projectile's profile is resolved through a
 * runtime pointer cell, NOT a literal -- important for the patch:
 *
 *   0x607AAD10  LDR R0, =(off_60C61BE4 - 0x607AAD1C)
 *   0x607AAD14  LDR R0, [PC, R0]        ; R0 = off_60C61BE4
 *   0x607AAD18  LDR R0, [R0]            ; R0 = *off_60C61BE4  <- the entry ptr
 *   0x607AAD1C  BL  Profile::get
 *
 * The literal 11482256 (0x00AF3490) is the address of the *pointer cell*.
 * That cell holds 0x00AF3498, and 0x00AF3498 holds 476 = FireBall profile.
 * (Verified: 0x00AF3498 -> 476, 0x00AF3904 -> 759.)
 *
 * Approach B therefore patches the CELL at 0x60C61BE4:
 *     0x00AF3498 (FireBall 476)  ->  0x00AF3904 (Hammer 759)     [P]
 *
 * MODE GATES in this function:
 *   0x607AABB8  E3500002 cmp r0,#2  -> cmp r0,#10               [P]
 *   0x607AAC94  E3500002 cmp r0,#2  -> cmp r0,#10               [P]
 * Both verified: original bytes 02 00 50 E3.
 */
void __fastcall createFireBall(Player* self, int facing)
{
    u32 mode = *(u32*)((u8*)self + cOff_mMode);

    // --- ice / penguin branch (mode 5 or 6) ----------------------------
    if (mode == 2)                           // <<< 0x607AABB8 gate  [P]
    {
        u32 pno = *(u8*)((u8*)self + cOff_mPlayerNo);
        int idx = (pno < 4) ? (s8)pno : 0;
        if (*(int*)(MEMORY[0xC7B420] + 8 * idx + 100) < 6)
            goto spawn_fire;
        sub_6000A2E8(MEMORY[0xC7B420], (s8)pno);
        mode = *(u32*)((u8*)self + cOff_mMode);
    }

    if ((u32)(mode - 5) < 2)
    {
        /* ... ice ball spawn, SE_PLY_THROW_ICEBALL ... */
        return;
    }

    if (mode != 2)                           // <<< 0x607AAC94 gate  [P]
        return;

spawn_fire:
    {
        struct ProjectileSpawn s;
        memset(&s, 0, 0x2C);

        sub_607734E8(self, "SE_PLY_THROW_FIRE", 0, 0);

        // Profile::get(*(u32*)0x00AF3490)  -- see note above
        s.profile = Profile::get(*(u32*)0x00AF3490);        // [V]

        s.field_1C = sub_608336A8(*(u32*)((u8*)self + cOff_mHeightClass));

        // Packed spawn flags: layer, facing, attack type, player no.
        s.flags = ((*(u8*)((u8*)self + cOff_mAttackType) & 0xF) << 12)
                | (facing << 16)
                | ((*(u8*)((u8*)self + cOff_mLayer) & 0xF) << 8)
                | (u8)(16 * *(u8*)((u8*)self + cOff_mHeightClass))
                | (*(u8*)((u8*)self + cOff_mPlayerNo) & 0xF);

        // Attach to the hand joint.
        u32 mgr = *(u32*)((u8*)self + 648);
        (*(void(**)(u32, f32*, void*))(**(u32**)(mgr + 4) + 144))(
            *(u32*)(mgr + 4), jointPos, &(ResourceName){ 12321336, "wrist_l1" });

        // ... direction/scale fixups for the thrown projectile ...

        s.pos[0] = jointPos[0];
        s.pos[1] = jointPos[1];
        s.pos[2] = *(u32*)((u8*)self + 116);

        sub_600080BC(MEMORY[0xC7B400], &s);
    }
}

// ---------------------------------------------------------------------------
// sub_607AAF80  —  fire action EXECUTE                            [Vd]
// ---------------------------------------------------------------------------
/**
 * Three patches here, all in the state-machine tail:
 *
 *   0x607AAFF4   E3510006  cmp r1, #6   ->  cmp r1, #10          [P]
 *   0x607AB000   E3A03064  mov r3, #0x64
 *                -> E3003464  movw r3, #0x464                     [P]
 *   0x607AB0E4   E3500002  cmp r0, #2   ->  cmp r0, #10          [P]
 *
 * The mask interpretation: 0x64 = bits 2, 5, 6. The fire-execute switch
 * accepts modes {2, 5, 6} via `(1 << mMode) & 0x64`. 0x464 = bits 2, 5, 6, 10,
 * so it adds mode 10 and PRESERVES the ice/penguin modes. That is why the
 * replacement is movw #0x464 rather than simply widening bit 2.
 */
int __fastcall FireAction_execute(Player* self)
{
    sub_607712D4(self);
    (*(void(**)(Player*))(*(u32*)self + 1104))(self);
    sub_60771D8C(self);
    sub_607711C8(self);

    u32* flags = (u32*)((u8*)self + 1224);
    int  airborne = *(u32*)((u8*)self + 6900) & 1;

    u32 v = *flags & 0xFFFFBE3B;
    if (!airborne)
        v = *flags | 0x41C4;
    *flags = v;

    u32 mode = *(u32*)((u8*)self + cOff_mMode);

    // (1 << mode) & 0x64  -> 0x64 = bits 2,5,6   <<< 0x607AB000 patch  [P]
    if (mode > 6 || ((1u << mode) & 0x64u) == 0)
    {
        if (!airborne)
            return Player_changeState(self, 13388804, 0);
        return Player_changeState(self, 13388732, 1);
    }

    u32* subState = (u32*)((u8*)self + 9940);

    if (*subState == 1)
    {
        if (sub_60786670((u8*)self + 688) != 1)
            goto slow_path;

        u32 m = *(u32*)((u8*)self + cOff_mMode);
        if ((u32)(m - 5) < 2)
        {
            u32 pno = *(u8*)((u8*)self + cOff_mPlayerNo);
            int idx = (pno < 4) ? (s8)pno : 0;
            if (*(int*)(MEMORY[0xC7B420] + 8 * idx + 136) <= 1)
                goto do_spawn;
        }
        else
        {
            if (m != 2)                       // <<< 0x607AB0E4 gate  [P]
                goto slow_path;

            u32 pno = *(u8*)((u8*)self + cOff_mPlayerNo);
            int idx = (pno < 4) ? (s8)pno : 0;
            if (*(int*)(MEMORY[0xC7B420] + 8 * idx + 104) < 2)
                goto do_spawn;
        }
    }
    // ... remaining branches elided; they are unchanged by the patch ...

do_spawn:
    *(u32*)((u8*)self + cOff_mHeightClass) = *(u32*)((u8*)self + 80);
    *(u32*)((u8*)self + 160) = sub_60773F3C(self, *(u32*)((u8*)self + 80));
    *subState = 0;
    sub_607948E8((int)self + 11356, 33);
    return sub_60793114(*(u32*)((u8*)self + 11360));

slow_path:
    return 0;
}


// ===========================================================================
// 6. Data tables that constrain mode 10
// ===========================================================================
/**
 * Three tables are indexed by power-up mode and have exactly TEN entries
 * (indices 0..9). Mode 10 indexes one element past each.            [V]
 */

// --- tall-type table, dword_60B0C300 @ 0x60B0C300 ---------------------------
// Live values (verified from the ELF):
//   [1, 2, 2, 0, 2, 2, 2, 2, 2, 0, 0, 0]
// Index 10 is 0x00 zero-padding and the next table starts at 0x60B0C330,
// so writing index 10 (-> 2 = Normal) here is SAFE.                [P]
static constexpr u32 cTallTypeTableVA = 0x60B0C300;
static constexpr u32 cTallTypeIdx10   = 0x60B0C328;   // [P] write 2 here

// --- height table, flt_60B0C2BC @ 0x60B0C2BC --------------------------------
//   [16.0, 31.0, 31.0, 6.0, 31.0, 31.0, 31.0, 31.0, 31.0, 31.0]
// Index 10 (0x60B0C2E4) is 0.0 AND is the base of dword_60B0C2E4[], which
// sub_60797598 reads. Writing a height here would corrupt that table.
// => must NOT patch in place; relocate.                            [V]
static constexpr u32 cHeightTableVA   = 0x60B0C2BC;
static constexpr u32 cHeightIdx10     = 0x60B0C2E4;   // must stay 0.0
static constexpr u32 cHeightDwordBase = 0x60B0C2E4;   // sub_60797598 reads here

// --- body table, cPlayerModelData @ 0x60B0C230 ------------------------------
//   [1, 0, 0, 1, 2, 3, 0, 4, 4, 5]
// Index 10 (0x60B0C258) is 0xA5 AND is the base of dword_60B0C258[], which
// sub_60792394 reads. => must NOT patch in place; relocate.        [V]
static constexpr u32 cBodyTableVA     = 0x60B0C230;
static constexpr u32 cBodyIdx10       = 0x60B0C258;   // must stay 0xA5
static constexpr u32 cBodyDwordBase   = 0x60B0C258;   // sub_60792394 reads here

// --- tall-type Y offsets, flt_60B0C8A0 @ 0x60B0C8A0 ------------------------
//   [21.0 (Mini), 11.0 (Small), 0.0 (Normal)]
// sub_607A2F40 uses:  flt_60B0C8A0[getTallType(mMode)]
//                   - flt_60B0C8A0[getTallType(mModePrev)]
// Since getTallType(10) is patched to 2, this indexes flt_60B0C8A0[2] = 0.0,
// which is valid. No patch needed.                                 [V]
static constexpr u32 cTallTypeYOffsetsVA = 0x60B0C8A0;

// --- balloon offset Y, c_balloon_offset_y @ 0x60B0C34C --------------------
// Verified live values (11 slots): 0, -4, -4, 4, -5, -2, -4, -4, -4, 0, 0
// Index 10 is already 0.0, and the neighbouring values are non-zero, so this
// table has an extra slot of room. Optional patch if Hammer+Balloon is
// reachable: 0x60B0C374 0.0 -> -4.0.                              [V]/[P]
static constexpr u32 cBalloonOffsetYVA = 0x60B0C34C;
static constexpr u32 cBalloonIdx10     = 0x60B0C374;   // currently 0.0


// ===========================================================================
// 7. Relocation block for the two unsafe tables
// ===========================================================================
/**
 * 0x60B493A8 .. 0x60B49448 is a 0xA0 (160-byte) all-zero block inside
 * .rodata, between pitch/sound tables. Verified: 160 bytes, 0 non-zero.
 * No IDA xrefs, no pointer hits, no .rel.dyn entries. Only 88 of the 160
 * bytes are needed.                                                  [V]
 */
static constexpr u32 cRelocBlockVA   = 0x60B493A8;   // [V] all zero
static constexpr u32 cRelocBlockSize = 0xA0;         // 160 bytes

// Height table copy, 11 floats, at 0x60B493A8  (file offset 0x00B49194)  [P]
static constexpr u32 cNewHeightTableVA = 0x60B493A8;
static const f32 cNewHeightTable[11] = {
    16.0f, 31.0f, 31.0f, 6.0f, 31.0f,
    31.0f, 31.0f, 31.0f, 31.0f, 31.0f,
    31.0f                    // index 10 = 31.0f (the Normal height)
};

// Body table copy, 11 bytes, at 0x60B493D8  (file offset 0x00B491C4)  [P]
static constexpr u32 cNewBodyTableVA = 0x60B493D8;
static const u8 cNewBodyTable[11] = {
    1, 0, 0, 1, 2, 3, 0, 4, 4, 5,
    0                        // index 10 = 0
};

// --- literal redirects that point the readers at the new tables -----------
// (label, literal cell VA, current value, new value)                      [V]/[P]
//
//   0x60795FF0  cur 0x00376578  -> 0x003B3664   height  (sub_60795CDC)
//   0x607960F8  cur 0x003762A4  -> 0x003B3390   height  (sub_60796004)
//   0x6078C58C  cur 0x0037FCF0  -> 0x003BCE98   body    (sub_6078C444)
//   0x6078E604  cur 0x0037DC70  -> 0x003BAE18   body    (sub_6078E5A8)
//   0x6078E7E8  cur 0x0037DC00  -> 0x003BADA8   body    (sub_6078E608)
//
// All five confirmed to hold the stated current values in the ELF.
struct LiteralRedirect
{
    u32 cellVA;
    u32 oldValue;
    u32 newValue;
    const char* what;
};

static const LiteralRedirect cLiteralRedirects[] = {
    { 0x60795FF0, 0x00376578, 0x003B3664, "height table A (sub_60795CDC)" },
    { 0x607960F8, 0x003762A4, 0x003B3390, "height table B (sub_60796004)" },
    { 0x6078C58C, 0x0037FCF0, 0x003BCE98, "body table A   (sub_6078C444)" },
    { 0x6078E604, 0x0037DC70, 0x003BAE18, "body table B   (sub_6078E5A8)" },
    { 0x6078E7E8, 0x0037DC00, 0x003BADA8, "body table C   (sub_6078E608)" },
};


// ===========================================================================
// 8. Hammer actor (profile 759)
// ===========================================================================
//
//   factory        0x6013F02C   [Vd]
//   constructor    0x6014065C   [Vd]
//   init           0x6013FB0C   [Vd]
//   vtable         0x60BD32B4   [Vd]
//   allocation     11912 bytes  [Vd]
//
// The Hammer actor is fully implemented in the shipping game -- it is used by
// Hammer Bro. The mod does not create an actor; it redirects the player's
// projectile profile from FireBall (476) to Hammer (759).

static constexpr u32 cHammerFactory = 0x6013F02C;
static constexpr u32 cHammerCtor    = 0x6014065C;
static constexpr u32 cHammerInit    = 0x6013FB0C;
static constexpr u32 cHammerVtable  = 0x60BD32B4;
static constexpr u32 cHammerAlloc   = 11912;


// ===========================================================================
// 9. Profile ID constants
// ===========================================================================
static constexpr u32 cProfileID_FireBall = 476;   // 0x00AF3498 -> 476  [V]
static constexpr u32 cProfileID_Hammer   = 759;   // 0x00AF3904 -> 759  [V]


// ===========================================================================
// 10. Patch plan — Approach A + Approach B
// ===========================================================================
/**
 * Every row below was byte-verified against the source ELF: the "original"
 * bytes match at the given VA. See scripts/verify_hammer_bytes.py.
 *
 * Approach A: 11 validated Hammer actor / projectile patches (not all listed
 *             here; the mode-independent set).
 * Approach B: 11 mode-10 instruction patches, 2 relocated tables, 5 literal
 *             redirects, 1 profile-cell redirect.
 *
 * Design choice: every mode-2 gate is rewritten to compare against 10, rather
 * than adding a dual-mode test. Fire mode 2 is intentionally left unreachable
 * after the remap.
 */
struct BytePatch
{
    u32         va;
    u8          oldBytes[4];
    u8          newBytes[4];
    const char* what;
};

static const BytePatch cApproachBPatches[] = {
    // --- mode-10 gate rewrites -------------------------------------------
    { 0x6045DDCC, {0x02,0x20,0xA0,0xE3}, {0x0A,0x20,0xA0,0xE3},
      "grant: mov r2,#2 -> mov r2,#10" },
    { 0x607AAA88, {0x02,0x00,0x50,0xE3}, {0x0A,0x00,0x50,0xE3},
      "setFireBallAction: cmp r0,#2 -> #10" },
    { 0x607AA9BC, {0x02,0x00,0x51,0xE3}, {0x0A,0x00,0x51,0xE3},
      "checkSetFireBall: cmp r1,#2 -> #10" },
    { 0x607AABB8, {0x02,0x00,0x50,0xE3}, {0x0A,0x00,0x50,0xE3},
      "createFireBall: cmp r0,#2 -> #10 (a)" },
    { 0x607AAC94, {0x02,0x00,0x50,0xE3}, {0x0A,0x00,0x50,0xE3},
      "createFireBall: cmp r0,#2 -> #10 (b)" },
    { 0x607AAFF4, {0x06,0x00,0x51,0xE3}, {0x0A,0x00,0x51,0xE3},
      "execute: cmp r1,#6 -> #10" },
    { 0x607AB000, {0x64,0x30,0xA0,0xE3}, {0x64,0x34,0x00,0xE3},
      "execute: mov r3,#0x64 -> movw r3,#0x464" },
    { 0x607AB0E4, {0x02,0x00,0x50,0xE3}, {0x0A,0x00,0x50,0xE3},
      "execute: cmp r0,#2 -> #10" },
    { 0x607A2708, {0x1E,0xFF,0x2F,0x81}, {0x01,0x30,0xA0,0x83},
      "canChangeTo: bxhi lr -> movhi r3,#1" },

    // --- tall type index 10 (safe in place) ------------------------------
    // 0x60B0C328: write 0x00000002 (Normal)
};

static constexpr u32 cTallTypeIdx10PatchVA = 0x60B0C328;   // [P] -> u32 2


// ===========================================================================
// 11. Verification results (current work state)
// ===========================================================================
/**
 * Verified against convertedmain.rebased.elf:
 *   MD5 f8a2e4c3616b8a99632b8ffe68938c34
 *   PT_LOAD 0: vaddr 0x60000000 filesz 0x9AE990 off 0x45C
 *   PT_LOAD 1: vaddr 0x609AF000 filesz 0x210A53 off 0x9AEDEC
 *   PT_LOAD 2: vaddr 0x60BC0000 filesz 0x0BB274 off 0xBBF83F
 *
 *   All 9 instruction patches: original bytes MATCH.
 *   All 5 literal cells:       current values MATCH the recorded ones.
 *   Profile pointer cell:      0x00AF3498 -> 476  (MATCH)
 *   Relocation block:          160 bytes, all zero (MATCH)
 *   Profile entries:           0x00AF3498 -> 476, 0x00AF3904 -> 759 (MATCH)
 *
 * NOT yet verified:
 *   - Runtime behaviour of the patched build in an emulator or on hardware.
 *   - Whether a dedicated Hammer suit model exists (none found; the current
 *     plan reuses the Normal body with the Fire suit colour).
 *   - Double-hit risk, direction bit-4 behaviour, model-swap stability for
 *     mode 10, and the Hammer spawn parameters taken from the fire path.
 */
