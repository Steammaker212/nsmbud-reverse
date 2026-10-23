/* sub_60868D74
 * address: 0x60868D74   size: 1072   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60868D74(int result, int a2)
{
  int v2; // r1
  int v3; // lr
  int v4; // r1
  int v5; // r2
  unsigned int v6; // r1
  int v7; // r4
  _DWORD *v8; // r1
  unsigned int v9; // r4
  unsigned int v10; // r4
  unsigned int v11; // r4
  int v12; // r3
  float v13; // s0
  float v14; // s2
  float v15; // s4
  float v16; // s6
  float *v17; // r2
  float v18; // s8
  float v19; // s10
  float v20; // s12
  float v21; // s14
  float *v22; // r1
  int v23; // r1
  int v24; // r2
  unsigned int v25; // r4
  int v26; // r3
  unsigned __int8 *v27; // r3
  int v28; // t1
  unsigned int v29; // r3
  unsigned int v30; // s2
  unsigned int v31; // s4
  unsigned int v32; // s6
  unsigned int v33; // s8
  float *v34; // r3

  v2 = *(_DWORD *)(FIELD_U32(a2, 192) + 32);
  if ( v2 )
    v3 = v2 + FIELD_U32(result, 36);
  else
    v3 = 0;
  if ( FIELD_S8(result, 50) >= 0 )
  {
    v4 = (FIELD_U32(result, 16) >> 6) & 7;
    *(_DWORD *)v3 = v4;
    if ( v4 )
    {
      v5 = 0;
      do
      {
        v6 = FIELD_U32(result, 12);
        v7 = *(_DWORD *)(FIELD_U32(result, 20)
                       + ((8 * v6) & 0x18)
                       + (v6 & 0x30)
                       + ((v6 >> 6) & 8)
                       + 4 * ((v6 >> 10) & 3)
                       + 4 * ((v6 >> 6) & 7)
                       + ((v6 >> 12) & 8)
                       + (-((v6 >> 12) & 1) & 0xC)
                       + (-(HIWORD(v6) & 1) & 0x1C)
                       + 20 * (((v6 >> 13) & 3) + ((v6 >> 2) & 3))
                       + 16 * v5);
        v8 = (_DWORD *)(v3 + 16 * v5);
        v8[32] = v7;
        v9 = FIELD_U32(result, 12);
        v8[33] = *(_DWORD *)(FIELD_U32(result, 20)
                           + ((8 * v9) & 0x18)
                           + (v9 & 0x30)
                           + ((v9 >> 6) & 8)
                           + 4 * ((v9 >> 10) & 3)
                           + 4 * ((v9 >> 6) & 7)
                           + ((v9 >> 12) & 8)
                           + (-((v9 >> 12) & 1) & 0xC)
                           + (-(HIWORD(v9) & 1) & 0x1C)
                           + 20 * (((v9 >> 13) & 3) + ((v9 >> 2) & 3))
                           + 16 * v5
                           + 4);
        v10 = FIELD_U32(result, 12);
        v8[34] = *(_DWORD *)(FIELD_U32(result, 20)
                           + ((8 * v10) & 0x18)
                           + (v10 & 0x30)
                           + ((v10 >> 6) & 8)
                           + 4 * ((v10 >> 10) & 3)
                           + 4 * ((v10 >> 6) & 7)
                           + ((v10 >> 12) & 8)
                           + (-((v10 >> 12) & 1) & 0xC)
                           + (-(HIWORD(v10) & 1) & 0x1C)
                           + 20 * (((v10 >> 13) & 3) + ((v10 >> 2) & 3))
                           + 16 * v5
                           + 8);
        v11 = FIELD_U32(result, 12);
        v12 = FIELD_U32(result, 20)
            + ((8 * v11) & 0x18)
            + (v11 & 0x30)
            + ((v11 >> 6) & 8)
            + 4 * ((v11 >> 10) & 3)
            + 4 * ((v11 >> 6) & 7)
            + ((v11 >> 12) & 8)
            + (-((v11 >> 12) & 1) & 0xC)
            + (-(HIWORD(v11) & 1) & 0x1C)
            + 20 * (((v11 >> 13) & 3) + ((v11 >> 2) & 3))
            + 16 * v5++;
        v8[35] = FIELD_U32(v12, 12);
      }
      while ( v5 < *(_DWORD *)v3 );
    }
  }
  FIELD_U32(v3, 4) = 0;
  if ( (FIELD_U8(result, 50) & 8) != 0 )
  {
    v17 = *(float **)(result + 4);
    v16 = *v17;
    v15 = v17[1];
    v14 = v17[2];
    v13 = v17[3];
    if ( (FIELD_U8(result, 50) & 0x10) != 0 )
    {
LABEL_13:
      v22 = *(float **)(result + 4);
      v21 = v22[4];
      v20 = v22[5];
      v19 = v22[6];
      v18 = v22[7];
      goto LABEL_14;
    }
  }
  else
  {
    v13 = (float)FIELD_U8(result, 7) * 0.0039216;
    v14 = (float)FIELD_U8(result, 6) * 0.0039216;
    v15 = (float)FIELD_U8(result, 5) * 0.0039216;
    v16 = (float)FIELD_U8(result, 4) * 0.0039216;
    if ( (FIELD_U8(result, 50) & 0x10) != 0 )
      goto LABEL_13;
  }
  v18 = (float)FIELD_U8(result, 11) * 0.0039216;
  v19 = (float)FIELD_U8(result, 10) * 0.0039216;
  v20 = (float)FIELD_U8(result, 9) * 0.0039216;
  v21 = (float)FIELD_U8(result, 8) * 0.0039216;
LABEL_14:
  FIELD_F32(v3, 16) = v16;
  FIELD_F32(v3, 20) = v15;
  FIELD_F32(v3, 24) = v14;
  FIELD_F32(v3, 28) = v13;
  v23 = 4;
  v24 = 0;
  FIELD_F32(v3, 32) = v21;
  FIELD_F32(v3, 36) = v20;
  FIELD_F32(v3, 40) = v19;
  FIELD_F32(v3, 44) = v18;
  do
  {
    v25 = FIELD_U32(result, 12);
    v26 = FIELD_U32(result, 20)
        + ((8 * v25) & 0x18)
        + (v25 & 0x30)
        + ((v25 >> 6) & 8)
        + 4 * ((v25 >> 10) & 3)
        + 4 * ((v25 >> 6) & 7)
        + ((v25 >> 12) & 8)
        + (-((v25 >> 12) & 1) & 0xC)
        + 20 * (((v25 >> 13) & 3) + ((v25 >> 2) & 3));
    v28 = *(unsigned __int8 *)(v26 + v23);
    v27 = (unsigned __int8 *)(v26 + v23);
    v23 += 4;
    v29 = v28 | (v27[1] << 8) | ((v27[2] | (v27[3] << 8)) << 16);
    v30 = (unsigned __int8)v29;
    v31 = BYTE1(v29);
    v32 = BYTE2(v29);
    v33 = HIBYTE(v29);
    v34 = (float *)(v3 + v24);
    v24 += 16;
    v34[12] = (float)v30 / 255.0;
    v34[13] = (float)v31 / 255.0;
    v34[14] = (float)v32 / 255.0;
    v34[15] = (float)v33 / 255.0;
  }
  while ( v24 != 80 );
  return result;
}
