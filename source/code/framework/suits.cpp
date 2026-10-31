// suits.cpp -- see modbase/suits.h.
//
// Four player-model classes have their own colour routine, all virtual slot
// 44 (vtable +0xB0) and none a defined function in the database (ledger
// F0050, F0061-F0063):
//
//   MarioModel     vtable 0x60C23FAC  0x6075A6E4  head +0x124, body +0x018, bonus cap +0x224
//   KinopioModel   vtable 0x60C23E94  0x60757B58  head +0x124, body +0x018
//   KinopicoModel  vtable 0x60C23D34  0x6075227C  head +0x124, body +0x018 (Toadette, character 6)
//   vtable 0x60C240DC (the Mii's, character 8)    0x6075D3AC  body +0x018, head +0x498; +0x224 = colour variant
//
// Shared by all three:
//
//   model+0x010  model resource          model+0x0A4  type (0 Mario, 1 Luigi, 2-4 Toads)
//   model+0x12C  body id (0 Normal, 1 Small, 2 Propeller, 3 Penguin, 4 Squirrel)
//   model+0x1D8  player mode             model+0x1E0  current colour type
//   wrapper+0x14 -> texture animations; [0] is the colour switch animation
//   anim+0x14 frame (f32), anim+0x18 rate, anim+0x1C flags (|= 2 after a change)
//
// The layouts differ past that: MarioModel's +0x224 is the bonus cap wrapper,
// the third class's is an integer. Calling MarioModel's routine on another
// class reads a pointer that is not one (the Toad crash, F0061), so every call
// here goes through the model's own vtable.
//
// Player -> model: *(*(player + 0x288) + 4), the model manager createFireBall
// asks for the wrist joint (F0015).
//
// World map (F0257): the map's player (profile 855) builds and draws its model
// through the same classes, but belongs to no level player. Overrides and
// bodies therefore also record the player's character, and a model no level
// player owns takes the override of the player whose character it shows; a new
// model of a character whose player shows another body gets that body.

#include "modbase/suits.h"
#include "modbase/log.h"
#include "modbase/player_models.h"
#include "modbase/game/player/player.h"   // PlayerMgr::instance, PlayerModel::setPlayerMode

namespace {

constexpr u32 cSetColorTypeSlot = 0xB0 / 4;

typedef void (*SetColorTypeFn)(void* model, u32 colorType, bool keepHeadKonst3);

struct Override
{
    bool active;
    u32 when;
    const f32* frames;  // per character, < 0: none; null: none at all
    u32 showAs;         // cColor_Invalid: none (every class)
    const void* owner;
    s32 character;  // the player's character when it was set; -1 unknown
};

Override sOverrides[4];

// A body shown instead of the real mode's (showBodyOf), kept per player with
// its character so models built elsewhere -- the world map's -- show it too.
struct Body
{
    bool active;
    u32 mode;
    s32 character;
};

Body sBodies[4];

inline void* playerAt(u32 n)
{
    u8* mgr = (u8*)PlayerMgr::instance;
    return mgr ? *(void**)(mgr + 0x30 + 4 * (n & 3)) : nullptr;     // grant helper F0020
}

inline void* modelOf(void* player)
{
    void* mgr = player ? *(void**)((u8*)player + 0x288) : nullptr;
    return mgr ? *(void**)((u8*)mgr + 4) : nullptr;
}

inline u32& colorTypeOf(void* model)
{
    return *(u32*)((u8*)model + 0x1E0);
}

// What the mode change (0x607A293C) hands PlayerModel::setPlayerMode: the model
// cached at player+0x2C68 and the display mode at player+0x2EBC.
inline void* modeModelOf(void* player)
{
    return player ? *(void**)((u8*)player + 0x2C68) : nullptr;
}

inline u32 displayMode(void* player)
{
    return *(u32*)((u8*)player + 0x2EBC);
}

inline s32& forcedMode(void* model)
{
    return *(s32*)((u8*)model + 0x1DC);
}

constexpr u32 cNumModes = 10;           // modes 0-9, F0053

// The mode to hand PlayerModel::setPlayerMode. +0x2EBC is only written by the
// power-up change (0x607A293C); before the first change of a level it holds -1,
// and setPlayerMode indexes its body table (0x60B0C230) with it unchecked: a
// garbage body id the model's getter (0x6075B180) then read past the end of
// memory with (bug F013). Outside a change, the player's real mode (+0x528).
u32 modeToShow(void* player)
{
    u32 d = displayMode(player);
    if (d < cNumModes)
        return d;
    u32 m = *(u32*)((u8*)player + 0x528);
    return m < cNumModes ? m : 0;
}

// What each player's suit needs (requireMode).
struct Requirement
{
    bool active;
    u32 mode;
    s32 character;
    ModBase::suits::SuitLostFn onLost;
    const void* owner;
};

Requirement sRequired[4];

s32 playerOfModel(void* model)
{
    for (u32 i = 0; i < 4; i++)
        if (void* p = playerAt(i))
            if (modelOf(p) == model)
                return i;
    return -1;
}

// The level's player that owns the model; otherwise (the world map, demos)
// the player whose character the model shows.
const Override* overrideFor(void* model, u32 colorType)
{
    s32 n = playerOfModel(model);
    if (n < 0) {
        s32 c = (s32)ModBase::playerModels::character(model);
        for (u32 i = 0; i < 4 && n < 0; i++)
            if (sOverrides[i].active && sOverrides[i].character == c)
                n = i;
    }
    if (n < 0 || !sOverrides[n].active || sOverrides[n].when != colorType)
        return nullptr;
    return &sOverrides[n];
}

s32 characterOfPlayer(u32 n)
{
    void* model = modelOf(playerAt(n));
    return model ? (s32)ModBase::playerModels::character(model) : -1;
}

// A model built for a character whose player shows another body (the world
// map's player after a level, or the next level's): the same body.
void applyBodyOnCreate(void* model)
{
    s32 c = (s32)ModBase::playerModels::character(model);
    for (const Body& b : sBodies)
        if (b.active && b.character == c)
            forcedMode(model) = (s32)b.mode;
}

struct SuitsSetup
{
    SuitsSetup() { ModBase::playerModels::onCreated(&applyBodyOnCreate); }
} sSuitsSetup;

void setFrame(void* wrapper, f32 frame)
{
    if (!wrapper)
        return;
    void** anims = *(void***)((u8*)wrapper + 0x14);
    u8* anim = anims ? (u8*)anims[0] : nullptr;
    if (!anim)
        return;
    *(f32*)(anim + 0x14) = frame;
    *(u32*)(anim + 0x1C) |= 2;
}

// The override's frame for this model, < 0 if it has none.
f32 frameFor(const Override* o, void* model)
{
    u32 c = ModBase::playerModels::character(model);
    return o && o->frames && c < ModBase::playerModels::cNumCharacters ? o->frames[c] : -1.0f;
}

// Only Normal and Small carry the switch frames.
void applyFrame(void* model, f32 frame)
{
    if (*(u32*)((u8*)model + 0x12C) > 1)
        return;
    setFrame(*(void**)((u8*)model + 0x018), frame);     // body
    setFrame(*(void**)((u8*)model + 0x124), frame);     // head
}

// Runs one class's routine. showAs: the routine picks that colour's frames
// for this class and character, then the model records the colour the game
// asked for, so damage and mode changes behave as without the override.
bool runShowAs(SetColorTypeFn orig, void* model, u32 colorType, bool keepHeadKonst3, const Override* o)
{
    if (!o || o->showAs == ModBase::suits::cColor_Invalid)
        return false;
    if (colorTypeOf(model) == colorType)      // the routine's own "unchanged" check
        return true;
    orig(model, o->showAs, keepHeadKonst3);
    colorTypeOf(model) = colorType;
    return true;
}

} // namespace

