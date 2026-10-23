/* sub_6092424C
 * address: 0x6092424C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6092424C(_DWORD *a1)
{
  _DWORD *result; // r0

  result = sub_60923B30(a1);
  *result = &off_60C5D910;
  result[130] = 256;
  result[131] = 1;
  return result;
}
