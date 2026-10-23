/* sub_60768D14
 * address: 0x60768D14   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60768D14(int a1, int a2)
{
  int result; // r0
  int v4; // r1
  StateBase *CurrentState; // r0
  int v6; // r5

  result = FIELD_U8(a1, 1234);
  if ( (result & 0x10) != 0 )
  {
    FIELD_U32(a1, 80) = a2;
    result = a1 + 6900;
    v4 = FIELD_U32(a1, 6900);
    if ( (v4 & 0x40000) == 0 )
    {
      *(_DWORD *)result = v4 | 1;
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 9916));
      v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      result = (*((int (**)(void))stru_60CBF81C.vtable + 2))();
      if ( v6 != result )
        return Player_changeState(a1, &stru_60CBF81C, 1);
    }
  }
  return result;
}
