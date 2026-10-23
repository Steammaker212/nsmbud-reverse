/* sub_6025985C
 * address: 0x6025985C   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6025985C(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  int result; // r0
  StateBase *v6; // r0
  int v7; // r6
  StateBase *v8; // r0
  int v9; // r5

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))();
  if ( v4 != result )
  {
    sub_602A3EFC(a1 + 6888, 24);
    v6 = StateMgr__getCurrentState(v2);
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
    if ( v7 == (*(int (**)(void))(dword_60C8E080 + 8))() )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8E0C0);
    v8 = StateMgr__getCurrentState(v2);
    v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
    result = (*(int (**)(void))(dword_60C8E0C0 + 8))();
    if ( v9 == result )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8E0C0);
  }
  return result;
}
