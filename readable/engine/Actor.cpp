// Actor.cpp -- the root of the actor hierarchy, and the state machine on top.
//
// Every object spawned from a level file is an Actor. The class tower is:
//
//   Actor            0x50   ctor 0x60002C54   dtor 0x60002D98
//     StageActor    0x284   ctor 0x600002A0   dtor 0x60000500
//       CollisionActor 0x17B0  (adds the CollisionMgr at +0x288)
//         StateActor     0x17D4  ctor 0x6000929C   (StateWrapper at +0x17B0)
//         MultiStateActor 0x17D8 ctor 0x60009358   (StateWrapper at +0x17B0)
//           Enemy         0x189C ctor 0x602A1A8C
//
// Names and offsets are RicBent's (main.i64, tier T2,
// data/recovered/type_layouts.json) and every one below is re-checked against the
// disassembly or Hex-Rays output of the function named beside it (tier T1). Where
// the sweet-dx SDK already ships a header for the same class, that header agrees;
// it is a second, independent statement of the same layout.
//
// Deluxe (Switch) v1.0.0, 32-bit ARM, IDA base 0x60000000.
//
// Ledger: F0107-F0116.
//
// On names: where RicBent's database or the sweet-dx SDK gives a member a name,
// that name is used (`position`, `speed`, `aCollider`, `childCount`,
// `profileFlags`, ...). Where nothing does, the member keeps the database's
// placeholder (`field_2C`, `field_56`) rather than being given an invented one.
// The same rule holds for the helper *functions* I call from this file: names
// like `ActorMgrRelated_getById` are RicBent's; `insertLive` / `insertLater` /
// `insertDead` are mine, standing in for three inlined list operations that the
// compiler had no symbol for -- they are described, not named, by the game.
// `vtable_for_*` likewise marks a vtable address I have not resolved to a symbol.
// Nothing here is compiled; this file is the readable layer over readable/src.

#include "types.h"
#include "game/actor.h"

// ---------------------------------------------------------------------------
// Actor -- 0x50 bytes
// ---------------------------------------------------------------------------

// 0x60002C54. Full field-by-field reconstruction of the constructor.
//
// Note the three things it takes from outside the spawn request:
//   * the heap, from sead::HeapMgr::getCurrentHeap -- so an actor is allocated
//     on whichever heap is current when the level builds it;
//   * `id`, from ActorMgr+0x6A38 -- a monotonically increasing stage-unique id,
//     *not* from the spawn request;
//   * `field_10`, from ActorMgr+0x6A3C.
//
// A named parent that does not resolve is not an error the caller sees: the
// actor is built and then flagged isDeleted (+0x13), and the delete pass reaps
// it. That is why a spawn with a bad parent id is silent rather than fatal.
Actor* Actor::Actor(const ActorBuildInfo* buildInfo)
{
    this->vtable  = &vtable_for_Actor;
    this->heap    = sead::HeapMgr::getCurrentHeap(sead::HeapMgr::sInstance);
    this->id      = *(s32*)(ActorMgr::instance + 0x6A38);
    this->profile = buildInfo->profile;

    this->field_10       = *(u8*)(ActorMgr::instance + 0x6A3C);
    this->field_11       = buildInfo->field_28 != 0;
    this->field_12       = 0;
    this->isDeleted      = 0;

    this->settings1      = buildInfo->settings1;
    this->settings2      = buildInfo->settings2;
    this->movementId     = buildInfo->movementId;
    this->linkId         = buildInfo->linkId;
    this->initStateFlag  = buildInfo->initStateFlag;

    // An empty intrusive list points both links at the node itself.
    this->field_20.previous = &this->field_20;
    this->field_20.next     = &this->field_20;

    this->childCount = 0;
    this->field_2C   = -1;
    this->field_30   = 0;
    this->field_34   = 0;

    Actor* parent = (Actor*)ActorMgrRelated_getById(ActorMgr::instance + 0x6A20,
                                                    buildInfo->parentId);
    this->parent  = parent;
    this->field_3C = 0;
    this->field_40 = 0;
    this->field_44 = 0;
    this->field_48 = 0;
    this->field_4C = 0;

    // 0x30: the offset *within a child* at which its list node lives. The
    // insert below adds it to `this`, so it is the Actor base offset.
    this->field_2C = 0x30;

    if (parent)
    {
        sead::ListNode::insertFront(&parent->field_20,
                                    (sead_ListNode*)((char*)this + parent->field_2C));
        ++parent->childCount;
        return this;
    }

    // A requested parent that does not exist means this actor cannot live.
    if (buildInfo->parentId)
        this->isDeleted = 1;
    return this;
}


