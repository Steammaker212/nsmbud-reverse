/* sub_60140150
 * address: 0x60140150   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60140150(int a1)
{
  StateMgr *v2; // r4
  StateBase *CurrentState; // r0
  int v4; // r6
  StateMethodExecuter *result; // r0

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (StateMethodExecuter *)(*((int (**)(void))stru_60C87CE4.vtable + 2))();
  if ( (StateMethodExecuter *)v4 == result )
  {
    sub_602A3EFC(a1 + 6440, 24);
    FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
    return StateMgr__changeState(v2, (StateBase *)&dword_60C87D04);
  }
  return result;
}
