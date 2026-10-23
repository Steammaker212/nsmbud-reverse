/* sub_60881D78
 * address: 0x60881D78   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60881D78(int a1, int a2)
{
  int v2; // r2
  int result; // r0
  int v4; // r1

  v2 = FIELD_U32(a1, 320);
  result = 0;
  if ( v2 )
  {
    v4 = a2 + 1;
    while ( --v4 )
    {
      v2 = FIELD_U32(v2, 120);
      if ( !v2 )
        return result;
    }
    return v2;
  }
  return result;
}
