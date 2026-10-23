/* SE_EMY_DOWN_ref_352600
 * address: 0x60352600   size: 608   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_DOWN_ref_352600(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r6
  int v4; // r0
  StateBase *v5; // r0
  int v6; // r6
  StateBase *v7; // r0
  int v8; // r6
  float v9; // s0
  StateBase *v10; // r0
  int v11; // r5
  float v12; // s0
  float v13; // r1
  int v14; // r5
  int v15; // r1
  Vec3 v17; // [sp+0h] [bp-38h] BYREF
  int v18; // [sp+Ch] [bp-2Ch]
  StateVirtual *v19; // [sp+10h] [bp-28h]
  char v20; // [sp+14h] [bp-24h]
  int v21; // [sp+18h] [bp-20h]
  char v22; // [sp+1Ch] [bp-1Ch]
  Vec2 out; // [sp+20h] [bp-18h] BYREF

  FIELD_U8(a1, 6404) = 0;
  ActorScaler_execute((ActorScaler *)(a1 + 6420));
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 != (*(int (**)(void))(dword_60C94F7C + 8))() )
  {
    if ( sub_6035288C(a1) == 1 )
    {
      if ( sub_60352988(a1) )
        return 1;
    }
    else
    {
      StageActor__cullCheck((StageActor *)a1, 0);
      if ( v4 )
        return 1;
    }
  }
  StateMgr__execute((StateMgr *)(a1 + 6084));
  v5 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
  if ( v6 != (*(int (**)(void))(dword_60C94F18 + 8))() )
  {
    v7 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
    if ( v8 != (*(int (**)(void))(dword_60C94EF4 + 8))() )
      CollisionMgr_process((_BYTE *)(a1 + 648), v9);
  }
  v10 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
  if ( v11 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() || sub_60003AE0((StageActor *)a1) != 1 )
  {
    sub_602A33AC((_BYTE *)a1);
    FIELD_U32(a1, 6316) = 0;
  }
  else
  {
    v12 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
    v17.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
    v17.y = v12;
    v17.z = 0.0;
    sub_602A38A4(a1, &v17.x);
    v13 = FIELD_F32(a1, 112);
    v14 = Global_BasicSoundActor1;
    v17.x = FIELD_F32(a1, 108);
    v17.y = v13;
    mapPositionToScreen(&out, &v17);
    BasicSoundActor1_playSound(v14, "SE_EMY_DOWN", (int)&out, 0);
    v15 = FIELD_U32(a1, 80);
    LODWORD(v17.x) = dword_60AFE3F8[v15];
    v17.y = 3.9;
    v17.z = -4.0;
    v18 = unk_60C906E8;
    v19 = &stru_60C90710;
    v20 = -1;
    v21 = v15;
    v22 = 4;
    sub_602A852C(a1 + 6104, &v17);
  }
  return 1;
}
