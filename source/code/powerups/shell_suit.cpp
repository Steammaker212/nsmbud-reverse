// shell_suit.cpp -- a Blue Shell power-up in the style of New Super Mario Bros. DS.
//
// =====================================================================
//  CONFIGURATION
// =====================================================================

// 1: your item model (first name in each pair); 0: the game's Ice Flower item.
// MODBASE_CUSTOM_MODELS follows the build (--placeholder-models).
//
// The custom item is romfs/Model/blue_shell.Nin_NX_NVN.szs, model "shell":
// a blue Koopa shell (one bone, origin at its base, 17 x 15 units -- the size of
// the Penguin Suit item I_penguin, 16 x 17). It lacks what the item code expects
// of I_penguin, so the mod supplies both (see "The Blue Shell item" below):
//  * the item animations out, out2, out3, wait, wait2: the item states time
//    themselves by them (F0230); each missing one runs for I_penguin's length;
//  * the "eff" joint the item reads every frame (0x60462018): looked up by name
//    and used unchecked, so a missing one reads matrix -1; its result is
//    replaced with the item's position, I_penguin's eff being 8 units up.
// Item archives load at game start; a missing file is dropped with a log line
// (modbase/mod_archives.h) and the item falls back to the game's model.
//
// I_iceflower is the placeholder: a drop-in for the Penguin Suit item's
// I_penguin (both in the always-mounted jyotyuActorPack, one model, the same
// five item animations and the "eff" joint).
#define SHELL_CUSTOM_MODELS     MODBASE_CUSTOM_MODELS
#define SHELL_ITEM_ARCHIVE      MODBASE_PICK_MODEL(SHELL_CUSTOM_MODELS, "blue_shell", "I_iceflower")
#define SHELL_ITEM_MODEL        MODBASE_PICK_MODEL(SHELL_CUSTOM_MODELS, "shell", "I_iceflower")
#define SHELL_FRAMES_OUT        49.0f   // I_penguin FSKA lengths
#define SHELL_FRAMES_OUT2       30.0f
#define SHELL_FRAMES_OUT3       50.0f
#define SHELL_FRAMES_WAIT       84.0f
#define SHELL_FRAMES_WAIT2      60.0f
#define SHELL_ITEM_EFF_Y        8.0f    // I_penguin's "eff" joint: (0, 8, 0)

// How the item moves, rebuilt in code (blue_shell has no item animations; see
// "The Blue Shell item"):
//  * coming out of a block ("out", from below; "out3", from above): I_penguin's
//    own rise and grow, its root bone's keys (BfresLibrary), normalised to end
//    at rest -- up from 15.35 units inside the block, past its place by 4.4,
//    settling by frame 46, growing from 0.68 of its size;
//  * lying idle ("wait", "wait2"): the wobble of a Koopa shell whose Koopa is
//    about to come out (ShellEnemy::vf2D8 0x603A2284): tipped by a fixed angle
//    whose direction circles round, rotation += (sin p, 0, cos p) * angle. The
//    game's is 0x0A000000 (14 degrees) at 0x1D000000 a frame (a circle in 8.8
//    frames, 0x603A53DC); this one turns at half that, slowly.
#define SHELL_ITEM_MOTION       1               // 0: the item model stays still
#define SHELL_ITEM_TREMBLE      0x0A000000u     // tip angle (a full turn is 2^32); 0 = no tremble
#define SHELL_ITEM_TREMBLE_STEP 0x0E800000u     // per frame; the game's 0x1D000000

// Crouching and ground pounding pull the player into the shell: the player is
// hidden and only the shell is drawn, standing at the player's feet
// (shell_costume.cpp), as while dashing. 0 = only the dash.
#define SHELL_HIDE_CROUCH       1
#define SHELL_HIDE_GROUND_POUND 1

// What a shell player looks like (code/framework/suits.cpp, modbase/suits.h). The
// player keeps Penguin mode underneath -- the belly slide the dash is built on
// only exists there -- but is drawn with SHELL_LOOK_MODE's body and
// SHELL_LOOK_COLORS: by default the Normal body (the Fire Flower suit's) in
// Mario's normal colours, as the Hammer Suit. The Koopa shell on the back is
// code/powerups/shell_costume.cpp. -1 keeps the Penguin Suit look.
#define SHELL_LOOK_MODE         2       // PlayerMode::Fire: its body
#define SHELL_LOOK_COLORS       ModBase::suits::cColor_Normal

// 0: a shell player cannot throw. The Penguin Suit throws iceballs
// (Player::createFireBall 0x607AABA0 throws them for modes 5 and 6), which the
// Blue Shell should not. 1 keeps the iceballs.
#define SHELL_CAN_THROW         0

// ?-blocks and bricks whose contents is this value hold a Blue Shell
// (code/framework/block_items.cpp; 21 Hammer Flower, 22 P-Acorn).
#define SHELL_BLOCK_CONTENTS    23

