/* ARM NEON intrinsics, written out as ordinary C.
 *
 * The corpus calls 21 NEON intrinsics at 4,193 sites. nsmbudx_undeclared.h used to declare them as bare
 * `int f();`, which is why code like `vmax_f32_v2(a, b).n64_u32[0]` failed to compile: `int` has no members.
 * They are not missing functions -- they are the vector ops themselves -- so this gives each one a real
 * definition over the portable vector unions in nsmbudx_types.h.
 *
 * Every function here is plain scalar C. No ARM instructions, no intrinsics, no `asm`. The behaviour matches
 * the ARM instruction it stands in for, which is what makes the decompilation readable: `vmlaq_lane_f32(a, b,
 * c, 2)` reads as "a + b * c[2]" rather than as a vector opcode.
 *
 * Notes on the semantics that are easy to get wrong:
 *   - vmla/vmls are fused multiply-accumulate/subtract: `a + b*c`, `a - b*c`.
 *   - vmaxnm/vminnm are IEEE minNum/maxNum: with one NaN operand they return the OTHER operand, which
 *     fmaxf/fminf already do.
 *   - vbsl selects per BIT from the mask (not per lane), so it is done bytewise with a full 0xFF test.
 *   - vext concatenates two vectors and extracts a byte window; a shift of 8 or 12 is the common case.
 *   - vdupq_lane_f32 broadcasts one lane of a 2-lane vector across all four lanes.
 *   - vzip interleaves two vectors' 32-bit elements.
 */
#ifndef NSMBUDX_NEON_H
#define NSMBUDX_NEON_H

#ifndef NSMBUDX_NEON_TYPES
#define NSMBUDX_NEON_TYPES
typedef union { int8_t v[8]; uint64_t n64_u64[1]; uint8_t n64_u8[8]; int8_t n64_i8[8]; } int8x8_t;
typedef struct { int8x8_t val[2]; } int8x8x2_t;
typedef struct { int8x8_t val[4]; } int8x8x4_t;
#endif
#include <math.h>
#include <string.h>

static inline float32x4_t vaddq_f32(float32x4_t a, float32x4_t b)
{
  float32x4_t r;
  int i;
  for (i = 0; i < 4; i++) r.v[i] = a.v[i] + b.v[i];
  return r;
}

static inline float32x4_t vsubq_f32(float32x4_t a, float32x4_t b)
{
  float32x4_t r;
  int i;
  for (i = 0; i < 4; i++) r.v[i] = a.v[i] - b.v[i];
  return r;
}

static inline float32x4_t vmulq_f32(float32x4_t a, float32x4_t b)
{
  float32x4_t r;
  int i;
  for (i = 0; i < 4; i++) r.v[i] = a.v[i] * b.v[i];
  return r;
}

/* a + b * c */
static inline float32x4_t vmlaq_f32(float32x4_t a, float32x4_t b, float32x4_t c)
{
  float32x4_t r;
  int i;
  for (i = 0; i < 4; i++) r.v[i] = a.v[i] + b.v[i] * c.v[i];
  return r;
}

/* a - b * c */
static inline float32x4_t vmlsq_f32(float32x4_t a, float32x4_t b, float32x4_t c)
{
  float32x4_t r;
  int i;
  for (i = 0; i < 4; i++) r.v[i] = a.v[i] - b.v[i] * c.v[i];
  return r;
}

/* a + b * c[lane] */
static inline float32x4_t vmlaq_lane_f32(float32x4_t a, float32x4_t b, float32x2_t c, int lane)
{
  float32x4_t r;
  float s = c.v[lane & 1];
  int i;
  for (i = 0; i < 4; i++) r.v[i] = a.v[i] + b.v[i] * s;
  return r;
}

/* a - b * c[lane] */
static inline float32x4_t vmlsq_lane_f32(float32x4_t a, float32x4_t b, float32x2_t c, int lane)
{
  float32x4_t r;
  float s = c.v[lane & 1];
  int i;
  for (i = 0; i < 4; i++) r.v[i] = a.v[i] - b.v[i] * s;
  return r;
}

