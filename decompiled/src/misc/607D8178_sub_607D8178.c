/* sub_607D8178
 * address: 0x607D8178   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_607D8178(int *a1)
{
  int v2; // r2
  int v3; // r1
  float *v4; // r0
  int v5; // r1
  float v6; // s2
  float v7; // s0
  float v8; // s16
  char v9; // r1
  unsigned int v10; // r0
  float v11; // s2
  float *v12; // r0
  float v13; // s4
  float v14; // s6
  float v15; // s8
  float v16; // s10
  int v17; // r0
  float result; // s0

  v2 = *((unsigned __int16 *)a1 + 15);
  v3 = *a1;
  v4 = (float *)a1[3];
  v5 = v3 + 20 * v2;
  v6 = FIELD_F32(v5, 8);
  v7 = FIELD_F32(v5, 4);
  if ( v6 == 0.0 )
  {
LABEL_2:
    v8 = FIELD_F32(v5, 4);
    goto LABEL_9;
  }
  v8 = *v4;
  if ( *v4 >= v7 )
  {
    if ( *v4 <= v7 )
      goto LABEL_9;
    v8 = v8 - v6;
    if ( v8 >= v7 )
      goto LABEL_9;
    goto LABEL_2;
  }
  v8 = v6 + v8;
  if ( v8 > v7 )
    v8 = FIELD_F32(v5, 4);
LABEL_9:
  *v4 = v8;
  if ( *((_BYTE *)a1 + 42) )
  {
    v9 = *((_BYTE *)a1 + 42) - 1;
    v10 = a1[6];
  }
  else
  {
    v10 = sub_6000F7B8(*((float *)a1 + 5) - *(float *)(a1[1] + 4), *((float *)a1 + 4) - *(float *)a1[1]);
    v9 = 7;
    a1[6] = v10;
  }
  *((_BYTE *)a1 + 42) = v9;
  v11 = (float)(v10 & 0xFFFFFF);
  v12 = (float *)((char *)sinLutTable + ((v10 >> 20) & 0xFF0));
  v13 = *v12;
  v14 = v12[1];
  v15 = v12[2];
  v16 = v12[3];
  v17 = a1[2];
  FIELD_U32(v17, 8) = 0;
  result = v8 * (float)(v15 + (float)((float)(v11 * 0.000000059605) * v16));
  *(float *)v17 = result;
  FIELD_F32(v17, 4) = v8 * (float)(v13 + (float)(v14 * (float)(v11 * 0.000000059605)));
  return result;
}
