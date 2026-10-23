/* sub_607DAC10
 * address: 0x607DAC10   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DAC10(int result)
{
  float v1; // s0
  float v2; // r1
  float v3; // s6
  float v4; // s2

  v1 = FIELD_F32(result, 20);
  if ( FIELD_F32(result, 12) != v1 )
  {
    v2 = FIELD_F32(result, 16);
    FIELD_F32(result, 12) = v2;
    if ( v2 == v1 )
    {
      FIELD_U32(result, 4) = FIELD_U32(result, 8);
      return result;
    }
    FIELD_F32(result, 4) = v2;
    v3 = FIELD_F32(result, 24);
    v4 = v2 + (float)(v3 * 0.016667);
    if ( v3 >= 0.0 )
    {
      if ( v4 > v1 )
        v4 = v1;
    }
    else if ( v4 < v1 )
    {
      FIELD_F32(result, 16) = v1;
      return result;
    }
    FIELD_F32(result, 16) = v4;
  }
  return result;
}
