/* sub_603A037C
 * address: 0x603A037C   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603A037C(int a1, int a2, int a3)
{
  int v6; // r4
  StateBase *CurrentState; // r0
  int v8; // r5
  StateBase *v10; // r0
  int v11; // r5

  v6 = 0;
  if ( !FIELD_U32(a1, 6352) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v8 == (*((int (**)(void))ShellEnemy_StateID_slide._._.vtable + 2))()
      && !FIELD_U8(a1, 6393)
      && sub_603A0780(a1, FIELD_U32(a3, 64)) == 1 )
    {
      ((void (__fastcall *)(int, int, int, int))loc_603A08E4)(a1, a2, a3, 1);
      return 1;
    }
    v10 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
    if ( v11 == (*(int (**)(void))(dword_60C8EA94 + 8))() )
    {
      ((void (__fastcall *)(int, int, int, _DWORD))loc_603A08E4)(a1, a2, a3, 0);
      return 1;
    }
  }
  return v6;
}
