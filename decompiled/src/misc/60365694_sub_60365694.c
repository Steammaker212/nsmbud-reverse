/* sub_60365694
 * address: 0x60365694   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60365694(int a1, int a2)
{
  StateMgr *v4; // r6
  StateBase *CurrentState; // r0
  int v6; // r7
  int result; // r0
  StateBase *v8; // r0
  int v9; // r6

  v4 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60C9598C + 8))();
  if ( v6 != result )
  {
    v8 = StateMgr__getCurrentState(v4);
    v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
    result = (*(int (**)(void))(dword_60C959AC + 8))();
    if ( v9 != result )
      return KoopaTroopa_vf209(a1, a2);
  }
  return result;
}
