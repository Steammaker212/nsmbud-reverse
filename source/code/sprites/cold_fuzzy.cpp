// cold_fuzzy.cpp -- the Cold Fuzzy (sprite 740): a Fuzzy that freezes players.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/coldfuzzy.cpp
// (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). This is the
// reference port of the Tsuru porting kit: diff it against the Tsuru file to
// see every kind of change a port makes (docs/TSURU_PORTING.md).
//
// Settings: movement ID (nybble 22) links it to a path controller, as Tsuru's
// does (movement type 3, MovementHandler::link).

#include "actors/enemy.h"
#include "graphics/effect.h"
#include "actors/movementhandler.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "modbase/tsuru.h"
#include "modbase/yoshi.h"
#include "modbase/tumble_death.h"

class ColdFuzzy : public Enemy
{
public:
    ColdFuzzy(const ActorBuildInfo* buildInfo);
    static Actor* build(const ActorBuildInfo* buildInfo);

    u32 onCreate() override;
    u32 onExecute() override;
    u32 onDraw() override;

    void collisionPlayer(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    void collisionYoshi(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionGroundPound(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionStar(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionSlide(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionPenguinSlide(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionGroundPoundYoshi(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionPropellerDrill(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionThrowableObject(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionFireball(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionIceball(ActiveCollider* acSelf, ActiveCollider* acOther) override;
    bool collisionFireballYoshi(ActiveCollider* acSelf, ActiveCollider* acOther) override;

    // Enemy's own death states (a POW): its position follows the path, so they tumble it too.
    void beginState_DieFumi() override;
    void executeState_DieFumi() override;
    void endState_DieFumi() override;
    void beginState_DieFall() override;
    void executeState_DieFall() override;
    void endState_DieFall() override;

    static const ActiveCollider::Info collisionInfo;

    ModelWrapper* model;
    ::yoshi::EatData eatData;
    MovementHandler movementHandler;
    ModBase::TumbleDeath tumble;
};

const Profile coldFuzzyProfile(&ColdFuzzy::build, ProfileId::ColdFuzzy, "ColdFuzzy", nullptr, 0);
PROFILE_RESOURCES(ProfileId::ColdFuzzy, "coldobon");

// Same fields as Tsuru's HitboxCollider::Info: centre, half size, shape
// (0 rectangle), kind, attack, vs-kind mask, damage mask, 0, callback. Tsuru's
// kind is 5; Deluxe's enemies are kind 3 (the Goomba's info 0x60BED0A4), and
// the player's hammer (kind 3, vs-kind 0x824F: info 0x60BD31F0) only meets
// kinds 0-3, 6, 9 and 15 -- as kind 5 the Cold Fuzzy never met a hammer.
const ActiveCollider::Info ColdFuzzy::collisionInfo = {
    {0.0f, 0.0f}, {12.0f, 12.0f}, 0, 3, 0, 0x824F, 0xFFFBFFFF, 0, &Enemy::collisionCallback
};

ColdFuzzy::ColdFuzzy(const ActorBuildInfo* buildInfo)
    : Enemy(buildInfo)
    , model(nullptr)
    , movementHandler()
{ }

Actor* ColdFuzzy::build(const ActorBuildInfo* buildInfo)
{
    return new ColdFuzzy(buildInfo);
}

u32 ColdFuzzy::onCreate()
{
    model = tsuru::createModel("coldobon", "coldobon", 1);
    if (!model) {               // romfs/Model/coldobon missing: leave rather than crash
        isDeleted = true;
        return 1;
    }
    tsuru::playSklAnim(model, "run", true);

    aCollider.init(this, &collisionInfo, 0);
    addActiveColliders();
    ModBase::yoshi::makeEdible(this, &eatData);     // bug F016

    u32 movementMask = movementHandler.getMaskForMovementType(MovementHandler::MovementPath);
    movementHandler.link(position, movementMask, movementId);
    return onExecute();
}

u32 ColdFuzzy::onExecute()
{
    tsuru::placeModel(model, this);

    if (tumble.execute(this))
        return 1;

    // Being eaten: Enemy's eat states run and Yoshi moves it (modbase/yoshi.h). The Fuzzy has no
    // other state, so they only run now.
    if (ModBase::yoshi::beingEaten(eatData)) {
        states.execute();
        return 1;
    }

    movementHandler.execute();
    position = movementHandler.position;
    return 1;
}

u32 ColdFuzzy::onDraw()
{
    tsuru::drawModel(model);
    return 1;
}

void ColdFuzzy::collisionPlayer(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    tsuru::damagePlayer(acOther->owner, acSelf->owner, tsuru::DamageType::Ice);
}

// Yoshi bounces off it, and neither he nor the rider freezes: a plain hit from the side, as the
// retail Fuzzy (0x60277C98). The freeze is collisionPlayer's, for players on foot.
void ColdFuzzy::collisionYoshi(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    tsuru::yoshiBounce(this, acSelf, acOther);
}

bool ColdFuzzy::collisionStar(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    tumble.begin(this);
    return true;
}

void ColdFuzzy::beginState_DieFumi()
{
    Enemy::beginState_DieFumi();    // score, colliders off
    tumble.begin(this);
}
void ColdFuzzy::executeState_DieFumi() { }
void ColdFuzzy::endState_DieFumi() { }

void ColdFuzzy::beginState_DieFall() { beginState_DieFumi(); }
void ColdFuzzy::executeState_DieFall() { }
void ColdFuzzy::endState_DieFall() { }

bool ColdFuzzy::collisionFireball(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    acOther->owner->isDeleted = true;
    return collisionStar(acSelf, acOther);
}

bool ColdFuzzy::collisionIceball(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    acOther->owner->isDeleted = true;
    return true;
}

bool ColdFuzzy::collisionGroundPoundYoshi(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    return false;       // falls through to collisionYoshi
}

bool ColdFuzzy::collisionGroundPound(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    collisionPlayer(acSelf, acOther);
    return true;
}

bool ColdFuzzy::collisionPropellerDrill(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    collisionPlayer(acSelf, acOther);
    return true;
}

bool ColdFuzzy::collisionSlide(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    collisionPlayer(acSelf, acOther);
    return true;
}

bool ColdFuzzy::collisionPenguinSlide(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    collisionPlayer(acSelf, acOther);
    return true;
}

bool ColdFuzzy::collisionThrowableObject(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    collisionStar(acSelf, acOther);
    return true;
}

bool ColdFuzzy::collisionFireballYoshi(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    collisionStar(acSelf, acOther);
    return true;
}
