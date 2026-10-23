/* sub_60797608
 * address: 0x60797608   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60797608(int a1, float result)
{
  float v2; // s0
  int *v3; // r2

  if ( (FIELD_U8(a1, 1229) & 0x10) == 0 )
  {
    if ( (FIELD_U8(a1, 87) & 1) != 0 )
    {
      v3 = dword_6079765C;
      if ( !FIELD_U8(a1, 86) )
        v3 = &dword_6079765C[1];
      v2 = *(float *)v3;
    }
    else
    {
      v2 = -1800.0;
    }
    result = v2 - (float)(32 * FIELD_U8(a1, 1312));
    FIELD_F32(a1, 116) = result;
  }
  return result;
}
