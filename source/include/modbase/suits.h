// modbase/suits.h -- give a power-up its own suit colours.
//
// How the game colours suits (ledger F0049-F0052, F0061-F0063): the player
// bodies carry texture-pattern animations ("PB_switch" body, "PH_switch" head,
// "PC_switch" Mario's bonus cap) frozen on one frame. Each player-model class
// has its own routine (virtual slot 44) that picks the frame:
//
//   MarioModel (Mario, Luigi)   frame 0 Normal, 1 Fire, 2 Ice
//   KinopioModel (Toads)        frame 3*(type-2) + 0 Normal, 1 Fire, 2 Ice
//
// Two ways to change a power-up's look:
//
//  * Borrow another colour type's look, on every character (no asset edits):
//
//      ModBase::suits::showColorAs(playerNo, ModBase::suits::cColor_Fire,
//                                  ModBase::suits::cColor_Ice);
//
//    Whenever the game gives that player the Fire colours, the model's own
//    routine draws the Ice ones instead, with the right frames for Mario,
//    Luigi or a Toad.
//
//  * A frame of your own (an asset edit: add frame 3 to the Mario and Luigi
//    switch animations), with a fallback look for the other characters:
//
//      ModBase::suits::overrideColor(playerNo, ModBase::suits::cColor_Fire, 3.0f,
//                                    ModBase::suits::cColor_Ice);
//
// Then apply it now, even without a mode change:
//
//      ModBase::suits::refresh(playerNo);
//
// Only the named colour type is affected and the model still records the type
// the game asked for, so taking damage restores the vanilla look by itself.
//
// Deluxe (Switch) v1.0.0 only.

#pragma once

#include "core/types.h"

namespace ModBase {
namespace suits {

// PlayerModel::ColorType (Wii U NSMBU-Headers; same values in Deluxe).
enum ColorType : u32
{
    cColor_Invalid = 0,
    cColor_Normal  = 1,
    cColor_Fire    = 2,
    cColor_Ice     = 3,
};

// `owner` tags an override with whoever set it (any address unique to your
// mod), so clear(playerNo, owner) only removes your own -- a player can move
// from one mod's power-up to another's before the first notices. nullptr
// clears whatever is there.

// When the player gets `when`, draw the `showAs` colours instead (every model class).
void showColorAs(u32 playerNo, ColorType when, ColorType showAs, const void* owner = nullptr);

// When the player gets `when`: Mario and Luigi on the Normal or Small body take
// `frame`; every other character (or frame < 0) takes the `elsewhere` colours,
// and cColor_Invalid there leaves them vanilla.
void overrideColor(u32 playerNo, ColorType when, f32 frame, ColorType elsewhere = cColor_Invalid,
                   const void* owner = nullptr);

void clear(u32 playerNo, const void* owner = nullptr);

// Re-run the player's colour selection now, through the model's own routine
// (after collecting an item that does not change the mode, for example).
void refresh(u32 playerNo);

// ---- Bodies -------------------------------------------------------------------
//
// The body (Normal, Small, Propeller, Penguin, Squirrel, Crown) comes from the
// mode through the table at 0x60B0C230 {1,0,0,1,2,3,0,4,4,5} (F0053), applied
// by PlayerModel::setPlayerMode (0x6078E608, non-virtual, every model class).
// That routine starts with
//
//     if (model->forcedMode (+0x1DC) != -1) mode = model->forcedMode;
//
// a field the model's constructor (0x6078C444) sets for models fixed to one
// mode and to -1 for players. Setting it shows another mode's body while the
// player keeps its real mode -- physics, states and projectiles unchanged.
// Every body is loaded for a player model (constructor mask 63), and all
// player animations are in the shared CommonAnm archive, so any body can play
// any state's animations (ledger F0226).
//
// The game's mode change then sets the colours from the *real* mode
// (0x607A293C: 2 -> Fire, 6 -> Ice, else Normal), so pair this with
// showColorAs to get another mode's colours as well.
//
//   // A Penguin-mode power that looks like Fire Mario:
//   ModBase::suits::showBodyOf(n, 2 /* Fire */);
//   ModBase::suits::showColorAs(n, cColor_Normal, cColor_Fire, &myTag);
//
// The model is rebuilt with each level (and the field with it), so call
// showBodyOf again when bodyShown() turns false.

void showBodyOf(u32 playerNo, u32 mode);
void clearBody(u32 playerNo);
bool bodyShown(u32 playerNo, u32 mode);

// ---- The mode a suit needs ----------------------------------------------------
//
// A mod's suit lives on top of a real mode (the Blue Shell on Penguin, the Hammer
// Suit on Fire), but the game also changes the mode where no level player runs:
// leaving a level from the pause menu restores the power-up the player entered
// with, and losing a life takes it. The suit's state then outlived its mode -- a
// P-Acorn player kept the shell's forced Fire body, and the next level crashed
// (bug F013; F001 the same after a death).
//
// requireMode records the real mode the player's suit needs. When the game sets
// a model of that player's character that belongs to no level player (the world
// map, the next level's player before it registers) to another mode, the suit is
// dropped: its body and the owner's colours are cleared and onLost(playerNo,
// character) runs, so the mod clears its own flags. releaseMode forgets it.
typedef void (*SuitLostFn)(u32 playerNo, s32 character);
void requireMode(u32 playerNo, u32 mode, SuitLostFn onLost, const void* owner);
void releaseMode(u32 playerNo, const void* owner);

} // namespace suits
} // namespace ModBase
