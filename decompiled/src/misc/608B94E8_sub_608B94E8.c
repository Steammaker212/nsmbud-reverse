/* sub_608B94E8
 * address: 0x608B94E8   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608B94E8(_DWORD *result, int a2, int a3, int a4, int a5, int a6)
{
  *result = a2;
  result[1] = a3;
  result[2] = a4;
  result[7] = a6;
  result[3] = a5;
  result[4] = a5 + 8;
  result[5] = a5 + 16;
  result[6] = a5 + 24;
  return result;
}
