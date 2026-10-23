/* sub_60902E78
 * address: 0x60902E78   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60902E78(_DWORD *a1)
{
  _DWORD *result; // r0

  result = sub_60901BCC(a1);
  *((_BYTE *)result + 20) = 0;
  *result = &off_60C5CB9C;
  result[6] = 0;
  result[7] = 0;
  result[8] = 0;
  result[9] = 0;
  result[10] = 0;
  result[11] = 0;
  result[12] = 1;
  return result;
}
