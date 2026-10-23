/* sub_6037C5BC
 * address: 0x6037C5BC   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int32 __fastcall sub_6037C5BC(int a1)
{
  float *v1; // r4
  float32x4_t v2; // q10
  int32x4_t v3; // q9
  int32x4_t v4; // q15
  float32x4_t v5; // q13
  float32x4_t v6; // q14
  float32x4_t v7; // q8
  int8x16_t v8; // q9
  int32x4_t v9; // q2
  int8x16_t v10; // q15
  int8x16_t v11; // q10
  _DWORD *v12; // r0
  _DWORD *v13; // r1
  float v14; // s2
  unsigned __int32 result; // r0
  float32x4_t v16; // [sp+30h] [bp-40h] BYREF
  float32x4_t v17; // [sp+40h] [bp-30h]
  float32x4_t v18; // [sp+50h] [bp-20h]

  v1 = (float *)(a1 + 7500);
  (*(void (__fastcall **)(_DWORD, int, float32x4_t *))(***(_DWORD ***)(a1 + 7500) + 108))(
    **(_DWORD **)(a1 + 7500),
    6,
    &v16);
  *(v1 - 297) = v16.n128_f32[3];
  *(v1 - 296) = v17.n128_f32[3];
  *(v1 - 295) = v18.n128_f32[3];
  v2.n128_u64[0] = 0x3F80000000000000LL;
  v2.n128_u64[1] = 0x4120000000000000LL;
  v3 = vdupq_lane_s32(*(int32x2_t *)&v16.n128_i8[8], 1);
  v4 = vdupq_lane_s32(*(int32x2_t *)&v17.n128_i8[8], 1);
  v5.n128_u64[0] = 0;
  v5.n128_u64[1] = 1065353216;
  v6 = vmlaq_lane_f32(
         vmlaq_lane_f32(vmulq_n_f32((float32x4_t)0x3F800000uLL, v17.n128_f32[0]), v2, (float32x2_t)v17.n128_u64[0], 1),
         v5,
         *(float32x2_t *)&v17.n128_i8[8],
         0);
  v7 = vmlaq_lane_f32(
         vmlaq_lane_f32(vmulq_n_f32((float32x4_t)0x3F800000uLL, v18.n128_f32[0]), v2, (float32x2_t)v18.n128_u64[0], 1),
         v5,
         *(float32x2_t *)&v18.n128_i8[8],
         0);
  v8 = vextq_s8((int8x16_t)vzipq_s32(v3, v3).val, (int8x16_t)0, 0xCu);
  v9 = vdupq_lane_s32(*(int32x2_t *)&v18.n128_i8[8], 1);
  v10 = vextq_s8((int8x16_t)vzipq_s32(v4, v4).val, (int8x16_t)0, 0xCu);
  v16 = vaddq_f32(
          vextq_s8(v8, v8, 4u),
          vmlaq_lane_f32(
            vmlaq_lane_f32(
              vmulq_n_f32((float32x4_t)0x3F800000uLL, v16.n128_f32[0]),
              v2,
              (float32x2_t)v16.n128_u64[0],
              1),
            v5,
            *(float32x2_t *)&v16.n128_i8[8],
            0));
  v11 = vextq_s8((int8x16_t)vzipq_s32(v9, v9).val, (int8x16_t)0, 0xCu);
  v17 = vaddq_f32(vextq_s8(v10, v10, 4u), v6);
  v18 = vaddq_f32(vextq_s8(v11, v11, 4u), v7);
  v12 = (_DWORD *)v16.n128_u32[3];
  *(v1 - 288) = v16.n128_f32[3];
  v13 = (_DWORD *)v17.n128_u32[3];
  *(v1 - 287) = v17.n128_f32[3];
  v14 = v18.n128_f32[3];
  *(v1 - 286) = v18.n128_f32[3];
  *((_DWORD *)v1 - 294) = v12;
  *((_DWORD *)v1 - 293) = v13;
  *(v1 - 292) = v14 + -48.0;
  (*(void (__fastcall **)(_DWORD, int, float32x4_t *))(***(_DWORD ***)v1 + 108))(**(_DWORD **)v1, 5, &v16);
  *(v1 - 291) = v16.n128_f32[3];
  *(v1 - 290) = v17.n128_f32[3];
  result = v18.n128_u32[3];
  *(v1 - 289) = v18.n128_f32[3];
  return result;
}
