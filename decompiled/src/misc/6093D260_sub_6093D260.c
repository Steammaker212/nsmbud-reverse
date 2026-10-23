/* sub_6093D260
 * address: 0x6093D260   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6093D260(int a1, int a2, int *a3, int a4, float32x2_t *a5, int a6)
{
  int32x2_t v10; // d5
  int32x2_t v11; // d3
  int32x4_t v12; // q11
  int32x4_t v13; // q12
  int32x2_t v14; // d1
  int32x4_t v15; // q3
  int8x16_t v16; // q14
  float32x4_t v17; // q11
  float32x4_t v18; // q13
  float32x4_t v19; // q15
  int8x16_t v20; // q2
  int8x16_t v21; // q1
  float32x4_t v22; // q12
  float32x4_t v23; // q13
  float32x4_t v24; // q14
  int32x4_t v25; // q3
  float32x4_t v26; // q8
  int8x16_t v27; // q10
  _DWORD *v28; // r0
  int *result; // r0
  int v30; // r7
  int v31; // r5
  int v32; // r8
  int v33; // r6
  __int64 v34; // r0
  _OWORD v35[6]; // [sp+8h] [bp-68h] BYREF
  float32x4_t v36; // 0:q9.16

  sub_6091D95C(a2);
  sub_60920FDC(a3, a1, *(char **)(a2 + 636));
  v36 = *(float32x4_t *)(a4 + 16);
  v10.n64_u64[0] = a5[1].n64_u64[0];
  v11.n64_u64[0] = a5[3].n64_u64[0];
  v12 = vdupq_lane_s32(v10, 1);
  v13 = vdupq_lane_s32(v11, 1);
  v14.n64_u64[0] = a5[5].n64_u64[0];
  v15 = vdupq_lane_s32(v14, 1);
  v16 = vextq_s8((int8x16_t)vzipq_s32(v12, v12).val, (int8x16_t)0, 0xCu);
  v17 = *(float32x4_t *)(a4 + 32);
  v18 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a4, FIELD_F32(a5, 0x0)[0]), v36, (float32x2_t)FIELD_U64(a5, 0x0)[0], 1),
          v17,
          v10,
          0);
  v19 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a4, a5[2].n64_f32[0]), v36, a5[2], 1), v17, v11, 0);
  v20 = vextq_s8((int8x16_t)vzipq_s32(v13, v13).val, (int8x16_t)0, 0xCu);
  v21 = vextq_s8((int8x16_t)vzipq_s32(v15, v15).val, (int8x16_t)0, 0xCu);
  v22 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a4, a5[4].n64_f32[0]), v36, a5[4], 1), v17, v14, 0);
  v23 = vaddq_f32(vextq_s8(v16, v16, 4u), v18);
  v24 = vextq_s8(v20, v20, 4u);
  *(float32x2_t *)&v20.n128_i8[8] = a5[7];
  v25 = vdupq_lane_s32(*(int32x2_t *)&v20.n128_i8[8], 1);
  v26 = vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a4, a5[6].n64_f32[0]), v36, a5[6], 1);
  v35[0] = v23;
  v35[1] = vaddq_f32(v24, v19);
  v27 = vextq_s8((int8x16_t)vzipq_s32(v25, v25).val, (int8x16_t)0, 0xCu);
  v35[2] = vaddq_f32(vextq_s8(v21, v21, 4u), v22);
  v35[3] = vaddq_f32(vextq_s8(v27, v27, 4u), vmlaq_lane_f32(v26, v17, *(float32x2_t *)&v20.n128_i8[8], 0));
  v28 = *(_DWORD **)(a2 + 612);
  if ( *v28 != -1 )
  {
    sub_6091B890(v28, a1, 16, (int)v35);
    v28 = *(_DWORD **)(a2 + 612);
  }
  if ( FIELD_U32(a2, 608) > 8u )
    v28 += 24;
  if ( *v28 != -1 )
    sub_6091B890(v28, a1, 4, a6);
  sub_60922278(dword_60CD0A28 + 2376, a1);
  result = &dword_60CD0A0C;
  v30 = dword_60CD0A0C;
  v31 = FIELD_U32(dword_60CD0A0C, 400);
  if ( v31 )
  {
    v32 = FIELD_U32(a1, 192);
    v33 = FIELD_U32(dword_60CD0A0C, 384);
    v34 = dword_60CC746C(dword_60CD0A0C + 408);
    return (int *)dword_60CC7874(v32, v33, FIELD_U32(v30, 380), v31, v34, HIDWORD(v34));
  }
  return result;
}
