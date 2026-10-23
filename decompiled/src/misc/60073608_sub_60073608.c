/* sub_60073608
 * address: 0x60073608   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60073608(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r6
  StateBase *v7; // r0
  int v8; // r5
  _DWORD *v9; // r0
  int v10; // r1
  unsigned int v11; // r2
  unsigned int v12; // r0
  float v13; // s0

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 != (*(int (**)(void))(dword_60C813AC + 8))() )
  {
    v5 = StateMgr__getCurrentState(v2);
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
    if ( v6 != (*(int (**)(void))(dword_60C813CC + 8))() )
    {
      v7 = StateMgr__getCurrentState(v2);
      v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
      if ( v8 != (*(int (**)(void))(dword_60C814CC + 8))() )
        return 0;
    }
  }
  v9 = *(_DWORD **)(a1 + 7112);
  v10 = v9[3];
  v11 = v9[2];
  v12 = v9[17];
  if ( v11 > v12 )
    v10 += 4 * v12;
  v13 = *(float *)(*(_DWORD *)v10 + 20);
  return v13 < 75.0 && v13 > 21.0;
}
