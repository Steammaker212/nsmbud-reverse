// actor_probe.cpp -- print what the engine core actually holds at run time.
//
// RE_PLAN Phase 1 closes when a probe reads StageActor::position / playerId /
// type live and logs sensible values. This is that probe: it hooks the one
// function every actor passes through on spawn and again while it is alive, and
// prints the fields reverse-engineering/FindingsA/engine/Actor.cpp documents.
//
// What it is for: the field offsets in that file come from RicBent's database
// (tier T2) and are re-checked against instructions (tier T1). Neither of those
// proves the *values* are what the names claim. A position of (0,0,0) for every
// actor, or a playerId outside -1..3, would mean the layout is off by something.
//
// Hook site: ActorMgr::create (0x60008138) is the funnel every spawn goes
// through, but it is a hot path with a complicated return convention. The
// cheaper site is StageActor::StageActor (0x600002A0): it runs once per actor,
// on the just-constructed object, so `r0` is the StageActor and nothing else has
// happened yet -- the position is the spawn position, playerId is still -1 and
// type is still 0. That is the cleanest possible reading of the constructor.
//
// Expect, on the first frames of a level:
//
//   [ModBase] spawn id=... profile=467 pos=(x,y,z) playerId=-1 type=0 dir=0
//   [ModBase] spawn id=... profile=1 pos=(...) playerId=0 type=1 dir=0
//
// The second line is the player: profile 1, playerId 0, type 1 (Player). If
// playerId comes back as something like 255, the field is u8 where the header
// says s8, or the offset is one byte off.
//
// Deluxe (Switch) v1.0.0 only.

#include "actors/stageactor.h"
#include "modbase/log.h"

// The original, from the trampoline sweet-dx writes.
namespace ModBase { namespace actorProbe { StageActor* stageActor_orig(StageActor* self,
                                                 const ActorBuildInfo* buildInfo); } }

namespace {

// A spawn storm (a big level, or a boss) can outrun the log. Cap it, and say so
// once, so a missing tail is explained rather than mysterious.
constexpr u32 kMaxLines = 400;
u32 g_lines = 0;
bool g_announcedCap = false;

const char* typeName(u8 type)
{
    switch (type)
    {
    case 0: return "Stage";
    case 1: return "Player";
    case 2: return "Yoshi";
    case 3: return "Enemy";
    default: return "?";
    }
}

} // namespace

namespace ModBase { namespace actorProbe { StageActor* stageActor(StageActor* self,
                                             const ActorBuildInfo* buildInfo); } }
StageActor* ModBase::actorProbe::stageActor(StageActor* self,
                                             const ActorBuildInfo* buildInfo)
{
    // Build first: the fields below are only meaningful afterwards.
    StageActor* actor = ModBase::actorProbe::stageActor_orig(self, buildInfo);
    if (!actor)
        return actor;

    if (g_lines >= kMaxLines)
    {
        if (!g_announcedCap)
        {
            g_announcedCap = true;
            ModBase::log("probe: ", kMaxLines, " spawns logged, stopping");
        }
        return actor;
    }
    ++g_lines;

    ModBase::log(
        "spawn id=", (u32)actor->id,
        " profile=", actor->profile ? actor->profile->id : 0u,
        " type=", (u32)actor->type, "(", typeName(actor->type), ")",
        " player=", (s32)actor->playerId,
        " dir=", actor->direction,
        " pos=(", actor->position.x, ",", actor->position.y, ",", actor->position.z, ")",
        " scale=(", actor->scale.x, ",", actor->scale.y, ",", actor->scale.z, ")");

    // Profile and ActorBuildInfo must agree: the constructor copies one from the
    // other. A mismatch means the ActorBuildInfo layout is wrong, which would
    // make every spawn-parameter claim in reverse-engineering/FindingsA/ suspect.
    if (buildInfo && actor->profile != buildInfo->profile)
    {
        ModBase::log("probe: buildInfo/profile mismatch id=", (u32)actor->id,
                     " actorProfile=", actor->profile ? actor->profile->id : 0u,
                     " buildProfile=", buildInfo->profile ? buildInfo->profile->id : 0u);
    }

    // settings1/settings2 come straight from the level's nybbles. Logging them
    // once per spawn is how you confirm a Yaz0moto edit reached the game.
    // Printed in decimal: ModBase::LogLine has no hex formatter, so a "0x" label
    // here would be a lie.
    if (buildInfo)
    {
        ModBase::log("  settings1=", buildInfo->settings1,
                     " settings2=", buildInfo->settings2,
                     " event1=", (u32)buildInfo->eventId1,
                     " movement=", (u32)buildInfo->movementId,
                     " link=", (u32)buildInfo->linkId);
    }

    return actor;
}
