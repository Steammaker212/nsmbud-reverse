/* sub_607D6E48
 * address: 0x607D6E48   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D6E48(_DWORD *a1)
{
  *(_DWORD *)(a1[2842] + 40) = 0;
  if ( !sub_60766708((int)a1) )
  {
    Player_changeState((int)a1, (StateBase *)&dword_60CC5614, 0);
    if ( a1[2839] )
    {
      if ( sub_607D001C((int)a1, 0) == 1 )
        sub_607CFB38((int)a1, (StateBase *)&dword_60CC53D8);
    }
  }
  sub_607CBCA4((int)a1, 0xFFu);
  sub_6078B160((_DWORD *)PlayerMgr_instance, (int)a1);
  sub_6078B118((_DWORD *)PlayerMgr_instance);
  a1[304] &= ~0x100000u;
  a1[2840] = 0;
  return 11360;
}
