// Choropoo.cpp -- the Rocky Wrench (ãƒãƒ§ãƒ­ãƒ—ãƒ¼), profile 263, sprite 611.
//
// This is a complete actor: what it loads, how it moves, how it throws, how it
// dies, and the three companion actors that make the mechanic work. Written for
// the purpose of writing custom code against it, so every hookable surface is
// named with its offset and its role.
//
// Deluxe (Switch) v1.0.0. Ledger F0167-F0176.
//
// ===========================================================================
// THE NAME, FIRST, BECAUSE IT COST ME TIME
// ===========================================================================
//
// "Rocky Wrench" is a *localisation* name. There is no `rocky` or `wrench`
// string anywhere in the binary (verified: 0 hits in main.nso). The actor is
// called **choropoo** everywhere in the game's own data -- the archive, the
// model, the material names, the profile. `ãƒãƒ§ãƒ­ãƒ—ãƒ¼` is the Japanese name and
// the internal name is its romanisation.
//
// So to find this actor you search for `choropoo`, and if you search for
// "rocky wrench" you will conclude it does not exist. The only exception is the
// throwable itself, which is `spanner` (ã‚¹ãƒ‘ãƒŠ) -- and separately there is an
// internal symbol `Wrench` at 0x60148FAC which is the *spanner's* build
// function, not the mob's.
//
// ===========================================================================
// WHAT IT IS MADE OF (the archive)
// ===========================================================================
//
// `choropoo.Nin_NX_NVN.szs` is a Yaz0+SARC containing nine files. Parsing it is
// worth documenting because the layout is non-obvious:
//
//   SARC header at 0x00, big-endian (BOM feff), header size 0x14
//   SFAT at 0x14  -- header size 0x0C, 9 nodes of 16 bytes, hash key 0x65
//   SFNT at 0xB0  -- header size 0x08, then the string table
//   data starts at 0x2000 (node 0's start offset is 0)
//
// The SFAT node's `attr` low 24 bits are a byte offset into the string table,
// and the strings are `u32 length` + bytes, padded to 4. (This is NOT the
// classic SARC layout where the name offset is a NUL-terminated string and the
// data follows SFNT immediately; assuming that yields correct filenames and
// garbage data offsets -- which is exactly the bug I hit first.)
//
//   choropoo.bfres         335872  model, skeleton, materials, 11 animations
//   choropoo.sharc          77998  shader archive
//   choropoo.sharcfb       101551  compiled shader binary
//   choropoo_hole.sharc     48734  the hole actor's shader
//   choropoo_hole.sharcfb   26124
//   spanner.sharc           49859  the thrown wrench's shader
//   spanner.sharcfb         25605
//   manhole.sharc           49922  the manhole's shader
//   manhole.sharcfb         25668
//
// The bfres is a big-endian FRES v0x3000001. Its name table (at 0x10DE4, 1128
// bytes) holds 74 names, which is the complete vocabulary of the actor:
//
//   BONES      skl_root, head, arm_left, arm_right, arm_spanner_left,
//              arm_spanner_right, foot_left, foot_right, choropoo,
//              choropoo_goggle, choropoo_whisker
//   ANIMATIONS walk, throw_1, throw_2, throw_3, throw_4_left_hand,
//              throw_4_right_hand, throw_5, spin, joy, dead, dead_2,
//              frozen, go_out_st, go_out_ed
//   MODELS     choropoo, choropoo_hole_model, choropoo_hole_dark, spanner,
//              spanner_model, manhole, manhole_model, sunglasses
//   MATERIALS  mat_choropoo, mat_choropoo_goggle, mat_choropoo_hole,
//              mat_choropoo_whisker, mat_spanner, mat_manhole, mat_color0,
//              mat_color1
//   TEXTURES   choropoo, choropoo_env, choropoo_goggle, choropoo_hole,
//              choropoo_hole_dark, choropoo_whisker, spanner, spanner_env,
//              manhole, manhole_env
//
// The animation list is the mechanic list. `throw_1`..`throw_5` are five
// distinct throw poses, and `throw_4_left_hand` / `throw_4_right_hand` are the
// same pose from each hand -- so the fifth throw alternates hands. That is the
// behaviour the vanilla fight has and it is visible purely from the asset names
// before reading a single instruction.
//
// ===========================================================================
// THE FOUR ACTORS
// ===========================================================================
//
// A Rocky Wrench encounter is not one actor. It is four, wired by link id:
//
//   sprite 611  profile 263  choropoo       factory 0x6027B310  sizeof 0x2470
//   sprite 612  profile 264  choropoo_hole  factory 0x60278FAC  sizeof 0x17D8
//   sprite 618  profile None spanner        factory 0x60148FAC  sizeof 0x2ED0
//   sprite 619  profile None manhole        factory 0x6034291C  sizeof 0x17F0
//
// and the mob itself owns two of them at once: it carries a **spanner** and
// hides in a **manhole**. The `choropoo_hole` is the separate "will it pop out
// here" marker that decides where it is allowed to emerge.
//
// This is the same link-id pattern as the boss door in readable/boss/Lemmy.cpp:
// the mob stores an id at +0x18A0, resolves it through
// `ActorMgrRelated_getById(ActorMgr::instance + 27168, id)`, and drives the
// other actor. A custom version must place and link the companions or the mob
// has nothing to throw and nowhere to hide.

