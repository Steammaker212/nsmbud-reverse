/* sub_6089AB20
 * address: 0x6089AB20   size: 920   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_6089AB20(float a1, float a2, int a3, int a4)
{
  int v4; // r12
  __int64 v5; // d2
  __int64 v6; // d3
  __int64 v7; // d4
  __int64 v8; // d5
  __int64 v9; // d6
  __int64 v10; // d7
  int v11; // r0
  __int64 v12; // d3
  __int64 v13; // d5
  __int64 v14; // d2
  __int64 v15; // d4
  int v16; // r2
  int v17; // lr
  _BYTE *v18; // r4
  bool v19; // zf
  bool v20; // zf
  _BYTE *v21; // r2
  float v22; // s4
  float v23; // s2
  bool v24; // zf
  bool v25; // zf
  int v26; // r3
  int v27; // r4
  float v28; // s4
  float v29; // s4
  float v30; // s0
  int32x4_t v31; // q0
  int32x4_t *v32; // r3
  int32x4_t *v33; // r6
  int32x4_t *v34; // r2
  int32x4_t *v35; // r1
  int32x4_t v37; // 0:q9.16
  int32x4_t v38; // 0:q9.16
  int32x4_t v39; // 0:q10.16
  int32x4_t v40; // 0:q10.16
  int32x4x2_t v41; // 0:q9.16,16:q0.16

  v4 = FIELD_U32(a4, 116);
  v5 = FIELD_U64(a4, 752);
  v6 = FIELD_U64(a4, 760);
  v7 = FIELD_U64(a4, 736);
  v8 = FIELD_U64(a4, 744);
  v9 = FIELD_U64(v4, 240);
  v10 = FIELD_U64(v4, 248);
  *((float *)&v12 + 1) = *((float *)&v6 + 1) * FIELD_F32(a4, 1160);
  v11 = *(_DWORD *)(a4 + 4 * FIELD_U32(a4, 48) + 1256);
  *((float *)&v13 + 1) = *((float *)&v8 + 1) * FIELD_F32(a4, 1148);
  *(float *)&v12 = *(float *)&v10 * (float)(*(float *)&v6 * FIELD_F32(a4, 1120));
  *(float *)&v13 = *(float *)&v10 * (float)(*(float *)&v8 * FIELD_F32(a4, 1108));
  *((float *)&v14 + 1) = *((float *)&v9 + 1) * (float)(*((float *)&v5 + 1) * FIELD_F32(a4, 1116));
  *((float *)&v15 + 1) = *((float *)&v9 + 1) * (float)(*((float *)&v7 + 1) * FIELD_F32(a4, 1104));
  *(float *)&v14 = *(float *)&v9 * (float)(*(float *)&v5 * FIELD_F32(a4, 1112));
  *(float *)&v15 = (float)(*(float *)&v7 * FIELD_F32(a4, 1100)) * *(float *)&v9;
  if ( *(_BYTE *)a4 )
  {
    v16 = a4 + 348;
    v17 = FIELD_U32(a4, 900);
    v18 = *(_BYTE **)(FIELD_U32(a4, 348) + 12);
    v19 = v18[2014] == 0;
    if ( v18[2014] )
      v19 = v18[2018] == 0;
    if ( !v19 )
      *((float *)&v13 + 1) = *((float *)&v13 + 1) * FIELD_F32(v17, 1148);
    v20 = v18[2015] == 0;
    if ( v18[2015] )
      v20 = v18[2019] == 0;
    if ( !v20 )
      *((float *)&v12 + 1) = *((float *)&v12 + 1) * FIELD_F32(v17, 1160);
  }
  else
  {
    v16 = a4 + 348;
  }
  *(_QWORD *)v11 = v15;
  FIELD_U64(v11, 8) = v13;
  FIELD_U64(v11, 16) = v14;
  FIELD_U64(v11, 24) = v12;
  v21 = *(_BYTE **)(*(_DWORD *)v16 + 12);
  if ( v21[1883] )
    v22 = FIELD_F32(a4, 112);
  else
    v22 = 1.0;
  if ( v21[1877] )
    v22 = v22 * FIELD_F32(a4, 108);
  v23 = FIELD_F32(v4, 252) * v22;
  v24 = v21[2014] == 0;
  if ( v21[2014] )
    v24 = v21[2018] == 0;
  if ( !v24 )
    goto LABEL_23;
  v25 = v21[2015] == 0;
  if ( v21[2015] )
    v25 = v21[2019] == 0;
  if ( !v25 )
  {
LABEL_23:
    v26 = FIELD_U32(a4, 900);
    v27 = *(_DWORD *)(FIELD_U32(v26, 348) + 12);
    if ( FIELD_U8(v27, 1883) )
      v28 = FIELD_F32(v26, 112);
    else
      v28 = 1.0;
    if ( FIELD_U8(v27, 1877) )
      v28 = v28 * FIELD_F32(v26, 108);
    v23 = v23 * v28;
  }
  if ( v21[1884] )
    v29 = FIELD_F32(a4, 112);
  else
    v29 = 1.0;
  if ( v21[1878] )
    v29 = v29 * FIELD_F32(a4, 108);
  FIELD_U32(v11, 32) = FIELD_U32(a4, 68);
  FIELD_F32(v11, 36) = (float)FIELD_S32(a4, 40);
  FIELD_F32(v11, 40) = a2;
  FIELD_F32(v11, 44) = a1;
  if ( a1 == 0.0 )
  {
    v30 = FIELD_F32(a4, 68);
    if ( v30 > 0.0 )
    {
      FIELD_F32(v11, 32) = v30 - FIELD_F32(a4, 72);
      FIELD_U32(v11, 44) = FIELD_U32(a4, 72);
    }
  }
  FIELD_F32(v11, 48) = v23;
  FIELD_F32(v11, 52) = v29 * FIELD_F32(v4, 304);
  FIELD_F32(v11, 56) = v29 * FIELD_F32(v4, 308);
  FIELD_F32(v11, 60) = v29 * FIELD_F32(v4, 312);
  v31.n128_u32[2] = 0;
  v39 = *(int32x4_t *)(a4 + 544);
  v37 = *(int32x4_t *)(a4 + 576);
  v32 = (int32x4_t *)(a4 + 640);
  v33 = (int32x4_t *)(a4 + 624);
  v31.n128_u32[3] = 1.0;
  v31.n128_u32[0] = FIELD_U32(a4, 568);
  v31.n128_u32[1] = FIELD_U32(a4, 600);
  *(int32x4x2_t *)(v11 + 64) = vzipq_s32(
                                 (int32x4_t)vzipq_s32(v39, v37).val,
                                 (int32x4_t)vzipq_s32(*(int32x4_t *)(a4 + 560), *(int32x4_t *)(a4 + 592)).val);
  *(int32x4x2_t *)(v11 + 96) = vzipq_s32(
                                 vzipq_s32(
                                   vextq_s8((int8x16_t)0, vzipq_s32((int32x4_t)0, v39).val[1], 0xCu),
                                   vextq_s8((int8x16_t)0, vzipq_s32((int32x4_t)0, v37).val[1], 0xCu)).val[1],
                                 v31);
  v34 = (int32x4_t *)(a4 + 608);
  v35 = (int32x4_t *)(a4 + 656);
  v40 = *v34;
  v38 = *v32;
  v31.n128_u32[0] = FIELD_U32(v33, 0x0)[2];
  v31.n128_u32[1] = FIELD_U32(v35, 0x0)[2];
  *(int32x4x2_t *)(v11 + 128) = vzipq_s32((int32x4_t)vzipq_s32(*v34, *v32).val, (int32x4_t)vzipq_s32(*v33, *v35).val);
  v41 = vzipq_s32(
          vzipq_s32(
            vextq_s8((int8x16_t)0, vzipq_s32((int32x4_t)0, v40).val[1], 0xCu),
            vextq_s8((int8x16_t)0, vzipq_s32((int32x4_t)0, v38).val[1], 0xCu)).val[1],
          v31);
  *(int32x4x2_t *)(v11 + 160) = v41;
  return v41.val[1];
}
