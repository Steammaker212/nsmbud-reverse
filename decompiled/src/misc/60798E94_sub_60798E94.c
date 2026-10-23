/* sub_60798E94
 * address: 0x60798E94   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60798E94(int a1)
{
  int v2; // r4
  StateBase *CurrentState; // r0
  int v4; // r6

  v2 = 0;
  if ( sub_608FBB8C(FIELD_U16(PlayerMgr_instance, 66)) )
  {
    if ( sub_6078A50C() != 1 && (FIELD_U8(a1, 1219) & 8) == 0 )
    {
      v2 = 1;
      sub_60766314(a1, &stru_60CBF37C, 1);
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 9916));
      v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v4 != (*(int (**)(void))(dword_60CC4EEC + 8))() )
        Player_changeState(a1, (StateBase *)&dword_60CC4EEC, 6);
    }
  }
  return v2;
}
