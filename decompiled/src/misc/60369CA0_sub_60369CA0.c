/* sub_60369CA0
 * address: 0x60369CA0   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60369CA0(int a1, int a2, int a3)
{
  int v3; // r6
  int v4; // r3
  int v5; // r5
  int v6; // r4
  float v7; // s0
  StateMgr *v8; // r5
  StateBase *CurrentState; // r0
  int v10; // r6
  StateBase *v11; // r0
  int v12; // r6
  StateBase *v13; // r0
  int v14; // r5

  v3 = FIELD_U32(a1, 160);
  if ( v3 < 0 && v3 != 0x80000000 )
    v3 = -v3;
  v4 = FIELD_U32(a1, 80);
  v5 = dword_60C95E20[v4 + 2];
  if ( v5 < 0 && v5 != 0x80000000 )
    v5 = -v5;
  v6 = 0;
  if ( v3 == v5 )
  {
    v7 = *(float *)(a2 + 4 * FIELD_U32(a3, 136) + 176);
    if ( (v4 != 1 || v7 <= 0.0) && (v4 || v7 >= 0.0) )
    {
      return 0;
    }
    else
    {
      v8 = (StateMgr *)(a1 + 6084);
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      v6 = 1;
      if ( v10 != (*(int (**)(void))(dword_60C95D38 + 8))() )
      {
        v11 = StateMgr__getCurrentState(v8);
        v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
        if ( v12 != (*(int (**)(void))(dword_60C95D58 + 8))() )
        {
          v13 = StateMgr__getCurrentState(v8);
          v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13);
          return v14 == (*(int (**)(void))(dword_60C95D78 + 8))();
        }
      }
    }
  }
  return v6;
}
