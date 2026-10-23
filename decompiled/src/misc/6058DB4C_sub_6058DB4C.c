/* sub_6058DB4C
 * address: 0x6058DB4C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6058DB4C(int a1)
{
  _DWORD *result; // r0
  int v2; // r1

  FIELD_U32(a1, 6108) = 30;
  result = (_DWORD *)(a1 + 6108);
  v2 = (*(result - 1522) >> 8) & 0xF;
  if ( v2 )
    *result = 10 * v2;
  return result;
}
