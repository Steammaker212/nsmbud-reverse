/* sub_6045CB8C
 * address: 0x6045CB8C   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6045CB8C(int a1)
{
  int v2; // r0
  void *v3; // r1
  StateBase *CurrentState; // r0
  int v5; // r5

  v2 = FIELD_U8(a1, 6323);
  if ( v2 == 1 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v5 != (*(int (**)(void))(dword_60C9D004 + 8))() )
    {
      v3 = **(void ***)(a1 + 6104);
      goto LABEL_8;
    }
    if ( (FIELD_U8(a1, 6324) & 0x10) != 0 )
    {
      v3 = **(void ***)(a1 + 6104);
      goto LABEL_8;
    }
  }
  else if ( !v2 )
  {
    v3 = **(void ***)(a1 + 6104);
LABEL_8:
    DrawMgr_drawModel(DrawMgr_instance, v3);
  }
  return 1;
}
