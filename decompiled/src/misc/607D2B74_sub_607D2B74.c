/* sub_607D2B74
 * address: 0x607D2B74   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D2B74(int a1)
{
  int v2; // r0
  float v3; // r1
  int v4; // r5
  const char *v5; // r1
  float v6; // r1
  ActiveColliderMgr *v7; // r5
  Vec2 v9; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v2 = FIELD_U32(a1, 648);
  if ( v2 == 1 )
  {
    EffectData_create(9, (Vec3 *)(a1 + 108), 0, 0);
    v6 = FIELD_F32(a1, 112);
    v4 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v6;
    mapPositionToScreen(&v9, &position);
    v5 = "SE_OBJ_PNGN_ICEBALL_DISAPP";
    goto LABEL_5;
  }
  if ( !v2 )
  {
    EffectData_create(4, (Vec3 *)(a1 + 108), 0, 0);
    v3 = FIELD_F32(a1, 112);
    v4 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v3;
    mapPositionToScreen(&v9, &position);
    v5 = "SE_OBJ_FIREBALL_DISAPP";
LABEL_5:
    BasicSoundActor2_play(v4, v5, &v9.x, 0);
  }
  v7 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v7, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromList3(v7, a1 + 188);
  FIELD_U8(a1, 19) = 1;
  return 1;
}
