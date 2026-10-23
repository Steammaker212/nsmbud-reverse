/* BobOmb_vf74
 * address: 0x6025EF5C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall BobOmb_vf74(int a1, int a2, int a3)
{
  StateBase *CurrentState; // r0
  int v7; // r7

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v7 == (*((int (**)(void))stru_60C8E1CC._.vtable + 2))() )
    return 0;
  else
    return Enemy__collisionGroundPoundYoshi(a1, a2, a3);
}
