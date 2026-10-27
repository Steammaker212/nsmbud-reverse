// hammer_suit.cpp -- a Hammer Flower power-up: its own item, throws hammers.
//
// =====================================================================
//  CONFIGURATION -- change these to use your own models.
//
//  An archive is romfs/Model/<archive>.Nin_NX_NVN.szs; a model is a model
//  name inside that archive. Ship your archive in this mod's
//  romfs/Model/ folder: the build copies it next to the code.
// =====================================================================

// 1: your models (the first name in each pair below); 0: the game's own
// (the second name), the safe placeholder. NSMBUDX_CUSTOM_MODELS follows the
// build: `make_mod_project.py --placeholder-models` switches every mod at once.
#define HAMMER_CUSTOM_MODELS        NSMBUDX_CUSTOM_MODELS

// The Hammer Flower item: romfs/Model/I_hmrflower.Nin_NX_NVN.szs, model
// "I_hmrflower" -- the Wii U Hammer Flower of the Tsuru framework, converted
// with tools/wiiu2dx (README: "Porting the Tsuru assets"). It carries its own
// out/out2/out3/wait/wait2 animations, so it animates and times itself like a
// vanilla flower.
#define HAMMER_ITEM_ARCHIVE         NSMBUDX_PICK_MODEL(HAMMER_CUSTOM_MODELS, "I_hmrflower", "I_fireflower")
#define HAMMER_ITEM_MODEL           NSMBUDX_PICK_MODEL(HAMMER_CUSTOM_MODELS, "I_hmrflower", "I_fireflower")

// The item model's turn about the vertical axis (a full turn is 2^32). The
// item builds its model matrix from rotation every frame (0x60462018), so this
// is all it takes. The Hammer Flower faces the camera like the Fire Flower: 0.
// (0x40000000 lays a model whose front is along Z on its side, as the earlier
// bare-hammer item needed.)
#define HAMMER_ITEM_YAW             0u

// The item code plays skeletal animations "out", "out2", "out3", "wait" and
// "wait2" from the item archive. Add them to yours to animate the item. Any
// that are missing do not bind -- SkeletalAnim_play (0x604488DC) binds only on
// an exact name match (ledger F0217) -- and the model stays still.
//
// The item's states *time themselves* by those animations, though (F0230): the
// ?-block appear state adds the colliders when "out" passes frame 26 and moves
// on when it ends. An animation that never binds leaves the frame range empty,
// so neither happens and the item can never be collected. For every name your
// archive lacks, the mod gives the frame controller the Fire Flower's length
// instead (below), so the item rises, becomes collectible and settles on the
// Fire Flower's schedule -- the model just does not move while it does.
#define HAMMER_FRAMES_OUT           50.0f   // I_fireflower FSKA lengths (+0x4C)
#define HAMMER_FRAMES_OUT2          60.0f
#define HAMMER_FRAMES_OUT3          50.0f
#define HAMMER_FRAMES_WAIT          59.0f
#define HAMMER_FRAMES_WAIT2         60.0f

// The thrown hammer. The Hammer actor builds model "bros_hammer" from its
// profile's first archive ("bros", through LoadResource 0x6043B548) and looks
// up the bone "bros_hammer_model" every frame (0x6013FFFC), so a replacement
// archive needs a bone of that name. romfs/Model/hammer.Nin_NX_NVN.szs has it,
// ships standalone and loads at game start (the item variant lists it), so
// hammers fly in every level. "bros" only comes with per-level packs: with the
// placeholder, a level without Hammer Bros falls back to fireballs.
#define HAMMER_PROJECTILE_ARCHIVE   NSMBUDX_PICK_MODEL(HAMMER_CUSTOM_MODELS, "hammer", "bros")
#define HAMMER_PROJECTILE_MODEL     NSMBUDX_PICK_MODEL(HAMMER_CUSTOM_MODELS, "hammer", "bros_hammer")

// SMB3 allowed two hammers per player on screen.
#define HAMMER_MAX_PER_PLAYER       2

// 1: every Fire Flower also gives hammers (the v1 behaviour; handy for testing
// before a level contains a Hammer Flower). 0: only the Hammer Flower does.
#define HAMMER_FROM_ANY_FIRE_FLOWER 0

// ?-blocks and bricks whose contents is this value hold a Hammer Flower.
// Any of the game's unused values 21-31 (framework/items). Small players get
// a Mushroom first, like every other flower block.
#define HAMMER_BLOCK_CONTENTS       21

