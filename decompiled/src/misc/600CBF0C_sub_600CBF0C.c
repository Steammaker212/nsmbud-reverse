/* sub_600CBF0C
 * address: 0x600CBF0C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_600CBF0C(int a1, int a2, int a3, int a4)
{
  StateMgr *v8; // r4
  StateBase *CurrentState; // r0
  int v10; // r6
  StateMethodExecuter *result; // r0

  v8 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (StateMethodExecuter *)(*(int (**)(void))(dword_60C8403C + 8))();
  if ( (StateMethodExecuter *)v10 != result )
  {
    SE_BOSS_KOOPA_FIRE_DISAPP_ref_CC8AC(a1, a2, a3, a4);
    return StateMgr__changeState(v8, (StateBase *)&dword_60C8403C);
  }
  return result;
}
