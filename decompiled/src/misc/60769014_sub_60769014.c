/* sub_60769014
 * address: 0x60769014   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60769014(_DWORD *result)
{
  int v1; // r1

  v1 = result[2484];
  result[2509] = v1;
  if ( v1 )
    result[301] |= 0x10u;
  return result;
}
