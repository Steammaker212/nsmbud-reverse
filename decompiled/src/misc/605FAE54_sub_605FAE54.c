/* sub_605FAE54
 * address: 0x605FAE54   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605FAE54(int a1)
{
  int v1; // r4
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r5

  v1 = 0;
  if ( (FIELD_U8(a1, 22) & 1) != 0 )
  {
    v2 = (StateMgr *)(a1 + 6084);
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v4 != (*(int (**)(void))(dword_60CB23E8 + 8))() )
    {
      v5 = StateMgr__getCurrentState(v2);
      v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
      return v6 != (*(int (**)(void))(dword_60CB240C + 8))();
    }
  }
  return v1;
}
