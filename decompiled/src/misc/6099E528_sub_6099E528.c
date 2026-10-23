/* sub_6099E528
 * address: 0x6099E528   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n64 __fastcall sub_6099E528(int a1, float a2)
{
  float v2; // s4
  float v3; // s2
  int v4; // r1
  float v5; // s6
  float v6; // s0
  float v7; // s8
  float *v8; // r2
  int v9; // r0
  float v10; // s0
  float32x4_t v11; // q12
  float32x4_t v12; // q9
  float v13; // s5
  unsigned __int64 v14; // d26
  unsigned __int64 v15; // d20
  unsigned __int64 v16; // d22
  float v17; // s6
  __n64 result; // d0
  float32x4_t v19; // 0:^60.16
  float32x4_t v20; // 0:^70.16

  v2 = 0.0;
  v3 = FIELD_F32(a1, 32);
  v4 = 0;
  v5 = v3 + 0.0;
  v6 = FIELD_F32(a1, 2304) * a2;
  if ( (float)(v3 + 0.0) < v6 )
  {
    v7 = 0.0;
    v8 = (float *)(a1 + 68);
    v4 = 0;
    while ( 1 )
    {
      v2 = v5;
      if ( v4 >= FIELD_U32(a1, 2308) - 2 )
        break;
      v3 = *v8;
      v7 = v5;
      v8 += 9;
      ++v4;
      v5 = v5 + v3;
      if ( (float)(v2 + v3) >= v6 )
        goto LABEL_7;
    }
    v2 = v7;
  }
LABEL_7:
  v9 = a1 + 36 * v4;
  v10 = (float)(v6 - v2) / v3;
  v19.n128_f32[0] = v3 * FIELD_F32(v9, 16);
  v19.n128_f32[1] = v3 * FIELD_F32(v9, 20);
  v19.n128_f32[2] = v3 * FIELD_F32(v9, 24);
  v19.n128_u32[3] = 1065353216;
  v20.n128_f32[0] = v3 * FIELD_F32(v9, 52);
  v20.n128_f32[1] = v3 * FIELD_F32(v9, 56);
  v20.n128_f32[2] = v3 * FIELD_F32(v9, 60);
  v20.n128_u32[3] = 1065353216;
  v11.n128_u64[0] = *(_QWORD *)v9;
  v11.n128_u64[1] = FIELD_U32(v9, 8) | 0x3F80000000000000LL;
  v12.n128_u64[0] = FIELD_U64(v9, 36);
  v12.n128_u64[1] = FIELD_U32(v9, 44) | 0x3F80000000000000LL;
  v13 = v10 * (float)(v10 * v10);
  v14 = vmlaq_lane_f32(
          vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(v11, dword_60C60CF0[0].n64_f32[0]), v12, dword_60C60CF0[0], 1),
            v19,
            unk_60C60CF8,
            0),
          v20,
          unk_60C60CF8,
          1).n128_u64[0];
  v15 = vmlaq_lane_f32(
          vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(v11, dword_60C60D00[0].n64_f32[0]), v12, dword_60C60D00[0], 1),
            v19,
            unk_60C60D08,
            0),
          v20,
          unk_60C60D08,
          1).n128_u64[0];
  v16 = vmlaq_lane_f32(
          vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(v11, dword_60C60D10[0].n64_f32[0]), v12, dword_60C60D10[0], 1),
            v19,
            unk_60C60D18,
            0),
          v20,
          unk_60C60D18,
          1).n128_u64[0];
  v11.n128_u64[0] = vmlaq_lane_f32(
                      vmlaq_lane_f32(
                        vmlaq_lane_f32(vmulq_n_f32(v11, dword_60C60D20[0].n64_f32[0]), v12, dword_60C60D20[0], 1),
                        v19,
                        unk_60C60D28,
                        0),
                      v20,
                      unk_60C60D28,
                      1).n128_u64[0];
  v17 = (float)((float)((float)(v10 * v10) * *((float *)&v15 + 1)) + (float)(v13 * *((float *)&v14 + 1)))
      + (float)(v10 * *((float *)&v16 + 1));
  result.n64_f32[0] = v11.n128_f32[0]
                    + (float)((float)((float)((float)(v10 * v10) * *(float *)&v15) + (float)(v13 * *(float *)&v14))
                            + (float)(v10 * *(float *)&v16));
  result.n64_f32[1] = v11.n128_f32[1] + v17;
  return result;
}