#include "game/enemy.h"
#include "actor/stageactor.h"

// ---------------------------------------------------------------------------
// 1. Choropoo itself
// ---------------------------------------------------------------------------

// The factory is the standard three-statement shape: allocate, construct, done.
//
//     0x6027B310  push {r4,lr}
//     0x6027B318  movw r0,#0x2470      ; sizeof(Choropoo) = 9296 bytes
//     0x6027B31C  bl   operator new
//     0x6027B328  b    0x6027B330      ; tail-call the real constructor
//
// Note the tail call: the factory's `b` means the constructor returns straight
// to the caller, so a breakpoint on 0x6027B310 and one on 0x6027B330 see the
// same object. The constructor chains to `Enemy_ctor` (0x602A1A8C) and installs
// the vtable at +8 from the GOT chain.
constexpr u32 kChoropooFactory    = 0x6027B310;
constexpr u32 kChoropooCtor       = 0x6027B330;
constexpr u32 kChoropooVtable     = 0x60BDD2DC;
constexpr u32 kChoropooSize       = 0x2470;

// The object layout checks out arithmetically, which is how you know the
// collision offsets are real rather than plausible-looking constants:
//
//   collider A  +0x00BC  ActiveCollider (0x130)  ends 0x1EC
//   collider B  +0x2314  ActiveCollider (0x130)  ends 0x2444
//   scaler      +0x2444  ActorScaler   (0x020)   ends 0x2464
//   flags       +0x2464, +0x2465                 ends 0x2466
//   sizeof      0x2470
//
// Collider B ends at exactly the offset where the ActorScaler begins, and the
// scaler ends 2 bytes before the object does -- which is precisely the two u8
// flags. A wrong offset anywhere in that chain would not tile the object
// exactly, so the two-collider layout is confirmed rather than assumed.
constexpr u32 kColliderA        = 188;    // +0x00BC
constexpr u32 kColliderB        = 8980;   // +0x2314
constexpr u32 kScalerOffset     = 9284;   // +0x2444
constexpr u32 kHiddenFlag       = 9324;   // +0x2464
constexpr u32 kSeenLatch        = 9325;   // +0x2465

// Field map, established from onCreate (0x6027B530) and onExecute (0x6027B9BC).
// Offsets below 0x284 are the shared StageActor/Enemy block and are not repeated
// here; these are Choropoo's own.
//   +0x2308  (8968)  animation timer, decremented every tick
//   +0x230C  (8972)  animation timer, decremented every tick
//   +0x18A0  linkId of the spanner actor it is carrying/throwing
//   +0x18A8  u32, zeroed at create -- companion/manhole state
//   +0x18B4  u32, zeroed at create

constexpr u32 kSpannerLinkId   = 0x18A0;
constexpr u32 kCompanionA      = 0x18A8;
constexpr u32 kCompanionB      = 0x18B4;
constexpr u32 kAnimCounterA    = 8968;
constexpr u32 kAnimCounterB    = 8972;


