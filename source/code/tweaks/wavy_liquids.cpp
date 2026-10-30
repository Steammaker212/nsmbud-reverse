// wavy_liquids.cpp -- Tsuru's wavy liquids: the retail Water, Poison and Quicksand get the wavy
// surface the retail Lava has, with the Lava's own wave settings.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// After Tsuru's src/waves.cpp (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). Tsuru
// registers new WavyWater / WavyPoison / WavyQuicksand profiles and sets the wave fields by hand;
// on Deluxe the liquids' own onCreate is extended instead, doing what Lava_onCreate (0x605A7D68)
// does for a wavy lava:
//   - a zone-wide liquid (TerrainActor +0x1AB4 != 1) whose TerrainEffects (+0x1AF4) are set up
//     (+0x1AEE) and whose settings2 bit 0 is set gets TerrainEffects_setWaveValues (0x60705E2C)
//     with the Lava's nybbles (settings2 >> 4, >> 16, >> 8, >> 20, >> 12, >> 24, 4 bits each:
//     height, mini height, speed, mini speed, width, mini width), the wavy flag +0x1AEC, and a
//     TerrainEffects_update (0x60705F6C);
//   - in wave mode (+0xE8 == 3) TerrainEffects_update writes the surface into TileMgr's wave
//     tables (so it is solid / swimmable along the waves, and the Wave Platform rides it), and
//     also burns every player near the surface -- the lava's wave burn. For these liquids the
//     update runs with PlayerMgr's player list (+0x20, the one it reads) emptied, so nobody burns.
//
// The zone's liquid type stays the liquid's own (TileMgr +0x2824: lava 3, poison 5, ...), which
// is what the wave surface's contact is taken from.

#include "actors/stageactor.h"
#include "modbase/game/player/player.h"
#include "modbase/log.h"

namespace ModBase { namespace waves { extern u8* tileMgr; } }

namespace ModBase { namespace waves {
int setWaveValues(void* effects, int height, int miniHeight, int speed, int miniSpeed, int width, int miniWidth);
int update(void* effects);
int update_orig(void* effects);
int waterCreate(StageActor* liquid);
int waterCreate_orig(StageActor* liquid);
int poisonCreate(StageActor* liquid);
int poisonCreate_orig(StageActor* liquid);
int quicksandCreate(StageActor* liquid);
int quicksandCreate_orig(StageActor* liquid);
int effectsInit(void* effects, bool noLocation, int isLayer0, int type, void* heap);
int effectsInit_orig(void* effects, bool noLocation, int isLayer0, int type, void* heap);
int waveLiquid(int unused, unsigned char* tileMgr);
int draw(void* effects);
int draw_orig(void* effects);
int drawBody(void* body);
} }

namespace {

constexpr u32 cEffects = 0x1AF4;        // TerrainActor: TerrainEffects
constexpr u32 cLocationMode = 0x1AB4;   // 1: the liquid fills a location, not the zone
constexpr u32 cEffectsOn = 0x1AEE;      // the TerrainEffects were set up

// Set while a liquid with Giant Waves runs its onCreate. (Not used to change TerrainEffects_init's
// type: Lava_onCreate's type 3 is the lava wave renderer, which needs obj_magmawave -- forced on
// a water level it crashed on the unloaded archive.)
bool sCreatingWavy;

// Quicksand is not the zone's liquid (TileMgr +0x2824 stays 0 and the liquid top -8192, read live
// with GDB): Quicksand_onCreate (0x605AA7A4) makes it a solid box collider of type 22 instead, and
// the liquid answer has no quicksand value (2, the Wii U's, acted as water). Set when a wavy
// quicksand is made, so its wave crests answer no liquid (0) and not the lava answer; it still
// sinks the player in its body.
bool sWavyQuicksand;

// The wavy liquids made here (their TerrainEffects), so the update knows them.
void* sWavy[8];

bool isWavy(void* effects)
{
    for (void* e : sWavy)
        if (e == effects)
            return true;
    return false;
}

// isWater: the retail Water uses nybbles 14 and 16 itself (settings2 >> 24, >> 16), so its
// mini-wave width and height stay the game's defaults (0).
int makeWavy(StageActor* liquid, int result, bool isWater = false)
{
    u8* a = (u8*)liquid;
    u32 s2 = liquid->settings2;
    if (result != 1 || !(s2 & 1) || *(u32*)(a + cLocationMode) == 1 || !a[cEffectsOn])
        return result;
    void* effects = a + cEffects;
    ModBase::waves::setWaveValues(effects, s2 >> 4 & 0xF, isWater ? 0 : s2 >> 16 & 0xF, s2 >> 8 & 0xF,
                                  s2 >> 20 & 0xF, s2 >> 12 & 0xF, isWater ? 0 : s2 >> 24 & 0xF);
    // Not the actor's wavy flag (+0x1AEC), which Lava_onCreate sets: TerrainActor_onDraw
    // (0x605A5098) draws the liquid's body model (+0x17D8) only while it is 0 -- the lava's wave
    // model replaces its body, a water's has none (read live with GDB: body gone, flag 1).
    // TileMgr +0x2821 (hasWaves): CollisionMgr only asks checkWaveCollision while it is set (read
    // live with GDB on a wavy water level: 0). Lava's waves set it; Tsuru's activateWave too.
    if (ModBase::waves::tileMgr)
        ModBase::waves::tileMgr[0x2821] = 1;
    for (void*& e : sWavy)
        if (!e || e == effects) {
            e = effects;
            break;
        }
    ModBase::waves::update(effects);
    return result;
}

} // namespace

