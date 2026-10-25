// Goomba.cpp -- readable reconstruction of the Goomba family (profiles 467-473,
// 892-893): Goomba and Goombrat (Kakibo) in detail, the rest for context.
//
// Hand-written, behaviour-equivalent rendering of the game functions at the
// addresses given, using framework/game/include/game/goomba.h. Evidence:
// data/findings/ledger.csv F0091-F0102.
//
// The finding that makes a Goombrat mod possible: **Goomba and Goombrat are one
// C++ class**. They share a build function (0x60337D2C), one state table and
// one copy of every virtual. The only thing that distinguishes them at run time
// is `Actor::getProfileId() == 468` in Goomba::onCreate (0x603393F0) -- and from
// that single flag the game derives a different archive ("kakibo" vs "kuribo"),
// a different starting walk state, a different animation set and a different
// set of tuning numbers. Nothing is overridden per class.
//
// That is why a new sprite with Goombrat mechanics is cheap: register a profile
// whose build runs with profile id 468, and the game's own code does the rest.
//
// Deluxe (Switch) v1.0.0. Documents the game; not compiled.

#include "game/goomba.h"

// ---------------------------------------------------------------------------
// Profiles: two from one registration function
// ---------------------------------------------------------------------------

// 0x60339D44 (sub_60339D44, "registerProfile_Goomba")
//
//   Profile(&profiles[467], Goomba::build, 0x1D3 /*467*/, "クリボー",
//           &actorInfo_60AFFAEC, 18);
//   Profile(&profiles[468], Goomba::build, 0x1D4 /*468*/, "カキボー",
//           &actorInfo_60AFFAEC, 18);
//
// Same build function, same ActorInfo, same flags (0x12). The profile id is the
// only discriminator, and it is what Goomba::onCreate reads.
//
// Profile::Profile (0x60017F6C) stores `Profiles[id] = this` and ignores ids
// >= 0x392 (914), so 467 and 468 live in the vanillla table.
//
// The same function then builds ten State objects in .bss from 0x60C94278 and
// fills the variant tables. The tail (0x6033A134 onwards) is the part that
// names the two archives:
//
//   [0x60C94428] = "kuribo"     variant 0 archive
//   [0x60C94430] = "kakibo"     variant 1 archive
//
// and the part before it (0x60338B44 / 0x6033894C) writes the per-variant
// tuning floats.
void registerGoombaProfiles();

// ---------------------------------------------------------------------------
// Build
// ---------------------------------------------------------------------------

// 0x60337D2C (Goomba::build). The factory for both profiles.
Actor* Goomba::build(const ActorBuildInfo* buildInfo)
{
    return new Goomba(buildInfo);                       // operator new(0x1AE8)
}

// 0x6033BD20 (GoombaBase::GoombaBase), called by the above.
//
// Class chain: Actor (0x50) -> StageActor (0x284) -> CollisionActor (0x17B0)
// -> StateActor (0x17D4) -> MultiStateActor (0x17D8) -> Enemy (0x189C) ->
// GoombaBase -> Goomba (0x1AE8).
//
// GoombaBase's constructor, field by field (offsets from the disassembly of
// 0x6033BD20; the operands are `a1+6300`, `a1+6304`, ... i.e. 0x189C, 0x18A0):
//   +0x189C  model manager   = 0      (a1+6300)
//   +0x18A0  model           = 0      (a1+6304)
//   +0x18A4  texture anim    = 0      (a1+6308)
//   +0x18A8  EffectWrapper(this+0x18A8, 11)          sub_6040E90C
//   +0x18E8  = 0
//   +0x18EC  ActiveCollider (damage collider)        ActiveCollider_ctor
//   +0x1A1C  = 1.0f   +0x1A20 = 0   +0x1A24 = 1.0f   +0x1A28 = 0
//   +0x1A2C  = 1
//   +0x1A38  = 0
//   +0x1A3E..+0x1A4C  bools = 0
//   +0x1A3C  sub_602A8564(this+0x1A3C, this->id)
//   +0x1A60  sub_602A40A0(this+0x1A60, this->id)
//   +0x1A74  vtable = ActorScaler_vtable
//   +0x1A78..+0x1A84 = 1.0f x4
//   +0x1A88  = 0     +0x1A8C = 0
//   +0x1A90  = this
//   +0x1A94  = off_60BED3DC
//
// Goomba's own constructor then zeroes +0x1AB4..+0x1AE0 and installs Goomba's
// vtable (0x60BED3DC is GoombaBase's; Goomba's is the one build() writes):
//   +0x1AB4  u32  _1AB4
//   +0x1AB5  u8   walkAnim   which walk animation is playing (setWalkState)
//   +0x1AB8  u8   oneShot    cleared every update (0x60339C98)
//   +0x1ABC  u8   _1ABC
//   +0x1AC4..+0x1AD0  u32 x4
//   +0x1AD4..+0x1AE0  u32 x4
//
// The two bytes onCreate sets, and setWalkState reads back, are:
//   +0x1A31  isGoombrat   (STRBEQ R1,[R10], R10 = this+0x1A31)
//   +0x1A32  variantFlag  (STRB R1,[R7,R0], R0 = 0x1A32)
// Note they sit *inside* GoombaBase's tail, not in Goomba's own block.

