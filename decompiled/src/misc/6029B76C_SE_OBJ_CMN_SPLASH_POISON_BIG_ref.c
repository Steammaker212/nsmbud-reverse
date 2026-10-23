/* SE_OBJ_CMN_SPLASH_POISON_BIG_ref
 * address: 0x6029B76C   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_SPLASH_POISON_BIG_ref(int a1, Vec2 *a2)
{
  StateBase *CurrentState; // r0
  int v5; // r6
  int result; // r0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60C8FF74 + 8))();
  if ( v5 == result )
    return StageActor__createWaterSplash((StageActor *)a1, a2, 499, 21, "SE_OBJ_CMN_SPLASH_POISON_BIG");
  return result;
}
