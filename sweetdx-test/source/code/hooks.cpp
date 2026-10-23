// hooks.cpp -- behaviour-preserving wrappers on the 13 verified call sites.
//
// Every one of these was derived mechanically, not by guesswork:
//
//   scripts/pipeline/gen_wrapper_hooks.py  picked the site, read the target's
//                                          prototype out of the decompiled corpus,
//                                          and confirmed the arity against the
//                                          machine code (which of r0..r3 the
//                                          function body actually reads)
//   loader/scripts/verify_ips.py           decoded the emitted patch back and
//                                          proved the displacement lands on the
//                                          hook symbol
//
// The wrappers deliberately change nothing. The first module to run on hardware
// must not alter gameplay, or a crash proves nothing about the loader. Each one
// counts its calls and forwards every argument, then returns what the original
// returned. mod_write_proof() is called on the very first hook entry anywhere,
// which is the moment "the module loaded" becomes "the hook ran".
//
// Deluxe (Switch) v1.0.0 only. Nothing here is derived from the Wii U original.

#include "nn.h"
#include "types.h"

extern "C" {

extern u32 mod_hook_calls;
void mod_write_proof(void);

// ---------------------------------------------------------------------------
// Helpers.
//
// On the first call through any hook, persist the proof. Factored out so the
// wrappers below stay one idea each.
// ---------------------------------------------------------------------------
static inline void note_call(void)
{
    ++mod_hook_calls;
    if (mod_hook_calls == 1)
        mod_write_proof();
}


// ---------------------------------------------------------------------------
// Actor__getProfileId
//
//   target    0x60002EEC  (RVA 0x002EEC), 12 bytes, 669 callers
//   site      0x60001BD4  (RVA 0x001BD4), blal
//
// The corpus renders the body as `return FIELD_U32(a1, 0x14)`, but the machine
// code is `ldr r0,[r0,#0xC]; ldr r0,[r0,#0x8]` -- two dereferences, not one
// field at 0x14. The wrapper does not care either way because it forwards the
// pointer untouched and returns whatever the original returns; the discrepancy
// is recorded in docs/ARROW_CHAIN_AUDIT.md rather than papered over here.
// ---------------------------------------------------------------------------
typedef void* Actor;

Actor* Actor__getProfileId(Actor* self);

extern "C" Actor* Actor__getProfileId_hook(Actor* self)
{
    note_call();
    return Actor__getProfileId(self);
}


// ---------------------------------------------------------------------------
// Actor__removeChild    target 0x60002E2C (0x002E2C), site 0x600111CAC? -- see
//                        below; site RVA 0x111DAC.
// ---------------------------------------------------------------------------
void Actor__removeChild(Actor* self, Actor* child);

extern "C" void Actor__removeChild_hook(Actor* self, Actor* child)
{
    note_call();
    Actor__removeChild(self, child);
}


// ---------------------------------------------------------------------------
// StageActor__delete    target 0x60000E90 (0x000E90), site 0x0002DB34
// ---------------------------------------------------------------------------
void StageActor__delete(Actor* self, void* arg1);

extern "C" void StageActor__delete_hook(Actor* self, void* arg1)
{
    note_call();
    StageActor__delete(self, arg1);
}


// ---------------------------------------------------------------------------
// CollisionActor__afterCreate    target 0x60003140 (0x003140), site 0x000637DC
// ---------------------------------------------------------------------------
void CollisionActor__afterCreate(Actor* self, void* arg1);

extern "C" void CollisionActor__afterCreate_hook(Actor* self, void* arg1)
{
    note_call();
    CollisionActor__afterCreate(self, arg1);
}


// ---------------------------------------------------------------------------
// CollisionActor__afterExecute   target 0x60003418 (0x003418), site 0x00024E34
// ---------------------------------------------------------------------------
void CollisionActor__afterExecute(Actor* self, void* arg1);

extern "C" void CollisionActor__afterExecute_hook(Actor* self, void* arg1)
{
    note_call();
    CollisionActor__afterExecute(self, arg1);
}


// ---------------------------------------------------------------------------
// PlayerLookTargetList_add      target 0x6000B4D4 (0x00B4D4), site 0x00024C54
// ---------------------------------------------------------------------------
void PlayerLookTargetList_add(void* self, void* target);

extern "C" void PlayerLookTargetList_add_hook(void* self, void* target)
{
    note_call();
    PlayerLookTargetList_add(self, target);
}


// ---------------------------------------------------------------------------
// ActorCollisionMgr_ctor        target 0x60154120 (0x154120), site 0x00003094
// ---------------------------------------------------------------------------
void ActorCollisionMgr_ctor(void* self);

extern "C" void ActorCollisionMgr_ctor_hook(void* self)
{
    note_call();
    ActorCollisionMgr_ctor(self);
}


// ---------------------------------------------------------------------------
// StateMgr_ctor                 target 0x60818168 (0x818168), site 0x00009324
// ---------------------------------------------------------------------------
void StateMgr_ctor(void* self, void* arg1, void* arg2);

extern "C" void StateMgr_ctor_hook(void* self, void* arg1, void* arg2)
{
    note_call();
    StateMgr_ctor(self, arg1, arg2);
}


// ---------------------------------------------------------------------------
// Enemy__vf26C                  target 0x602A9490 (0x2A9490), site 0x00260C30
// ---------------------------------------------------------------------------
void Enemy__vf26C(void* self);

extern "C" void Enemy__vf26C_hook(void* self)
{
    note_call();
    Enemy__vf26C(self);
}


// ---------------------------------------------------------------------------
// ActorMgr__create              target 0x60008138 (0x008138), site 0x00005664
//
// Returns the created actor, which the caller uses; forwarding the value is
// what keeps this hook non-destructive.
// ---------------------------------------------------------------------------
void* ActorMgr__create(void* self, void* buildInfo, u32 unk);

extern "C" void* ActorMgr__create_hook(void* self, void* buildInfo, u32 unk)
{
    note_call();
    return ActorMgr__create(self, buildInfo, unk);
}


// ---------------------------------------------------------------------------
// Player_getActorSlotChecked    target 0x60788DFC (0x788DFC), site 0x0007CF14
// ---------------------------------------------------------------------------
void* Player_getActorSlotChecked(void* self, u32 slot);

extern "C" void* Player_getActorSlotChecked_hook(void* self, u32 slot)
{
    note_call();
    return Player_getActorSlotChecked(self, slot);
}


// ---------------------------------------------------------------------------
// The two zero-argument state ends. These are `b` (not `bl`) sites, so the game
// does not expect a return value; forwarding keeps the tail-call shape.
// ---------------------------------------------------------------------------
void Enemy__endState_DieFall(void* self);

extern "C" void Enemy__endState_DieFall_hook(void* self)
{
    note_call();
    Enemy__endState_DieFall(self);
}


void Enemy__endState_DieFumi(void* self);

extern "C" void Enemy__endState_DieFumi_hook(void* self)
{
    note_call();
    Enemy__endState_DieFumi(self);
}

} // extern "C"