template <class F> int create(StageActor* l, F orig, bool isWater = false)
{
    sCreatingWavy = l->settings2 & 1;
    int r = orig(l);
    sCreatingWavy = false;
    return makeWavy(l, r, isWater);
}

int ModBase::waves::waterCreate(StageActor* l)     { return create(l, &waterCreate_orig, true); }
int ModBase::waves::poisonCreate(StageActor* l)    { return create(l, &poisonCreate_orig); }
int ModBase::waves::quicksandCreate(StageActor* l)
{
    int r = create(l, &quicksandCreate_orig);
    if (l->settings2 & 1)
        sWavyQuicksand = true;
    return r;
}


// The zone's wavy Lava (profile 0x55, wave mode), for Basalt Bones (code/sprites/basalt_bones.cpp):
// noted on each of its updates, so a Basalt Bones only touches a lava that updated since its own
// last frame -- never a pointer left over from an earlier level.
namespace ModBase { namespace waves { void* gLavaEffects; bool gLavaSeen; } }

int ModBase::waves::update(void* effects)
{
    if (!isWavy(effects) && *((u8*)effects + 0xE8) == 3
        && ((Actor*)((u8*)effects - cEffects))->getProfileId() == 0x55) {
        gLavaEffects = effects;
        gLavaSeen = true;
    }
    if (!isWavy(effects) || *((u8*)effects + 0xE8) != 3 || !PlayerMgr::instance)
        return update_orig(effects);
    StageActor** players = (StageActor**)((u8*)PlayerMgr::instance + 0x20);
    StageActor* saved[4];
    for (u32 i = 0; i < 4; i++) {
        saved[i] = players[i];
        players[i] = nullptr;
    }
    int r = update_orig(effects);
    for (u32 i = 0; i < 4; i++)
        players[i] = saved[i];
    return r;
}

// The liquid inside the waves (see hooks/tweaks/wavy_liquids.hks): the game's own answer for
// lava (3, or 4 when TileMgr +0x2820 is set), the zone's liquid type for any other liquid.
int ModBase::waves::waveLiquid(int, unsigned char* tm)
{
    u32 liquid = *(u32*)(tm + 0x2824);
    if (liquid != 0 && liquid != 3)
        return (int)liquid;
    // 6: Deluxe's own quicksand answer. For a liquid collider CollisionMgr answers
    // table[0x60BD43CC][kind] = {1, 2, 3, 5, 6}, kind being +0x130 bits 16-23, which
    // ColliderBase::setType copies from 0x60AF77B8: type 19 water 1 (-> 2), 20 lava 2 (-> 3),
    // 21 poison 3 (-> 5), 22 quicksand 4 (-> 6). (4 burned, 2 acted as water: both checked.)
    if (liquid == 0 && sWavyQuicksand)
        return 6;
    return tm[0x2820] == 0 ? 3 : 4;
}

// TerrainEffects_draw (0x60707390) draws the liquid's body (0x6044E360 on +0x8) only in modes 1
// and 2; in wave mode (3) the lava's wave model is the body. A wavy water, poison or quicksand
// has no such model, so its body is drawn here as in its flat mode.
int ModBase::waves::draw(void* effects)
{
    int r = draw_orig(effects);
    // +0x8 can be null (a liquid set up without a body object): calling the draw on it crashed.
    void* body = *(void**)((u8*)effects + 8);
    if (body && isWavy(effects) && *((u8*)effects + 0xE8) == 3)
        drawBody(body);
    return r;
}
