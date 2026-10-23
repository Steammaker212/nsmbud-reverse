/* sub_602724DC
 * address: 0x602724DC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_602724DC(_DWORD *result)
{
  int v1; // r2

  result[800] |= 0x18u;
  result[798] |= 0x18u;
  v1 = result[796];
  result[794] |= 0x18u;
  result[796] = v1 | 0x18;
  return result;
}
