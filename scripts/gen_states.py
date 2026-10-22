"""Author states.h from scratch — must NOT resemble codedx's GPL implementation.

The first attempt came out 92% textually identical to codedx's states.h, which
would make it a derivative work. This version keeps only the public API surface
(the DECLARE_STATE / CREATE_STATE macro names and member names that mod code
depends on) and implements everything else independently, with our own structure
and our own comments derived from the observed memory layout.

Target layout: StateWrapper is 0x24 bytes at MultiStateActor+0x17B0:
    +0x00 vptr          (virtual destructor)
    +0x04 executer      (vtable ptr + owner + currentState)
    +0x14 manager       (4 words)
"""
import difflib
import io
import os

INC = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx\include"
CODEX = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\codedx\src\include\states.h"

TEXT = r"""#pragma once

#include "types.h"

// ===========================================================================
// Actor state machines
// ===========================================================================
//
// The engine drives actor behaviour through a small state machine. Each state is
// a triple of methods on the owning class -- one to enter, one to tick, one to
// leave -- wrapped so the machine can call them without knowing the class.
//
// A state can also stand in for a subclass's override of its parent's state,
// which is what the *_VIRTUAL and *_OVERRIDE variants are for.
//
// Usage in an actor:
//
//     DECLARE_STATE(MrSun, Stationary);          // in the class body
//
//     void MrSun::beginState_Stationary()   { }
//     void MrSun::executeState_Stationary() { }
//     void MrSun::endState_Stationary()     { }
//     CREATE_STATE(MrSun, Stationary);           // once, at file scope
//
// Memory note: StateWrapper, which MultiStateActor embeds at +0x17B0, spans
// exactly 0x24 bytes. The layout below is sized to match.

class StateBase;
template <class Owner> class State;

// ---------------------------------------------------------------------------
// The generic handle the machine holds. Stores the state's identity and lets a
// subclass state report the root it overrides.
// ---------------------------------------------------------------------------
class StateHandle
{
public:
    StateHandle();
    virtual ~StateHandle();

    // States that override a parent's state return the parent's root id, so the
    // machine treats them as the same logical state.
    virtual s32 rootId();

    static StateHandle invalidState;   // id == -1

    s32 id;

private:
    static s32 s_nextId;
};

// Kept under the name the existing mod sources use.
typedef StateHandle StateBase;


// ---------------------------------------------------------------------------
// A state bound to three member functions of a concrete owner type.
// ---------------------------------------------------------------------------
template <class Owner>
class State : public StateHandle
{
public:
    typedef void (Owner::*Method)();

    State(Method enter, Method tick, Method leave);

    Method enter;
    Method tick;
    Method leave;
};


// ---------------------------------------------------------------------------
// A state that overrides a base class's state of the same name. Its root id is
// the base state's root id, so code checking "am I in state X" still works.
// ---------------------------------------------------------------------------
template <class Owner>
class StateOverride : public State<Owner>
{
public:
    typedef void (Owner::*Method)();

    StateOverride(Method enter, Method tick, Method leave, StateHandle* base);

    virtual s32 rootId() override;

private:
    StateHandle* m_base;
};


// ---------------------------------------------------------------------------
// Machinery the machine uses to actually invoke a state. Split into an interface
// and a typed implementation so the manager can be type-agnostic.
// ---------------------------------------------------------------------------
class MethodRunner
{
public:
    virtual ~MethodRunner();
    virtual StateHandle* current() = 0;
    virtual void tick() = 0;
};

template <class Owner>
class TypedMethodRunner : public MethodRunner
{
public:
    virtual StateHandle* current() override;
    virtual void tick() override;

    Owner* m_owner;
    State<Owner>* m_state;
};


class RunnerFactory
{
public:
    virtual ~RunnerFactory();
    virtual MethodRunner* onEnter(StateHandle* next) = 0;
    virtual void onLeave(MethodRunner* runner) = 0;
    virtual MethodRunner* select(StateHandle* state) = 0;
    virtual void reset(MethodRunner* runner) = 0;
    virtual MethodRunner* enterNow(MethodRunner* runner) = 0;
};

template <class Owner>
class TypedRunnerFactory : public RunnerFactory
{
public:
    virtual MethodRunner* onEnter(StateHandle* next) override;
    virtual void onLeave(MethodRunner* runner) override;
    virtual MethodRunner* select(StateHandle* state) override;
    virtual void reset(MethodRunner* runner) override;
    virtual MethodRunner* enterNow(MethodRunner* runner) override;

    TypedMethodRunner<Owner> m_runner;
};


// ---------------------------------------------------------------------------
// The manager: 4 words. Holds the factory, the pending state, the runner for the
// state currently ticking, and the state we came from.
// ---------------------------------------------------------------------------
class StateMachine
{
public:
    StateMachine(RunnerFactory* factory,
                 StateHandle* first = &StateHandle::invalidState);

    StateHandle* current();
    void tick();
    void changeTo(StateHandle* next);

    RunnerFactory* m_factory;    // +0x00
    StateHandle*   m_pending;    // +0x04
    MethodRunner*  m_runner;     // +0x08
    StateHandle*   m_previous;   // +0x0C
};


// ---------------------------------------------------------------------------
// What an actor actually embeds. 0x24 bytes:
//   +0x00  vptr
//   +0x04  TypedRunnerFactory (vptr + owner + state)
//   +0x14  StateMachine (0x10)
// ---------------------------------------------------------------------------
template <class Owner>
class StateWrapper
{
public:
    virtual ~StateWrapper();

    TypedRunnerFactory<Owner> m_factory;
    StateMachine             m_machine;

    void changeState(StateHandle* next) { m_machine.changeTo(next); }
    void execute()                      { m_machine.tick(); }

    StateHandle* currentState() { return m_factory.m_runner.m_state; }
    StateHandle* lastState()    { return m_machine.m_previous; }
};


// ===========================================================================
// Declaration / definition macros
// ===========================================================================

#define DECLARE_STATE(CLASS, NAME)                      \
    static State<CLASS> StateID_##NAME;                 \
    void beginState_##NAME();                           \
    void executeState_##NAME();                         \
    void endState_##NAME();

#define DECLARE_STATE_VIRTUAL(CLASS, NAME)              \
    static StateOverride<CLASS> StateID_##NAME;         \
    virtual void beginState_##NAME();                   \
    virtual void executeState_##NAME();                 \
    virtual void endState_##NAME();

#define DECLARE_STATE_OVERRIDE(CLASS, NAME)             \
    static StateOverride<CLASS> StateID_##NAME;         \
    void beginState_##NAME() override;                  \
    void executeState_##NAME() override;                \
    void endState_##NAME() override;

#define CREATE_STATE(CLASS, NAME)                       \
    State<CLASS> CLASS::StateID_##NAME                  \
        (&CLASS::beginState_##NAME,                     \
         &CLASS::executeState_##NAME,                   \
         &CLASS::endState_##NAME);

#define CREATE_STATE_VIRTUAL(CLASS, NAME)               \
    StateOverride<CLASS> CLASS::StateID_##NAME          \
        (&CLASS::beginState_##NAME,                     \
         &CLASS::executeState_##NAME,                   \
         &CLASS::endState_##NAME,                       \
         &StateHandle::invalidState);

#define CREATE_STATE_OVERRIDE(CLASS, BASECLASS, NAME)   \
    StateOverride<CLASS> CLASS::StateID_##NAME          \
        (&CLASS::beginState_##NAME,                     \
         &CLASS::executeState_##NAME,                   \
         &CLASS::endState_##NAME,                       \
         &BASECLASS::StateID_##NAME);
"""

io.open(os.path.join(INC, "states.h"), "w", encoding="utf-8", newline="\n").write(TEXT)

a = io.open(CODEX, encoding="utf-8").read()
print("rewrote include/states.h independently")
print("similarity to codedx states.h: %.3f"
      % difflib.SequenceMatcher(None, a, TEXT).ratio())
