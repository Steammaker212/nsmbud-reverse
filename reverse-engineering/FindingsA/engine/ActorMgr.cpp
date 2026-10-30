// ActorMgr -- the actor manager's container, heap switching and the creation
// verdict. Reconstructed from the Switch binary (main, build id
// AEE6DCCC06D9C05B42061E2019123A61); every address below was read out of
// main.idb/convertedmain.rebased.elf, and the function names come from
// data/named_functions_v2.json (RicBent's IDB), not from a corpus guess.
//
// Why this file exists: ActorMgr::create is the single funnel every actor is
// built through, and readable/engine/Actor.cpp documents the Actor that comes
// out of it but not the manager that builds it. Three things in here are load
// bearing for mods and were previously either wrong or missing in the ledger:
//
//   1. The create pipeline order is beforeCreate -> onCreate -> afterCreate, and
//      create dispatches all three itself (F0192). It calls slot +0x10, then
//      slot +0x14, then slot +0x18. An earlier reading of this file claimed the
//      base afterCreate was what invoked onCreate; that was wrong. The base
//      afterCreate is a bare `bx lr` and calls nothing. Create does the calling.
//   2. The two flag bytes at +0x12 and +0x13 are different flags with different
//      owners (F0193). +0x12 is "a remove was requested"; +0x13 is
//      "is deleted". They are not interchangeable and a mod must not test one
//      for the other.
//   3. The verdict boundaries are strict, and the ordinary spawn path is
//      verdict 0 (F0194).
//
// This is documentation, not compiled code. Mods use
// framework/game/include/game/actor.h.

#include "actor.h"

