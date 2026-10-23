/* BobOmb_vf159
 * address: 0x6025E9EC   size: 628   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BobOmb_vf159(int a1, int a2, int a3)
{
  StateMgr *v6; // r7
  StateBase *CurrentState; // r0
  int v8; // r5
  StateBase *v9; // r0
  int v10; // r5
  int result; // r0
  StateBase *v12; // r0
  int v13; // r5
  char v14; // r12
  bool v15; // zf
  int v16; // r7
  int v17; // r7
  int v18; // t1
  StateBase *v19; // r0
  int v20; // r5
  StateBase *v21; // r0
  int v22; // r5
  StateBase *v23; // r0
  int v24; // r5

  v6 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v8 == (*((int (**)(void))BobOmb_StateID_Kicked._._.vtable + 2))() )
    return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 648))(a1, a2, a3);
  v9 = StateMgr__getCurrentState(v6);
  v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
  if ( v10 == (*(int (**)(void))(dword_60C8E2E0 + 8))() )
    return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 648))(a1, a2, a3);
  result = sub_602726F8(a1, a2, a3);
  if ( !result )
  {
    v12 = StateMgr__getCurrentState(v6);
    v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
    result = (*((int (**)(void))BobOmb_StateID_EnemyGenerator._.vtable + 2))();
    if ( v13 != result )
    {
      v15 = FIELD_U8(a1, 7060) == 0;
      if ( FIELD_U8(a1, 7060) )
      {
        v6 = *(StateMgr **)(a3 + 64);
        v15 = v6 == 0;
      }
      if ( !v15 )
      {
        if ( ((unsigned int)&dword_60C7B37C & ~(1613097728 << v14) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
        if ( ((int (__fastcall *)(StateMgr *, int *))FIELD_U32(v6, 0x0))(v6, &dword_60C7B378) == 1
          && !((int (__fastcall *)(StateMgr *))FIELD_U32(v6, 0x0)[72].methodExecuter.vtable)(v6) )
        {
          v16 = FIELD_U32(a1, 6752);
          v18 = FIELD_U32(v16, 7624);
          v17 = v16 + 7624;
          v19 = StateMgr__getCurrentState((StateMgr *)(v18 + 6084));
          v20 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v19, 0x0) + 2))(v19);
          if ( v20 == (*(int (**)(void))(dword_60C800E4 + 8))()
            || (v21 = StateMgr__getCurrentState((StateMgr *)(*(_DWORD *)v17 + 6084)),
                v22 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v21, 0x0) + 2))(v21),
                v22 == (*(int (**)(void))(dword_60C80108 + 8))())
            || (v23 = StateMgr__getCurrentState((StateMgr *)(*(_DWORD *)v17 + 6084)),
                v24 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v23, 0x0) + 2))(v23),
                v24 == (*(int (**)(void))(dword_60C80148 + 8))()) )
          {
            (*(void (__fastcall **)(_DWORD, int *))(**(_DWORD **)(a1 + 6752) + 192))(
              FIELD_U32(a1, 6752),
              &dword_60C7FE5C);
          }
        }
      }
      return Enemy__collisionPlayer(a1, a2, a3);
    }
  }
  return result;
}