// ---------------------------------------------------------------------------
// onCreate: where Goomba and Goombrat diverge
// ---------------------------------------------------------------------------

// 0x603393F0 (Goomba::onCreate, vtable +0x270)
u32 Goomba::onCreate()
{
    // ---- the single discriminator ----
    // Disassembly:  BL Actor::getProfileId;  LDR R2, =GOT_PROFILEID_KAKIBO
    //               LDR R1,[R2]; LDR R2,[R1]; CMP R0,R2; MOVEQ R1,#1
    //               STRBEQ R1,[R10] (this+0x1A31); STRB R1,[this+0x1A32]
    // The GOT slot resolves to 0x60AF3478, which holds 468.
    isGoombrat = Actor::getProfileId(this) == 468;       // +0x1A31
    _1ABC      = isGoombrat;                             // +0x1A32

    // ---- archive ----
    // LDR R0,=(unk_60C94410); ADD R5,R0,#0x14   -> variant table base + 0x14
    // ADD R1,R5,R1,LSL#3                        -> + 8 per variant
    // => entry at 0x60C94424 (Goomba) / 0x60C9442C (Goombrat), each a sead
    //    SafeString {vtable, cstr}: "kuribo" / "kakibo".
    archive = LoadResource(ResourceMgrRelated_instance, kArchives[isGoombrat]);

    // ---- model manager ----
    modelMgr = createModelMgr(archive, isGoombrat);       // sub_6033CF5C
    model    = *(void**)modelMgr->models;                 // [[mgr+0x14]]
    TexAnim_play(model, archive, "walk");

    // ---- the Goombrat's start state ----
    // LDRB R0,[R10]; CMP R0,#0; BLNE sub_6033A26C(this, 1)
    // The Goombrat begins in walk1 (with its "alert" effect), the Goomba does
    // not: the Goomba's animation is set by createModelMgr instead.
    if (isGoombrat)
        setWalkState(1);                                  // sub_6033A26C

    scale = Vec3(1.0f, 1.0f, 1.0f);                       // +0x90..+0x98

    // ---- collision ----
    // CollisionMgr_init(this+0x288, this, &0x60AFFAC0, &0x60AFFACC, &0x60AFFAD8)
    collisionMgr.init(this, &sensorsBody, &sensorsMid, &sensorsLow);
    collisionMgr.flags |= 0x20000;                        // +0xC80

    aCollider.owner = &field_208;                         // +0x1A38 = this+0x208
    beforeExecute_extra();                                // vtable +0x2F0

    // ---- effect / geometry (all floats) ----
    effectOffset   = Vec3(0.0f, 8.0f, 0.0f);              // +0x23C
    field_1EC      = 0.0f;                                // +0x1EC
    field_1F0      = 32.0f;                               // +0x1F0
    field_1F4      = 16.0f;                               // +0x1F4
    field_1F8      = 16.0f;                               // +0x1F8
    field_1FC      = 16.0f;                               // +0x1FC
    field_200      = 28.0f;                               // +0x200
    field_26C      = &aCollider.field_E4;  aCollider.field_F4  = 3;   // +0x26C
    field_270      = &aCollider.field_108; aCollider.field_124 = 1;   // +0x270
    field_1864     = 1;                                   // +0x1864

    // ---- editor type: settings1 & 0xF ----
    u32 type = settings1 & 0xF;
    field_218 = type;                                     // +0x218
    switch (type) {
    case 0:
    default: {
        // Drop onto the floor: probe 500 units straight down.
        TileCheck probe(this);
        TileCheck::Result hit;
        if (probe.check(hit, Vec2(position.x, position.y),
                        Vec2(position.x, position.y - 500.0f), 8) == 1) {
            effectOffset.x = position.y - hit.field_8;
            snapToGround(&sensorsBody, 0, 1);              // sub_60003D80
        }
        position.z = randomZ();                            // sub_60022B80
        // The Goombrat enters the state the *Goomba* would otherwise use, and
        // the Goomba enters the shared one. Both run sub_6033A830; the
        // difference is which begin/end functions wrap it.
        enterState(isGoombrat ? &state_60C94278 : &state_60C94470);
        break;
    }
    case 1:                                                // alternate collision
        if (PlayerMgr::playerCount() <= 1) {               // sub_608FBB8C
            field_20C = 0.0f; field_210 = 0.0f; zoneId = 0;
            collisionMgr.init(this, &field_20C, nullptr, &sensorsLow);
        }
        field_1804 |= 0x10000;
        enterState(&state_60C942DC);
        break;
    case 2:                                                // no player collision
        field_22C = (settings1 >> 4) & 3;                  // +0x22C
        aCollider.addMask(8);
        aCollider.addMask(512);
        aCollider.addMask(64);
        field_1804 |= 0x10000;
        enterState(&state_60C942FC);
        break;
    case 3:                                                // ceiling goomba
        position.z = randomZ();
        enterState(&state_60C9433C);
        break;
    case 4:                                                // attached to parent
    case 5:                                                // same, other state
        // Only a StageActor parent counts, and the follow target is set to the
        // parent when it is a GoombaBase, else to this actor.
        if (parent && parent->isA<StageActor>())
            field_4C = parent->isA<GoombaBase>() ? parent : this;
        position.z = randomZ() + (f32)(random(0, 10) - 5) * 16.0f;
        aCollider.field_DC = (settings1 & 0x1000) != 0;
        enterState(type == 4 ? &state_60C9435C : &state_60C9437C);
        break;
    case 6:
        position.z = randomZ();
        enterState(&state_60C9439C);
        break;
    case 7:                                                // far behind
        position.z = 2300.0f;
        enterState(&state_60C943BC);
        break;
    case 8:                                                // as 1, other state
        if (PlayerMgr::playerCount() <= 1) {
            field_20C = 0.0f; field_210 = 0.0f; zoneId = 0;
            collisionMgr.init(this, &field_20C, nullptr, &sensorsLow);
        }
        field_1804 |= 0x10000;
        enterState(&state_60C943DC);
        break;
    }

    // Type 2 (no-player-collision) with a vertical offset in settings1 bits
    // 24-27, in 16-unit steps.
    if (field_218 == 2)
        aCollider.field_C8 = (f32)((settings1 >> 24) & 0xF) * 16.0f;

    updateModel();                                         // sub_6033D008
    field_17A8 = 1;                                        // +0x17A8

    // Two separate counters: 0xB0 for Goombrats, 0xAC for Goombas, in the
    // object at EnemyCounterMaybe_instance (0x60C9CF0C + 0xAC/0xB0).
    if (isGoombrat)
        ++EnemyCounter::goombrats;
    else
        ++EnemyCounter::goombas;
    return 0;
}

