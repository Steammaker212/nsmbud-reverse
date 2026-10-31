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
// moment. Data in game/yoshi.h; the code in reverse-engineering/FindingsA/player/Yoshi.cpp.
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

// Makes an enemy Yoshi can eat. The tongue's target check (0x607D1A3C) only takes actors whose
// +0x26C points at an EatData in state None; retail enemies embed one and point it in their
// create code, and an actor without one is passed through. Build `eat`, a member of the enemy,
// with this in onCreate. The tongue then enters Enemy's EatIn state (0x602A8584), so the enemy
// must run states.execute(), and Yoshi moves it himself (EatData::eatMove writes its position):
// while beingEaten(), an enemy must not move itself.
void makeEdible(void* enemy, ::yoshi::EatData* eat);
inline bool beingEaten(const ::yoshi::EatData& eat) { return eat.state != ::yoshi::EatState::None; }

// The tongue no longer takes this actor (its target check reads the same pointer).
inline void makeInedible(void* enemy) { *(::yoshi::EatData**)((u8*)enemy + ::yoshi::cActorEatDataOffset) = nullptr; }

// Yoshi dies as when he is crushed. His rider gets off first, as on a hit, and lives.
void kill(void* yoshi);

// Ordinary enemies (kind Enemy, type Eat) Yoshi catches become this breath.
// EatType::None (the default) leaves them alone.
void setBreathFromEnemies(::yoshi::EatType breath);

} // namespace yoshi
} // namespace ModBase
