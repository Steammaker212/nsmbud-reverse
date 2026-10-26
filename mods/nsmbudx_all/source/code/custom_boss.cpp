// custom_boss.cpp -- a custom boss built on the reversed Lemmy fight.
//
// This is the "custom boss fight" half of the World 1 work. It does not add a
// new actor class (that needs a profile + factory, which the framework already
// supports); instead it retunes the *existing* fight so the pieces the reverse
// identified can be exercised and confirmed:
//
//   1. HP and phase size. readable/boss/Lemmy.cpp established that the fight's
//      stamina model is two shared virtuals: +0x314 returns total HP (24) and
//      +0x2FC returns hits per phase (6). Both are patched here, which is the
//      cheapest possible "custom boss" and proves the model is right -- if the
//      numbers are what the reverse says, changing them changes the fight.
//
//   2. The door handshake. Every boss looks up a Kupper door by *link id*
//      (+0x1FB8) when it takes damage and pushes it into its open state. This
//      mod logs that lookup so a run confirms the link id is what connects the
//      boss to the arena's door.
//
//   3. The damage pipeline. BossBase::vf15C (0x600259B8) is where every
//      collision converges. Hooking it shows the HP counter (+0x189C), the
//      per-phase count (+0x18A0) and the "took damage" flag (+0x18A8) moving,
//      which is what confirms they are HP/phase rather than flags.
//
// Deluxe (Switch) v1.0.0. Ledger F0149-F0158.

#include "actor/stageactor.h"
#include "game/enemy.h"
#include "nsmbudx/log.h"

// =====================================================================
//  CONFIGURATION
// =====================================================================

// New total HP and hits-per-phase for every boss in the base family.
//
// Vanilla is 24 and 6 (four phases). 12 / 3 keeps four phases but halves the
// fight; 24 / 8 gives three phases. The phase count is total / per, so a value
// that does not divide evenly still works -- the last phase is just short.
#define BOSS_TOTAL_HP       12
#define BOSS_PHASE_HITS     3

// Log the fight as it happens. Leave 1 while testing.
#define BOSS_LOG            1

// Pick which sibling's speed numbers to use: 1 = Lemmy's, 0 = Ludwig's.
#define CUSTOM_BOSS_PROFILE_LEMMY 1

// =====================================================================
//  Offsets (all from readable/boss/Lemmy.cpp)
// =====================================================================

namespace {

// BossBase / KoopalingBase state block.
constexpr u32 kHp            = 0x189C;   // current HP   (writable)
constexpr u32 kHitsPerPhase  = 0x18A0;   // phase size   (writable)
constexpr u32 kHealthTotal   = 0x18A4;   // vf314 result stored here
constexpr u32 kDamageFlag    = 0x18A8;   // u8, set on every hit
constexpr u32 kLinkId        = 0x1FB8;   // -> the arena's Kupper door
constexpr u32 kFlag1FBC      = 0x1FBC;

// The linker between boss and door. ActorMgr's sub-object, not the main list.
constexpr u32 kActorMgrLinkBase = 27168;   // 0x6A20

u32 g_logged = 0;

inline u32  readU32(void* o, u32 off)  { return *(u32*)((char*)o + off); }
inline void writeU32(void* o, u32 off, u32 v) { *(u32*)((char*)o + off) = v; }

} // namespace


// =====================================================================
//  Hook: BossBase::vf15C -- the damage pipeline
// =====================================================================
//
// 0x600259B8. This is where every boss collision converges (it is called from
// collisionPlayer, collisionFireball, collisionGroundPound,
// collisionThrowableObject and more), so it is the single best place to watch a
// fight.
//
// The prologue is `push {r4, r5, r6, lr}` (0xe92d4070): safe to trampoline.
extern "C" int CustomBoss_vf15C_orig(void* self);
extern "C" int CustomBoss_vf15C(void* self)
{
    // Read before the game's own code runs, so these are the pre-hit values.
    const u32 hpBefore   = readU32(self, kHp);
    const u32 phaseHits  = readU32(self, kHitsPerPhase);
    const u32 linkId     = readU32(self, kLinkId);

    const int result = CustomBoss_vf15C_orig(self);

#if BOSS_LOG
    if (g_logged < 40)
    {
        ++g_logged;
        // Report what the pipeline did. HP is the value at +0x189C; when it hits
        // zero the boss is dead and the door handshake follows.
        nsmbudx::log("boss: hp ", hpBefore,
                     " -> ", readU32(self, kHp),
                     " phaseSize ", phaseHits,
                     " link ", linkId,
                     " hpTotal ", readU32(self, kHealthTotal),
                     " doorLink ", readU32(self, kFlag1FBC));
    }
#endif

    return result;
}


