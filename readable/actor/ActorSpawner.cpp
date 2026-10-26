// ActorSpawner.cpp -- a sprite that creates another sprite.
//
// Reference implementation: codedx (RicBent) source/actorspawner.cpp. This file
// is the Deluxe reverse of that idea: what the game actually does, what codedx
// assumed, and where the two differ. The working code lives in
// framework/actors/code/actor_spawner.cpp.
//
// Ledger F0177-F0187.
//
// ===========================================================================
// WHAT CODEX'S SPAWNER IS
// ===========================================================================
//
// It is a StageActor that does nothing on its own. It reads a profile id out of
// its own placement fields, waits for an event, and calls ActorMgr::create once:
//
//     u32 onCreate()
//     {
//         if (!eventId2) return 2;                 // no event -> self-destruct
//         u16 inputId = linkId | ((movementId & 0xF) << 8);
//         if (movementId & 0x10)
//             spawnProfileId = Profile::spriteToProfileList[inputId];
//         else
//             spawnProfileId = inputId;
//         spawned = false;
//         return 1;
//     }
//
//     u32 onExecute()
//     {
//         if (EventMgr::instance->isActive(eventId2 - 1)) {
//             if (!spawned) { buildInfo...; ActorMgr::instance->create(&buildInfo, 0); spawned = true; }
//         } else spawned = false;
//         return 1;
//     }
//
// Three ideas are packed in there and they are worth separating, because they
// have very different reliability on Deluxe:
//
//   1. PROFILE FROM PLACEMENT. `linkId` is the low 8 bits of the wanted id and
//      `movementId`'s low nibble supplies bits 8-11. So one sprite covers ids
//      0-4095. Bit 4 of movementId switches between "the value is a sprite id,
//      look up its profile" and "the value is already a profile id".
//
//   2. EVENT GATING. The sprite stays dormant until event `eventId2 - 1` is
//      active, and re-arms when it goes inactive. codedx uses `eventId2` (the
//      second event byte) as the trigger and `eventId1`'s two nibbles as the
//      event ids handed to the spawned child.
//
//   3. CREATE. A zeroed ActorBuildInfo, filled with the spawner's own settings
//      and position, handed to ActorMgr::create with unk = 0.
//
// (1) and (3) reverse cleanly onto Deluxe. (2) needed checking, because a
// missing event system would have made the whole sprite dead code -- see below.
//
// ===========================================================================
// WHAT CHECKS OUT ON DELUXE, VERIFIED
// ===========================================================================
//
// ActorBuildInfo is byte-for-byte the codedx layout (Actor::Actor 0x60002C54):
//
//     +0x00 settings1     +0x04 settings2     +0x08 parentId
//     +0x0C profile       +0x10 position      +0x1C rotation
//     +0x20 _20           +0x21 eventId1      +0x22 eventId2     +0x23 _23
//     +0x24 movementId    +0x25 linkId        +0x26 initStateFlag +0x27 _27
//     +0x28 _28
//
// Every field Actor::Actor reads matches: it copies +0C to profile, +00 to
// settings1, +04 to settings2, +24/25/26 to movementId/linkId/initStateFlag,
// and resolves +08 through ActorMgrRelated_getById(ActorMgr+0x6A20, parentId).
//
// StageActor's constructor (0x600002A0) copies the position triple from
// buildInfo+0x10 into field +0x6C, and BuildInfo's event bytes into the actor:
//
//     0x600003E0  ldrb r0,[r5,#0x21]   ; buildInfo->eventId1
//     0x600003E4  strb r0,[r4,#0x21b]  ; actor +0x21B
//     0x600003E8  ldrb r0,[r5,#0x22]   ; buildInfo->eventId2
//     0x600003EC  strb r0,[r4,#0x21c]  ; actor +0x21C
//
// which is codedx's `eventId1`/`eventId2` at the same offsets it documents.
//
// ActorMgr::create (0x60008138) is a member function taking the build info and
// one extra word, and the extra word is a real three-way switch:
//
//     actor = build(actorMgr, buildInfo, /*r2=*/1);
//     if (!actor) return 0;
//     if (actor->removeRequested) {        // +0x12, NOT +0x13 (see below)
//         if (unk == 1) { remove(actor); return actor; }
//         if (unk == 0) { insertFront(list); count++; }
//         return actor;
//     }
//     if (!beforeCreate(actor)) { afterCreate(actor, 0); return 0; }
//     verdict = onCreate(actor);
//     afterCreate(actor, max(0, 3 - verdict));
//     ...
//
// Note the flag. The test at 0x6000815C is `ldrb r0,[r5,#0x12]`, which is
// "a removal was requested", not the isDeleted byte at +0x13. The two are
// distinct and cleared together in the constructor (0x60002CC8/0x60002CCC);
// conflating them is an easy and silent mistake (F0193).
//
// Surveying all 323 call sites to create: 287 pass 0, 19 pass 1. So 0 is the
// ordinary "create and put it in the list" path -- which is what a spawner
// wants, and what codedx passes.
//
// The onCreate verdict is the part worth knowing if you write your own spawner
// target: the game computes `max(0, 3 - verdict)` and passes that to
// afterCreate. Returning 0 yields 3, returning 1 yields 2, returning 2 yields
// 1, returning 3 yields 0. codedx's `return 2` for "no event configured"
// therefore is not "destroy" -- it lands in the `verdict >= 2` branch, which
// marks the actor deleted (+18) and does NOT insert it into the list. The effect
// is a clean self-removal, so the intent survives, but it is not the same
// mechanism as returning 3.
//
// One consequence is easy to miss and was only found while re-deriving create
// for readable/engine/ActorMgr.cpp (F0194, F0198). StageActor::afterCreate
// (0x60000694) copies the actor's position triple +0x6C/+0x70/+0x74 into the
// spawn and home triples at +0x248 and +0x260 ONLY when its argument equals 2,
// i.e. only when onCreate returned 1. So an actor whose onCreate returns
// anything else is created but never latches its spawn position. If you write a
// custom actor that comes out at the origin instead of where you placed it, the
// return value of your onCreate is the first thing to check.
//
// ===========================================================================
// THE EVENT SYSTEM DOES EXIST ON DELUXE -- WITH ONE CATCH
// ===========================================================================
//
// The strings "EventMgr", "eventId" and "isActive" appear ZERO times in
// main.nso, which looks like the whole gating idea is dead on Deluxe. It is not:
// the class is simply unnamed in the build. EventMgr::set survives as a symbol
// (0x6072A4B0) and has 34 call sites, and its layout is codedx's:
//
//     ldrd r6,r7,[r0,#0x10]      ; u64 events at +0x10
//     orr  r4,r6,r4              ; set the bit for the id
//     strd r4,[r0,#0x10]
//
// so `isActive(id)` is `(*(u64*)(this+0x10) >> id) & 1`. codedx's header declares
// `events` after its 0x10-byte sead::IDisposer base, so it is +0x10 there too
// (ledger F0211; an earlier version of this note said +0x0).
//
// One of those call sites is the pattern a spawner must match, and it also
// confirms the actor event fields drive events (0x60113F50):
//
//     ldrb r1,[r4,#0x21b]        ; actor->eventId1
//     add  r1,r1,#0xff           ; r1 = eventId1 - 1
//     uxtb r1,r1
//     bl   EventMgr_set          ; set(eventId1 - 1, ...)
//
// i.e. the game itself uses `eventId - 1` as the event index, exactly as codedx
// does. The `- 1` is not a quirk, it is the convention: event id 0 in a level
// file means "no event".
//
// The catch: EventMgr::instance is a pointer global, 0x60CBD8AC (the GOT slot
// 0x60C638F4 the call above loads it through; an earlier note said 0x60C7B390,
// a miscomputed GOT read -- that is an RTTI static, ledger F0229). Reach it
// through codedx's EventMgr::instance symbol, never a constant: the game is not
// loaded at 0x60000000 at runtime. A custom
// actor only needs it if it wants event gating. For a spawner the more useful
// default is "no gate" -- spawn on create -- because relying on an event that a
// custom level never sets produces a sprite that silently does nothing, which
// is the single most common failure mode of a ported codedx spawner.

