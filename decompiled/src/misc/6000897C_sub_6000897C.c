/* sub_6000897C
 * address: 0x6000897C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6000897C(_DWORD *result, int a2)
{
  _DWORD *v2; // r2
  int v3; // r12

  v2 = result + 6269;
  v3 = result[6269];
  if ( v3 < result[6270] )
  {
    *(_DWORD *)(result[6271] + 4 * v3) = a2;
    result = (_DWORD *)(*v2 + 1);
    *v2 = result;
  }
  return result;
}