// The shell dash: crouch while running, as with the Penguin Suit's belly slide.
// The speed the player had when the dash began decides it (the Penguin slide's
// own cap is 4.0, and it slows down on flat ground):
//  * at least SHELL_SPEED_MID: the shell speeds up by SHELL_ACCEL a frame to
//    SHELL_SPEED, and holds it;
//  * slower: it slows by SHELL_DECEL a frame until it stops, and the player is
//    left crouching in the shell (the game ends the slide when it stops).
// A full run is about 3.0, so SHELL_SPEED_MID asks for nearly a full run; the
// small ACCEL and DECEL make both the climb to full speed and the slowdown to a
// stop take a while (from 2.6: about 45 frames to full speed; from 2.5: about
// 100 frames to a stop).
#define SHELL_SPEED             (4.0f * 1.02f)
#define SHELL_SPEED_MID         2.6f
#define SHELL_ACCEL             0.035f
#define SHELL_DECEL             0.025f

// 1: bounce off walls and keep going, like the DS shell -- also off a block the
// shell breaks (tile bricks too) or bumps on the way, rather than going
// through. 0: stop as the suit does.
#define SHELL_BOUNCE            1

// 0: the shell sinks into water. The Penguin slide skims over it: its begin
// (0x607B48A0) turns on Wii U status 180, CanWaterWalk (the status words start
// at player+0x4B0, so +0x4C4 bit 20), which its end clears; a shell player's
// is cleared every frame.
#define SHELL_WATER_WALK        0

// 1: a shell player swims like plain Mario, not like the Penguin Suit. The swim
// state picks the Penguin's strokes and speeds by the mode itself (mode == 5 in
// its execute, 0x607BD4D8 and 0x607BD6C0, and its begin), so while that state's
// begin (0x607BBF54) and execute (0x607BC590) run, the shell player's mode
// reads Super (1).
#define SHELL_SWIM_NORMAL       1

// The shell alone -- crouching, ground pounding, dashing (shell_costume.cpp) --
// and the Blue Shell item are seen from the side, not from the front: turned a
// quarter (a full turn is 2^32) about the vertical axis, the shell alone toward
// the way the player faces.
#define SHELL_SIDE_YAW          0x40000000u

// 1: bump ?-blocks and bricks that are actors (placed as sprites) on contact.
// Tile blocks are not bumped yet (see the README).
#define SHELL_BUMP_BLOCKS       1

// The shell's spin while dashing, as a kicked Koopa shell's: rotation.y +=
// direction * |speed.x| / 2.5 * 0x0C000000 a frame (ShellEnemy slide,
// 0x603A3AC8; a full turn is 2^32) -- faster the faster it goes, still when it
// stops. SHELL_SPIN is the turn a frame at speed 2.5. 0 = no spin.
#define SHELL_SPIN              0x0C000000
// The axis it spins about: 'Y' (vertical, as the game's shells) or 'Z' (rolling
// along the ground, facing the camera).
#define SHELL_SPIN_AXIS         'Y'

// =====================================================================
//
// How it works. Ledger F0205, F0212-F0216; reverse-engineering/FindingsA/player/PenguinSuit.cpp.
//
//  * The Blue Shell item is the game's Penguin Suit item (profile 596) as a new
//    profile (code/framework/actor_variant.cpp variant) wearing the Ice Flower model, so it
//    appears, moves and is collected like the Penguin Suit. Its grant gives
//    PlayerMode::Penguin (5) and marks the player as a shell player; a plain
//    Penguin Suit clears the mark.
//  * The grant only queues the mode (player+0x2C7C, sub_607A27A8); +0x528
//    changes when the transformation ends. A shell player therefore stays one
//    while either is Penguin, and stops when both are something else (damage
//    queues Big through 0x607C814C). Checking +0x528 alone dropped the mark
//    the frame after the grant, which left a plain Penguin Suit -- iceballs
//    and all (ledger F0228).
//  * Looks: code/framework/suits.cpp draws the shell player with the Fire body in
//    normal colours while the mode stays Penguin (suits::showBodyOf /
//    showColorAs), plus a Koopa shell on the back (code/powerups/
//    shell_costume.cpp). The shell is also remembered per
//    character, so the world-map player wears it too (isShellModel).
//  * Throws: code/framework/throws.cpp's throw gate (modbase/throws.h) stops a shell
//    player starting a throw at all, so no iceballs and no throw animation.
//  * The Penguin Suit's belly slide is a Player state of its own, 0x60CC4F8C
//    (Player picks it in 0x607B8CB0 when +0x528 == 5). It already defeats
//    enemies the way the suit does. While a shell player is in it, the mod
//    speeds it up to SHELL_SPEED or slows it to a stop (by the speed it began
//    with), turns it round on walls and on blocks it bumps or breaks, spins
//    the shell, bumps block actors it touches and keeps it off the water.
//  * The per-frame hook is Player::afterExecute (0x607958F0), which only the
//    Player class runs -- after the state code, every frame.
//
// Deluxe (Switch) v1.0.0 only.

