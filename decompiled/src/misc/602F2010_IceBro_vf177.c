/* IceBro_vf177
 * address: 0x602F2010   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n64 __fastcall IceBro_vf177(int a1)
{
  unsigned __int64 *v1; // r12
  unsigned __int64 *v2; // r5
  float v3; // s0
  float v4; // s4
  unsigned __int64 *v5; // r1
  unsigned int v6; // r4
  int32x2_t v7; // r2
  float32x4_t v8; // q9
  float32x4_t v9; // q11
  int32x4_t v10; // q10
  int32x4_t v11; // q12
  float32x4_t v12; // q15
  int8x16_t v13; // q10
  int8x16_t v14; // q12
  __n64 result; // d0
  int32x2_t v16; // [sp+8h] [bp-58h]
  float32x2_t v17; // [sp+10h] [bp-50h]

  v1 = (unsigned __int64 *)(a1 + 6336);
  v2 = (unsigned __int64 *)(a1 + 6320);
  v3 = FIELD_F32(a1, 6316);
  v4 = FIELD_F32(a1, 6332);
  v5 = (unsigned __int64 *)(a1 + 6304);
  v6 = dword_60C9278C;
  v7.n64_u32[1] = dword_60C92790;
  v7.n64_u32[0] = 0;
  v16.n64_u32[0] = 0;
  v17.n64_u32[0] = 0;
  if ( FIELD_U32(a1, 80) == 1 )
    v6 = dword_60C9278C ^ 0x80000000;
  v16.n64_u32[1] = v6;
  v17.n64_u32[1] = 1065353216;
  *v5 = 1065353216;
  FIELD_U64(a1, 6312) = 0;
  *v2 = 0x3F80000000000000LL;
  FIELD_U64(a1, 6328) = 0;
  *v1 = 0;
  FIELD_U64(a1, 6344) = 1065353216;
  v8.n128_u64[0] = *v5;
  v8.n128_u64[1] = FIELD_U64(a1, 6312);
  v9.n128_u64[0] = *v2;
  v9.n128_u64[1] = FIELD_U64(a1, 6328);
  v10 = vdupq_lane_s32(v16, 1);
  v11 = vdupq_lane_s32(v7, 1);
  v12.n128_u64[0] = *v1;
  v12.n128_u64[1] = FIELD_U64(a1, 6344);
  v13 = vextq_s8((int8x16_t)vzipq_s32(v10, v10).val, (int8x16_t)0LL, 0xCu);
  v14 = vextq_s8((int8x16_t)vzipq_s32(v11, v11).val, (int8x16_t)0LL, 0xCu);
  result.n64_f32[0] = v3
                    + COERCE_FLOAT(vaddq_f32(
                                     vextq_s8(v13, v13, 4u),
                                     vmlaq_lane_f32(
                                       vmlaq_lane_f32(vmulq_n_f32(v8, 1.0), v9, (float32x2_t)1065353216LL, 1),
                                       v12,
                                       v16,
                                       0)).n128_u32[3]);
  result.n64_f32[1] = v4
                    + COERCE_FLOAT(vaddq_f32(
                                     vextq_s8(v14, v14, 4u),
                                     vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v8, 0.0), v9, v17, 1), v12, v7, 0)).n128_u32[3]);
  return result;
}
