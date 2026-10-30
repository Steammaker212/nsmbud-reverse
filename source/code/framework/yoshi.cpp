// yoshi.cpp -- see modbase/yoshi.h.

#include "modbase/yoshi.h"
#include "modbase/game.h"
#include "actors/actormgr.h"

namespace {

::yoshi::EatType sBreath = ::yoshi::EatType::None;

inline u8 kindOf(const void* actor)
{
    return *((const u8*)actor + ::yoshi::cActorKindOffset);
}

} // namespace

namespace ModBase { namespace yoshi { void* tongueCaught_orig(void* yoshi); } }

namespace ModBase { namespace yoshi { void* tongueCaught(void* yoshi); } }
void* ModBase::yoshi::tongueCaught(void* yoshi)
{
    if (sBreath != ::yoshi::EatType::None) {
        void* catchActor = ModBase::yoshi::mouthActor(yoshi);
        ::yoshi::EatData* eat = catchActor ? ModBase::yoshi::eatData(catchActor) : nullptr;
        if (eat && kindOf(catchActor) == (u8)::yoshi::ActorKind::Enemy && eat->type == ::yoshi::EatType::Eat)
            eat->type = sBreath;
    }
    return ModBase::yoshi::tongueCaught_orig(yoshi);
}

namespace ModBase {
namespace yoshi {

bool isYoshi(const void* actor)
{
    return actor && kindOf(actor) == (u8)::yoshi::ActorKind::Yoshi;
}

void* mouthActor(const void* yoshi)
{
    if (!isYoshi(yoshi) || !ActorMgr::instance)
        return nullptr;
    u32 id = *(const u32*)((const u8*)yoshi + ::yoshi::YoshiField::mouthActorId);
    if (!id)
        return nullptr;
    // ActorMgr +0x6A20 is the id table the game's own lookups use (0x607D0A4C).
    return (void*)((ActorMgrRelated*)((s32)ActorMgr::instance + 0x6A20))->getById(id);
}

s32 fruitCount(const void* yoshi)
{
    return isYoshi(yoshi) ? *(const s32*)((const u8*)yoshi + ::yoshi::YoshiField::fruitCount) : 0;
}

::yoshi::EatData* eatData(void* actor)
{
    return actor ? *(::yoshi::EatData**)((u8*)actor + ::yoshi::cActorEatDataOffset) : nullptr;
}

bool setEatType(void* actor, ::yoshi::EatType type)
{
    ::yoshi::EatData* eat = eatData(actor);
    if (!eat)
        return false;
    eat->type = type;
    return true;
}

// The enemy EatData ctor (0x602A8564, what the Fuzzy's ctor calls): vtable 0x60BE2BB8, owner id,
// type 3 (the Goomba's), scale 1.
void constructEnemyEatData(void* eat, u32 actorId);

void makeEdible(void* enemy, ::yoshi::EatData* eat)
{
    u8* a = (u8*)enemy;
    constructEnemyEatData(eat, *(u32*)(a + 8));         // Actor::id
    const f32* scale = (const f32*)(a + 0x90);          // StageActor::scale, restored on a spit
    eat->scale[0] = scale[0];
    eat->scale[1] = scale[1];
    eat->scale[2] = scale[2];
    *(::yoshi::EatData**)(a + ::yoshi::cActorEatDataOffset) = eat;
}

void setBreathFromEnemies(::yoshi::EatType breath)
{
    sBreath = breath;
}

} // namespace yoshi
} // namespace ModBase
