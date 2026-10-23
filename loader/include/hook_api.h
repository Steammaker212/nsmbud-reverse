/* hook_api.h -- the contract between a hook and the game.
 *
 * A hook is a C function that replaces or wraps a game function. It is placed by
 * the loader at the site recorded in hooks/hooks.hks, so the only thing the hook
 * needs to know is the signature of what it is standing in for.
 *
 * Three rules keep this honest:
 *
 *  1. Every `game_*` symbol below is declared with the prototype the corpus
 *     generated for it, so a hook cannot silently call a function with the wrong
 *     arity or argument order.
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

#define NULL ((void *)0)

/* Original-code escape hatch.
 *
 * `hook_orig` is the address of the function a hook replaced, taken from
 * main.sym at link time. A hook that wants to wrap behaviour calls through it;
 * a hook that wants to replace calls it not at all.
 */
#define HOOK_ORIG(name) hook_orig_##name

/* Declare the original of a function you are hooking. The loader provides the
 * definition by evaluating the symbol from main.sym. */
#define DECLARE_ORIG(ret, name, args) extern ret (*HOOK_ORIG(name)) args

/* A few game types, kept opaque on purpose.
 *
 * These are pointers to objects whose layout is in
 * data/recovered/type_layouts.json; a hook that needs a field should include the
 * generated header for that type rather than casting to a guessed struct.
 */
typedef struct Actor        Actor;
typedef struct StageActor   StageActor;
typedef struct Enemy        Enemy;
typedef struct Player       Player;
typedef struct PlayerBase   PlayerBase;
typedef struct FireballBase FireballBase;
typedef struct CollisionActor CollisionActor;
typedef struct StateMgr     StateMgr;

/* Minimal logging: the loader writes into the game's own debug output when one
 * is attached, and otherwise does nothing. Kept here so hooks do not need a
 * libc. */
void hook_log(const char *msg);
void hook_log_hex(const char *label, u32 value);

#endif /* NSMBUDX_HOOK_API_H */
