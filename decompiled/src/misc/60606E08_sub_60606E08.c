/* sub_60606E08
 * address: 0x60606E08   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60606E08(_DWORD *result)
{
  unsigned int v1; // r1
  int v2; // s0

  result[31] = -1082130432;
  v1 = result[1707];
  if ( v1 > 3 )
    v2 = -1072902963;
  else
    v2 = dword_60AF2A64[v1];
  result[34] = v2;
  result[25] = 1008981770;
  return result;
}