// 0x6033CF5C (sub_6033CF5C): model manager for the loaded archive.
//
//   Model2D = Resource_getModel2(res, archive, 2, 1, 0, 0, 0, 0, 0);
//   mgr     = operator new(0x48);
//   ModelWrapper_ctor(mgr, Model2D, 2, 1, 0, 0, 0);
//   ModelWrapper_setupModel(mgr, res, 0, 0);
//   if (!isGoombrat) SkeletalAnim_play(mgr, res, "walk");
//
// The flag is why a Goombrat does not get the default animation here: its
// onCreate has already selected walk1 through setWalkState.

// ---------------------------------------------------------------------------
// Update and draw
// ---------------------------------------------------------------------------

// 0x6033D008 (sub_6033D008): build the model matrix, drive the animation.
//
// From the decompilation:
//   Mtx34_rotateY(mtx, &rotation)      // +0x9C yaw
//   translate by +0x240 scaled into the matrix rows
//   Mtx34_rotateX(mtx, ...)            // +0xA4 pitch
//   Mtx34_rotateZ(mtx, ...)            // +0xA8 roll
//   model->setMatrix(&mtx)             // vtable +60
//   if (currentStateId == Frozen)      model->setMatrix(this + 0x90)   // +68
//   else { updateAnims(); model->setMatrix(this + 0x1A88); }
//   if (byte +0x1A32 == 1)  sub_6040EB64(this + 0x18A8);   // effect
//   else if (!byte +0x1A32) sub_604218E0(modelMgr);
//   model->drawFirst();                // vtable +52
//   ... then a second pass for the shadow/afterimage at +0x1A92.

