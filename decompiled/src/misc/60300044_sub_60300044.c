/* sub_60300044
 * address: 0x60300044   size: 680   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int32 __fastcall sub_60300044(int a1)
{
  _DWORD **v1; // r4
  int v2; // r0
  float32x4_t v3; // q12
  float32x4_t v4; // q8
  int32x4_t v5; // q13
  float32x4_t v6; // q9
  float32x4_t v7; // q10
  int32x4_t v8; // q14
  int8x16_t v9; // q13
  float32x4_t v10; // q11
  int8x16_t v11; // q12
  int32x4_t v12; // q14
  int8x16_t v13; // q14
  unsigned __int64 v14; // d0
  unsigned __int64 v15; // d1
  unsigned __int64 v16; // d2
  unsigned __int64 v17; // d3
  int32x4_t v18; // q10
  int32x4_t v19; // q12
  int32x4_t v20; // q15
  float32x4_t v21; // q8
  int8x16_t v22; // q10
  float32x4_t v23; // q13
  float32x4_t v24; // q9
  int8x16_t v25; // q12
  int8x16_t v26; // q11
  float32x4_t v27; // q10
  int v28; // r0
  unsigned __int32 result; // r0
  _DWORD *v30; // [sp+Ch] [bp-ACh]
  float32x2_t v31; // [sp+60h] [bp-58h] BYREF
  int32x2_t v32; // [sp+68h] [bp-50h]
  float32x2_t v33; // [sp+70h] [bp-48h]
  int32x2_t v34; // [sp+78h] [bp-40h]
  float32x2_t v35; // [sp+80h] [bp-38h]
  int32x2_t v36; // [sp+88h] [bp-30h]
  int32x4x2_t v37; // 0:q15.16,16:q2.16

  v1 = (_DWORD **)(a1 + 6300);
  v2 = (*(int (__fastcall **)(_DWORD, int *))(***(_DWORD ***)(a1 + 6300) + 84))(
         **(_DWORD **)(a1 + 6300),
         &dword_60C92E18);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *))(*(_DWORD *)**v1 + 108))(**v1, v2, &v31);
  v3.n128_u64[0] = 0x3F80000000000000LL;
  v3.n128_u64[1] = 0x4100000000000000LL;
  v4.n128_u64[0] = 0;
  v4.n128_u64[1] = 1065353216;
  v5 = vdupq_lane_s32(v34, 1);
  v6 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32((float32x4_t)0x3F800000uLL, v31.n64_f32[0]), v3, v31, 1), v4, v32, 0);
  v7 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32((float32x4_t)0x3F800000uLL, v33.n64_f32[0]), v3, v33, 1), v4, v34, 0);
  v8 = vdupq_lane_s32(v36, 1);
  v9 = vextq_s8((int8x16_t)vzipq_s32(v5, v5).val, (int8x16_t)0, 0xCu);
  v10 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32((float32x4_t)0x3F800000uLL, v35.n64_f32[0]), v3, v35, 1), v4, v36, 0);
  v11 = vextq_s8((int8x16_t)vzipq_s32(v8, v8).val, (int8x16_t)0, 0xCu);
  v12 = vdupq_lane_s32(v32, 1);
  v13 = vextq_s8((int8x16_t)vzipq_s32(v12, v12).val, (int8x16_t)0, 0xCu);
  v1[536] = (_DWORD *)vaddq_f32(vextq_s8(v13, v13, 4u), v6).n128_u32[3];
  v1[537] = (_DWORD *)vaddq_f32(vextq_s8(v9, v9, 4u), v7).n128_u32[3];
  v1[538] = (_DWORD *)vaddq_f32(vextq_s8(v11, v11, 4u), v10).n128_u32[3];
  v14 = v33.n64_u64[0];
  v15 = v34.n64_u64[0];
  v16 = v35.n64_u64[0];
  v17 = v36.n64_u64[0];
  v10.n128_u64[0] = 0x3F80000000000000LL;
  v10.n128_u64[1] = 0x4140000000000000LL;
  v18 = vdupq_lane_s32(v32, 1);
  v19 = vdupq_lane_s32(v34, 1);
  v20 = vdupq_lane_s32(v36, 1);
  v21 = vmlaq_lane_f32(vmulq_n_f32((float32x4_t)0x3F800000uLL, v31.n64_f32[0]), v10, v31, 1);
  v13.n128_u64[0] = 0;
  v13.n128_u64[1] = 1065353216;
  v22 = vextq_s8((int8x16_t)vzipq_s32(v18, v18).val, (int8x16_t)0, 0xCu);
  v23 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32((float32x4_t)0x3F800000uLL, v33.n64_f32[0]), v10, v33, 1),
          v13,
          v34,
          0);
  v24 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32((float32x4_t)0x3F800000uLL, v35.n64_f32[0]), v10, v35, 1),
          v13,
          v36,
          0);
  v25 = vextq_s8((int8x16_t)vzipq_s32(v19, v19).val, (int8x16_t)0, 0xCu);
  v37 = vzipq_s32(v20, v20);
  v26 = vextq_s8(v37.val[0], (int8x16_t)0, 0xCu);
  v21.n128_u32[3] = vaddq_f32(vextq_s8(v22, v22, 4u), vmlaq_lane_f32(v21, v13, v32, 0)).n128_u32[3];
  v27 = vextq_s8(v26, v26, 4u);
  v30 = (_DWORD *)v21.n128_u32[3];
  v26.n128_u32[3] = vaddq_f32(vextq_s8(v25, v25, 4u), v23).n128_u32[3];
  v21.n128_u32[3] = vaddq_f32(v27, v24).n128_u32[3];
  v1[533] = v30;
  v1[534] = (_DWORD *)v26.n128_u32[3];
  v1[535] = (_DWORD *)v21.n128_u32[3];
  v1[539] = v30;
  v1[540] = (_DWORD *)v26.n128_u32[3];
  v1[541] = (_DWORD *)v21.n128_u32[3];
  v28 = (*(int (__fastcall **)(_DWORD, int *, float, float, float, float, float, float, float, float, float, float, float, float))(*(_DWORD *)**v1 + 84))(
          **v1,
          &dword_60C92E20,
          *(float *)&v14,
          *((float *)&v14 + 1),
          *(float *)&v15,
          *((float *)&v15 + 1),
          *(float *)&v16,
          *((float *)&v16 + 1),
          *(float *)&v17,
          *((float *)&v17 + 1),
          v37.val[1].n128_f32[0],
          v37.val[1].n128_f32[1],
          v37.val[1].n128_f32[2],
          v37.val[1].n128_f32[3]);
  v31.n64_u64[0] = 0;
  v32.n64_u64[0] = 0;
  v33.n64_u64[0] = 0;
  v34.n64_u64[0] = 0;
  v35.n64_u64[0] = 0;
  v36.n64_u64[0] = 0;
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *))(*(_DWORD *)**v1 + 108))(**v1, v28, &v31);
  v1[542] = (_DWORD *)v32.n64_u32[1];
  v1[543] = (_DWORD *)v34.n64_u32[1];
  result = v36.n64_u32[1];
  v1[544] = (_DWORD *)v36.n64_u32[1];
  return result;
}
