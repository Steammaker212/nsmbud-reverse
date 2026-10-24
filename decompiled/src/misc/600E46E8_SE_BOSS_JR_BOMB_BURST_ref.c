/* SE_BOSS_JR_BOMB_BURST_ref
 * address: 0x600E46E8   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SE_BOSS_JR_BOMB_BURST_ref(Vec3 *a1)
{
  Vec3 *v2; // r5
  float y; // r1
  int v4; // r6
  int v5; // r0
  ActiveColliderMgr *v6; // r5
  _DWORD v8[2]; // [sp+18h] [bp-18h] BYREF
  char v9; // [sp+20h] [bp-10h]
  Vec3 v10; // [sp+24h] [bp-Ch] BYREF
  Vec2 v11; // [sp+30h] [bp+0h] BYREF
  Vec3 position; // [sp+38h] [bp+8h] BYREF

  v2 = a1 + 9;
  y = a1[9].y;
  v10.x = FIELD_F32(a1 + (9) * 12, 0x0);
  v10.y = y;
  v10.z = 4500.0;
  position.x = v10.x;
  position.y = y;
  v8[0] = 15;
  v8[1] = unk_60C263AC;
  v9 = 0;
  v4 = Global_BasicSoundActor2;
  mapPositionToScreen(&v11, &position);
  BasicSoundActor2_play(v4, "SE_BOSS_JR_BOMB_BURST", &v11.x, (int)v8);
  if ( v2[539].x >= 4.25 )
    v5 = 1207;
  else
    v5 = 16;
  EffectData_create(v5, &v10, 0, 0);
  LightSource_update1((LightSource *)&a1[589], 38, v2, 0, 0, 0, 0, 0, 0);
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)&a1[508].z);
  v6 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)&FIELD_F32(a1 + (549) * 12, 0x4));
  ActiveColldierMgr_removeFromCreateList(v6, (ActiveCollider *)&FIELD_F32(a1 + (549) * 12, 0x4));
  ActiveColldierMgr_removeFromList3(v6, (int)&FIELD_F32(a1 + (549) * 12, 0x4));
  HIBYTE(a1[44].y) = 0;
  LODWORD(a1[547].y) = 10;
  return 6568;
}
