/* Spiny__ctor
 * address: 0x603BB740   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

CarryableEnemy *__fastcall Spiny__ctor(_DWORD *a1)
{
  int v2; // r0
  CarryableEnemy *result; // r0

  v2 = operator_new(0x1AE0u);
  result = SpinyBase__ctor(v2, a1);
  FIELD_U32(result, 0x0)._._._._.vtable = (int)off_60BF5CF4;
  return result;
}
