/* sub_60920628
 * address: 0x60920628   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60920628(_DWORD *result, int a2)
{
  int v2; // r1

  v2 = FIELD_U32(a2, 264);
  *result = &sead__SafeStringBase__vtable;
  result[1] = v2;
  return result;
}
