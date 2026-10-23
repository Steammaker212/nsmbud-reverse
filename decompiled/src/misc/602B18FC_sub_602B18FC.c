/* sub_602B18FC
 * address: 0x602B18FC   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602B18FC(int a1)
{
  void *v2; // r4
  StateBase *CurrentState; // r0
  int v4; // r6
  void *v5; // r1
  void **v6; // r0

  v2 = DrawMgr_instance;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C90C54 + 8))() )
  {
    DrawMgr_drawModel(v2, *(void **)(a1 + 6308));
    DrawMgr_drawModel(v2, *(void **)(a1 + 6352));
    DrawMgr_drawModel(v2, *(void **)(a1 + 6396));
    v5 = *(void **)(a1 + 6440);
  }
  else
  {
    v5 = **(void ***)(a1 + 6300);
  }
  DrawMgr_drawModel(v2, v5);
  v6 = *(void ***)(a1 + 6304);
  if ( v6 )
    DrawMgr_drawModel(v2, *v6);
  return 1;
}
