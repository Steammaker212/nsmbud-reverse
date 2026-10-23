/* sub_602A8D94
 * address: 0x602A8D94   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A8D94(int a1)
{
  StateMgr *v2; // r5
  int result; // r0
  StateBase *CurrentState; // r0
  int v5; // r6
  StateBase *v6; // r0
  int v7; // r5

  v2 = (StateMgr *)(a1 + 6084);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  result = 0;
  if ( !FIELD_U8(a1, 6320) )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 632))(a1);
    CurrentState = StateMgr__getCurrentState(v2);
    v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v5 == (*(int (**)(void))(dword_60C9086C + 8))()
      || (v6 = StateMgr__getCurrentState(v2),
          v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6),
          v7 == (*(int (**)(void))(dword_60C9088C + 8))()) )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
      return 1;
    }
    else
    {
      StageActor__cullCheck((StageActor *)a1, 0);
      return 1;
    }
  }
  return result;
}
