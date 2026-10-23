/* sub_6083421C
 * address: 0x6083421C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6083421C(int a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // r3
  _DWORD *result; // r0

  v3 = FIELD_U32(a1, 20);
  result = *(_DWORD **)(a1 + 24);
  if ( v3 > a2 )
    result += 3 * a2;
  *result = *a3;
  result[1] = a3[1];
  result[2] = a3[2];
  return result;
}