// =====================================================================
//  Hook: BossBase::vf314 -- total HP
// =====================================================================
//
// 0x60026798 is literally `mov r0,#0x18 ; bx lr` -- `return 24`. It is shared by
// every boss in the base family (KoopalingBase, BossBase, BoomBoomBase all point
// at it), so patching it retunes total HP for all of them at once.
//
// The function is 8 bytes and cannot be trampolined (there is no room for a
// branch-back before the next function's `push`), so this hook returns the
// constant directly and never calls the original. That is the correct shape for
// these one-liner constant virtuals -- see the note on vf2FC below.
extern "C" u32 CustomBoss_vf314(void* self)
{
    (void)self;
    return BOSS_TOTAL_HP;
}


// =====================================================================
//  Hook: BoomBoomBase::vf2FC -- hits per phase
// =====================================================================
//
// 0x6004F320 is `mov r0,#6 ; bx lr`, and +0x2FC is **pure virtual** in BossBase,
// so every boss class must supply its own. The per-boss values are all
// two-instruction constants:
//
//     BoomBoomBase   6      <- what the Koopalings use (24/6 = 4 phases)
//     SumoBrosBoss   0
//     Bowser         10
//     FinalBowser    10
//
// Patching BoomBoomBase's implementation is what reaches the Koopalings, because
// KoopalingBase does not override +0x2FC -- it inherits this one. Confirm that
// before relying on it: the Lemmy vtable diff in readable/boss/Lemmy.cpp does not
// list +0x2FC as one of his 38 changed slots, which is exactly why patching the
// BoomBoomBase implementation is the right lever here.
//
// 8 bytes, so no trampoline: return the constant directly.
extern "C" u32 CustomBoss_vf2FC(void* self)
{
    (void)self;
    return BOSS_PHASE_HITS;
}


// =====================================================================
//  Per-Koopaling tuning (readable/boss/Koopalings.cpp)
// =====================================================================
//
// The nine tuning slots are the only place the seven siblings differ in plain
// numbers rather than code. They are listed here so a custom fight can pick a
// sibling's numbers -- or mix them -- without touching the binary.
//
// Vanilla, as the game holds it:
//
//   sibling  +0x448  +0x46C  +0x47C  +0x49C  +0x4A8
//   Larry     1.20    0.50    64.0    -1.0    17.0
//   Lemmy     1.25    0.50    64.0    11.0    22.0
//   Morton    1.20    0.50     0.0    -1.0    10.0
//   Wendy     1.20    0.50    64.0    -1.0    10.0
//   Ludwig    1.30    0.60    64.0    -1.0    17.0
//   Iggy      1.20    0.50    64.0    15.0     3.0
//   Roy       1.20    0.50   112.0    -1.0     8.0
//
// The base defaults for +0x448 and +0x46C are real (1.0 and 0.5); the other
// seven default to 0.0. So a custom boss that wants "sane defaults" must set at
// least those seven explicitly -- see F0165.
//
// Example "faster, tankier Lemmy": reuse Lemmy's row but raise the speed slots.
// These are compile-time choices on purpose; the mod is a demonstration, not a
// config system.
#if CUSTOM_BOSS_PROFILE_LEMMY
constexpr f32 kBossSpeedA = 1.25f;   // +0x448, vanilla Lemmy
constexpr f32 kBossSpeedB = 0.50f;   // +0x46C
#else
constexpr f32 kBossSpeedA = 1.30f;   // Ludwig's faster value
constexpr f32 kBossSpeedB = 0.60f;
#endif


// =====================================================================
//  Hooks: the two speed getters
// =====================================================================
//
// +0x448 base = 0x600B7EC8 (`1.0f`), +0x46C base = 0x600A13A4 (`0.5f`).
//
// Whether a hook here reaches a given sibling depends on whether that sibling
// overrode the slot, and the answer differs per slot -- verified, not assumed:
//
//   Lemmy  +0x448 -> 0x600DEE24  (his own, 1.25f)   -- hook does NOT reach him
//   Lemmy  +0x46C -> 0x600A13A4  (the BASE, 0.5f)   -- hook DOES reach him
//   Morton +0x448 -> 0x600F14BC  (his own)
//   Morton +0x47C -> 0x600F46B0  (his own, 0.0f)
//
// So Lemmy inherits his phase-speed constant and overrides his walk speed. This
// is the general trap in retuning a boss: a slot in the "overridden by all
// seven" list is *not* uniformly overridden -- +0x46C is 0.50 for six siblings
// precisely because several of them point at this same base function.
//
// Both are 8-byte `vmov.f32 s0,#k ; bx lr` one-liners with no room for a
// branch-back, so each returns its constant directly and never calls the
// original. Because there is no call into the original, there is no soft/hard
// float ABI transition to worry about: we simply leave the value in s0.
extern "C" float CustomBoss_vf448(void* self)
{
    (void)self;
    return kBossSpeedA;
}

extern "C" float CustomBoss_vf46C(void* self)
{
    (void)self;
    return kBossSpeedB;
}
