/* walk_angly_head_ref
 * address: 0x602D1250   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall walk_angly_head_ref(_DWORD *result)
{
  *result = &sead__SafeStringBase__vtable;
  result[1] = "walk_angly_head";
  return result;
}
