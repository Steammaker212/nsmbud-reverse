// switch_block_event.cpp -- the Switch Block Event Activator (sprite 761): turns an event on
// once the Switch Block state is the colour it waits for.
//
// This Source Code Form is subject to the terms of the Mozilla Public License,
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at https://mozilla.org/MPL/2.0/.
//
// Ported to NSMBU Deluxe (Switch) v1.0.0 from Tsuru's src/actors/switchblockeventactivator.cpp
// (https://github.com/Zenith-Team/Tsuru, Zenith Team, MPL-2.0). Same behaviour, with the
// switch state ModBase::gSwitchBlockBlue. Tsuru reads a 0-based event ID from one nybble
// (eventID1 >> 4); here it is eventId1 whole, 1-based (0 = none), like the other Deluxe
// event sprites.
//
// Settings:
//   nybbles 3-4   event to turn on (1-based)
//   nybble 1      colour that turns it on: 0 red, 1 blue

#include "actors/stageactor.h"
#include "actors/profile.h"
#include "actors/profileid.h"
#include "level/eventmgr.h"
#include "modbase/stage_kit.h"

class SwitchBlockEventActivator : public StageActor
{
public:
    SwitchBlockEventActivator(const ActorBuildInfo* buildInfo) : StageActor(buildInfo) { }
    static Actor* build(const ActorBuildInfo* buildInfo) { return new SwitchBlockEventActivator(buildInfo); }

    u32 onExecute() override;
};

const Profile switchBlockEventActivatorProfile(&SwitchBlockEventActivator::build, ProfileId::SwitchBlockEventActivator,
                                               "SwitchBlockEventActivator", nullptr, 0);

u32 SwitchBlockEventActivator::onExecute()
{
    if (!eventId1)
        return 1;
    u8 event = eventId1 - 1;
    if (EventMgr::instance->isActive(event))
        return 1;

    bool wantBlue = eventId2 >> 0x4 & 0xF;     // nybble 1
    if (ModBase::gSwitchBlockBlue == wantBlue)
        EventMgr::instance->set(event, 0, true);
    return 1;
}
