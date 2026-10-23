/* KoopaTroopa_onDraw
 * address: 0x6035B0DC   size: 164   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall KoopaTroopa_onDraw(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  void *v4; // r1
  void *v5; // r0
  int v6; // r1

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*((int (**)(void))stru_60C95430._._.vtable + 2))() )
  {
    DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 6820));
    v4 = **(void ***)(a1 + 6824);
    v5 = DrawMgr_instance;
  }
  else
  {
    if ( FIELD_U32(a1, 6352) )
      v6 = 6820;
    else
      v6 = 6824;
    v5 = DrawMgr_instance;
    v4 = **(void ***)(a1 + v6);
  }
  DrawMgr_drawModel(v5, v4);
  return 1;
}
