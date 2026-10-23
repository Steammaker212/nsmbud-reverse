/* sub_607D33F4
 * address: 0x607D33F4   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D33F4(int *a1)
{
  int result; // r0
  _DWORD *v3; // r5

  v3 = a1 + 2485;
  result = a1[2485];
  switch ( result )
  {
    case 2:
      result = sub_60793CA8(a1[2842]);
      if ( result != 1 )
        return result;
      goto LABEL_7;
    case 1:
      if ( sub_60793DA0(a1[2842], 20.0) == 1 )
        a1[309] &= ~0x10000u;
      result = sub_60793CA8(a1[2842]);
      if ( result == 1 )
      {
        *v3 = 2;
        return sub_60794954((int)(a1 + 2841), 121, 0.0, 0.0);
      }
      break;
    case 0:
      result = a1[2486];
      if ( !result )
      {
LABEL_7:
        a1[40] = sub_60773F3C((int)a1, a1[20]);
        return Player_changeState((int)a1, (StateBase *)&dword_60CC5614, 0);
      }
      break;
  }
  return result;
}
