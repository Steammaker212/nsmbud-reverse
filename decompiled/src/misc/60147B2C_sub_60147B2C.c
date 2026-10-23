/* sub_60147B2C
 * address: 0x60147B2C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60147B2C(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 != (*(int (**)(void))(dword_60C880E0 + 8))()
    || *(float *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 20) > 32.0 )
  {
    JUMPOUT(0x60147BB0);
  }
  FIELD_U8(a1, 19) = 1;
  return 1;
}
