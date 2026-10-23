/* sub_6042DAA4
 * address: 0x6042DAA4   size: 692   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6042DAA4(int a1, int a2, int a3, int32x2_t *a4, _DWORD *a5)
{
  float32x2_t *v6; // r0
  float32x2_t *v7; // r3
  float32x2_t v8; // d4
  int32x2_t v9; // d5
  int32x2_t v11; // d3
  int32x2_t v12; // d1
  int32x4_t v13; // q10
  int32x4_t v14; // q15
  float32x4_t v15; // q13
  float32x4_t v16; // q14
  float32x4_t v17; // q9
  int8x16_t v18; // q10
  int32x4_t v19; // q2
  int8x16_t v20; // q15
  int8x16_t v21; // q11
  _DWORD *v22; // r0
  _DWORD *v23; // r1
  _DWORD *result; // r0
  _OWORD v25[3]; // [sp+0h] [bp-140h] BYREF
  _DWORD v26[16]; // [sp+30h] [bp-110h] BYREF
  _DWORD v27[16]; // [sp+70h] [bp-D0h] BYREF
  float32x4_t v28; // [sp+B0h] [bp-90h] BYREF
  float32x4_t v29; // [sp+C0h] [bp-80h]
  float32x4_t v30; // [sp+D0h] [bp-70h]
  __int64 v31; // [sp+E0h] [bp-60h]
  __int64 v32; // [sp+E8h] [bp-58h]
  float32x4_t v33; // [sp+F0h] [bp-50h]
  float32x4_t v34; // [sp+100h] [bp-40h]
  float32x4_t v35; // [sp+110h] [bp-30h]
  float32x4_t v36; // 0:q8.16
  float32x4_t v37; // 0:q12.16

  v6 = a4 + 4;
  v8.n64_u64[0] = FIELD_U64(a4, 0x0)[0];
  v9.n64_u64[0] = a4[1].n64_u64[0];
  v7 = a4 + 2;
  v37 = *(float32x4_t *)(a3 + 16);
  v11.n64_u64[0] = v7[1].n64_u64[0];
  v12.n64_u64[0] = v6[1].n64_u64[0];
  v13 = vdupq_lane_s32(v9, 1);
  v14 = vdupq_lane_s32(v11, 1);
  v36 = *(float32x4_t *)(a3 + 32);
  v15 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a3, v8.n64_f32[0]), v37, v8, 1), v36, v9, 0);
  v16 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a3, FIELD_F32(v7, 0x0)[0]), v37, (float32x2_t)FIELD_U64(v7, 0x0)[0], 1),
          v36,
          v11,
          0);
  v17 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a3, FIELD_F32(v6, 0x0)[0]), v37, (float32x2_t)FIELD_U64(v6, 0x0)[0], 1),
          v36,
          v12,
          0);
  v18 = vextq_s8((int8x16_t)vzipq_s32(v13, v13).val, (int8x16_t)0, 0xCu);
  v19 = vdupq_lane_s32(v12, 1);
  v20 = vextq_s8((int8x16_t)vzipq_s32(v14, v14).val, (int8x16_t)0, 0xCu);
  v33 = vaddq_f32(vextq_s8(v18, v18, 4u), v15);
  v21 = vextq_s8((int8x16_t)vzipq_s32(v19, v19).val, (int8x16_t)0, 0xCu);
  v34 = vaddq_f32(vextq_s8(v20, v20, 4u), v16);
  v35 = vaddq_f32(vextq_s8(v21, v21, 4u), v17);
  v28 = v33;
  v29 = v34;
  v30 = v35;
  v31 = 0;
  v32 = 0x3F80000000000000LL;
  v27[0] = v33.n128_u32[0];
  v27[1] = v34.n128_u32[0];
  v27[2] = v35.n128_u32[0];
  v27[3] = 0;
  v27[4] = v33.n128_u32[1];
  v27[5] = v34.n128_u32[1];
  v27[6] = v35.n128_u32[1];
  v27[7] = 0;
  v27[8] = v33.n128_u32[2];
  v27[9] = v34.n128_u32[2];
  v27[10] = v35.n128_u32[2];
  v27[11] = 0;
  v27[12] = v33.n128_u32[3];
  v27[13] = v34.n128_u32[3];
  v27[14] = v35.n128_u32[3];
  v27[15] = 1065353216;
  v26[0] = *a5;
  v26[1] = a5[4];
  v26[2] = a5[8];
  v26[3] = a5[12];
  v26[4] = a5[1];
  v26[5] = a5[5];
  v26[6] = a5[9];
  v26[7] = a5[13];
  v26[8] = a5[2];
  v26[9] = a5[6];
  v26[10] = a5[10];
  v26[11] = a5[14];
  v26[12] = a5[3];
  v26[13] = a5[7];
  v26[14] = a5[11];
  v26[15] = a5[15];
  v22 = *(_DWORD **)(*(_DWORD *)a1 + 612);
  v23 = v22;
  if ( *(_DWORD *)(*(_DWORD *)a1 + 608) > 1u )
    v23 = v22 + 3;
  if ( *v23 != -1 )
  {
    sub_6091B890(v23, a2, 16, v27);
    v22 = *(_DWORD **)(*(_DWORD *)a1 + 612);
  }
  if ( *v22 != -1 )
    sub_6091B890(v22, a2, 16, v26);
  sub_6042E898(&v28, &v28);
  v25[0] = v28;
  v25[1] = v29;
  v25[2] = v30;
  result = *(_DWORD **)(*(_DWORD *)a1 + 612);
  if ( *(_DWORD *)(*(_DWORD *)a1 + 608) > 2u )
    result += 6;
  if ( *result != -1 )
    return (_DWORD *)sub_6091B890(result, a2, 12, v25);
  return result;
}
