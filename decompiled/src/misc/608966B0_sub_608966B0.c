/* sub_608966B0
 * address: 0x608966B0   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608966B0(_DWORD *result)
{
  _DWORD *v1; // r4

  v1 = result;
  if ( *result )
  {
    result = (_DWORD *)sub_60897440(result[2], *result, 0);
    *v1 = 0;
  }
  return result;
}
