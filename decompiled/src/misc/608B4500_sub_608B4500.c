/* sub_608B4500
 * address: 0x608B4500   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608B4500(_DWORD *result, int a2)
{
  result[4] = 0;
  result[3] = 0;
  result[2] = 0;
  result[1] = 0;
  *result = 0;
  result[5] = FIELD_U8(a2, 9);
  result[6] = FIELD_U32(a2, 4);
  result[7] = FIELD_U8(a2, 8);
  result[8] = 0;
  result[9] = 0;
  result[10] = 0;
  result[11] = 0;
  result[12] = 0;
  result[13] = 0;
  result[14] = 0;
  return result;
}
