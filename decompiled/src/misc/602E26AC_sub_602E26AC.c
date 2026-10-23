/* sub_602E26AC
 * address: 0x602E26AC   size: 656   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int32 __fastcall sub_602E26AC(_DWORD *a1)
{
  int v1; // r11
  _DWORD *v2; // r10
  _DWORD *v3; // r5
  _DWORD *v4; // r4
  int v5; // r7
  int v6; // r6
  unsigned __int64 v7; // d0
  float32x4_t v8; // q8
  int32x4_t v9; // q9
  float32x4_t v10; // q10
  int32x4_t v11; // q11
  int32x4_t v12; // q15
  float32x4_t v13; // q12
  int8x16_t v14; // q9
  float32x4_t v15; // q14
  int8x16_t v16; // q11
  float32x4_t v17; // q13
  float32x4_t v18; // q8
  int8x16_t v19; // q10
  unsigned __int32 result; // r0
  float32x4_t v22; // [sp+48h] [bp-68h] BYREF
  float32x4_t v23; // [sp+58h] [bp-58h]
  float32x4_t v24; // [sp+68h] [bp-48h]

  v1 = 0;
  v2 = (_DWORD *)a1[1575];
  v3 = a1 + 1613;
  v4 = a1 + 1628;
  do
  {
    (*(void (__fastcall **)(_DWORD, _DWORD, float32x4_t *))(*(_DWORD *)*v2 + 108))(
      *v2,
      *(_DWORD *)((char *)&unk_60AF4B30 + v1),
      &v22);
    *(v3 - 11) = v22.n128_u32[3];
    *(v3 - 10) = v23.n128_u32[3];
    *(v3 - 9) = v24.n128_u32[3];
    v5 = *(_DWORD *)((char *)&unk_60AF4B30 + v1 + 8);
    v6 = *(_DWORD *)((char *)&unk_60AF4B30 + v1 + 12);
    (*(void (__fastcall **)(_DWORD, _DWORD, float32x4_t *))(*(_DWORD *)*v2 + 108))(
      *v2,
      *(_DWORD *)((char *)&unk_60AF4B30 + v1 + 4),
      &v22);
    *(v3 - 8) = v22.n128_u32[3];
    *(v3 - 7) = v23.n128_u32[3];
    *(v3 - 6) = v24.n128_u32[3];
    (*(void (__fastcall **)(_DWORD, int, float32x4_t *))(*(_DWORD *)*v2 + 108))(*v2, v5, &v22);
    *(v3 - 5) = v22.n128_u32[3];
    *(v3 - 4) = v23.n128_u32[3];
    *(v3 - 3) = v24.n128_u32[3];
    (*(void (__fastcall **)(_DWORD, int, float32x4_t *))(*(_DWORD *)*v2 + 108))(*v2, v6, &v22);
    v1 += 16;
    *(v3 - 2) = v22.n128_u32[3];
    *(v3 - 1) = v23.n128_u32[3];
    *v3 = v24.n128_u32[3];
    v3 += 12;
    v7 = v23.n128_u64[0];
    v8.n128_u64[0] = 1065353216;
    v8.n128_u64[1] = 0x40A0000000000000LL;
    v9 = vdupq_lane_s32(*(int32x2_t *)&v22.n128_i8[8], 1);
    v10.n128_u64[0] = 0x3F80000000000000LL;
    v10.n128_u64[1] = 0;
    v11 = vdupq_lane_s32(*(int32x2_t *)&v23.n128_i8[8], 1);
    v12 = vdupq_lane_s32(*(int32x2_t *)&v24.n128_i8[8], 1);
    v13 = vmlaq_lane_f32(vmulq_n_f32(v8, v22.n128_f32[0]), v10, (float32x2_t)v22.n128_u64[0], 1);
    v14 = vextq_s8((int8x16_t)vzipq_s32(v9, v9).val, (int8x16_t)0LL, 0xCu);
    v15.n128_u64[0] = 0;
    v15.n128_u64[1] = 1065353216;
    v16 = vextq_s8((int8x16_t)vzipq_s32(v11, v11).val, (int8x16_t)0LL, 0xCu);
    v17 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(v8, v23.n128_f32[0]), v10, (float32x2_t)v23.n128_u64[0], 1),
            v15,
            *(float32x2_t *)&v23.n128_i8[8],
            0);
    v18 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(v8, v24.n128_f32[0]), v10, (float32x2_t)v24.n128_u64[0], 1),
            v15,
            *(float32x2_t *)&v24.n128_i8[8],
            0);
    v19 = vextq_s8((int8x16_t)vzipq_s32(v12, v12).val, (int8x16_t)0LL, 0xCu);
    v22 = vaddq_f32(vextq_s8(v14, v14, 4u), vmlaq_lane_f32(v13, v15, *(float32x2_t *)&v22.n128_i8[8], 0));
    v23 = vaddq_f32(vextq_s8(v16, v16, 4u), v17);
    v24 = vaddq_f32(vextq_s8(v19, v19, 4u), v18);
    *(v4 - 2) = v22.n128_u32[3];
    *(v4 - 1) = v23.n128_u32[3];
    *v4 = v24.n128_u32[3];
    v4 += 3;
  }
  while ( v1 != 32 );
  (*(void (__fastcall **)(_DWORD, int, float32x4_t *, float, float))(*(_DWORD *)*v2 + 108))(
    *v2,
    21,
    &v22,
    *(float *)&v7,
    *((float *)&v7 + 1));
  a1[1594] = v22.n128_u32[3];
  a1[1595] = v23.n128_u32[3];
  result = v24.n128_u32[3];
  a1[1596] = v24.n128_u32[3];
  return result;
}
