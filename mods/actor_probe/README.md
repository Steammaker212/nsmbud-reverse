# actor_probe

Diagnostic mod. Prints the engine-core fields that
[`readable/engine/Actor.cpp`](../../readable/engine/Actor.cpp) documents, for
every actor as it is constructed, and then gets out of the way.

This is not a gameplay mod. It exists to answer one question: **are the layouts
right, or only plausible?** The offsets in that file come from RicBent's
database (tier T2) and were re-checked against instructions (tier T1). Neither
proves the *values* are sane. If `position` reads `(0.000,0.000,0.000)` for every
actor in a level, or `playerId` comes back as 255 instead of -1, then a field is
misplaced and every claim built on it needs revisiting.

## What it logs

One line per actor, plus one detail line:

```
[nsmbudx] spawn id=1 profile=467 type=0(Stage) player=255 dir=0 pos=(...)
[nsmbudx]   settings1=... settings2=... event1=... movement=... link=...
```

`player` printing as `255` where you expect `-1` would mean `playerId` is being
read as unsigned -- which is a real possibility, since the constructor writes it
with a 16-bit store (`*(u16*)&playerId = -1`) rather than two separate bytes.

A level's first lines should include the player itself: **profile 1, type 1
(Player), playerId 0**. That single line is the strongest check of the whole
tower, because it exercises the profile pointer, the type byte and the player id
in one go.

Capped at 400 spawns; the cap announces itself once so a truncated log is not
mistaken for the end of the level.

## Reading the log

Ryujinx prints it as `KernelSvc OutputDebugString: [nsmbudx] ...`. On hardware
it goes to the debug channel. Nothing else in the mod is observable.

## What it proves when it works

* `Actor::profile` (+0x0C) resolves to a real profile whose `id` (+0x08) is the
  sprite's own id.
* `StageActor::position` (+0x06C), `scale` (+0x090), `direction` (+0x050),
  `playerId` (+0x054) and `type` (+0x215) are all where the header says.
* `ActorBuildInfo` (+0x00..+0x2B) is laid out as documented, since the settings
  and event ids are read from it and cross-checked against the profile the actor
  ended up with.

Ledger: F0107-F0116.
