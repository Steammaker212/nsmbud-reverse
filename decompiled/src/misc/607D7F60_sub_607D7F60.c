/* sub_607D7F60
 * address: 0x607D7F60   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D7F60(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int v4; // r1
  int result; // r0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 9916));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v4 = (*(int (**)(void))(dword_60CC5584 + 8))();
  result = 0;
  if ( v3 == v4 )
  {
    sub_607745DC(a1);
    return 1;
  }
  return result;
}
