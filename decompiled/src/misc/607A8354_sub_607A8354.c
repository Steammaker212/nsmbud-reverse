/* sub_607A8354
 * address: 0x607A8354   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A8354(StateMgr *a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int v4; // r1
  int v5; // r2
  int result; // r0

  CurrentState = StateMgr__getCurrentState(a1 + 605);
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v4 = (*(int (**)(void))(dword_60CC4B0C + 8))();
  result = 0;
  if ( v3 == v4 )
  {
    sub_607A8240((int)a1, v4, v5);
    return 1;
  }
  return result;
}