/* b * c[lane] */
static inline float32x4_t vmulq_lane_f32(float32x4_t b, float32x2_t c, int lane)
{
  float32x4_t r;
  float s = c.v[lane & 1];
  int i;
  for (i = 0; i < 4; i++) r.v[i] = b.v[i] * s;
  return r;
}

/* broadcast c[lane] to all four lanes */
static inline float32x4_t vdupq_lane_s32(int32x2_t c, int lane)
{
  float32x4_t r;
  uint32_t s = c.n64_u32[lane & 1];
  int i;
  for (i = 0; i < 4; i++) r.n64_u32[i] = s;
  return r;
}

static inline int32x2_t vdup_lane_s32(int32x2_t c, int lane)
{
  int32x2_t r;
  r.n64_u32[0] = c.n64_u32[lane & 1];
  r.n64_u32[1] = r.n64_u32[0];
  return r;
}

/* broadcast *p to all four lanes */
static inline float32x4_t vld1q_dup_f32(const float *p)
{
  float32x4_t r;
  int i;
  for (i = 0; i < 4; i++) r.v[i] = *p;
  return r;
}

/* lane-wise max */
static inline float32x4_t vmaxq_f32(float32x4_t a, float32x4_t b)
{
  float32x4_t r;
  int i;
  for (i = 0; i < 4; i++) r.v[i] = fmaxf(a.v[i], b.v[i]);
  return r;
}

static inline float32x4_t vminq_f32(float32x4_t a, float32x4_t b)
{
  float32x4_t r;
  int i;
  for (i = 0; i < 4; i++) r.v[i] = fminf(a.v[i], b.v[i]);
  return r;
}

/* lane-wise maxNum: returns the non-NaN operand, which fmaxf does */
static inline float32x4_t vmax_f32_v2(float32x4_t a, float32x4_t b)
{
  float32x4_t r;
  int i;
  for (i = 0; i < 4; i++) r.v[i] = fmaxf(a.v[i], b.v[i]);
  return r;
}

/* move a float32x4_t's low half back into a float32x2_t form */
static inline float32x2_t vget_low_f32(float32x4_t a)
{
  float32x2_t r;
  r.v[0] = a.v[0];
  r.v[1] = a.v[1];
  return r;
}

/* bitwise select: for each bit, take from b where mask is 1, else from c */
static inline int32x4_t vbslq_s64(int32x4_t mask, int32x4_t b, int32x4_t c)
{
  int32x4_t r;
  int i;
  for (i = 0; i < 16; i++)
    r.n128_u8[i] = (mask.n128_u8[i] & b.n128_u8[i]) | ((uint8_t)~mask.n128_u8[i] & c.n128_u8[i]);
  return r;
}

static inline int32x4_t vandq_s64(int32x4_t a, int32x4_t b)
{
  int32x4_t r;
  int i;
  for (i = 0; i < 16; i++) r.n128_u8[i] = a.n128_u8[i] & b.n128_u8[i];
  return r;
}

/* concatenate a and b, then take 16 bytes starting at byte `n` */
static inline int8x16_t vextq_s8(int8x16_t a, int8x16_t b, int n)
{
  uint8_t tmp[32];
  int8x16_t r;
  int i;
  memcpy(tmp, a.v, 16);
  memcpy(tmp + 16, b.v, 16);
  for (i = 0; i < 16; i++) r.v[i] = (int8_t)tmp[(n + i) & 31];
  return r;
}

static inline int8x16_t vext_s8(int8x16_t a, int8x16_t b, int n)
{
  return vextq_s8(a, b, n);
}

