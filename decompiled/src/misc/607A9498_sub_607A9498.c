/* sub_607A9498
 * address: 0x607A9498   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A9498(_DWORD *a1)
{
  int result; // r0
  _DWORD *v3; // r5

  v3 = a1 + 2426;
  result = a1[2426];
  if ( result == 1 )
  {
    result = a1[2428];
    if ( !result )
    {
      sub_607A6808((int)a1);
      *v3 = 2;
      return 2;
    }
  }
  else if ( !result )
  {
    result = sub_60793CA8(*(_DWORD *)(a1[162] + 4));
    if ( result == 1 )
    {
      *v3 = 1;
      a1[2428] = 120;
      return 9712;
    }
  }
  return result;
}