// 0x60002EEC. The whole function is three instructions:
//
//     ldr r0, [r0, #0xC]     ; r0 = this->profile
//     ldr r0, [r0, #0x8]     ; r0 = profile->id
//     bx  lr
//
// It is worth its own note because it is the single comparison that separates a
// Goomba (467) from a Goombrat (468) -- see readable/enemy/Goomba.cpp. The id
// lives in the Profile, not in the Actor, so a variant built as profile 468
// reports 468 no matter what the mod calls itself.
u32 Actor::getProfileId() const
{
    return this->profile->id;
}


// ---------------------------------------------------------------------------
// StageActor -- 0x284 bytes, Actor plus everything that exists in the world
// ---------------------------------------------------------------------------

// 0x600002A0. The constructor is long but entirely mechanical: defaults, then
// the spawn position, then a set of sizes derived from the profile's ActorInfo.
//
// The interesting part is the tail: half-extents. The four floats at +0x204..
// +0x210 are the collision box, built from four u16 halves of ActorInfo with a
// fixed bias of 256 (x) and 80 (y):
//
//     field_204 = (f32)actorInfo->_18 + 256.0
//     field_208 = (f32)actorInfo->_1A + 256.0
//     field_20C = (f32)actorInfo->_1C +  80.0
//     field_210 = (f32)actorInfo->_1E +  80.0
//
// and +0x1EC/+0x1F0 are actorInfo->_8/_C, +0x1F4/+0x1F8 are actorInfo->_10/_14
// doubled. So an actor's size comes from its Profile, not from its model: a
// replacement archive with a bigger model still collides at the vanilla size
// unless the ActorInfo is changed. That is exactly the kind of thing a mod needs
// to know before shipping art.
StageActor* StageActor::StageActor(const ActorBuildInfo* buildInfo)
    : Actor(buildInfo)
{
    this->vtable = &vtable_for_StageActor;

    this->direction = 0;
    this->playerId  = -1;
    this->field_55  = -1;
    this->field_56  = buildInfo->field_20;
    this->field_57  = 1;
    this->field_58  = 0;
    this->field_5C  = 0;
    this->field_60  = 0;
    this->field_64  = 0.0f;
    this->xAcceleration = 0.0f;

    this->position = buildInfo->position;
    this->speed    = Vec3(0.0f, 0.0f, 0.0f);
    this->maxSpeed = Vec3(0.0f, 0.0f, 0.0f);
    this->scale    = Vec3(1.0f, 1.0f, 1.0f);
    this->rotation = Vec3i(0, 0, 0);

    this->field_A8 = 0;
    this->field_AC = 0;
    this->field_B0 = 0;
    this->field_B4 = 0;
    this->field_B8 = 0;

    ActiveCollider::ActiveCollider(&this->aCollider);

    this->field_1EC = (f32)actorInfo->_8;
    this->field_1F0 = (f32)actorInfo->_C;
    this->field_1F4 = (f32)actorInfo->_10 * 2.0f;
    this->field_1F8 = (f32)actorInfo->_14 * 2.0f;
    this->field_1FC = this->field_1F4;
    this->field_200 = this->field_1F8;

    this->zoneId  = *(u8*)(LevelInfo_instance + 20);
    this->type    = 0;                  // StageActor; Player=1, Yoshi=2, Enemy=3
    this->field_216 = 1;
    this->field_217 = 1;
    this->field_218 = 0;
    this->field_219 = 1;
    this->field_21A = 0;
    this->eventId1  = buildInfo->eventId1;
    this->eventId2  = buildInfo->eventId2;
    this->field_21E = actorInfo->_20;
    this->field_220 = 0;
    this->field_224 = 0;
    this->field_228 = 0;
    this->field_22C = 0;
    this->field_230 = 0;
    this->field_234 = 0;
    this->profileFlags = buildInfo->profile->flags;

    this->effectOffset = Vec3(0.0f, 0.0f, 0.0f);
    this->field_248 = buildInfo->position;   // and _254, _260: all start at spawn
    this->field_254 = buildInfo->position;
    this->field_260 = buildInfo->position;

    this->field_26C = 0;
    this->field_270 = 0;
    this->field_274 = 0;
    this->field_278 = buildInfo->field_28;
    this->field_27C = 0;
    this->field_280 = 0;

    this->field_204 = (f32)actorInfo->_18 + 256.0f;
    this->field_208 = (f32)actorInfo->_1A + 256.0f;
    this->field_20C = (f32)actorInfo->_1C +  80.0f;
    this->field_210 = (f32)actorInfo->_1E +  80.0f;

    this->aCollider.field_6D = this->field_56;
    return this;
}


