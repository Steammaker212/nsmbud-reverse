/* sub_607B8CB0
 * address: 0x607B8CB0   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B8CB0(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  StateBase *v4; // r1

  FIELD_U32(a1, 6976) = sub_607634A4(a1, FIELD_F32(a1, 88));
  if ( FIELD_U32(a1, 1320) == 5 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 9916));
    v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v3 == (*(int (**)(void))(dword_60CC4CDC + 8))() )
      FIELD_U32(a1, 80) = sub_6014C540(a1 + 1328);
    v4 = (StateBase *)&dword_60CC4F8C;
  }
  else
  {
    v4 = (StateBase *)&unk_60CC4C94;
  }
  return Player_changeState(a1, v4, 0);
}
