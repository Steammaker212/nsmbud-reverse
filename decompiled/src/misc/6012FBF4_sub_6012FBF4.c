/* sub_6012FBF4
 * address: 0x6012FBF4   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6012FBF4(int a1)
{
  int v1; // r4
  int v2; // r6
  int v3; // r6
  int ResArchiveById; // r0
  float v5; // t1
  float v6; // r1
  float v7; // r1
  float v8; // r1
  float v9; // r0
  int v10; // r5
  float v11; // r0
  int v12; // r5
  Vec3 v14; // [sp+4h] [bp-3Ch] BYREF
  Vec2 out; // [sp+10h] [bp-30h] BYREF
  Vec3 position; // [sp+18h] [bp-28h] BYREF

  v1 = a1;
  LODWORD(v14.x) = &sead__SafeStringBase__vtable;
  LODWORD(v14.y) = "appear";
  v2 = a1 + 6104;
  sub_60421AD4(FIELD_U32(a1, 6104));
  v3 = **(_DWORD **)(*(_DWORD *)v2 + 20);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(v1 + 12), 0);
  TexAnim_play(v3, ResArchiveById, &v14);
  FIELD_U32(v1, 124) = 0x40000000;
  FIELD_U32(v1, 100) = 0;
  FIELD_U32(v1, 6220) = 1107296256;
  FIELD_U32(v1, 6228) = 15;
  v5 = FIELD_F32(v1, 6224);
  v1 += 6224;
  v14.x = *(float *)(v1 - 6116);
  v14.y = v5;
  v14.z = 4500.0;
  EffectData_create(1009, &v14, 0, 0);
  v6 = *(float *)v1;
  position.x = *(float *)(v1 - 6116);
  position.y = v6;
  TileMgr_splashRelated(TileMgr_instance, &position, 30);
  v7 = *(float *)v1;
  position.x = *(float *)(v1 - 6116) + -16.0;
  position.y = v7;
  TileMgr_splashRelated(TileMgr_instance, &position, 15);
  v8 = *(float *)v1;
  position.x = *(float *)(v1 - 6116) + 16.0;
  position.y = v8;
  TileMgr_splashRelated(TileMgr_instance, &position, 15);
  v9 = *(float *)(v1 - 6112);
  position.x = *(float *)(v1 - 6116);
  v10 = Global_BasicSoundActor1;
  position.y = v9;
  mapPositionToScreen(&out, &position);
  BasicSoundActor1_playSound(v10, "SE_BOSS_WOOGAN_APPEAR", (int)&out, 0);
  v11 = *(float *)(v1 - 6112);
  v12 = Global_BasicSoundActor1;
  position.x = *(float *)(v1 - 6116);
  position.y = v11;
  mapPositionToScreen(&out, &position);
  return BasicSoundActor1_playSound(v12, "SE_VOC_WOG_APPEAR", (int)&out, 0);
}
