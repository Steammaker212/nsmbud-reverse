/* sub_60276E10
 * address: 0x60276E10   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60276E10(int a1)
{
  StateMgr *v2; // r6
  StateBase *CurrentState; // r0
  int v4; // r7
  _BOOL4 v5; // r5
  StateBase *v6; // r0
  int v7; // r7
  StateBase *v8; // r0
  int v9; // r7
  StateBase *v10; // r0
  int v11; // r6
  char v12; // r6
  char *v13; // r4
  int v14; // t1
  int v15; // t1
  int v17; // [sp+8h] [bp-30h] BYREF
  _BYTE v18[4]; // [sp+Ch] [bp-2Ch] BYREF
  int v19; // [sp+10h] [bp-28h]
  int v20; // [sp+14h] [bp-24h]
  int v21; // [sp+18h] [bp-20h]
  int v22; // [sp+1Ch] [bp-1Ch] BYREF

  v2 = (StateMgr *)(a1 + 0x17C4);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 0x17C4));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v5 = 0;
  if ( v4 != (*(int (**)(void))(dword_60C8EC80 + 8))() )
  {
    v6 = StateMgr__getCurrentState(v2);
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
    if ( v7 != (*(int (**)(void))(dword_60C8ED04 + 8))() )
    {
      v8 = StateMgr__getCurrentState(v2);
      v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
      if ( v9 != (*(int (**)(void))(dword_60C8ED28 + 8))() )
      {
        v10 = StateMgr__getCurrentState(v2);
        v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
        if ( v11 != (*(int (**)(void))(dword_60C8ED4C + 8))() )
        {
          v12 = 0;
          v22 = 0;
          ((void (__fastcall *)(int *, int *, _BYTE *, int, _DWORD))physics_21893E8)(
            &v17,
            &v22,
            v18,
            a1 + 108,
            FIELD_U8(a1, 86));
          if ( v17 == 2 && v18[0] )
          {
            v12 = 1;
            FIELD_U32(a1, 6532) = v19;
            FIELD_U32(a1, 6536) = v20;
            FIELD_U32(a1, 6540) = 1170939904;
            FIELD_U32(a1, 6544) = v21;
            v14 = FIELD_U8(a1, 6528);
            v13 = (char *)(a1 + 6528);
            v5 = v14 == 0;
          }
          else
          {
            v15 = FIELD_U8(a1, 6528);
            v13 = (char *)(a1 + 6528);
            v5 = v15 != 0;
          }
          *v13 = v12;
        }
      }
    }
  }
  return v5;
}
