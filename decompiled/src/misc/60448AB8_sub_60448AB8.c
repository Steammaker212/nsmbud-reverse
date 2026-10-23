/* sub_60448AB8
 * address: 0x60448AB8   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60448AB8(_DWORD *result, int a2, int a3)
{
  if ( result[32] )
  {
    result[32] = 0;
    result[33] = -1;
  }
  result[32] = a2;
  result[33] = a3;
  if ( result[34] )
    return (_DWORD *)sub_60878050(result + 8, **(_DWORD **)(a2 + 68));
  return result;
}
