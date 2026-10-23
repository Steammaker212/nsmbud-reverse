/* sub_605C8764
 * address: 0x605C8764   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C8764(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r6
  _DWORD *v7; // r6
  int v8; // r0

  v2 = (StateMgr *)(a1 + 1024);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 1024));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60CB0B04 + 8))()
    || (v5 = StateMgr__getCurrentState(v2),
        v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5),
        v6 == (*(int (**)(void))(dword_60CB0BC4 + 8))()) )
  {
    v7 = (_DWORD *)(a1 + 2936);
    if ( !FIELD_U32(a1, 2936) )
    {
      StageActor__cullCheck((StageActor *)a1, 0);
      if ( v8 )
        return 1;
    }
  }
  else
  {
    v7 = (_DWORD *)(a1 + 2936);
  }
  sub_606951A4(a1);
  StateMgr__execute(v2);
  FIELD_U32(a1, 1284) = FIELD_U32(a1, 996) - 0x40000000;
  ShapedCollider_execute((ColliderBase *)(a1 + 1040));
  sub_605C7C70(a1);
  if ( (unsigned int)(*v7 - 1) <= 1 )
    sub_605C8194(a1);
  return 1;
}
