/* sub_6034FEC4
 * address: 0x6034FEC4   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6034FEC4(int a1)
{
  _DWORD *result; // r0
  int v3; // t1

  LargeGoomba_vf114(a1);
  FIELD_U8(a1, 536) = 1;
  result = *(_DWORD **)(a1 + 6964);
  if ( result )
  {
    v3 = result[1740];
    result += 1740;
    *result = v3 + 1;
  }
  return result;
}
