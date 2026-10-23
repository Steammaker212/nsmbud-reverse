/* sub_603D4A78
 * address: 0x603D4A78   size: 1292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D4A78(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r6
  StateBase *v4; // r0
  int v5; // r6
  StateBase *v6; // r0
  int v7; // r6
  StateBase *v8; // r0
  int v9; // r6
  StateBase *v10; // r0
  int v11; // r5
  StateBase *v12; // r0
  int v13; // r5
  int v14; // r1
  int v15; // r1
  StateBase *v16; // r0
  int v17; // r5
  float v18; // s0
  float v19; // s0
  float v20; // s2
  float v21; // s0
  StateBase *v22; // r0
  int v23; // r6
  float v24; // s0
  StateBase *v25; // r0
  int v26; // r6
  StateBase *v27; // r0
  int v28; // r6
  StateBase *v29; // r0
  int v30; // r6
  StateBase *v31; // r0
  int v32; // r6
  StateBase *v33; // r0
  int v34; // r5
  CollisionMgr_Sensor v36; // [sp+0h] [bp-38h] BYREF
  CollisionMgr_Sensor sensor; // [sp+Ch] [bp-2Ch] BYREF
  CollisionMgr_Sensor v38; // [sp+18h] [bp-20h] BYREF

  ActorScaler_execute((ActorScaler *)(a1 + 6480));
  if ( sub_60003AE0((StageActor *)a1) == 1 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v3 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    {
      v4 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v4, 0x0) + 2))(v4);
      if ( v5 != (*(int (**)(void))(dword_60C98EE0 + 8))() )
      {
        v6 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
        v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
        if ( v7 != (*(int (**)(void))(dword_60C98EC0 + 8))() )
        {
          v8 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
          v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
          if ( v9 != (*(int (**)(void))(dword_60C98F00 + 8))() )
          {
            v12 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
            v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
            if ( v13 == (*(int (**)(void))(dword_60C98F00 + 8))() )
              goto LABEL_11;
            goto LABEL_7;
          }
        }
      }
      if ( FIELD_F32(a1, 6468) < (float)(FIELD_F32(a1, 112) + 14.0) )
      {
LABEL_7:
        SE_EMY_DOWN_ref_2A7624(a1);
        goto LABEL_11;
      }
      v10 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
      if ( v11 != (*(int (**)(void))(dword_60C98F00 + 8))() )
      {
        FIELD_U32(a1, 6512) = 2;
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C98F00);
      }
    }
  }
LABEL_11:
  v14 = FIELD_U32(a1, 6460);
  if ( v14 && (FIELD_U32(a1, 6460) = v14 - 1, v14 > 1) )
  {
    if ( FIELD_U8(dword_60CC6D8C, 17) )
    {
      FIELD_U32(a1, 6368) = FIELD_U32(a1, 108);
      FIELD_U32(a1, 6372) = FIELD_U32(a1, 112);
      FIELD_U32(a1, 6376) = FIELD_U32(a1, 116);
    }
  }
  else
  {
    StageActor__cullCheck((StageActor *)a1, 0);
    StateMgr__execute((StateMgr *)(a1 + 6084));
    v15 = FIELD_U32(a1, 6340);
    if ( v15 >= 1 )
      FIELD_U32(a1, 6340) = v15 - 1;
    v16 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v17 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v16, 0x0) + 2))(v16);
    if ( v17 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    {
      CollisionActor__handleGravity((CollisionActor *)a1);
      FIELD_U32(a1, 6368) = FIELD_U32(a1, 108);
      FIELD_U32(a1, 6372) = FIELD_U32(a1, 112);
      FIELD_U32(a1, 6376) = FIELD_U32(a1, 116);
      CollisionActor__handleSpeed((CollisionActor *)a1);
      v18 = FIELD_F32(a1, 6364);
      FIELD_U32(a1, 304) = 0;
      v19 = v18 * 0.5;
      FIELD_F32(a1, 308) = v19;
      FIELD_U32(a1, 312) = 1086324736;
      FIELD_F32(a1, 316) = v19;
      sensor.a = -5.0;
      sensor.b = 5.0;
      v20 = FIELD_F32(a1, 112);
      v21 = FIELD_F32(a1, 6468);
      v36.a = 1.0;
      sensor.c = (float)(v21 + 6.0) - v20;
      v36.b = sensor.c + -2.0;
      v36.c = 6.0;
      CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &sensor, 2);
      CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &v36, 0);
      v38.b = v36.b;
      v38.a = v36.a;
      v38.c = -v36.c;
      CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &v38, 1);
    }
  }
  v22 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v23 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v22, 0x0) + 2))(v22);
  if ( v23 == (*(int (**)(void))(dword_60C98E80 + 8))() )
    goto LABEL_31;
  v25 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v26 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v25, 0x0) + 2))(v25);
  if ( v26 == (*(int (**)(void))(dword_60C98EA0 + 8))()
    || (v27 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v28 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v27, 0x0) + 2))(v27),
        v28 == (*(int (**)(void))(dword_60C98EC0 + 8))())
    || (v29 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v30 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v29, 0x0) + 2))(v29),
        v30 == (*(int (**)(void))(dword_60C98EE0 + 8))())
    || (v31 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v32 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v31, 0x0) + 2))(v31),
        v32 == (*(int (**)(void))(dword_60C98F00 + 8))()) )
  {
LABEL_31:
    CollisionMgr_process((_BYTE *)(a1 + 648), v24);
    if ( (FIELD_U8(a1, 2872) & 1) != 0 )
      FIELD_U32(a1, 124) = 0;
  }
  v33 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v34 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v33, 0x0) + 2))(v33);
  if ( v34 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
  {
    j_ModelWrapper_updateAnims(FIELD_U32(a1, 6380));
    sub_604218E0(*(_DWORD **)(a1 + 6380));
  }
  sub_602A33AC((_BYTE *)a1);
  return 1;
}
