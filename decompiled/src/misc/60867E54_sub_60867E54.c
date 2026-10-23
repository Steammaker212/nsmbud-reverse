/* sub_60867E54
 * address: 0x60867E54   size: 1048   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60867E54(_DWORD *a1, int a2, int a3, int a4)
{
  unsigned int v6; // r0
  unsigned int v7; // r6
  int v8; // r7
  unsigned int v9; // r11
  float v10; // s16
  float *v11; // r10
  float v12; // s28
  float v13; // s24
  float v14; // s26
  __int64 v15; // r0
  float v16; // s8
  float v17; // s2
  float v18; // s0
  float v19; // s4
  float v20; // s10
  float v21; // s6
  int v22; // r1
  int v23; // r0
  int v24; // r1
  float v25; // s8
  float v26; // s0
  float v27; // s2
  int v28; // r1
  unsigned int result; // r0
  unsigned int v30; // r2
  unsigned int v31; // r1
  int v32; // r2
  int v33; // r10
  int v34; // r7
  int v35; // r9
  int v36; // r2
  int v37; // r1
  int v38; // r5
  unsigned int v39; // r0
  int v40; // r0
  unsigned int v41; // [sp+Ch] [bp-7Ch]
  int v42; // [sp+10h] [bp-78h]
  _DWORD v45[27]; // [sp+1Ch] [bp-6Ch] BYREF

  v6 = a1[4];
  if ( (v6 & 0xC) != 0 )
  {
    v7 = (v6 >> 2) & 3;
    if ( (v6 & 3) < v7 )
      v7 = v6 & 3;
    if ( FIELD_S8(a2, 213) < (int)v7 )
      v7 = FIELD_S8(a2, 213);
    if ( v7 )
    {
      v8 = 8;
      v9 = 0;
      v10 = (float)nn__util__detail__AngleIndexHalfRound / nn__util__detail__FloatDegree180;
      while ( 1 )
      {
        v11 = (float *)(a1[5] + ((8 * a1[3]) & 0x18) + v8);
        v12 = *(v11 - 1);
        v13 = v11[1];
        v14 = v11[2];
        v15 = (__int64)(float)(*v11 * v10);
        HIDWORD(v15) = (char *)&nn__util__detail__SinCosSampleTable + (((unsigned int)v15 >> 20) & 0xFF0);
        v16 = (float)(v15 & 0xFFFFFF);
        v17 = *(float *)HIDWORD(v15);
        v18 = *(float *)(HIDWORD(v15) + 4);
        v19 = *(float *)(HIDWORD(v15) + 8);
        v20 = *(float *)(HIDWORD(v15) + 12);
        v21 = *(v11 - 2);
        v22 = *(_DWORD *)(FIELD_U32(a2, 192) + 32);
        if ( v22 )
          v22 += a1[8];
        if ( v9 == 2 )
        {
          v23 = v22 + 192;
          v24 = v22 + 176;
          goto LABEL_16;
        }
        if ( v9 == 1 )
          break;
        if ( !v9 )
        {
          v23 = v22 + 128;
          v24 = v22 + 112;
LABEL_16:
          v25 = v16 * 0.000000059605;
          v26 = v18 + (float)(v20 * v25);
          v27 = v17 + (float)(v19 * v25);
          *(float *)v24 = v13 * v27;
          FIELD_F32(v24, 4) = -(float)(v14 * v26);
          FIELD_U32(v24, 8) = 0;
          FIELD_F32(v24, 12) = (float)((float)(v21 + 0.5) - (float)((float)(v13 * v27) * 0.5))
                               + (float)((float)(v14 * v26) * 0.5);
          *(float *)v23 = -(float)(v13 * v26);
          FIELD_F32(v23, 4) = -(float)(v14 * v27);
          FIELD_U32(v23, 8) = 0;
          FIELD_F32(v23, 12) = 1.0
                               - (float)((float)((float)(v12 + 0.5) - (float)((float)(v13 * v26) * 0.5))
                                       - (float)((float)(v14 * v27) * 0.5));
        }
        ++v9;
        v8 += 20;
        if ( v9 >= v7 )
        {
          v6 = a1[4];
          goto LABEL_19;
        }
      }
      v23 = v22 + 160;
      v24 = v22 + 144;
      goto LABEL_16;
    }
  }
LABEL_19:
  if ( (v6 & 0x30) != 0 )
  {
    v28 = (v6 >> 4) & 3;
    if ( v28 )
    {
      FIELD_U8(a2, 208) = *(_BYTE *)(a1[5]
                                      + ((8 * a1[3]) & 0x18)
                                      + 4 * ((a1[3] >> 2) & 3 | (4 * ((a1[3] >> 2) & 3)))
                                      + 1);
      if ( v28 != 1 )
      {
        FIELD_U8(a2, 209) = *(_BYTE *)(a1[5]
                                        + ((8 * a1[3]) & 0x18)
                                        + 4 * ((a1[3] >> 2) & 3 | (4 * ((a1[3] >> 2) & 3)))
                                        + 17);
        if ( v28 != 2 )
        {
          FIELD_U8(a2, 210) = *(_BYTE *)(a1[5]
                                          + ((8 * a1[3]) & 0x18)
                                          + 4 * ((a1[3] >> 2) & 3 | (4 * ((a1[3] >> 2) & 3)))
                                          + 33);
          goto LABEL_27;
        }
      }
    }
    else
    {
      v28 = 0;
    }
    memset((void *)(a2 + (v28 | 0xD0)), 255, v28 ^ 3);
  }
  else
  {
    FIELD_U8(a2, 208) = -1;
  }
LABEL_27:
  result = a1[3];
  if ( (result & 3) != 0 )
  {
    v30 = a1[4];
    v31 = (v30 >> 4) & 3;
    v41 = v30;
    v32 = v30 & 3;
    if ( v31 < v32 )
      v32 = v31;
    v33 = v32;
    v42 = v32;
    if ( v32 >= 3 )
      v33 = 3;
    if ( v32 >= 1 )
    {
      v34 = 0;
      v35 = 0;
      while ( 1 )
      {
        v36 = (8 * result) & 0x18;
        v37 = a1[5];
        v38 = *(unsigned __int8 *)(v37 + v36 + 20 * ((result >> 2) & 3) + 16 * v35 + 1);
        if ( v38 == 3 )
        {
          v45[v35] = 1;
        }
        else
        {
          v45[v35] = v38 == 4;
          if ( v38 != 4 )
            goto LABEL_39;
        }
        sub_608686E0(
          a1,
          a2,
          a3,
          a4,
          v37
        + v36
        + (result & 0x30)
        + ((result >> 6) & 8)
        + 4 * ((result >> 10) & 3)
        + 4 * ((result >> 6) & 7)
        + 20 * ((result >> 2) & 3)
        + (-((result >> 12) & 1) & 0xC)
        + 20 * v34++,
          v35);
LABEL_39:
        if ( ++v35 >= v33 )
          break;
        result = a1[3];
      }
    }
    if ( v42 <= 2 )
    {
      v39 = ((v41 >> 4) | 0xFFFFFFFC) ^ 3;
      if ( ((v41 | 0xFFFFFFFC) ^ 3) > v39 )
        v39 = (v41 | 0xFFFFFFFC) ^ 3;
      memset(&v45[v42], 0, 4 * v39 + 16);
    }
    v40 = *(_DWORD *)(FIELD_U32(a2, 192) + 32);
    if ( v40 )
      result = v40 + a1[8];
    else
      result = 0;
    FIELD_U32(result, 544) = v45[0];
    FIELD_U32(result, 548) = v45[1];
    FIELD_U32(result, 552) = v45[2];
  }
  return result;
}
