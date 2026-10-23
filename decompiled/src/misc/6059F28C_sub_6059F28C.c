/* sub_6059F28C
 * address: 0x6059F28C   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6059F28C(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  _BOOL4 result; // r0
  StateBase *v6; // r0
  int v7; // r5

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60CAFCA0 + 8))() )
    return FIELD_U32(a1, 7168) < 0x3Cu;
  v6 = StateMgr__getCurrentState(v2);
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
  if ( v7 != (*(int (**)(void))(dword_60CAFCC4 + 8))() )
    return 0;
  result = 1;
  if ( FIELD_S32(a1, 6100) >= 21 )
    return 0;
  return result;
}
