/* sub_6038550C
 * address: 0x6038550C   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6038550C(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r5

  v2 = (StateMgr *)(a1 + 6084);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  CurrentState = StateMgr__getCurrentState(v2);
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 != (*(int (**)(void))(dword_60C96BC4 + 8))()
    && FIELD_F32(a1, 112) < (float)(FIELD_F32(dword_60CC6484, 132) + -48.0) )
  {
    FIELD_U8(a1, 19) = 1;
  }
  sub_602A33AC((_BYTE *)a1);
  return 1;
}
