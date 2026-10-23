/* sub_604616A4
 * address: 0x604616A4   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604616A4(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r6
  int result; // r0
  StateBase *v5; // r0
  int v6; // r6
  StateBase *v7; // r0
  int v8; // r5

  if ( !FIELD_U8(dword_60CC6D8C, 17) )
    goto LABEL_5;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60C9D340 + 8))();
  if ( v3 != result )
  {
    v5 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
    result = (*(int (**)(void))(dword_60C9D364 + 8))();
    if ( v6 != result )
    {
      v7 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
      result = (*(int (**)(void))(dword_60C9D31C + 8))();
      if ( v8 != result )
      {
LABEL_5:
        FIELD_U32(a1, 124) = 1075838976;
        return 1075838976;
      }
    }
  }
  return result;
}
