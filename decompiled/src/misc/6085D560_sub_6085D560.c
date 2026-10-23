/* sub_6085D560
 * address: 0x6085D560   size: 624   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085D560(int result, int a2)
{
  unsigned __int8 *v2; // r2
  float v3; // s0
  float v4; // s2
  float v5; // s4
  float v6; // s6
  float *v7; // r3
  float v8; // s8
  float v9; // s10
  float v10; // s12
  float *v11; // r2
  int v12; // r3
  unsigned int v13; // r2
  char v14; // r2
  int v15; // r3
  int v16; // r2
  unsigned __int8 *v17; // r3
  unsigned int v18; // t1
  float v19; // s4
  float v20; // s6
  unsigned int v21; // s8
  float v22; // s4
  float v23; // s6

  if ( (FIELD_U8(result, 216) & 0x10) != 0 )
    FIELD_U32(a2, 96) |= 1u;
  v2 = *(unsigned __int8 **)(result + 256);
  if ( (v2[50] & 0x10) == 0 )
  {
    v3 = (float)v2[11] * 0.0039216;
    v4 = (float)v2[10] * 0.0039216;
    v5 = (float)v2[9] * 0.0039216;
    v6 = (float)v2[8] * 0.0039216;
    if ( (v2[50] & 8) != 0 )
      goto LABEL_8;
LABEL_7:
    v8 = (float)v2[6] * 0.0039216;
    v9 = (float)v2[5] * 0.0039216;
    v10 = (float)v2[4] * 0.0039216;
    goto LABEL_9;
  }
  v7 = *((float **)v2 + 1);
  v6 = v7[4];
  v5 = v7[5];
  v4 = v7[6];
  v3 = v7[7];
  if ( (v2[50] & 8) == 0 )
    goto LABEL_7;
LABEL_8:
  v11 = *((float **)v2 + 1);
  v10 = *v11;
  v9 = v11[1];
  v8 = v11[2];
LABEL_9:
  FIELD_F32(a2, 24) = v10;
  FIELD_F32(a2, 28) = v9;
  FIELD_F32(a2, 32) = v8;
  FIELD_U32(a2, 36) = 0;
  FIELD_F32(a2, 40) = v6;
  FIELD_F32(a2, 44) = v5;
  FIELD_F32(a2, 48) = v4;
  FIELD_F32(a2, 52) = v3;
  FIELD_U8(a2, 56) = FIELD_U8(result, 66);
  v12 = FIELD_U32(result, 256);
  v13 = FIELD_U32(v12, 12);
  if ( (v13 & 0x8000) != 0 )
  {
    v15 = FIELD_U32(v12, 20);
    v16 = ((8 * v13) & 0x18)
        + (v13 & 0x30)
        + ((v13 >> 6) & 8)
        + 4 * ((v13 >> 10) & 3)
        + 4 * ((v13 >> 6) & 7)
        + (-((v13 >> 12) & 1) & 0xC)
        + 20 * (((v13 >> 13) & 3) + ((v13 >> 2) & 3));
    v18 = *(unsigned __int8 *)(v15 + v16);
    v17 = (unsigned __int8 *)(v15 + v16);
    v19 = (float)v17[1];
    v20 = (float)v17[2];
    FIELD_F32(a2, 60) = (float)v18 * 0.0039216;
    FIELD_F32(a2, 64) = v19 * 0.0039216;
    FIELD_F32(a2, 68) = v20 * 0.0039216;
    FIELD_U32(a2, 72) = 0;
    v21 = v17[6];
    v22 = (float)v17[4] * 0.0039216;
    v23 = (float)v17[5] * 0.0039216;
    FIELD_F32(a2, 76) = (float)v17[3] * 0.0039216;
    FIELD_F32(a2, 80) = v22;
    FIELD_F32(a2, 84) = v23;
    FIELD_F32(a2, 88) = (float)v21 * 0.0039216;
    v14 = FIELD_U8(result, 66);
  }
  else
  {
    v14 = FIELD_U8(result, 66);
    FIELD_U32(a2, 60) = 0;
    FIELD_U32(a2, 64) = 0;
    FIELD_U32(a2, 68) = 0;
    FIELD_U32(a2, 72) = 0;
    FIELD_U32(a2, 76) = 1065353216;
    FIELD_U32(a2, 80) = 1065353216;
    FIELD_U32(a2, 84) = 1065353216;
    FIELD_U32(a2, 88) = 1065353216;
  }
  FIELD_U8(a2, 92) = v14;
  if ( (FIELD_U8(result, 216) & 0x80) != 0 )
  {
    FIELD_U32(a2, 4) = *(_DWORD *)(FIELD_U32(result, 264) + 8);
    FIELD_U32(a2, 8) = *(unsigned __int8 *)(FIELD_U32(result, 264) + 13);
    result = *(_DWORD *)(FIELD_U32(result, 264) + 16);
    FIELD_U32(a2, 12) = result;
  }
  return result;
}
