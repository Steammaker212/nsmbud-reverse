/* sub_60764338
 * address: 0x60764338   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60764338(int result, float a2)
{
  float v2; // s2

  if ( (FIELD_U8(result, 6900) & 1) == 0 )
  {
    v2 = -2.0;
    if ( a2 >= -2.0 )
    {
      v2 = a2;
      if ( a2 > 2.0 )
        v2 = 2.0;
    }
    FIELD_F32(result, 636) = v2;
    FIELD_U32(result, 1204) |= 0x800u;
    FIELD_U32(result, 7132) = 120;
  }
  return result;
}
