/* gsys_priority_hint_ref
 * address: 0x604400E0   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall gsys_priority_hint_ref(_DWORD *result)
{
  *result = &sead__SafeStringBase__vtable;
  result[1] = "gsys_priority_hint";
  return result;
}
