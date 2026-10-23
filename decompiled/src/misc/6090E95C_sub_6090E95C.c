/* sub_6090E95C
 * address: 0x6090E95C   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090E95C(int a1, int a2, float *a3)
{
  float v6; // s2
  float v7; // s6
  float v8; // s4
  float v10[6]; // [sp+8h] [bp-18h] BYREF

  sub_6090E680(a1, v10, a3);
  v6 = FIELD_F32(a1, 12) - FIELD_F32(a1, 4);
  v8 = FIELD_F32(a1, 16) - FIELD_F32(a1, 8);
  if ( (unsigned int)(FIELD_U32(a1, 20) - 1) < 2 )
  {
    v8 = FIELD_F32(a1, 12) - FIELD_F32(a1, 4);
    v6 = FIELD_F32(a1, 16) - FIELD_F32(a1, 8);
  }
  v7 = a3[6] - a3[4];
  return dword_60CC78B8(
           FIELD_U32(a2, 192),
           (int)v10[0],
           (int)(float)((float)(v7 - (float)((float)(v8 / a3[2]) * v7)) - v10[1]),
           (unsigned int)(float)((float)(v6 / a3[1]) * (float)(a3[5] - a3[3])),
           COERCE_FLOAT((int)v10[0]),
           (unsigned int)(float)((float)(v8 / a3[2]) * v7));
}
