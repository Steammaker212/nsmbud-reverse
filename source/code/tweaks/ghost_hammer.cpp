// ghost_hammer.cpp -- no ghost dies from the Hammer Suit.
//
// Attack 9 reaches Enemy::collisionThrowableObject (0x602A68EC), which kills. Teresa (profiles 781
// and 782) already answers with its own "return 0" and the Peepa ignores it, but a Boo Circle's
// Boos (profile 783, vtable 0x60BF5158) keep Enemy's default. Hooked here for those only, and only
// for the player's hammers (profile 759) and the poison Yoshi spits, which hits as one
// (poison_piranha.cpp); a Koopa shell still kills them as it does in the retail game.
//
// Deluxe (Switch) v1.0.0 only.

#include "actors/enemy.h"
#include "actors/profileid.h"

namespace ModBase { namespace ghostHammer {
extern u32 booCircleVtable;     // symbols/actors/tsuru_patches.sym
bool collisionThrowableObject(Enemy* self, ActiveCollider* acSelf, ActiveCollider* acOther);
bool collisionThrowableObject_orig(Enemy* self, ActiveCollider* acSelf, ActiveCollider* acOther);
} }

bool ModBase::ghostHammer::collisionThrowableObject(Enemy* self, ActiveCollider* acSelf, ActiveCollider* acOther)
{
    const u32 cProfile_Hammer = 759;    // hammer_suit.cpp

    if (*(void**)self == (void*)&booCircleVtable) {
        u32 profile = acOther->owner->getProfileId();
        if (profile == cProfile_Hammer || profile == ProfileId::PoisonPiranhaProjectile)
            return false;
    }
    return collisionThrowableObject_orig(self, acSelf, acOther);
}