// ---------------------------------------------------------------------------
// The state machine
// ---------------------------------------------------------------------------

// A StateMgr owns no storage for states -- it only holds four pointers:
//
//     +0x0  StateExecuter*          creates/destroys the per-state executers
//     +0x4  StateBase*              the state being entered, if any
//     +0x8  StateMethodExecuter*    the one currently running
//     +0xC  StateBase*              the one that just ended
//
// `id == -1` is the null state, so a first state that is null means "nothing
// scheduled" rather than a state to enter. Deluxe relies on that: every
// StateActor starts with NullState and the game enters the real state later.

// 0x60818168.
StateMgr::StateMgr(StateExecuter* executer, StateBase* firstState)
{
    this->executer             = executer;
    this->nextState            = nullptr;
    this->currentMethodExecuter = nullptr;
    this->lastState            = &NullState;

    if (firstState->id != -1)
        this->nextState = firstState;
}

// 0x60818198. Returns the state the actor is in *now*: the running state if one
// is running, else the scheduled one, else the null state. Never null.
StateBase* StateMgr::getCurrentState()
{
    if (this->currentMethodExecuter)
        return this->currentMethodExecuter->vtable->getCurrentState(this->currentMethodExecuter);
    if (!this->nextState)
        return &NullState;
    return this->nextState;
}

// 0x608181D4. One tick. If a state is scheduled, build an executer for it, clear
// the schedule, remember the executer; then run the executer's execute(). Only
// ever one state runs per frame -- a state that calls changeState() waits until
// the next tick, which is why an actor's first frame in a new state is the next
// frame and not this one.
StateMethodExecuter* StateMgr::execute()
{
    if (this->nextState)
    {
        StateMethodExecuter* executer = this->executer->begin(this->nextState); // vtable+8
        this->nextState = nullptr;
        this->currentMethodExecuter = executer;
    }

    StateMethodExecuter* current = this->currentMethodExecuter;
    if (current)
        return current->vtable->execute(current);   // vtable+0xC
    return current;
}

// 0x60818224. changeState is the complicated one, and the shape matters:
//
//   1. schedule the new state;
//   2. if a state was running, record it in lastState, tell the executer to end
//      it, and *immediately* build the new executer in the same call;
//   3. otherwise (nothing running) just build the new executer now.
//
// So a call from inside a running state does take effect immediately here --
// unlike a bare state assignment, which waits for execute(). The "one state per
// frame" rule above only applies to the constructor path.
StateMethodExecuter* StateMgr::changeState(StateBase* state)
{
    this->nextState = state;

    if (this->currentMethodExecuter)
    {
        this->lastState = this->currentMethodExecuter->vtable->getCurrentState(this->currentMethodExecuter);
        this->executer->end(this->currentMethodExecuter);            // vtable+0xC
    }

    if (this->nextState)
    {
        StateMethodExecuter* executer = this->executer->begin(this->nextState);
        this->nextState = nullptr;
        this->currentMethodExecuter = executer;
    }
    return this->currentMethodExecuter;
}


