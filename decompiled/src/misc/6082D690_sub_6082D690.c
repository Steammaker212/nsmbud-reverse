/* sub_6082D690
 * address: 0x6082D690   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6082D690(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r5

  v2 = (StateMgr *)(a1 + 6084);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  CurrentState = StateMgr__getCurrentState(v2);
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60CC6E88 + 8))() )
  {
    FIELD_U32(a1, 6100) = 0;
    FIELD_U32(a1, 6120) = -1;
    FIELD_U32(a1, 6116) = -1;
    FIELD_U32(a1, 6112) = -1;
    FIELD_U32(a1, 6108) = -1;
    FIELD_U32(a1, 6104) = -1;
  }
  return 1;
}
