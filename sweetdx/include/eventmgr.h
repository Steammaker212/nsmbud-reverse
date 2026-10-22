#pragma once

#include "sead.h"

//
// Course-wide event switches.
//
// A level has a set of numbered events; something happening in one part of the
// stage can enable an event that changes geometry, spawns an object, or opens a
// path somewhere else. Actors reference them by id through their own eventId1 /
// eventId2 fields, and query or drive them here.
//
// The whole active set is a single 64-bit mask, so ids run 0..63.
//
class EventMgr : public sead::IDisposer
{
public:
    // Turns event `id` on or off. `time` schedules the transition; 0 means
    // immediately. The four trailing words are unused by actor code.
    void set(u32 id, u32 time, bool active,
             u32 unk1 = 0, u32 unk2 = 0, u32 unk3 = 0, u32 unk4 = 0);

    // Queries. An event is either on or off; there is no third state.
    inline bool isActive(u8 id)   { return (events & (1ULL << id)) != 0; }
    inline bool isInactive(u8 id) { return (events & (1ULL << id)) == 0; }

    static EventMgr* instance;

    u64 events;                 // +0x10  one bit per event id
    u8  rest[0x940 - 0x18];     // remaining manager state, not mapped
};
