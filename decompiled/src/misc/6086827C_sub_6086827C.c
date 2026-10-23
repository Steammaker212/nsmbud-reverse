/* sub_6086827C
 * address: 0x6086827C   size: 1092   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086827C(int result, int a2)
{
  int v2; // r4
  int v3; // r1
  int v4; // r5
  float v5; // s0
  float v6; // s2
  float v7; // s4
  float v8; // s6
  float v9; // r1
  float v10; // r2
  float v11; // r3
  float v12; // r4
  float *v13; // r2
  float v14; // s8
  float v15; // s10
  float v16; // s12
  float v17; // s14
  float *v18; // r1
  float v19; // s0
  float *v20; // r1
  unsigned int v21; // r3
  unsigned int v22; // r1
  _BYTE *v23; // r2
  int v24; // r1
  unsigned int v25; // r3
  unsigned int v26; // r1
  float *v27; // r0
  float v28; // s16
  float v29; // s18
  __int64 v30; // r0
  float v31; // s0
  float v32; // s4
  float v33; // s2
  float v34; // s6
  float v35; // s0
  float v36; // s12
  float v37; // s0
  float v38; // s2
  float v39; // s0

  v2 = FIELD_U32(result, 16);
  if ( (v2 & 0x30000) != 0 )
  {
    if ( (v2 & 0x10000) != 0 )
      return sub_60868D74();
    else
      return table_init();
  }
  v3 = *(_DWORD *)(FIELD_U32(a2, 192) + 32);
  if ( v3 )
    v4 = v3 + FIELD_U32(result, 36);
  else
    v4 = 0;
  if ( (v2 & 3) != 0 )
  {
    if ( (FIELD_U8(result, 50) & 0x10) != 0 )
    {
      v13 = *(float **)(result + 4);
      v8 = v13[4];
      v7 = v13[5];
      v6 = v13[6];
      v5 = v13[7];
      if ( (FIELD_U8(result, 50) & 8) != 0 )
      {
LABEL_16:
        v18 = *(float **)(result + 4);
        v17 = *v18;
        v16 = v18[1];
        v15 = v18[2];
        v14 = v18[3];
        goto LABEL_17;
      }
    }
    else
    {
      v5 = (float)FIELD_U8(result, 11) * 0.0039216;
      v6 = (float)FIELD_U8(result, 10) * 0.0039216;
      v7 = (float)FIELD_U8(result, 9) * 0.0039216;
      v8 = (float)FIELD_U8(result, 8) * 0.0039216;
      if ( (FIELD_U8(result, 50) & 8) != 0 )
        goto LABEL_16;
    }
    v14 = (float)FIELD_U8(result, 7) * 0.0039216;
    v15 = (float)FIELD_U8(result, 6) * 0.0039216;
    v16 = (float)FIELD_U8(result, 5) * 0.0039216;
    v17 = (float)FIELD_U8(result, 4) * 0.0039216;
LABEL_17:
    v19 = v5 - v14;
    *(float *)v4 = v8 - v17;
    FIELD_F32(v4, 4) = v7 - v16;
    FIELD_F32(v4, 8) = v6 - v15;
    FIELD_F32(v4, 16) = v17;
    FIELD_F32(v4, 20) = v16;
    FIELD_F32(v4, 24) = v15;
    if ( (FIELD_U8(result, 50) & 4) != 0 )
    {
      v19 = 1.0 / (float)(v19 + 0.0001);
      v14 = -(float)(v14 * v19);
    }
    FIELD_F32(v4, 12) = v19;
    goto LABEL_22;
  }
  if ( (FIELD_U8(result, 50) & 0x10) != 0 )
  {
    v20 = *(float **)(result + 4);
    v12 = v20[4];
    v11 = v20[5];
    v10 = v20[6];
    v9 = v20[7];
  }
  else
  {
    v9 = (float)FIELD_U8(result, 11) * 0.0039216;
    v10 = (float)FIELD_U8(result, 10) * 0.0039216;
    v11 = (float)FIELD_U8(result, 9) * 0.0039216;
    v12 = (float)FIELD_U8(result, 8) * 0.0039216;
  }
  v14 = 0.0;
  *(float *)v4 = v12;
  FIELD_F32(v4, 4) = v11;
  FIELD_F32(v4, 8) = v10;
  FIELD_F32(v4, 12) = v9;
  FIELD_U32(v4, 16) = 0;
  FIELD_U32(v4, 20) = 0;
  FIELD_U32(v4, 24) = 0;
LABEL_22:
  FIELD_F32(v4, 28) = v14;
  v21 = FIELD_U32(result, 16);
  if ( (v21 & 0x1C0) != 0 )
  {
    if ( (FIELD_U32(result, 16) & 3u) < 2 )
    {
      FIELD_U32(v4, 128) = FIELD_U32(result, 16) & 3;
    }
    else
    {
      v22 = FIELD_U32(result, 12);
      v23 = (_BYTE *)(FIELD_U32(result, 20)
                    + ((8 * v22) & 0x18)
                    + (v22 & 0x30)
                    + ((v22 >> 6) & 8)
                    + 4 * ((v22 >> 10) & 3)
                    + 4 * ((v22 >> 2) & 3 | (4 * ((v22 >> 2) & 3)))
                    + (-((v22 >> 12) & 1) & 0xC));
      v24 = 0;
      v25 = (v21 >> 6) & 7;
      if ( v23[1] == 1 )
        v24 = 128;
      if ( v25 > 1 )
      {
        if ( v23[5] == 1 )
          v24 |= 0x8000u;
        if ( v25 >= 3 )
        {
          if ( v23[9] == 1 )
            v24 |= 0x800000u;
          if ( v25 >= 4 )
          {
            if ( v23[13] == 1 )
              v24 |= 0x80000000;
            if ( v25 >= 5 )
            {
              if ( v23[17] == 1 )
                v24 = -1;
              if ( v25 >= 6 )
              {
                if ( v23[21] == 1 )
                  v24 = -1;
                if ( v25 == 7 && v23[25] == 1 )
                  v24 = -1;
              }
            }
          }
        }
      }
      FIELD_U32(v4, 128) = v24;
      v26 = FIELD_U32(result, 12);
      if ( (v26 & 0x1000) != 0 )
      {
        v27 = (float *)(FIELD_U32(result, 20)
                      + ((8 * v26) & 0x18)
                      + (v26 & 0x30)
                      + ((v26 >> 6) & 8)
                      + 4 * ((v26 >> 10) & 3)
                      + 4 * ((v26 >> 2) & 3 | (4 * ((v26 >> 2) & 3))));
        v28 = v27[1];
        v29 = v27[2];
        v30 = (__int64)(float)(*v27
                             * (float)((float)nn__util__detail__AngleIndexHalfRound / nn__util__detail__FloatDegree180));
        HIDWORD(v30) = (char *)&nn__util__detail__SinCosSampleTable + (((unsigned int)v30 >> 20) & 0xFF0);
        v31 = (float)(v30 & 0xFFFFFF) * 0.000000059605;
        v32 = *(float *)(HIDWORD(v30) + 4) + (float)(*(float *)(HIDWORD(v30) + 12) * v31);
        v33 = *(float *)HIDWORD(v30) + (float)(*(float *)(HIDWORD(v30) + 8) * v31);
        v34 = (float)(v29 * v32) * -2.0;
        v35 = (float)(v28 * v33) + (float)(v28 * v33);
        FIELD_F32(v4, 32) = v35;
        v36 = (float)(v34 * -0.5) - (float)(v35 * 0.5);
        FIELD_F32(v4, 36) = v34;
        v37 = v29 * v33;
        v38 = (float)(v28 * v32) + (float)(v28 * v32);
        FIELD_U32(v4, 40) = 0;
        v39 = v37 + v37;
        FIELD_F32(v4, 44) = v36;
        FIELD_F32(v4, 48) = v38;
        FIELD_F32(v4, 52) = v39;
        FIELD_U32(v4, 56) = 0;
        FIELD_F32(v4, 60) = (float)(v39 * -0.5) - (float)(v38 * 0.5);
        return 0;
      }
    }
  }
  return result;
}
