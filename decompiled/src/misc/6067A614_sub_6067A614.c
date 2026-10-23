/* sub_6067A614
 * address: 0x6067A614   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6067A614(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r5
  StateMethodExecuter *result; // r0

  v2 = (StateMgr *)(a1 + 7972);
  StateMgr__execute((StateMgr *)(a1 + 7972));
  FIELD_U32(a1, 108) = FIELD_U32(a1, 8052);
  FIELD_U32(a1, 112) = FIELD_U32(a1, 8056);
  CurrentState = StateMgr__getCurrentState(v2);
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (StateMethodExecuter *)(*((int (**)(void))LineFollower_StateID_Fall._.vtable + 2))();
  if ( (StateMethodExecuter *)v4 != result )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB7E58);
  return result;
}
