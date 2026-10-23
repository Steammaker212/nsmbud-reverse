/* sub_607781EC
 * address: 0x607781EC   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607781EC(int a1)
{
  StateMgr *v2; // r4
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r5
  StateBase *v8; // r0
  int v9; // r4

  v2 = (StateMgr *)(a1 + 36);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 36));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60CBFAD4 + 8))() && FIELD_S32(a1, 52) > 0 )
    return 1;
  v5 = StateMgr__getCurrentState(v2);
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
  if ( v6 == (*(int (**)(void))(dword_60CBFAF4 + 8))() )
    return 1;
  v8 = StateMgr__getCurrentState(v2);
  v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
  return v9 == (*(int (**)(void))(dword_60CBFB14 + 8))();
}
