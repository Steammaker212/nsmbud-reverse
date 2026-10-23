/* sub_6024F9C0
 * address: 0x6024F9C0   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6024F9C0(int *a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r5
  int isOffScreen; // r0
  int v6; // r1

  v2 = (StateMgr *)(a1 + 1521);
  StateMgr__execute((StateMgr *)(a1 + 1521));
  ActorScaler_execute((ActorScaler *)(a1 + 3035));
  sub_602A33AC(a1);
  CurrentState = StateMgr__getCurrentState(v2);
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C8DDB8 + 8))() )
  {
    isOffScreen = StageActor__isOffScreen((StageActor *)a1);
    v6 = *a1;
    if ( isOffScreen )
      (*(void (__fastcall **)(int *))(v6 + 72))(a1);
    else
      (*(void (__fastcall **)(int *))(v6 + 76))(a1);
  }
  else
  {
    StageActor__cullCheck((StageActor *)a1, 0);
  }
  sub_6024FA6C(a1);
  return 1;
}
