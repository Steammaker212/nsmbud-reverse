/* sub_602EE018
 * address: 0x602EE018   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602EE018(int a1)
{
  int v1; // r5
  StateMgr *v2; // r4
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r6
  StateBase *v8; // r0
  int v9; // r4

  v1 = 0;
  if ( (FIELD_U8(a1, 7440) & 2) == 0 )
    return v1;
  if ( *(_BYTE *)(FIELD_U32(a1, 7444) + 8) )
    return v1;
  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v1 = 1;
  if ( v4 == (*((int (**)(void))stru_60C925A4.vtable + 2))() )
    return v1;
  v5 = StateMgr__getCurrentState(v2);
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
  if ( v6 == (*((int (**)(void))stru_60C92464.vtable + 2))() )
    return v1;
  v8 = StateMgr__getCurrentState(v2);
  v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
  return v9 == (*(int (**)(void))(dword_60C923C4 + 8))();
}
