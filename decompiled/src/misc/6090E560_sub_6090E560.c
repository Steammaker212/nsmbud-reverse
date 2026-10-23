/* sub_6090E560
 * address: 0x6090E560   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090E560(int a1, int a2, float *a3)
{
  float v6; // s8
  float v7; // s2
  float v8; // s6
  float v9; // s4
  float v10; // s4
  float v11; // s16
  float v12; // s4
  float v13; // s6
  int v14; // r4
  unsigned int v15; // r5
  float v17; // [sp+8h] [bp-20h] BYREF
  float v18; // [sp+Ch] [bp-1Ch]

  sub_6090E680(a1, &v17);
  v6 = a3[1];
  v7 = FIELD_F32(a1, 12) - FIELD_F32(a1, 4);
  v8 = a3[6] - a3[4];
  v9 = FIELD_F32(a1, 16) - FIELD_F32(a1, 8);
  if ( (unsigned int)(FIELD_U32(a1, 20) - 1) < 2 )
  {
    v9 = FIELD_F32(a1, 12) - FIELD_F32(a1, 4);
    v7 = FIELD_F32(a1, 16) - FIELD_F32(a1, 8);
  }
  v10 = v9 / a3[2];
  v11 = v10 * v8;
  v12 = v8 - (float)(v10 * v8);
  v13 = a3[5] - a3[3];
  v18 = v12 - v18;
  v14 = FIELD_U32(a2, 192);
  v15 = (unsigned int)(float)((float)(v7 / v6) * v13);
  dword_60CC78B8(v14, (int)v17, (int)v18, v15, COERCE_FLOAT((int)v17), (unsigned int)v11);
  return dword_60CC78AC(v14, (int)v17, (int)v18, v15, COERCE_FLOAT((int)v17), (unsigned int)v11);
}
