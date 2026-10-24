/* Player_setupWristNodes_79D5A0
 * address: 0x6079D5A0   size: 464   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Player_setupWristNodes_79D5A0(int a1, float32x2_t *a2)
{
  int v4; // r6
  float v5; // s18
  float v6; // s16
  float v7; // s20
  float v8; // s22
  int v9; // r0
  int32x2_t v10; // d3
  float32x2_t v11; // d0
  int32x2_t v12; // d1
  int32x4_t v13; // q10
  int32x4_t v14; // q12
  int32x2_t v15; // d5
  float32x4_t v16; // q14
  float32x4_t v17; // q9
  int32x4_t v18; // q1
  int8x16_t v19; // q10
  int8x16_t v20; // q12
  float32x4_t v21; // q8
  int8x16_t v22; // q11
  float v24; // [sp+8h] [bp-50h] BYREF
  float v25; // [sp+Ch] [bp-4Ch]
  float v26; // [sp+10h] [bp-48h]
  float v27[17]; // [sp+14h] [bp-44h] BYREF
  float32x4_t v28; // 0:q15.16

  v24 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
  v25 = COERCE_FLOAT("wrist_l1");
  v4 = a1 + 11360;
  sub_60793F04(FIELD_U32(a1, 11360), v27);
  sub_60793F04(*(_DWORD *)v4, &v24);
  v5 = (float)(v27[1] + v25) * 0.5;
  v6 = (float)(v27[2] + v26) * 0.5;
  v7 = (float)(v27[0] + v24) * 0.5;
  if ( FIELD_F32(v4, 808) != 0.0 )
  {
    v8 = FIELD_F32(a1, 112);
    v5 = v5 + (float)(FIELD_F32(v4, 808) * (float)((float)(v8 + sub_607B70FC(a1)) - v5));
  }
  FIELD_U32(a2, 0x0)[0] = 1065353216;
  FIELD_U32(a2, 0x0)[1] = 0;
  FIELD_U32(a2 + (1) * 8, 0x0)[0] = 0;
  FIELD_U32(a2 + (2) * 8, 0x0)[0] = 0;
  FIELD_U32(a2 + (2) * 8, 0x0)[1] = 1065353216;
  FIELD_U32(a2 + (3) * 8, 0x0)[0] = 0;
  FIELD_U32(a2 + (4) * 8, 0x0)[0] = 0;
  FIELD_U32(a2 + (4) * 8, 0x0)[1] = 0;
  FIELD_U32(a2 + (5) * 8, 0x0)[0] = 1065353216;
  FIELD_F32(a2 + (1) * 8, 0x0)[1] = v7;
  FIELD_F32(a2 + (3) * 8, 0x0)[1] = v5;
  FIELD_F32(a2 + (5) * 8, 0x0)[1] = v6;
  v9 = sub_6075EDC8(a1);
  v10.n64_u64[0] = FIELD_U64(a2 + (1) * 8, 0x0)[0];
  v11.n64_u64[0] = FIELD_U64(a2 + (2) * 8, 0x0)[0];
  v12.n64_u64[0] = FIELD_U64(a2 + (3) * 8, 0x0)[0];
  v13 = vdupq_lane_s32(v10, 1);
  v14 = vdupq_lane_s32(v12, 1);
  v28 = *(float32x4_t *)(v9 + 124);
  v15.n64_u64[0] = FIELD_U64(a2 + (5) * 8, 0x0)[0];
  v16 = vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)(v9 + 92), v11.n64_f32[0]), *(float32x4_t *)(v9 + 108), v11, 1);
  v17 = vmlaq_lane_f32(
          vmlaq_lane_f32(
            vmulq_n_f32(*(float32x4_t *)(v9 + 92), FIELD_F32(a2, 0x0)[0]),
            *(float32x4_t *)(v9 + 108),
            (float32x2_t)FIELD_U64(a2, 0x0)[0],
            1),
          v28,
          v10,
          0);
  v18 = vdupq_lane_s32(v15, 1);
  v19 = vextq_s8((int8x16_t)vzipq_s32(v13, v13).val, (int8x16_t)0, 0xCu);
  v20 = vextq_s8((int8x16_t)vzipq_s32(v14, v14).val, (int8x16_t)0, 0xCu);
  v21 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)(v9 + 92), FIELD_F32(a2 + (4) * 8, 0x0)[0]), *(float32x4_t *)(v9 + 108), a2[4], 1),
          v28,
          v15,
          0);
  v22 = vextq_s8((int8x16_t)vzipq_s32(v18, v18).val, (int8x16_t)0, 0xCu);
  *(float32x4_t *)FIELD_U64(a2, 0x0) = vaddq_f32(vextq_s8(v19, v19, 4u), v17);
  *(float32x4_t *)FIELD_U64(a2 + (2) * 8, 0x0) = vaddq_f32(vextq_s8(v20, v20, 4u), vmlaq_lane_f32(v16, v28, v12, 0));
  *(float32x4_t *)FIELD_U64(a2 + (4) * 8, 0x0) = vaddq_f32(vextq_s8(v22, v22, 4u), v21);
  return (*(int (__fastcall **)(int, float, float, float, float))(*(_DWORD *)a1 + 1064))(
           a1,
           v11.n64_f32[0],
           v11.n64_f32[1],
           v12.n64_f32[0],
           v12.n64_f32[1]);
}
