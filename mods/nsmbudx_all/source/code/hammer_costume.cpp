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
#include "nsmbudx/player_models.h"

#if HAMMER_SUIT_COSTUME

extern "C" bool HammerSuit_isHammerModel(void* model);   // hammer_suit.cpp
// symbols/hammer_suit.sym
extern "C" void* HeapMgr_sInstance;
extern "C" void* HeapMgr_getCurrentHeap(void* heapMgr);

// Ported from Tsuru's CustomPowerupModel (src/custompowerupmodel.cpp, MPL-2.0,
// Zenith-Team): the helmet follows the head model's bone "player_head", the
// shell the body model's bone "spin", drawn right after the player.
//
// Deluxe: the models are made and drawn through framework/player's model
// listeners (nsmbudx/player_models.h): every player model -- the level's and
// the world map's (profile 855) -- is built by the PlayerModel constructor
// (0x6078C444) and drawn by PlayerModel::draw (0x6078E574),
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
// its heap is current. They live and die with that model's heap. Whether a
// model wears them is decided by the model alone (HammerSuit_isHammerModel:
// its character collected a Hammer Flower and it shows Fire mode), so the
// world-map player wears them as the level's player does.
namespace {

struct Costume
{
    void* playerModel;
    ModelWrapper* helmet;
    ModelWrapper* shell;
};
// Live player models at once: up to 4 in a level, demo players, and the world
// map's player, which builds one per character (6 managers at +920, 0x601B16CC).
constexpr u32 cMaxCostumes = 24;
Costume sCostumes[cMaxCostumes];
u32 sNextCostume;
bool sCostumeLogged;

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

// After the PlayerModel constructor, on the owner's heap (see above). The
// model factory 0x60794BDC: 0-1 MarioModel, 2-4 KinopioModel, 5/6/8 other
// classes whose layouts are not mapped -- those get no costume.
void makeCostume(void* playerModel)
{
    if (nsmbudx::playerModels::character(playerModel) > 4)
        return;
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

// After PlayerModel::draw. Body +0x018 holds in MarioModel and KinopioModel;
// the head +0x124 is Mario's or Luigi's head, but a Toad's is its mushroom
// cap, which keeps its normal look: no helmet on Toads.
extern "C" bool HammerSuit_isHammerCharacter(u32 character);   // hammer_suit.cpp
void* sReported[cMaxCostumes];
u32 sNextReported;

// Once per model: a hammer character's model drawn without the suit, and why.
void reportMissing(void* playerModel, const char* why)
{
    for (void* m : sReported)
        if (m == playerModel)
            return;
    sReported[sNextReported] = playerModel;
    sNextReported = (sNextReported + 1) % cMaxCostumes;
    nsmbudx::log("hammer suit: character ", nsmbudx::playerModels::character(playerModel),
                 " (player ", nsmbudx::playerModels::playerOf(playerModel), ") drawn without the suit: ", why,
                 "; shown mode ", nsmbudx::playerModels::shownMode(playerModel));
}

void drawCostume(void* playerModel)
{
    if (!HammerSuit_isHammerModel(playerModel)) {
        if (HammerSuit_isHammerCharacter(nsmbudx::playerModels::character(playerModel)))
            reportMissing(playerModel, "not in Fire mode");
        return;
    }
    Costume* c = findCostume(playerModel);
    if (!c || !c->helmet || !c->shell) {
        reportMissing(playerModel, !c ? "no costume made for this model" : "costume models not made");
        if (!c)
            return;
    }
    u32 character = nsmbudx::playerModels::character(playerModel);
    ModelWrapper* body = *(ModelWrapper**)((u8*)playerModel + 0x018);
    if (character <= 1) {
        ModelWrapper* head = *(ModelWrapper**)((u8*)playerModel + 0x124);
        drawPart(c->helmet, head, "player_head");
    }
    drawPart(c->shell, body, "spin");
}

struct CostumeSetup
{
    CostumeSetup()
    {
        nsmbudx::playerModels::onCreated(&makeCostume);
        nsmbudx::playerModels::onDrawn(&drawCostume);
    }
} sCostumeSetup;

} // namespace

#endif