#include "actors/profileid.h"
#include "actors/enemy.h"
#include "actors/stageactor.h"
#include "actors/states.h"
#include "util/math.h"
#include "modbase/log.h"
#include "modbase/models.h"
#include "modbase/name_remap.h"
#include "modbase/player_models.h"
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
inline u32& modeRef(void* p)      { return *(u32*)((u8*)p + 0x528); }
// The power-up change (its per-frame routine 0x607A293C): the controller at
// +0x2EB4 keeps its state at +0x2ED4 (1 flickering, 2 ending, 0 none) and the
// mode shown this frame at +0x2EBC, which the routine hands to setPlayerMode.
inline bool changing(void* p)     { return *(u32*)((u8*)p + 0x2ED4) != 0; }
inline u32  changeFrameMode(void* p) { return *(u32*)((u8*)p + 0x2EBC); }
inline u32  nextMode(void* p)     { return *(u32*)((u8*)p + 0x2C7C); }   // queued by the grant
inline s32  playerNo(void* p)     { return *(s8*)((u8*)p + 0x54); }
inline u32& direction(void* p)    { return *(u32*)((u8*)p + 0x50); }
inline f32& speedF(void* p)       { return *(f32*)((u8*)p + 0x58); }
inline f32& maxSpeedF(void* p)    { return *(f32*)((u8*)p + 0x5C); }
inline f32  posX(void* p)         { return *(f32*)((u8*)p + 0x6C); }
inline s32& rotationY(void* p)    { return *(s32*)((u8*)p + 0xA0); }
inline StateMgr* stateMgr(void* p){ return (StateMgr*)((u8*)p + 0x26BC); }
// The background contacts of this frame (Wii U BgCross, word 0 at +0x1AF4; the
// collision pass 0x60761474 sets them): bit 2 a wall in the way, 5 a wall
// touched on the left, 6 on the right.
inline u32  bgCross(void* p)      { return *(u32*)((u8*)p + 0x1AF4); }
constexpr u32 cBgCross_WallTouchL = 1u << 5;
constexpr u32 cBgCross_WallTouchR = 1u << 6;
// Wii U status 180, CanWaterWalk: the status words start at +0x4B0.
inline u32& statusWord5(void* p)  { return *(u32*)((u8*)p + 0x4C4); }
constexpr u32 cStatus180_CanWaterWalk = 1u << (180 - 160);

#define SHELL_ITEM_REMAP { "I_penguin", SHELL_ITEM_ARCHIVE, "I_penguin", SHELL_ITEM_MODEL }

const ModBase::NameRemap kItemRemap = SHELL_ITEM_REMAP;

// The costume (shell_costume.cpp) wears the item's own archive, "blue_shell"
// (its models shell_body and shell_belly), so the item's load covers it.
#if SHELL_CUSTOM_MODELS
MODBASE_ACTOR_VARIANT(shellItemVariant,
    ProfileId::BlueShell, 596 /* Penguin Suit item */, "BlueShell", ModBase::cVariant_None,
    { SHELL_ITEM_REMAP });
#else
MODBASE_ACTOR_VARIANT(shellItemVariant,
    ProfileId::BlueShell, 596 /* Penguin Suit item */, "BlueShell", ModBase::cVariant_None,
    { SHELL_ITEM_REMAP });
#endif

struct ShellPlayer
{
    bool  shell;        // collected a Blue Shell, still in (or becoming) Penguin mode
    void* dashing;      // the player while in the slide, for the overlap hook
    f32   lastX;
    u32   frames;       // frames into this dash
    u32   spin;         // the dash shell's angle (shell_costume.cpp)
    void* hiding;       // the player while crouching or ground pounding in the shell
    f32   speed;        // the dash's speed (no sign)
    bool  speedUp;      // began at SHELL_SPEED_MID or faster: speeds up, else slows to a stop
    bool  bumped;       // bumped (or broke) a block actor this frame
};
ShellPlayer sPlayers[4];

// Is the player's state (or the state it overrides) this one? The game asks
// the same way, by root id (StateBase vtable +8; 0x607B8CB0).
bool inState(void* player, StateBase* state)
{
    StateBase* current = stateMgr(player)->getCurrentState();
    return current && current->getRootId() == state->getRootId();
}

bool hidesInShell(void* player)
{
    return (SHELL_HIDE_CROUCH && inState(player, &Player::StateID_Crouch))
        || (SHELL_HIDE_GROUND_POUND && inState(player, &Player::StateID_HipAttack));
}

// The same, per character (modbase/player_models.h): models that belong to no
// level player -- the world map's -- are matched by character.
bool sShellCharacter[ModBase::playerModels::cNumCharacters];

void setShellCharacter(u32 n, bool on)
{
    void* model = ModBase::playerModels::modelOfPlayer(n);
    u32 c = model ? ModBase::playerModels::character(model) : ModBase::playerModels::cNumCharacters;
    if (c < ModBase::playerModels::cNumCharacters)
        sShellCharacter[c] = on;
}

