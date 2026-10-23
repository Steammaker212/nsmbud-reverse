/* sub_602CB9B0
 * address: 0x602CB9B0   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_602CB9B0(int a1, int a2, int a3)
{
  int32x4_t *v3; // r2
  float *v4; // r0
  float v5; // s0
  float result; // s0
  int32x4_t v7; // 0:^0.16
  int32x4_t v8; // 0:^10.16
  int32x4_t v9; // 0:^20.16
  int32x4x2_t v10; // 0:kr00_32.32
  int32x4x2_t v11; // 0:q8.16,16:q9.16
  int32x4x2_t v12; // 0:q9.16,16:q8.16
  int32x4x2_t v13; // 0:q10.16,16:q11.16
  int32x4x2_t v14; // 0:q11.16,16:q10.16

  **(_DWORD **)(a3 + 8) &= 0x33FFFFFFu;
  v3 = *(int32x4_t **)a3;
  v11 = vzipq_s32(*v3, v3[2]);
  v14 = vzipq_s32(v3[1], v3[3]);
  v10 = vzipq_s32(v11.val[0], v14.val[0]);
  v7.n128_u32[3] = v10.val[0].n128_u32[3];
  v11.val[1] = vzipq_s32(v11.val[1], v14.val[1]).val[0];
  v8.n128_u32[3] = v10.val[1].n128_u32[3];
  v4 = *(float **)(a1 + 4);
  v5 = (float)(*(float *)(*(_DWORD *)v4 + 144)
             + (float)((float)(v4[3] - *(float *)(*(_DWORD *)v4 + 144))
                     * (float)((float)((float)(*(float *)(*(_DWORD *)v4 + 144) + -1.0) / -1.5) + 3.0)))
     / *(float *)(*(_DWORD *)v4 + 144);
  v7.n128_f32[0] = v10.val[0].n128_f32[0] * v5;
  v7.n128_f32[1] = v5 * v10.val[0].n128_f32[1];
  v7.n128_f32[2] = v5 * v10.val[0].n128_f32[2];
  v8.n128_f32[0] = v5 * v10.val[1].n128_f32[0];
  v8.n128_f32[1] = v5 * v10.val[1].n128_f32[1];
  v8.n128_f32[2] = v5 * v10.val[1].n128_f32[2];
  v9.n128_f32[0] = v5 * v11.val[1].n128_f32[0];
  v9.n128_f32[1] = v5 * v11.val[1].n128_f32[1];
  result = v5 * v11.val[1].n128_f32[2];
  v9.n128_u64[1] = __PAIR64__(v11.val[1].n128_u32[3], LODWORD(result));
  v12 = vzipq_s32(v7, v8);
  v13 = vzipq_s32(v9, (int32x4_t)0);
  *v3 = vextq_s8(vextq_s8(v12.val[0], v12.val[0], 8u), v13.val[0], 8u);
  v3[1] = vextq_s8(v12.val[0], vextq_s8(v13.val[0], v12.val[0], 8u), 8u);
  v3[2] = vextq_s8(vextq_s8(v12.val[1], v12.val[1], 8u), v13.val[1], 8u);
  v3[3] = vextq_s8(v12.val[1], vextq_s8(v13.val[1], v12.val[1], 8u), 8u);
  return result;
}