// The suit's colours (framework/player). HAMMER_SUIT_COLORS borrows a look the
// game already has, on every character (Mario, Luigi, the Toads):
// nsmbudx::suits::cColor_Normal (default: each character's regular clothes and
// cap, under the helmet and shell), cColor_Ice, or cColor_Fire to keep the
// Fire look.
#define HAMMER_SUIT_COLORS          nsmbudx::suits::cColor_Normal

// The suit itself (helmet and shell): see the top of code/hammer_costume.cpp.

// A real Hammer Suit: add a 4th frame to the PB_switch / PH_switch / PC_switch
// texture-pattern animations in your Mario and Luigi model archives and set
// this to 3.0f. Mario and Luigi then use that frame; other characters keep
// HAMMER_SUIT_COLORS. -1 = off.
#define HAMMER_SUIT_FRAME           -1.0f

// =====================================================================
//
// How it works. Every fact below is in data/findings/ledger.csv.
//
//  * The Hammer Flower is a framework/actors variant of the Fire Flower
//    (profile 592), like the P-Acorn is of the Acorn: sprite 734 and block
//    contents 21 build a real Fire Flower whose runtime profile stays 592,
//    with the model names swapped while its code runs.
//
//    It used to be a profile of its own (id 916+) built by the Fire Flower
//    factory. That item was never collectible in-game (ledger F0227): the
//    player walked through it. Its item code is profile-independent, but the
//    game is not -- the stage-end item sweep (0x606DC5F0), for one, lists the
//    item profiles 591-601 by id -- and the variant route is the one the
//    P-Acorn proved collectible. A logged contact fallback (below) covers the
//    case if anything still keeps the collider from reporting the player.
//  * Collecting it grants Fire mode (2) and marks that player as a hammer
//    thrower. Collecting a plain Fire Flower clears the mark, so plain Fire
//    Flowers throw fireballs again.
//  * The throw keeps the game's own animation and timing: only what
//    Player::createFireBall spawns is replaced, through framework/player's
//    throw handlers (nsmbudx/throws.h). A hammer thrower gets the Hammer Bros
//    hammer (profile 759), created the way HammerBros_createHammer does, with
//    three per-instance changes (skip the held state, never pair with players,
//    attack as a Shell). Nothing shared is patched, so Hammer Bros' own
//    hammers still hurt Mario.
//
// Deluxe (Switch) v1.0.0 only.

#include "actor/stageactor.h"
#include "actormgr.h"
#include "profile.h"
#include "profileid.h"
#include "nsmbudx/game.h"
#include "nsmbudx/log.h"
#include "nsmbudx/name_remap.h"
#include "nsmbudx/actor_variant.h"
#include "nsmbudx/block_items.h"
#include "nsmbudx/suits.h"
#include "nsmbudx/throws.h"
#include "nsmbudx/models.h"
#include "nsmbudx/player_models.h"

// Generated by sweet-dx from hooks/hammer_suit.hks.
extern "C" int HammerFlower_grant_orig(StageActor* item);

// symbols/hammer_suit.sym
extern "C" void Player_playSound(StageActor* player, const char* name, int, int);
extern "C" u8 HammerActor_StateThrown;

// framework/player symbols/player.sym
extern "C" u8 PlayerMgr_instance[];

