/* sub_601385B4
 * address: 0x601385B4   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_601385B4(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r5

  v2 = (StateMgr *)(a1 + 6084);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  LightSource_update1((LightSource *)(a1 + 6276), 59, (Vec3 *)(a1 + 108), 0, 0, 0, 0, 0, 0);
  LightSource_unkUpdate3((LightSource *)(a1 + 6276));
  CurrentState = StateMgr__getCurrentState(v2);
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(stru_60C87918 + 8))() )
    StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