namespace Game {

// ---------------------------------------------------------------------------
// Layout
// ---------------------------------------------------------------------------
//
// ActorMgr is not one of the small actors: its offsets are in the thousands
// because the actor list and the per-profile handles live inside it.
//
//   +0x0000  u32              count          the live-actor counter. `str r0,[r4]`
//                                            stores the post-increment value onto
//                                            the manager itself, so +0 is not a
//                                            vtable pointer and ActorMgr has no
//                                            virtual dispatch at offset 0.
//   +0x5988  sead::List       liveActors     insertFront_/erase_ targets.
//   +0x5990  u32              liveCount      incremented when an actor enters.
//   +0x5994  u32              offsetToBase   added to an actor pointer to reach
//                                            its list node (actors are stored
//                                            inside a larger block).
//   +0x5998  sead::List       deletedActors  the isDeleted(+0x13)==1 list.
//   +0x59A0  u32              deletedCount   incremented with deletedActors.
//   +0x59A4  u32              deletedOffset  its node offset.
//   +0x6A20  ActorMgrRelated  byId           what parentId resolves through.
//   +0x6A38  u32              currentId      the id the next actor is given.
//   +0x6A3C  u8               currentKind    copied into actor+0x10.
//   +0x6A40  u8               paused         read in afterCreate; when set the
//                                            new actor is not started.
//
// The exact sizeof(ActorMgr) is not established: 0x6A40 is the highest offset
// seen read or written, so the manager is at least that large. Marked
// `inferred` in the ledger (F0195) -- no allocation site was found to confirm.
//
// Actor's own head, for reference (verified in Actor::Actor 0x60002C54):
//
//   +0x00  vtable
//   +0x04  heap               from sead::HeapMgr::getCurrentHeap
//   +0x08  id                 = mgr->currentId (+0x6A38)
//   +0x0C  profile            = buildInfo->profile (+0x0C)
//   +0x10  kind               = mgr->currentKind (+0x6A3C)
//   +0x11  isLinked           = buildInfo->_28 (+0x28) != 0
//   +0x12  removeRequested    set to 1 when afterCreate returns 2
//   +0x13  isDeleted          set to 1 when the actor can never be created
//   +0x14  settings1          = buildInfo->settings1
//   +0x18  settings2          = buildInfo->settings2
//   +0x1C  movementId         = buildInfo->movementId  (+0x24)
//   +0x1D  linkId             = buildInfo->linkId      (+0x25)
//   +0x1E  initStateFlag      = buildInfo->initStateFlag (+0x26)
//   +0x20  sead::ListNode     intrusive, self-linked (both ends point at +0x20)
//   +0x2C  parentList         from ActorMgrRelated_getById
//   +0x38  parent             the resolved parent, 0 if none

// ---------------------------------------------------------------------------
// ActorMgr::create -- 0x60008138, 396 bytes
// ---------------------------------------------------------------------------
//
// Named in RicBent's IDB as ActorMgr::create(ActorBuildInfo*, uint).
//
//   Actor* ActorMgr::create(ActorBuildInfo* info, u32 unk)
//
// `unk` is a genuine switch, and the ordinary spawn path is 0:
//
//   unk == 0  -> a created actor is inserted at the front of liveActors and
//                liveCount is bumped. This is what 287 of the 323 call sites do.
//   unk == 1  -> the actor is deleted and unlinked instead (ActorMgr::erase at
//                0x60008458). Used by the 19 sites that clear an actor out.
//
// The actor itself is built by the profile's factory through
// 0x600082CC(info, 1), which switches to the profile's heap, calls the factory,
// and switches back.
//
// The verdict arithmetic is the part worth reading closely. r8 ends as
// max(0, 3 - afterCreate(...)) and is passed on as the afterCreate argument of
// whatever the actor is:
//
//   0x6000820C  cmp   r0, #3
//   0x60008210  mov   r8, #0
//   0x60008214  rsblo r8, r0, #3      ; r8 = 3 - r0, but ONLY if r0 < 3
//
// so a return of 0 gives r8 = 3, a return of 2 gives r8 = 1, and anything at or
// above 3 gives r8 = 0. Then:
//
//   0x60008248  cmp r8, #2
//   0x6000824C  blo ...               ; r8 <  2 -> keep the actor alive
//   0x60008250  cmp r8, #3
//   0x60008254  beq ...               ; r8 == 3 -> deleted, no further action
//   0x60008258  cmp r8, #2
//   0x6000825C  mov r6, #0
//   0x60008260  bne ...               ; r8 >  3 -> deleted (unreachable here)
//   0x60008264  mov r0, #1
//   0x60008268  strb r0, [r5, #0x12]  ; r8 == 2 -> removeRequested = 1
//
// The net effect a mod cares about: **an onCreate that returns 0 creates the
// actor normally.** Returning 1 also creates it. Returning 2 marks it
// removeRequested and goes through the erase path. Returning 3 or more marks it
// isDeleted(+0x13) and it never joins a list.
//
// There is an early branch that skips the whole pipeline:
//
//   0x60008168  cmp r7, #1
//   0x6000816C  beq ...               ; unk == 1 -> straight to erase
//   0x60008170  cmp r7, #0
//   0x60008174  bne ...               ; unk >  1 -> return 0, actor dropped
//
// so passing anything above 1 silently produces no actor and no error. A
// spawner must pass 0 (F0194).
//
// Failure of the factory itself returns 0 from create (mov r6, #0 / the beq at
// 0x60008158), which is why the caller cannot distinguish "could not build" from
// "built and then dropped" except by comparing against nullptr.

Actor* ActorMgr::create(ActorBuildInfo* info, u32 unk) {
    Actor* actor = this->buildActor(info, /*switchHeap=*/1);   // 0x600082CC
    if (actor == nullptr)
        return nullptr;

    // +0x12: a removal was requested for this actor (not "deleted", see +0x13).
    if (actor->removeRequested) {
        if (unk == 1) {
            this->erase(actor);                                 // 0x60008458
            return actor;
        }
        if (unk != 0)
            return nullptr;
        this->liveActors.insertFront_(actor->listNode());
        this->liveCount = this->liveCount + 1;
        return actor;
    }

    // beforeCreate: a veto. Anything other than 1 refuses the actor.
    if (!actor->beforeCreate()) {                                // slot 4, +0x10
        actor->afterCreate(0);                                   // slot 6, +0x18
        return nullptr;
    }

    // Pick the heap the actor's children will allocate from. When the actor
    // kept its own heap, use it; otherwise fall back to the current heap.
    u8 useOwnHeap;
    if (actor->heap != nullptr) {
        sead::HeapMgr::setCurrentHeap_(actor->heap);              // 0x608FAC4C
        useOwnHeap = 1;
    } else {
        useOwnHeap = 1;
    }

    // onCreate returns the verdict. create calls this slot directly; nothing in
    // the afterCreate chain does.
    u32 verdict = actor->onCreate();                             // slot 5, +0x14
    u32 arg = (verdict < 3) ? (3 - verdict) : 0;                 // rsblo

    if (useOwnHeap != 1)
        sead::HeapMgr::setCurrentHeap_(actor->heap);             // 0x608FAC4C

    actor->afterCreate(arg);                                     // slot 6, again

    if (arg >= 2) {
        if (arg == 3) {
            // Deleted: no list membership, and no return to the caller.
            return nullptr;
        }
        // arg == 2: removal requested.
        actor->removeRequested = 1;                              // +0x12
        if (unk == 1) {
            this->erase(actor);
            return actor;
        }
        if (unk == 0) {
            this->liveActors.insertFront_(actor->listNode());
            this->liveCount = this->liveCount + 1;
            return actor;
        }
        return nullptr;
    }

    return actor;
}

// ---------------------------------------------------------------------------
// The 0x600082CC helper: build through the profile's factory
// ---------------------------------------------------------------------------
//
//   Actor* buildActor(ActorBuildInfo* info, u32 switchHeap)
//
// It reads info->profile (+0x0C), then profile+0x08, and compares that against
// three globals. Those globals are the "unloaded archive" placeholders: when a
// profile's archive is not resident the factory pointer is one of these
// sentinels rather than a real function, and building through it would jump
// into nothing. This is the guard that stops a spawn of an unloaded profile from
// crashing the game, and it is why spawning a boss before its archive loads
// produces nothing rather than a hang.
//
// Confirmed shape at 0x600082E4:
//
//   0x600082E4  ldr  r0, [r5, #0xc]     ; info->profile
//   0x600082EC  ldr  r0, [r0, #8]       ; profile->factory
//   0x600082F4  cmp  r1, r0             ; vs sentinel 1
//   0x60008308  cmp  r1, r0             ; vs sentinel 2
//   0x60008318  cmpne r1, r0            ; vs sentinel 3
//   0x6000832C  cmp  r1, r0             ; vs sentinel 4
//
// When the factory is a real pointer, `switchHeap` decides whether the manager
// swaps to the actor's heap around the call.

// ---------------------------------------------------------------------------
// Actor::beforeCreate / onCreate / afterCreate
// ---------------------------------------------------------------------------
//
// Base implementations, from the Actor vtable at 0x60BC00EC:
//
//   slot 4 (+0x10)  0x60002EF8  Actor::beforeCreate(void)   8 bytes
//   slot 5 (+0x14)  0x60002F00  Actor::onCreate(void)       8 bytes
//   slot 6 (+0x18)  0x60002F08  Actor::afterCreate(uint)    4 bytes
//
// All three are trivial in the base class:
//
//   0x60002EF8  mov r0, #1 ; bx lr     beforeCreate -> 1 ("allow")
//   0x60002F00  mov r0, #1 ; bx lr     onCreate     -> 1
//   0x60002F08  bx lr                  afterCreate  -> does nothing, calls nothing
//
// StageActor overrides afterCreate at 0x60000694, and it uses its argument:
//
//   0x60000694  cmp  r1, #2
//   0x60000698  bne  0x600006C0
//   0x6000069C  ldr  ip, [r0, #0x6c]   ; position.x
//   0x600006A0  str  ip, [r0, #0x248]  ; -> 0x248 (live position)
//   0x600006A4  ldr  r3, [r0, #0x70]   ; position.y
//   0x600006A8  str  r3, [r0, #0x24c]
//   0x600006AC  ldr  r2, [r0, #0x74]   ; position.z
//   0x600006B0  str  r2, [r0, #0x250]
//   0x600006B4  str  ip, [r0, #0x260]  ; -> 0x260 (home position)
//   0x600006B8  str  r3, [r0, #0x264]
//   0x600006BC  str  r2, [r0, #0x268]
//   0x600006C0  b    0x60002F08        ; -> Actor::afterCreate (empty)
//
// So when afterCreate is called with arg == 2 a StageActor snapshots its current
// position into the 0x248 and 0x260 triples. That is the mechanism that fixes an
// actor's spawn point, and it is why the *second* afterCreate call in create
// receives a specific value: arg == 2 happens when onCreate returned 1
// (3 - 1 == 2). An actor whose onCreate returns 0 gets arg == 3 and never
// snapshots its spawn position.
//
// CollisionActor::afterCreate 0x60003140 overrides it again and chains upward:
//
//   0x60003140  push {r4,r5,fp,lr}
//   0x60003144  mov  r4, r1
//   0x60003148  mov  r5, r0
//   0x6000314C  bl   0x60003160        ; CollisionActor's own setup
//   0x60003150  mov  r0, r5
//   0x60003154  mov  r1, r4
//   0x60003158  pop  {r4,r5,fp,lr}
//   0x6000315C  b    0x60000694        ; tail-call StageActor::afterCreate
//
// which is the normal virtual-chain shape: each override does its own work and
// then tail-calls the parent. Nothing in the chain calls onCreate -- only
// ActorMgr::create does.

} // namespace Game
