/* sub_607D3750
 * address: 0x607D3750   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D3750(float *a1)
{
  int result; // r0

  sub_607712D4((int)a1);
  a1[23] = 0.0;
  a1[24] = -4.0;
  sub_60771250((int)a1);
  sub_60773F4C((int)a1);
  result = (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 1016))(a1);
  if ( !result )
  {
    if ( sub_6078663C((int)(a1 + 172)) == 1 )
    {
      return (*(int (__fastcall **)(float *, int, _DWORD, int, float, float))(*(_DWORD *)a1 + 748))(
               a1,
               1,
               0,
               1,
               3.628,
               a1[22]);
    }
    else
    {
      result = sub_60793CA8(*((_DWORD *)a1 + 2842));
      if ( result == 1 )
        return Player_changeState((int)a1, (StateBase *)&dword_60CC5488, 1);
    }
  }
  return result;
}
