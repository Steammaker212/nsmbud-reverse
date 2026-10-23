/* sub_60278058
 * address: 0x60278058   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60278058(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r6
  StateBase *v4; // r0
  int v5; // r6
  StateBase *v6; // r0
  int v7; // r6
  StateBase *v8; // r0
  int v9; // r6
  int result; // r0
  StateBase *v11; // r0
  int v12; // r6
  StateBase *v13; // r0
  int v14; // r5

  sub_602A3EFC(a1 + 6632, 24);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60C8ECA0 + 8))()
    || (v4 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v4, 0x0) + 2))(v4),
        v5 == (*(int (**)(void))(dword_60C8ED70 + 8))())
    || (v6 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6),
        v7 == (*(int (**)(void))(dword_60C8ED90 + 8))())
    || (v8 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8),
        result = (*(int (**)(void))(dword_60C8EDB0 + 8))(),
        v9 == result) )
  {
    v11 = StateMgr__getCurrentState((StateMgr *)(a1 + 6336));
    v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
    if ( v12 == (*((int (**)(void))LineFollower_StateID_Fall._.vtable + 2))() )
    {
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8ED90);
    }
    else
    {
      v13 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13);
      result = (*(int (**)(void))(dword_60C8EDB0 + 8))();
      if ( v14 != result )
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8EDB0);
    }
  }
  return result;
}
