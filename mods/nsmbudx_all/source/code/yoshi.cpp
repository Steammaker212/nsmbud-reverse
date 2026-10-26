// yoshi.cpp -- see nsmbudx/yoshi.h.

#include "nsmbudx/yoshi.h"
#include "nsmbudx/game.h"
#include "actormgr.h"

namespace {

::yoshi::EatType sBreath = ::yoshi::EatType::None;

inline u8 kindOf(const void* actor)
{
    return *((const u8*)actor + ::yoshi::cActorKindOffset);
}

} // namespace

extern "C" void* Yoshi_tongueCaught_orig(void* yoshi);

extern "C" void* Yoshi_tongueCaught(void* yoshi)
{
    if (sBreath != ::yoshi::EatType::None) {
        void* catchActor = nsmbudx::yoshi::mouthActor(yoshi);
        ::yoshi::EatData* eat = catchActor ? nsmbudx::yoshi::eatData(catchActor) : nullptr;
        if (eat && kindOf(catchActor) == (u8)::yoshi::ActorKind::Enemy && eat->type == ::yoshi::EatType::Eat)
            eat->type = sBreath;
    }
    return Yoshi_tongueCaught_orig(yoshi);
}

namespace nsmbudx {
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
    return (void*)ActorMgrRelated_getById((s32)ActorMgr::instance + 0x6A20, id);
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

void setBreathFromEnemies(::yoshi::EatType breath)
{
    sBreath = breath;
}

} // namespace yoshi
} // namespace nsmbudx
