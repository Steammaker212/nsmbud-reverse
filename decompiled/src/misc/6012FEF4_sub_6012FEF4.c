/* sub_6012FEF4
 * address: 0x6012FEF4   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6012FEF4(int a1)
{
  int v2; // r6
  int v3; // r6
  int ResArchiveById; // r0
  int v5; // r5
  float v6; // r0
  float v7; // r1
  Vec2 v9; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  LODWORD(position.x) = &sead__SafeStringBase__vtable;
  LODWORD(position.y) = "move_sign";
  v2 = a1 + 6104;
  sub_60421AD4(FIELD_U32(a1, 6104));
  v3 = **(_DWORD **)(*(_DWORD *)v2 + 20);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  TexAnim_play(v3, ResArchiveById, &position);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  v5 = Global_BasicSoundActor1;
  v6 = FIELD_F32(a1, 112);
  position.x = FIELD_F32(a1, 108);
  position.y = v6;
  mapPositionToScreen(&v9, &position);
  BasicSoundActor1_playSound(v5, "SE_VOC_WOG_ATTACK_SIGN", (int)&v9, 0);
  FIELD_U32(a1, 80) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  v7 = FIELD_F32(a1, 6224);
  position.x = FIELD_F32(a1, 108);
  position.y = v7;
  return TileMgr_splashRelated(TileMgr_instance, &position, 31);
}
