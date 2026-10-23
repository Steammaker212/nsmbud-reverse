/* sub_60292ADC
 * address: 0x60292ADC   size: 568   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_60292ADC(int a1)
{
  float *v1; // r4
  float32x4_t v2; // q12
  int32x4_t v3; // q11
  int32x4_t v4; // q14
  float32x4_t v5; // q8
  float32x4_t v6; // q9
  float32x4_t v7; // q15
  int8x16_t v8; // q11
  int8x16_t v9; // q14
  float32x4_t v10; // q10
  int32x4_t v11; // q12
  int8x16_t v12; // q12
  _DWORD *v13; // r0
  _DWORD *v14; // r1
  float v15; // s2
  __n128 result; // q0
  float v17; // s6
  float v18; // s4
  unsigned __int64 v19; // kr00_8
  float32x4_t v20; // [sp+30h] [bp-40h] BYREF
  float32x4_t v21; // [sp+40h] [bp-30h]
  float32x4_t v22; // [sp+50h] [bp-20h]

  v1 = (float *)(a1 + 7500);
  (*(void (__fastcall **)(_DWORD, int, float32x4_t *))(***(_DWORD ***)(a1 + 7500) + 108))(
    **(_DWORD **)(a1 + 7500),
    6,
    &v20);
  *(v1 - 297) = v20.n128_f32[3];
  *(v1 - 296) = v21.n128_f32[3];
  *(v1 - 295) = v22.n128_f32[3];
  v2.n128_u64[0] = 0x3F80000000000000LL;
  v2.n128_u64[1] = 0x4110000000000000LL;
  v3 = vdupq_lane_s32(*(int32x2_t *)&v20.n128_i8[8], 1);
  v4 = vdupq_lane_s32(*(int32x2_t *)&v21.n128_i8[8], 1);
  v5.n128_u64[0] = 0;
  v5.n128_u64[1] = 1065353216;
  v6 = vmlaq_lane_f32(
         vmlaq_lane_f32(vmulq_n_f32((float32x4_t)0x3F800000uLL, v20.n128_f32[0]), v2, (float32x2_t)v20.n128_u64[0], 1),
         v5,
         *(float32x2_t *)&v20.n128_i8[8],
         0);
  v7 = vmlaq_lane_f32(
         vmlaq_lane_f32(vmulq_n_f32((float32x4_t)0x3F800000uLL, v21.n128_f32[0]), v2, (float32x2_t)v21.n128_u64[0], 1),
         v5,
         *(float32x2_t *)&v21.n128_i8[8],
         0);
  v8 = vextq_s8((int8x16_t)vzipq_s32(v3, v3).val, (int8x16_t)0, 0xCu);
  v9 = vextq_s8((int8x16_t)vzipq_s32(v4, v4).val, (int8x16_t)0, 0xCu);
  v10 = vmlaq_lane_f32(vmulq_n_f32((float32x4_t)0x3F800000uLL, v22.n128_f32[0]), v2, (float32x2_t)v22.n128_u64[0], 1);
  v11 = vdupq_lane_s32(*(int32x2_t *)&v22.n128_i8[8], 1);
  v20 = vaddq_f32(vextq_s8(v8, v8, 4u), v6);
  v12 = vextq_s8((int8x16_t)vzipq_s32(v11, v11).val, (int8x16_t)0, 0xCu);
  v21 = vaddq_f32(vextq_s8(v9, v9, 4u), v7);
  v22 = vaddq_f32(vextq_s8(v12, v12, 4u), vmlaq_lane_f32(v10, v5, *(float32x2_t *)&v22.n128_i8[8], 0));
  v13 = (_DWORD *)v20.n128_u32[3];
  *(v1 - 288) = v20.n128_f32[3];
  v14 = (_DWORD *)v21.n128_u32[3];
  *(v1 - 287) = v21.n128_f32[3];
  v15 = v22.n128_f32[3];
  *(v1 - 286) = v22.n128_f32[3];
  *((_DWORD *)v1 - 294) = v13;
  *((_DWORD *)v1 - 293) = v14;
  *(v1 - 292) = v15 + -48.0;
  (*(void (__fastcall **)(_DWORD, int, float32x4_t *))(***(_DWORD ***)v1 + 108))(**(_DWORD **)v1, 5, &v20);
  *(v1 - 291) = v20.n128_f32[3];
  *(v1 - 290) = v21.n128_f32[3];
  *(v1 - 289) = v22.n128_f32[3];
  (*(void (__fastcall **)(_DWORD, int, float32x4_t *))(***(_DWORD ***)v1 + 108))(**(_DWORD **)v1, 6, &v20);
  result.n128_f32[0] = v20.n128_f32[3]
                     + (float)((float)((float)(v20.n128_f32[1] * 16.0) + (float)(v20.n128_f32[0] * 0.0))
                             + (float)(v20.n128_f32[2] * 0.0));
  v21.n128_f32[3] = v21.n128_f32[3]
                  + (float)((float)((float)(v21.n128_f32[1] * 16.0) + (float)(v21.n128_f32[0] * 0.0))
                          + (float)(v21.n128_f32[2] * 0.0));
  result.n128_f32[2] = v21.n128_f32[3];
  v17 = v22.n128_f32[1];
  v18 = v22.n128_f32[0];
  v19 = v22.n128_u64[1];
  *(v1 - 193) = result.n128_f32[0];
  *(v1 - 192) = result.n128_f32[2];
  *(v1 - 191) = *((float *)&v19 + 1)
              + (float)((float)((float)(v17 * 16.0) + (float)(v18 * 0.0)) + (float)(*(float *)&v19 * 0.0));
  return result;
}
