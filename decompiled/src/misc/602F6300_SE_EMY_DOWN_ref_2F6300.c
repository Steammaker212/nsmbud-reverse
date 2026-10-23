/* SE_EMY_DOWN_ref_2F6300
 * address: 0x602F6300   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_DOWN_ref_2F6300(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r5
  float x; // s18
  float v6; // r0
  float v7; // s16
  float v8; // r1
  int v9; // r5
  Vec3 v11; // [sp+0h] [bp-50h] BYREF
  int v12; // [sp+Ch] [bp-44h]
  StateVirtual *v13; // [sp+10h] [bp-40h]
  char v14; // [sp+14h] [bp-3Ch]
  _BOOL4 v15; // [sp+18h] [bp-38h]
  char v16; // [sp+1Ch] [bp-34h]
  Vec2 out; // [sp+20h] [bp-30h] BYREF

  FIELD_U8(a1, 6059) = FIELD_U32(a1, 2872) & 1;
  v2 = (StateMgr *)(a1 + 6084);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  if ( FIELD_U8(a1, 536) )
  {
    CurrentState = StateMgr__getCurrentState(v2);
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v4 != (*((int (**)(void))stru_60C90710._._.vtable + 2))() )
      goto LABEL_7;
  }
  else if ( sub_60003AE0((StageActor *)a1) == 1 )
  {
    FIELD_U8(a1, 6321) = 0;
    v6 = FIELD_F32(a1, 112);
    v7 = FIELD_F32(a1, 584);
    v11.x = FIELD_F32(a1, 108);
    x = v11.x;
    v11.y = v6;
    v11.z = 0.0;
    sub_602A38A4(a1, &v11.x);
    v8 = FIELD_F32(a1, 112);
    v9 = Global_BasicSoundActor1;
    v11.x = FIELD_F32(a1, 108);
    v11.y = v8;
    mapPositionToScreen(&out, &v11);
    BasicSoundActor1_playSound(v9, "SE_EMY_DOWN", (int)&out, 0);
    LODWORD(v11.x) = dword_60AFE3F8[(float)(x - v7) < 0.0];
    v11.y = 3.9;
    v11.z = -4.0;
    v12 = unk_60C906E8;
    v13 = &stru_60C90710;
    v14 = -1;
    v15 = (float)(x - v7) < 0.0;
    v16 = -1;
    sub_602A852C(a1 + 6104, &v11);
  }
  sub_602F64CC(a1);
LABEL_7:
  ActorScaler_execute((ActorScaler *)(a1 + 6868));
  sub_602A33AC((_BYTE *)a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  sub_60003840(a1);
  return 1;
}