// 0x60009358 / 0x6000929C. Both StateActor and MultiStateActor are the same
// construction: put a StateWrapper at +0x17B0, point its executer's
// methodExecuter.owner back at `this`, zero the current state, hand the manager
// NullState, and install the vtables. MultiStateActor's only extra field is
// +0x17D4; its extra vtable layer is what lets a MultiStateActor dispatch states
// through an override.
//
// The StateWrapper at +0x17B0, read off the constructor's stores (movw
// #0x17b0 / #0x17b4 / #0x17b8 / #0x17bc / #0x17c0, then add r0,r4,#0x17c4 for
// the manager argument to StateMgr_ctor):
//
//     +0x17B0  void*              wrapper vtable          (0x60BC0450)
//     +0x17B4  StateExecuter      executer.vtable         (0x60BC0460)
//     +0x17B8      .methodExecuter.vtable                 (0x60BC0484)
//     +0x17BC      .methodExecuter.owner     = this
//     +0x17C0      .methodExecuter.currentState = nullptr
//     +0x17C4  StateMgr           executer                (r4+0x17C4 passed as arg 0)
//     +0x17C8      nextState
//     +0x17CC      currentMethodExecuter
//     +0x17D0      lastState
//     +0x17D4  u32                (MultiStateActor only)
//
// 0x17D4 - 0x17B0 = 0x24 = sizeof(StateWrapper), which is why MultiStateActor is
// 4 bytes (0x17D8) larger than StateActor (0x17D4).
MultiStateActor* MultiStateActor::MultiStateActor(const ActorBuildInfo* buildInfo)
    : CollisionActor(buildInfo)
{
    this->vtable = &vtable_for_MultiStateActor;

    this->states.vtable                            = &off_60BC0450;
    this->states.executer.vtable                   = &off_60BC0460;
    this->states.executer.methodExecuter.vtable    = &off_60BC0484;
    this->states.executer.methodExecuter.owner     = this;
    this->states.executer.methodExecuter.currentState = nullptr;
    StateMgr::StateMgr(&this->states.manager, &this->states.executer, &NullState);

    this->field_17D4 = 0;
    this->states.vtable = &off_60BC0440;
    return this;
}


// ---------------------------------------------------------------------------
// Profile
// ---------------------------------------------------------------------------

// 0x60017F6C. Five arguments, and all five are stored:
//
//     Profile(Profile* this, ActorBuildFn build, u32 id, SafeString* name,
//             ActorInfo* info, u32 flags)
//
// `name` is accepted and discarded -- Deluxe keeps profile names in the level
// data and the profile table, not in the Profile. `info == null` means the
// default ActorInfo, which is how the hundreds of profiles that share default
// sizes are registered.
//
// The constructor registers itself: `Profiles[id] = this`, clamping an
// out-of-range id to slot 0. Profile::get (0x600182A0) then does the same clamp
// on the way out, so an unknown id resolves to Profiles[0] rather than crashing.
// That is why a mod can register a profile and be found by the game with no
// other cooperation.
Profile::Profile(ActorBuildFn build, u32 id, SafeString* name, void* actorInfo, u32 flags)
{
    this->vtable      = &Profile_vtable;      // Deluxe has a vtable; Wii U does not
    this->buildFunction = build;
    this->id          = id;
    this->actorInfo   = actorInfo ? actorInfo : &ActorInfo_Default;
    this->hasResourceLoaded = 0;
    this->flags       = flags;

    u32 index = (id < 0x392) ? id : 0;        // 914 profiles
    Profiles[index] = this;
}

// 0x600182A0.
Profile* Profile::get(u32 id)
{
    if (id >= 0x392)
        id = 0;
    return Profiles[id];
}


// ---------------------------------------------------------------------------
// ActorMgr -- allocation, the id source, and the three life lists
// ---------------------------------------------------------------------------
//
// ActorMgr is a singleton at a fixed address. Only the fields the actor code
// actually touches are established; these offsets are all from disassembly, and
// each one is corroborated twice (the allocating function and the function that
// reads it back):
//
//     +0x5990  u32          list 1 count        (ActorMgr::create, +5732*4)
//     +0x5994  u32          list 1 offset       (the node offset added to the actor)
//     +0x59A0  u32          list 3 count        (the "dead" list)
//     +0x59A4  u32          list 3 offset
//     +0x6A20  map          id -> Actor         (ActorMgrRelated_getById)
//     +0x6A28  u32          id counter, upper part
//     +0x6A30  u32          id counter, lower part
//     +0x6A38  u32          the id handed to the next actor
//     +0x6A3C  u8           copied into Actor::field_10