namespace ModBase { namespace suits { void setColorType_orig(void* model, u32 colorType, bool keepHeadKonst3); } }
namespace ModBase { namespace suits { void kinopioSetColorType_orig(void* model, u32 colorType, bool keepHeadKonst3); } }
namespace ModBase { namespace suits { void model3SetColorType_orig(void* model, u32 colorType, bool keepHeadKonst3); } }

// MarioModel (Mario, Luigi): a frame override first, else showAs.
namespace ModBase { namespace suits { void setColorType(void* model, u32 colorType, bool keepHeadKonst3); } }
void ModBase::suits::setColorType(void* model, u32 colorType, bool keepHeadKonst3)
{
    const Override* o = overrideFor(model, colorType);
    f32 frame = frameFor(o, model);
    if (frame < 0.0f && runShowAs(&ModBase::suits::setColorType_orig, model, colorType, keepHeadKonst3, o))
        return;

    ModBase::suits::setColorType_orig(model, colorType, keepHeadKonst3);
    if (frame < 0.0f)
        return;
    applyFrame(model, frame);
    if (*(u32*)((u8*)model + 0x12C) <= 1)
        setFrame(*(void**)((u8*)model + 0x224), frame);     // bonus cap
}

// The same for a class with no bonus cap.
static void setColorTypeWith(SetColorTypeFn orig, void* model, u32 colorType, bool keepHeadKonst3)
{
    const Override* o = overrideFor(model, colorType);
    f32 frame = frameFor(o, model);
    if (frame < 0.0f && runShowAs(orig, model, colorType, keepHeadKonst3, o))
        return;

    orig(model, colorType, keepHeadKonst3);
    if (frame >= 0.0f)
        applyFrame(model, frame);
}

namespace ModBase { namespace suits { void kinopioSetColorType(void* model, u32 colorType, bool keepHeadKonst3); } }
void ModBase::suits::kinopioSetColorType(void* model, u32 colorType, bool keepHeadKonst3)
{
    setColorTypeWith(&ModBase::suits::kinopioSetColorType_orig, model, colorType, keepHeadKonst3);
}

