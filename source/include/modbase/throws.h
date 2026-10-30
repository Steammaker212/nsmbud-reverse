// modbase/throws.h -- change or forbid what the player throws.
//
// The game decides a throw in two steps (ledger F0225):
//
//   the test              button pressed, and the mode can throw: Fire (2)
//                         with < 2 fireballs out, or Penguin (5) / Ice (6)
//                         with <= 1 iceball. Player::canThrow (0x607AA954) is
//                         this test, but the ordinary throw (0x607AAA00) and
//                         the Throw state's throw-again (0x607AAF80) carry
//                         their own copies of it, and those start the throw
//                         animation
//   Player::createFireBall 0x607AABA0 spawns the projectile at the "wrist_l1"
//                                     joint: a fireball for mode 2, an iceball
//                                     for modes 5 and 6 -- which is why a power
//                                     built on the Penguin Suit throws iceballs
//
// All four are hooked once, here (code/framework/throws.cpp), so any number of
// mods can take part without two hooks landing on the same address. A gate is
// asked at every one of them, before any animation starts:
//
//   // No throwing at all (no animation, no projectile):
//   bool noThrow(void* player) { return !isMyPlayer(player); }
//   ModBase::throws::addGate(&noThrow);
//
//   // Replace the projectile (the throw animation stays the game's):
//   bool hammer(void* player, int spin, int* result) {
//       if (!isMyPlayer(player)) return false;    // not mine: next handler / vanilla
//       *result = spawnMine(player);
//       return true;
//   }
//   ModBase::throws::addHandler(&hammer);
//
// Register from a static constructor. Deluxe (Switch) v1.0.0 only.

#pragma once

#include "core/types.h"

namespace ModBase {
namespace throws {

constexpr u32 cMaxGates = 4;
constexpr u32 cMaxHandlers = 4;

// Return false to forbid starting a throw. Every gate must allow it.
typedef bool (*Gate)(void* player);

// Return true if you handled the throw; *result is what createFireBall
// returns to the game. The first handler that returns true wins. A handler
// that wants no projectile at all returns true with *result = 0.
typedef bool (*Handler)(void* player, int spin, int* result);

bool addGate(Gate gate);
bool addHandler(Handler handler);

} // namespace throws
} // namespace ModBase