// Owner tag for the colour override, so ending the shell never clears another
// mod's (a shell player who takes a Hammer Flower, say).
const void* const cLookOwner = sPlayers;

// The colour type the game gives the look's body: PlayerModel::setPlayerMode
// (0x6078E608) picks it from the shown mode, which is the forced one (2 Fire,
// 6 Ice, else Normal). So the Fire body comes with the Fire colours, and
// SHELL_LOOK_COLORS replaces them (as the Hammer Suit's override does).
constexpr ModBase::suits::ColorType cLookBodyColors =
    SHELL_LOOK_MODE == 2 ? ModBase::suits::cColor_Fire
  : SHELL_LOOK_MODE == 6 ? ModBase::suits::cColor_Ice
  :                        ModBase::suits::cColor_Normal;

void applyLook(u32 n)
{
#if SHELL_LOOK_MODE >= 0
    if (SHELL_LOOK_COLORS != cLookBodyColors)
        ModBase::suits::showColorAs(n, cLookBodyColors, SHELL_LOOK_COLORS, cLookOwner);
    if (!ModBase::suits::bodyShown(n, SHELL_LOOK_MODE))
        ModBase::suits::showBodyOf(n, SHELL_LOOK_MODE);     // also refreshes the colours
#endif
}

// The game replaced the Penguin mode outside a level (a pause-menu exit, a lost
// life; modbase/suits.h requireMode): suits already dropped the look, so only the
// flags go. No level player exists here to look the character up from.
void shellLost(u32 n, s32 character)
{
    ModBase::log("blue shell: player ", n, " lost the shell outside a level");
    sPlayers[n] = ShellPlayer();
    if (character >= 0 && character < (s32)ModBase::playerModels::cNumCharacters)
        sShellCharacter[character] = false;
}

void endShell(u32 n)
{
    ShellPlayer& s = sPlayers[n];
    if (!s.shell)
        return;
    s.shell = false;
    s.dashing = nullptr;
    setShellCharacter(n, false);
    ModBase::suits::releaseMode(n, cLookOwner);
#if SHELL_LOOK_MODE >= 0
    ModBase::suits::clear(n, cLookOwner);
    ModBase::suits::clearBody(n);                           // back to the real mode's body
#endif
}

// code/framework/throws.cpp throw gate: false stops the throw before it starts.
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
    if (s.frames == 0) {
        // The speed the player came in with decides the dash.
        f32 entry = speedF(player) < 0.0f ? -speedF(player) : speedF(player);
        s.speed = entry;
        s.speedUp = entry >= SHELL_SPEED_MID;
        s.lastX = posX(player);
    }

#if SHELL_BOUNCE
    // Turn round on a wall in the way: the frame's background contact on that
    // side, a block actor bumped or broken (doOverlap), or -- moving at speed --
    // barely having moved since the last frame.
    u32 touch = bgCross(player) & (sign > 0.0f ? cBgCross_WallTouchR : cBgCross_WallTouchL);
    f32 moved = posX(player) - s.lastX;
    bool stuck = s.frames > 2 && s.speed > 1.0f && moved < 0.25f && moved > -0.25f;
    if (s.frames > 0 && (touch || s.bumped || stuck)) {
        direction(player) ^= 1;
        sign = -sign;
    }
#endif
    s.bumped = false;
    s.lastX = posX(player);

    if (s.speedUp) {
        s.speed += SHELL_ACCEL;
        if (s.speed > SHELL_SPEED)
            s.speed = SHELL_SPEED;
    } else {
        s.speed -= SHELL_DECEL;
        if (s.speed < 0.0f)
            s.speed = 0.0f;
    }
    speedF(player) = s.speed * sign;
    maxSpeedF(player) = (s.speedUp ? SHELL_SPEED : s.speed) * sign;

#if !SHELL_WATER_WALK
    statusWord5(player) &= ~cStatus180_CanWaterWalk;   // the Penguin slide's water walk
#endif

    // The shell's own angle, as a kicked Koopa shell turns: by its speed. The
    // player is hidden while dashing and only the shell turns
    // (shell_costume.cpp), so the player's facing is left alone.
    u32 step = (u32)(s.speed / 2.5f * (f32)SHELL_SPIN);
    s.spin += sign < 0.0f ? (u32)-step : step;
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

