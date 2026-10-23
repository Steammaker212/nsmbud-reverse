/* sub_6039A3F8
 * address: 0x6039A3F8   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6039A3F8(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r7
  int v5; // r4
  StateBase *v6; // r0
  int v7; // r7
  float v8; // s16
  float v9; // s18
  int v10; // r7
  StateBase *v11; // r0
  int v12; // r6
  StateBase *v13; // r0
  int v14; // r6
  StateBase *v15; // r0
  int v16; // r5

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v5 = 0;
  if ( v4 != (*(int (**)(void))(dword_60C97660 + 8))() && !FIELD_U8(a1, 6521) )
  {
    v6 = StateMgr__getCurrentState(v2);
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
    if ( v7 != (*(int (**)(void))(dword_60C97460 + 8))() )
    {
      v8 = FIELD_F32(a1, 108);
      v9 = FIELD_F32(a1, 304);
      v10 = dword_60CC6484;
      v11 = StateMgr__getCurrentState(v2);
      v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
      if ( v12 != (*(int (**)(void))(dword_60C972A0 + 8))() )
      {
        v13 = StateMgr__getCurrentState(v2);
        v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13);
        if ( v14 != (*(int (**)(void))(dword_60C972C0 + 8))() )
        {
          v15 = StateMgr__getCurrentState(v2);
          v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15);
          if ( v16 != (*(int (**)(void))(dword_60C972E0 + 8))() )
            return (float)((float)(v8 + v9) + -32.0) > FIELD_F32(v10, 48);
        }
      }
    }
  }
  return v5;
}
