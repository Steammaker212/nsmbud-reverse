/* SE_OBJ_RC_LIFTLINE_MOVE_ref
 * address: 0x60650368   size: 716   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_RC_LIFTLINE_MOVE_ref(int a1)
{
  int v2; // r0
  _BYTE *v3; // r2
  float v4; // s2
  int v5; // r1
  float v6; // s0
  float v7; // s0
  float v8; // s0
  StateBase *CurrentState; // r0
  int v10; // r5
  float v11; // s16
  float v12; // r2
  int v13; // r5
  int v14; // r6
  float v15; // r1
  float v16; // r2
  float v17; // s4
  float v18; // s2
  Vec2 out; // [sp+8h] [bp-40h] BYREF
  int v21; // [sp+10h] [bp-38h]
  int v22; // [sp+14h] [bp-34h] BYREF
  Vec3 position; // [sp+18h] [bp-30h] BYREF
  float v24; // [sp+24h] [bp-24h] BYREF

  StageActor__cullCheck((StageActor *)a1, 0);
  if ( v2 )
    return 1;
  sub_6065064C(a1);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  sub_6000F338(a1 + 7380);
  StateMgr__execute((StateMgr *)(a1 + 7400));
  v3 = (_BYTE *)(a1 + 7572);
  v4 = FIELD_F32(a1, 7480);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 7484) + 4.0;
  v5 = dword_60CC6484;
  v6 = FIELD_F32(dword_60CC6484, 112);
  if ( v6 <= v4 && (float)(v6 + FIELD_F32(dword_60CC6484, 104)) >= v4 )
  {
    *v3 = 1;
    goto LABEL_6;
  }
  if ( *v3 )
  {
LABEL_6:
    v7 = FIELD_F32(v5, 112);
    if ( v7 >= v4 )
    {
      FIELD_F32(a1, 108) = v7;
      FIELD_F32(a1, 112) = ((float (__fastcall *)(int))loc_6000F520)(a1 + 7380) + 4.0;
    }
    else
    {
      v8 = v7 + FIELD_F32(v5, 104);
      if ( v8 <= v4 )
      {
        FIELD_F32(a1, 108) = v8;
        FIELD_F32(a1, 7480) = v8;
      }
      else
      {
        FIELD_F32(a1, 108) = v4;
      }
    }
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 7400));
    v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v10 != (*((int (**)(void))LineFollower_StateID_Fall._.vtable + 2))() && FIELD_U32(a1, 7556) )
    {
      v11 = FIELD_F32(a1, 120);
      v12 = FIELD_F32(a1, 112);
      v13 = FIELD_U32(a1, 8);
      position.x = FIELD_F32(a1, 108);
      position.y = v12;
      v14 = Global_BasicSoundActor2;
      mapPositionToScreen(&out, &position);
      sub_60813CA0(
        v14,
        "SE_OBJ_RC_LIFTLINE_MOVE",
        v13,
        &out,
        COERCE_FLOAT((int)(float)(v11 * 100.0)),
        (int)(float)(v11 * 100.0),
        0);
    }
  }
  FIELD_U32(a1, 6348) = FIELD_U32(a1, 164);
  SolidOnTopCollider_execute((ColliderBase *)(a1 + 6104));
  FIELD_U32(a1, 6836) = FIELD_U32(a1, 164);
  ShapedCollider_execute((ColliderBase *)(a1 + 6592));
  v24 = 0.0;
  v15 = FIELD_F32(a1, 112);
  v16 = FIELD_F32(a1, 116);
  position.x = FIELD_F32(a1, 108);
  position.y = v15;
  position.z = v16;
  ((void (__fastcall *)(int *, float *, Vec3 *, _DWORD))checkLiquidCollisions)(
    &v22,
    &v24,
    &position,
    FIELD_U8(a1, 86));
  if ( (unsigned int)(v22 - 3) <= 1
    && (float)(FIELD_F32(dword_60CC6484, 124) - FIELD_F32(dword_60CC6484, 108)) <= v24 )
  {
    if ( (v17 = FIELD_F32(a1, 588), v18 = FIELD_F32(a1, 112), v17 <= v24) && v24 < v18 || v24 < v17 && v18 <= v24 )
    {
      out.x = FIELD_F32(a1, 108);
      out.y = v24;
      v21 = 1163575296;
      (*(void (__fastcall **)(int, Vec2 *))(*(_DWORD *)a1 + 112))(a1, &out);
    }
  }
  sub_60650090(a1);
  return 1;
}
