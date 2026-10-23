/* sub_606EA1A4
 * address: 0x606EA1A4   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_606EA1A4(int a1, _DWORD *a2, _DWORD *a3, unsigned int a4)
{
  int v4; // r12
  _DWORD *result; // r0

  if ( a4 >= 4 )
    a4 = 0;
  v4 = a1 + a4;
  result = (_DWORD *)(a1 + 8 * a4);
  FIELD_U8(v4, 188) = 1;
  result[48] = *a2;
  result[49] = a2[1];
  result[56] = *a3;
  result[57] = a3[1];
  return result;
}