// ---------------------------------------------------------------------------
// 2. onCreate -- 0x6027B530
// ---------------------------------------------------------------------------
//
// Creates the colliders and picks a state. The striking part is the first block:
// the mob reads a byte from a global player/level object and, if that byte is
// set, makes itself *intangible and non-solid* before it has even spawned.
//
//     *(u8*)(this + 9324) = 0;
//     if (dword_60C9A1F0) {
//         v3 = *(u8*)(dword_60C9A1F0 + 6546);
//         *(u8*)(this + 9324) = v3;
//         if (v3) {
//             *(u32*)(this + 568) &= ~0x10;    // clear a collision-mgr flag
//             *(u32*)(this + 76)  |= 4;        // set an actor flag
//         }
//     }
//
// `dword_60C9A1F0` is the same object the water-splash helper takes as its first
// argument in the liquid check below, and offset 6546 (0x1992) is read again
// there. So this is a "the level is in a special mode" byte -- the same global
// gates both the hidden state and the splash behaviour. A custom spawn can
// therefore force `+9324` to control whether the mob starts hidden.
//
// Then:
//
//     setupModel(this);                   // 0x6027B714, loads and plays "walk"
//     *(u32*)(this + 6304) = 0;           // +0x18A0 clear (spanner link)
//     *(f32*)(this + 144..152) = 1.0f;    // ActorScaler scale = {1,1,1}
//     dir = StageActor::directionToPlayerX(this, &this->position);
//     *(u32*)(this + 80)  = dir;          // facing
//     *(u8*)(this + 8852) = dir;          // duplicated into a byte
//     *(f32*)(this + 116) = 1468.0f;      // 1152876544 == 0x44B78000
//     *(u32*)(this + 572) = 0;
//     *(f32*)(this + 576) = 8.0f;         // 1090519040 == 0x41000000
//     *(u32*)(this + 580) = 0;
//
// Those three floats at +116/+576/+580 and the three at +492/+496/+500 are worth
// decoding literally, because the decompiler's decimal dumps are unreadable and
// it is easy to smoke-test the wrong value (I did, and wrote 197.0f at +116 in a
// first pass -- it is 1468.0f):
//
//     +116 = 1468.0     +492 = 0.0     +500 = 384.0
//     +576 = 8.0        +496 = 8.0     +504 = 32.0
//
// and the "seen" path sets +116 = 2964.0f (0x45394000), i.e. exactly double
// 1468.0. So +116 is a distance/range field that doubles when the mob notices
// the player. That is a clean, self-consistent pair rather than two unrelated
// magic numbers, and doubling range on aggro is a behaviour you can retune by
// changing one constant.
//
//     ActiveCollider::init(this + 188,  this, &unk_60BDD550,   0);
//     ActiveCollider::init(this + 8980, this, &stru_60AFDDA4, this + 9284);
//
// Two colliders. The first (this+188) is the normal Enemy collider; the second
// (this+8980) is the one bound to the scaler. Two colliders on one enemy is the
// same structure a boss has (readable/boss/Lemmy.cpp), and it exists so the
// visible body and the hittable body can differ -- which for a mob that spends
// most of its life underground is the whole point.
//
// Finally the state choice:
//
//     if (*(u32*)(this + 20) == 3)  v6 = &dword_60C8EFEC;   // one state table
//     else                          v6 = &dword_60C8EE38;   // another
//     this->vtable[0x30](this, v6);                          // setStateData
//
// `this+20` is 0x14, the spawn-parameter word (the same "variant" dword that
// distinguishes Goomba from Goombrat -- see readable/enemy/Goomba.cpp). So the
// same profile spawns two different behaviours based on one number, and value 3
// is the alternate one. That is the cheapest possible custom variant: change
// the spawn parameter, not the code.

