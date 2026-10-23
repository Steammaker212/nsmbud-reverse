/* CourseSelectScene_Zanki1P_00_ref_3_helper
 * address: 0x6050F27C   size: 668   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CourseSelectScene_Zanki1P_00_ref_3_helper(int a1, unsigned __int64 *a2)
{
  int result; // r0
  bool v4; // zf
  unsigned int v5; // r8
  unsigned __int64 v6; // d16
  unsigned __int64 v7; // d17
  unsigned __int64 *v8; // r2
  unsigned __int64 *v9; // r1
  unsigned __int64 v10; // d17
  unsigned __int64 v11; // d17
  unsigned __int32 v12; // r1
  unsigned __int32 v13; // r2
  unsigned __int32 v14; // r0
  unsigned int v15; // r0
  int32x4_t v16; // q14
  int32x4_t v17; // q9
  int32x4_t v18; // q15
  float32x4_t v19; // q11
  float32x4_t v20; // q13
  float32x4_t v21; // q8
  int8x16_t v22; // q9
  int8x16_t v23; // q14
  int8x16_t v24; // q10
  float32x4_t v25; // q9
  float32x4_t v26; // q11
  int32x4_t v27; // q14
  int32x4_t v28; // q9
  int32x4_t v29; // q15
  int8x16_t v30; // q9
  int8x16_t v31; // q14
  int8x16_t v32; // q10
  Vec3 v33; // [sp+14h] [bp-104h] BYREF
  float32x4_t v34; // [sp+20h] [bp-F8h]
  float32x4_t v35; // [sp+30h] [bp-E8h]
  float32x4_t v36; // [sp+40h] [bp-D8h]
  float32x4_t v37; // [sp+50h] [bp-C8h]
  float32x4_t v38; // [sp+60h] [bp-B8h]
  float32x4_t v39; // [sp+70h] [bp-A8h]
  float32x2_t v40; // [sp+80h] [bp-98h]
  int32x2_t v41; // [sp+88h] [bp-90h]
  float32x2_t v42; // [sp+90h] [bp-88h]
  int32x2_t v43; // [sp+98h] [bp-80h]
  float32x2_t v44; // [sp+A0h] [bp-78h]
  int32x2_t v45; // [sp+A8h] [bp-70h]
  float32x2_t v46; // [sp+B0h] [bp-68h]
  int32x2_t v47; // [sp+B8h] [bp-60h]
  float32x2_t v48; // [sp+C0h] [bp-58h]
  int32x2_t v49; // [sp+C8h] [bp-50h]
  float32x2_t v50; // [sp+D0h] [bp-48h]
  int32x2_t v51; // [sp+D8h] [bp-40h]
  float32x4_t v52; // 0:q8.16
  float32x4_t v53; // 0:q10.16
  float32x4_t v54; // 0:q12.16

  result = FIELD_U32(a1, 3720);
  v4 = result == 0;
  if ( result )
  {
    a2 = *(unsigned __int64 **)(result + 12);
    v4 = a2 == 0;
  }
  if ( !v4 )
  {
    v5 = 0;
    v6 = a2[10];
    v7 = a2[11];
    v8 = a2 + 12;
    v9 = a2 + 14;
    v46.n64_u64[0] = v6;
    v47.n64_u64[0] = v7;
    v10 = v8[1];
    v48.n64_u64[0] = *v8;
    v49.n64_u64[0] = v10;
    v11 = v9[1];
    v50.n64_u64[0] = *v9;
    v51.n64_u64[0] = v11;
    v12 = FIELD_U32(result, 24);
    v13 = FIELD_U32(result, 28);
    v14 = FIELD_U32(result, 32);
    v40.n64_u64[0] = 1065353216;
    v41.n64_u32[0] = 0;
    v42.n64_u64[0] = 0x3F80000000000000LL;
    v43.n64_u32[0] = 0;
    v44.n64_u64[0] = 0;
    v45.n64_u32[0] = 1065353216;
    v41.n64_u32[1] = v12;
    v43.n64_u32[1] = v13;
    v45.n64_u32[1] = v14;
    do
    {
      result = *(_DWORD *)(a1 + 3760 + 4 * v5);
      if ( result != 7 )
      {
        v4 = result == 6;
        v15 = v5;
        if ( v4 )
          v15 = v5 + 4;
        if ( v15 >= 8 )
          v15 = 0;
        result = *(_DWORD *)(a1 + 4 * v15 + 3724);
        if ( result )
        {
          v52 = *(float32x4_t *)(result + 80);
          v16 = vdupq_lane_s32(v43, 1);
          v17 = vdupq_lane_s32(v41, 1);
          v53 = *(float32x4_t *)(result + 96);
          v54 = *(float32x4_t *)(result + 112);
          v18 = vdupq_lane_s32(v45, 1);
          v19 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v52, v40.n64_f32[0]), v53, v40, 1), v54, v41, 0);
          v20 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v52, v42.n64_f32[0]), v53, v42, 1), v54, v43, 0);
          v21 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v52, v44.n64_f32[0]), v53, v44, 1), v54, v45, 0);
          v22 = vextq_s8((int8x16_t)vzipq_s32(v17, v17).val, (int8x16_t)0LL, 0xCu);
          v23 = vextq_s8((int8x16_t)vzipq_s32(v16, v16).val, (int8x16_t)0LL, 0xCu);
          v24 = vextq_s8((int8x16_t)vzipq_s32(v18, v18).val, (int8x16_t)0LL, 0xCu);
          v25 = vaddq_f32(vextq_s8(v22, v22, 4u), v19);
          v26 = vextq_s8(v23, v23, 4u);
          v27 = vdupq_lane_s32(v49, 1);
          v37 = v25;
          v38 = vaddq_f32(v26, v20);
          v28 = vdupq_lane_s32(v47, 1);
          v39 = vaddq_f32(vextq_s8(v24, v24, 4u), v21);
          v29 = vdupq_lane_s32(v51, 1);
          v30 = vextq_s8((int8x16_t)vzipq_s32(v28, v28).val, (int8x16_t)0LL, 0xCu);
          v31 = vextq_s8((int8x16_t)vzipq_s32(v27, v27).val, (int8x16_t)0LL, 0xCu);
          v32 = vextq_s8((int8x16_t)vzipq_s32(v29, v29).val, (int8x16_t)0LL, 0xCu);
          v34 = vaddq_f32(
                  vextq_s8(v30, v30, 4u),
                  vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v37, v46.n64_f32[0]), v38, v46, 1), v39, v47, 0));
          v35 = vaddq_f32(
                  vextq_s8(v31, v31, 4u),
                  vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v37, v48.n64_f32[0]), v38, v48, 1), v39, v49, 0));
          v36 = vaddq_f32(
                  vextq_s8(v32, v32, 4u),
                  vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v37, v50.n64_f32[0]), v38, v50, 1), v39, v51, 0));
          LODWORD(v33.x) = v34.n128_u32[3];
          LODWORD(v33.y) = v35.n128_u32[3];
          LODWORD(v33.z) = v36.n128_u32[3];
          result = EffectData_create(653, &v33, 0, 0);
        }
      }
      ++v5;
    }
    while ( v5 != 4 );
  }
  return result;
}
