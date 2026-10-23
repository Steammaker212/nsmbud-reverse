/* sub_6008CA20
 * address: 0x6008CA20   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6008CA20(int a1)
{
  int v1; // r4
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r6
  StateBase *v7; // r0
  int v8; // r5

  v1 = 1;
  if ( (FIELD_U8(a1, 7616) & 2) == 0 )
  {
    v2 = (StateMgr *)(a1 + 6084);
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v4 != (*(int (**)(void))(dword_60C81A8C + 8))() )
    {
      v5 = StateMgr__getCurrentState(v2);
      v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
      if ( v6 != (*(int (**)(void))(dword_60C81A48 + 8))() )
      {
        v7 = StateMgr__getCurrentState(v2);
        v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
        return v8 == (*(int (**)(void))(dword_60C81A6C + 8))();
      }
    }
  }
  return v1;
}
