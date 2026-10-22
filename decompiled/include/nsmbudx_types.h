/* NSMBU Deluxe (Switch) v1.0.0 -- shared type vocabulary
 *
 * The single definition of everything Hex-Rays emits that is not standard C. Exactly one copy
 * exists, so this can be included from any number of headers without redefinition conflicts.
 *
 *   _BYTE, _DWORD, _BOOL4 ... IDA scalar aliases, at IDA's exact widths
 *   float32x4_t, ... ........ ARM NEON lane types appearing in signatures
 *   sead_Foo / nn_atk_Bar ... opaque types for C++-qualified names (:: rewritten to _)
 *
 * Nothing here asserts a memory layout. Struct definitions recovered from evidence live in
 * structs.h; opaque is the honest choice for a pointer parameter, which is how every qualified
 * type appears in these signatures.
 *
 * Do not edit by hand. Regenerate with scripts/restructure_includes.py.
 */
#ifndef NSMBUDX_TYPES_H
#define NSMBUDX_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

/* IDA's absolute-memory accessor. The decompiler writes `MEMORY[0xC99D70]` for a raw load at an
 * image-relative address; the real VA is 0x60000000 + RVA. Typed as uint32_t* to match the dword
 * loads these functions perform. */
#define MEMORY ((uint32_t *)(uintptr_t)0x60000000u)

/* ---- IDA scalar aliases ---- */
typedef unsigned char      _BYTE;
typedef unsigned char      _BOOL1;
typedef unsigned int       _BOOL4;
typedef unsigned short     _WORD;
typedef unsigned int       _DWORD;
typedef unsigned long long _QWORD;
typedef signed char        _SBYTE;
typedef signed short       _SWORD;
typedef signed int         _SDWORD;
typedef signed long long   _SQWORD;
typedef unsigned char      _UNKNOWN;
typedef void              *_PVOID;
typedef const char        *_LPCSTR;

/* ---- ARM NEON lane types ---- */
typedef struct { float    v[2]; } float32x2_t;
typedef struct { float    v[4]; } float32x4_t;
typedef struct { double   v[2]; } float64x2_t;
typedef struct { int32_t  v[2]; } int32x2_t;
typedef struct { int32_t  v[4]; } int32x4_t;
typedef struct { uint32_t v[4]; } uint32x4_t;
typedef struct { int8_t   v[16]; } int8x16_t;
typedef struct { uint8_t  v[16]; } uint8x16_t;
typedef struct { int32x4_t val[2]; }   int32x4x2_t;
typedef struct { int32x2_t val[2]; }   int32x2x2_t;
typedef struct { float32x2_t val[2]; } float32x2x2_t;
typedef struct { float32x4_t val[2]; } float32x4x2_t;
typedef struct { uint32x4_t val[2]; }  uint32x4x2_t;
typedef struct { int8x16_t val[2]; }   int8x16x2_t;
typedef struct { uint8x16_t val[2]; }  uint8x16x2_t;

/* ---- opaque types for C++-qualified names ----
 * Incomplete on purpose: no layout is claimed. */
struct sead_IDisposer;
struct sead_IDelegateBase;
struct sead_Heap;
struct sead_TreeNode;
struct sead_SafeStringBase;
struct sead_FileDevice;
struct sead_Buffer;
struct nw4f_ut_ResFileAccessor;
struct nn_Result;
struct nn_atk_SoundActor;
struct nn_atk_detail_ExternalSoundPlayer;
struct nn_audio_Device;
struct nn_os_Event;
struct nn_vi_Display;
struct nn_fnd_Allocator;
struct nn_gfx_Device;
struct nn_account;

#endif /* NSMBUDX_TYPES_H */
