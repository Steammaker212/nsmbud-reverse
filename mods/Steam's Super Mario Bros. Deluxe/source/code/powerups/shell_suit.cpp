// shell_suit.cpp -- a Blue Shell power-up in the style of New Super Mario Bros. DS.
//
// =====================================================================
//  CONFIGURATION
// =====================================================================

// 1: your item model (first name in each pair); 0: the game's Ice Flower item.
// MODBASE_CUSTOM_MODELS follows the build (--placeholder-models). Set this to
// MODBASE_CUSTOM_MODELS once romfs/Model/I_shell.Nin_NX_NVN.szs (model
// "I_shell") is in this mod's romfs/ folder; until then the Ice Flower. Do not
// switch it on without the file: item archives load at game start, and a
// missing one crashes the game at boot.
//
// I_iceflower is a drop-in for the Penguin Suit item's I_penguin: both sit in
// the always-mounted jyotyuActorPack, both hold one model and the same five
// item animations (out, out2, out3, wait, wait2) and the "eff" joint the item
// code reads every frame (0x60462018).
#define SHELL_CUSTOM_MODELS     0
#define SHELL_ITEM_ARCHIVE      MODBASE_PICK_MODEL(SHELL_CUSTOM_MODELS, "I_shell", "I_iceflower")
#define SHELL_ITEM_MODEL        MODBASE_PICK_MODEL(SHELL_CUSTOM_MODELS, "I_shell", "I_iceflower")

// What a shell player looks like (framework/player, modbase/suits.h). The
// player keeps Penguin mode underneath -- the belly slide the dash is built on
// only exists there -- but is drawn with SHELL_LOOK_MODE's body and
// SHELL_LOOK_COLORS: by default the Fire Flower suit (Normal body, Fire
// colours). -1 keeps the Penguin Suit look.
#define SHELL_LOOK_MODE         2       // PlayerMode::Fire
#define SHELL_LOOK_COLORS       ModBase::suits::cColor_Fire

// 0: a shell player cannot throw. The Penguin Suit throws iceballs
// (Player::createFireBall 0x607AABA0 throws them for modes 5 and 6), which the
// Blue Shell should not. 1 keeps the iceballs.
#define SHELL_CAN_THROW         0

// ?-blocks and bricks whose contents is this value hold a Blue Shell
// (framework/items; 21 Hammer Flower, 22 P-Acorn).
#define SHELL_BLOCK_CONTENTS    23

// The shell dash: crouch while running, as with the Penguin Suit's belly slide.
// Speed is held at SHELL_SPEED for as long as the slide lasts (the Penguin
// slide's own cap is 4.0, and it slows down on flat ground).
#define SHELL_SPEED             4.0f

// 1: bounce off walls and keep going, like the DS shell. 0: stop as the suit does.
#define SHELL_BOUNCE            1

// 1: bump ?-blocks and bricks that are actors (placed as sprites) on contact.
// Tile blocks are not bumped yet (see the README).
#define SHELL_BUMP_BLOCKS       1

// Shell spin while dashing: added to the facing angle (rotation.y, a full turn
// is 2^32) every frame. 0 = no spin.
#define SHELL_SPIN              0x0C000000

// =====================================================================
//
// How it works. Ledger F0205, F0212-F0216; readable/player/PenguinSuit.cpp.
//
//  * The Blue Shell item is the game's Penguin Suit item (profile 596) as a new
//    profile (framework/actors variant) wearing the Ice Flower model, so it
//    appears, moves and is collected like the Penguin Suit. Its grant gives
//    PlayerMode::Penguin (5) and marks the player as a shell player; a plain
//    Penguin Suit clears the mark.
//  * The grant only queues the mode (player+0x2C7C, sub_607A27A8); +0x528
//    changes when the transformation ends. A shell player therefore stays one
//    while either is Penguin, and stops when both are something else (damage
//    queues Big through 0x607C814C). Checking +0x528 alone dropped the mark
//    the frame after the grant, which left a plain Penguin Suit -- iceballs
//    and all (ledger F0228).
//  * Looks: framework/player draws the shell player with the Fire body and
//    colours while the mode stays Penguin (suits::showBodyOf / showColorAs).
//  * Throws: framework/player's throw gate (modbase/throws.h) stops a shell
//    player starting a throw at all, so no iceballs and no throw animation.
//  * The Penguin Suit's belly slide is a Player state of its own, 0x60CC4F8C
//    (Player picks it in 0x607B8CB0 when +0x528 == 5). It already defeats
//    enemies the way the suit does. While a shell player is in it, the mod
//    keeps speedF at SHELL_SPEED, reverses on walls, spins the shell and bumps
//    block actors it touches.
//  * The per-frame hook is Player::afterExecute (0x607958F0), which only the
//    Player class runs -- after the state code, every frame.
//
// Deluxe (Switch) v1.0.0 only.

