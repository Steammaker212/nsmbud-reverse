// passthrough.cpp -- the hammer suit's hook with nothing in it.
//
// Same patch site, same trampoline, same module layout as mods/hammer_suit,
// but the hook only calls the original. If the game still crashes with this
// build, the crash is not the hammer logic: look at the module/loader or at
// other files on the SD card. If it stops crashing, the hammer logic is to blame.
//
// Deluxe (Switch) v1.0.0 only.

#include "actor/stageactor.h"

extern "C" int HammerSuit_createFireBall_orig(StageActor* player, int spin);

extern "C" int HammerSuit_createFireBall(StageActor* player, int spin)
{
    return HammerSuit_createFireBall_orig(player, spin);
}
