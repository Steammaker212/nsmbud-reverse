/* sub_6017793C
 * address: 0x6017793C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6017793C(_DWORD *result, int a2, _DWORD *a3)
{
  result[1] = FIELD_U32(a2, 8);
  result[3] = *a3;
  result[4] = a3[1];
  result[5] = a3[2];
  result[6] = a3[3];
  return result;
}
