// Lemmy.cpp -- World 1's boss (Lemmy Koopa, Acorn Plains' castle) and the
// machinery every Koopaling shares.
//
// This is the first boss in the game and also the simplest: a Koopaling walks,
// jumps, throws something, and dies after N hits. Everything that makes it a
// *boss* rather than an enemy is in BossBase; everything that makes it
// *Lemmy* rather than Iggy is a vtable of overrides. So the file is organised as
// three layers, each of which a custom boss can reuse independently:
//
//   1. BossBase      -- what a boss adds to an Enemy (colliders, look target,
//                       rumble, freeze, the defeat handshake with the door).
//   2. KoopalingBase -- the shared seven-sibling fight loop and the big
//                       extension block every Koopaling carries.
//   3. Lemmy         -- 38 vtable slots that differ from the base, which is the
//                       complete diff of "what Lemmy does differently".
//
// Deluxe (Switch) v1.0.0. Ledger F0149-F0158.

#include "game/enemy.h"
#include "actor/stageactor.h"

// ===========================================================================
// CORRECTION -- read this before the older notes below
// ===========================================================================
//
// An earlier draft of this file said `+0x2D8` was a "defeated" predicate and that
// `+0x36C` opened the door on defeat. Both were wrong, and the second is worth
// spelling out because it is a mistake anyone reading the decompiler output
// would make. Recorded as F0150/F0151 rather than quietly fixed.
//
// **+0x2D8 is a periodic-tick helper, not a defeat test.** Its whole body is
//
//     0x60031FA0  movw r1,#0x18a0 ; movw r2,#0x189c
//     0x60031FA8  ldr  r1,[r0,r1]     ; r1 = this->+0x18A0
//     0x60031FAC  ldr  r0,[r0,r2]     ; r0 = this->+0x189C
//     0x60031FB0  sdiv r2,r0,r1       ; q = a / b
//     0x60031FB4  mls  r1,r2,r1,r0    ; a - q*b  == a % b
//
// i.e. `(this->[+0x189C] % this->[+0x18A0]) == 0`, a counter-modulus test shared
// by KoopalingBase and BossBase (both vtables point at it). The names the
// database gives it (`SumoBrosBoss::vf2D8`) are misleading: the function is a
// common helper that several classes reuse for "every Nth tick".
//
// **+0x36C / +0x370 are not the exit condition either.** `KoopalingBase::vf36C`
// (0x600B2C98) is 100 bytes that read:
//
//     0x600B2CA4  ldr r1,[r0,#0x2d8] ; blx r1      ; the parity test above
//     0x600B2CB4  cmp r0,#1
//     0x600B2CBC  ldr r1,[r1,#0x540] / ldr r1,[r1,#0x53c]
//     0x600B2CCC  blx r1
//     0x600B2CD4  ldr r1,[r0,#0x2d4] ; blx r1
//     0x600B2CEC  ldr r1,[r0,#0x44c] ; bx  r1
//
// so it alternates between two functions on even/odd ticks and then runs two
// more virtuals. Those two functions (0x600B3B8C / 0x600B3BD0) read a voice
// pointer at +0x1FB4 (offset 8116) and play it via the sound actor -- `+0x40`
// for one and `+0x48` for the other, both guarded against the literal
// "SE_VOC_NO_SOUND". **vf36C is voice-line selection, nothing more.**
//
// What actually runs the door handshake is **+0x370**, and its callers say so:
// it is invoked from `BossBase::vf15C` (0x600259B8, the damage-taken entry
// point), `BossBase::collisionFireball`, `collisionGroundPound`,
// `collisionThrowableObject`, `BossBase::vf324`, `KoopalingBase::vf368` and
// `Enemy::collisionCallback` -- eleven sites, all of them "the boss was hit".
//
// So the correct description of the handshake is: **every time the boss takes
// damage, +0x370 runs, and it is there that the boss checks a condition and
// pushes the linked door into its open state.** The condition is whatever the
// sibling's own +0x370 override tests; Lemmy's (0x600DD710) calls
// `KoopalingBase::vf370` then `vtable+0x2B8`, then looks up the door.
//
// Everything below about the door, the link id and the state change is correct
// and was verified directly; only the *trigger* description was wrong.
// ===========================================================================


