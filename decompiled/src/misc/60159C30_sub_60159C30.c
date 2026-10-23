/* sub_60159C30
 * address: 0x60159C30   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60159C30(int a1, int a2, float *a3)
{
  int v5; // r1
  int v6; // r0
  float v7; // s28
  float v8; // s17
  float v9; // s26
  float v10; // s30
  float v11; // s18
  float v12; // s20
  float v13; // s22
  float v14; // s24
  _BOOL4 v15; // lr
  float v16; // s16
  unsigned int v17; // r0
  unsigned int v18; // r1
  unsigned int v19; // r3
  bool v20; // zf
  int v21; // r2
  int v22; // r12
  bool v23; // zf
  _BOOL4 v24; // r3
  float v25; // s4
  float *v26; // r0
  float v27; // s0
  float v28; // s2

  v5 = FIELD_U32(a2, 64);
  v6 = FIELD_U32(a1, 64);
  v7 = FIELD_F32(v6, 112) + FIELD_F32(a1, 120);
  v8 = FIELD_F32(v6, 108) + FIELD_F32(a1, 116);
  v9 = (float)(FIELD_F32(v5, 112) + FIELD_F32(a2, 120)) + a3[1];
  v10 = (float)(FIELD_F32(v5, 108) + FIELD_F32(a2, 116)) + *a3;
  v11 = v7 - v9;
  v12 = v8 - v10;
  v13 = (float)(v11 * v11) + (float)(v12 * v12);
  v14 = (float)((float)(FIELD_F32(a1, 124) + FIELD_F32(a2, 124))
              + (float)(FIELD_F32(a1, 128) + FIELD_F32(a2, 128)))
      * 0.5;
  v15 = 0;
  if ( sqrtf(v13) > v14 )
    return v15;
  v16 = sqrtf(v13);
  v17 = sub_6000F7B8(v11, v12);
  FIELD_F32(a1, 84) = v8;
  FIELD_F32(a1, 88) = v7;
  FIELD_F32(a2, 84) = v10;
  FIELD_F32(a2, 88) = v9;
  v19 = FIELD_U32(a1, 152);
  v20 = (v19 & 1) == 0;
  if ( (v19 & 1) == 0 )
  {
    v18 = FIELD_U32(a2, 152);
    v20 = (v18 & 1) == 0;
  }
  if ( v20 )
  {
    if ( (v18 & 0x800) != 0 && FIELD_U32(a1, 136) == 3 )
    {
      v22 = (v18 >> 10) & 1;
      v15 = 0;
    }
    else
    {
      v22 = 1;
      v15 = 0;
      if ( (v19 & 0x800) != 0 )
        v15 = (v19 & 0x400) == 0 && FIELD_U32(a2, 136) == 3;
    }
  }
  else
  {
    v21 = FIELD_U32(a1, 136);
    v22 = 1;
    v15 = 0;
    v23 = v21 == 8;
    if ( v21 != 8 )
      v23 = FIELD_U32(a2, 136) == 8;
    if ( !v23 )
    {
      v22 = (v19 >> 10) & 1;
      if ( (FIELD_U8(a2, 153) & 4) == 0 )
      {
        v24 = 0;
        v15 = 1;
        if ( !v22 )
          return v15;
        goto LABEL_17;
      }
    }
  }
  v24 = v22 == 0;
LABEL_17:
  v25 = (float)(v17 & 0xFFFFFF);
  v26 = (float *)((char *)sinLutTable + ((v17 >> 20) & 0xFF0));
  v27 = (float)(v14 - v16) * (float)(*v26 + (float)((float)(v25 * 0.000000059605) * v26[1]));
  v28 = (float)(v14 - v16) * (float)(v26[2] + (float)((float)(v25 * 0.000000059605) * v26[3]));
  if ( !v24 )
  {
    *(float *)(a1 + 4 * FIELD_U32(a2, 136) + 176) = v28;
    *(float *)(a1 + 4 * FIELD_U32(a2, 136) + 240) = v27;
  }
  if ( !v15 )
  {
    *(float *)(a2 + 4 * FIELD_U32(a1, 136) + 176) = -v28;
    *(float *)(a2 + 4 * FIELD_U32(a1, 136) + 240) = -v27;
  }
  return 1;
}
