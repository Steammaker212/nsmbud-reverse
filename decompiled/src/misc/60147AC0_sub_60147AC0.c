/* sub_60147AC0
 * address: 0x60147AC0   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60147AC0(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int v4; // r1

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60C880E0 + 8))() )
    v4 = 6300;
  else
    v4 = 6304;
  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + v4));
  return 1;
}
