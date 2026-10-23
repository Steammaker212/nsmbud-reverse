/* CourseSelectScene_Zanki1P_00_ref_2_helper
 * address: 0x6050E4E4   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CourseSelectScene_Zanki1P_00_ref_2_helper(int result, int a2, unsigned __int64 *a3)
{
  _DWORD *v3; // r1
  bool v4; // zf
  unsigned __int64 v5; // d16
  unsigned __int64 v6; // d17
  unsigned __int64 *v7; // r3
  unsigned __int64 *v8; // r2
  unsigned __int64 v9; // d17
  unsigned __int64 v10; // d17
  unsigned __int32 v11; // r3
  unsigned __int32 v12; // r2
  unsigned __int32 v13; // r1
  int32x4_t v14; // q11
  int32x4_t v15; // q13
  float32x4_t v16; // q9
  int8x16_t v17; // q11
  int32x4_t v18; // q2
  float32x4_t v19; // q14
  float32x4_t v20; // q10
  int8x16_t v21; // q13
  int8x16_t v22; // q12
  float32x4_t v23; // q9
  int32x4_t v24; // q10
  int32x4_t v25; // q12
  int8x16_t v26; // q10
  int32x4_t v27; // q2
  int8x16_t v28; // q12
  int8x16_t v29; // q8
  Vec3 v30; // [sp+4h] [bp-B4h] BYREF
  float32x4_t v31; // [sp+10h] [bp-A8h]
  float32x4_t v32; // [sp+20h] [bp-98h]
  float32x4_t v33; // [sp+30h] [bp-88h]
  float32x4_t v34; // [sp+40h] [bp-78h]
  float32x4_t v35; // [sp+50h] [bp-68h]
  float32x4_t v36; // [sp+60h] [bp-58h]
  float32x2_t v37; // [sp+70h] [bp-48h]
  int32x2_t v38; // [sp+78h] [bp-40h]
  float32x2_t v39; // [sp+80h] [bp-38h]
  int32x2_t v40; // [sp+88h] [bp-30h]
  float32x2_t v41; // [sp+90h] [bp-28h]
  int32x2_t v42; // [sp+98h] [bp-20h]
  float32x4_t v43; // 0:q10.16
  float32x4_t v44; // 0:q15.16

  v3 = *(_DWORD **)(result + 3640);
  v4 = v3 == 0;
  if ( v3 )
  {
    a3 = (unsigned __int64 *)v3[3];
    v4 = a3 == 0;
  }
  if ( !v4 )
  {
    v5 = a3[10];
    v6 = a3[11];
    v7 = a3 + 12;
    v8 = a3 + 14;
    v37.n64_u64[0] = v5;
    v38.n64_u64[0] = v6;
    v9 = v7[1];
    v39.n64_u64[0] = *v7;
    v40.n64_u64[0] = v9;
    v10 = v8[1];
    v41.n64_u64[0] = *v8;
    v42.n64_u64[0] = v10;
    v11 = v3[6];
    v12 = v3[7];
    v13 = v3[8];
    v31.n128_u64[0] = 1065353216;
    v31.n128_u32[2] = 0;
    v32.n128_u64[0] = 0x3F80000000000000LL;
    v32.n128_u32[2] = 0;
    v33.n128_u64[0] = 0;
    v33.n128_u32[2] = 1065353216;
    v31.n128_u32[3] = v11;
    v32.n128_u32[3] = v12;
    v33.n128_u32[3] = v13;
    result = FIELD_U32(result, 3644);
    if ( result )
    {
      v43 = *(float32x4_t *)(result + 80);
      v14 = vdupq_lane_s32(*(int32x2_t *)&v31.n128_i8[8], 1);
      v15 = vdupq_lane_s32(*(int32x2_t *)&v32.n128_i8[8], 1);
      v16 = vmlaq_lane_f32(
              vmulq_n_f32(v43, v31.n128_f32[0]),
              *(float32x4_t *)(result + 96),
              (float32x2_t)v31.n128_u64[0],
              1);
      v44 = *(float32x4_t *)(result + 112);
      v17 = vextq_s8((int8x16_t)vzipq_s32(v14, v14).val, (int8x16_t)0, 0xCu);
      v18 = vdupq_lane_s32(*(int32x2_t *)&v33.n128_i8[8], 1);
      v19 = vmlaq_lane_f32(
              vmlaq_lane_f32(
                vmulq_n_f32(v43, v32.n128_f32[0]),
                *(float32x4_t *)(result + 96),
                (float32x2_t)v32.n128_u64[0],
                1),
              v44,
              *(float32x2_t *)&v32.n128_i8[8],
              0);
      v20 = vmlaq_lane_f32(
              vmlaq_lane_f32(
                vmulq_n_f32(v43, v33.n128_f32[0]),
                *(float32x4_t *)(result + 96),
                (float32x2_t)v33.n128_u64[0],
                1),
              v44,
              *(float32x2_t *)&v33.n128_i8[8],
              0);
      v21 = vextq_s8((int8x16_t)vzipq_s32(v15, v15).val, (int8x16_t)0, 0xCu);
      v22 = vextq_s8((int8x16_t)vzipq_s32(v18, v18).val, (int8x16_t)0, 0xCu);
      v34 = vaddq_f32(vextq_s8(v17, v17, 4u), vmlaq_lane_f32(v16, v44, *(float32x2_t *)&v31.n128_i8[8], 0));
      v23 = vaddq_f32(vextq_s8(v22, v22, 4u), v20);
      v24 = vdupq_lane_s32(v38, 1);
      v35 = vaddq_f32(vextq_s8(v21, v21, 4u), v19);
      v25 = vdupq_lane_s32(v40, 1);
      v36 = v23;
      v26 = vextq_s8((int8x16_t)vzipq_s32(v24, v24).val, (int8x16_t)0, 0xCu);
      v27 = vdupq_lane_s32(v42, 1);
      v28 = vextq_s8((int8x16_t)vzipq_s32(v25, v25).val, (int8x16_t)0, 0xCu);
      v29 = vextq_s8((int8x16_t)vzipq_s32(v27, v27).val, (int8x16_t)0, 0xCu);
      v31 = vaddq_f32(
              vextq_s8(v26, v26, 4u),
              vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v34, v37.n64_f32[0]), v35, v37, 1), v23, v38, 0));
      v32 = vaddq_f32(
              vextq_s8(v28, v28, 4u),
              vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v34, v39.n64_f32[0]), v35, v39, 1), v23, v40, 0));
      v33 = vaddq_f32(
              vextq_s8(v29, v29, 4u),
              vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v34, v41.n64_f32[0]), v35, v41, 1), v23, v42, 0));
      LODWORD(v30.x) = v31.n128_u32[3];
      LODWORD(v30.y) = v32.n128_u32[3];
      LODWORD(v30.z) = v33.n128_u32[3];
      return EffectData_create(653, &v30, 0, 0);
    }
  }
  return result;
}
