/* sub_607D001C
 * address: 0x607D001C   size: 716   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D001C(int a1, int a2)
{
  StateBase *CurrentState; // r0
  int v5; // r5
  int v6; // r7
  unsigned int *v7; // r10
  _BOOL4 v8; // r6
  int v9; // r5
  char v10; // r12
  char v11; // r12
  _DWORD *v12; // r9
  _DWORD *v13; // r6
  int v14; // r5
  int v15; // r5
  char v16; // r12
  int v17; // r0
  int v18; // r0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 11404));
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v6 = 0;
  v7 = (unsigned int *)(a1 + 11356);
  v8 = v5 == (*(int (**)(void))(dword_60CC53D8 + 8))();
  v9 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 11356));
  if ( ((unsigned int)&dword_60C7B364 & ~(1618804896 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v9 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v9)(v9, &StageActor_RTTI) == 1 )
    {
      v12 = *(_DWORD **)(v9 + 620);
      if ( !v12 || v12[4] != 2 )
      {
        if ( v8 | a2 )
        {
          if ( ((unsigned int)&dword_60C7B374 & ~(1618805044 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
          {
            dword_60C7B370 = (int)&off_60BC00B0;
            _cxa_guard_release(&dword_60C7B374);
          }
          if ( (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C7B370) == 1 )
            FIELD_U32(v9, 9788) = 10;
        }
        else if ( FIELD_U8(v9, 533) != 1 )
        {
          return v6;
        }
        v13 = (_DWORD *)(a1 + 11420);
        FIELD_U32(a1, 11420) = FIELD_S8(a1, 84);
        if ( v12 )
        {
          v12[3] = 3;
          v14 = FIELD_S8(a1, 84);
          (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 68))(a1, *v13);
          (*(void (__fastcall **)(_DWORD *, int))(*v12 + 32))(v12, a1);
          (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 68))(a1, v14);
        }
        *v13 = -1;
        sub_607D033C(a1);
        v15 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *v7);
        if ( ((unsigned int)&dword_60C7B364 & ~(1618805320 << v16) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        if ( v15 )
        {
          if ( (**(int (__fastcall ***)(int, int *))v15)(v15, &StageActor_RTTI) == 1 )
          {
            v17 = FIELD_U32(v15, 620);
            if ( v17 )
            {
              FIELD_U32(v17, 8) = 0;
              FIELD_U32(v17, 12) = 0;
            }
          }
        }
        v18 = sub_607CBC00(a1);
        v6 = 1;
        if ( v18 )
          FIELD_U32(v18, 324) = 0;
        *v7 = 0;
      }
    }
  }
  return v6;
}
