/* sub_60440030
 * address: 0x60440030   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60440030(_DWORD *result, int a2)
{
  *result = &sead__SafeStringBase__vtable;
  result[1] = off_60BFAB60[a2];
  return result;
}