// 0x60339C98 (Goomba::vf274, vtable +0x274)
void Goomba::update()
{
    beforeExecute_extra();                                 // vtable +0x2F0
    updateModel();                                         // sub_6033D008
    oneShot = 0;                                           // +0x1AB8
}

// 0x60339CD4 (Goomba::vf278, vtable +0x278)
void Goomba::draw()
{
    DrawMgr::drawModel2(DrawMgr_instance, modelMgr);
}

// 0x60339CF0 (Goomba::onDelete, vtable +0x1BC)
u32 Goomba::onDelete()
{
    // Decrement whichever counter onCreate incremented, clamped at zero.
    u32& counter = isGoombrat ? EnemyCounter::goombrats : EnemyCounter::goombas;
    if (counter)
        --counter;
    return 1;
}

// ---------------------------------------------------------------------------
// The Goombrat gate: mustTurnAround
// ---------------------------------------------------------------------------

// 0x6033AA2C (sub_6033AA2C). Returns **1 when the enemy must turn around**.
//
// This is the whole Goombrat mechanic and it is a plain "is there floor ahead?"
// test. Every call site inverts the result, so read it as "no floor ahead".
//
// Disassembly, in full:
//
//   if (!(field_B38 & 1)) return 0;        // no ground contact: keep walking
//
//   // probe 1: one and a half units ahead, four up, six down
//   a3   = { pos.x + 1.5, pos.y + 4.0 };
//   to   = { pos.x + 1.5, pos.y - 6.0 };
//   if (TileCheck_check(probe, &hit, &a3, &to, 8) != 0) return 1;
//
//   // probe 2: the same geometry behind, built from *position* (not from the
//   // position + effectOffset the first probe uses)
//   a3.2 = { pos.x - 1.5, pos.y + 4.0 };
//   to.2 = { pos.x - 1.5, pos.y - 6.0 };
//   return TileCheck_check(probe2, &hit2, &a3.2, &to.2, 8) == 0;
//
// Note the asymmetry: the forward probe comes back non-zero for "found floor",
// and the backward probe is inverted by EOR R6,R0,#1. In practice the pair says
// "turn when the front is a ledge, or when the back is a ledge and the front is
// not" -- which is what keeps a Goombrat on its platform at both ends.
bool Goomba::mustTurnAround()
{
    if (!(field_B38 & 1))
        return false;                                       // airborne

    TileCheck probe(this);
    TileCheck::Result hit;
    Vec2 ahead = { position.x + 1.5f, position.y + 4.0f };
    Vec2 below = { position.x + 1.5f, position.y - 6.0f };
    if (probe.check(hit, ahead, below, 8) != 0)
        return true;                                        // ledge ahead

    TileCheck probe2(this);
    TileCheck::Result hit2;
    Vec2 behind = { position.x - 1.5f, position.y + 4.0f };
    Vec2 below2 = { position.x - 1.5f, position.y - 6.0f };
    return probe2.check(hit2, behind, below2, 8) == 0;
}