namespace {

const u32 cPlayerMode_Fire  = 2;     // Wii U PlayerMode; Deluxe createFireBall agrees
const u32 cProfile_FireFlower = 592; // codedx doc/profiles.csv
const u32 cProfile_Hammer   = 759;   // codedx doc/profiles.csv; HammerBros_createHammer
const u32 cHammerGrowFrames = 10;    // HammerBros_createHammer: settings1 | 0xA0000
const u32 cAttack_Shell     = 9;     // ActorCollisionCheck::cAttack_Shell
const u32 cVsKind_Players   = (1u << 0) | (1u << 1) | (1u << 2) | (1u << 9);

const nsmbudx::NameRemap kItemRemap = {
    "I_fireflower", HAMMER_ITEM_ARCHIVE,
    "I_fireflower", HAMMER_ITEM_MODEL,
};

const nsmbudx::NameRemap kProjectileRemap = {
    "bros",        HAMMER_PROJECTILE_ARCHIVE,
    "bros_hammer", HAMMER_PROJECTILE_MODEL,
};

// The item: a Fire Flower variant. Its archives load at game start, as the
// Fire Flower's do (load class 0, nsmbudx/profile_resources.h), because the
// item comes out of ?-blocks in levels that never place sprite 734. Only
// archives that exist at boot may be listed: "I_hmrflower" and "hammer" ship
// as standalone romfs/Model files. "bros" is neither standalone nor packed --
// it comes from per-level packs -- and listing it crashed the game at boot
// (0x608228E4; ledger F0222), so the projectile entry is listed only when it
// names our own archive. The item's code never asks for "bros", so the second
// remap only serves to load the projectile archive.
#define HAMMER_ITEM_REMAP { "I_fireflower", HAMMER_ITEM_ARCHIVE, "I_fireflower", HAMMER_ITEM_MODEL }
#if HAMMER_CUSTOM_MODELS
NSMBUDX_ACTOR_VARIANT(hammerFlowerVariant,
    ProfileId::HammerFlower, cProfile_FireFlower, "HammerFlower", nsmbudx::cVariant_None,
    { HAMMER_ITEM_REMAP,
      { "bros", HAMMER_PROJECTILE_ARCHIVE, "bros_hammer", HAMMER_PROJECTILE_MODEL },
      { "hmrpy", "hmrpy", nullptr, nullptr } });   // loads the costume (hammer_costume.cpp)
#else
NSMBUDX_ACTOR_VARIANT(hammerFlowerVariant,
    ProfileId::HammerFlower, cProfile_FireFlower, "HammerFlower", nsmbudx::cVariant_None,
    { HAMMER_ITEM_REMAP });
#endif

// Player and item fields, read the way the game's own code reads them.
inline u32 playerMode(StageActor* p)    { return *(u32*)((u8*)p + 0x528); }
inline u32 playerFacing(StageActor* p)  { return *(u32*)((u8*)p + 0x2F10) & 1; }
inline s32& itemCollector(StageActor* i) { return *(s32*)((u8*)i + 0x1840); }
inline u32& rotationY(StageActor* a)    { return *(u32*)((u8*)a + 0xA0); }

inline void* hammerStateMgr(StageActor* h) { return (u8*)h + 0x17C4; }
inline u32&  hammerOwnerId(StageActor* h)  { return *(u32*)((u8*)h + 0x2E78); }
inline u32&  ccAttack(ActiveCollider& c)   { return c.info._18; }
inline u32&  ccVsKind(ActiveCollider& c)   { return c.info._1C; }

bool sHammerThrower[4];

// The same, per character (model type, nsmbudx/player_models.h): models that
// belong to no level player -- the world map's -- are matched by character,
// so the map player wears the suit too.
constexpr u32 cNumCharacters = 9;
bool sHammerCharacter[cNumCharacters];

void setHammerCharacter(u32 playerNo, bool on)
{
    void* model = nsmbudx::playerModels::modelOfPlayer(playerNo);
    u32 c = model ? nsmbudx::playerModels::character(model) : cNumCharacters;
    if (c < cNumCharacters)
        sHammerCharacter[c] = on;
}
u32 sHammerIds[4][HAMMER_MAX_PER_PLAYER];

bool isHammerFlower(StageActor* actor)
{
    return nsmbudx::variantProfileOf(actor) == ProfileId::HammerFlower;
}

bool isAlive(u32 id)
{
    return id != 0 && ActorMgrRelated_getById((s32)ActorMgr::instance + 0x6A20, id) != 0;
}

u32* freeSlot(s32 playerNo)
{
    for (s32 i = 0; i < HAMMER_MAX_PER_PLAYER; i++)
        if (!isAlive(sHammerIds[playerNo][i]))
            return &sHammerIds[playerNo][i];
    return nullptr;
}

StageActor* spawnHammer(StageActor* player)
{
    u32 facing = playerFacing(player);

    ActorBuildInfo buildInfo = { 0 };
    buildInfo.settings1 = facing | (cHammerGrowFrames << 16);
    buildInfo.profile   = (Profile*)Profile__get(cProfile_Hammer);
    buildInfo.position  = player->position;
    buildInfo.position.x += facing ? -8.0f : 8.0f;
    buildInfo.position.y += 16.0f;

    StageActor* hammer;
    {
        nsmbudx::ScopedNameRemap remap(kProjectileRemap);   // the model is made during create
        hammer = (StageActor*)ActorMgr::instance->create(&buildInfo, 0);
    }
    if (!hammer)
        return nullptr;

    hammer->playerId = player->playerId;            // enemies credit the kill to this player
    hammer->scale    = Vec3(1.0f, 1.0f, 1.0f);      // the skipped held state would grow it to 1.0
    hammerOwnerId(hammer) = player->id;             // thrown state inherits the player's run speed

    ccAttack(hammer->aCollider) = cAttack_Shell;
    ccVsKind(hammer->aCollider) &= ~cVsKind_Players;

    StateMgr__changeState(hammerStateMgr(hammer), &HammerActor_StateThrown);
    return hammer;
}

// ---- Collecting -----------------------------------------------------------
//
// The item's collector (+0x1840) is written by its aCollider callback
// (0x60460DD0) when a player's collider overlaps: collector = player->+0x54.
// The per-frame collect check (vtable +0xE0, 0x6045DDC0) then validates and
// grants. If, with the collider registered (the 8-frame appear countdown
// adds it, vtable +0xF4 = 0x60463178), a player stands inside the item's box
// and the callback still has not reported it, report it here -- once logged
// per item, so a test shows whether the game's own path works.
//
// The box is the item collider (0x60BFB7A8: centre +7 up, half-size 7 x 7)
// widened by a player's half-width, against the player's feet position.
constexpr f32 cTouchHalfWidth = 7.0f + 6.0f;
constexpr f32 cTouchBelow     = 16.0f;     // player feet up to 16 below the item
constexpr f32 cTouchAbove     = 14.0f;     // ... and up to its top

StageActor* sFallbackLogged;

void touchFallback(StageActor* item)
{
    // ActiveColliderMgr::instance is 0x60C88234 (codedx main.sym; the GOT entry
    // sub_60463178 loads it through holds the same address).
    ActiveColliderMgr* mgr = ActiveColliderMgr::instance;
    if (!mgr || !mgr->isInActiveList(&item->aCollider))
        return;     // not collectible yet: the game has not registered it
    u8* players = *(u8**)PlayerMgr_instance;
    if (!players)
        return;
    for (s32 i = 0; i < 4; i++) {
        StageActor* p = *(StageActor**)(players + 0x30 + 4 * i);
        if (!p)
            continue;
        f32 dx = p->position.x - item->position.x;
        f32 dy = p->position.y - item->position.y;
        if (dx > -cTouchHalfWidth && dx < cTouchHalfWidth && dy > -cTouchBelow && dy < cTouchAbove) {
            if (sFallbackLogged != item) {
                sFallbackLogged = item;
                nsmbudx::log("hammer flower: player ", i,
                             " touched it but the collider did not report it; collecting");
            }
            itemCollector(item) = i;
            return;
        }
    }
}

// ---- Throwing ---------------------------------------------------------------

bool hammerThrow(void* p, int spin, int* result)
{
    StageActor* player = (StageActor*)p;
    s32 playerNo = player->playerId;
    if (playerNo < 0 || playerNo >= 4 || playerMode(player) != cPlayerMode_Fire
        || !(sHammerThrower[playerNo] || HAMMER_FROM_ANY_FIRE_FLOWER))
        return false;

    // No hammer archive loaded: throw a fireball rather than crash. With our
    // own archive this cannot happen (it loads at game start); with the
    // placeholder "bros" it does in levels without Hammer Bros.
    if (!nsmbudx::isArchiveLoaded(HAMMER_PROJECTILE_ARCHIVE)) {
        nsmbudx::log("hammer suit: archive '", HAMMER_PROJECTILE_ARCHIVE,
                     "' is not loaded here; throwing a fireball");
        return false;
    }

    *result = 0;
    u32* slot = freeSlot(playerNo);
    if (!slot)
        return true;

    StageActor* hammer = spawnHammer(player);
    if (!hammer)
        return true;

    *slot = hammer->id;
    Player_playSound(player, "SE_PLY_THROW_FIRE", 0, 0);
    *result = 1;
    return true;
}

// Player::canThrow (0x607AA954) lets Fire mode throw while fewer than 2
// *fireballs* are out; hammers are not fireballs, so it always said yes and the
// throw animation played even when hammerThrow then had no free slot. This gate
// refuses the throw itself -- no animation -- while the player's hammers are
// all out. It only speaks for hammer players; everyone else is left to the game.
bool hammerGate(void* p)
{
    StageActor* player = (StageActor*)p;
    s32 playerNo = player->playerId;
    if (playerNo < 0 || playerNo >= 4 || playerMode(player) != cPlayerMode_Fire
        || !(sHammerThrower[playerNo] || HAMMER_FROM_ANY_FIRE_FLOWER)
        || !nsmbudx::isArchiveLoaded(HAMMER_PROJECTILE_ARCHIVE))
        return true;
    return freeSlot(playerNo) != nullptr;
}

struct HammerSetup
{
    HammerSetup()
    {
        nsmbudx::blockItems::registerContents(HAMMER_BLOCK_CONTENTS, ProfileId::HammerFlower);
        nsmbudx::throws::addGate(&hammerGate);
        nsmbudx::throws::addHandler(&hammerThrow);
    }
} sHammerSetup;

} // namespace

