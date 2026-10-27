// hammer_costume.cpp -- the Hammer Suit's helmet and shell, drawn on the player.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Adapted for NSMBU Deluxe (Switch) v1.0.0 from Tsuru's CustomPowerupModel
// (src/custompowerupmodel.cpp, https://github.com/Zenith-Team/Tsuru, Zenith
// Team, MPL-2.0), which draws the same models on the Wii U game.

#include "nsmbudx/models.h"

// The suit itself: the Hammer Bro helmet and shell of the Tsuru framework
// (romfs/Model/hmrpy.Nin_NX_NVN.szs, converted with tools/wiiu2dx), drawn on a
// hammer player's head and back. 0 = colours only.
#define HAMMER_SUIT_COSTUME         NSMBUDX_PICK_MODEL(NSMBUDX_CUSTOM_MODELS, 1, 0)
#define HAMMER_COSTUME_ARCHIVE      "hmrpy"
#define HAMMER_COSTUME_HELMET       "hmrpy_partsC"     // on the head model's bone "player_head"
#define HAMMER_COSTUME_SHELL        "hmrpy_partsB"     // on the body model's bone "spin"

#include "actor/stageactor.h"
#include "model.h"
#include "drawmgr.h"
#include "nsmbudx/log.h"
#include "nsmbudx/models.h"
#include "nsmbudx/name_remap.h"

#if HAMMER_SUIT_COSTUME

extern "C" u8 PlayerMgr_instance[];   // framework/player symbols/player.sym
extern "C" bool HammerSuit_isHammerPlayer(u32 playerNo, void* player);   // hammer_suit.cpp
// symbols/hammer_suit.sym
extern "C" void* HeapMgr_sInstance;
extern "C" void* HeapMgr_getCurrentHeap(void* heapMgr);

// Ported from Tsuru's CustomPowerupModel (src/custompowerupmodel.cpp, MPL-2.0,
// Zenith-Team): the helmet follows the head model's bone "player_head", the
// shell the body model's bone "spin", drawn right after the player.
//
// Deluxe: every character's model draws through PlayerModel::draw (0x6078E574),
// which draws the body wrapper (model+0x018, 0x6079421C) and then the head
// wrapper (model+0x124). A Model finds a bone by name through vtable +0x54 and
// returns its world matrix through +0x6C (the world map reads its point bones
// the same way, 0x60227F68). Deluxe's head model keeps Tsuru's names
// (MarioMdl MH_model: bone player_head, materials mat_player_hat/_hair; MB_model:
// bone spin). Unlike Tsuru, the cap is not hidden: the helmet covers it.
//
// WHEN the models are made matters (ledger F0251). Model creation allocates
// with operator new(size, heap = 0) (0x608DE25C), which takes the thread's
// current sead heap. During drawing there is none usable: the first build made
// them lazily in the draw hook, the allocation returned null and the Model
// constructor stored through it (ModelBase_ctor 0x6042FFF0, from 0x60431E20;
// Ryujinx 2026-10-26 19:35, right after "collected by player 0"). Tsuru makes
// them with the player's resources; here they are made right after the
// PlayerModel constructor (0x6078C444), while the player is being built and
// its heap is current, for every model with forcedMode -1 (players; +0x1DC is
// the constructor's 4th argument). They live and die with that model's heap.
namespace {

struct Costume
{
    void* playerModel;
    ModelWrapper* helmet;
    ModelWrapper* shell;
};
constexpr u32 cMaxCostumes = 8;     // live player models: 4 in a level, the map's, spares
Costume sCostumes[cMaxCostumes];
u32 sNextCostume;
bool sCostumeLogged;

inline void* playerAt(u32 n)
{
    u8* mgr = *(u8**)PlayerMgr_instance;
    return mgr ? *(void**)(mgr + 0x30 + 4 * (n & 3)) : nullptr;
}

inline void* modelOf(void* player)          // nsmbudx/suits: *(*(player + 0x288) + 4)
{
    void* mgr = player ? *(void**)((u8*)player + 0x288) : nullptr;
    return mgr ? *(void**)((u8*)mgr + 4) : nullptr;
}

typedef s32 (*SearchBoneFn)(Model* model, const sead::SafeString* name);
typedef void (*BoneMtxFn)(Model* model, s32 index, Mtx34* out);

bool boneMatrix(ModelWrapper* wrapper, const char* bone, Mtx34* out)
{
    if (!wrapper || !wrapper->model)
        return false;
    Model* model = wrapper->model;
    void** vt = *(void***)model;
    sead::SafeString name(bone);
    s32 index = ((SearchBoneFn)vt[0x54 / 4])(model, &name);
    if (index < 0)
        return false;
    ((BoneMtxFn)vt[0x6C / 4])(model, index, out);
    return true;
}

void drawPart(ModelWrapper* part, ModelWrapper* on, const char* bone)
{
    Mtx34 mtx;
    if (!part || !boneMatrix(on, bone, &mtx))
        return;
    part->setMtx(mtx);
    part->updateModel();
    DrawMgr::instance->drawModel(part);
}

Costume* findCostume(void* playerModel)
{
    for (u32 i = 0; i < cMaxCostumes; i++)
        if (sCostumes[i].playerModel == playerModel)
            return &sCostumes[i];
    return nullptr;
}

void makeCostume(void* playerModel)
{
    // A model rebuilt at a freed model's address replaces that entry.
    Costume* c = findCostume(playerModel);
    if (!c) {
        c = &sCostumes[sNextCostume];
        sNextCostume = (sNextCostume + 1) % cMaxCostumes;
    }
    c->playerModel = playerModel;
    c->helmet = c->shell = nullptr;

    const char* why = nullptr;
    if (!nsmbudx::isArchiveLoaded(HAMMER_COSTUME_ARCHIVE))
        why = "archive '" HAMMER_COSTUME_ARCHIVE "' is not loaded";
    else if (!HeapMgr_sInstance || !HeapMgr_getCurrentHeap(HeapMgr_sInstance))
        why = "no current heap";
    if (why) {
        if (!sCostumeLogged) {
            sCostumeLogged = true;
            nsmbudx::log("hammer suit: no helmet and shell (", why, ")");
        }
        return;
    }
    c->helmet = ModelWrapper::create(HAMMER_COSTUME_ARCHIVE, HAMMER_COSTUME_HELMET);
    c->shell  = ModelWrapper::create(HAMMER_COSTUME_ARCHIVE, HAMMER_COSTUME_SHELL);
}

// The costume of a player model, if its player has the hammer suit now.
Costume* costumeFor(void* playerModel)
{
    for (u32 n = 0; n < 4; n++) {
        void* player = playerAt(n);
        if (player && modelOf(player) == playerModel)
            return HammerSuit_isHammerPlayer(n, player) ? findCostume(playerModel) : nullptr;
    }
    return nullptr;
}

} // namespace

