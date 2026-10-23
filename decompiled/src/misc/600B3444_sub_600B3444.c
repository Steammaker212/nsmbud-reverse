/* sub_600B3444
 * address: 0x600B3444   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_600B3444(_DWORD *result, _DWORD *a2)
{
  _DWORD *v3; // r5
  _DWORD *v4; // r6
  int v5; // s2

  v3 = result;
  if ( a2 )
  {
    v4 = result + 1787;
    (*(void (__fastcall **)(_DWORD *))(*result + 1044))(result);
    FIELD_F64(v3, 1785) = ((double (__fastcall *)(_DWORD *))*(_DWORD *)(*v3 + 1152))(v3);
    *v4 = v5;
    a2[29] = *v4;
    a2[28] = v3[1786];
    result = (_DWORD *)v3[1785];
    a2[27] = result;
  }
  return result;
}
