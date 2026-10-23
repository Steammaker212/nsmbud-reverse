/* sub_607F5DF8
 * address: 0x607F5DF8   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607F5DF8(int a1, int a2, int a3)
{
  _DWORD *v6; // r0
  _DWORD *result; // r0

  FIELD_U32(a1, 100) = a3;
  v6 = (_DWORD *)operator_new(0x28u);
  result = sub_607EB998(v6, a2, a3);
  FIELD_U32(a1, 104) = result;
  return result;
}
