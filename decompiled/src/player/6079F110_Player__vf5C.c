/* Player__vf5C
 * address: 0x6079F110   size: 156   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6079F110(int a1, int a2)
{
  _DWORD *result; // r0
  int v4; // t1
  StateBase *CurrentState; // r0
  int v6; // r5

  v4 = FIELD_U32(a1, 9952);
  result = (_DWORD *)(a1 + 9952);
  if ( !v4 )
  {
    *result = FIELD_U32(a2, 8);
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 9916));
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v6 != (*(int (**)(void))(dword_60CC4E2C + 8))() )
      Player_changeState(a1, (StateBase *)&dword_60CC4E2C, 0);
    return (_DWORD *)AreaRumbleMgr_rumbleForPlayer(AreaRumbleMgr_instance, FIELD_S8(a1, 84), 8, 0, 0);
  }
  return result;
}
