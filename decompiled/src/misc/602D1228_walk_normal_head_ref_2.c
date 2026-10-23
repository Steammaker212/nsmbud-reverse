/* walk_normal_head_ref_2
 * address: 0x602D1228   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall walk_normal_head_ref_2(_DWORD *result)
{
  *result = &sead__SafeStringBase__vtable;
  result[1] = "walk_normal_head";
  return result;
}