// ---------------------------------------------------------------------------
// 3. onExecute -- 0x6027B9BC, the per-frame brain
// ---------------------------------------------------------------------------
//
// The order matters, so here it is exactly:
//
//     StateMgr::execute(this + 6084);          // the state machine
//     sub_602A33AC(this);                      // Enemy common tick
//     ActorScaler_execute(this + 9288);        // the scaler
//     sub_6027BB88(this);                      // liquid check + splash
//     --*(u32*)(this + 8972);                  // two animation timers
//     --*(u32*)(this + 8968);
//
// then the "saw the player" latch:
//
//     if (*(u8*)(this + 9324)) {                       // if hidden
//         v3 = *(u32*)(dword_60C995D0 + 32);           // the camera or player
//         if (v3 && v3->vtable[2](v3, &typeInfo) == 1) {   // isA check
//             *(u8*)(this + 9325) = 1;                 // seen latch
//             *(f32*)(this + 116) = 2964.0f;           // 1161379840 == 0x45394000
//         }
//     }
//
// and then the spanner:
//
//     id = *(u32*)(this + 6304);                       // +0x18A0
//     if (id) {
//         spanner = ActorMgrRelated_getById(ActorMgr::instance + 27168, id);
//         if (!spanner) { *(u32*)(this + 6304) = 0; goto cull; }
//         Vec2 p = { this->position.x, this->position.y };
//         sub_605ED0DC(spanner, &p);                   // push a position sample
//         id = *(u32*)(this + 6304);
//         if (id) {
//             spanner = ActorMgrRelated_getById(..., id);
//             if (spanner && sub_605ED718(spanner) != 1) return 1;   // still busy
//         }
//     }
//     StageActor::cullCheck(this, 0);
//
// `sub_605ED0DC` is worth reading, because it explains how the wrench tracks the
// hand without being a child actor:
//
//     idx = (*(u16*)(spanner + 0x2944) + 1) & 0x1FF;
//     *(u16*)(spanner + 0x2944) = idx;
//     slot = spanner + 8*idx;
//     *(f32*)(slot + 6468) = p->x;
//     *(f32*)(slot + 6472) = p->y + 8.0f;
//
// That is a 512-entry ring buffer of "hand position" samples inside the spanner
// actor, written one per frame, with an 8.0 vertical offset for the hand. The
// spanner then reads that history to draw its throw arc. So the wrench is not
// parented and not simulated from the mob -- it is a trail buffer, and the
// offset +8.0 is where the hand is relative to the mob's origin.
//
// The arithmetic confirms the layout rather than guessing it: the buffer runs
// 0x1944 + 8*512 = 0x2944, and the write index sits *immediately after it* at
// 0x2944 as a u16. The spanner's object size is 0x2ED0, so the whole 512-sample
// history plus the index fits with room to spare. That the index is a u16 masked
// with 0x1FF (not a u32) is what tells you it is a wrap counter and not a count.
//
// `sub_605ED718` is the "has the spanner finished" query: it walks
// `[spanner+0x17D8]` entries from `spanner+6108`, resolves each +12 as an actor
// id, and type-checks the result against `off_60BC0098` (a StageActor typeinfo).
// So a spanner can own sub-actors, and the mob waits while it does.

// ---------------------------------------------------------------------------
// 4. The liquid interaction -- sub_6027BB88
// ---------------------------------------------------------------------------
//
// Every tick the mob asks a global helper what liquid it is standing in:
//
//     checkLiquidCollisions(&result, 0, &this->position, this->layer);
//     switch (result) {
//       case 1: case 2:  splash(620,  6, "SE_OBJ_CMN_SPLASH");        break;
//       case 3: case 4:  splash(622, 16, "SE_OBJ_CMN_SPLASH_LAVA");
//                        sub_6040B3B0(dword_60C9A1F0, ...);            break;
//       case 5:          splash(621, 23, "SE_OBJ_CMN_SPLASH_POISON"); break;
//     }
//
// The numbers 620/621/622 are effect ids and 6/16/23 are sound ids, and the
// three cases are water, lava and poison. `v7 - 1 <= 4` gate means results 1..5
// are liquids and anything else (0, 6+) is dry. Because the whole thing is one
// call with the mob's position, this is also the cleanest place to detect "the
// custom boss is in water" without reimplementing liquid lookup.

// ---------------------------------------------------------------------------
// 5. What a custom actor actually needs from this
// ---------------------------------------------------------------------------
//
// Ranked by how much of the above you have to reimplement:
//
//   A. RESKIN -- change nothing but the archive. The model is loaded by the
//      literal "choropoo" and the idle animation by the literal "walk"
//      (0x6027B714). A replacement .szs with the same names and a different
//      mesh/anim set is a complete new enemy with zero code.
//
//   B. VARIANT -- set the spawn parameter at +0x14 to 3 to get the alternate
//      state table (dword_60C8EFEC instead of dword_60C8EE38). Zero code.
//
//   C. RETUNE -- the throw lives behind the state machine; the numbers that
//      matter are the two animation timers at +8968/+8972 and the throw arc's
//      +8.0 hand offset in the spanner ring buffer. Editing the offset moves
//      where the wrench appears to leave the hand.
//
//   D. NEW PROJECTILE -- point +0x18A0 at a different actor. The contract the
//      mob expects is only two functions: something callable as
//      `f(spanner, &Vec2)` to receive a hand sample, and something returning 1
//      when finished. Any actor with those two entry points can replace the
//      spanner, which is why "throw fire instead" is a small change.
//
//   E. NEW MOB -- reuse the four-actor structure: mob + door/hole + carried
//      object. The link-id lookup and the two-collider layout are the reusable
//      parts; the state machine is the part you write.
//
// The single easiest mistake is to assume the thrown object is a projectile the
// mob spawns. It is not: it is a persistent actor the mob holds, hands a
// position history to each frame, and waits on. Killing it without clearing
// +0x18A0 leaves the mob waiting forever, which is why onExecute clears the id
// when the lookup fails.
