/* sub_603E7454
 * address: 0x603E7454   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603E7454(int a1)
{
  int v2; // r0
  StateBase *CurrentState; // r0
  int v4; // r5
  StateMethodExecuter *result; // r0

  v2 = FIELD_U32(a1, 120);
  if ( !v2 )
    return (StateMethodExecuter *)sub_603E83F8(a1);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(v2 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (StateMethodExecuter *)(*(int (**)(void))(dword_60C9D6E0 + 8))();
  if ( (StateMethodExecuter *)v4 == result )
    return StateMgr__changeState((StateMgr *)(a1 + 172), (StateBase *)&dword_60C99854);
  return result;
}
