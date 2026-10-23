/* static_init.c -- the module's constructor runner.
 *
 * crt0.s branches here from the game's own static-init path (the .hks hook at
 * RVA 0x19C), so this is the first line of our code that runs inside the game
 * process. It has exactly two jobs:
 *
 *   1. run every constructor the linker collected into .init_array, which is
 *      what makes a file-scope object or a PROFILE_RESOURCES-style registrar
 *      take effect at all;
 *   2. hand control to mod_init().
 *
 * crt0.s's static_init_hook replays the two instructions the branch displaced
 * (`sub sp, r11, #8` / `ldmfd sp!, {r4,r5,r11,pc}`), so returning from here
 * resumes the game normally.
 *
 * Deluxe (Switch) only: the entry point and the displaced instructions are from
 * the retail Deluxe main module, verified by disassembly at 0x6000019C.
 */
#include "hook_api.h"

typedef void (*init_fn)(void);

extern init_fn __init_array_start[];
extern init_fn __init_array_end[];

void mod_init(void);

void static_init(void)
{
    init_fn *p;

    for (p = __init_array_start; p < __init_array_end; ++p)
        (*p)();

    mod_init();
}

/* The C++ runtime across the module boundary. We have no libc, and the game's
 * own __cxa_atexit belongs to the game's libc++ instance; a no-op keeps a
 * destructor registration from pulling in a second allocator. */
int __cxa_atexit(void (*func)(void *), void *arg, void *d)
{
    (void)func;
    (void)arg;
    (void)d;
    return 0;
}

void *__dso_handle = 0;

/* Same reasoning for the guard variables a function-local static emits. */
int __cxa_guard_acquire(volatile int *g)
{
    return *g == 0;
}

void __cxa_guard_release(volatile int *g)
{
    *g = 1;
}