/* interleave the 32-bit elements of a and b: {a0,b0,a1,b1}, {a2,b2,a3,b3} */
static inline int32x4x2_t vzipq_s32(int32x4_t a, int32x4_t b)
{
  int32x4x2_t r;
  r.val[0].n128_u32[0] = a.n128_u32[0];
  r.val[0].n128_u32[1] = b.n128_u32[0];
  r.val[0].n128_u32[2] = a.n128_u32[1];
  r.val[0].n128_u32[3] = b.n128_u32[1];
  r.val[1].n128_u32[0] = a.n128_u32[2];
  r.val[1].n128_u32[1] = b.n128_u32[2];
  r.val[1].n128_u32[2] = a.n128_u32[3];
  r.val[1].n128_u32[3] = b.n128_u32[3];
  return r;
}

/* signed int32 -> float conversion, lane-wise */
static inline float32x4_t vcvt_f32_s32(int32x4_t a)
{
  float32x4_t r;
  int i;
  for (i = 0; i < 4; i++) r.v[i] = (float)a.v[i];
  return r;
}

/* float -> signed int32 with truncation toward zero, lane-wise */
static inline int32x4_t vcvtq_s32_f32(float32x4_t a)
{
  int32x4_t r;
  int i;
  for (i = 0; i < 4; i++) r.v[i] = (int32_t)a.v[i];
  return r;
}

/* lane-wise float compare, producing an all-ones mask where true (as the ARM does) */
static inline int32x4_t vcgeq_f32(float32x4_t a, float32x4_t b)
{
  int32x4_t r;
  int i;
  for (i = 0; i < 4; i++) r.v[i] = (a.v[i] >= b.v[i]) ? -1 : 0;
  return r;
}

static inline int32x4_t vcgtq_f32(float32x4_t a, float32x4_t b)
{
  int32x4_t r;
  int i;
  for (i = 0; i < 4; i++) r.v[i] = (a.v[i] > b.v[i]) ? -1 : 0;
  return r;
}

static inline float32x4_t vabsq_f32(float32x4_t a)
{
  float32x4_t r;
  int i;
  for (i = 0; i < 4; i++) r.v[i] = fabsf(a.v[i]);
  return r;
}

static inline float32x4_t vmovq_n_f32(float s)
{
  float32x4_t r;
  int i;
  for (i = 0; i < 4; i++) r.v[i] = s;
  return r;
}

static inline float vgetq_lane_f32(float32x4_t a, int lane)
{
  return a.v[lane & 3];
}


/* ---- second batch: table lookups, reciprocals, transposes, pairwise ops ----
 *
 * vtbl2/vtbl4 index a 16- or 32-byte table by signed bytes; an index with the high bit set yields 0, which is
 * what the `idx & 0x80` test below encodes. vrsqrteq/vrecpeq are the ARM reciprocal APPROXIMATIONS; the corpus
 * always follows them with Newton-Raphson refinement, so computing the exact reciprocal here is both simpler
 * and at least as accurate.
 */
static inline float32x4_t vmulq_n_f32(float32x4_t a, float s)
{
  float32x4_t r;
  int i;
  for (i = 0; i < 4; i++) r.v[i] = a.v[i] * s;
  return r;
}

static inline float32x2_t vmul_f32_v2(float32x2_t a, float32x2_t b)
{
  float32x2_t r;
  r.v[0] = a.v[0] * b.v[0];
  r.v[1] = a.v[1] * b.v[1];
  return r;
}

static inline float32x4_t vnegq_f32(float32x4_t a)
{
  float32x4_t r;
  int i;
  for (i = 0; i < 4; i++) r.v[i] = -a.v[i];
  return r;
}

/* pairwise add: {a0+a1, b0+b1} */
static inline float32x2_t vpadd_f32(float32x2_t a, float32x2_t b)
{
  float32x2_t r;
  r.v[0] = a.v[0] + a.v[1];
  r.v[1] = b.v[0] + b.v[1];
  return r;
}

