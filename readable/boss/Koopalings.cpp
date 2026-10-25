// Koopalings.cpp -- all seven Koopalings as one table.
//
// Lemmy.cpp covers World 1 in narrative form. This file is the other half of the
// picture: what is *shared* by the seven siblings, what is *per sibling*, and
// how a custom boss slots into that. The distinction is the whole modding
// contract, so it is worth stating precisely:
//
//   * 26 vtable slots are overridden by all seven. Those are the per-sibling
//     contract -- a custom boss must supply them or it will behave like
//     whatever it inherits, which is usually "not a boss".
//   * 31 slots have seven distinct implementations. Those are the individual
//     behaviour.
//   * 9 slots return a plain float constant for all seven. Those are the tuning
//     knobs, and they are data, not code.
//
// Deluxe (Switch) v1.0.0. Ledger F0159-F0163.

#include "game/enemy.h"

// ---------------------------------------------------------------------------
// The seven profiles
// ---------------------------------------------------------------------------
//
// Everything here resolved the same way: the factory allocates, calls
// KoopalingBase::KoopalingBase (0x600B137C), then installs a vtable through the
// GOT (`ldr rX,[pc,#imm]` -> `ldr rX,[pc,rX]` -> `add rX,rX,#8`).
//
//   sibling  sprite  factory      vtable        sizeof
//   -------  ------  -----------  ------------  ------
//   Larry    694     0x600D77C4   0x60BCBC50    0x2078
//   Lemmy    696     0x600DBDDC   0x60BCC370    0x1FD0
//   Morton   697     0x600EEECC   0x60BCE3A4    0x21D8
//   Wendy    700     0x601248D0   0x60BD1120    0x2168
//   Ludwig   702     0x600E7508   0x60BCDBD4    0x20A8
//   Iggy     704     0x60097A5C   0x60BC7C48    0x20F0
//   Roy      707     0x60108C84   0x60BCFED0    0x2180
//
// All seven chain to the SAME constructor (0x600B137C) before installing their
// vtable, which is why the shared block below is identical across them. But note
// that the sizes are NOT "KoopalingBase plus a bit": Lemmy is the *smallest* at
// 0x1FD0 and the others run 0x2078-0x21D8, so the base layout ends below 0x1FD0
// and each sibling adds its own fields on top. A custom sibling allocates its own
// size and must not assume Lemmy's.
//
// Watch out for two traps when resolving these yourself:
//
//   1. The literal pool is in .text, so a reader that only looks at .data
//      returns garbage and every chain "fails". Use a section-agnostic reader.
//   2. Each factory contains SEVERAL GOT chains (the ctor's own colliders and
//      effect wrappers install vtables too). Taking the first match gives you
//      `0x60BC1450` -- an EffectWrapper vtable -- for Larry, Morton and Wendy.
//      The class vtable is the chain whose target is a dense run of .text
//      pointers, so score candidates instead of trusting the first.

constexpr u32 kKoopalingBaseCtor   = 0x600B137C;
constexpr u32 kKoopalingBaseVtable = 0x60BC91CC;


// ---------------------------------------------------------------------------
// The 26-slot contract
// ---------------------------------------------------------------------------
//
// These offsets are overridden by all seven siblings. They are the minimum a
// custom Koopaling must provide.
//
//   0x000 0x004 0x00C   destructor and the two delete variants (class identity)
//   0x020               an early virtual, per class
//   0x1BC 0x1C0 0x1C4   three 12-byte thunks (parameter shuffles)
//   0x300               play the damage animation for this sibling
//   0x370               the arena handshake (see Lemmy.cpp)
//   0x3EC 0x3FC         boss-mode toggles
//   0x414 0x418 0x41C 0x420 0x424   the attack set
//   0x448 0x460         movement / tuning hooks
//   0x474 0x478         attack-pattern hooks
//   0x490 0x494         spawn hooks
//   0x49C 0x4A0 0x4A4 0x4A8   tuning constants (see the table below)
//
// Note what is NOT in the contract: +0x314 (total HP) and +0x2FC (hits per
// phase) are overridden by NOBODY. All seven point at the same two functions as
// KoopalingBase:
//
//   +0x314 -> 0x60026798   `mov r0,#24 ; bx lr`      total HP
//   +0x2FC -> 0x6004F320   `mov r0,#6  ; bx lr`      hits per phase
//   +0x2DC -> 0x60031FC8                              apply damage
//
// so every Koopaling is 24 HP / 6 per phase / 4 phases, and this was verified
// across all seven rather than inferred from Lemmy. That is why mods/custom_boss
// patches those two shared functions to retune every Koopaling at once.
//
// `+0x374` is the "act like an ordinary enemy instead" flag used by
// BossBase::collisionPlayer. Six siblings share 0x600AB700 (the base); Iggy
// (0x600A1150) and Wendy (0x6012A4F8) override it, so those two have their own
// idea of when the boss is vulnerable.


// ---------------------------------------------------------------------------
// The per-sibling behaviour slots
// ---------------------------------------------------------------------------
//
// Full resolution for the slots that differ per sibling. The animation, voice
// and handshake columns are what actually distinguish the fights:
//
//   slot    Larry       Lemmy       Morton      Wendy       Ludwig      Iggy        Roy
//   +0x300  0x600D8F00  0x600DD90C  0x600F074C  0x60128094  0x600E8FA4  0x6009D6BC  0x6010ADBC
//   +0x36C  0x600B2C98  0x600DD80C  0x600F03EC  0x6012802C  0x600EC430  0x6009D4F8  0x6010AD44
//   +0x370  0x600DA900  0x600DD710  0x600F00CC  0x60127DF8  0x600EC784  0x6009D010  0x6010A77C
//   +0x374  0x600AB700  0x600AB700  0x600AB700  0x6012A4F8  0x600AB700  0x600A1150  0x600AB700
//
// Larry's +0x36C is the only one that points at the shared KoopalingBase
// implementation (0x600B2C98) rather than its own -- i.e. Larry does not
// customise voice-line selection and takes the default.
//
// The database names for Iggy's slots (`Iggy::vf300`, `Iggy::vf36C`,
// `Iggy::vf370`) match these offsets exactly, which independently confirms the
// roles derived for Lemmy in readable/boss/Lemmy.cpp: +0x300 = damage animation,
// +0x36C = voice, +0x370 = arena handshake.


