/* sub_60636C3C
 * address: 0x60636C3C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60636C3C(int result)
{
  int v1; // r4
  unsigned int v2; // r5

  v1 = result;
  v2 = FIELD_U8(result, 144);
  if ( v2 >= 9 )
    v2 = 9;
  for ( ; v2; --v2 )
  {
    result = sub_60639154(v1);
    v1 += 16;
  }
  return result;
}
