/* sub_60799130
 * address: 0x60799130   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60799130(int a1)
{
  int v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6

  v2 = 0;
  if ( sub_608FBB8C(FIELD_U16(PlayerMgr_instance, 66)) )
  {
    if ( sub_6078A50C() != 1 && (FIELD_U8(a1, 1219) & 8) == 0 )
    {
      sub_60766314(a1, &stru_60CBF37C, 0);
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 9916));
      v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      v2 = 1;
      if ( v4 != (*(int (**)(void))(dword_60CC4EEC + 8))() )
      {
        v2 = 1;
        Player_changeState(a1, (StateBase *)&dword_60CC4EEC, 1);
      }
    }
  }
  return v2;
}
