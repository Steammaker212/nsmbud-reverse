/* sub_601D8AE4
 * address: 0x601D8AE4   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_601D8AE4(int a1, int *a2, unsigned int a3)
{
  int *v4; // r4
  float *v5; // r0
  float v6; // s16
  float v7; // r10
  float v8; // r8
  float v9; // r7
  _DWORD *i; // r6
  int *v11; // r5
  _DWORD *v12; // r9
  int v13; // r0
  float v14; // r1
  float v15; // r7
  float v16; // r4
  float v17; // r6
  _DWORD v20[3]; // [sp+8h] [bp-48h] BYREF
  int v21; // [sp+14h] [bp-3Ch] BYREF
  int v22; // [sp+18h] [bp-38h]
  int v23; // [sp+1Ch] [bp-34h]

  v4 = &v21;
  v21 = *a2;
  v22 = a2[1];
  v23 = a2[2];
  memset(v20, 255, sizeof(v20));
  v5 = (float *)sub_601E0040(&v21);
  v6 = 0.0;
  v7 = *v5;
  v8 = v5[1];
  v9 = v5[2];
  for ( i = v20; ; i = v12 )
  {
    a3 = sub_601D84D4((int)v5, (int)v4, a3, i);
    if ( v21 == FIELD_U32(a1, 1032) && v22 == FIELD_U32(a1, 1036) && v23 == FIELD_U32(a1, 1040) )
      break;
    v11 = v4;
    v12 = i;
    v13 = sub_601E0040(i);
    v14 = v9;
    v15 = *(float *)v13;
    v16 = FIELD_F32(v13, 4);
    v17 = FIELD_F32(v13, 8);
    v6 = v6
       + sqrtf(
           (float)((float)((float)(v8 - v16) * (float)(v8 - v16))
                 + (float)((float)(v7 - *(float *)v13) * (float)(v7 - *(float *)v13)))
         + (float)((float)(v14 - v17) * (float)(v14 - v17)));
    if ( a3 == 6 )
      return v6;
    v5 = (float *)sub_6019EC34(v11, v12);
    v7 = v15;
    v8 = v16;
    v9 = v17;
    v4 = v11;
  }
  return v6
       + sqrtf(
           (float)((float)((float)(FIELD_F32(a1, 84) - v8) * (float)(FIELD_F32(a1, 84) - v8))
                 + (float)((float)(FIELD_F32(a1, 80) - v7) * (float)(FIELD_F32(a1, 80) - v7)))
         + (float)((float)(FIELD_F32(a1, 88) - v9) * (float)(FIELD_F32(a1, 88) - v9)));
}
