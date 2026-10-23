/* sub_603BA9E0
 * address: 0x603BA9E0   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603BA9E0(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateMethodExecuter *result; // r0
  StateBase *v6; // r0
  int v7; // r6
  StateBase *v8; // r0
  int v9; // r6
  StateBase *v10; // r0
  int v11; // r5

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (StateMethodExecuter *)(*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))();
  if ( (StateMethodExecuter *)v4 != result )
  {
    sub_602A3EFC(a1 + 23088, 24, 0.0625);
    v6 = StateMgr__getCurrentState(v2);
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
    result = (StateMethodExecuter *)(*(int (**)(void))(dword_60C981EC + 8))();
    if ( (StateMethodExecuter *)v7 != result )
    {
      v8 = StateMgr__getCurrentState(v2);
      v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
      result = (StateMethodExecuter *)(*(int (**)(void))(dword_60C98270 + 8))();
      if ( (StateMethodExecuter *)v9 != result )
      {
        v10 = StateMgr__getCurrentState(v2);
        v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
        result = (StateMethodExecuter *)(*(int (**)(void))(dword_60C9818C + 8))();
        if ( (StateMethodExecuter *)v11 == result )
          return StateMgrExt_changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C981CC);
      }
    }
  }
  return result;
}