namespace ModBase { namespace suits { void kinopicoSetColorType_orig(void* model, u32 colorType, bool keepHeadKonst3); } }
namespace ModBase { namespace suits { void kinopicoSetColorType(void* model, u32 colorType, bool keepHeadKonst3); } }
void ModBase::suits::kinopicoSetColorType(void* model, u32 colorType, bool keepHeadKonst3)
{
    setColorTypeWith(&ModBase::suits::kinopicoSetColorType_orig, model, colorType, keepHeadKonst3);
}

namespace ModBase { namespace suits { void model3SetColorType(void* model, u32 colorType, bool keepHeadKonst3); } }
void ModBase::suits::model3SetColorType(void* model, u32 colorType, bool keepHeadKonst3)
{
    if (!runShowAs(&ModBase::suits::model3SetColorType_orig, model, colorType, keepHeadKonst3, overrideFor(model, colorType)))
        ModBase::suits::model3SetColorType_orig(model, colorType, keepHeadKonst3);
}

namespace ModBase {
namespace suits {

void overrideColor(u32 playerNo, ColorType when, const f32* frames, ColorType elsewhere, const void* owner)
{
    if (playerNo < 4)
        sOverrides[playerNo] = { true, (u32)when, frames, (u32)elsewhere, owner, characterOfPlayer(playerNo) };
}

void showColorAs(u32 playerNo, ColorType when, ColorType showAs, const void* owner)
{
    if (playerNo < 4)
        sOverrides[playerNo] = { true, (u32)when, nullptr, (u32)showAs, owner, characterOfPlayer(playerNo) };
}

void clear(u32 playerNo, const void* owner)
{
    if (playerNo < 4 && (!owner || sOverrides[playerNo].owner == owner))
        sOverrides[playerNo].active = false;
}

void refresh(u32 playerNo)
{
    void* model = modelOf(playerAt(playerNo));
    if (!model)
        return;
    SetColorTypeFn setColorType = (SetColorTypeFn)(*(void***)model)[cSetColorTypeSlot];
    if (!setColorType)
        return;
    u32 current = colorTypeOf(model);
    colorTypeOf(model) = cColor_Invalid;      // the routines skip an unchanged type
    setColorType(model, current ? current : (u32)cColor_Normal, false);
}

void showBodyOf(u32 playerNo, u32 mode)
{
    void* player = playerAt(playerNo);
    void* model = modeModelOf(player);
    if (!model || mode >= cNumModes || forcedMode(model) == (s32)mode)
        return;
    forcedMode(model) = (s32)mode;
    sBodies[playerNo & 3] = { true, mode, (s32)ModBase::playerModels::character(model) };
    ((PlayerModel*)model)->setPlayerMode(modeToShow(player));
    refresh(playerNo);
}

void clearBody(u32 playerNo)
{
    void* player = playerAt(playerNo);
    void* model = modeModelOf(player);
    sBodies[playerNo & 3].active = false;
    if (!model || forcedMode(model) == -1)
        return;
    forcedMode(model) = -1;
    ((PlayerModel*)model)->setPlayerMode(modeToShow(player));
    refresh(playerNo);
}

void requireMode(u32 playerNo, u32 mode, SuitLostFn onLost, const void* owner)
{
    if (playerNo < 4)
        sRequired[playerNo] = { true, mode, characterOfPlayer(playerNo), onLost, owner };
}

void releaseMode(u32 playerNo, const void* owner)
{
    if (playerNo < 4 && sRequired[playerNo].owner == owner)
        sRequired[playerNo].active = false;
}

bool bodyShown(u32 playerNo, u32 mode)
{
    void* model = modeModelOf(playerAt(playerNo));
    return model && forcedMode(model) == (s32)mode;
}

} // namespace suits
} // namespace ModBase

// PlayerModel::setPlayerMode (0x6078E608): a model no level player owns (the
// world map's, or a level's player model before it registers) shows the real
// mode the game keeps for the character. If a suit needs another one, the suit
// ended outside a level (see requireMode): drop it before the body is chosen.
namespace ModBase { namespace suits { int setPlayerMode_orig(void* model, u32 mode); } }
namespace ModBase { namespace suits { int setPlayerMode(void* model, u32 mode); } }
int ModBase::suits::setPlayerMode(void* model, u32 mode)
{
    if (mode < cNumModes && playerOfModel(model) < 0) {
        s32 c = (s32)ModBase::playerModels::character(model);
        for (u32 i = 0; i < 4; i++) {
            Requirement r = sRequired[i];
            if (!r.active || r.character != c || r.mode == mode)
                continue;
            ModBase::log("suits: player ", i, " shown in mode ", mode, " outside a level; its suit needed ",
                         r.mode, ", so it is dropped");
            sRequired[i].active = false;
            if (sBodies[i].active && forcedMode(model) == (s32)sBodies[i].mode)
                forcedMode(model) = -1;
            sBodies[i].active = false;
            if (sOverrides[i].active && sOverrides[i].owner == r.owner)
                sOverrides[i].active = false;
            if (r.onLost)
                r.onLost(i, r.character);
        }
    }
    return ModBase::suits::setPlayerMode_orig(model, mode);
}
