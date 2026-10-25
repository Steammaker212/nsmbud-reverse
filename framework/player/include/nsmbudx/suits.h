// nsmbudx/suits.h -- give a power-up its own suit colours.
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
//      nsmbudx::suits::showColorAs(playerNo, nsmbudx::suits::cColor_Fire,
//                                  nsmbudx::suits::cColor_Ice);
//
//    Whenever the game gives that player the Fire colours, the model's own
//    routine draws the Ice ones instead, with the right frames for Mario,
//    Luigi or a Toad.
//
//  * A frame of your own (an asset edit: add frame 3 to the Mario and Luigi
//    switch animations), with a fallback look for the other characters:
//
//      nsmbudx::suits::overrideColor(playerNo, nsmbudx::suits::cColor_Fire, 3.0f,
//                                    nsmbudx::suits::cColor_Ice);
//
// Then apply it now, even without a mode change:
//
//      nsmbudx::suits::refresh(playerNo);
//
// Only the named colour type is affected and the model still records the type
// the game asked for, so taking damage restores the vanilla look by itself.
//
// Deluxe (Switch) v1.0.0 only.

#pragma once

#include "types.h"

namespace nsmbudx {
namespace suits {

// PlayerModel::ColorType (Wii U NSMBU-Headers; same values in Deluxe).
enum ColorType : u32
{
    cColor_Invalid = 0,
    cColor_Normal  = 1,
    cColor_Fire    = 2,
    cColor_Ice     = 3,
};

// When the player gets `when`, draw the `showAs` colours instead (every model class).
void showColorAs(u32 playerNo, ColorType when, ColorType showAs);

// When the player gets `when`: Mario and Luigi on the Normal or Small body take
// `frame`; every other character (or frame < 0) takes the `elsewhere` colours,
// and cColor_Invalid there leaves them vanilla.
void overrideColor(u32 playerNo, ColorType when, f32 frame, ColorType elsewhere = cColor_Invalid);

void clear(u32 playerNo);

// Re-run the player's colour selection now, through the model's own routine
// (after collecting an item that does not change the mode, for example).
void refresh(u32 playerNo);

} // namespace suits
} // namespace nsmbudx
