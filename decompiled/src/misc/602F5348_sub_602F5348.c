/* sub_602F5348
 * address: 0x602F5348   size: 832   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F5348(int a1)
{
  int *v2; // r7
  int v3; // r6
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r5
  float v13; // r0
  Vec2 v15; // [sp+0h] [bp-38h] BYREF
  Vec3 position; // [sp+8h] [bp-30h] BYREF

  LODWORD(position.x) = &sead__SafeStringBase__vtable;
  LODWORD(position.y) = "walk";
  v2 = (int *)(a1 + 6300);
  v3 = a1 + 6304;
  sub_60421938(*(_DWORD **)(a1 + 6304), FIELD_U32(a1, 6300), (int)&position);
  v4 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v5 )
    v4 += 4 * v5;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 1);
  v6 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v7 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v7 )
    v6 += 4 * v7;
  *(_DWORD *)(*(_DWORD *)v6 + 24) = 0x40000000;
  LODWORD(position.x) = &sead__SafeStringBase__vtable;
  LODWORD(position.y) = "wakeUp";
  TexAnim_play(FIELD_U32(a1, 6308), *v2, &position);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6308) + 4), 0);
  v8 = FIELD_U32(a1, 6308);
  FIELD_U32(v8, 20) = 0;
  FIELD_U32(v8, 28) |= 2u;
  *(_DWORD *)(FIELD_U32(a1, 6308) + 24) = 1065353216;
  LODWORD(position.x) = &sead__SafeStringBase__vtable;
  LODWORD(position.y) = "wakeUp";
  ShuAnim_play(*(_DWORD **)(a1 + 6312), *v2, (int)&position);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6312) + 4), 0);
  v9 = FIELD_U32(a1, 6312);
  FIELD_U32(v9, 20) = 0;
  FIELD_U32(v9, 28) |= 2u;
  *(_DWORD *)(FIELD_U32(a1, 6312) + 24) = 1065353216;
  LODWORD(position.x) = &sead__SafeStringBase__vtable;
  LODWORD(position.y) = "walk";
  sub_6045195C(FIELD_U32(a1, 6316), *v2, &position);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6316) + 4), 0);
  v10 = FIELD_U32(a1, 6316);
  FIELD_U32(v10, 20) = 0;
  FIELD_U32(v10, 28) |= 2u;
  *(_DWORD *)(FIELD_U32(a1, 6316) + 24) = 1065353216;
  v11 = FIELD_U32(a1, 6336);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = v11;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 80) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 100) = -1098068787;
  FIELD_U32(a1, 156) = -536870912;
  FIELD_U32(a1, 304) = 0;
  FIELD_U32(a1, 308) = 1090519040;
  FIELD_U32(a1, 312) = 1090519040;
  FIELD_U32(a1, 316) = 1090519040;
  FIELD_U32(a1, 320) = 0;
  FIELD_U32(a1, 6688) = 1092616192;
  FIELD_U32(a1, 6692) = 1094713344;
  FIELD_U32(a1, 6680) = 0;
  FIELD_U32(a1, 6684) = 1094713344;
  FIELD_U32(a1, 6696) = 0;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AFEEE8, 2);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AFEEF4, 3);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AFEF00, 0);
  position.y = 8.0;
  position.x = 3.0;
  position.z = -8.0;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), (CollisionMgr_Sensor *)&position, 1);
  FIELD_U32(a1, 6392) = 3;
  FIELD_U32(a1, 624) = a1 + 6412;
  FIELD_U32(a1, 6440) = 1;
  FIELD_U32(a1, 6244) = 1;
  FIELD_U32(a1, 6148) &= ~0x200u;
  v12 = Global_BasicSoundActor1;
  v13 = FIELD_F32(a1, 112);
  position.x = FIELD_F32(a1, 108);
  position.y = v13;
  mapPositionToScreen(&v15, &position);
  BasicSoundActor1_playSound(v12, "SE_EMY_IGAKURIBO_BURN", (int)&v15, 0);
  position.x = FIELD_F32(a1, 6364);
  position.y = FIELD_F32(a1, 6368);
  position.z = 4500.0;
  return EffectData_create(281, &position, 0, 0);
}
