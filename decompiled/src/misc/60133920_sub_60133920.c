/* sub_60133920
 * address: 0x60133920   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60133920(int a1)
{
  StateMgr *v2; // r4
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r6
  StateBase *v7; // r0
  int v8; // r6
  StateMethodExecuter *result; // r0

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*((int (**)(void))stru_60C875C4.vtable + 2))()
    || (v5 = StateMgr__getCurrentState(v2),
        v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5),
        v6 == (*((int (**)(void))stru_60C87604.vtable + 2))())
    || (v7 = StateMgr__getCurrentState(v2),
        v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7),
        result = (StateMethodExecuter *)(*((int (**)(void))stru_60C875E4.vtable + 2))(),
        (StateMethodExecuter *)v8 == result) )
  {
    sub_602A3EFC(a1 + 6440, 24);
    return StateMgr__changeState(v2, (StateBase *)&dword_60C87644);
  }
  return result;
}
