/* sub_601D1498
 * address: 0x601D1498   size: 620   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601D1498()
{
  int *v0; // r6
  int *v1; // r0
  int *v2; // r4
  StateBase *CurrentState; // r0
  int v4; // r5
  int *v5; // r0
  int *v6; // r4
  StateBase *v7; // r0
  int v8; // r5
  int *v9; // r0
  int *v10; // r4
  StateBase *v11; // r0
  int v12; // r5
  int *v13; // r0
  int *v14; // r4
  StateBase *v15; // r0
  int v16; // r5
  int *v17; // r0
  int *v18; // r4
  bool v19; // zf
  StateBase *v20; // r0
  int v21; // r5
  _DWORD v23[24]; // [sp+0h] [bp-60h] BYREF

  v23[0] = 0;
  memset(&v23[2], 0, 72);
  sub_601905DC(v23);
  v23[0] = 48;
  v23[1] = sub_601916C8(dword_60C8996C, 48);
  v0 = *(int **)(ActorMgr__instance + 27180);
  v1 = sub_60169BD8(4, *(int **)(ActorMgr__instance + 27172));
  v2 = v1;
  if ( v1 != v0 )
  {
    if ( *v1 )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(*v1 + 284));
      v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v4 != (*(int (**)(void))(dword_60C8CE38 + 8))() )
        v23[4] = *(_DWORD *)(*v2 + 8);
    }
    v5 = sub_60169BD8(4, v2 + 1);
    v6 = v5;
    if ( v5 != v0 )
    {
      if ( *v5 )
      {
        v7 = StateMgr__getCurrentState((StateMgr *)(*v5 + 284));
        v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
        if ( v8 != (*(int (**)(void))(dword_60C8CE38 + 8))() )
          v23[5] = *(_DWORD *)(*v6 + 8);
      }
      v9 = sub_60169BD8(4, v6 + 1);
      v10 = v9;
      if ( v9 != v0 )
      {
        if ( *v9 )
        {
          v11 = StateMgr__getCurrentState((StateMgr *)(*v9 + 284));
          v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
          if ( v12 != (*(int (**)(void))(dword_60C8CE38 + 8))() )
            v23[6] = *(_DWORD *)(*v10 + 8);
        }
        v13 = sub_60169BD8(4, v10 + 1);
        v14 = v13;
        if ( v13 != v0 )
        {
          if ( *v13 )
          {
            v15 = StateMgr__getCurrentState((StateMgr *)(*v13 + 284));
            v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15);
            if ( v16 != (*(int (**)(void))(dword_60C8CE38 + 8))() )
              v23[7] = *(_DWORD *)(*v14 + 8);
          }
          v17 = sub_60169BD8(4, v14 + 1);
          v18 = v17;
          v19 = v17 == v0;
          if ( v17 != v0 )
          {
            v17 = (int *)*v17;
            v19 = *v18 == 0;
          }
          if ( !v19 )
          {
            v20 = StateMgr__getCurrentState((StateMgr *)(v17 + 71));
            v21 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v20, 0x0) + 2))(v20);
            if ( v21 != (*(int (**)(void))(dword_60C8CE38 + 8))() )
              v23[8] = *(_DWORD *)(*v18 + 8);
          }
        }
      }
    }
  }
  return sub_60191160((_DWORD *)dword_60C8996C, v23);
}
