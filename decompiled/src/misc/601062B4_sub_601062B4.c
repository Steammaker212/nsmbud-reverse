/* sub_601062B4
 * address: 0x601062B4   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601062B4(StateMethodExecuter *result, int a2)
{
  int v2; // r5
  bool v3; // zf
  bool v4; // zf
  StateMgr *v5; // r4
  StateBase *CurrentState; // r0
  int v7; // r6
  StateMgr *v8; // r5
  StateBase *v9; // r0
  int v10; // r6
  StateBase *v11; // r0
  int v12; // r5
  StateBase *v13; // r0
  int v14; // r5
  StateBase *v15; // r0
  int v16; // r5
  StateBase *v17; // r0
  int v18; // r5

  v3 = result == 0;
  if ( result )
    v3 = a2 == 0;
  if ( !v3 )
  {
    result = (StateMethodExecuter *)FIELD_U32(result + (12) * 12, 0x0);
    v4 = result == 0;
    if ( result )
    {
      v2 = FIELD_U32(a2, 2196);
      v4 = v2 == 0;
    }
    if ( !v4 )
    {
      v5 = (StateMgr *)&result[507];
      CurrentState = StateMgr__getCurrentState((StateMgr *)&result[507]);
      v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      result = (StateMethodExecuter *)(*(int (**)(void))(dword_60C861D0 + 8))();
      if ( (StateMethodExecuter *)v7 == result )
      {
        result = (StateMethodExecuter *)Actor__getProfileId((Actor *)v2);
        if ( result == (StateMethodExecuter *)370 )
        {
          v8 = (StateMgr *)(v2 + 6084);
          v9 = StateMgr__getCurrentState(v8);
          v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
          if ( v10 == (*(int (**)(void))(dword_60C85E14 + 8))()
            || (v11 = StateMgr__getCurrentState(v8),
                v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11),
                result = (StateMethodExecuter *)(*(int (**)(void))(dword_60C85F14 + 8))(),
                (StateMethodExecuter *)v12 == result) )
          {
            v13 = StateMgr__getCurrentState(v5);
            v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13);
            result = (StateMethodExecuter *)(*(int (**)(void))(dword_60C861D0 + 8))();
            if ( (StateMethodExecuter *)v14 == result )
              return StateMgr__changeState(v5, &stru_60C861F0);
          }
        }
        else if ( result == (StateMethodExecuter *)636 || result == (StateMethodExecuter *)637 )
        {
          v15 = StateMgr__getCurrentState((StateMgr *)(v2 + 6084));
          v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15);
          result = (StateMethodExecuter *)(*(int (**)(void))(dword_60C90108 + 8))();
          if ( (StateMethodExecuter *)v16 == result )
          {
            v17 = StateMgr__getCurrentState(v5);
            v18 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v17, 0x0) + 2))(v17);
            result = (StateMethodExecuter *)(*(int (**)(void))(dword_60C861D0 + 8))();
            if ( (StateMethodExecuter *)v18 == result )
              return StateMgr__changeState(v5, &stru_60C861F0);
          }
        }
      }
    }
  }
  return result;
}
