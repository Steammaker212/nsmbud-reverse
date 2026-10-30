// upward_throw.cpp -- hold Up to throw fireballs and iceballs upward (Tsuru's misc
// "Player projectile upwards throw").
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// After Tsuru's src/misc.S IsPlayerUp / PlayerProjectileSpeed and src/misc.cpp
// setProjectileSpeed (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0): Tsuru marks
// the projectile's build info when Up is held at the throw, and the projectile's onCreate then
// sets speed.y = 5.
//
// On Deluxe Player::createFireBall (0x607AABA0) builds the projectile with createLater (ledger
// F0015), so its onCreate runs after the throw. Here FireballBase_onCreate (0x60135BD8, shared by
// four projectile classes) is extended: for the player's fireball (profile 476) and iceball (474)
// it reads the thrower (settings1 & 0xF, the player number createFireBall packs) and, if that
// player holds Up, sends it up at Tsuru's speed. Up is bit 4 of the held-buttons byte of the
// player's input (+0x2B0, +0x8): 0x60786738 reads it, the bit Tsuru reads on the Wii U.

#include "actors/stageactor.h"
#include "modbase/game/player/player.h"

namespace ModBase { namespace upwardThrow {
int onCreate(StageActor* projectile);
int onCreate_orig(StageActor* projectile);
} }

int ModBase::upwardThrow::onCreate(StageActor* projectile)
{
    int r = onCreate_orig(projectile);
    s32 profile = projectile->getProfileId();
    if ((profile != 474 && profile != 476) || !PlayerMgr::instance)
        return r;
    u32 playerNo = projectile->settings1 & 0xF;
    if (playerNo >= 4)
        return r;
    u8* player = ((u8**)((u8*)PlayerMgr::instance + 0x30))[playerNo];
    if (player && (player[0x2B0 + 0x8] >> 4 & 1))      // Up held
        projectile->speed.y = 5.0f;
    return r;
}