// True when it bumped the block (the dash then turns round, even if the bump broke it).
bool bumpBlock(void* block, s32 player)
{
    void* fn = (*(void***)block)[cBlockBump / 4];
    if (fn != (void*)&BlockBase::bump && fn != (void*)&BlockAmbush::bump
        && fn != (void*)&BlockBabyYoshi::bump)
        return false;
    Bump* slot = nullptr;
    for (Bump& b : sBumps) {
        if (b.block == block) {
            if (sTick < b.until)
                return false;       // one bump per block per half second
            slot = &b;
            break;
        }
        if (!slot && (!b.block || sTick >= b.until))
            slot = &b;
    }
    if (!slot)
        return false;
    *slot = { block, sTick + 30 };
    *(s32*)((u8*)block + cBlockHitPlayer) = player;
    ((void (*)(void*))fn)(block);
    return true;
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
    // While a power-up change flickers, changeFrame (below) owns the look; the
    // shell ends once the change is over.
    if (!changing(player)) {
        if (s.shell && mode(player) != cPlayerMode_Penguin && nextMode(player) != cPlayerMode_Penguin)
            endShell(n);            // hurt, or another power-up
        if (s.shell)
            applyLook(n);           // a new level builds a new model: re-apply once
    }

    bool dashing = s.shell && stateMgr(player)->getCurrentState() == &Player::StateID_PenguinSlide;
    if (dashing) {
        s.dashing = player;
        dash(player, s);
    } else {
        s.dashing = nullptr;
        s.frames = 0;
        s.spin = 0;
    }
    s.hiding = s.shell && !dashing && hidesInShell(player) ? player : nullptr;
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
            setShellCharacter(collector, true);
            ModBase::suits::requireMode(collector, cPlayerMode_Penguin, &shellLost, cLookOwner);
            applyLook(collector);
        } else {
            endShell(collector);    // a plain Penguin Suit
        }
    }
    return granted;
}

// ActiveCollider_doOverlapMaybe (0x601597E8): runs both colliders' callbacks,
// the one place a player-side mod sees which block it touches. Owner at +0x40.
namespace ModBase { namespace shellSuit { bool playerDashing(void* actor); } }
// For the kit's block hits (modbase/stage_kit.h): a dashing shell player hits blocks as a
// kicked shell does.
bool ModBase::shellSuit::playerDashing(void* actor) { return isDashing(actor); }

// A dashing shell hits every enemy as a Star does: the enemy's own Enemy::collisionStar
// (vtable; base 0x602A5BF4) decides, so what a Star defeats -- Piranha Plants, Stingby and the
// Bee among them, which the Penguin slide underneath only bounced off -- is defeated, and what
// shrugs off a Star returns false and keeps the slide's usual contact.
namespace ModBase { namespace shellSuit { bool doOverlap(void* ac1, void* ac2); } }
bool ModBase::shellSuit::doOverlap(void* ac1, void* ac2)
{
    {
        StageActor* a1 = *(StageActor**)((u8*)ac1 + 0x40);
        StageActor* a2 = *(StageActor**)((u8*)ac2 + 0x40);
        bool d1 = isDashing(a1), d2 = isDashing(a2);
        StageActor* enemy = d1 ? a2 : a1;
        // The Angry Sun and Moon (code/sprites/sun_and_moon.cpp) are never defeated by the shell.
        bool spared = enemy && enemy->profile
            && (enemy->profile->id == ProfileId::MrSun || enemy->profile->id == ProfileId::MrMoon);
        if (d1 != d2 && enemy && enemy->type == 3 && !spared) {
            bool overlap = ModBase::shellSuit::doOverlap_orig(ac1, ac2);
            if (overlap && static_cast<Enemy*>(enemy)->collisionStar((ActiveCollider*)(d1 ? ac2 : ac1),
                                                                     (ActiveCollider*)(d1 ? ac1 : ac2)))
                return false;   // defeated: no slide contact (it would bounce off)
            return overlap;
        }
    }
#if SHELL_BUMP_BLOCKS
    sTick++;
    void* o1 = *(void**)((u8*)ac1 + 0x40);
    void* o2 = *(void**)((u8*)ac2 + 0x40);
    bool p1 = isDashing(o1), p2 = isDashing(o2);
    if (p1 != p2) {
        void* player = p1 ? o1 : o2;
        s32 n = playerNo(player);
        if (bumpBlock(p1 ? o2 : o1, n) && n >= 0 && n < 4)
            sPlayers[n].bumped = true;
    }
#endif
    return ModBase::shellSuit::doOverlap_orig(ac1, ac2);
}

// ---- The power-up change --------------------------------------------------------
//
// The change's per-frame routine (0x607A293C) flickers between the old and the
// new mode: each frame it hands one of them (+0x2EBC) to PlayerModel::setPlayerMode,
// which shows the forced body instead when there is one, with the colours of
// the mode shown. Left alone, a shell player's frames showed the Penguin body
// (the shell ended as soon as the change began) or the forced body on every
// frame. Here, after the routine: a Penguin frame gets the shell look (Mario's
// body in his own colours, with the shell), any other frame that mode's own.
namespace ModBase { namespace shellSuit { int changeFrame_orig(void* player); } }
namespace ModBase { namespace shellSuit { int changeFrame(void* player); } }
int ModBase::shellSuit::changeFrame(void* player)
{
    int r = ModBase::shellSuit::changeFrame_orig(player);
    s32 n = playerNo(player);
    if (n < 0 || n >= 4 || !sPlayers[n].shell || !changing(player))
        return r;
#if SHELL_LOOK_MODE >= 0
    // Only the body changes here, never the colours: the colour override in
    // force stays -- the shell's, or the next power-up's (a Hammer Flower sets
    // its own Fire -> Normal one at the grant, which re-applying the shell's
    // replaced, so the Fire frames then lost it and showed Fire Mario).
    if (changeFrameMode(player) == cPlayerMode_Penguin) {
        if (!ModBase::suits::bodyShown(n, SHELL_LOOK_MODE))
            ModBase::suits::showBodyOf(n, SHELL_LOOK_MODE);
    } else {
        ModBase::suits::clearBody(n);       // shows this frame's mode (+0x2EBC) again
    }
#endif
    return r;
}

