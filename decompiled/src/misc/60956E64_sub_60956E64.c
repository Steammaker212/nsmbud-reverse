/* sub_60956E64
 * address: 0x60956E64   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60956E64(int a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *result; // r0

  if ( a2 >= 2 )
    a2 = 0;
  result = (_DWORD *)(a1 + 8 * a2);
  result[1] = *a3;
  result[2] = a3[1];
  result[5] = *a4;
  result[6] = a4[1];
  return result;
}
