# Profile ids are assigned at runtime — and my "fireball is id 130" claim was wrong

Recorded because it was stated in this session before being checked, and because the mistake is
instructive: I read an argument position off a decompiled call without reading the callee.

## What I claimed, and why it was wrong

`sub_6013B948` registers the `PlayerFireball` profile. Decompiled, its call looks like:

```c
Profile::Profile(0xC87B30, 0x13A7A4, MEMORY[0xAF3498], v1, &unk_60AF67B0, 130);
```

I read "130" as the profile id and reported **PlayerFireball profile id = 130**. It is not.

`Profile::Profile` itself (`0x17F6C`) settles the layout:

```c
int Profile::Profile(int this, int ctor, unsigned int id, int a4, void *actorInfo, int a6)
{
    *(this + 0)  = 12322236;                                   // vtable
    *(this + 4)  = ctor;                                       // actor constructor
    *(this + 8)  = id;                                         // <-- the ID is arg 3
    *(this + 12) = actorInfo ? actorInfo : &ActorInfo_Default;
    *(this + 16) = 0;
    *(this + 20) = a6;                                         // <-- a6, NOT the id
    if (id < 0x392) v7 = id;
    Profiles[v7] = this;                                       // indexed by Profile::get
    return this;
}
```

So the id is `MEMORY[0xAF3498]`, and `130` is merely the sixth argument, stored at `profile + 20`.

## And the id is not static either

Reading all 772 registration initialisers, **every single id slot holds `0xFFFFFFFF`**:

```
parsed 772; with a statically-readable id: 772; id was zero: 0
```

`0xFFFFFFFF` is a sentinel, and `Profile::Profile` clamps it (`if (id < 0x392)`) to index `0`.
So ids are assigned at runtime — consistent with the counter idiom visible in the same initialiser:

```c
MEMORY[0xC87B4C] = ++MEMORY[0xC7B788];
```

Conclusion: **profile ids cannot be read statically in this build.** Any id→class mapping needs a
runtime source (the debugger, or a memory dump from a running game). Nothing in the repo should
assert a fireball profile id until that is done.

## What *is* solid, and was applied

`Profile::Profile` takes the actor constructor as argument 2, and each of the 772 static
initialisers calls it exactly once. Therefore each initialiser's whole purpose is registering that
actor's profile, and

```
registerProfile_<ShortCtorName>_<RVA>
```

is true by construction. **727 applied** (45 skipped: already carried a real name, or no ctor name
resolved).

This also explains a puzzle from earlier rounds: `PlayerFireball_ctor` has **zero BL callers**, and
so do `FireballBase_ctor` and `PlantFireball_ctor`. That is not a defect — the constructor's
address is taken at registration and passed to the engine as a function pointer. The same pattern
is why `Player_setPowerupMode` and `BlockBase::getContents` have no direct callers.

## The lesson

Three separate conclusions in this project have now failed the same way: reading a value out of
decompiled output and inferring its meaning without reading the function that consumes it. The
check that catches it is cheap — decompile the callee and look at what it does with each argument.
