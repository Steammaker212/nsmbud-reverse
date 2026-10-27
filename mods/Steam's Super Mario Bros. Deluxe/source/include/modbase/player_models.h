// modbase/player_models.h -- every player model, wherever it is drawn.
//
// The same PlayerModel classes draw the players in a level, on the world map
// (the course-select player, profile 855) and in demos. Only a level's players
// are in PlayerMgr; these listeners see them all (code/framework/player_models.cpp
// owns the two hooks, so mods register here instead of hooking them):
//
//   void made(void* model)  { ... build your extra models here ... }
//   void drawn(void* model) { ... draw them on the model's bones ... }
//   ModBase::playerModels::onCreated(&made);
//   ModBase::playerModels::onDrawn(&drawn);
//
// onCreated runs right after the PlayerModel constructor (0x6078C444), for
// players only (forced mode -1), while the actor that owns the model is being
// built and its heap is current: make models there, never while drawing
// (operator new has no heap then; ledger F0251). onDrawn runs after
// PlayerModel::draw (0x6078E574), which every model class calls to draw its
// body (+0x018) and head (+0x124).
//
// A model knows what it shows, so a mod can decide by the model alone:
// character() and shownMode(). playerOf() finds the level's player that owns
// it, or -1 on the world map and in demos. The world-map player builds one
// model per character (6 managers at +920, 0x601B16CC) and draws the current
// one after setPlayerMode with the saved mode (0x601B47F0), so its shown mode
// is the real one (ledger F0257).
//
// Register from a static constructor. Deluxe (Switch) v1.0.0 only.

#pragma once

#include "core/types.h"
#include "modbase/game/player/player.h"     // PlayerMgr::instance

namespace ModBase {
namespace playerModels {

constexpr u32 cMaxListeners = 4;

typedef void (*Listener)(void* model);

bool onCreated(Listener listener);
bool onDrawn(Listener listener);

// Asked before PlayerModel::draw: any gate that returns false hides the model's
// body and head this frame (onDrawn listeners still run, so a mod can draw
// something in its place -- the Blue Shell's dash shows only the shell).
typedef bool (*DrawGate)(void* model);
bool addDrawGate(DrawGate gate);

// The model factory 0x60794BDC picks the class by character: 0 Mario and
// 1 Luigi (MarioModel 0x6075A088), 2-4 the Toads (KinopioModel 0x607578C8),
// 5, 6 and 8 three more classes. Set by the constructor (+0xA4).
constexpr u32 cNumCharacters = 9;
inline u32 character(void* model) { return *(u32*)((u8*)model + 0x0A4); }

// The mode the model shows: PlayerModel::setPlayerMode (0x6078E608) replaces
// the mode it is given with forcedMode() when that is not -1, stores the result
// here and picks the body and the colours from it (2 Fire, 6 Ice, else Normal).
// So a forced body (modbase/suits.h showBodyOf) is what this returns, not the
// player's real mode: the Blue Shell (Penguin mode, Fire body) shows 2.
inline u32 shownMode(void* model) { return *(u32*)((u8*)model + 0x1D8); }

// -1 for players; another mode shows that mode's body (modbase/suits.h).
inline s32& forcedMode(void* model) { return *(s32*)((u8*)model + 0x1DC); }

// A level's player (0-3), or nullptr.
inline void* playerAt(u32 playerNo)
{
    u8* mgr = (u8*)PlayerMgr::instance;
    return mgr && playerNo < 4 ? *(void**)(mgr + 0x30 + 4 * playerNo) : nullptr;
}

// The model of a level's player (0-3): *(*(player + 0x288) + 4), or nullptr.
inline void* modelOfPlayer(u32 playerNo)
{
    void* player = playerAt(playerNo);
    void* models = player ? *(void**)((u8*)player + 0x288) : nullptr;
    return models ? *(void**)((u8*)models + 4) : nullptr;
}

// The level's player (0-3) whose model this is, or -1 (world map, demos).
inline s32 playerOf(void* model)
{
    for (u32 n = 0; n < 4; n++)
        if (model && modelOfPlayer(n) == model)
            return (s32)n;
    return -1;
}

} // namespace playerModels
} // namespace ModBase
