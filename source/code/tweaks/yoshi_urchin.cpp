// yoshi_urchin.cpp -- Yoshi can bounce on Urchins (Tsuru's collisionconditions) and off the
// Spike Top Bee's spikes.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/collisionconditions.cpp
// (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). Tsuru replaces the Urchin's
// vtable entry for Enemy::collisionYoshi with:
//     if (!processCollision(acSelf, acOther, 1)) Enemy::collisionYoshi(acSelf, acOther);
// sweet-dx cannot write a code address into the game's vtable (its entries are relocated at
// load), so Enemy::collisionYoshi (0x602A2D78) itself is hooked and does this only for an actor
// whose vtable is the Urchin's (0x60BF70EC, built by 0x603C72A0 for the Urchin and the big
// Urchin, profile 386). Both vtables hold Enemy::collisionYoshi at +0x10C.
//
// processCollision's third argument 1 is the Yoshi case (0x602A2E28: a stomp plays
// SE_EMY_YOSHI_STEP); it returns 0 when Yoshi did not land on top, and then the Urchin hurts
// him as before.
//
// The Spike Top Bee (sprite 735) is a Cheep Cheep, whose vtable also holds Enemy::collisionYoshi:
// the same bounce, and the stomp no longer reaches the code that would kill it.

#include "actors/enemy.h"
#include "actors/profileid.h"
#include "modbase/actor_variant.h"

namespace ModBase { namespace urchin {
extern u32 vtable;      // symbols/actors/tsuru_patches.sym
void collisionYoshi(Enemy* self, ActiveCollider* acSelf, ActiveCollider* acOther);
void collisionYoshi_orig(Enemy* self, ActiveCollider* acSelf, ActiveCollider* acOther);
} }

void ModBase::urchin::collisionYoshi(Enemy* self, ActiveCollider* acSelf, ActiveCollider* acOther)
{
    bool bounces = *(void**)self == (void*)&vtable || ModBase::variantProfileOf(self) == ProfileId::Bee;
    if (bounces && self->processCollision(acSelf, acOther, 1))
        return;
    collisionYoshi_orig(self, acSelf, acOther);
}
