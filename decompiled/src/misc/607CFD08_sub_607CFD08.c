/* sub_607CFD08
 * address: 0x607CFD08   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CFD08(int a1)
{
  int v2; // r4
  int v3; // r0
  StateBase *CurrentState; // r0
  int v5; // r7
  StateMgr *v6; // r0
  int *v7; // r1
  int v8; // r7
  char v9; // r12
  int v10; // r0

  v2 = 0;
  if ( sub_60786B20(a1 + 688) == 1 && (FIELD_U8(a1, 1238) & 0x80) != 0 && (FIELD_U8(a1, 1230) & 0x10) == 0 )
  {
    v3 = sub_607D6C28(a1);
    if ( v3 )
      sub_6078667C((_DWORD *)(v3 + 688), 9);
    if ( FIELD_U32(a1, 11356)
      && (CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 11404)),
          v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState),
          v5 != (*(int (**)(void))(dword_60CC53B8 + 8))()) )
    {
      v8 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 11356));
      if ( ((unsigned int)&dword_60C7B364 & ~(1618804232 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( !v8
        || (**(int (__fastcall ***)(int, int *))v8)(v8, &StageActor_RTTI) != 1
        || (v10 = FIELD_U32(v8, 620)) == 0
        || FIELD_U32(v10, 16) != 2 )
      {
        FIELD_U32(a1, 11428) = 0;
        v7 = &dword_60CC53D8;
        v6 = (StateMgr *)(a1 + 11404);
        goto LABEL_18;
      }
    }
    else if ( !FIELD_U32(a1, 11452) )
    {
      FIELD_U32(a1, 11428) = 0;
      v6 = (StateMgr *)(a1 + 11404);
      v7 = &dword_60CC53B8;
LABEL_18:
      StateMgr__changeState(v6, (StateBase *)v7);
      return 1;
    }
  }
  return v2;
}
