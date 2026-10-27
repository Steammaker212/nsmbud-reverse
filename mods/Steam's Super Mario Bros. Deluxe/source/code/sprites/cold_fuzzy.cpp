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

// Tsuru RP_Jugemu_CloudDisapp (effectid.h): the Wii U number is the Deluxe one
// (ledger F0254).
constexpr s32 cEffect_CloudDisappear = 0x15B;

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

    static const ActiveCollider::Info collisionInfo;

    ModelWrapper* model;
    MovementHandler movementHandler;
};

const Profile coldFuzzyProfile(&ColdFuzzy::build, ProfileId::ColdFuzzy, "ColdFuzzy", nullptr, 0);
PROFILE_RESOURCES(ProfileId::ColdFuzzy, "coldobon");

// Same fields as Tsuru's HitboxCollider::Info: centre, half size, shape
// (0 rectangle), then 5, 0, 0x824F, 0xFFFBFFFF, 0, callback.
const ActiveCollider::Info ColdFuzzy::collisionInfo = {
    {0.0f, 0.0f}, {12.0f, 12.0f}, 0, 5, 0, 0x824F, 0xFFFBFFFF, 0, &Enemy::collisionCallback
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

    u32 movementMask = movementHandler.getMaskForMovementType(MovementHandler::MovementPath);
    movementHandler.link(position, movementMask, movementId);
    return onExecute();
}

u32 ColdFuzzy::onExecute()
{
    tsuru::placeModel(model, this);

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

void ColdFuzzy::collisionYoshi(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    collisionPlayer(acSelf, acOther);
}

bool ColdFuzzy::collisionStar(ActiveCollider* acSelf, ActiveCollider* acOther)
{
    Vec3 effectPos(position.x, position.y, 4500.0f);
    Effect::spawn(cEffect_CloudDisappear, &effectPos, nullptr, &scale);
    isDeleted = true;
    return true;
}

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
    collisionPlayer(acSelf, acOther);
    return true;
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
