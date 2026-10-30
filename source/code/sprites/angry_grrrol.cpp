// angry_grrrol.cpp -- the Angry Grrrol (sprite 743): a spiked wheel that rolls
// after the nearest player.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/angrygrrrol.cpp
// (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). Same behaviour;
// the differences are the porting kit's renames (docs/TSURU_PORTING.md).
//
// Settings:
//   nybble 3      top speed: 0.25 * (n + 1) units a frame (eventId1 >> 4)
//
// Model: guruguru (Tsuru's archive), with the texture-SRT anim "guruguru".
// Only a Star hurts it; fireballs and iceballs vanish on it.

#include "actors/enemy.h"
#include "graphics/effect.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "modbase/tsuru.h"

// The puff a Star-broken Grrrol leaves (cold_fuzzy.cpp uses the same).
constexpr s32 cEffect_CloudDisappear = 0x15B;

// Tsuru's PhysicsActor falls at the game's standard rate; Deluxe's starts at 0.
#define ANGRYGRRROL_GRAVITY     -0.1875f
#define ANGRYGRRROL_FALL_SPEED  -4.0f

class AngryGrrrol : public Enemy
{
public:
    AngryGrrrol(const ActorBuildInfo* buildInfo);
    static Actor* build(const ActorBuildInfo* buildInfo);

    u32 onCreate() override;
    u32 beforeExecute() override;
    u32 onExecute() override;
    u32 onDraw() override;

    void damageFromUnder() override;
    void vf15C() override;

    void breakApart();

    bool collisionFireball(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionStar(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionHammer(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionThrowableObject(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionPropellerDrill(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionGroundPound(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionIceball(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionSlide(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionGroundPoundYoshi(ActiveCollider* acSelf, ActiveCollider* acOther) override;

    static const ActiveCollider::Info collisionInfo;

    ModelWrapper* model;
};

const Profile angryGrrrolProfile(&AngryGrrrol::build, ProfileId::AngryGrrrol, "AngryGrrrol", nullptr, 0);
PROFILE_RESOURCES(ProfileId::AngryGrrrol, "guruguru");

// Tsuru's info as is: kind 3 already, damage mask 0xE (fireball, iceball, Star).
const ActiveCollider::Info AngryGrrrol::collisionInfo = {
    {0.0f, 0.0f}, {16.0f, 16.0f}, 0, 3, 9, 0x24F, 0xE, 0x1000, &Enemy::collisionCallback
};

const CollisionMgr::Sensor cGrrrolBelow = { -8.0f, 8.0f, -16.0f };
const CollisionMgr::Sensor cGrrrolSides = { -8.0f, 8.0f,  16.0f };
const CollisionMgr::Sensor cGrrrolAbove = { -8.0f, 8.0f,  16.0f };

AngryGrrrol::AngryGrrrol(const ActorBuildInfo* buildInfo)
    : Enemy(buildInfo)
    , model(nullptr)
{ }

Actor* AngryGrrrol::build(const ActorBuildInfo* buildInfo)
{
    return new AngryGrrrol(buildInfo);
}

u32 AngryGrrrol::onCreate()
{
    model = tsuru::createModel("guruguru", "guruguru", 0, 0, 1);
    if (!model) {
        isDeleted = true;
        return 1;
    }
    tsuru::playTexSrtAnim(model, "guruguru");

    collisionMgr.init(this, &cGrrrolBelow, &cGrrrolAbove, &cGrrrolSides);
    tsuru::gravity(this) = ANGRYGRRROL_GRAVITY;
    maxSpeed.y = ANGRYGRRROL_FALL_SPEED;

    aCollider.init(this, &collisionInfo, 0);
    addActiveColliders();

    return onExecute();
}

u32 AngryGrrrol::onExecute()
{
    tsuru::placeModel(model, this);

    Vec2 d2p = tsuru::distanceToPlayer(this);

    speed.x += d2p.x * 0.00025f;

    const f32 maximum = 0.25f * ((eventId1 >> 0x4 & 0xF) + 1);     // nybble 3

    if (d2p.x > 0.0f && speed.x > maximum)
        speed.x = maximum;
    else if (d2p.x < 0.0f && speed.x < -maximum)
        speed.x = -maximum;

    rotation.z -= tsuru::deg2idx(2.0f * speed.x);

    collisionMgr.process();
    handleGravity();
    handleSpeed();

    if (collisionMgr.isOnGround())
        speed.y = 0.0f;

    return 1;
}

u32 AngryGrrrol::onDraw()
{
    tsuru::drawModel(model);
    return 1;
}

bool AngryGrrrol::collisionFireball(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    acOther->owner->isDeleted = true;
    return true;
}

// How it dies, whatever killed it: a puff, then gone.
//
// Enemy's deaths all go through 0x602A852C: a death record at +0x17D8 and the pending flag
// _17F8. The next Enemy::beforeExecute (0x602A1BC8) consumes the flag, marks the actor dead
// and enters the death state -- which this actor never runs (onExecute has no state machine),
// so it stayed where it was (bug F007). Catching the flag first ends every death here.
void AngryGrrrol::breakApart()
{
    Vec3 effectPos(position.x, position.y, 4500.0f);
    Effect::spawn(cEffect_CloudDisappear, &effectPos, nullptr, &scale);
    tsuru::playSound("SE_EMY_DOWN", position);
    isDeleted = true;
}

u32 AngryGrrrol::beforeExecute()
{
    if (_17F8) {
        _17F8 = 0;
        breakApart();
    }
    return Enemy::beforeExecute();
}

// Only a Star and a POW can break it.
bool AngryGrrrol::collisionStar(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    breakApart();
    return true;
}

// The POW: Enemy::beforeExecute calls this for an enemy on the ground (0x602A71D8 is the kill).
void AngryGrrrol::vf15C()
{
    breakApart();
}

// The player's hammers are attack 9, as a thrown shell (hammer_suit.cpp), so both arrive here:
// Enemy::vfE8 and vf100 (0x602A2674, 0x602A2B8C) call this with no damage-mask check.
bool AngryGrrrol::collisionThrowableObject(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    return true;
}

// Yoshi's hammer (attack 19).
bool AngryGrrrol::collisionHammer(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    return true;
}

// A block hit from below does nothing.
void AngryGrrrol::damageFromUnder() { }

bool AngryGrrrol::collisionPropellerDrill(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    tsuru::enemyDamagePlayer(this, acSelf, acOther);
    return true;
}

bool AngryGrrrol::collisionGroundPound(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    tsuru::enemyDamagePlayer(this, acSelf, acOther);
    return true;
}

bool AngryGrrrol::collisionIceball(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    acOther->owner->isDeleted = true;
    return true;
}

bool AngryGrrrol::collisionSlide(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    tsuru::enemyDamagePlayer(this, acSelf, acOther);
    return true;
}

bool AngryGrrrol::collisionGroundPoundYoshi(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    tsuru::enemyDamagePlayer(this, acSelf, acOther);
    return true;
}
