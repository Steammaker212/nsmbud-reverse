/* sub_608B1034
 * address: 0x608B1034   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B1034(int a1, int a2)
{
  int result; // r0
  _DWORD *v4; // r2

  result = 0;
  if ( a2 >= 0 )
  {
    v4 = *(_DWORD **)(a1 + 8);
    if ( v4[1] > a2 )
      return *(unsigned __int8 *)(*v4 + a2);
  }
  return result;
}
