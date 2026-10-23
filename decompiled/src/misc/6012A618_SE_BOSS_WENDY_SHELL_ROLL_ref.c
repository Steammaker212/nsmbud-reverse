/* SE_BOSS_WENDY_SHELL_ROLL_ref
 * address: 0x6012A618   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_WENDY_SHELL_ROLL_ref(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int result; // r0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60C870A0 + 8))();
  if ( v3 == result )
    return sub_6081356C(a1 + 6332, "SE_BOSS_WENDY_SHELL_ROLL", FIELD_S16(a1, 6640), 0);
  return result;
}
