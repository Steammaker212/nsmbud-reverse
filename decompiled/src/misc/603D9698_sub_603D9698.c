/* sub_603D9698
 * address: 0x603D9698   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D9698(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  int result; // r0
  StateBase *v6; // r0
  int v7; // r6
  StateBase *v8; // r0
  int v9; // r6
  StateBase *v10; // r0
  int v11; // r5

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
  {
    FIELD_U8(a1, 11814) = 1;
    return 11814;
  }
  else
  {
    v6 = StateMgr__getCurrentState(v2);
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
    result = (*(int (**)(void))(dword_60C990D4 + 8))();
    if ( v7 != result )
    {
      v8 = StateMgr__getCurrentState(v2);
      v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
      result = (*(int (**)(void))(dword_60C99074 + 8))();
      if ( v9 != result )
      {
        v10 = StateMgr__getCurrentState(v2);
        v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
        result = (*(int (**)(void))(dword_60C990F4 + 8))();
        if ( v11 != result )
          return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C99074);
      }
    }
  }
  return result;
}
