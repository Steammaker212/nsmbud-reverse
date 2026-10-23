/* DryBones__onDraw
 * address: 0x60314D30   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F54
// 
// Overridden by: None
int __fastcall DryBones__onDraw(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  void *v4; // r1
  void *v5; // r0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60C93500 + 8))() )
  {
    if ( !FIELD_U8(a1, 7673) )
      DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 6304));
    DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 6308));
    DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 6312));
    DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 6316));
    DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 6320));
    v4 = **(void ***)(a1 + 6324);
    v5 = DrawMgr_instance;
  }
  else
  {
    v4 = **(void ***)(a1 + 6300);
    v5 = DrawMgr_instance;
  }
  DrawMgr_drawModel(v5, v4);
  return 1;
}