// 0x600082CC. Allocate and construct. Two things here are worth knowing:
//
// 1. *The heap depends on the profile id.* Ids 443, 444, 855 and 856 are the
//    players, and they are allocated on a heap literally named "PlayerHeap";
//    everything else goes on "ActorHeap". So "is this a player" is decided by a
//    four-way id comparison at spawn time, before any of the actor's own code
//    runs. A mod that wants an actor on the player heap has to be one of those
//    four ids -- there is no flag for it.
//
// 2. The id bookkeeping happens *before* the build function is called:
//
//        ActorMgr+0x6A38 = (ActorMgr+0x6A30) | (ActorMgr+0x6A28 << 22)
//
//    That is the value Actor::Actor then copies out at +0x08, which is why an
//    actor's id is not its spawn index and not its profile id. The high 10 bits
//    come from one counter and the low 22 from another.
Actor* ActorMgr::spawn(ActorBuildInfo* buildInfo, u8 flag)
{
    u32 heapToken = 0;
    sead::SafeString heapName;

    u32 profileId = buildInfo->profile->id;
    bool isPlayer  = (profileId == 443 || profileId == 444 ||
                      profileId == 855 || profileId == 856);

    heapName.vtable = &vtable_for_SafeStringBase_char;
    heapName.cstr   = isPlayer ? "PlayerHeap" : "ActorHeap";

    sead::Heap* heap = sead::HeapMgr::createHeap(0, &heapName,
                                                 isPlayer ? this->field_4 : this->field_5,
                                                 4, 1, 0);
    if (!heap)
        return nullptr;

    *(u32*)((char*)this + 0x6A38) = *(u32*)((char*)this + 0x6A30)
                                  | (*(u32*)((char*)this + 0x6A28) << 22);
    *(u8*)((char*)this + 0x6A3C) = flag;

    u32 previousHeap = sead::HeapMgr::setCurrentHeap(sead::HeapMgr::sInstance, heap);

    // The profile's own build function does the construction.
    Actor* actor = buildInfo->profile->buildFunction(buildInfo);

    ActorMgrRelated_insert((u32*)this + 6792, (u32)actor);

    if (previousHeap != 1)
        sead::HeapMgr::setCurrentHeap(sead::HeapMgr::sInstance, previousHeap);

    return actor;
}

// 0x60008138. The lifecycle wrapper around spawn(): it calls the actor's
// beforeCreate virtual (vtable+0x10) and, if that returns nonzero, its
// afterCreate (vtable+0x18) with a "how did create go" code, then puts the actor
// on one of the manager's lists:
//
//     afterCreate(code) where code = max(0, 3 - beforeCreate())
//
//     code 3        -> the live list   (+0x5990 count, +0x5994 offset)
//     code 2        -> marked and moved to the "created later" path
//     anything else -> the dead list   (+0x59A0 count, +0x59A4 offset),
//                      Actor::isDeleted (+0x13) set to 1, returns null
//
// So the return value of beforeCreate is a three-way verdict, not a boolean, and
// the same value decides both the afterCreate argument and which list the actor
// ends up on. `actor + 0x12` (field_12) is the "created later" byte.
Actor* ActorMgr::create(ActorBuildInfo* buildInfo, u32 mode)
{
    Actor* actor = this->spawn(buildInfo, 1);
    if (!actor)
        return nullptr;

    // Already finalised (the spawn path handled it).
    if (actor->field_12)
    {
        if (mode != 1)
            return this->insertLive(actor, mode);
        this->insertLater(actor);
        return actor;
    }

    if (actor->vtable->beforeCreate(actor))
    {
        u32 previousHeap = 1;
        if (actor->heap)
            previousHeap = sead::HeapMgr::setCurrentHeap(sead::HeapMgr::sInstance, actor->heap);

        u32 verdict = actor->vtable->onExecuteStage(actor);   // vtable+0x14
        u32 code = 0;
        if (verdict < 3)
            code = 3 - verdict;

        if (previousHeap != 1)
            sead::HeapMgr::setCurrentHeap(sead::HeapMgr::sInstance, previousHeap);

        actor->vtable->afterCreate(actor, code);              // vtable+0x18

        if (code >= 2 && code != 3)
        {
            if (code != 2)
                return nullptr;
            actor->field_12 = 1;
            if (mode != 1)
                return this->insertLive(actor, mode);
            this->insertLater(actor);
            return actor;
        }
    }
    else
    {
        actor->vtable->afterCreate(actor, 0);
    }

    actor->isDeleted = 1;
    this->insertDead(actor);
    return nullptr;
}
