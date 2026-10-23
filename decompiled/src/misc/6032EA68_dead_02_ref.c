/* dead_02_ref
 * address: 0x6032EA68   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall dead_02_ref(int a1)
{
  ActiveColliderMgr *v2; // r6
  _DWORD *v3; // r5
  int v4; // r7
  int ResArchiveById; // r0
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  _DWORD *v10; // r5
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  float v15; // r1
  int v16; // r5
  Vec2 v18; // [sp+0h] [bp-30h] BYREF
  Vec3 position; // [sp+8h] [bp-28h] BYREF

  sub_602A7CEC((char *)a1);
  v2 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6760));
  ActiveColldierMgr_removeFromCreateList(v2, (ActiveCollider *)(a1 + 6760));
  ActiveColldierMgr_removeFromList3(v2, a1 + 6760);
  v4 = a1 + 6300;
  v3 = *(_DWORD **)(a1 + 6300);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  LODWORD(position.x) = &sead__SafeStringBase__vtable;
  LODWORD(position.y) = "dead_02";
  sub_60421938(v3, ResArchiveById, (int)&position);
  v6 = *(_DWORD *)(FIELD_U32(a1, 6300) + 12);
  v7 = *(_DWORD *)(FIELD_U32(a1, 6300) + 68);
  if ( *(_DWORD *)(FIELD_U32(a1, 6300) + 8) > v7 )
    v6 += 4 * v7;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v6 + 4), 0);
  v8 = *(_DWORD *)(*(_DWORD *)v4 + 12);
  v9 = *(_DWORD *)(*(_DWORD *)v4 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v9 )
    v8 += 4 * v9;
  *(_DWORD *)(*(_DWORD *)v8 + 24) = 1065353216;
  v10 = **(_DWORD ***)(*(_DWORD *)v4 + 28);
  v11 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  LODWORD(position.x) = &sead__SafeStringBase__vtable;
  LODWORD(position.y) = "dead_02";
  ShuAnim_play(v10, v11, (int)&position);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v4 + 28) + 4), 0);
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v4 + 28) + 24) = 1065353216;
  EffectData_create(695, (Vec3 *)(a1 + 108), 0, 0);
  FIELD_U8(a1, 6680) = 1;
  FIELD_U8(a1, 6316) = 1;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  v12 = FIELD_U32(a1, 6108);
  FIELD_U32(a1, 120) = FIELD_U32(a1, 6104);
  FIELD_U32(a1, 124) = v12;
  FIELD_U32(a1, 128) = 0;
  v13 = FIELD_U32(a1, 6112);
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = v13;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 6284) = FIELD_U32(a1, 6128);
  FIELD_U32(a1, 104) = 0;
  FIELD_U32(a1, 100) = FIELD_U32(a1, 6116);
  v14 = FIELD_U32(a1, 160) >> 31;
  FIELD_U32(a1, 80) = v14;
  FIELD_U32(a1, 160) = Enemy_CommonRotations[v14];
  v15 = FIELD_F32(a1, 112);
  v16 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v15;
  mapPositionToScreen(&v18, &position);
  return BasicSoundActor1_playSound(v16, "SE_EMY_HUHU_EXTINCT", (int)&v18, 0);
}
