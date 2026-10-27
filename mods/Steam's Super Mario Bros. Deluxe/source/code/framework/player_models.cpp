// player_models.cpp -- see modbase/player_models.h.

#include "modbase/player_models.h"

namespace {

ModBase::playerModels::Listener sCreated[ModBase::playerModels::cMaxListeners];
ModBase::playerModels::Listener sDrawn[ModBase::playerModels::cMaxListeners];
ModBase::playerModels::DrawGate sGates[ModBase::playerModels::cMaxListeners];

template <typename T>
bool add(T* list, T l)
{
    for (u32 i = 0; i < ModBase::playerModels::cMaxListeners; i++)
        if (!list[i]) {
            list[i] = l;
            return true;
        }
    return false;
}

} // namespace

namespace ModBase {
namespace playerModels {

bool onCreated(Listener listener) { return add(sCreated, listener); }
bool onDrawn(Listener listener)   { return add(sDrawn, listener); }
bool addDrawGate(DrawGate gate)   { return add(sGates, gate); }

} // namespace playerModels
} // namespace ModBase

// PlayerModel::PlayerModel (0x6078C444): six arguments, the 4th the forced
// mode (-1 for players: the stage player and the world-map player alike).
namespace ModBase { namespace playerModels { void* ctor_orig(void* model, void* a1, s32 character, s32 forcedMode, s32 a4, s32 a5); } }
namespace ModBase { namespace playerModels { void* ctor(void* model, void* a1, s32 character, s32 forcedMode, s32 a4, s32 a5); } }
void* ModBase::playerModels::ctor(void* model, void* a1, s32 character, s32 forcedMode, s32 a4, s32 a5)
{
    void* r = ModBase::playerModels::ctor_orig(model, a1, character, forcedMode, a4, a5);
    if (forcedMode == -1)
        for (Listener l : sCreated)
            if (l)
                l(model);
    return r;
}

// PlayerModel::draw (0x6078E574): body, then head.
namespace ModBase { namespace playerModels { void draw_orig(void* model); } }
namespace ModBase { namespace playerModels { void draw(void* model); } }
void ModBase::playerModels::draw(void* model)
{
    bool shown = true;
    for (DrawGate g : sGates)
        if (g && !g(model))
            shown = false;
    if (shown)
        ModBase::playerModels::draw_orig(model);
    for (Listener l : sDrawn)
        if (l)
            l(model);
}