// ===========================================================================
// WHY THIS IS MORE USEFUL ON DELUXE THAN IT WAS ON WII U
// ===========================================================================
//
// On Wii U, codedx's spawner existed to place custom sprites in vanilla levels
// where the level file had no free sprite slot. On Deluxe the build tooling
// already appends custom profiles to `Profile::spriteToProfileList` (that is
// what profiles.txt does), so a custom sprite can be placed directly and the
// spawner is not needed for that.
//
// What is still genuinely hard on Deluxe, and what this actor is for:
//
//   * SPANNING BY PROFILE ID, NOT SPRITE ID. A level stores a sprite id. The
//     table maps sprite -> profile. If you want to spawn by profile id you must
//     bypass the table, and there is no vanilla actor that does. Hence the
//     `movementId & 0x10` bit: it says "the number is already a profile".
//
//   * SPAWNING MORE THAN ONE THING FROM ONE PLACEMENT. A vanilla placement is
//     one actor. A spawner placed once can create N actors from one sprite slot
//     -- a boss plus its arena door plus its hole, which is exactly the
//     multi-actor structure reversed in readable/enemy/Choropoo.cpp and
//     readable/boss/Lemmy.cpp. Those mechanisms depend on link ids and
//     companion actors, and a spawner is the only way to create a companion
//     from a single level entry.
//
//   * CONDITIONAL SPAWNING. Spawn a mob only when the player has a powerup, or
//     only after a flag is set. The onCreate verdict and the event gate make
//     this a few lines, where a vanilla actor would need a whole state machine.
//
//   * SPAWNING AT A DIFFERENT PLACE. The buildInfo position is copied from the
//     spawner, but it is an ordinary Vec3: an offset makes a one-slot machine
//     gun, a ring, or a boss arena layout.
//
// ===========================================================================
// THE DESIGN USED HERE
// ===========================================================================
//
// Three modes, selected by the same two bytes codedx uses, so a level built for
// codedx keeps working:
//
//   mode 0 (movementId bit 4 clear): `id` is a PROFILE id  -> Profile::get(id)
//   mode 1 (movementId bit 4 set):   `id` is a SPRITE id   -> spriteToProfileList[id]
//
// plus, new on Deluxe:
//
//   * `eventId2 == 0` means NO GATE: spawn immediately and once. This is the
//     default a custom level gets for free, and it removes codedx's most common
//     silent failure.
//   * `settings1` is passed through; `settings2` becomes a COUNT (1-16) instead
//     of being ignored, so one placement can create several actors. The count is
//     encoded in the high nibble so that 0 still means 1.
//   * An optional position offset from `initStateFlag`'s two nibbles gives a
//     horizontal/vertical spread without needing more sprite entries.
//   * Every failure is logged rather than silently producing nothing.
//
// The spawn loop itself is deliberately dull: fill a zeroed ActorBuildInfo,
// copy the fields across, call ActorMgr::create(info, 0), and never keep the
// pointer (the child may delete itself in its own onCreate, which is legal and
// common -- the spawner must not hold it).
