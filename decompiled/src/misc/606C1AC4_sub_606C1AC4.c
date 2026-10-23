/* sub_606C1AC4
 * address: 0x606C1AC4   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C1AC4(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r5

  v2 = (StateMgr *)(a1 + 6124);
  StateMgr__execute((StateMgr *)(a1 + 6124));
  FIELD_U32(a1, 108) = FIELD_U32(a1, 6160);
  FIELD_U32(a1, 112) = FIELD_U32(a1, 6164);
  sub_606C18D0(a1);
  ((void (__fastcall *)(int, int))loc_6069B070)(a1 + 6864, a1 + 108);
  ShapedCollider_execute((ColliderBase *)(a1 + 6208));
  CurrentState = StateMgr__getCurrentState(v2);
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60CC56B4 + 8))()
    || (v5 = StateMgr__getCurrentState(v2),
        v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5),
        v6 == (*(int (**)(void))(dword_60CC5734 + 8))()) )
  {
    StageActor__cullCheck((StageActor *)a1, 0);
  }
  return 1;
}