// ---------------------------------------------------------------------------
// Where a boss comes from
// ---------------------------------------------------------------------------
//
// Each Koopaling is a *profile*, and the profile holds the factory. From
// data/recovered/profiles.json (sprite -> profile -> factory VA):
//
//     Lemmy     sprite 696  factory 0x600DBDDC   vtable 0x60BCC370
//     Iggy      sprite 704  factory 0x60097A5C
//     Wendy     sprite 700  factory 0x601248D0
//     Morton    sprite 697  factory 0x600EEEC C
//     Roy       sprite 707  factory 0x60108C84
//     Larry     sprite 694  factory 0x600D77C4
//     Ludwig    sprite 702  factory 0x600E7508
//
// Note that the sprite id is NOT the profile id, and that the factories are far
// apart in the binary (0x97A5C for Iggy, 0xDBDDC for Lemmy, 0x1248D0 for Wendy).
// There is no shared "Koopaling factory" that takes a parameter -- each sibling
// has its own, which is why the database names almost none of them.
//
// The factory is three statements:
//
//     0x600DBDDC  push {r4,lr}
//     0x600DBDE4  movw r0,#0x1fd0      ; sizeof(Lemmy)
//     0x600DBDE8  bl   operator new
//     0x600DBDF0  bl   KoopalingBase::KoopalingBase
//     0x600DBDFC.. install Lemmy's vtable (+8)
//     0x600DBE18  str  r2,[r0,#0x1FB8] ; linkId = 0
//
// so a custom boss can be built exactly the way Goomba/Goombrat share a
// factory: allocate, run the base ctor, install your own vtable. The size
// matters -- Lemmy is 0x1FD0 bytes while KoopalingBase's own layout ends
// earlier, and the extra is Lemmy's own fields.


// ---------------------------------------------------------------------------
// 1. BossBase -- what being a boss adds
// ---------------------------------------------------------------------------
//
// `BossBase::BossBase` (0x600249FC) runs `Enemy::Enemy` first, then adds:
//
//     vtable                 -> BossBase_vtable
//     +0x189C = 1, +0x18A0 = 1     (two "boss alive/active" flags)
//     soundActor             a MovingSoundActor, so the boss has its own audio
//     playerLookTarget       a PlayerLookTarget built with the boss's own id
//     scaler                 an ActorScaler with scale {1,1,1}
//     aColliderBoss          a *second* ActiveCollider, separate from the
//                            ordinary Enemy aCollider
//
// That second collider is the important structural fact: a boss has two
// colliders, so it can be hit on a body part that is not its whole self (the
// classic example being Lemmy's ball, which is a separate actor, versus the
// collider that actually takes damage).
//
// `BossBase::collisionPlayer` (0x60024E78) is the fight's entry point for being
// touched. It does not contain a damage table -- it first asks a virtual
// (vtable+0x374) whether the boss is currently in "normal enemy" mode, and if so
// delegates to `Enemy::collisionPlayer`. Otherwise it runs
// `Enemy::processCollision(..., 2)`, and on result 0 looks at the *other*
// collider's owner to decide whether this was a real player hit. When it accepts
// the hit it calls vtable+0x194 and +0x198 (begin-damage and damage-from, in
// that order) and stores 16 into a per-player counter at
// `boss + 0x18AC + 4*playerId`.
//
// 16 is a cooldown, not a damage amount: the per-player counter is reloaded to
// 16 after a successful hit, which spaces out consecutive hits so a player
// cannot chain-damage a boss by standing still.
constexpr u32 kHitStreakBase   = 0x18AC;   // + 4*playerId
constexpr u32 kHitStreakReload = 16;


