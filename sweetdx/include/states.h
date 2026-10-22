#pragma once

#include "types.h"

class StateBase
{
public:
    virtual void execute();
    virtual void draw();
};

// A state machine held inside an actor. Occupies 0x24 bytes, as observed at
// MultiStateActor::states (+0x17B0).
template <typename T>
class StateWrapper
{
public:
    void change(StateBase* next);
    void execute();

    StateBase* current;   // +0x00
    StateBase* next;      // +0x04
    u32 _08[7];           // +0x08..0x24
};
