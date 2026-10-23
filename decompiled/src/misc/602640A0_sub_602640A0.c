/* sub_602640A0
 * address: 0x602640A0   size: 900   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602640A0(int a1)
{
  unsigned int v1; // r11
  unsigned int v2; // r6
  _DWORD **v3; // r4
  float *v4; // r0
  float v5; // s0
  float v6; // s10
  float v7; // s14
  float v8; // s2
  float v9; // s6
  float32x4_t v10; // q8
  float32x4_t v11; // q10
  float32x4_t v12; // q9
  int32x4_t v13; // q11
  int32x4_t v14; // q13
  float32x4_t v15; // q14
  int8x16_t v16; // q11
  int8x16_t v17; // q13
  float32x4_t v18; // q10
  int32x4_t v19; // q11
  int8x16_t v20; // q9
  float *v21; // r0
  float v22; // s0
  float v23; // s10
  float v24; // s14
  float v25; // s2
  float v26; // s6
  int32x4_t v27; // q9
  int32x4_t v28; // q14
  float32x4_t v29; // q12
  int32x4_t v30; // q15
  int8x16_t v31; // q9
  float32x4_t v32; // q11
  float32x4_t v33; // q13
  float32x4_t v34; // q8
  int8x16_t v35; // q14
  int8x16_t v36; // q10
  float32x4_t v38; // [sp+Ch] [bp-E4h] BYREF
  float32x4_t v39; // [sp+1Ch] [bp-D4h]
  float32x4_t v40; // [sp+2Ch] [bp-C4h]
  float32x4_t v41; // [sp+3Ch] [bp-B4h]
  unsigned __int64 v42; // [sp+4Ch] [bp-A4h]
  unsigned int v43; // [sp+54h] [bp-9Ch]
  int v44; // [sp+58h] [bp-98h]
  unsigned __int64 v45; // [sp+5Ch] [bp-94h]
  float v46; // [sp+64h] [bp-8Ch]
  int v47; // [sp+68h] [bp-88h]
  _BYTE v48[12]; // [sp+6Ch] [bp-84h] BYREF
  float32x2_t v49; // [sp+78h] [bp-78h] BYREF
  int32x2_t v50; // [sp+80h] [bp-70h]
  float32x2_t v51; // [sp+88h] [bp-68h]
  int32x2_t v52; // [sp+90h] [bp-60h]
  float32x2_t v53; // [sp+98h] [bp-58h]
  int32x2_t v54; // [sp+A0h] [bp-50h]
  int32x4x2_t v55; // 0:q15.16,16:q2.16

  v1 = FIELD_U32(a1, 6588);
  v2 = FIELD_U32(a1, 6584);
  v3 = (_DWORD **)(a1 + 6300);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _BYTE *))(***(_DWORD ***)(a1 + 6300) + 100))(
    **(_DWORD **)(a1 + 6300),
    11,
    &v49,
    v48);
  v4 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v5 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
  v6 = (float)(0.024541 * 0.0) + 0.0;
  v7 = (float)(-0.00030118 * 0.0) + 1.0;
  v8 = *v4 + (float)(v5 * v4[1]);
  v9 = v4[2] + (float)(v5 * v4[3]);
  v41.n128_f32[0] = v7 * v9;
  *(float *)&v42 = v7 * v8;
  *(float *)&v45 = -v6;
  v41.n128_f32[1] = (float)((float)(v6 * v6) * v9) - (float)(v7 * v8);
  *((float *)&v42 + 1) = (float)(v7 * v9) + (float)((float)(v6 * v6) * v8);
  *((float *)&v45 + 1) = v6 * v7;
  v41.n128_f32[2] = (float)(v6 * (float)(v7 * v9)) + (float)(v6 * v8);
  *(float *)&v43 = (float)(v6 * (float)(v7 * v8)) - (float)(v6 * v9);
  v46 = v7 * v7;
  v41.n128_u32[3] = 0;
  v44 = 0;
  v47 = 0;
  v10.n128_u64[0] = v45;
  v10.n128_u64[1] = COERCE_UNSIGNED_INT(v7 * v7);
  v11.n128_u64[0] = v41.n128_u64[0];
  v11.n128_u64[1] = v41.n128_u32[2];
  v12.n128_u64[0] = v42;
  v12.n128_u64[1] = v43;
  v13 = vdupq_lane_s32(v50, 1);
  v14 = vdupq_lane_s32(v52, 1);
  v15 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v11, v51.n64_f32[0]), v12, v51, 1), v10, v52, 0);
  v16 = vextq_s8((int8x16_t)vzipq_s32(v13, v13).val, (int8x16_t)0, 0xCu);
  v17 = vextq_s8((int8x16_t)vzipq_s32(v14, v14).val, (int8x16_t)0, 0xCu);
  v38 = vaddq_f32(
          vextq_s8(v16, v16, 4u),
          vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v11, v49.n64_f32[0]), v12, v49, 1), v10, v50, 0));
  v18 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v11, v53.n64_f32[0]), v12, v53, 1), v10, v54, 0);
  v39 = vaddq_f32(vextq_s8(v17, v17, 4u), v15);
  v19 = vdupq_lane_s32(v54, 1);
  v20 = vextq_s8((int8x16_t)vzipq_s32(v19, v19).val, (int8x16_t)0, 0xCu);
  v40 = vaddq_f32(vextq_s8(v20, v20, 4u), v18);
  (*(void (__fastcall **)(_DWORD, int, float, float, float, float, float, float, float, float))(*(_DWORD *)**v3 + 96))(
    **v3,
    11,
    v53.n64_f32[0],
    v53.n64_f32[1],
    v54.n64_f32[0],
    v54.n64_f32[1],
    v51.n64_f32[0],
    v51.n64_f32[1],
    v52.n64_f32[0],
    v52.n64_f32[1]);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _BYTE *))(*(_DWORD *)**v3 + 100))(**v3, 14, &v49, v48);
  v21 = (float *)((char *)sinLutTable + ((v1 >> 20) & 0xFF0));
  v22 = (float)(v1 & 0xFFFFFF) * 0.000000059605;
  v23 = (float)(0.024541 * 0.0) + 0.0;
  v24 = (float)(-0.00030118 * 0.0) + 1.0;
  v25 = *v21 + (float)(v22 * v21[1]);
  v26 = v21[2] + (float)(v22 * v21[3]);
  v41.n128_f32[0] = v24 * v26;
  *(float *)&v42 = v24 * v25;
  *(float *)&v45 = -v23;
  v41.n128_f32[1] = (float)((float)(v23 * v23) * v26) - (float)(v24 * v25);
  *((float *)&v42 + 1) = (float)(v24 * v26) + (float)((float)(v23 * v23) * v25);
  *((float *)&v45 + 1) = v23 * v24;
  v41.n128_u64[1] = COERCE_UNSIGNED_INT((float)(v23 * (float)(v24 * v26)) + (float)(v23 * v25));
  *(float *)&v43 = (float)(v23 * (float)(v24 * v25)) - (float)(v23 * v26);
  v27 = vdupq_lane_s32(v50, 1);
  v46 = v24 * v24;
  v44 = 0;
  v47 = 0;
  v18.n128_u64[0] = v42;
  v18.n128_u64[1] = v43;
  v28 = vdupq_lane_s32(v52, 1);
  v29.n128_u64[0] = v45;
  v29.n128_u64[1] = COERCE_UNSIGNED_INT(v24 * v24);
  v30 = vdupq_lane_s32(v54, 1);
  v31 = vextq_s8((int8x16_t)vzipq_s32(v27, v27).val, (int8x16_t)0, 0xCu);
  v32 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v41, v49.n64_f32[0]), v18, v49, 1), v29, v50, 0);
  v33 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v41, v51.n64_f32[0]), v18, v51, 1), v29, v52, 0);
  v34 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v41, v53.n64_f32[0]), v18, v53, 1), v29, v54, 0);
  v35 = vextq_s8((int8x16_t)vzipq_s32(v28, v28).val, (int8x16_t)0, 0xCu);
  v55 = vzipq_s32(v30, v30);
  v36 = vextq_s8(v55.val[0], (int8x16_t)0, 0xCu);
  v38 = vaddq_f32(vextq_s8(v31, v31, 4u), v32);
  v39 = vaddq_f32(vextq_s8(v35, v35, 4u), v33);
  v40 = vaddq_f32(vextq_s8(v36, v36, 4u), v34);
  return (*(int (__fastcall **)(_DWORD, int, float32x4_t *, _BYTE *, float, float, float, float, float, float, float, float, float, float, float, float))(*(_DWORD *)**v3 + 96))(
           **v3,
           14,
           &v38,
           v48,
           v51.n64_f32[0],
           v51.n64_f32[1],
           v52.n64_f32[0],
           v52.n64_f32[1],
           v53.n64_f32[0],
           v53.n64_f32[1],
           v54.n64_f32[0],
           v54.n64_f32[1],
           v55.val[1].n128_f32[0],
           v55.val[1].n128_f32[1],
           v55.val[1].n128_f32[2],
           v55.val[1].n128_f32[3]);
}