// ---------------------------------------------------------------------------
// Walk: keep going, turn, or fall
// ---------------------------------------------------------------------------

// 0x6033A830 (sub_6033A830). Called by the walk states' execute (0x60337E2C,
// reached from 0x60C94278 and 0x60C94470) and by the Goombrat branch of
// setWalkState (0x60338020).
//
// Decides every frame whether to keep walking (1), turn (0), or let the state
// change to fall. `dir` is direction +0x50; dword_60AFFAE4[dir] nudges the wall
// probe so that "in front" really is in front.
u32 Goomba::walkDecision()
{
    // ---- wall in front? ----
    // sub_607160F4(TileMgr, pos.x + kDirOffset[dir], (u16)(int)-(pos.y - 2.0f),
    //              layer, 1)
    u16 tile = TileMgr::getTile(TileMgr_instance,
                                position.x + kDirOffset[dir],
                                (u16)(int)-(position.y - 2.0f),
                                (u8)field_56, 1);
    if (tile == 0x14)
        return 1;                                           // a wall: keep walking

    // ---- floor in front and behind ----
    Vec2 frontTop = { position.x + 1.5f, position.y + 4.0f };
    Vec2 frontBot = { position.x + 1.5f, position.y - 6.0f };
    Vec2 backTop  = { position.x - 1.5f, position.y + 4.0f };
    Vec2 backBot  = { position.x - 1.5f, position.y - 6.0f };

    TileCheck f(this), b(this);
    TileCheck::Result rf, rb;
    u32 front = f.check(rf, frontTop, frontBot, 8);
    u32 back  = b.check(rb, backTop,  backBot,  8);

    // The decompiler compares the raw float bits (0x2D160000 = 1.0e-12, and
    // 0x80000000 = -0.0f) rather than the float, because it lost the type. The
    // real comparison is on the *height difference* the probe reported: a
    // difference that is negative-and-huge, or not a number, means "unknown",
    // and unknown means turn.
    auto unresolved = [](u32 r, i32 depth) -> bool {
        if (r != 1)
            return false;
        if (depth < 0) {
            if (depth == (i32)0x80000000u)
                return true;
            depth = -depth;
        }
        return (u32)depth > 0x2D160000u;
    };

    if (dir == 0) {                                         // facing right
        if (front == 1) {
            if (unresolved(front, rf.field_C))
                return !mustTurnAround();
            if (back == 1 && !unresolved(back, rb.field_C))
                return 1;                                   // floor both sides
            return (front == back) ? 1 : (back & 1);
        }
        return (back & 1);
    }

    // Facing left: the mirror image.
    if (back == 1) {
        if (unresolved(back, rb.field_C))
            return !mustTurnAround();
        if (front == 1 && !unresolved(front, rf.field_C))
            return 1;
        return (front == back) ? 1 : (front & 1);
    }
    return 1;
}

// ---------------------------------------------------------------------------
// Animation selection: setWalkState
// ---------------------------------------------------------------------------

