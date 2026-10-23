/* sub_6024A018
 * address: 0x6024A018   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6024A018(int a1, float *a2)
{
  int v4; // r5
  StateBase *CurrentState; // r0
  int v6; // r7
  _BOOL4 v7; // r6

  v4 = 0;
  if ( !sub_602A588C(a1) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v6 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      v4 = 1;
      FIELD_U8(a1, 6338) = 1;
      v7 = FIELD_F32(a1, 108) < *a2;
      sub_602A6C70(a1, v7);
      sub_602A6024(a1, v7, -1, -1);
    }
  }
  return v4;
}
