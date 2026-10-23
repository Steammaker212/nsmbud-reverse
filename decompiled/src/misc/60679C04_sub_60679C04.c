/* sub_60679C04
 * address: 0x60679C04   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60679C04(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r5
  StateMethodExecuter *result; // r0
  StateBase *v6; // r1

  v2 = (StateMgr *)(a1 + 6780);
  StateMgr__execute((StateMgr *)(a1 + 6780));
  FIELD_U32(a1, 108) = FIELD_U32(a1, 6860);
  FIELD_U32(a1, 112) = FIELD_U32(a1, 6864);
  CurrentState = StateMgr__getCurrentState(v2);
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (StateMethodExecuter *)(*((int (**)(void))LineFollower_StateID_Fall._.vtable + 2))();
  if ( (StateMethodExecuter *)v4 != result )
  {
    if ( (FIELD_U8(a1, 20) & 0x10) != 0 )
      v6 = (StateBase *)&dword_60CB7DD8;
    else
      v6 = (StateBase *)&unk_60CB7DB8;
    return StateMgr__changeState((StateMgr *)(a1 + 6084), v6);
  }
  return result;
}
