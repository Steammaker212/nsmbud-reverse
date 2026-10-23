/* sub_607DAC90
 * address: 0x607DAC90   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DAC90(int result, float a2, float a3)
{
  float v3; // s2
  float v4; // s6
  float v5; // s2

  if ( a3 > 0.0 )
  {
    FIELD_F32(result, 8) = a2;
    if ( a3 == 0.0 )
    {
      FIELD_F32(result, 8) = a2;
      FIELD_F32(result, 4) = a2;
      FIELD_F32(result, 12) = a2;
      FIELD_F32(result, 16) = a2;
      FIELD_F32(result, 20) = a2;
      FIELD_U32(result, 24) = 0;
      return result;
    }
    FIELD_F32(result, 20) = a2;
    v3 = FIELD_F32(result, 12);
    v4 = (float)(a2 - v3) / a3;
    v5 = v3 + (float)(v4 * 0.016667);
    FIELD_F32(result, 24) = v4;
    if ( v4 >= 0.0 )
    {
      if ( v5 > a2 )
        v5 = a2;
    }
    else if ( v5 < a2 )
    {
      FIELD_F32(result, 16) = a2;
      return result;
    }
    FIELD_F32(result, 16) = v5;
  }
  return result;
}
