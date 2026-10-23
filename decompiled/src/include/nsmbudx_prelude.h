/* nsmbudx_prelude.h -- shared vocabulary for the generated corpus.
 *
 * Types are named exactly as the Deluxe ARM32 binary uses them. IDA's scalar
 * aliases are defined at IDA's own widths so a decompiled body compiles
 * unchanged; nothing here is an inference about the game.
 */
#ifndef NSMBUDX_PRELUDE_H
#define NSMBUDX_PRELUDE_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

typedef uint8_t   _BYTE;
typedef uint16_t  _WORD;
typedef uint32_t  _DWORD;
typedef uint64_t  _QWORD;
typedef int8_t    _BOOL1;
typedef int32_t   _BOOL4;
typedef uint32_t  _UNKNOWN;

/* __int8/__int16/__int32/__int64 are clang builtin keywords; redefining them
 * is an error, so they are used as-is. */

#ifndef __fastcall
#define __fastcall
#endif
#ifndef __cdecl
#define __cdecl
#endif
#ifndef __noreturn
#define __noreturn
#endif

/* Hex-Rays `MEMORY[addr]` modelling: a flat image window. */
extern unsigned char g_image[0x10000000];
#define MEMORY ((unsigned char *)g_image)

/* __n128: the 128-bit NEON quad Hex-Rays uses for vector returns/params.
 * __n64 is the 64-bit (1 x double) form. __guard is a clang builtin and must
 * not be redefined. */
typedef float __n128 __attribute__((vector_size(16)));
typedef float __m128 __attribute__((vector_size(16)));
typedef double __n64 __attribute__((vector_size(8)));
typedef double __m64 __attribute__((vector_size(8)));

/* NEON lane types the decompiler emits for vectorised code. */
typedef float    float32x2_t __attribute__((vector_size(8)));
typedef float    float32x4_t __attribute__((vector_size(16)));
typedef int32_t  int32x2_t   __attribute__((vector_size(8)));
typedef int32_t  int32x4_t   __attribute__((vector_size(16)));
typedef uint32_t uint32x4_t  __attribute__((vector_size(16)));
typedef int8_t   int8x8_t    __attribute__((vector_size(8)));
typedef int8_t   int8x16_t   __attribute__((vector_size(16)));
typedef uint8_t  uint8x8_t   __attribute__((vector_size(8)));
typedef uint8_t  uint8x16_t  __attribute__((vector_size(16)));
typedef int16_t  int16x4_t   __attribute__((vector_size(8)));
typedef int16_t  int16x8_t   __attribute__((vector_size(16)));
typedef uint16_t uint16x8_t  __attribute__((vector_size(16)));
typedef int64_t  int64x2_t   __attribute__((vector_size(16)));
typedef uint64_t uint64x2_t  __attribute__((vector_size(16)));
typedef int32_t  int32x4x2_t[2];
typedef float    float32x4x2_t[2];
typedef int8_t   int8x16x2_t[2];
typedef uint8_t  uint8x16x2_t[2];
typedef float    float32x2x2_t[2];
typedef int8_t   int8x8x2_t[2];
typedef uint8_t  uint8x8x2_t[2];
typedef int16_t  int16x4x2_t[2];
typedef int16_t  int16x8x2_t[2];
typedef uint16_t uint16x8x2_t[2];
typedef int64_t  int64x2x2_t[2];
typedef uint64_t uint64x2x2_t[2];
typedef int32_t  int32x2x2_t[2];

/* Hex-Rays' destructor guard token in C++ band-0 output. */
typedef int __guard;

/* Vector types: single-precision, tightly packed. These are stated in the
 * engine's own headers (codedx include/util/vec2.h, vec3.h) and confirmed by
 * the codegen: ldm/sts of 8/12 bytes for Vec2/Vec3 by value. */
typedef struct Vec2 { float x; float y; } Vec2;
typedef struct Vec3 { float x; float y; float z; } Vec3;
typedef struct Vec2i { int x; int y; } Vec2i;
typedef struct Vec3i { int x; int y; int z; } Vec3i;

#endif /* NSMBUDX_PRELUDE_H */
