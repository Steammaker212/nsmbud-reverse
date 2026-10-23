/* sub_60323E90
 * address: 0x60323E90   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60323E90(_DWORD *result)
{
  int v1; // r1

  v1 = 48;
  if ( !result[1914] )
  {
    v1 = 48;
    if ( result[1912] == 1 )
      v1 = 0;
  }
  result[1915] = v1;
  return result;
}
