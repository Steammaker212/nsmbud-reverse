/* sub_60768C20
 * address: 0x60768C20   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60768C20(int a1, _DWORD *a2)
{
  int result; // r0
  StateBase *CurrentState; // r0
  int v5; // r5

  result = FIELD_U8(a1, 1234);
  if ( (result & 0x10) != 0 )
  {
    FIELD_U32(a1, 108) = *a2;
    FIELD_U32(a1, 112) = a2[1];
    FIELD_U32(a1, 116) = a2[2];
    FIELD_U32(a1, 584) = *a2;
    FIELD_U32(a1, 588) = a2[1];
    FIELD_U32(a1, 592) = a2[2];
    FIELD_U32(a1, 608) = *a2;
    FIELD_U32(a1, 612) = a2[1];
    FIELD_U32(a1, 616) = a2[2];
    FIELD_U32(a1, 88) = 0;
    FIELD_U32(a1, 124) = 0;
    FIELD_U32(a1, 6900) &= ~0x40000u;
    sub_607620B4(a1);
    result = FIELD_U32(a1, 6900);
    if ( (result & 0x40000) == 0 )
    {
      FIELD_U32(a1, 6900) = result | 1;
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 9916));
      v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      result = (*((int (**)(void))stru_60CBF81C.vtable + 2))();
      if ( v5 != result )
        return Player_changeState(a1, &stru_60CBF81C, 0);
    }
  }
  return result;
}
