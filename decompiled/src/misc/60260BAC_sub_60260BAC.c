/* sub_60260BAC
 * address: 0x60260BAC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60260BAC(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int result; // r0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(BobOmb_StateID_Kameck + 8))();
  if ( v3 == result )
    return (*(int (__fastcall **)(int, State *))(*(_DWORD *)a1 + 192))(a1, &BobOmb_StateID_Walk);
  return result;
}
