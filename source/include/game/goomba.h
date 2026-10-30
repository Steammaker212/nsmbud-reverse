// game/goomba.h -- the Goomba family (profiles 467-473, 892-893) and what makes
// a Goombrat (Kakibo, profile 468) behave differently from a Goomba (467).
//
// The two are one class. Everything that differs comes from one comparison in
// Goomba::onCreate (0x603393F0):
//
//     isGoombrat = Actor::getProfileId(this) == 468;
//
// and the game derives from that flag: the archive ("kakibo" / "kuribo"), the
// starting walk state, the walk animation set, the tuning numbers and which of
// two enemy counters is used. Nothing is overridden per class, and no settings
// nybble is involved.
//
// For a new sprite this means: build with profile id 468 and you get Goombrat
// mechanics -- it turns at ledges and walks off neither. Build with 467 and you
// get a Goomba, which walks off any ledge. Either way you supply your own
// archive through the variant's resource list (code/framework/actor_variant.cpp).
//
// Evidence: reverse-engineering/FindingsB/ledger.csv F0091-F0102. Deluxe (Switch) v1.0.0 only.

#pragma once

#include "core/types.h"
#include "actors/actor.h"

namespace GoombaProfile {
constexpr u32 Goomba   = 467;   // 0x1D3
constexpr u32 Goombrat = 468;   // 0x1D4
constexpr u32 ParaGoomba = 469;
constexpr u32 PricklyGoomba = 470;
constexpr u32 MiniGoomba = 471;
constexpr u32 MiddleGoomba = 472;
constexpr u32 LargeGoomba = 473;
} // namespace GoombaProfile

// Offsets into a Goomba/Goombrat actor, from GoombaBase::GoombaBase
// (0x6033BD20) and Goomba's own tail (0x60337D2C). The class is 0x1AE8 bytes.
struct GoombaFields
{
    // ---- GoombaBase (0x6033BD20) ----
    static constexpr u32 modelMgr     = 0x189C;   // +0x189C, model manager
    static constexpr u32 model        = 0x18A0;   // +0x18A0, model
    static constexpr u32 texAnim      = 0x18A4;   // +0x18A4, texture animation
    static constexpr u32 effect       = 0x18A8;   // +0x18A8, EffectWrapper (sub_6040E90C)
    static constexpr u32 damageColl   = 0x18EC;   // +0x18EC, the second ActiveCollider
    static constexpr u32 animRate     = 0x1A1C;   // +0x1A1C, float rate for the walk anim
    static constexpr u32 scaler       = 0x1A74;   // +0x1A74, ActorScaler

    // ---- Goomba (0x60337D2C) ----
    // Written by onCreate (0x603393F0): `STRBEQ R1,[R10]` with R10 = this+0x1A31,
    // then `STRB R1,[R7,R0]` with R0 = 0x1A32. Both hold 1 for a Goombrat.
    static constexpr u32 isGoombrat   = 0x1A31;   // u8: profile id was 468
    static constexpr u32 variantFlag  = 0x1A32;   // u8: the same value

    // Written by setWalkState (0x6033A26C):
    //   0x6033A278  movw r0,#0x1ab8 ; ldrb [r6,r0]!   -> the "one shot" byte
    //   0x6033A2BC  movw r2,#0x1ab5 ; strb [r6] / [r4,r2]  -> both cleared
    //   0x6033A2D8  movw r2,#0x1ab5 ; ldrb [r5,r2]!   -> the animation selector
    static constexpr u32 oneShot      = 0x1AB8;   // u8: cleared every update
    static constexpr u32 walkAnim     = 0x1AB5;   // u8: 0 walk0, 1 walk1, 2 alert
};

// ---- functions -------------------------------------------------------------

// 0x60337D2C. The build function both profiles use.
using BuildFn = Actor* (*)(const ActorBuildInfo*);

// 0x6033AA2C. True when there is no floor ahead: the Goombrat turn. The Goomba
// never calls it -- its walk state uses the shared 0x6033A830 decision instead,
// which falls back to `!mustTurnAround()` only at a ledge with no floor behind.
// Signature from the disassembly: a single `this` in r0, result in r0.
using MustTurnAroundFn = bool (*)(void* self);

// 0x6033A26C. 0 = walk0, 1 = walk1, 2 = walk1 with the "alert" effect.
using SetWalkStateFn = u32 (*)(void* self, u32 which);

// The archive name a variant uses, by the flag at +0x1A31.
constexpr const char* kArchiveGoomba   = "kuribo";
constexpr const char* kArchiveGoombrat = "kakibo";

// Animation names the class looks up inside that archive.
constexpr const char* kAnimIdle  = "walk";    // played at creation
constexpr const char* kAnimWalk0 = "walk0";   // ordinary walk
constexpr const char* kAnimWalk1 = "walk1";   // Goombrat walk / alert

// ---- layout checks --------------------------------------------------------
// The game's own class sizes, from operator new in Goomba::build (0x60337D2C)
// and the size of the Enemy base (0x189C).

static_assert(GoombaFields::modelMgr < GoombaFields::isGoombrat, "base before Goomba");
static_assert(GoombaFields::model + 4 == GoombaFields::texAnim, "model, texAnim");
static_assert(GoombaFields::isGoombrat < GoombaFields::oneShot, "flag before one-shot");
static_assert(GoombaFields::oneShot != GoombaFields::walkAnim, "distinct bytes");
