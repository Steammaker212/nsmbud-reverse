// player_models.cpp -- see nsmbudx/player_models.h.

#include "nsmbudx/player_models.h"

extern "C" u8 PlayerMgr_instance[];   // symbols/player.sym

namespace {

nsmbudx::playerModels::Listener sCreated[nsmbudx::playerModels::cMaxListeners];
nsmbudx::playerModels::Listener sDrawn[nsmbudx::playerModels::cMaxListeners];

bool add(nsmbudx::playerModels::Listener* list, nsmbudx::playerModels::Listener l)
{
    for (u32 i = 0; i < nsmbudx::playerModels::cMaxListeners; i++)
        if (!list[i]) {
            list[i] = l;
            return true;
        }
    return false;
}

} // namespace

namespace nsmbudx {
namespace playerModels {

bool onCreated(Listener listener) { return add(sCreated, listener); }
bool onDrawn(Listener listener)   { return add(sDrawn, listener); }

void* modelOfPlayer(u32 playerNo)
{
    u8* mgr = *(u8**)PlayerMgr_instance;
    void* player = mgr && playerNo < 4 ? *(void**)(mgr + 0x30 + 4 * playerNo) : nullptr;
    void* models = player ? *(void**)((u8*)player + 0x288) : nullptr;   // F0015
    return models ? *(void**)((u8*)models + 4) : nullptr;
}

s32 playerOf(void* model)
{
    for (u32 i = 0; i < 4; i++)
        if (model && modelOfPlayer(i) == model)
            return i;
    return -1;
}

} // namespace playerModels
} // namespace nsmbudx

// PlayerModel::PlayerModel (0x6078C444): six arguments, the 4th the forced
// mode (-1 for players: the stage player and the world-map player alike).
extern "C" void* PlayerModels_ctor_orig(void* model, void* a1, s32 character, s32 forcedMode, s32 a4, s32 a5);
extern "C" void* PlayerModels_ctor(void* model, void* a1, s32 character, s32 forcedMode, s32 a4, s32 a5)
{
    void* r = PlayerModels_ctor_orig(model, a1, character, forcedMode, a4, a5);
    if (forcedMode == -1)
        for (auto l : sCreated)
            if (l)
                l(model);
    return r;
}

// PlayerModel::draw (0x6078E574): body, then head.
extern "C" void PlayerModels_draw_orig(void* model);
extern "C" void PlayerModels_draw(void* model)
{
    PlayerModels_draw_orig(model);
    for (auto l : sDrawn)
        if (l)
            l(model);
}
