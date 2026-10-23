/* sub_60334D68
 * address: 0x60334D68   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60334D68(_DWORD *result)
{
  int v1; // r1

  result[794] &= ~0x40000000u;
  result[796] &= ~0x40000000u;
  result[795] &= ~4u;
  result[797] &= ~4u;
  v1 = result[5];
  if ( (v1 & 0x100) != 0 )
  {
    result[800] &= ~0x40000000u;
    result[801] &= ~4u;
  }
  if ( (v1 & 0x10) != 0 )
  {
    result[800] &= ~0x40000000u;
    result[801] &= ~4u;
  }
  return result;
}