// ---- Swimming ---------------------------------------------------------------------

// The shell player's mode reads Super (1) for the call: the swim state then
// takes Mario's strokes (SHELL_SWIM_NORMAL). Put back only if still 1, so a
// real mode change made meanwhile stands.
namespace {
struct SwimAsMario
{
    void* player;
    explicit SwimAsMario(void* p)
        : player(SHELL_SWIM_NORMAL && playerNo(p) >= 0 && playerNo(p) < 4 && sPlayers[playerNo(p)].shell
                 && mode(p) == cPlayerMode_Penguin ? p : nullptr)
    {
        if (player)
            modeRef(player) = 1;
    }
    ~SwimAsMario()
    {
        if (player && modeRef(player) == 1)
            modeRef(player) = cPlayerMode_Penguin;
    }
};
} // namespace

namespace ModBase { namespace shellSuit { int swimBegin_orig(void* player); } }
namespace ModBase { namespace shellSuit { int swimBegin(void* player); } }
int ModBase::shellSuit::swimBegin(void* player)
{
    SwimAsMario asMario(player);
    return ModBase::shellSuit::swimBegin_orig(player);
}

namespace ModBase { namespace shellSuit { int swimExecute_orig(void* player); } }
namespace ModBase { namespace shellSuit { int swimExecute(void* player); } }
int ModBase::shellSuit::swimExecute(void* player)
{
    SwimAsMario asMario(player);
    return ModBase::shellSuit::swimExecute_orig(player);
}

// ---- Bricks broken on the way -----------------------------------------------------
//
// A brick the dash breaks is gone before the wall contact is read, so the dash
// went on through it. The game breaks a brick -- a tile (the tile hit 0x605B9130)
// or a brick actor (BlockBase::vf178) -- in 0x605B8E44 (breaker's player number
// at info +11, the one it credits 10 points) or 0x605B9AD4 (at info +9). A
// dashing shell player who broke one turns round on the next frame (dash()).
namespace {
void brokeBrick(s32 n)
{
    if (SHELL_BOUNCE && n >= 0 && n < 4 && sPlayers[n].dashing)
        sPlayers[n].bumped = true;
}
} // namespace

namespace ModBase { namespace shellSuit { int breakBrick_orig(void* mgr, void* info, int flag); } }
namespace ModBase { namespace shellSuit { int breakBrick(void* mgr, void* info, int flag); } }
int ModBase::shellSuit::breakBrick(void* mgr, void* info, int flag)
{
    brokeBrick(*((s8*)info + 11));
    return ModBase::shellSuit::breakBrick_orig(mgr, info, flag);
}

namespace ModBase { namespace shellSuit { int breakBrickB_orig(void* mgr, void* info, int a3, int a4); } }
namespace ModBase { namespace shellSuit { int breakBrickB(void* mgr, void* info, int a3, int a4); } }
int ModBase::shellSuit::breakBrickB(void* mgr, void* info, int a3, int a4)
{
    brokeBrick(*((s8*)info + 9));
    return ModBase::shellSuit::breakBrickB_orig(mgr, info, a3, a4);
}

// ---- For code/powerups/shell_costume.cpp ------------------------------------

// Does this model show a shell player? Its character collected a Blue Shell and
// it wears the shell look's body -- in a level and on the world map alike (the
// map's model gets the body from code/framework/suits.cpp's per-character bodies).
// Not by the shown mode: PlayerModel::setPlayerMode (0x6078E608) stores the
// forced mode as the shown one, so a shell player shows SHELL_LOOK_MODE (2),
// never Penguin (5) -- checking for 5 drew nothing and never hid the dash.
namespace ModBase { namespace shellSuit { bool isShellModel(void* model); } }
bool ModBase::shellSuit::isShellModel(void* model)
{
    u32 c = ModBase::playerModels::character(model);
    if (c >= ModBase::playerModels::cNumCharacters || !sShellCharacter[c])
        return false;
#if SHELL_LOOK_MODE >= 0
    return ModBase::playerModels::forcedMode(model) == SHELL_LOOK_MODE;
#else
    return ModBase::playerModels::shownMode(model) == cPlayerMode_Penguin;
#endif
}