#include "actors/profileid.h"
#include "actors/states.h"
#include "modbase/log.h"
#include "modbase/models.h"
#include "modbase/actor_variant.h"
#include "modbase/block_items.h"
#include "modbase/suits.h"
#include "modbase/throws.h"
#include "game/block.h"                    // BlockBase::bump, the vtable +0x0A8 handler
#include "modbase/game/items/blocks.h"      // BlockAmbush::bump, BlockBabyYoshi::bump
#include "modbase/game/player/player.h"     // Player::StateID_PenguinSlide (chosen by 0x607B8CB0 when mode == 5)

// Generated by sweet-dx from hooks/shell_suit.hks.
namespace ModBase { namespace shellSuit { void afterExecute_orig(void* player, u32 result); } }
namespace ModBase { namespace shellSuit { int penguinGrant_orig(void* item); } }
namespace ModBase { namespace shellSuit { bool doOverlap_orig(void* ac1, void* ac2); } }

namespace {

constexpr u32 cPlayerMode_Penguin = 5;

// Player fields, read the way the game's own code reads them.
inline u32  mode(void* p)         { return *(u32*)((u8*)p + 0x528); }
inline u32  nextMode(void* p)     { return *(u32*)((u8*)p + 0x2C7C); }   // queued by the grant
inline s32  playerNo(void* p)     { return *(s8*)((u8*)p + 0x54); }
inline u32& direction(void* p)    { return *(u32*)((u8*)p + 0x50); }
inline f32& speedF(void* p)       { return *(f32*)((u8*)p + 0x58); }
inline f32& maxSpeedF(void* p)    { return *(f32*)((u8*)p + 0x5C); }
inline f32  posX(void* p)         { return *(f32*)((u8*)p + 0x6C); }
inline s32& rotationY(void* p)    { return *(s32*)((u8*)p + 0xA0); }
inline StateMgr* stateMgr(void* p){ return (StateMgr*)((u8*)p + 0x26BC); }

MODBASE_ACTOR_VARIANT(shellItemVariant,
    ProfileId::BlueShell, 596 /* Penguin Suit item */, "BlueShell", ModBase::cVariant_None,
    { { "I_penguin", SHELL_ITEM_ARCHIVE, "I_penguin", SHELL_ITEM_MODEL } });

struct ShellPlayer
{
    bool  shell;        // collected a Blue Shell, still in (or becoming) Penguin mode
    void* dashing;      // the player while in the slide, for the overlap hook
    f32   lastX;
    u32   frames;       // frames into this dash
    s32   spin;
};
ShellPlayer sPlayers[4];

// Owner tag for the colour override, so ending the shell never clears another
// mod's (a shell player who takes a Hammer Flower, say).
const void* const cLookOwner = sPlayers;

void applyLook(u32 n)
{
#if SHELL_LOOK_MODE >= 0
    ModBase::suits::showColorAs(n, ModBase::suits::cColor_Normal, SHELL_LOOK_COLORS, cLookOwner);
    if (!ModBase::suits::bodyShown(n, SHELL_LOOK_MODE))
        ModBase::suits::showBodyOf(n, SHELL_LOOK_MODE);     // also refreshes the colours
#endif
}

void endShell(u32 n)
{
    ShellPlayer& s = sPlayers[n];
    if (!s.shell)
        return;
    s.shell = false;
    s.dashing = nullptr;
#if SHELL_LOOK_MODE >= 0
    ModBase::suits::clear(n, cLookOwner);
    ModBase::suits::clearBody(n);                           // back to the real mode's body
#endif
}

// framework/player throw gate: false stops the throw before it starts.
bool shellMayThrow(void* player)
{
    s32 n = playerNo(player);
    return SHELL_CAN_THROW || n < 0 || n >= 4 || !sPlayers[n].shell;
}

struct ShellSetup
{
    ShellSetup()
    {
        ModBase::blockItems::registerContents(SHELL_BLOCK_CONTENTS, ProfileId::BlueShell);
        ModBase::throws::addGate(&shellMayThrow);
    }
} sShellSetup;

bool isDashing(void* actor)
{
    if (!actor)
        return false;
    for (const ShellPlayer& s : sPlayers)
        if (s.dashing == actor)     // pointer comparison only: never reads the actor
            return true;
    return false;
}

void dash(void* player, ShellPlayer& s)
{
    f32 sign = direction(player) == 1 ? -1.0f : 1.0f;
    if (s.frames == 0)
        s.lastX = posX(player);

#if SHELL_BOUNCE
    // A wall: we asked for full speed last frame and barely moved.
    f32 moved = posX(player) - s.lastX;
    if (s.frames > 2 && moved < 0.25f && moved > -0.25f) {
        direction(player) ^= 1;
        sign = -sign;
    }
#endif
    s.lastX = posX(player);

    f32 sp = speedF(player);
    if (sp * sign < SHELL_SPEED)
        speedF(player) = SHELL_SPEED * sign;
    maxSpeedF(player) = SHELL_SPEED * sign;

    s.spin += SHELL_SPIN;
    rotationY(player) += s.spin;
    s.frames++;
}

// ---- Block bumps (actors only) ------------------------------------------------
//
// BlockBase's bump handler is vtable +0x0A8 (vf16C, 0x605640BC); only two
// classes override it. A pointer is called only if its slot holds one of the
// three, so an enemy is never sent into an unrelated virtual (ledger F0134,
// F0142). +0x1ACC is the player number the block credits.
//
// The three are compared as linker symbols (symbols/shell_suit.sym), which the
// build relocates like every call. A vtable holds runtime addresses; the IDA
// constants this used to compare against (0x605640BC, ...) are not where the
// game is loaded, so no block ever matched and none was bumped (F0229).
constexpr u32 cBlockBump = 0x0A8;
constexpr u32 cBlockHitPlayer = 0x1ACC;

struct Bump { void* block; u32 until; };
Bump sBumps[8];
u32 sTick;

void bumpBlock(void* block, s32 player)
{
    void* fn = (*(void***)block)[cBlockBump / 4];
    if (fn != (void*)&BlockBase::bump && fn != (void*)&BlockAmbush::bump
        && fn != (void*)&BlockBabyYoshi::bump)
        return;
    Bump* slot = nullptr;
    for (Bump& b : sBumps) {
        if (b.block == block) {
            if (sTick < b.until)
                return;             // one bump per block per half second
            slot = &b;
            break;
        }
        if (!slot && (!b.block || sTick >= b.until))
            slot = &b;
    }
    if (!slot)
        return;
    *slot = { block, sTick + 30 };
    *(s32*)((u8*)block + cBlockHitPlayer) = player;
    ((void (*)(void*))fn)(block);
}

} // namespace

