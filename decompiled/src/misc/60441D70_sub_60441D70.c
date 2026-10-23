/* sub_60441D70
 * address: 0x60441D70   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60441D70(_DWORD *result, int a2, int a3)
{
  *result = &sead__SafeStringBase__vtable;
  result[1] = dword_60C9CCE8[2 * a3 + 1];
  return result;
}
