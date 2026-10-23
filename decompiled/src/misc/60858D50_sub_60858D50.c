/* sub_60858D50
 * address: 0x60858D50   size: 636   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60858D50(float32x4_t *a1, int a2, int a3, int a4, float32x2_t a5)
{
  unsigned int v8; // r0
  bool v9; // zf
  bool v10; // zf
  unsigned __int32 v11; // r1
  int v12; // r7
  int result; // r0
  unsigned __int32 v14; // r2
  int32x2_t *v15; // r1
  unsigned __int32 v16; // r3
  float32x2_t *v17; // r7
  float32x2_t *v18; // r1
  float32x2_t v19; // d2
  int32x2_t v20; // d3
  int32x2_t v21; // d1
  int32x4_t v22; // q11
  int32x4_t v23; // q13
  int32x2_t v24; // d5
  int32x4_t v25; // q15
  int8x16_t v26; // q11
  float32x4_t v27; // q9
  float32x4_t v28; // q1
  float32x4_t v29; // q10
  float32x4_t v30; // q1
  int8x16_t v31; // q8
  int8x16_t v32; // q15
  bool v33; // zf
  float32x4_t *i; // r4
  __int8 *v35; // r4
  unsigned __int32 v36; // t1
  float v37; // s16
  char v38; // r9
  float32x4_t *j; // r4
  __int8 *v40; // r4
  unsigned __int32 v41; // t1
  float32x4_t v42; // 0:q10.16
  float32x4_t v43; // 0:q14.16

  v8 = a1[4].n128_u8[0];
  v9 = (v8 & 1) == 0;
  if ( (v8 & 1) == 0 )
    v9 = FIELD_U8(a3, 21) == 0;
  if ( !v9 )
  {
    v10 = FIELD_U8(a3, 23) == 0;
    if ( FIELD_U8(a3, 23) )
      v10 = FIELD_U32(a1, 0x0)[3] == 0;
    if ( v10 )
    {
      v11 = a1[4].n128_u8[1];
    }
    else
    {
      a5.n64_u32[0] = (unsigned int)(float)((float)a1[4].n128_u8[1] * FIELD_F32(a3, 16));
      v11 = a5.n64_u32[0];
    }
    a1[4].n128_u8[2] = v11;
    if ( v11 || (v8 & 2) == 0 || FIELD_U8(a3, 22) )
    {
      v12 = 1;
      if ( (v8 & 0x40) == 0 )
      {
        if ( (v8 & 0x20) != 0 )
        {
          v14 = FIELD_U32(a1, 0x0)[3];
          v15 = *(int32x2_t **)(a3 + 4);
          v16 = a1[8].n128_u32[0];
          if ( v14 )
            v15 = (int32x2_t *)(v14 + 80);
          v17 = v15 + 4;
          v19.n64_u64[0] = FIELD_U64(v15, 0x0)[0];
          v20.n64_u64[0] = v15[1].n64_u64[0];
          v18 = v15 + 2;
          a5.n64_u64[0] = FIELD_U64(v17, 0x0)[0];
          v21.n64_u64[0] = v17[1].n64_u64[0];
          v42 = *(float32x4_t *)(v16 + 16);
          v22 = vdupq_lane_s32(v20, 1);
          v23 = vdupq_lane_s32(v21, 1);
          v24.n64_u64[0] = v18[1].n64_u64[0];
          v25 = vdupq_lane_s32(v24, 1);
          v43 = *(float32x4_t *)(v16 + 32);
          v26 = vextq_s8((int8x16_t)vzipq_s32(v22, v22).val, (int8x16_t)0LL, 0xCu);
          v27 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_lane_f32(v42, v19, 1), *(float32x4_t *)v16, v19, 0), v43, v20, 0);
          v28 = vmulq_lane_f32(v42, (float32x2_t)FIELD_U64(v17, 0x0)[0], 1);
          v29 = vmlaq_lane_f32(
                  vmulq_lane_f32(v42, (float32x2_t)FIELD_U64(v18, 0x0)[0], 1),
                  *(float32x4_t *)v16,
                  (float32x2_t)FIELD_U64(v18, 0x0)[0],
                  0);
          v30 = vmlaq_lane_f32(v28, *(float32x4_t *)v16, (float32x2_t)FIELD_U64(v17, 0x0)[0], 0);
          v31 = vextq_s8((int8x16_t)vzipq_s32(v23, v23).val, (int8x16_t)0LL, 0xCu);
          v32 = vextq_s8((int8x16_t)vzipq_s32(v25, v25).val, (int8x16_t)0LL, 0xCu);
          a1[5] = vaddq_f32(vextq_s8(v26, v26, 4u), v27);
          a1[6] = vaddq_f32(vextq_s8(v32, v32, 4u), vmlaq_lane_f32(v29, v43, v24, 0));
          a1[7] = vaddq_f32(vextq_s8(v31, v31, 4u), vmlaq_lane_f32(v30, v43, v21, 0));
          goto LABEL_22;
        }
        v12 = 0;
        if ( (a4 | ((unsigned __int8)(v8 & 0x10) >> 4)) == 1 )
        {
          a1[4].n128_u8[0] = v8 & 0xEF;
          sub_60858FD0(a1, a3, a5.n64_f32[0]);
          v8 = a1[4].n128_u8[0];
LABEL_22:
          v12 = 1;
        }
      }
      v33 = (v8 & 2) == 0;
      if ( (v8 & 2) != 0 )
      {
        v8 = a1[4].n128_u8[1];
        v33 = v8 == 255;
      }
      if ( v33 )
      {
        for ( i = (float32x4_t *)a1[1].n128_u32[1]; i != &a1[1]; i = *((float32x4_t **)v35 + 2) )
        {
          v36 = i[-1].n128_u32[3];
          v35 = &i[-1].n128_i8[12];
          (*(void (__fastcall **)(__int8 *, int, int, int, float, float))(v36 + 76))(
            v35,
            a2,
            a3,
            v12,
            a5.n64_f32[0],
            a5.n64_f32[1]);
        }
      }
      else
      {
        v37 = FIELD_F32(a3, 16);
        v38 = FIELD_U8(a3, 23);
        FIELD_F32(a3, 16) = (float)((float)v8 * v37) * 0.0039216;
        FIELD_U8(a3, 23) = 1;
        for ( j = (float32x4_t *)a1[1].n128_u32[1]; j != &a1[1]; j = *((float32x4_t **)v40 + 2) )
        {
          v41 = j[-1].n128_u32[3];
          v40 = &j[-1].n128_i8[12];
          (*(void (__fastcall **)(__int8 *, int, int, int))(v41 + 76))(v40, a2, a3, v12);
        }
        FIELD_F32(a3, 16) = v37;
        FIELD_U8(a3, 23) = v38;
      }
      a1[4].n128_u8[0] |= 0x80u;
      result = a1[4].n128_u8[4] | 0x10;
      a1[4].n128_u8[4] = result;
      return result;
    }
  }
  if ( a4 == 1 )
  {
    LOBYTE(v8) = v8 | 0x10;
    a1[4].n128_u8[0] = v8;
  }
  result = v8 & 0x7F;
  a1[4].n128_u8[0] = result;
  return result;
}
