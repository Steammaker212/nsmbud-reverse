/* sub_60636C00
 * address: 0x60636C00   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60636C00(int result, int a2)
{
  int v2; // r5
  unsigned int v4; // r6

  v2 = result;
  v4 = FIELD_U8(result, 144);
  if ( v4 >= 9 )
    v4 = 9;
  for ( ; v4; --v4 )
  {
    result = sub_60639064(v2, a2);
    v2 += 16;
  }
  return result;
}
