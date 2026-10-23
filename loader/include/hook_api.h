/* hook_api.h -- the contract between a hook and the game.
 *
 * A hook is a C function that stands in front of a game function. The module is
 * linked into the game's own address space (see loader/Makefile), so the game
 * function is reachable by name: `main.ld` contains `ActorMgr__create = 0x...`,
 * which is the RVA minus the main module's size. A call to that name assembles
 * to a real `BL` to the real function.
 *
 * Three rules keep this honest:
 *
 *  1. Every game function a hook calls must be declared with its true
 *     prototype via DECLARE_ORIG, so the compiler checks the call. The
 *     prototype comes from the corpus file for that address, not from memory.
 *  2. Addresses are never written here. They come from data/loader/main.sym at
 *     link time, which is generated from the database and verified against the
 *     image.
 *  3. Everything in this file is a Deluxe (Switch) finding. Nothing is imported
 *     from the Wii U original.
 */
#ifndef NSMBUDX_HOOK_API_H
#define NSMBUDX_HOOK_API_H

/* The game is 32-bit ARM; pointers are 4 bytes. These are used instead of the
 * toolchain's stdint so the module does not need a hosted libc. */
typedef unsigned char      u8;
typedef signed char        s8;
typedef unsigned short     u16;
typedef signed short       s16;
typedef unsigned int       u32;
typedef signed int         s32;
typedef unsigned long long u64;
typedef signed long long   s64;
typedef float              f32;
typedef double             f64;
typedef unsigned int       uintptr_t;
typedef unsigned int       size_t;

#define NULL ((void *)0)

/* Original-code escape hatch.
 *
 * A `BL`-site hook replaces one call, not the function, so the function is
 * still there at its own address. Calling it by name from the hook therefore
 * reaches the original. HOOK_ORIG() exists to make that intent explicit at the
 * call site and to keep the name resolvable if the mechanism ever changes.
 */
#define HOOK_ORIG(name) (name)

/* Declare the original of a function you are hooking, with its true prototype.
 * The compiler then checks every argument of the forwarding call. */
#define DECLARE_ORIG(ret, name, args) extern ret name args

/* A few game types, kept opaque on purpose.
 *
 * These are pointers to objects whose layout is in
 * data/recovered/type_layouts.json; a hook that needs a field should read it
 * through the measured offset rather than a guessed struct. */
typedef struct Actor        Actor;
typedef struct StageActor   StageActor;
typedef struct Enemy        Enemy;
typedef struct Player       Player;
typedef struct PlayerBase   PlayerBase;
typedef struct FireballBase FireballBase;
typedef struct CollisionActor CollisionActor;
typedef struct StateMgr     StateMgr;
typedef struct ActorBuildInfo ActorBuildInfo;

/* Minimal logging. The loader keeps a ring buffer in .bss which the module
 * exports; a hook reports into it without needing a libc or a syscall. */
void hook_log(const char *msg);
void hook_log_hex(const char *label, u32 value);
void hook_log_dec(const char *label, u32 value);

/* Set once static_init() has run, so a hook can tell whether the module is
 * actually live before it does anything with side effects. */
extern u32 mod_ready;

/* Counts of every hook entry, and the proof writer.
 *
 * The distinction that matters on hardware: `mod_ready` proves the module's
 * static initialiser ran, while `mod_hook_calls` proves a *game* call actually
 * reached module code. A module can load and never be called, and only the
 * second is evidence that the branch patch works. */
extern u32 mod_hook_calls;
void mod_write_proof(void);

#endif /* NSMBUDX_HOOK_API_H */