// The player inside the shell whose model this is -- dashing, crouching or
// ground pounding -- or nullptr, and the shell's rotation this frame: side on,
// toward the way the player faces (SHELL_SIDE_YAW), and dashing also turned by
// its spin about SHELL_SPIN_AXIS.
namespace ModBase { namespace shellSuit { void* playerInShell(void* model, Vec3i* rotation); } }
void* ModBase::shellSuit::playerInShell(void* model, Vec3i* rotation)
{
    s32 n = ModBase::playerModels::playerOf(model);
    if (n < 0)
        return nullptr;
    void* player = sPlayers[n].dashing ? sPlayers[n].dashing : sPlayers[n].hiding;
    if (!player)
        return nullptr;
    *rotation = { 0, direction(player) == 1 ? (u32)-SHELL_SIDE_YAW : SHELL_SIDE_YAW, 0 };
    if (sPlayers[n].dashing) {
        if (SHELL_SPIN_AXIS == 'Z')
            rotation->z = sPlayers[n].spin;
        else
            rotation->y += sPlayers[n].spin;
    }
    return player;
}

// ---- The Blue Shell item -------------------------------------------------------
//
// The Penguin Suit item's functions that name "I_penguin" (its vtable: the
// model at 0x6046AF20, slot 0x60BFC128; the animations, slots 0x60BFC1DC-1EC):
//
//     0x6046B260 "out"   (state 1)     0x6046B4D8 "wait2" (state 5, repeat)
//     0x6046B32C "out3"  (state 3)     0x6046B5A4 "out2"  (state 2, repeat)
//     0x6046B3F8 "wait"  (state 4, repeat; plays nothing when already in state 4)
//
// Each is the Fire Flower's twin (code/powerups/hammer_suit.cpp, "Item
// animations"): SkeletalAnim_play(anim, archive, name), rate 1, repeat, reset.
// A name blue_shell lacks does not bind and leaves the frame range as it was;
// emptied first, it stays empty and the item's states never move on (F0230).
// So the range is emptied before the play and, if the play left it empty,
// given I_penguin's length.
namespace {

inline bool isBlueShell(void* item)
{
    return ModBase::variantProfileOf(item) == ProfileId::BlueShell;
}

inline u8* itemSkelAnim(void* item)
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
inline u32  itemAnimState(void* item) { return *(u32*)((u8*)item + 0x1820); }

bool sAnimFallbackLogged;

} // namespace

#define SHELL_ITEM_ANIM_HOOK(fn, name, frames, skipState)                    \
    namespace ModBase { namespace shellItem {                                \
        int fn##_orig(void* item);                                           \
        int fn(void* item);                                                  \
    } }                                                                      \
    int ModBase::shellItem::fn(void* item)                                   \
    {                                                                        \
        if (!isBlueShell(item))                                              \
            return fn##_orig(item);                                          \
        if (itemAnimState(item) == (skipState)) {                            \
            ModBase::ScopedNameRemap remap(kItemRemap);                      \
            return fn##_orig(item);                                          \
        }                                                                    \
        u8* anim = itemSkelAnim(item);                                       \
        if (anim)                                                            \
            animEnd(anim) = animStart(anim);                                 \
        int r;                                                               \
        {                                                                    \
            ModBase::ScopedNameRemap remap(kItemRemap);                      \
            r = fn##_orig(item);                                             \
        }                                                                    \
        if (anim && animEnd(anim) == animStart(anim)) {                      \
            animStart(anim) = 0.0f;                                          \
            animEnd(anim) = animLoopEnd(anim) = (frames);                    \
            animFrame(anim) = 0.0f;                                          \
            if (!sAnimFallbackLogged) {                                      \
                sAnimFallbackLogged = true;                                  \
                ModBase::log("blue shell: item archive has no '" name        \
                             "' animation; timing it as I_penguin's");       \
            }                                                                \
        }                                                                    \
        return r;                                                            \
    }

SHELL_ITEM_ANIM_HOOK(animOut,   "out",   SHELL_FRAMES_OUT,   ~0u)
SHELL_ITEM_ANIM_HOOK(animOut3,  "out3",  SHELL_FRAMES_OUT3,  ~0u)
SHELL_ITEM_ANIM_HOOK(animWait,  "wait",  SHELL_FRAMES_WAIT,  4u)
SHELL_ITEM_ANIM_HOOK(animWait2, "wait2", SHELL_FRAMES_WAIT2, ~0u)
SHELL_ITEM_ANIM_HOOK(animOut2,  "out2",  SHELL_FRAMES_OUT2,  ~0u)

