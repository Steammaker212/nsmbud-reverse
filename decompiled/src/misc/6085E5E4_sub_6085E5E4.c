/* sub_6085E5E4
 * address: 0x6085E5E4   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6085E5E4(int a1, float *a2)
{
  float result; // s0
  _BOOL4 v3; // lr
  float v4; // s2
  float *v5; // r2
  float v6; // r0
  int v7; // r1
  float v8; // r3
  float v9; // r1
  float v10; // s0
  float v11; // s4
  float v12; // s6
  float v13; // s4

  result = FIELD_F32(a1, 192);
  v3 = result != *a2 || FIELD_F32(a1, 196) != a2[1];
  FIELD_U16(a1, 216) = FIELD_U16(a1, 216) & 0xFFFB | (4 * ((v3 | (FIELD_U16(a1, 216) >> 2)) & 1));
  if ( v3 )
  {
    v4 = FIELD_F32(a1, 196);
    v5 = (float *)(a1 + 192);
    if ( v4 == 0.0 )
    {
      v6 = *a2;
      v7 = *((_DWORD *)a2 + 1);
      *v5 = v6;
      *((_DWORD *)v5 + 1) = v7;
    }
    else
    {
      v8 = *a2;
      v9 = a2[1];
      v10 = result / v4;
      v11 = FIELD_F32(a1, 220);
      v12 = FIELD_F32(a1, 248);
      *v5 = v8;
      FIELD_F32(a1, 196) = v9;
      v13 = (float)(v11 * v10) * (float)(v9 / v8);
      result = (float)(v10 * v12) * (float)(v9 / v8);
      FIELD_F32(a1, 220) = v13;
      FIELD_F32(a1, 248) = result;
    }
  }
  return result;
}