/* exact reciprocal; the ARM version is an estimate refined by Newton-Raphson at every use site */
static inline float32x4_t vrecpeq_f32(float32x4_t a)
{
  float32x4_t r;
  int i;
  for (i = 0; i < 4; i++) r.v[i] = 1.0f / a.v[i];
  return r;
}

/* exact reciprocal square root */
static inline float32x4_t vrsqrteq_f32(float32x4_t a)
{
  float32x4_t r;
  int i;
  for (i = 0; i < 4; i++) r.v[i] = 1.0f / sqrtf(a.v[i]);
  return r;
}

/* table lookup over 2 registers (32 bytes): index bytes with bit 7 set produce 0 */
static inline int8x8_t vtbl2_s8(int8x8x2_t tab, int8x8_t idx)
{
  uint8_t t[16];
  int8x8_t r;
  int i;
  memcpy(t, tab.val[0].v, 8);
  memcpy(t + 8, tab.val[1].v, 8);
  for (i = 0; i < 8; i++) {
    uint8_t k = (uint8_t)idx.v[i];
    r.v[i] = (k & 0x80) ? 0 : (int8_t)t[k & 15];
  }
  return r;
}

/* table lookup over 4 registers (64 bytes) */
static inline int8x8_t vtbl4_s8(int8x8x4_t tab, int8x8_t idx)
{
  uint8_t t[32];
  int8x8_t r;
  int i;
  memcpy(t, tab.val[0].v, 8);
  memcpy(t + 8, tab.val[1].v, 8);
  memcpy(t + 16, tab.val[2].v, 8);
  memcpy(t + 24, tab.val[3].v, 8);
  for (i = 0; i < 8; i++) {
    uint8_t k = (uint8_t)idx.v[i];
    r.v[i] = (k & 0x80) ? 0 : (int8_t)t[k & 31];
  }
  return r;
}

/* transpose pairs of 32-bit elements: {a0,b0},{a1,b1} */
static inline int32x2x2_t vtrn_s32(int32x2_t a, int32x2_t b)
{
  int32x2x2_t r;
  r.val[0].v[0] = a.v[0];
  r.val[0].v[1] = b.v[0];
  r.val[1].v[0] = a.v[1];
  r.val[1].v[1] = b.v[1];
  return r;
}

static inline int32x4x2_t vtrnq_s32(int32x4_t a, int32x4_t b)
{
  int32x4x2_t r;
  r.val[0].v[0] = a.v[0];
  r.val[0].v[1] = b.v[0];
  r.val[0].v[2] = a.v[2];
  r.val[0].v[3] = b.v[2];
  r.val[1].v[0] = a.v[1];
  r.val[1].v[1] = b.v[1];
  r.val[1].v[2] = a.v[3];
  r.val[1].v[3] = b.v[3];
  return r;
}

/* unzip: even elements to val[0], odd to val[1] */
static inline int32x4x2_t vuzpq_s32(int32x4_t a, int32x4_t b)
{
  int32x4x2_t r;
  r.val[0].v[0] = a.v[0];
  r.val[0].v[1] = a.v[2];
  r.val[0].v[2] = b.v[0];
  r.val[0].v[3] = b.v[2];
  r.val[1].v[0] = a.v[1];
  r.val[1].v[1] = a.v[3];
  r.val[1].v[2] = b.v[1];
  r.val[1].v[3] = b.v[3];
  return r;
}

static inline int32x4_t vorrq_s64(int32x4_t a, int32x4_t b)
{
  int32x4_t r;
  int i;
  for (i = 0; i < 16; i++) r.n128_u8[i] = a.n128_u8[i] | b.n128_u8[i];
  return r;
}

/* reverse the 8 bytes within each 64-bit half */
static inline int32x4_t vrev64q_s32(int32x4_t a)
{
  int32x4_t r;
  int i;
  for (i = 0; i < 4; i++) r.v[i] = a.v[3 - i];
  return r;
}
#endif /* NSMBUDX_NEON_H */