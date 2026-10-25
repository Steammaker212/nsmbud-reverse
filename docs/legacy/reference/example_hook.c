/* example_hook.c -- a trace hook on ActorMgr__create.
 *
 * This is the reference example for the loader. It exists to show the whole
 * path working: a hook site from hooks/hooks.hks, a symbol from
 * data/loader/main.sym, and the C it stands in front of from
 * decompiled/src/actorcore/60008138_ActorMgr__create.c.
 *
 * The target, measured rather than guessed:
 *
 *   symbol      ActorMgr__create
 *   address     0x60008138 (RVA 0x8138)
 *   size        396 bytes
 *   corpus      decompiled/src/actorcore/60008138_ActorMgr__create.c
 *   prototype   _BYTE *__fastcall (void *this, ActorBuildInfo *buildInfo, int unk)
 *   hook sites  323 BL instructions reach it; hooks/hooks.json records them
 *
 * Strategy: *wrap*, not replace. The hook logs the call and forwards to the
 * original through HOOK_ORIG, so game behaviour is unchanged. A hook that
 * replaced this function would have to reimplement actor creation, which is 396
 * bytes of state machine and not something to fake.
 *
 * Deluxe only: this signature and address are from the Switch binary. The Wii U
 * original is a different build and its ActorMgr is not interchangeable.
 */
#include "hook_api.h"

/* The true prototype, taken from the corpus file named above. Declared here so
 * the compiler checks the forwarding call. */
typedef void *(*ActorMgr_create_fn)(void *this, void *buildInfo, u32 unk);
extern ActorMgr_create_fn HOOK_ORIG(ActorMgr__create);

static u32 create_calls;

void ActorMgr__create_hook(void *this, void *buildInfo, u32 unk)
{
    create_calls++;
    /* Log only the first few; a per-frame hook that logs every call swamps the
     * buffer and hides the interesting entries. */
    if (create_calls <= 8) {
        hook_log("ActorMgr__create #");
        hook_log_hex("", create_calls);
        hook_log(" buildInfo=");
        hook_log_hex("", (u32)buildInfo);
        hook_log("\n");
    }
    /* Forward: the original does the real work. */
    (void)HOOK_ORIG(ActorMgr__create)(this, buildInfo, unk);
}

/* Exposed so a test harness can confirm the hook really ran. */
u32 mod_actor_create_calls(void)
{
    return create_calls;
}
