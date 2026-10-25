// game/player.h -- power-up modes, the per-mode tables, and the player model.
//
// codedx style; every value here is in data/findings/ledger.csv F0049-F0055.
// The enums are Wii U NSMBU-Headers' (PlayerEnum.h, PlayerModel.h); Deluxe
// appends the Super Crown as mode 9 and body 5, and every table was read out
// of the Deluxe binary.
//
// Deluxe (Switch) v1.0.0 only.

#pragma once

#include "types.h"

// Player +0x528 (current), +0x2C78 (previous), +0x2C7C (next).
enum class PlayerMode : u32
{
    Small = 0, Big, Fire, Mini, Propeller, Penguin, Ice, Acorn, PAcorn,
    Crown,          // Deluxe: Toadette/Peachette
    Num,            // 10: every per-mode table below ends here
};

// PlayerModel body models (MarioModel::setColorType switches on these).
enum class PlayerBody : u32
{
    Normal = 0, Small, Propeller, Penguin, Squirrel,
    Peachette,      // Deluxe: the Crown body
};

// The per-mode tables (RVAs; each has exactly 10 entries, so a mode 10 reads
// whatever follows: body 165, height 0.0 -- which is why a brand-new mode
// needs relocated tables, and why recolouring an existing suit is simpler).
//
//   0xB0C230  body        { 1, 0, 0, 1, 2, 3, 0, 4, 4, 5 }       = Wii U cPlayerModelData + Crown
//   0xB0C300  size class  { 1, 2, 2, 0, 2, 2, 2, 2, 2, 2 }       0 mini, 1 small, 2 big
//                         (Player_modeToGroupIndex 0x60796A60, no bounds check)
//   0xB0C2BC  height      { 16, 31, 31, 6, 31, 31, 31, 31, 31, 31 }
//   0xB0C34C  balloon y   { 0, -4, -4, 4, -5, -2, -4, -4, -4, 0 }

// PlayerModel::ColorType: which frame of the suit's colour switch animation.
enum class PlayerColor : u32
{
    Invalid = 0, Normal, Fire, Ice,
};

// MarioModel (Mario and Luigi), fields read from setColorType 0x6075A6E4.
struct MarioModelFields
{
    // +0x010  model resource           +0x018  body ModelWrapper*
    // +0x0A4  type (1 = Luigi)         +0x124  head ModelWrapper* (may be null)
    // +0x12C  PlayerBody               +0x1D8  PlayerMode
    // +0x1E0  PlayerColor (current)    +0x224  bonus cap ModelWrapper*
};

// Where to find things on the player.
//   player+0x288 -> model manager; manager+4 -> PlayerModel* (createFireBall
//                   asks it for the "wrist_l1" joint)
//   player+0x528 -> PlayerMode
//   player+0x2C7C-> next mode (sub_607A27A8 writes it; any mode accepted)
//   player+0x2F10-> facing index used for projectiles
//   PlayerMgr::instance (0x60CC436C) +0x30 -> Player*[4]
