/* sub_6012E628
 * address: 0x6012E628   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6012E628(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5

  LightSource_update1((LightSource *)(a1 + 11888), 37, (Vec3 *)(a1 + 108), 0, 0, 0, 0, 0, 0);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 != (*(int (**)(void))(dword_60C87438 + 8))() )
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6100));
  return 1;
}
