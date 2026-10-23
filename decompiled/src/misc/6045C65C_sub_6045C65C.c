/* sub_6045C65C
 * address: 0x6045C65C   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6045C65C(int a1)
{
  _DWORD *result; // r0
  int v2; // t1

  v2 = FIELD_U32(a1, 6324);
  result = (_DWORD *)(a1 + 6324);
  *result = v2 + 1;
  return result;
}