// ---------------------------------------------------------------------------
// 2. KoopalingBase -- the shared sibling fight
// ---------------------------------------------------------------------------
//
// `KoopalingBase::KoopalingBase` (0x600B137C) chains to BossBase and then builds
// a very large extension block -- five EffectWrappers, three more colliders'
// worth of zeroed state, a look-target flag, and two colliders of its own. In
// decompiler output it reads as meaningless `a1[1]._._._` chains; the honest
// description is that a Koopaling instance is roughly twice the size of an
// ordinary boss and most of the second half is per-sibling scratch space.
//
// Two facts from that constructor are load-bearing:
//
//     +0x1FB8 (a1[2030]) is a *linkId*
//     +0x1FBC (a1[2031]) is a flag that gets cleared
//
// which the boss-room handshake below depends on.
//
// The fight loop itself is the ordinary StateMgr pattern (see
// readable/engine/StateMgr.cpp). What is specific is the *damage* path: every
// collision handler funnels into `BossBase::vf15C` (0x600259B8), which is worth
// reading because it is the whole boss damage pipeline in 236 bytes:
//
//     strb r1,[this+0x18A8]        ; "was hit this frame" = 1
//     r0 = this->vtable[0x314](this); this->+0x18A4 = r0    ; health / HP
//     this->vtable[0x300](this)                              ; damage anim
//     r5 = this->vtable[0x2DC] ; this->vtable[0x2FC](this)    ; per-character logic
//     ...
//     this->vtable[0x370](this)                              ; the door handshake
//
// `+0x18A4` is the health counter (the ctor initialises it to 0) and `+0x18A8`
// is a one-byte "took damage" flag (initialised 0, set to 1 here). `+0x300` is
// the animation virtual, which for Lemmy is 0x600DD90C playing "damage_s".
//
// **The health model is two tiny virtuals, overridden per boss:**
//
//     +0x314  total HP       BossBase: return 24  (0x60026798)
//     +0x2FC  hits per phase BossBase: PURE VIRTUAL
//     +0x2DC  apply damage   (0x60031FC8)
//
// and the per-boss values are visible directly in the hookable table, because
// each implementation is a two-instruction `mov r0,#imm ; bx lr`:
//
//     BoomBoomBase   vf2FC -> 6      (0x6004F320)   <- what the Koopalings use
//     SumoBrosBoss   vf2FC -> 0      (0x60032054)
//     Bowser         vf2FC -> 10     (0x600C787C)
//     FinalBowser    vf2FC -> 10     (0x60079370)
//
// 24 / 6 = 4 phases for a Koopaling. `+0x314` (total HP) *is* shared -- every
// boss in the family points at the same `return 24` -- but `+0x2FC` (phase size)
// is the per-boss knob, which is why it is the one declared **pure virtual** in
// BossBase (`// Overrides: BossBase : pure virtual`). A boss class is therefore
// *required* to supply a phase size, and in practice it does so by returning a
// constant.
//
// This division is the answer to "how do I make a custom boss with different
// stamina": override +0x314 for total health, +0x2FC for the phase size. Both
// are one-liners returning a constant, so a custom boss can be genuinely
// different in stamina without writing a state machine.
//
// `+0x2DC` is the damage applier and it is where the phase logic lives:
//
//     hp = this->+0x189C - amount;
//     if (hp < 1) { this->+0x189C = 0; return 0; }        // dead
//     per = this->+0x18A0;
//     if (per <= amount) { ... }                           // phase boundary
//
// which is why `+0x189C` and `+0x18A0` are the two fields the parity helper
// (`+0x2D8`, `[+0x189C] % [+0x18A0] == 0`) operates on: they are **HP** and
// **hits-per-phase**, not "boss alive" flags as my first draft assumed. The ctor
// setting both to 1 is just a valid initial state.
//
// So a custom boss with different stamina overrides +0x314 (HP) and +0x2FC
// (phase size) and gets the rest of the fight for free. No collision handler
// needs touching.


// ---------------------------------------------------------------------------
// 3. The level requirement: the Kupper door handshake
// ---------------------------------------------------------------------------
//
// This is the part that is genuinely surprising, and it is the mechanism a
// custom boss must reproduce or its arena will never open.
//
// A Koopaling does not simply die. On taking damage it looks up **another actor
// by link id** and pushes that actor into a state. This is the mechanism a
// custom boss must reproduce or its arena will never open.
//
// The handshake lives at vtable+0x370 and is called from every damage path (see
// the correction block at the top of this file for the eleven call sites).
// Lemmy's implementation is 0x600DD710:
//
//       KoopalingBase::vf370(this);
//       this->vtable[0x2B8](this);
//       Actor* door = ActorMgrRelated_getById(ActorMgr::instance + 27168,
//                                              this->linkId /* +0x1FB8 */);
//       if (door && door->vtable[0](door, &typeInfo) == 1)
//           StateMgr::changeState(door + 6084, &doorOpenState);
//       this->flag_1FBC = 0;
//
// So the "level requirement" for a Lemmy-style fight is:
//
//   * the arena needs a **Kupper door** actor (sprite 609 / profile 261, or
//     sprite 610 / profile 262 for the RDash variant) placed in the level;
//   * that door must carry the **same link id** as the boss's +0x1FB8;
//   * the door's own vtable slot 0 is an `isA`-style type check that must
//     return 1, so it really must be that actor class;
//   * the boss calls StateMgr::changeState on the door, i.e. the *door* owns the
//     animation that opens the way forward.
//
// The boss never touches the level's exit condition, the goal pole, or the
// camera. It opens a door. That is the whole "level requirement": place a door,
// link it, and let the boss push it into its open state.
//
// The lookup helper is `ActorMgrRelated_getById(ActorMgr::instance + 27168, id)`
// -- the offset 27168 (0x6A20) is an ActorMgr sub-object, not the main actor
// list, which is worth noting because searching the main list finds nothing.
//
// The code below mirrors 0x600DD710 statement for statement. The condition it
// uses to decide "the fight is over" is vtable+0x2B8 -- and that too turned out
// not to be a predicate, which the note below the code explains.
//
// Note what the function does *not* do: it never tests for defeat itself.
// `BossBase::vf2B8` (0x60024E50) is 36 bytes that set a byte on an EnemyCounter
// object:
//
//     result = EnemyCounterMaybe_instance->+0x18;
//     if (result) *(result + 6102) = 1;      // 0x17D6
//
// so it is bookkeeping ("a boss was defeated"), not a check. The actual
// "is the fight over" decision belongs to the sibling's own state machine, which
// reaches this function through the damage pipeline in vf15C.
void Lemmy::onDamaged_openDoor()
{
    KoopalingBase::vf370();                 // 0x600B2CFC, the shared part
    this->vf2B8();                          // vtable+0x2B8: boss-defeated bookkeeping

    Actor* door = ActorMgrRelated_getById(ActorMgr::instance + 27168,
                                          this->linkId /* +0x1FB8 */);
    if (door != nullptr && door->isA(&KupperDoorTypeInfo) == 1)
        StateMgr::changeState((StateMgr*)((char*)door + 6084), &doorOpenState);

    this->flag_1FBC = 0;                    // +0x1FBC
}