// ---------------------------------------------------------------------------
// The tuning table: 9 slots, all constant returns
// ---------------------------------------------------------------------------
//
// These are the only slots where all seven siblings return a plain immediate or
// literal -- no control flow at all. That makes them the safest thing to edit
// and the clearest statement of how the siblings differ in "feel".
//
//   slot    Larry  Lemmy  Morton  Wendy  Ludwig  Iggy   Roy     base
//   +0x448   1.20   1.25    1.20   1.20    1.30  1.20   1.20    0.0
//   +0x46C   0.50   0.50    0.50   0.50    0.60  0.50   0.50    0.0
//   +0x47C  64.00  64.00    0.00  64.00   64.00 64.00 112.00    0.0
//   +0x49C  -1.00  11.00   -1.00  -1.00   -1.00 15.00  -1.00    0.0
//   +0x4A0   1.00   5.00    1.00   1.00    1.00  1.00   1.00    0.0
//   +0x4A4   1.00   1.00    1.00   1.00    1.00  3.00   1.00    0.0
//   +0x4A8  17.00  22.00   10.00  10.00   17.00  3.00   8.00    0.0
//   +0x4B0  10.00   0.00    0.00   0.00   10.00 10.00   0.00    0.0
//   +0x4CC  10.00   0.00   14.00  14.00   10.00 10.00  10.00    0.0
//
// The base class returns **0.0** for all nine, so a sibling that leaves a slot
// alone gets zero, not a sane default -- which is why all seven override all
// nine. -1.00 at +0x49C for four siblings is a sentinel, and only Lemmy (11) and
// Iggy (15) use it, the two whose fights revolve around a thrown object.
//
// Interpretation is deliberately conservative here: these are *verified
// constants in verified slots*, but their units are not established. +0x448
// clusters at 1.2-1.3 and +0x46C at 0.5-0.6, which reads like a speed pair;
// +0x47C clusters at 64 with Roy at 112 and Morton at 0, which reads like a
// distance or velocity. Treat the roles as inferred and the numbers as fact.
//
// NOTE on reading these: the constant-return idiom is `vldr s0,[pc]` + `bx lr`,
// and ARM's VLDR computes `align(addr+8,4) + imm`. Using `addr+4` instead yields
// garbage like -2.03e20 -- which is exactly the bogus table an earlier pass of
// this work produced before the addressing was corrected.

struct KoopalingTuning
{
    f32 speedA;        // +0x448
    f32 speedB;        // +0x46C
    f32 distance;      // +0x47C
    f32 special;       // +0x49C   (-1 = unused)
    f32 paramA;        // +0x4A0
    f32 paramB;        // +0x4A4
    f32 paramC;        // +0x4A8
    f32 paramD;        // +0x4B0
    f32 paramE;        // +0x4CC
};

// The table as the game actually holds it, per sibling.
const KoopalingTuning kTuning[7] =
{
    //          speedA speedB distance special paramA paramB paramC paramD paramE
    /* Larry  */ { 1.20f, 0.50f,  64.00f,  -1.00f, 1.00f, 1.00f, 17.00f, 10.00f, 10.00f },
    /* Lemmy  */ { 1.25f, 0.50f,  64.00f,  11.00f, 5.00f, 1.00f, 22.00f,  0.00f,  0.00f },
    /* Morton */ { 1.20f, 0.50f,   0.00f,  -1.00f, 1.00f, 1.00f, 10.00f,  0.00f, 14.00f },
    /* Wendy  */ { 1.20f, 0.50f,  64.00f,  -1.00f, 1.00f, 1.00f, 10.00f,  0.00f, 14.00f },
    /* Ludwig */ { 1.30f, 0.60f,  64.00f,  -1.00f, 1.00f, 1.00f, 17.00f, 10.00f, 10.00f },
    /* Iggy   */ { 1.20f, 0.50f,  64.00f,  15.00f, 1.00f, 3.00f,  3.00f, 10.00f, 10.00f },
    /* Roy    */ { 1.20f, 0.50f, 112.00f,  -1.00f, 1.00f, 1.00f,  8.00f,  0.00f, 10.00f },
};


// ---------------------------------------------------------------------------
// What a custom boss needs, in dependency order
// ---------------------------------------------------------------------------
//
// Derived from the above rather than guessed:
//
//   1. A profile whose factory allocates your sizeof, calls
//      KoopalingBase::KoopalingBase (0x600B137C), then installs your vtable.
//      Chaining to the shared ctor is what gives you the colliders, sound
//      actor, look target and scaler for free.
//
//   2. A vtable that overrides the 26 contract slots. Missing +0x370 is the
//      classic failure: the boss dies and the arena never opens.
//
//   3. The 9 tuning constants. Because the base returns 0.0 for all of them, an
//      omitted slot is not "default behaviour" -- it is zero, so override all
//      nine even if you want the vanilla-looking values.
//
//   4. A level with a Kupper door (sprite 609 / profile 261) whose link id
//      matches +0x1FB8.
//
// You do NOT need to touch +0x314/+0x2FC/+0x2DC unless you want different
// stamina, and doing so globally (as mods/custom_boss does) retunes all seven.
