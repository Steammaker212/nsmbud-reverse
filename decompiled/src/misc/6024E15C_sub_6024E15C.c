/* sub_6024E15C
 * address: 0x6024E15C   size: 900   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6024E15C(int a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r7
  int ResArchiveById; // r0
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  _DWORD *v9; // r5
  int v10; // r7
  int v11; // r0
  int v12; // r1
  unsigned int v13; // r0
  int v14; // r1
  unsigned int v15; // r0
  signed int v16; // r0
  int v17; // r0
  int v18; // r1
  int v19; // r0
  int v20; // r1
  int v21; // r0
  int v22; // r1
  float v23; // r1
  int v24; // r5
  CollisionMgr_Sensor adjacentSensor; // [sp+4h] [bp-4Ch] BYREF
  CollisionMgr_Sensor a4; // [sp+10h] [bp-40h] BYREF
  CollisionMgr_Sensor a3; // [sp+1Ch] [bp-34h] BYREF
  Vec2 out; // [sp+28h] [bp-28h] BYREF
  Vec3 position; // [sp+30h] [bp-20h] BYREF

  v3 = (_DWORD *)(a1 + 6304);
  v2 = *(_DWORD **)(a1 + 6304);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  LODWORD(a3.a) = &sead__SafeStringBase__vtable;
  LODWORD(a3.b) = "fly";
  sub_60421938(v2, ResArchiveById, (int)&a3);
  v5 = *(_DWORD *)(*v3 + 12);
  v6 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v6 )
    v5 += 4 * v6;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 1);
  v7 = *(_DWORD *)(*v3 + 12);
  v8 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v8 )
    v7 += 4 * v8;
  *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
  if ( v3[8] )
  {
    v10 = a1 + 6308;
    v9 = *(_DWORD **)(a1 + 6308);
    v11 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    LODWORD(a3.a) = &sead__SafeStringBase__vtable;
    LODWORD(a3.b) = "eye_fly";
    sub_60421938(v9, v11, (int)&a3);
    v12 = *(_DWORD *)(FIELD_U32(a1, 6308) + 12);
    v13 = *(_DWORD *)(FIELD_U32(a1, 6308) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 6308) + 8) > v13 )
      v12 += 4 * v13;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v12 + 4), 1);
    v14 = *(_DWORD *)(*(_DWORD *)v10 + 12);
    v15 = *(_DWORD *)(*(_DWORD *)v10 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v10 + 8) > v15 )
      v14 += 4 * v15;
    *(_DWORD *)(*(_DWORD *)v14 + 24) = 1065353216;
  }
  if ( FIELD_U8(a1, 12124) )
  {
    v16 = FIELD_U32(a1, 80);
  }
  else
  {
    v17 = 0;
    FIELD_U8(a1, 12124) = 0;
    v18 = FIELD_S8(a1, 6332);
    if ( v18 < 0 )
      goto LABEL_18;
    if ( (unsigned __int8)v18 < 4u )
      v17 = FIELD_S8(a1, 6332);
    v19 = *(_DWORD *)(PlayerMgr_instance + 4 * v17 + 32);
    if ( v19 )
      v16 = FIELD_F32(v19, 108) < FIELD_F32(a1, 108);
    else
LABEL_18:
      v16 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
    FIELD_U32(a1, 80) = v16;
  }
  v20 = dword_60AF1F60[v16];
  v21 = dword_60AF1F58[v16];
  FIELD_U32(a1, 132) = v20;
  FIELD_U32(a1, 96) = 0;
  FIELD_U32(a1, 156) = 0x40000000;
  FIELD_U32(a1, 160) = v21;
  FIELD_U32(a1, 308) = 0;
  FIELD_U32(a1, 11940) = 0;
  FIELD_U32(a1, 11944) = 1098907648;
  FIELD_U32(a1, 11948) = 1092616192;
  a3.a = -4.0;
  a4.a = -4.0;
  a4.b = 4.0;
  a3.b = 4.0;
  a3.c = -8.0;
  a4.c = 6.0;
  adjacentSensor.c = 12.0;
  adjacentSensor.a = -2.0;
  adjacentSensor.b = 2.0;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &a3, 0, 0);
  v22 = FIELD_U32(a1, 3204) | 0x204;
  FIELD_U32(a1, 3200) |= 0x41800000u;
  FIELD_U32(a1, 3204) = v22;
  CollisionMgr_init((CollisionMgr *)(a1 + 6464), (StateActor *)a1, 0, &a4, &adjacentSensor);
  FIELD_F32(a1, 124) = -4.0 * 0.5;
  if ( FIELD_U8(a1, 6458) || FIELD_U8(a1, 30) || FIELD_U8(a1, 6456) )
  {
    FIELD_U32(a1, 124) = 0;
    FIELD_U8(a1, 6458) = 0;
  }
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 0;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 100) = -1113336054;
  FIELD_U32(a1, 104) = 1023410176;
  v23 = FIELD_F32(a1, 112);
  v24 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v23;
  mapPositionToScreen(&out, &position);
  return BasicSoundActor1_playSound(v24, "SE_EMY_BASABASA", (int)&out, 0);
}