// ---- The Hammer Flower item ----------------------------------------------

// The six Fire Flower item functions that name "I_fireflower": the model is
// built in the first (the item's onCreate, vtable slot 5), the other five play
// its animations. The variant already swaps names while the item's lifecycle
// virtuals run; these hooks keep the swap for any call made from elsewhere,
// because the model's animation buffer is sized from the archive it was built
// from (SkeletalAnim_init 0x604486C8), so playing the Fire Flower's animations
// on a custom model could overrun it, while a name the custom archive lacks is
// simply skipped. Nested remaps of the same names are harmless.
#define HAMMER_FLOWER_ITEM_HOOK(fn, ...)                         \
    extern "C" int fn##_orig(StageActor* item);                  \
    extern "C" int fn(StageActor* item)                          \
    {                                                            \
        if (!isHammerFlower(item))                               \
            return fn##_orig(item);                              \
        __VA_ARGS__;                                             \
        nsmbudx::ScopedNameRemap remap(kItemRemap);              \
        return fn##_orig(item);                                  \
    }

// createModel ends by building the model matrix from rotation (0x60462018).
HAMMER_FLOWER_ITEM_HOOK(HammerFlower_createModel, rotationY(item) = HAMMER_ITEM_YAW)

// ---- Item animations --------------------------------------------------------
//
// Each of the five functions does (0x6045D980 and siblings):
//
//     SkeletalAnim_play(anim, archive, "<name>");   // binds only on a match
//     anim->rate = 1.0f;
//     AnimationCtrl_setRepeat(&anim->frameCtrl, 0 or 1);
//     AnimationCtrl_reset(&anim->frameCtrl);         // 0x6041838C: frame = start
//
// with anim = the model wrapper's (item+0x1810) first skeletal animation and
// its frame controller at anim+4 (constructor 0x60418368, update 0x604183EC,
// which Animation_update 0x6040E904 runs every frame, bound or not). Offsets
// from anim:
//
//     +0x04 start   +0x08 end   +0x0C loop start   +0x10 loop end
//     +0x14 frame   +0x18 rate (the item writes 1.0 here)
//     +0x1C flags: 0x01 repeat, 0x02 just reset, 0x10/0x20 (just) finished
//                  (the appear state polls 0x20 here)
//
// A successful play sets start = 0 and end = loop end = the animation's frame
// count. A failed one leaves the range as it was; emptied first, it stays
// empty, and an empty range never passes a frame test (0x60418548 compares
// frame == target when start == end) -- the stuck Hammer Flower (F0230). So
// the range is emptied before the play, and filled with the Fire Flower's
// length if the play did not fill it.
inline u8* itemSkelAnim(StageActor* item)
{
    u8* wrapper = *(u8**)((u8*)item + 0x1810);
    if (!wrapper || !*(u32*)(wrapper + 0x8))
        return nullptr;
    void** anims = *(void***)(wrapper + 0xC);
    return anims ? (u8*)anims[0] : nullptr;
}

