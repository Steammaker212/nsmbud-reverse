/* sub_608C5A74
 * address: 0x608C5A74   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_608C5A74(int a1, int a2, float result)
{
  unsigned int v3; // r2
  unsigned int v4; // r3
  unsigned int v5; // r1
  float v6; // s2
  float v7; // s0

  v3 = FIELD_U32(a1, 8);
  v4 = FIELD_U32(a1, 16);
  if ( v4 < v3 )
  {
    v5 = v4 + a2;
    if ( v5 <= v3 )
    {
      FIELD_U32(a1, 16) = v5;
      return result;
    }
    a2 = v5 - v3;
    FIELD_U32(a1, 16) = v3;
  }
  result = FIELD_F32(a1, 4);
  if ( result > 0.0 )
  {
    if ( FIELD_U8(a1, 28) )
    {
      v6 = FIELD_F32(a1, 20);
    }
    else
    {
      v6 = (float)FIELD_U8(a1, 14) / 127.0;
      FIELD_F32(a1, 20) = v6;
      FIELD_U8(a1, 28) = 1;
    }
    v7 = v6 + (float)((float)((float)a2 * result) / 1000.0);
    FIELD_U8(a1, 29) = v7 >= 1.0;
    result = v7 - (float)(int)v7;
    FIELD_F32(a1, 20) = result;
  }
  return result;
}
