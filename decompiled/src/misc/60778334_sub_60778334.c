/* sub_60778334
 * address: 0x60778334   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60778334(_DWORD *result)
{
  int v1; // r1
  int v2; // r1
  int v3; // r3

  v1 = result[97];
  if ( v1 >= 1 )
  {
    v2 = v1 - 1;
    v3 = result[96] + 1;
    if ( v3 >= result[95] )
      v3 = 0;
    result[96] = v3;
    result[97] = v2;
  }
  return result;
}
