/* sub_6034E314
 * address: 0x6034E314   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6034E314(int a1, float *a2)
{
  StateBase *CurrentState; // r0
  int v5; // r6

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v5 == (*(int (**)(void))(dword_60C94C80 + 8))() )
    return 0;
  else
    return Enemy__vfA8(a1, a2);
}
