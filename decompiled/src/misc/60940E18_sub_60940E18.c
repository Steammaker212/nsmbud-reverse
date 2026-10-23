/* sub_60940E18
 * address: 0x60940E18   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60940E18(_DWORD *result, int a2)
{
  int v2; // r2

  v2 = result[1];
  if ( v2 < result[2] )
  {
    *(_DWORD *)(result[3] + 4 * v2) = a2;
    ++result[1];
  }
  return result;
}
