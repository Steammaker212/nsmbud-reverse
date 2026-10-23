/* ShellEnemy__collisionPlayer
 * address: 0x6039FF68   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CarryableEnemy : 0x602725CC
// 
// Overridden by: None
int __fastcall ShellEnemy__collisionPlayer(int a1, int a2, int a3)
{
  int result; // r0
  int v7; // r1
  StateBase *CurrentState; // r0
  int v9; // r7
  StateBase *v10; // r0
  int v11; // r7

  result = FIELD_U32(a1, 6432);
  if ( !result )
  {
    v7 = FIELD_U32(a3, 64);
    result = FIELD_U32(a1, 6344);
    if ( FIELD_U32(v7, 8) != result && (FIELD_U8(a1, 6392) || (result = sub_60271EF4(a1, v7)) == 0) )
    {
      result = sub_603A009C(a1, a2, a3);
      if ( !result )
      {
        CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
        v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        result = (*((int (**)(void))stru_60C8EA70._.vtable + 2))();
        if ( v9 != result )
        {
          result = sub_603A037C(a1, a2, a3);
          if ( !result )
          {
            if ( FIELD_U32(a1, 6352) )
              return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 200))(a1, a2, a3);
            v10 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
            v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
            result = (*(int (**)(void))(dword_60C8EA94 + 8))();
            if ( v11 != result )
              return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 200))(a1, a2, a3);
          }
        }
      }
    }
  }
  return result;
}
