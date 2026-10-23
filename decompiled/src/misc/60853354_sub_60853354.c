/* sub_60853354
 * address: 0x60853354   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60853354(_DWORD *result, int a2)
{
  _DWORD *v2; // r5
  int v4; // r1
  int (__fastcall *v5)(_DWORD *, int, int, _DWORD); // r12

  v2 = result;
  v4 = result[1];
  if ( v4 != a2 )
  {
    v5 = (int (__fastcall *)(_DWORD *, int, int, _DWORD))result[10];
    if ( v5 )
      result = (_DWORD *)v5(result, v4, a2, result[11]);
    v2[1] = a2;
  }
  return result;
}
