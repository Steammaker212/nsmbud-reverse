/* sub_6039AC70
 * address: 0x6039AC70   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6039AC70(int a1)
{
  StateMgr *v2; // r6
  StateBase *CurrentState; // r0
  int v4; // r5
  StateBase *v6; // r0
  int v7; // r7
  int v8; // r5
  StateBase *v9; // r0
  int v10; // r7
  StateBase *v11; // r0
  int v12; // r7
  StateBase *v13; // r0
  int v14; // r7
  StateBase *v15; // r0
  int v16; // r7
  StateBase *v17; // r0
  int v18; // r6

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C97300 + 8))() )
    return 0;
  v6 = StateMgr__getCurrentState(v2);
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
  v8 = 1;
  if ( v7 != (*(int (**)(void))(dword_60C971A0 + 8))() )
  {
    v9 = StateMgr__getCurrentState(v2);
    v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
    if ( v10 != (*(int (**)(void))(dword_60C97600 + 8))() )
    {
      v11 = StateMgr__getCurrentState(v2);
      v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
      if ( v12 != (*(int (**)(void))(dword_60C97220 + 8))() )
      {
        v13 = StateMgr__getCurrentState(v2);
        v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13);
        if ( v14 != (*(int (**)(void))(dword_60C97240 + 8))() )
        {
          v15 = StateMgr__getCurrentState(v2);
          v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15);
          if ( v16 != (*(int (**)(void))(dword_60C97200 + 8))() )
          {
            v17 = StateMgr__getCurrentState(v2);
            v18 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v17, 0x0) + 2))(v17);
            if ( v18 != (*(int (**)(void))(dword_60C97640 + 8))() )
              return 0;
          }
          if ( (FIELD_U32(a1, 6320) & 0x101) != 0x101 )
            return 0;
        }
      }
    }
  }
  return v8;
}
