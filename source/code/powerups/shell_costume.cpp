// shell_costume.cpp -- the Blue Shell's shell, drawn on the player.
//
// The Blue Shell's shell, worn as two parts (its body and its belly, placed
// apart: modbase/costume.h), no helmet. While the player is inside the shell -- dashing,
// crouching or ground pounding (code/powerups/shell_suit.cpp) -- the player is
// hidden and only the shell is drawn, at the player's feet; dashing, it spins
// (SHELL_SPIN / SHELL_SPIN_AXIS).

#include "modbase/models.h"

// 0 = the shell suit's look and colours only, nothing drawn on top.
#define SHELL_SUIT_COSTUME          MODBASE_PICK_MODEL(MODBASE_CUSTOM_MODELS, 1, 0)

// The shell's two parts, in romfs/Model/blue_shell.Nin_NX_NVN.szs (which loads
// at game start with the Blue Shell item, shell_suit.cpp). Where each sits:
// modbase/costume.h, cShellBodyOffset* / cShellBellyOffset*.
#define SHELL_COSTUME_ARCHIVE       "blue_shell"
#define SHELL_COSTUME_BODY          "shell_body"    // the dome and its white rim
#define SHELL_COSTUME_BELLY         "shell_belly"   // the belly plate

// The shell alone (inside it), standing on its opening at the player's feet.
#define SHELL_INSIDE_SCALE          1.0f

#include "actors/stageactor.h"
#include "graphics/model.h"
#include "modbase/costume.h"
#include "modbase/log.h"
#include "modbase/name_remap.h"
#include "modbase/player_models.h"
#include "modbase/game/nintendo/sead.h"   // sead::HeapMgr::sInstance, getCurrentHeap

#if SHELL_SUIT_COSTUME

namespace ModBase { namespace shellSuit { bool isShellModel(void* model); } }                     // shell_suit.cpp
namespace ModBase { namespace shellSuit { void* playerInShell(void* model, Vec3i* rotation); } }  // shell_suit.cpp

// Made and drawn through code/framework/player_models.cpp's model listeners, as the Hammer
// Suit's costume (modbase/player_models.h): made right after the PlayerModel
// constructor, on the owner's heap (ledger F0251), and drawn after
// PlayerModel::draw on the body's (+0x018) bone "spin". Worn by any model of a
// shell character that wears the shell look's body, the world map's included.
namespace {

struct Costume
{
    void* playerModel;
    ModelWrapper* shellBody;    // the dome and rim
    ModelWrapper* shellBelly;   // the belly plate
};
// Live player models at once: up to 4 in a level, demo players, and the world
// map's player, which builds one per character (6 managers at +920, 0x601B16CC).
constexpr u32 cMaxCostumes = 24;
Costume sCostumes[cMaxCostumes];
u32 sNextCostume;
bool sCostumeLogged;

// Upright at the player's feet (the shell's origin is its opening), turned as
// shell_suit.cpp says: both parts together, as the whole shell.
void drawInside(Costume* c, StageActor* player, const Vec3i& rotation)
{
    Mtx34 mtx;
    mtx.rotateAndTranslate(rotation, player->position);
    if (c->shellBody)
        ModBase::costume::place(c->shellBody, mtx, SHELL_INSIDE_SCALE);
    if (c->shellBelly)
        ModBase::costume::place(c->shellBelly, mtx, SHELL_INSIDE_SCALE);
}

Costume* findCostume(void* playerModel)
{
    for (u32 i = 0; i < cMaxCostumes; i++)
        if (sCostumes[i].playerModel == playerModel)
            return &sCostumes[i];
    return nullptr;
}

// After the PlayerModel constructor, on the owner's heap. The model factory
// 0x60794BDC: 0-1 MarioModel, 2-4 KinopioModel, 5/6/8 other classes whose
// layouts are not mapped -- those get no costume.
void makeCostume(void* playerModel)
{
    if (ModBase::playerModels::character(playerModel) > 4)
        return;
    // A model rebuilt at a freed model's address replaces that entry.
    Costume* c = findCostume(playerModel);
    if (!c) {
        c = &sCostumes[sNextCostume];
        sNextCostume = (sNextCostume + 1) % cMaxCostumes;
    }
    c->playerModel = playerModel;
    c->shellBody = c->shellBelly = nullptr;

    const char* why = nullptr;
    if (!ModBase::isArchiveLoaded(SHELL_COSTUME_ARCHIVE))
        why = "archive '" SHELL_COSTUME_ARCHIVE "' is not loaded";
    else if (!sead::HeapMgr::sInstance || !sead::HeapMgr::sInstance->getCurrentHeap())
        why = "no current heap";
    if (why) {
        if (!sCostumeLogged) {
            sCostumeLogged = true;
            ModBase::log("blue shell: no shell on the player (", why, ")");
        }
        return;
    }
    c->shellBody  = ModelWrapper::create(SHELL_COSTUME_ARCHIVE, SHELL_COSTUME_BODY);
    c->shellBelly = ModelWrapper::create(SHELL_COSTUME_ARCHIVE, SHELL_COSTUME_BELLY);
}

// The costume of a player model, if it shows a shell player now.
Costume* costumeFor(void* playerModel)
{
    if (!ModBase::shellSuit::isShellModel(playerModel))
        return nullptr;
    Costume* c = findCostume(playerModel);
    return c && (c->shellBody || c->shellBelly) ? c : nullptr;
}

// Before PlayerModel::draw: a player inside the shell is hidden, if there is a
// shell to draw in its place.
bool showPlayer(void* playerModel)
{
    Vec3i rotation;
    return !(costumeFor(playerModel) && ModBase::shellSuit::playerInShell(playerModel, &rotation));
}

// After PlayerModel::draw (the onDrawn listener). Body +0x018 holds in
// MarioModel and KinopioModel.
void drawCostume(void* playerModel)
{
    Costume* c = costumeFor(playerModel);
    if (!c)
        return;
    Vec3i rotation;
    if (StageActor* player = (StageActor*)ModBase::shellSuit::playerInShell(playerModel, &rotation)) {
        drawInside(c, player, rotation);
        return;
    }
    ModBase::costume::drawShell(c->shellBody, c->shellBelly, *(ModelWrapper**)((u8*)playerModel + 0x018));
}

struct CostumeSetup
{
    CostumeSetup()
    {
        ModBase::playerModels::onCreated(&makeCostume);
        ModBase::playerModels::addDrawGate(&showPlayer);
        ModBase::playerModels::onDrawn(&drawCostume);
    }
} sCostumeSetup;

} // namespace

#endif
