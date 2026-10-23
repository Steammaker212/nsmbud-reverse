/* sub_6041D270
 * address: 0x6041D270   size: 1224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041D270(int a1, int a2, int a3)
{
  int32x2_t v5; // d5
  int32x4_t v6; // q9
  int32x2_t v7; // d3
  int32x4_t v8; // q10
  int32x2_t v9; // d1
  float32x4_t v10; // q11
  float32x4_t v11; // q15
  int8x16_t v12; // q9
  int8x16_t v13; // q10
  float32x4_t v14; // q13
  int32x4_t v15; // q2
  int8x16_t v16; // q12
  int v17; // r0
  int v18; // r1
  int v19; // r0
  int v20; // r2
  int v21; // r3
  int v22; // r5
  int v23; // r0
  int v24; // r0
  int v25; // r1
  int v26; // r2
  int v27; // r7
  int v28; // r3
  int v29; // r4
  int v30; // r0
  int v31; // r0
  int v32; // r5
  int v33; // r0
  int v34; // r4
  int v35; // r0
  int v38; // [sp+2Ch] [bp-1A4h]
  _BYTE v39[184]; // [sp+30h] [bp-1A0h] BYREF
  int (**v40)(); // [sp+E8h] [bp-E8h] BYREF
  _DWORD v41[21]; // [sp+ECh] [bp-E4h] BYREF
  float32x2_t v42[2]; // [sp+140h] [bp-90h] BYREF
  float32x2_t v43; // [sp+150h] [bp-80h]
  unsigned __int64 v44; // [sp+158h] [bp-78h]
  float32x2_t v45; // [sp+160h] [bp-70h]
  unsigned __int64 v46; // [sp+168h] [bp-68h]
  _OWORD v47[3]; // [sp+170h] [bp-60h] BYREF
  int v48; // [sp+1A0h] [bp-30h] BYREF
  int v49; // [sp+1A4h] [bp-2Ch]
  int v50; // [sp+1A8h] [bp-28h]

  v38 = dword_60C9BAF4;
  v5.n64_u64[0] = *(unsigned __int64 *)(a3 + 44);
  v42[0] = *(float32x2_t *)(a3 + 36);
  v42[1] = v5;
  v6 = vdupq_lane_s32(v5, 1);
  v7.n64_u64[0] = *(unsigned __int64 *)(a3 + 60);
  v43.n64_u64[0] = *(unsigned __int64 *)(a3 + 52);
  v44 = v7.n64_u64[0];
  v8 = vdupq_lane_s32(v7, 1);
  v9.n64_u64[0] = *(unsigned __int64 *)(a3 + 76);
  v45.n64_u64[0] = *(unsigned __int64 *)(a3 + 68);
  v46 = v9.n64_u64[0];
  v10.n128_u64[0] = 0x40E0000000000000LL;
  v10.n128_u64[1] = 0xC294666600000000LL;
  v11.n128_u64[0] = 0;
  v11.n128_u64[1] = 0x3FB3333340E00000LL;
  v12 = vextq_s8((int8x16_t)vzipq_s32(v6, v6).val, (int8x16_t)0, 0xCu);
  v13 = vextq_s8((int8x16_t)vzipq_s32(v8, v8).val, (int8x16_t)0, 0xCu);
  v14 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32((float32x4_t)0x40E00000uLL, v42[0].n64_f32[0]), v10, v42[0], 1),
          v11,
          v5,
          0);
  v15 = vdupq_lane_s32(v9, 1);
  v16 = vextq_s8((int8x16_t)vzipq_s32(v15, v15).val, (int8x16_t)0, 0xCu);
  v47[0] = vaddq_f32(vextq_s8(v12, v12, 4u), v14);
  v47[1] = vaddq_f32(
             vextq_s8(v13, v13, 4u),
             vmlaq_lane_f32(
               vmlaq_lane_f32(vmulq_n_f32((float32x4_t)0x40E00000uLL, v43.n64_f32[0]), v10, v43, 1),
               v11,
               v7,
               0));
  v47[2] = vaddq_f32(
             vextq_s8(v16, v16, 4u),
             vmlaq_lane_f32(
               vmlaq_lane_f32(vmulq_n_f32((float32x4_t)0x40E00000uLL, v45.n64_f32[0]), v10, v45, 1),
               v11,
               v9,
               0));
  v41[0] = 1065353216;
  memset(&v41[1], 0, 16);
  v41[5] = 1065353216;
  memset(&v41[6], 0, 16);
  v41[10] = 1065353216;
  v41[11] = 0;
  v40 = off_60C5D014;
  v41[12] = 0;
  v41[13] = 1108869120;
  v41[14] = 1132068864;
  v41[15] = 0;
  v41[16] = 1108869120;
  v41[17] = 0;
  v41[18] = 0;
  v41[19] = 1065353216;
  v41[20] = 0;
  off_60C5D024();
  sub_6090C344(v39);
  sub_60921A90(a1 + 4424, 0);
  sub_60921988(a1 + 4424, FIELD_U32(a1, 4432), 0, v42, 0, 3);
  sub_60921988(a1 + 4424, FIELD_U32(a1, 4432), 1, v41, 0, 3);
  v17 = sub_6090BE54(v39);
  sub_60921988(a1 + 4424, FIELD_U32(a1, 4432), 2, v17, 0, 4);
  v18 = FIELD_U16(a1, 4464);
  v19 = FIELD_U32(a1, 4440);
  v20 = FIELD_U8(a1, 4461);
  v21 = FIELD_U32(a1, 4456);
  v22 = FIELD_U32(a1, 4452);
  v48 = FIELD_U32(a1, 4448);
  v49 = v22 + v18 * v20 * v19;
  v50 = v21;
  sub_60913B04(&v48, FIELD_U32(a1, 4436));
  sub_60921A90(a1 + 4424, 1);
  sub_60921988(a1 + 4424, FIELD_U32(a1, 4432) + FIELD_U32(a1, 4440), 0, v47, 0, 3);
  sub_60921988(a1 + 4424, FIELD_U32(a1, 4432) + FIELD_U32(a1, 4440), 1, v41, 0, 3);
  v23 = sub_6090BE54(v39);
  sub_60921988(a1 + 4424, FIELD_U32(a1, 4432) + FIELD_U32(a1, 4440), 2, v23, 0, 4);
  v24 = FIELD_U32(a1, 4440);
  v25 = FIELD_U16(a1, 4464);
  v26 = FIELD_U8(a1, 4461);
  v27 = FIELD_U32(a1, 4452);
  v28 = FIELD_U32(a1, 4456);
  v48 = FIELD_U32(a1, 4448);
  v49 = v27 + (v25 * v26 + 1) * v24;
  v50 = v28;
  sub_60913B04(&v48, FIELD_U32(a1, 4436));
  v29 = 0;
  while ( 1 )
  {
    if ( v29 == 6 )
    {
      v31 = sub_608FBBD0(FIELD_U32(a1, 1396), FIELD_U32(a3, 16));
      v30 = sub_6083DC18(a1 + 140, 6, FIELD_U32(a3, 8), FIELD_U32(a3, 12), v31 - 1);
      goto LABEL_6;
    }
    if ( v29 == 9 )
      break;
    v30 = sub_6083DC18(a1 + 140, v29, FIELD_U32(a3, 8), FIELD_U32(a3, 12), 0);
LABEL_6:
    v32 = v30;
    if ( v30 )
    {
      v33 = sub_6083E61C(a1 + 2060, v29);
      sub_6041D74C(a1, v32, v33, v29);
    }
    if ( ++v29 == 10 )
      goto LABEL_11;
  }
  v34 = sub_6083E178(v38 + 460, a2);
  v35 = sub_6083E638(a1 + 2060);
  sub_6041D74C(a1, v34, v35, 9);
LABEL_11:
  nullsub_113(v39);
  return nullsub_111(&v40);
}
