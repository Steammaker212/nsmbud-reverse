/* sub_602C4404
 * address: 0x602C4404   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C4404(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int result; // r0
  int v5; // r0
  _DWORD v6[6]; // [sp+0h] [bp-18h] BYREF

  FIELD_U8(a1, 6334) = 2;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))();
  if ( v3 != result )
  {
    v5 = FIELD_U32(a1, 6304);
    v6[0] = &sead__SafeStringBase__vtable;
    v6[1] = "dead";
    return sub_60421AE4(v5, v6, 1);
  }
  return result;
}