// 0x6033A26C (sub_6033A26C). Argument 0 = walk0, 1 = walk1, 2 = walk1 alert.
//
// Layout of the call: the decompiler merges two arguments into one __int64, so
// `a1` is `this` (low half) and the state is the high half.
//
//   if (oneShot) {                            // +0x1AB8
//       animFlags = modelAnim->flags;         // [mgr+12] -> +0x1C
//       if (animFlags & 0x30) { oneShot = 0; walkAnim = 0; }
//       else return 1;
//   }
//   if (walkAnim == state) return 0;          // already playing
//
//   switch (state) {
//   case 2:                                   // the Goombrat "alert" walk
//       effect_play(this + 0x18A8, ...);      // sub_6040EB10
//       SkeletalAnim_play(model, archive, "walk1");
//       AnimationCtrl_setRepeat(modelAnim, 0);
//       modelAnim->speed = 0x40000000;        // 2.0f   (+20 = 0, +28 |= 2)
//       animRate(+0x1A1C) = 0x40000000;       // 2.0f
//       TexAnim_play(texAnim, archive, "walk1");
//       AnimationCtrl_setRepeat(texCtrl, 0);
//       break;
//   case 1:                                   // walk1
//       SkeletalAnim_play(model, archive, "walk1");
//       AnimationCtrl_setRepeat(modelAnim, 1);
//       modelAnim->speed = 1.0f;              // 0x3F800000
//       animRate(+0x1A1C) = 1.0f;
//       TexAnim_play(texAnim, archive, "walk1");
//       AnimationCtrl_setRepeat(texCtrl, 1);
//       break;
//   case 0: default:                          // walk0
//       SkeletalAnim_play(model, archive, "walk0");
//       AnimationCtrl_setRepeat(modelAnim, 1);
//       modelAnim->speed = 1.0f;
//       animRate(+0x1A1C) = 1.0f;
//       TexAnim_play(texAnim, archive, "walk0");
//       AnimationCtrl_setRepeat(texCtrl, 1);
//       break;
//   }
//   walkAnim = state;
//   return state;
//
// Goomba::onCreate calls this with 1 for a Goombrat only, so a Goombrat starts
// its alert walk immediately; a Goomba is left with the "walk" animation the
// model manager played.
void Goomba::setWalkState(u32 which);

// ---------------------------------------------------------------------------
// Constants (all verified against the registration at 0x60339D44)
// ---------------------------------------------------------------------------

// kArchives -- the variant table at 0x60C94410:
//   +0x14/+0x18  SafeString "kuribo"  (0x60AB9C69)  profile 467
//   +0x1C/+0x20  SafeString "kakibo"  (0x60AB9E80)  profile 468
//
// Both load as "Model/%s.Nin_NX_NVN.szs" (Profile_loadResources 0x60017FCC).
// Inside them the class looks up:
//   "walk"   skeletal -- played at creation by createModelMgr
//   "walk0"  skeletal -- ordinary walk
//   "walk1"  skeletal -- the Goombrat's walk
//   "walk"   texture animation, same names in the tex-anim archive
//
// kGoombratTuning -- floats the registration writes for variant 1, from
// 0x60C94444: 0.5, 5.0, -0.5, 5.0, 1.0, 2.0, -2.0, 2.0. Variant 0's are at
// 0x60C94434: 0.5, 3.0, -0.5, 3.0. setWalkState reads them as v11[9]/v11[10]
// (variant 0) and v11[13]/v11[14] (variant 1) -- i.e. a walk speed and a turn
// speed per variant, both then offset by `type * 16.0f`.
//
// kStates -- the ten states, ids from CurrentStateID, built in .bss:
//   0x60C94278  id+1  walk (Goomba variant)  begin 0x60337DC4, exec 0x60337E2C
//   0x60C94298  id+2  ...
//   0x60C942B8  id+3  (type 1)               begin 0x6033828C
//   0x60C942DC  id+4  (type 2)               begin 0x6033828C? see 0x60C942E4
//   0x60C942FC  id+5  (type 3)               begin 0x603383FC
//   0x60C9431C  id+6  (type 4/5)             begin 0x60338700
//   0x60C9433C  id+7  (type 6)               begin 0x603387DC
//   0x60C9435C  id+8  (type 7)               begin 0x6033894C
//   0x60C9437C  id+9  (type 8)               begin 0x60338B44
//   0x60C9439C  id+10 ...
//   0x60C943BC / 0x60C943DC / 0x60C9435C ... used by the switch above
//   0x60C94470  id+1  the shared walk, begin 0x6033BA20 ("kuribo_ref_33BA20")
//
// 0x6033BA20 is the initialiser of the shared family tables: it writes every
// state's id, function pointers and the two SafeStrings "kuribo" and "walk".
