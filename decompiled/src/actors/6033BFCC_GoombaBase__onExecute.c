/* GoombaBase__onExecute
 * address: 0x6033BFCC   size: 920   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F3C
// 
// Overridden by: None
signed int __fastcall GoombaBase__onExecute(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  char v5; // r1
  float v6; // s16
  float v7; // s18
  float v8; // s20
  float v9; // s22
  TileCheck *v10; // r0
  StateBase *v11; // r0
  int v12; // r5
  float v13; // s0
  float v14; // s6
  float v15; // s2
  float v16; // s4
  int v17; // r5
  TileCheck *v18; // r0
  __int64 v19; // r0
  float v20; // s16
  float v21; // s18
  int v22; // r0
  int v23; // r5
  int v24; // r0
  int (**v26)(); // [sp+4h] [bp-9Ch] BYREF
  TileCheck position; // [sp+8h] [bp-98h] BYREF
  TileCheck_Param out; // [sp+54h] [bp-4Ch] BYREF
  float v29; // [sp+60h] [bp-40h] BYREF
  float v30; // [sp+64h] [bp-3Ch]

  FIELD_U8(a1, 6059) = FIELD_U32(a1, 2872) & 1;
  v2 = (StateMgr *)(a1 + 0x17C4);
  StateMgr__execute((StateMgr *)(a1 + 0x17C4));
  if ( !FIELD_U8(a1, 536) )
  {
    sub_6033C38C(a1);
    if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 736))(a1) )
    {
      CurrentState = StateMgr__getCurrentState(v2);
      v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v4 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
      {
        if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 672))(a1)
          && !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 676))(a1) )
        {
          if ( FIELD_U8(a1, 86) )
          {
            FIELD_U32(a1, 116) = -988004352;
          }
          else
          {
            v5 = 2;
            if ( (FIELD_U32(a1, 20) & 0x10000) == 0 )
              v5 = 1;
            position.field_0 = v5;
            FIELD_F32(a1, 116) = sub_60022B80(&position) + FIELD_F32(a1, 6688);
          }
        }
        if ( (FIELD_U8(a1, 2872) & 1) == 0 )
          goto LABEL_24;
        v6 = FIELD_F32(a1, 112);
        v7 = FIELD_F32(a1, 108);
        v8 = FIELD_F32(a1, 572);
        v9 = FIELD_F32(a1, 576);
        v26 = off_60BD4A6C;
        *(_WORD *)&out.field_0 = 0;
        *(_WORD *)&out.field_2 = FIELD_U16(a1, 86);
        out.field_4 = 0;
        out.field_8 = (int)&v26;
        v10 = TileCheck_ctor(&position, &out);
        v29 = v7 + v8;
        v30 = v6 + v9;
        if ( !sub_6015DD58((int)v10, 0, (int)&v29) )
        {
LABEL_24:
          v11 = StateMgr__getCurrentState(v2);
          v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
          if ( v12 != (*(int (**)(void))(dword_60C944DC + 8))() )
            sub_6033C4A8(a1);
        }
        if ( sub_60003AE0((StageActor *)a1) == 1 )
          goto LABEL_17;
        v13 = FIELD_F32(a1, 572);
        v14 = FIELD_F32(a1, 108);
        v15 = FIELD_F32(a1, 576);
        v16 = FIELD_F32(a1, 112);
        v17 = FIELD_U32(a1, 2872);
        *(_WORD *)&out.field_0 = 0;
        v29 = v14 + v13;
        v30 = v16 + v15;
        *(_WORD *)&out.field_2 = FIELD_U16(a1, 86);
        out.field_4 = 0;
        out.field_8 = 0;
        v18 = TileCheck_ctor(&position, &out);
        LODWORD(v19) = sub_6015DF58((int)v18, 0, (int)&v29);
        HIDWORD(v19) = v17 & 0x10401;
        if ( v19 == 0x40100000001LL )
        {
LABEL_17:
          v21 = FIELD_F32(a1, 584);
          v22 = FIELD_U32(a1, 112);
          *(_DWORD *)&position.field_0 = FIELD_U32(a1, 108);
          v20 = *(float *)&position.field_0;
          position.field_4 = v22;
          position.field_8 = 0;
          sub_602A38A4(a1, (float *)&position.field_0);
          v23 = Global_BasicSoundActor1;
          v24 = FIELD_U32(a1, 112);
          *(_DWORD *)&position.field_0 = FIELD_U32(a1, 108);
          position.field_4 = v24;
          mapPositionToScreen((Vec2 *)&out, (Vec3 *)&position);
          BasicSoundActor1_playSound(v23, "SE_EMY_DOWN", (int)&out, 0);
          *(_DWORD *)&position.field_0 = dword_60AFE3F8[(float)(v20 - v21) < 0.0];
          position.field_4 = 1081711002;
          position.field_8 = -1065353216;
          position.field_C = unk_60C906E8;
          position.field_10 = (int)&stru_60C90710;
          LOBYTE(position.field_14) = -1;
          position.field_18 = (float)(v20 - v21) < 0.0;
          LOBYTE(position.field_1C) = -1;
          sub_602A852C(a1 + 6104, &position);
        }
      }
    }
  }
  ActorScaler_execute((ActorScaler *)(a1 + 6788));
  sub_602A33AC((_BYTE *)a1);
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 672))(a1) && !FIELD_U8(a1, 6708) )
    StageActor__cullCheck((StageActor *)a1, 0);
  sub_60003840(a1);
  return 1;
}
