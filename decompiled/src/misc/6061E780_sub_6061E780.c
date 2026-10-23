/* sub_6061E780
 * address: 0x6061E780   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6061E780(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  void *v4; // r1

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 1348));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60CB36C8 + 8))() )
    v4 = *(void **)(a1 + 648);
  else
    v4 = **(void ***)(a1 + 644);
  DrawMgr_drawModel(DrawMgr_instance, v4);
  return 1;
}