// PlayerModel::PlayerModel (0x6078C444): six arguments, the 4th the forced mode.
extern "C" void* HammerSuit_playerModelCtor_orig(void* model, void* a1, s32 a2, s32 forcedMode, s32 a4, s32 a5);
extern "C" void* HammerSuit_playerModelCtor(void* model, void* a1, s32 a2, s32 forcedMode, s32 a4, s32 a5)
{
    void* r = HammerSuit_playerModelCtor_orig(model, a1, a2, forcedMode, a4, a5);
    if (forcedMode == -1)
        makeCostume(model);
    return r;
}

extern "C" void HammerSuit_drawPlayerModel_orig(void* playerModel);
extern "C" void HammerSuit_drawPlayerModel(void* playerModel)
{
    HammerSuit_drawPlayerModel_orig(playerModel);
    Costume* c = costumeFor(playerModel);
    if (!c)
        return;
    // The model factory 0x60794BDC picks the class by type (+0x0A4): 0-1
    // MarioModel (0x6075A088), 2-4 KinopioModel (0x607578C8), 5, 6 and 8 three
    // other classes whose layouts are not mapped. Body +0x018 holds in the
    // first two; the head +0x124 is Mario's or Luigi's head, but a Toad's is
    // its mushroom cap, which keeps its normal look: no helmet on Toads.
    u32 type = *(u32*)((u8*)playerModel + 0x0A4);
    if (type > 4)
        return;
    ModelWrapper* body = *(ModelWrapper**)((u8*)playerModel + 0x018);
    if (type <= 1) {
        ModelWrapper* head = *(ModelWrapper**)((u8*)playerModel + 0x124);
        drawPart(c->helmet, head, "player_head");
    }
    drawPart(c->shell, body, "spin");
}
#else

// Costume off: the hooks (hooks/hammer_suit.hks) only pass through.
extern "C" void* HammerSuit_playerModelCtor_orig(void* model, void* a1, s32 a2, s32 forcedMode, s32 a4, s32 a5);
extern "C" void* HammerSuit_playerModelCtor(void* model, void* a1, s32 a2, s32 forcedMode, s32 a4, s32 a5)
{
    return HammerSuit_playerModelCtor_orig(model, a1, a2, forcedMode, a4, a5);
}

extern "C" void HammerSuit_drawPlayerModel_orig(void* playerModel);
extern "C" void HammerSuit_drawPlayerModel(void* playerModel)
{
    HammerSuit_drawPlayerModel_orig(playerModel);
}
#endif
