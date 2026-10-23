/* sub_60855928
 * address: 0x60855928   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60855928(int a1, int a2)
{
  _DWORD *result; // r0
  int v5; // r4
  int v6; // t1

  result = (_DWORD *)sub_60855BC8(12);
  if ( result )
  {
    *result = result;
    result[1] = result;
    result[2] = a2;
    v6 = FIELD_U32(a1, 12);
    v5 = a1 + 12;
    *result = v6;
    result[1] = v5;
    *(_DWORD *)(*(_DWORD *)v5 + 4) = result;
    *(_DWORD *)v5 = result;
  }
  return result;
}
