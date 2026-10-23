/* sub_6027253C
 * address: 0x6027253C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6027253C(_DWORD *result)
{
  unsigned int v1; // r2

  result[800] &= 0xFFFFFFE7;
  result[798] &= 0xFFFFFFE7;
  v1 = result[796] & 0xFFFFFFE7;
  result[794] &= 0xFFFFFFE7;
  result[796] = v1;
  return result;
}
