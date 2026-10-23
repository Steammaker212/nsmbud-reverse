/* sub_60369DEC
 * address: 0x60369DEC   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60369DEC(int a1, int a2, int a3)
{
  StateMgr *v5; // r7
  StateBase *CurrentState; // r0
  int v7; // r5
  StateBase *v9; // r0
  int v10; // r5
  char v11; // r12
  _DWORD *v12; // r6
  StateBase *v13; // r0
  int v14; // r5
  StateBase *v15; // r0
  int v16; // r5

  v5 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v7 == (*(int (**)(void))(dword_60C95D98 + 8))() )
    return 0;
  v9 = StateMgr__getCurrentState(v5);
  v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
  if ( v10 == (*(int (**)(void))(dword_60C95D38 + 8))() )
  {
    v12 = *(_DWORD **)(a3 + 64);
    if ( ((unsigned int)&dword_60C7B37C & ~(1614192268 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( !v12
      || (*(int (__fastcall **)(_DWORD *, int *))*v12)(v12, &dword_60C7B378) != 1
      || (*(int (__fastcall **)(_DWORD *, int, int))(*v12 + 1168))(v12, a1, 4) != 1 )
    {
      return 0;
    }
    v12[2394] = 16;
    return 1;
  }
  else
  {
    v13 = StateMgr__getCurrentState(v5);
    v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13);
    if ( v14 != (*(int (**)(void))(dword_60C95D58 + 8))() )
    {
      v15 = StateMgr__getCurrentState(v5);
      v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15);
      if ( v16 != (*(int (**)(void))(dword_60C95D78 + 8))() )
        return 0;
    }
    return Enemy__collisionPenguinSlide(a1);
  }
}