inline f32& animStart(u8* anim)   { return *(f32*)(anim + 0x04); }
inline f32& animEnd(u8* anim)     { return *(f32*)(anim + 0x08); }
inline f32& animLoopEnd(u8* anim) { return *(f32*)(anim + 0x10); }
inline f32& animFrame(u8* anim)   { return *(f32*)(anim + 0x14); }

bool sAnimFallbackLogged;

// The "wait" function (0x6045DB18) plays nothing when the item's animation
// state (+0x1820) is already 4 (idle) -- Tsuru's playIdleAnim has the same
// check -- and it is called again while idle. Emptying the range then made a
// bound "wait" look missing and cut it to the Fire Flower's length (seen once
// "wait" really bound, with I_hmrflower). Such a call is passed straight on.
inline u32 itemAnimState(StageActor* item) { return *(u32*)((u8*)item + 0x1820); }

#define HAMMER_FLOWER_ANIM_HOOK(fn, name, frames, skipState)                 \
    extern "C" int fn##_orig(StageActor* item);                              \
    extern "C" int fn(StageActor* item)                                      \
    {                                                                        \
        if (!isHammerFlower(item))                                           \
            return fn##_orig(item);                                          \
        if (itemAnimState(item) == (skipState)) {                            \
            nsmbudx::ScopedNameRemap remap(kItemRemap);                      \
            return fn##_orig(item);                                          \
        }                                                                    \
        u8* anim = itemSkelAnim(item);                                       \
        if (anim)                                                            \
            animEnd(anim) = animStart(anim);                                 \
        int r;                                                               \
        {                                                                    \
            nsmbudx::ScopedNameRemap remap(kItemRemap);                      \
            r = fn##_orig(item);                                             \
        }                                                                    \
        if (anim && animEnd(anim) == animStart(anim)) {                      \
            animStart(anim) = 0.0f;                                          \
            animEnd(anim) = frames;                                          \
            animLoopEnd(anim) = frames;                                      \
            animFrame(anim) = 0.0f;                                          \
            if (!sAnimFallbackLogged) {                                      \
                sAnimFallbackLogged = true;                                  \
                nsmbudx::log("hammer flower: item archive has no '", name,   \
                             "' animation; timing it like the Fire Flower"); \
            }                                                                \
        }                                                                    \
        return r;                                                            \
    }

