/* sub_6093D054
 * address: 0x6093D054   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6093D054(int a1, int a2, int a3, float32x2_t *a4)
{
  int v8; // r6
  int32x2_t v9; // d5
  int32x2_t v10; // d3
  int32x4_t v11; // q11
  int32x4_t v12; // q12
  int32x2_t v13; // d1
  int32x4_t v14; // q3
  int8x16_t v15; // q14
  float32x4_t v16; // q11
  float32x4_t v17; // q13
  float32x4_t v18; // q15
  int8x16_t v19; // q2
  int8x16_t v20; // q1
  float32x4_t v21; // q12
  float32x4_t v22; // q13
  float32x4_t v23; // q14
  int32x4_t v24; // q3
  float32x4_t v25; // q8
  int8x16_t v26; // q10
  _DWORD *v27; // r0
  int *result; // r0
  int v29; // r7
  int v30; // r5
  int v31; // r8
  int v32; // r6
  __int64 v33; // r0
  _OWORD v34[6]; // [sp+8h] [bp-68h] BYREF
  float32x4_t v35; // 0:q9.16

  v8 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 200) + 4) + 12);
  sub_6091DD8C(v8, a1);
  v9.n64_u64[0] = FIELD_U64(a4 + (1) * 8, 0x0)[0];
  v10.n64_u64[0] = a4[3].n64_u64[0];
  v35 = *(float32x4_t *)(a3 + 16);
  v11 = vdupq_lane_s32(v9, 1);
  v12 = vdupq_lane_s32(v10, 1);
  v13.n64_u64[0] = a4[5].n64_u64[0];
  v14 = vdupq_lane_s32(v13, 1);
  v15 = vextq_s8((int8x16_t)vzipq_s32(v11, v11).val, (int8x16_t)0, 0xCu);
  v16 = *(float32x4_t *)(a3 + 32);
  v17 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a3, FIELD_F32(a4, 0x0)[0]), v35, (float32x2_t)FIELD_U64(a4, 0x0)[0], 1),
          v16,
          v9,
          0);
  v18 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a3, FIELD_F32(a4 + (2) * 8, 0x0)[0]), v35, a4[2], 1), v16, v10, 0);
  v19 = vextq_s8((int8x16_t)vzipq_s32(v12, v12).val, (int8x16_t)0, 0xCu);
  v20 = vextq_s8((int8x16_t)vzipq_s32(v14, v14).val, (int8x16_t)0, 0xCu);
  v21 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a3, FIELD_F32(a4 + (4) * 8, 0x0)[0]), v35, a4[4], 1), v16, v13, 0);
  v22 = vaddq_f32(vextq_s8(v15, v15, 4u), v17);
  v23 = vextq_s8(v19, v19, 4u);
  *(float32x2_t *)&v19.n128_i8[8] = a4[7];
  v24 = vdupq_lane_s32(*(int32x2_t *)&v19.n128_i8[8], 1);
  v25 = vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a3, FIELD_F32(a4 + (6) * 8, 0x0)[0]), v35, a4[6], 1);
  v34[0] = v22;
  v34[1] = vaddq_f32(v23, v18);
  v26 = vextq_s8((int8x16_t)vzipq_s32(v24, v24).val, (int8x16_t)0, 0xCu);
  v34[2] = vaddq_f32(vextq_s8(v20, v20, 4u), v21);
  v34[3] = vaddq_f32(vextq_s8(v26, v26, 4u), vmlaq_lane_f32(v25, v16, *(float32x2_t *)&v19.n128_i8[8], 0));
  v27 = *(_DWORD **)(v8 + 612);
  if ( *v27 != -1 )
  {
    sub_6091B890(v27, a1, 16, (int)v34);
    v27 = *(_DWORD **)(v8 + 612);
  }
  if ( FIELD_U32(v8, 608) > 8u )
    v27 += 24;
  if ( *v27 != -1 )
    sub_6091B890(v27, a1, 4, a2);
  sub_60922278(dword_60CD0A28 + 2376, a1);
  result = &dword_60CD0A0C;
  v29 = dword_60CD0A0C;
  v30 = FIELD_U32(dword_60CD0A0C, 400);
  if ( v30 )
  {
    v31 = FIELD_U32(a1, 192);
    v32 = FIELD_U32(dword_60CD0A0C, 384);
    v33 = dword_60CC746C(dword_60CD0A0C + 408);
    return (int *)dword_60CC7874(v31, v32, FIELD_U32(v29, 380), v30, v33, HIDWORD(v33));
  }
  return result;
}
