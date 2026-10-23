/* sub_600BE640
 * address: 0x600BE640   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_600BE640(StateMethodExecuter *result)
{
  char v1; // r12
  char *vtable; // r1
  StateMethodExecuter *v3; // r6
  int (__fastcall ***v4)(void *, int *); // r4
  int v5; // r0
  bool v6; // zf
  StateBase *CurrentState; // r0
  int v8; // r4
  StateMethodExecuter *v9; // [sp+0h] [bp-30h]

  vtable = (char *)result[618].vtable;
  if ( vtable )
  {
    result[618].vtable = vtable - 1;
  }
  else
  {
    v9 = result;
    v3 = *(StateMethodExecuter **)(ActorMgr__instance + 27172);
    result = *(StateMethodExecuter **)(ActorMgr__instance + 27180);
    if ( v3 != result )
    {
      while ( 1 )
      {
        v4 = (int (__fastcall ***)(void *, int *))FIELD_U32(v3, 0x0);
        if ( ((unsigned int)&dword_60C83720 & ~(1611392740 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C83720) )
        {
          dword_60C8371C = (int)&off_60BC00E0;
          _cxa_guard_release(&dword_60C83720);
        }
        if ( v4 )
        {
          v5 = (**v4)(v4, &dword_60C8371C);
          v6 = v5 == 1;
          if ( v5 == 1 )
            v6 = *((_BYTE *)v4 + 19) == 0;
          if ( v6 )
            break;
        }
        v3 = (StateMethodExecuter *)((char *)v3 + 4);
        result = *(StateMethodExecuter **)(ActorMgr__instance + 27180);
        if ( v3 == result )
          return result;
      }
      CurrentState = StateMgr__getCurrentState((StateMgr *)(v4 + 1521));
      v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      result = (StateMethodExecuter *)(*(int (**)(void))(dword_60C836FC + 8))();
      if ( (StateMethodExecuter *)v8 == result )
        return StateMgr__changeState((StateMgr *)&v9[507], &stru_60C83884);
    }
  }
  return result;
}
