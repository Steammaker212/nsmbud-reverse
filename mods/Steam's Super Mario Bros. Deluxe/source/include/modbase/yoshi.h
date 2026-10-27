// modbase/yoshi.h -- Yoshi's mouth, fruit and breath from mod code.
//
//   // Every enemy Yoshi eats becomes fire breath (ice: YoshiFireIce):
//   ModBase::yoshi::setBreathFromEnemies(yoshi::EatType::YoshiFire);
//
//   // Make one actor (an enemy you spawned, a variant) give ice breath:
//   ModBase::yoshi::setEatType(actor, yoshi::EatType::YoshiFireIce);
//
// How it works: an eaten actor's EatData type (actor+0x26C -> +0x10) decides
// what Yoshi does with it when the tongue comes back. YoshiFire/YoshiFireIce
// are replaced by a YoshiFlame (profile 478) he spits. Enemy fireballs are
// already YoshiFire; the breath option rewrites ordinary enemies' type at that
// moment. Data in game/yoshi.h; the code in readable/player/Yoshi.cpp.
//
// Deluxe (Switch) v1.0.0 only.

#pragma once

#include "game/yoshi.h"

namespace ModBase {
namespace yoshi {

bool isYoshi(const void* actor);

// The actor in Yoshi's mouth, or null.
void* mouthActor(const void* yoshi);

// Fruits eaten towards the next egg (0..5).
s32 fruitCount(const void* yoshi);

// The EatData of any actor, or null if it cannot be eaten.
::yoshi::EatData* eatData(void* actor);
bool setEatType(void* actor, ::yoshi::EatType type);

// Ordinary enemies (kind Enemy, type Eat) Yoshi catches become this breath.
// EatType::None (the default) leaves them alone.
void setBreathFromEnemies(::yoshi::EatType breath);

} // namespace yoshi
} // namespace ModBase
