/* sub_603332B0
 * address: 0x603332B0   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603332B0(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int v4; // r5
  float v5; // s0
  int v7; // r1
  int v8; // r1
  _DWORD *v9; // r1
  int v10; // r0
  bool v11; // zf
  int v12; // r0
  bool v13; // zf
  int v14; // r0
  bool v15; // zf
  int v16; // r0
  bool v17; // zf
  int v18; // r0
  int v19; // r0
  bool v20; // zf
  StageActor *v21; // r0
  int v22; // r1
  int v23; // r0
  bool v24; // zf

  sub_603334A8();
  if ( FIELD_U8(a1, 7007) )
  {
    if ( !FIELD_U8(a1, 536) )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v3 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
      {
        v4 = FIELD_U32(a1, 120);
        FIELD_U32(a1, 120) = 0;
        CollisionActor__handleGravity((CollisionActor *)a1);
        v5 = CollisionActor__handleSpeed((CollisionActor *)a1);
        CollisionMgr_process((_BYTE *)(a1 + 648), v5);
        sub_603335B0(a1);
        FIELD_U32(a1, 120) = v4;
        return 1;
      }
    }
  }
  else
  {
    ActorScaler_execute((ActorScaler *)(a1 + 6304));
    StateMgr__execute((StateMgr *)(a1 + 6084));
    sub_602A33AC((_BYTE *)a1);
    v7 = FIELD_U32(a1, 6980);
    if ( v7 >= 1 )
    {
      v8 = v7 - 1;
      FIELD_U32(a1, 6980) = v8;
      if ( !v8 )
      {
        v9 = (_DWORD *)PlayerMgr_instance;
        v10 = FIELD_U32(PlayerMgr_instance, 32);
        v11 = v10 == 0;
        if ( v10 )
          v11 = FIELD_U8(a1, 6999) == 0;
        if ( !v11 )
        {
          sub_607A1FFC(v10);
          v9 = (_DWORD *)PlayerMgr_instance;
        }
        v12 = v9[9];
        v13 = v12 == 0;
        if ( v12 )
          v13 = FIELD_U8(a1, 7000) == 0;
        if ( !v13 )
        {
          sub_607A1FFC(v12);
          v9 = (_DWORD *)PlayerMgr_instance;
        }
        v14 = v9[10];
        v15 = v14 == 0;
        if ( v14 )
          v15 = FIELD_U8(a1, 7001) == 0;
        if ( !v15 )
        {
          sub_607A1FFC(v14);
          v9 = (_DWORD *)PlayerMgr_instance;
        }
        v16 = v9[11];
        v17 = v16 == 0;
        if ( v16 )
          v17 = FIELD_U8(a1, 7002) == 0;
        if ( !v17 )
          sub_607A1FFC(v16);
      }
    }
    sub_603335B0(a1);
    v18 = FIELD_U32(a1, 12);
    if ( !v18 )
      goto LABEL_28;
    v19 = FIELD_U32(v18, 12);
    v20 = v19 == 0;
    if ( v19 )
      v20 = (FIELD_U8(v19, 32) & 2) == 0;
    if ( v20 )
    {
LABEL_28:
      v21 = (StageActor *)a1;
      v22 = 8;
    }
    else
    {
      v21 = (StageActor *)a1;
      v22 = 12;
    }
    StageActor__cullCheck(v21, v22);
    v23 = FIELD_U32(a1, 12);
    v24 = v23 == 0;
    if ( v23 )
    {
      v23 = FIELD_U32(v23, 12);
      v24 = v23 == 0;
    }
    if ( !v24 && (FIELD_U8(v23, 32) & 2) != 0 )
      sub_603336A4(a1);
  }
  return 1;
}
