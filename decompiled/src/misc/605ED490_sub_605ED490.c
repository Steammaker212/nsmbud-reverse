/* sub_605ED490
 * address: 0x605ED490   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605ED490(int result, int a2)
{
  int *v2; // r4
  unsigned int v4; // r1
  int v5; // r5
  char v6; // r12
  StateBase *CurrentState; // r0
  int v8; // r6
  int v9; // r1
  int v10; // r2

  v2 = (int *)result;
  v4 = FIELD_U32(result, 12);
  if ( v4 )
  {
    v5 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v4);
    if ( ((unsigned int)&dword_60C7B364 & ~(1616827604 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( !v5 || !(**(int (__fastcall ***)(int, int *))v5)(v5, &StageActor_RTTI) )
      goto LABEL_9;
    if ( a2 == 1 )
    {
      FIELD_U8(v5, 7481) = 1;
LABEL_9:
      v2[3] = 0;
      return 0;
    }
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
    v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    result = (*(int (**)(void))(dword_60CAED90 + 8))();
    if ( v8 != result )
    {
      result = *v2;
      v9 = v2[1];
      v10 = v2[2];
      FIELD_U32(v5, 108) = *v2;
      FIELD_U32(v5, 112) = v9;
      FIELD_U32(v5, 116) = v10;
    }
  }
  return result;
}