// ---------------------------------------------------------------------------
// What Lemmy himself changes: the 38-slot diff
// ---------------------------------------------------------------------------
//
// Comparing Lemmy's vtable (0x60BCC370) against KoopalingBase's (0x60BC91CC)
// slot by slot gives exactly 38 differences. That diff *is* "what Lemmy is".
// Grouped by what they do:
//
//   +0x000..0x00C   destructor and two delete variants (his own class)
//   +0x020          a per-class override of an early virtual
//   +0x1BC/1C0/1C4  three tiny thunks (12 bytes each) -- parameter shuffles
//   +0x2BC          one more small override
//   +0x300          -> 0x600DD90C  plays the "damage_s" animation
//   +0x36C/+0x370   -> the door handshake above
//   +0x3E4/3EC/3FC  boss-mode toggles
//   +0x414..0x424   the attack set (see below)
//   +0x42C..0x4A8   the largest group: per-attack tuning
//
// `0x600DD90C` is worth reading as an example of the idiom, because every
// animation in a boss works this way -- it is not a state, it is a one-shot:
//
//     v2 = ***(this+7096)+28          ; the model wrapper
//     archive = Profile::getResArchiveById(profile, 0)
//     ShuAnim_play(v2, archive, "damage_s")
//     AnimationCtrl_setRepeat(modelAnim, 1)   ; 1 = do not loop
//     *(result+24) = 1.0f                     ; playback rate
//
// So "play a hit animation" = look the archive up on the profile, then play a
// named shu anim on the model. There is no animation table to edit; the names
// are string literals, which is why they show up in .rodata and why a custom
// boss can reuse an existing suit/boss archive and just pick different names.
//
// The attack slots select what Lemmy throws. The ball is a separate actor
// (sprite 351 "レミーのボール", factory 0x60E1740) and the bomb is sprite 352
// "レミーの爆弾" (profile 160, factory 0x60E3BDC) -- both ordinary actors spawned
// by the boss, so "give a custom boss a new projectile" means spawning a
// different profile, not editing the boss.
//
// `this+7096` (0x1BB8) is the model wrapper pointer slot that 0x600DD90C reads.
// The decompiler prints it as 7096 because the class is enormous; the reason it
// matters is that the animation idiom is *always* "dereference the wrapper,
// then play a named anim through the profile's archive", never a table index.


// ---------------------------------------------------------------------------
// Building a custom fight: what actually has to change
// ---------------------------------------------------------------------------
//
// From the three layers above, a custom boss needs, in order of how much work it
// is:
//
//   1. A profile with a factory that allocates your size, runs a base
//      constructor (BossBase or KoopalingBase), and installs your vtable.
//      This is the Goomba/Goombrat pattern and is cheap.
//
//   2. A vtable holding the defeat predicate at +0x2D8 and the door handshake
//      at +0x36C/+0x370. If you omit the handshake the fight is unwinnable in
//      the sense that nothing opens -- the boss dies and the arena stays shut,
//      which is exactly the bug a first custom boss hits.
//
//   3. A level with a Kupper door whose link id matches your +0x1FB8.
//
//   4. Animations. Boss animations are string literals looked up per profile
//      archive (`damage_s` here), so a custom boss either reuses a vanilla
//      archive and its names or ships an archive containing those names.
//
// Everything else -- how much health, how fast, which projectile -- is data in
// the +0x42C..0x4A8 block plus the state machine, not new code.
