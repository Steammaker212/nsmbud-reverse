/* sub_600662AC
 * address: 0x600662AC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_600662AC(_DWORD *result)
{
  int v1; // r1

  v1 = FIELD_U32(dword_60CC6484, 128);
  result[1528] = FIELD_U32(dword_60CC6484, 116);
  result[1529] = v1;
  result[1530] = 0;
  return result;
}
