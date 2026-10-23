/* sub_60161A3C
 * address: 0x60161A3C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60161A3C(int result, int a2)
{
  int v2; // r2

  if ( a2 )
  {
    v2 = FIELD_U32(result, 8);
    if ( v2 )
    {
      FIELD_U32(v2, 4) = a2;
      FIELD_U32(a2, 8) = FIELD_U32(result, 8);
    }
    else
    {
      FIELD_U32(result, 4) = a2;
    }
    FIELD_U32(result, 8) = a2;
  }
  return result;
}
