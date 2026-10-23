/* SE_VOC_KINOPIO_TRAMPLED_ref
 * address: 0x6072F790   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VOC_KINOPIO_TRAMPLED_ref(int a1)
{
  float v2; // r1
  int v3; // r5
  ActiveColliderMgr *v4; // r5
  Vec2 v6; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  FIELD_U32(a1, 124) = 1082340147;
  FIELD_U32(a1, 100) = -1095887749;
  FIELD_U16(a1, 6276) = 1;
  v2 = FIELD_F32(a1, 112);
  v3 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen(&v6, &position);
  BasicSoundActor1_playSound(v3, "SE_VOC_KINOPIO_TRAMPLED", (int)&v6, 0);
  v4 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v4, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromList3(v4, a1 + 188);
  FIELD_U32(a1, 6320) = 0;
  return 6320;
}
