/* sub_60746F3C
 * address: 0x60746F3C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60746F3C(StateMgr *a1, StateMethodExecuter *a2)
{
  StateMgr *v4; // r4
  StateBase *CurrentState; // r0
  int v6; // r7
  StateMethodExecuter *result; // r0

  v4 = a1 + 47;
  CurrentState = StateMgr__getCurrentState(a1 + 47);
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (StateMethodExecuter *)(*(int (**)(void))(dword_60CBE500 + 8))();
  if ( (StateMethodExecuter *)v6 == result )
  {
    FIELD_U32(a1 + (44) * 16, 0x8) = a2;
    return StateMgr__changeState(v4, &stru_60CBE520);
  }
  return result;
}