// Player::afterExecute (0x607958F0): after the state ran, every frame.
namespace ModBase { namespace shellSuit { void afterExecute(void* player, u32 result); } }
void ModBase::shellSuit::afterExecute(void* player, u32 result)
{
    ModBase::shellSuit::afterExecute_orig(player, result);

    s32 n = playerNo(player);
    if (n < 0 || n >= 4)
        return;
    ShellPlayer& s = sPlayers[n];
    if (s.shell && mode(player) != cPlayerMode_Penguin && nextMode(player) != cPlayerMode_Penguin)
        endShell(n);                // hurt, or another power-up
    if (s.shell)
        applyLook(n);               // a new level builds a new model: re-apply once

    bool dashing = s.shell && stateMgr(player)->getCurrentState() == &Player::StateID_PenguinSlide;
    if (dashing) {
        s.dashing = player;
        dash(player, s);
    } else {
        s.dashing = nullptr;
        s.frames = 0;
        s.spin = 0;
    }
}

// The Penguin Suit item's grant (0x6046B6BC): Item_grantMode(item, &r, 5, 1),
// then the collect feedback. item+0x1840 holds the collector afterwards.
namespace ModBase { namespace shellSuit { int penguinGrant(void* item); } }
int ModBase::shellSuit::penguinGrant(void* item)
{
    int granted = ModBase::shellSuit::penguinGrant_orig(item);
    s32 collector = *(s32*)((u8*)item + 0x1840);
    if (collector >= 0 && collector < 4) {
        if (ModBase::variantProfileOf(item) == ProfileId::BlueShell) {
            if (!sPlayers[collector].shell)
                ModBase::log("blue shell: collected by player ", collector);
            sPlayers[collector].shell = true;
            applyLook(collector);
        } else {
            endShell(collector);    // a plain Penguin Suit
        }
    }
    return granted;
}

// ActiveCollider_doOverlapMaybe (0x601597E8): runs both colliders' callbacks,
// the one place a player-side mod sees which block it touches. Owner at +0x40.
namespace ModBase { namespace shellSuit { bool doOverlap(void* ac1, void* ac2); } }
bool ModBase::shellSuit::doOverlap(void* ac1, void* ac2)
{
#if SHELL_BUMP_BLOCKS
    sTick++;
    void* o1 = *(void**)((u8*)ac1 + 0x40);
    void* o2 = *(void**)((u8*)ac2 + 0x40);
    bool p1 = isDashing(o1), p2 = isDashing(o2);
    if (p1 != p2) {
        void* player = p1 ? o1 : o2;
        bumpBlock(p1 ? o2 : o1, playerNo(player));
    }
#endif
    return ModBase::shellSuit::doOverlap_orig(ac1, ac2);
}
