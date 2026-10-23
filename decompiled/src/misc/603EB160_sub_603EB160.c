/* sub_603EB160
 * address: 0x603EB160   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603EB160(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  StateMethodExecuter *result; // r0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(FIELD_U32(a1, 24) + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (StateMethodExecuter *)(*(int (**)(void))(dword_60C9067C + 8))();
  if ( (StateMethodExecuter *)v3 == result )
    return StateMgr__changeState((StateMgr *)(a1 + 56), (StateBase *)&dword_60C99AC8);
  return result;
}