// Every item's model update (0x60462018, shared by all power-up items): matrix,
// scale, animations, then the "eff" joint's position into +0x17EC/+0x17F0/
// +0x17F4. The joint is looked up by name (Model vtable +0x54, 0x60436074,
// -1 when absent) and read unchecked (+0x6C, 0x60436028: matrices + index*64),
// so for a model without one the result is whatever precedes the matrices.
// The Blue Shell's is put where I_penguin's eff would be.
//
// It is also where the item's motion is drawn (SHELL_ITEM_MOTION): the model
// matrix comes from the item's position (+0x6C), rotation (+0x9C; none when
// +0x1839 is set) and scale (+0x90 when +0x1870 is set, else +0x18A0), so the
// rise, growth and tremble are added to those for the call and taken off after
// it -- the item's own logic and collision never see them.
namespace {

struct Key { f32 frame, value; };

// Linear between keys (the originals are cubic; at 1-frame steps the
// difference does not show).
f32 sample(const Key* keys, u32 count, f32 frame)
{
    if (frame <= keys[0].frame)
        return keys[0].value;
    for (u32 i = 1; i < count; i++)
        if (frame <= keys[i].frame) {
            f32 t = (frame - keys[i - 1].frame) / (keys[i].frame - keys[i - 1].frame);
            return keys[i - 1].value + (keys[i].value - keys[i - 1].value) * t;
        }
    return keys[count - 1].value;
}

// I_penguin "out" (49 frames), root bone, as offsets from where it comes to
// rest: translate Y less its last key (-1); scale over its last (1.171 X/Z,
// 1.094 Y).
const Key kOutY[]  = { {0, -14.351f}, {2, -11.49f}, {23, 4.382f}, {25, 4.352f}, {32, 0.699f}, {33, 0.0f},
                       {34, 0.576f}, {39, 2.594f}, {41, 2.568f}, {45, 0.672f}, {46, 0.0f}, {49, 0.0f} };
const Key kOutSX[] = { {0, 0.677f}, {10, 0.827f}, {15, 1.006f}, {26, 0.928f}, {38, 0.992f}, {46, 0.976f}, {49, 1.0f} };
const Key kOutSY[] = { {0, 0.781f}, {4, 0.965f}, {9, 0.960f}, {19, 1.004f}, {27, 1.091f}, {38, 1.011f},
                       {46, 1.027f}, {49, 1.0f} };
// I_penguin "out3" (50 frames): down from 16.545 units above; scale over its
// last (1.099 X/Z, 1.175 Y).
const Key kOut3Y[]  = { {0, 16.545f}, {50, 0.0f} };
const Key kOut3SX[] = { {0, 0.803f}, {13, 0.784f}, {50, 1.0f} };
const Key kOut3SY[] = { {0, 0.732f}, {50, 1.0f} };

#define KEYS(k) k, sizeof(k) / sizeof(k[0])

// Each item's tremble phase.
struct Tremble { void* item; u32 phase; };
Tremble sTrembles[8];
u32 sNextTremble;

u32 nextTremblePhase(void* item)
{
    for (Tremble& t : sTrembles)
        if (t.item == item)
            return t.phase += SHELL_ITEM_TREMBLE_STEP;
    sTrembles[sNextTremble] = { item, 0 };
    sNextTremble = (sNextTremble + 1) % 8;
    return 0;
}

} // namespace

namespace ModBase { namespace shellItem { int updateModel_orig(void* item); } }
namespace ModBase { namespace shellItem { int updateModel(void* item); } }
int ModBase::shellItem::updateModel(void* item)
{
    if (!SHELL_CUSTOM_MODELS || !isBlueShell(item))
        return ModBase::shellItem::updateModel_orig(item);

    StageActor* a = (StageActor*)item;
    Vec3* scale = *((u8*)item + 0x1870) ? &a->scale : (Vec3*)((u8*)item + 0x18A0);
    Vec3 savedPos = a->position, savedScale = *scale;
    Vec3i savedRot = a->rotation;

    a->rotation.y += SHELL_SIDE_YAW;        // seen from the side

#if SHELL_ITEM_MOTION
    u8* anim = itemSkelAnim(item);
    f32 frame = anim ? animFrame(anim) : 0.0f;
    switch (itemAnimState(item)) {
    case 1:     // out: up out of the block
        a->position.y += sample(KEYS(kOutY), frame) * savedScale.y;
        scale->x *= sample(KEYS(kOutSX), frame);
        scale->y *= sample(KEYS(kOutSY), frame);
        scale->z *= sample(KEYS(kOutSX), frame);
        break;
    case 3:     // out3: down out of the block
        a->position.y += sample(KEYS(kOut3Y), frame) * savedScale.y;
        scale->x *= sample(KEYS(kOut3SX), frame);
        scale->y *= sample(KEYS(kOut3SY), frame);
        scale->z *= sample(KEYS(kOut3SX), frame);
        break;
    case 4:     // wait, wait2: lying there, trembling
    case 5:
        if (SHELL_ITEM_TREMBLE) {
            f32 p = (f32)nextTremblePhase(item) * (M_2PI / 4294967296.0);
            a->rotation.x += (u32)(s32)(sin(p) * (f32)SHELL_ITEM_TREMBLE);
            a->rotation.z += (u32)(s32)(cos(p) * (f32)SHELL_ITEM_TREMBLE);
        }
        break;
    }
#endif

    int r = ModBase::shellItem::updateModel_orig(item);

    a->position = savedPos;
    *scale = savedScale;
    a->rotation = savedRot;
    *(f32*)((u8*)item + 0x17EC) = a->position.x;
    *(f32*)((u8*)item + 0x17F0) = a->position.y + SHELL_ITEM_EFF_Y * a->scale.y;
    *(f32*)((u8*)item + 0x17F4) = a->position.z;
    return r;
}
