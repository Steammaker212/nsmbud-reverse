/* sub_60749958
 * address: 0x60749958   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60749958(int a1)
{
  StateMgr *v1; // r4
  StateBase *CurrentState; // r0
  int v3; // r5
  StateMethodExecuter *result; // r0

  v1 = (StateMgr *)(a1 + 712);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 712));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (StateMethodExecuter *)(*(int (**)(void))(dword_60CBE7A0 + 8))();
  if ( (StateMethodExecuter *)v3 == result )
    return StateMgr__changeState(v1, (StateBase *)&dword_60CBE718);
  return result;
}
