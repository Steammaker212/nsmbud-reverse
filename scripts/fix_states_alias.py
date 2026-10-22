"""Make states.h expose StateBase as an alias without a conflicting typedef.

Actor headers name `StateBase` (that is what MultiStateActor::doStateChange takes),
so we need both spellings to refer to one type.
"""
import io
import os

p = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx\include\states.h"
t = io.open(p, encoding="utf-8").read()

old = """class StateBase;
template <class Owner> class State;"""
new = """template <class Owner> class State;"""
assert old in t, "forward decl block not found"
t = t.replace(old, new)

# Drop the typedef; use a single class named StateBase and alias StateHandle to it.
old2 = """class StateHandle
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
typedef StateHandle StateBase;"""
new2 = """class StateBase
{
public:
    StateBase();
    virtual ~StateBase();

    // States that override a parent's state return the parent's root id, so the
    // machine treats them as the same logical state.
    virtual s32 rootId();

    static StateBase invalidState;   // id == -1

    s32 id;

private:
    static s32 s_nextId;
};

// The machine-side handle name and the actor-facing name are the same type.
typedef StateBase StateHandle;"""
assert old2 in t, "StateHandle class not found"
t = t.replace(old2, new2)

# Every remaining StateHandle reference is fine via the typedef, but the
# definitions of members must use the real class name.
t = t.replace("class State : public StateHandle", "class State : public StateBase")
t = t.replace("StateOverride(Method enter, Method tick, Method leave, StateHandle* base);",
              "StateOverride(Method enter, Method tick, Method leave, StateBase* base);")
t = t.replace("StateHandle* m_base;", "StateBase* m_base;")
t = t.replace("StateEnter* ", "StateBase* ")

io.open(p, "w", encoding="utf-8", newline="\n").write(t)
print("states.h: StateBase is the class, StateHandle an alias")
for ln, line in enumerate(t.splitlines(), 1):
    if "StateBase" in line or "StateHandle" in line:
        print(f"  {ln}: {line.strip()}")
