/* sub_60947BFC
 * address: 0x60947BFC   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60947BFC(_DWORD *result, int a2)
{
  int v2; // r2
  _DWORD *v3; // r2

  v2 = result[2];
  if ( v2 )
  {
    v3 = (_DWORD *)(v2 + 8);
  }
  else
  {
    v3 = result + 1;
    result[2] = a2;
  }
  *v3 = a2;
  result[2] = a2;
  ++result[3];
  return result;
}
