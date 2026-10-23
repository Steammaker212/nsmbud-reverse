/* sub_60778128
 * address: 0x60778128   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60778128(int a1)
{
  StateMgr *v1; // r4
  StateBase *CurrentState; // r0
  int v3; // r5
  StateBase *v4; // r0
  int v5; // r5
  StateBase *v7; // r0
  int v8; // r4

  v1 = (StateMgr *)(a1 + 36);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 36));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60CBFAD4 + 8))() )
    return 1;
  v4 = StateMgr__getCurrentState(v1);
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v4, 0x0) + 2))(v4);
  if ( v5 == (*(int (**)(void))(dword_60CBFAF4 + 8))() )
    return 1;
  v7 = StateMgr__getCurrentState(v1);
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
  return v8 == (*(int (**)(void))(dword_60CBFB14 + 8))();
}
