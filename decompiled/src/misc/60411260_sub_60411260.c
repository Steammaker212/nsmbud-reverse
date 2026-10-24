/* sub_60411260
 * address: 0x60411260   size: 880   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int32x4_t *__fastcall sub_60411260(int *a1, float *a2, float *a3)
{
  int8x16_t v6; // q13
  int v7; // r7
  float v8; // s16
  float v9; // s18
  float v10; // s20
  float v11; // s22
  float v12; // s24
  float v13; // s0
  float v14; // s20
  float v15; // s22
  float v16; // s24
  float v17; // s26
  float v18; // s28
  float v19; // s31
  float v20; // s30
  float v21; // s17
  float v22; // s19
  float v23; // s27
  float v24; // s21
  float v25; // s18
  float v26; // s0
  float v27; // s16
  float v28; // s25
  float v29; // s0
  float v30; // s23
  float v31; // s16
  float v32; // s16
  int v33; // r6
  float v34; // s16
  float v35; // s0
  int32x4_t *result; // r0
  float v37; // s18
  float v38; // s25
  float v39; // s27
  float v40; // s2
  float v41; // s4
  float *v42; // r1
  float v43; // s10
  float v44; // s6
  float v45; // s4
  float v46; // [sp+Ch] [bp-CCh]
  int32x4_t v47; // [sp+10h] [bp-C8h] BYREF
  int32x4_t v48; // [sp+20h] [bp-B8h]
  int32x4x2_t v49; // [sp+30h] [bp-A8h]
  int32x4_t v50[8]; // [sp+50h] [bp-88h] BYREF
  int32x4x2_t v51; // 0:q8.16,16:q9.16
  int32x4x2_t v52; // 0:q10.16,16:q11.16

  if ( *a1 )
  {
    sub_601B59CC((float *)v50, a2 + 1);
    v51 = vzipq_s32(v50[0], v50[1]);
    v52 = vzipq_s32(v50[2], (int32x4_t)0);
    v6 = vextq_s8(v52.val[0], v51.val[0], 8u);
    v47 = vextq_s8(vextq_s8(v51.val[0], v51.val[0], 8u), v52.val[0], 8u);
    v52.val[0] = vextq_s8(v51.val[1], v51.val[1], 8u);
    v51.val[1] = vextq_s8(v51.val[1], vextq_s8(v52.val[1], v51.val[1], 8u), 8u);
    v48 = vextq_s8(v51.val[0], v6, 8u);
    v51.val[0] = vextq_s8(v52.val[0], v52.val[1], 8u);
    v49 = v51;
    v7 = *a1;
    v8 = sub_6090C63C(a3);
    v9 = sub_6090C660(a3, v8);
    v10 = sub_6090C684(a3, v9);
    v11 = sub_6090C6B0(a3, v10);
    v12 = (*(float (__fastcall **)(float *, float))(*(_DWORD *)a3 + 16))(a3, v11);
    v13 = (*(float (__fastcall **)(float *, float))(*(_DWORD *)a3 + 20))(a3, v12);
    ((void (__fastcall *)(int, int32x4_t *, float, float, float, float, float, float, float))loc_608748F0)(
      v7,
      &v47,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v13);
  }
  v14 = a2[9];
  v15 = a2[10];
  v16 = a2[11];
  v46 = a2[12];
  v17 = a2[2];
  v18 = a2[3];
  v19 = a2[4];
  v20 = a2[5];
  v21 = a2[6];
  v22 = a2[7];
  v23 = a2[8];
  v24 = a2[1];
  v25 = (*(float (__fastcall **)(float *))(*(_DWORD *)a3 + 28))(a3);
  v26 = (*(float (__fastcall **)(float *, float))(*(_DWORD *)a3 + 24))(a3, v25);
  v27 = tanf(v26 * 0.5);
  v28 = v27 + (float)((float)(v27 * a3[45]) + (float)(v27 * a3[45]));
  v29 = 1.0 / sqrtf((float)(v28 * v28) + 1.0);
  v30 = v25 * v27;
  v48.n128_u32[2] = 0;
  v48.n128_f32[3] = -v29;
  v49.val[0].n128_f32[0] = v29 * v28;
  v31 = v27 + (float)((float)(v27 * a3[45]) * -2.0);
  v49.val[0].n128_u32[1] = 0;
  v49.val[0].n128_f32[2] = 1.0 / sqrtf((float)(v31 * v31) + 1.0);
  v49.val[0].n128_f32[3] = v49.val[0].n128_f32[2] * v31;
  v32 = v30 + (float)((float)(v30 * a3[44]) * -2.0);
  v33 = 0;
  v47.n128_f32[3] = 1.0 / sqrtf((float)(v32 * v32) + 1.0);
  v48.n128_u32[0] = 0;
  v48.n128_f32[1] = v47.n128_f32[3] * v32;
  v34 = v30 + (float)((float)(v30 * a3[44]) + (float)(v30 * a3[44]));
  v35 = 1.0 / sqrtf((float)(v34 * v34) + 1.0);
  result = &v47;
  v37 = (float)((float)-(float)(v18 * v19) - (float)(v22 * v23)) - (float)(v16 * v46);
  v38 = (float)((float)-(float)(v17 * v19) - (float)(v21 * v23)) - (float)(v15 * v46);
  v39 = (float)((float)-(float)(v24 * v19) - (float)(v20 * v23)) - (float)(v14 * v46);
  v47.n128_f32[0] = -v35;
  v40 = v35 * v34;
  v47.n128_u32[1] = 0;
  v41 = 0.0;
  v47.n128_f32[2] = v35 * v34;
  while ( 1 )
  {
    v42 = (float *)&a1[v33];
    v43 = (float)((float)(v21 * v41) + (float)(v17 * FIELD_F32(result, 0x0)[0])) - (float)(v15 * v40);
    v44 = (float)((float)((float)(v20 * v41) + (float)(v24 * FIELD_F32(result, 0x0)[0])) - (float)(v14 * v40)) + 0.0;
    v45 = (float)((float)((float)(v22 * v41) + (float)(v18 * FIELD_F32(result, 0x0)[0])) - (float)(v16 * v40)) + 0.0;
    FIELD_F32(result, 0x0)[0] = v44;
    FIELD_F32(result, 0x0)[1] = v43 + 0.0;
    FIELD_F32(result, 0x0)[2] = v45;
    v42[1] = v44;
    v42[2] = v43 + 0.0;
    v42[3] = v45;
    v42[4] = (float)((float)(v38 * (float)(v43 + 0.0)) + (float)(v39 * v44)) + (float)(v37 * v45);
    if ( v33 == 12 )
      break;
    v41 = FIELD_F32(result + (1) * 16, 0x0)[0];
    v40 = FIELD_F32(result + (1) * 16, 0x0)[1];
    v33 += 4;
    result = (int32x4_t *)((char *)result + 12);
  }
  return result;
}
