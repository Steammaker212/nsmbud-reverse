/* Player_stun
 * address: 0x607A1F5C   size: 152   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Player_stun(int a1, int a2)
{
  int result; // r0
  StateBase *CurrentState; // r0
  int v6; // r6

  result = sub_60766714(a1);
  if ( !result )
  {
    result = FIELD_U8(a1, 6900);
    if ( (result & 1) != 0 )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 9916));
      v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      result = (*((int (**)(void))Player_StateID_Stunned._.vtable + 2))();
      if ( v6 != result )
      {
        FIELD_U32(a1, 0x31FC) = a2;
        FIELD_U32(a1, 9948) = 0;
        FIELD_U32(a1, 9944) = 0;
        return Player_changeState(a1, &Player_StateID_Stunned._, 0);
      }
    }
  }
  return result;
}
