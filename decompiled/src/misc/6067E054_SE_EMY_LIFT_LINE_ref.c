/* SE_EMY_LIFT_LINE_ref
 * address: 0x6067E054   size: 1532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_LIFT_LINE_ref(int a1)
{
  int v2; // r6
  int v3; // r7
  int v4; // r5
  int v5; // r0
  int v6; // r5
  int v7; // r5
  int v8; // r6
  float v9; // r1
  int v10; // r5
  int result; // r0
  int v12; // r5
  float v13; // r1
  int v14; // r5
  const char *v15; // r1
  int v16; // r5
  int v17; // r5
  int v18; // r5
  int v19; // r5
  int v20; // r5
  StateBase *CurrentState; // r0
  int v22; // r5
  int v23; // r5
  float v24; // r1
  int v25; // r5
  int v26; // r6
  float v27; // r1
  ModelAnimation *v28; // r5
  Vec2 v29; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v2 = FIELD_U8(a1, 454);
  v3 = FIELD_U8(a1, 455);
  if ( !FIELD_U8(a1, 337) )
    goto LABEL_11;
  v4 = **(_DWORD **)(FIELD_U32(a1, 328) + 12);
  SkeletalAnim_play(v4, FIELD_U32(a1, 324), (const char **)&dword_60CB7FFC);
  AnimationCtrl_setRepeat((ModelAnimation *)(v4 + 4), 0);
  if ( v2 == 1 )
  {
    v5 = **(_DWORD **)(FIELD_U32(a1, 328) + 12);
    FIELD_U32(v5, 20) = 0x40000000;
    FIELD_U32(v5, 28) |= 2u;
    if ( v3 == 2 )
      goto LABEL_8;
  }
  else
  {
    FIELD_U8(a1, 332) = 1;
    FIELD_U8(a1, 454) = 1;
    if ( v3 == 2 )
    {
LABEL_8:
      v7 = **(_DWORD **)(FIELD_U32(a1, 328) + 28);
      v8 = FIELD_U32(v7, 20);
      ShuAnim_play((_DWORD *)v7, FIELD_U32(a1, 324), *(_DWORD **)(a1 + 448));
      FIELD_U32(v7, 24) = 1065353216;
      AnimationCtrl_setRepeat((ModelAnimation *)(v7 + 4), 0);
      FIELD_U32(v7, 20) = v8;
      FIELD_U32(v7, 28) |= 2u;
      goto LABEL_9;
    }
  }
  if ( !v3 )
  {
    v6 = **(_DWORD **)(FIELD_U32(a1, 328) + 28);
    ShuAnim_play((_DWORD *)v6, FIELD_U32(a1, 324), *(_DWORD **)(a1 + 448));
    FIELD_U32(v6, 24) = 1065353216;
    AnimationCtrl_setRepeat((ModelAnimation *)(v6 + 4), 0);
LABEL_9:
    v3 = 1;
    FIELD_U8(a1, 455) = 1;
  }
  v9 = FIELD_F32(a1, 312);
  v10 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 308);
  position.y = v9;
  mapPositionToScreen(&v29, &position);
  BasicSoundActor1_playSound(v10, "SE_EMY_LIFT_LINE_HPDP_HEAD", (int)&v29, 0);
  v2 = 1;
LABEL_11:
  switch ( v2 )
  {
    case 1:
      result = FIELD_U32(a1, 328);
      v12 = **(_DWORD **)(result + 12);
      if ( (FIELD_U8(v12, 28) & 0x20) != 0 )
      {
        if ( FIELD_U8(a1, 335) )
        {
          SkeletalAnim_play(**(_DWORD **)(result + 12), FIELD_U32(a1, 324), (const char **)&dword_60CB8004);
          AnimationCtrl_setRepeat((ModelAnimation *)(v12 + 4), 0);
          FIELD_U8(a1, 454) = 3;
          v13 = FIELD_F32(a1, 312);
          v14 = Global_BasicSoundActor1;
          position.x = FIELD_F32(a1, 308);
          position.y = v13;
          mapPositionToScreen(&v29, &position);
          v15 = "SE_EMY_LIFT_LINE_BARK";
          return BasicSoundActor1_playSound(v14, v15, (int)&v29, 0);
        }
        FIELD_U8(a1, 454) = 0;
        if ( v3 == 1 )
        {
          v28 = **(ModelAnimation ***)(result + 28);
          ShuAnim_play(v28, FIELD_U32(a1, 324), *(_DWORD **)(a1 + 448));
          FIELD_U32(v28, 0x18) = -1082130432;
          v28 = (ModelAnimation *)((char *)v28 + 4);
          AnimationCtrl_setRepeat(v28, 0);
          sub_6041838C(v28);
          FIELD_U8(a1, 455) = 2;
          return 2;
        }
      }
      return result;
    case 2:
      if ( FIELD_U8(a1, 338) )
      {
        v18 = **(_DWORD **)(FIELD_U32(a1, 328) + 12);
        SkeletalAnim_play(v18, FIELD_U32(a1, 324), (const char **)&dword_60CB800C);
        AnimationCtrl_setRepeat((ModelAnimation *)(v18 + 4), 0);
        goto LABEL_23;
      }
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 168));
      v22 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v22 == (*((int (**)(void))LineFollower_StateID_Fall._.vtable + 2))()
        || (result = FIELD_U16(a1, 452) - 1, (FIELD_U16(a1, 452) = result) == 0) )
      {
        v23 = **(_DWORD **)(FIELD_U32(a1, 328) + 12);
        SkeletalAnim_play(v23, FIELD_U32(a1, 324), (const char **)&dword_60CB8004);
        AnimationCtrl_setRepeat((ModelAnimation *)(v23 + 4), 0);
        FIELD_U8(a1, 454) = 3;
        v24 = FIELD_F32(a1, 312);
        v14 = Global_BasicSoundActor1;
        position.x = FIELD_F32(a1, 308);
        position.y = v24;
        mapPositionToScreen(&v29, &position);
        v15 = "SE_EMY_LIFT_LINE_BARK";
        return BasicSoundActor1_playSound(v14, v15, (int)&v29, 0);
      }
      return result;
    case 3:
      v19 = **(_DWORD **)(FIELD_U32(a1, 328) + 12);
      if ( FIELD_U8(a1, 338) )
      {
        SkeletalAnim_play(v19, FIELD_U32(a1, 324), (const char **)&dword_60CB800C);
        AnimationCtrl_setRepeat((ModelAnimation *)(v19 + 4), 0);
        FIELD_U16(a1, 452) = 630;
LABEL_23:
        result = 4;
        goto LABEL_31;
      }
      result = FIELD_U8(v19, 28);
      if ( (result & 0x20) != 0 )
      {
        SkeletalAnim_play(v19, FIELD_U32(a1, 324), (const char **)&dword_60CB7FEC);
        AnimationCtrl_setRepeat((ModelAnimation *)(v19 + 4), 1);
        FIELD_U16(a1, 452) = 630;
        goto LABEL_30;
      }
      return result;
    case 4:
      v20 = **(_DWORD **)(FIELD_U32(a1, 328) + 12);
      result = FIELD_U8(v20, 28);
      if ( (result & 0x20) != 0 )
      {
        SkeletalAnim_play(
          **(_DWORD **)(FIELD_U32(a1, 328) + 12),
          FIELD_U32(a1, 324),
          (const char **)&dword_60CB7FEC);
        AnimationCtrl_setRepeat((ModelAnimation *)(v20 + 4), 1);
LABEL_30:
        result = 2;
LABEL_31:
        FIELD_U8(a1, 454) = result;
      }
      return result;
    default:
      result = FIELD_U8(a1, 336);
      if ( !FIELD_U8(a1, 336) )
        return result;
      v16 = **(_DWORD **)(FIELD_U32(a1, 328) + 12);
      SkeletalAnim_play(v16, FIELD_U32(a1, 324), (const char **)&dword_60CB7FEC);
      AnimationCtrl_setRepeat((ModelAnimation *)(v16 + 4), 1);
      FIELD_U8(a1, 332) = 1;
      FIELD_U16(a1, 452) = 630;
      FIELD_U8(a1, 454) = 2;
      if ( v3 == 2 )
      {
        v25 = **(_DWORD **)(FIELD_U32(a1, 328) + 28);
        v26 = FIELD_U32(v25, 20);
        ShuAnim_play((_DWORD *)v25, FIELD_U32(a1, 324), *(_DWORD **)(a1 + 448));
        FIELD_U32(v25, 24) = 1065353216;
        AnimationCtrl_setRepeat((ModelAnimation *)(v25 + 4), 0);
        FIELD_U32(v25, 20) = v26;
        FIELD_U32(v25, 28) |= 2u;
      }
      else
      {
        if ( v3 )
          goto LABEL_34;
        v17 = **(_DWORD **)(FIELD_U32(a1, 328) + 28);
        ShuAnim_play((_DWORD *)v17, FIELD_U32(a1, 324), *(_DWORD **)(a1 + 448));
        FIELD_U32(v17, 24) = 1065353216;
        AnimationCtrl_setRepeat((ModelAnimation *)(v17 + 4), 0);
      }
      FIELD_U8(a1, 455) = 1;
LABEL_34:
      v27 = FIELD_F32(a1, 312);
      v14 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 308);
      position.y = v27;
      mapPositionToScreen(&v29, &position);
      v15 = "SE_EMY_LIFT_LINE_ACTIVE";
      return BasicSoundActor1_playSound(v14, v15, (int)&v29, 0);
  }
}
