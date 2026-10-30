// time_controls.cpp -- Tsuru's Time Clock (sprite 776), Time Changer (sprite 777) and coin ring
// duration (the retail Red Coin Ring).
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/timeclock.cpp,
// src/actors/timechanger.cpp and src/coinring.cpp (https://github.com/Zenith-Team/Tsuru,
// Zenith Team, MPL-2.0).
//
// The level timer (Tsuru's LevelTimer) is a 0x20-byte singleton, instance 0x60C99DE4 (made by
// 0x603FC4E4): +0x14 the time left and +0x18 the level's starting time, both in units << 12
// (found live: 400 << 12 at +0x18 at a level's start, +0x14 counting down by about 1.35 a second).

#include "actors/stageactor.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "collision/activecollider.h"
#include "graphics/effect.h"
#include "level/eventmgr.h"
#include "modbase/stage_kit.h"
#include "modbase/tsuru.h"

namespace ModBase { namespace levelTimer { extern u8* instance; } }

namespace {

// Time left in whole units; adding never leaves less than 3 (Tsuru's floor).
s32* timeLeft() { return ModBase::levelTimer::instance ? (s32*)(ModBase::levelTimer::instance + 0x14) : nullptr; }

void addTime(s32 units)
{
    if (s32* t = timeLeft())
        *t = ((*t >> 12) + units < 3) ? (3 << 12) : *t + (units << 12);
}

void setTime(s32 units)
{
    if (s32* t = timeLeft())
        *t = (units < 3 ? 3 : units) << 12;
}

} // namespace

// ---- Time Clock (776) ----------------------------------------------------------------------
//   nybbles 10-12  time (units)
//   nybble 5       1: takes the time away instead
class TimeClock : public StageActor
{
public:
    TimeClock(const ActorBuildInfo* b) : StageActor(b), model(nullptr) { }
    static Actor* build(const ActorBuildInfo* b) { return new TimeClock(b); }

    u32 onCreate() override
    {
        model = tsuru::createModel("timeclock", "timeclockA");
        aCollider.init(this, &collisionInfo, 0);
        addActiveColliders();
        return onExecute();
    }

    u32 onExecute() override
    {
        rotation.y -= 0x3FD27D2;
        tsuru::placeModel(model, this);
        return 1;
    }

    u32 onDraw() override
    {
        tsuru::drawModel(model);
        return 1;
    }

    static void collisionCallback(ActiveCollider* acSelf, ActiveCollider* acOther)
    {
        TimeClock* self = static_cast<TimeClock*>(acSelf->owner);
        if (self->isDeleted || (acOther->owner->type != 1 && acOther->owner->type != 2))
            return;
        Vec3 fx(self->position.x, self->position.y - 12.0f, 4500.0f);
        Effect::spawn(0x064, &fx, nullptr, nullptr);       // Tsuru RP_FlagPass_1
        tsuru::playSound("SE_SYS_CONTINUE_DONE", self->position);
        s32 units = self->settings1 & 0xFFF;
        addTime((self->settings1 >> 28 & 0xF) ? -units : units);
        self->isDeleted = true;
    }

    ModelWrapper* model;
    static const ActiveCollider::Info collisionInfo;
};
const ActiveCollider::Info TimeClock::collisionInfo = {
    {0.0f, 0.0f}, {12.0f, 12.0f}, 0, 5, 0, 0x824F, 0x20208, 0, &TimeClock::collisionCallback
};
const Profile timeClockProfile(&TimeClock::build, ProfileId::TimeClock, "TimeClock", nullptr, 0);
PROFILE_RESOURCES(ProfileId::TimeClock, "timeclock");

// ---- Time Changer (777) --------------------------------------------------------------------
//   nybbles 3-4    event (1-based)
//   nybble 8       0 add, 1 take away, 2 set
//   nybbles 13-15  time (units)
//   nybble 11 (bit 0): stays for the next time the event turns on (else removes itself)
class TimeChanger : public StageActor
{
public:
    TimeChanger(const ActorBuildInfo* b) : StageActor(b), triggered(false) { }
    static Actor* build(const ActorBuildInfo* b) { return new TimeChanger(b); }

    u32 onExecute() override
    {
        if (!eventId1 || !EventMgr::instance->isActive(eventId1 - 1)) {
            triggered = false;
        } else if (!triggered) {
            s32 units = settings2 >> 20 & 0xFFF;
            switch (settings1 >> 16 & 0xF) {
                default: addTime(units); break;
                case 1:  addTime(-units); break;
                case 2:  setTime(units); break;
            }
            triggered = true;
            if (!(settings1 & 0x10))
                isDeleted = true;
        }
        return 1;
    }
    bool triggered;
};
const Profile timeChangerProfile(&TimeChanger::build, ProfileId::TimeChanger, "TimeChanger", nullptr, 0);

// ---- Coin ring duration ---------------------------------------------------------------------
// The Red Coin Ring's event switch (0x606C6DA8) turns its event (+0x21B, 1-based) on for 60
// frames (24 when +0x17D8 is 1). As Tsuru's RingActivateCustom: a ring whose settings2
// (nybbles 13-20) is not 0 keeps the event on that many frames instead.
namespace ModBase { namespace levelTimer { int ringActivate(StageActor* ring); int ringActivate_orig(StageActor* ring); } }
int ModBase::levelTimer::ringActivate(StageActor* ring)
{
    u32 mode = *(u32*)((u8*)ring + 0x17D8);
    u32 time = ring->settings2 ? ring->settings2 : (mode == 1 ? 24 : 60);
    EventMgr::instance->set((u8)(ring->eventId1 - 1), time, true, 0, 1, 0, mode == 1 ? 1 : 0);
    return 1;
}
