/* sub_60761440
 * address: 0x60761440   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60761440(_BYTE *result)
{
  bool v1; // zf

  if ( (result[1219] & 8) == 0 )
  {
    v1 = (result[1233] & 2) == 0;
    if ( (result[1233] & 2) == 0 )
      v1 = (result[1223] & 0x10) == 0;
    if ( v1 && (result[1236] & 0xE) == 0 )
      JUMPOUT(0x60762EFC);
  }
  return result;
}
