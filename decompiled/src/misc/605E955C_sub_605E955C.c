/* sub_605E955C
 * address: 0x605E955C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605E955C(int a1)
{
  StateMgr *v2; // r4
  StateBase *CurrentState; // r0
  int v4; // r6
  StateMethodExecuter *result; // r0
  bool v6; // zf

  v2 = (StateMgr *)(a1 + 332);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 332));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (StateMethodExecuter *)(*(int (**)(void))(dword_60CB1C48 + 8))();
  v6 = v4 == (_DWORD)result;
  if ( (StateMethodExecuter *)v4 != result )
  {
    result = *(StateMethodExecuter **)(a1 + 164);
    v6 = result == 0;
  }
  if ( !v6 )
    return StateMgr__changeState(v2, (StateBase *)&dword_60CB1C48);
  return result;
}
