// nsmbudx/suits.h -- give a power-up its own suit colours.
//
// How the game colours suits (ledger F0049-F0052): the Normal and Small player
// bodies carry texture-pattern animations "PB_switch" (body), "PH_switch"
// (head) and "PC_switch" (bonus cap). MarioModel::setColorType (0x6075A6E4)
// plays them and freezes them on a frame:
//
//   frame 0   Normal            frame 1   Fire (and the P-Acorn, on the Squirrel body)
//   frame 2   Ice               Propeller and Penguin have their own models
//
// So a new suit look is one more frame in those animations (an asset edit of
// the player model archive), plus code that selects it. This does the code:
//
//   nsmbudx::suits::overrideColor(playerNo, nsmbudx::suits::cColor_Fire, 3.0f);
//   nsmbudx::suits::refresh(playerNo);    // apply now, even without a mode change
//
// While an override is set, whenever the game gives that player the named
// colour type on the Normal or Small body, the frame becomes yours. Other
// colour types and bodies are untouched, so taking damage restores the vanilla
// look by itself.
//
// Until your model has the extra frame, pick an existing one (e.g. 2.0f, the
// Ice colours) to see the system working.
//
// Covers Mario and Luigi (MarioModel). Toad, Toadette and Nabbit use other
// model classes that are not mapped yet.
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

void overrideColor(u32 playerNo, ColorType when, f32 frame);
void clear(u32 playerNo);

// Re-run the player's colour selection now (after collecting an item that
// does not change the mode, for example).
void refresh(u32 playerNo);

} // namespace suits
} // namespace nsmbudx