HAMMER_FLOWER_ANIM_HOOK(HammerFlower_animOut,   "out",   HAMMER_FRAMES_OUT,   ~0u)
HAMMER_FLOWER_ANIM_HOOK(HammerFlower_animOut2,  "out2",  HAMMER_FRAMES_OUT2,  ~0u)
HAMMER_FLOWER_ANIM_HOOK(HammerFlower_animOut3,  "out3",  HAMMER_FRAMES_OUT3,  ~0u)
HAMMER_FLOWER_ANIM_HOOK(HammerFlower_animWait,  "wait",  HAMMER_FRAMES_WAIT,  4u)
HAMMER_FLOWER_ANIM_HOOK(HammerFlower_animWait2, "wait2", HAMMER_FRAMES_WAIT2, ~0u)

// The Fire Flower's per-frame collect check (vtable +0xE0, 0x6045DDC0), shared
// by both flowers: sub_60463998(item, &result, 2, 1) grants mode 2 to the
// player in item+0x1840 and leaves that index there, or -1 on rejection.
extern "C" int HammerFlower_grant(StageActor* item)
{
    bool hammerItem = isHammerFlower(item);
    if (hammerItem) {
        // The states run before the model matrix update each frame, so the
        // turn holds even if a parent copied its own rotation (0x6045FC64).
        rotationY(item) = HAMMER_ITEM_YAW;
        if (itemCollector(item) < 0)
            touchFallback(item);
    }

    s32 collector = itemCollector(item);
    int result = HammerFlower_grant_orig(item);
    if (collector >= 0 && collector < 4 && itemCollector(item) == collector) {
        sHammerThrower[collector] = hammerItem;
        setHammerCharacter(collector, hammerItem);
        if (hammerItem) {
            nsmbudx::log("hammer flower: collected by player ", collector);
            nsmbudx::suits::overrideColor(collector, nsmbudx::suits::cColor_Fire,
                                          HAMMER_SUIT_FRAME, HAMMER_SUIT_COLORS, sHammerThrower);
        } else {
            nsmbudx::suits::clear(collector, sHammerThrower);
        }
        // Takes effect with the coming mode change, or now if already Fire.
        nsmbudx::suits::refresh(collector);
    }
    return result;
}

extern "C" bool HammerSuit_isHammerCharacter(u32 character)
{
    return character < cNumCharacters && sHammerCharacter[character];
}

// For code/hammer_costume.cpp (the helmet and shell, MPL-2.0): does this model
// show a hammer player? Its character collected a Hammer Flower and it shows
// Fire mode -- in a level and on the world map alike.
extern "C" bool HammerSuit_isHammerModel(void* model)
{
    u32 c = nsmbudx::playerModels::character(model);
    return c < cNumCharacters && sHammerCharacter[c]
        && nsmbudx::playerModels::shownMode(model) == cPlayerMode_Fire;
}
