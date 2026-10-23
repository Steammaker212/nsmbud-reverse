/* sub_606769E4
 * address: 0x606769E4   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_606769E4(int a1, float *a2, float result)
{
  int v4; // r0
  float v5; // s4
  float v6; // s2
  float v7; // s0

  v4 = FIELD_U8(a1, 6128);
  if ( v4 == 1 )
  {
    v7 = sub_606AE1F0(a2, 0);
    if ( FIELD_U8(a1, 6131) )
    {
      result = v7 + FIELD_F32(a1, 6112);
      FIELD_F32(a1, 112) = result;
    }
    else
    {
      result = v7 + FIELD_F32(a1, 6108);
      FIELD_F32(a1, 108) = result;
    }
  }
  else if ( v4 )
  {
    if ( (v4 | 1) == 3 )
    {
      sub_606D465C(a1 + 108, a1 + 6120);
      FIELD_F32(a1, 108) = FIELD_F32(a1, 108) - FIELD_F32(a1, 572);
      FIELD_F32(a1, 112) = FIELD_F32(a1, 112) - FIELD_F32(a1, 576);
      result = FIELD_F32(a1, 116) - FIELD_F32(a1, 580);
      FIELD_F32(a1, 116) = result;
    }
  }
  else
  {
    result = a2[27] + FIELD_F32(a1, 6108);
    v5 = a2[29] + FIELD_F32(a1, 6116);
    v6 = a2[28] + FIELD_F32(a1, 6112);
    FIELD_F32(a1, 108) = result;
    FIELD_F32(a1, 112) = v6;
    FIELD_F32(a1, 116) = v5;
  }
  return result;
}
