/* PowBlock_vf12
 * address: 0x606BD734   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall PowBlock_vf12(int a1)
{
  void *v2; // r8
  StateBase *CurrentState; // r0
  int v4; // r5
  int v5; // r6
  int v6; // r7
  int i; // r5

  v2 = DrawMgr_instance;
  DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 6152));
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60CBA6CC + 8))() )
  {
    v5 = **(_DWORD **)(a1 + 6156);
    v6 = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 120))(v5);
    if ( v6 >= 1 )
    {
      for ( i = 0; i != v6; ++i )
        sub_60418078(v5, i, 0);
    }
    DrawMgr_drawModel(v2, **(void ***)(a1 + 6156));
    DrawMgr_drawModel(v2, **(void ***)(a1 + 6160));
  }
  return 1;
}
