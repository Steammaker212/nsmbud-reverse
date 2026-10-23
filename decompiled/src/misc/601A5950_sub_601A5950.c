/* sub_601A5950
 * address: 0x601A5950   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A5950(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5

  if ( FIELD_U8(a1, 308) )
  {
    if ( !FIELD_U8(a1, 309) )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 284));
      v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v3 != (*(int (**)(void))(dword_60C8A0E0 + 8))() )
        DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 304));
    }
  }
  return 1;
}
