/* sub_608479B8
 * address: 0x608479B8   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608479B8(_DWORD *result, int a2, int a3, int a4, int a5, int a6)
{
  result[4] = FIELD_U32(a6, 12);
  *result = a3;
  result[1] = a5;
  result[2] = a2;
  result[3] = a4;
  return result;
}
