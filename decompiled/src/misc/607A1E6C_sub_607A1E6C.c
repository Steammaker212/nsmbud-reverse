/* sub_607A1E6C
 * address: 0x607A1E6C   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A1E6C(int a1)
{
  int v2; // r0
  int v3; // r5
  StateBase *CurrentState; // r0
  int v6; // r6

  v2 = FIELD_U32(a1, 1220);
  if ( (v2 & 0x4000000) == 0 )
  {
    v3 = 0;
    if ( (v2 & 0x8000000) != 0 )
    {
      FIELD_U32(a1, 1220) = v2 & 0xF7FFFFFF;
      sub_607701BC(a1);
      return 1;
    }
    return v3;
  }
  FIELD_U32(a1, 1220) = v2 & 0xFBFFFFFF;
  v3 = 1;
  if ( sub_60766714(a1) )
    return v3;
  if ( (FIELD_U8(a1, 6900) & 1) == 0 )
    return v3;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 9916));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v6 == (*((int (**)(void))Player_StateID_Stunned._.vtable + 2))() )
    return v3;
  FIELD_U32(a1, 12796) = 0;
  FIELD_U32(a1, 9948) = 1;
  FIELD_U32(a1, 9944) = 60;
  Player_changeState(a1, &Player_StateID_Stunned._, 0);
  return 1;
}
