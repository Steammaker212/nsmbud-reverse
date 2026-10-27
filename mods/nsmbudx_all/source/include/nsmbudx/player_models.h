// nsmbudx/player_models.h -- every player model, wherever it is drawn.
//
// The same PlayerModel classes draw the players in a level, on the world map
// (the course-select player, profile 855) and in demos. A mod that only looks
// at PlayerMgr's players sees the first; these listeners see them all:
//
//   void made(void* model)  { ... build your extra models here ... }
//   void drawn(void* model) { ... draw them on the model's bones ... }
//   nsmbudx::playerModels::onCreated(&made);
//   nsmbudx::playerModels::onDrawn(&drawn);
//
// onCreated runs right after the PlayerModel constructor (0x6078C444), while
// the actor that owns the model is being built and its heap is current: make
// models there, never while drawing (operator new has no heap then; ledger
// F0251). onDrawn runs after PlayerModel::draw (0x6078E574), which every model
// class calls to draw its body (+0x018) and head (+0x124).
//
// A model knows what it shows, so a mod can decide by the model alone:
// character() and shownMode(). playerOf() finds the level's player that owns
// it, or -1 on the world map and in demos.
//
// Register from a static constructor. Deluxe (Switch) v1.0.0 only.

#pragma once

#include "types.h"

namespace nsmbudx {
namespace playerModels {

constexpr u32 cMaxListeners = 4;

typedef void (*Listener)(void* model);

bool onCreated(Listener listener);
bool onDrawn(Listener listener);

// The model factory 0x60794BDC picks the class by character: 0 Mario and
// 1 Luigi (MarioModel 0x6075A088), 2-4 the Toads (KinopioModel 0x607578C8),
// 5, 6 and 8 three more classes. Set by the constructor (+0xA4).
inline u32 character(void* model) { return *(u32*)((u8*)model + 0x0A4); }

// The mode the model shows, after a forced mode: PlayerModel::setPlayerMode
// (0x6078E608) stores it here and picks the colours from it (2 Fire, 6 Ice,
// else Normal).
inline u32 shownMode(void* model) { return *(u32*)((u8*)model + 0x1D8); }

// -1 for players; another mode shows that mode's body (nsmbudx/suits.h).
inline s32& forcedMode(void* model) { return *(s32*)((u8*)model + 0x1DC); }

// The level's player (0-3) whose model this is, or -1.
s32 playerOf(void* model);

// That player's model (nullptr if none).
void* modelOfPlayer(u32 playerNo);

} // namespace playerModels
} // namespace nsmbudx
