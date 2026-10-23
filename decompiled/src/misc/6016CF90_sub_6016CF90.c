/* sub_6016CF90
 * address: 0x6016CF90   size: 1084   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_6016CF90(int a1)
{
  int v2; // r0
  int v3; // r1
  _BYTE *v4; // r8
  float *v5; // r11
  int *v6; // r10
  int v7; // r0
  float v8; // s0
  float v9; // s2
  float v10; // s4
  float v11; // s10
  float v12; // s8
  unsigned int v13; // r2
  _DWORD *v14; // r2
  float v15; // s16
  int v16; // r7
  int v17; // r6
  unsigned int v18; // r0
  float *v19; // r5
  float *v20; // r0
  float v21; // s0
  float v22; // s0
  float v23; // s4
  float v24; // s14
  float v25; // s6
  float v26; // s10
  float v27; // s12
  int v28; // r0
  int v29; // r0
  float v30; // s4
  float v31; // s10
  float v32; // s2
  float v33; // s18
  int *v34; // r1
  float v35; // s0
  float v36; // s16
  float v37; // s0
  float v38; // s10
  float v39; // s6
  __n128 result; // q0

  v2 = FIELD_U32(a1, 776);
  if ( v2 )
  {
    if ( v2 != 1 )
      goto LABEL_19;
    v3 = a1 + 1012;
    v4 = (_BYTE *)(a1 + 1373);
    v5 = (float *)(a1 + 1032);
    v6 = (int *)(a1 + 1028);
    v7 = a1 + 664;
  }
  else
  {
    v8 = FIELD_F32(a1, 664);
    v9 = FIELD_F32(a1, 668);
    v10 = FIELD_F32(a1, 672);
    v11 = FIELD_F32(a1, 1048);
    v12 = v9 + FIELD_F32(a1, 1044);
    FIELD_F32(a1, 784) = v8 + FIELD_F32(a1, 1040);
    FIELD_F32(a1, 788) = v12;
    FIELD_F32(a1, 792) = v10 + v11;
    FIELD_U32(a1, 776) = 1;
    FIELD_U32(a1, 1024) = 0;
    v3 = a1 + 1012;
    v7 = a1 + 664;
    v6 = (int *)(a1 + 1028);
    v5 = (float *)(a1 + 1032);
    FIELD_F32(a1, 1032) = sqrtf(
                              (float)((float)((float)(v9 - FIELD_F32(a1, 1016)) * (float)(v9 - FIELD_F32(a1, 1016)))
                                    + (float)((float)(v8 - FIELD_F32(a1, 1012)) * (float)(v8 - FIELD_F32(a1, 1012))))
                            + (float)((float)(v10 - FIELD_F32(a1, 1020)) * (float)(v10 - FIELD_F32(a1, 1020))))
                          / (float)FIELD_S32(a1, 1028);
    FIELD_U32(a1, 1040) = 0;
    FIELD_U32(a1, 1044) = 0;
    FIELD_U32(a1, 1048) = 0;
    FIELD_U8(a1, 1373) = 0;
    v4 = (_BYTE *)(a1 + 1373);
    v13 = FIELD_U32(a1, 1124);
    if ( v13 )
    {
      FIELD_U32(a1, 1112) = FIELD_U32(a1, 664);
      FIELD_U32(a1, 1116) = FIELD_U32(a1, 668);
      FIELD_U32(a1, 1120) = FIELD_U32(a1, 672);
      if ( v13 >= 5 )
        v13 = 0;
      v14 = (_DWORD *)(a1 + 12 * v13);
      v14[263] = FIELD_U32(a1, 1012);
      v14[264] = FIELD_U32(a1, 1016);
      v14[265] = FIELD_U32(a1, 1020);
      FIELD_U32(a1, 1128) = 0;
      FIELD_U8(a1, 1373) = 1;
    }
  }
  v15 = sub_60833454(v7, v3, (float)*v6 * 0.1, *v5 * 1.15, *v5 * 0.3);
  if ( *v4 )
  {
    v16 = 0;
    v17 = a1 + 1052;
    v18 = FIELD_U32(a1, 1128);
    if ( v18 >= 5 )
      v18 = 0;
    v19 = (float *)(a1 + 1112);
    sub_608332CC(a1 + 1112, v17 + 12 * v18, (float)*v6 * 0.1, *v5 * 1.15, *v5 * 0.3);
    if ( FIELD_U32(a1, 1128) < 5u )
      v16 = FIELD_U32(a1, 1128);
    v20 = (float *)(v17 + 12 * v16);
    v21 = FIELD_F32(a1, 1116) - v20[1];
    v22 = sqrtf(
            (float)((float)(v21 * v21) + (float)((float)(*v19 - *v20) * (float)(*v19 - *v20)))
          + (float)((float)(FIELD_F32(a1, 1120) - v20[2]) * (float)(FIELD_F32(a1, 1120) - v20[2])));
    v23 = FIELD_F32(a1, 668);
    v24 = FIELD_F32(a1, 1116);
    v25 = FIELD_F32(a1, 672);
    v26 = *v5;
    v27 = FIELD_F32(a1, 1120);
    FIELD_F32(a1, 1040) = *v19 - FIELD_F32(a1, 664);
    FIELD_F32(a1, 1044) = v24 - v23;
    FIELD_F32(a1, 1048) = v27 - v25;
    if ( v22 <= (float)(v26 * 1.15) )
    {
      v28 = FIELD_U32(a1, 1128);
      FIELD_U32(a1, 1128) = v28 + 1;
      if ( v28 >= FIELD_U32(a1, 1124) )
        *v4 = 0;
    }
  }
  v29 = FIELD_U32(a1, 1024);
  FIELD_U32(a1, 1024) = v29 + 1;
  if ( v15 < 0.001 || v29 >= *v6 )
  {
    v30 = FIELD_F32(a1, 1020);
    v31 = FIELD_F32(a1, 1048);
    v32 = FIELD_F32(a1, 1016) + FIELD_F32(a1, 1044);
    FIELD_F32(a1, 664) = FIELD_F32(a1, 1012) + FIELD_F32(a1, 1040);
    FIELD_F32(a1, 668) = v32;
    FIELD_F32(a1, 672) = v30 + v31;
    FIELD_U32(a1, 752) = 0;
    FIELD_U32(a1, 880) = 0;
    FIELD_U8(a1, 1371) = 0;
    FIELD_U32(a1, 776) = 4;
    FIELD_U32(a1, 1040) = 0;
    FIELD_U32(a1, 1044) = 0;
    FIELD_U32(a1, 1048) = 0;
    *v4 = 0;
  }
LABEL_19:
  v33 = FIELD_F32(a1, 848);
  if ( FIELD_U8(a1, 1374) )
    v33 = v33 + FIELD_F32(a1, 864);
  v34 = dword_6016D3DC;
  if ( FIELD_U32(a1, 1360) == 8 )
    v34 = &dword_6016D3DC[1];
  v35 = FIELD_F32(a1, 696) + *(float *)v34;
  FIELD_F32(a1, 692) = v35;
  v36 = cosf(v35);
  v37 = sinf(FIELD_F32(a1, 692));
  v38 = FIELD_F32(a1, 672);
  result.n128_u32[1] = FIELD_U32(a1, 1048);
  result.n128_f32[0] = (float)(v33 + 2540.0) * v37;
  result.n128_f32[2] = (float)(v33 + 2540.0) * v36;
  v39 = result.n128_f32[0] + (float)(FIELD_F32(a1, 668) + FIELD_F32(a1, 1044));
  FIELD_F32(a1, 652) = (float)(FIELD_F32(a1, 664) + FIELD_F32(a1, 1040)) + 0.0;
  FIELD_F32(a1, 656) = v39;
  FIELD_F32(a1, 660) = result.n128_f32[2] + (float)(v38 + result.n128_f32[1]);
  result.n128_f32[0] = result.n128_f32[0] + FIELD_F32(a1, 832);
  result.n128_f32[2] = result.n128_f32[2] + FIELD_F32(a1, 836);
  FIELD_F32(a1, 816) = FIELD_F32(a1, 828) + 0.0;
  FIELD_U32(a1, 820) = result.n128_u32[0];
  FIELD_U32(a1, 824) = result.n128_u32[2];
  return result;
}
