/* sub_60378BC4
 * address: 0x60378BC4   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60378BC4(int a1, int *a2)
{
  int v3; // r2
  int v4; // r7
  unsigned int v5; // r5
  int v6; // r6
  int v7; // r0
  float v8; // s20
  float v9; // s22
  float v10; // s16
  float v11; // s18
  float v12; // s0
  int v13; // r0
  float v14; // s2
  float v15; // s4
  float v16; // s6
  float v17; // s4
  int *v18; // r6
  float v19; // s0
  float v20; // s0
  int result; // r0

  v3 = *a2;
  v4 = dword_60C96478;
  *(_DWORD *)a1 = *a2;
  FIELD_U32(a1, 4) = v3;
  v5 = a2[1];
  v6 = sub_60377B20(v4, v3, v5);
  v7 = sub_60377B20(v4, *(_DWORD *)a1, v5 + 1);
  v8 = FIELD_F32(v6, 16);
  v9 = FIELD_F32(v6, 20);
  v10 = FIELD_F32(v7, 20) - v9;
  v11 = FIELD_F32(v7, 16) - v8;
  v12 = sqrtf((float)(v10 * v10) + (float)(v11 * v11));
  if ( v12 > 0.0 )
  {
    v10 = v10 * (float)(1.0 / v12);
    v11 = v11 * (float)(1.0 / v12);
  }
  v13 = FIELD_U32(a1, 28);
  v14 = FIELD_F32(v13, 108);
  v15 = FIELD_F32(v13, 112);
  v16 = (float)(v10 * (float)(v15 - v9)) + (float)(v11 * (float)(v14 - v8));
  if ( v16 >= 0.0 )
  {
    v18 = (int *)(a1 + 12);
    if ( v16 < v12 )
    {
      FIELD_U32(a1, 12) = v5 + 1;
      FIELD_F32(a1, 20) = v11;
      FIELD_F32(a1, 24) = v10;
    }
  }
  else
  {
    v17 = v9 - v15;
    FIELD_U32(a1, 12) = v5;
    v18 = (int *)(a1 + 12);
    FIELD_F32(a1, 20) = v8 - v14;
    FIELD_F32(a1, 24) = v17;
    v19 = sqrtf((float)(v17 * v17) + (float)((float)(v8 - v14) * (float)(v8 - v14)));
    if ( v19 > 0.0 )
    {
      v20 = 1.0 / v19;
      FIELD_F32(a1, 20) = v20 * FIELD_F32(a1, 20);
      FIELD_F32(a1, 24) = v20 * FIELD_F32(a1, 24);
    }
  }
  result = *v18;
  FIELD_U32(a1, 16) = *v18;
  return result;
}
