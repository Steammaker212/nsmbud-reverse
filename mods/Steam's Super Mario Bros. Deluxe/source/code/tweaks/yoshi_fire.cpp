// yoshi_fire.cpp -- every enemy Yoshi eats becomes fire (or ice) breath.
//
// =====================================================================
//  CONFIGURATION
// =====================================================================

// yoshi::EatType::YoshiFire     spit fireballs (what enemy fireballs give)
// yoshi::EatType::YoshiFireIce  spit ice
#define YOSHI_BREATH    yoshi::EatType::YoshiFire

// =====================================================================
//
// Yoshi decides what to do with a catch from its EatData type when the tongue
// comes back (0x607D0A4C). framework/yoshi rewrites ordinary enemies' type to
// the breath at that moment; the game then swaps the enemy for a YoshiFlame
// (profile 478) in his mouth, exactly as it does for an eaten fireball. Fruit,
// coins and items are not enemies and are eaten as usual. Koopa shells count
// as enemies here: they become breath too. Ledger F0082-F0083.
//
// Deluxe (Switch) v1.0.0 only.

#include "modbase/yoshi.h"

namespace {

struct Setup
{
    Setup() { ModBase::yoshi::setBreathFromEnemies(YOSHI_BREATH); }
} sSetup;

} // namespace
