// nsmbudx/throws.h -- change or forbid what the player throws.
//
// The game decides a throw in two steps (ledger F0225):
//
//   Player::canThrow      0x607AA954  button pressed, and the mode can throw:
//                                     Fire (2) with < 2 fireballs out, or
//                                     Penguin (5) / Ice (6) with <= 1 iceball
//   Player::createFireBall 0x607AABA0 spawns the projectile at the "wrist_l1"
//                                     joint: a fireball for mode 2, an iceball
//                                     for modes 5 and 6 -- which is why a power
//                                     built on the Penguin Suit throws iceballs
//
// Both are hooked once, here, so any number of mods can take part without two
// hooks landing on the same address:
//
//   // No throwing at all (no animation, no projectile):
//   bool noThrow(void* player) { return !isMyPlayer(player); }
//   nsmbudx::throws::addGate(&noThrow);
//
//   // Replace the projectile (the throw animation stays the game's):
//   bool hammer(void* player, int spin, int* result) {
//       if (!isMyPlayer(player)) return false;    // not mine: next handler / vanilla
//       *result = spawnMine(player);
//       return true;
//   }
//   nsmbudx::throws::addHandler(&hammer);
//
// Register from a static constructor. Deluxe (Switch) v1.0.0 only.

#pragma once

#include "types.h"

namespace nsmbudx {
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
} // namespace nsmbudx
