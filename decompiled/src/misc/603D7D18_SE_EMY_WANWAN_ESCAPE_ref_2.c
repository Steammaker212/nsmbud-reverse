/* SE_EMY_WANWAN_ESCAPE_ref_2
 * address: 0x603D7D18   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_WANWAN_ESCAPE_ref_2(int a1)
{
  int v2; // r0
  int v3; // r0
  float v4; // r1
  int v5; // r5
  ActiveColliderMgr *v6; // r6
  ActiveColliderMgr *v7; // r5
  Vec2 v9; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v2 = FIELD_U32(a1, 80) ^ 1;
  FIELD_U32(a1, 80) = v2;
  v3 = dword_60AF1F00[v2];
  FIELD_U32(a1, 120) = v3;
  FIELD_U32(a1, 124) = 1077936128;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = v3;
  FIELD_U32(a1, 136) = -1061158912;
  FIELD_U32(a1, 140) = 0;
  v4 = FIELD_F32(a1, 112);
  v5 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v4;
  mapPositionToScreen(&v9, &position);
  BasicSoundActor1_playSound(v5, "SE_EMY_WANWAN_ESCAPE", (int)&v9, 0);
  FIELD_U32(a1, 164) = 0;
  FIELD_U32(a1, 116) = 1167867904;
  v6 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 18312));
  ActiveColldierMgr_removeFromCreateList(v6, (ActiveCollider *)(a1 + 18312));
  ActiveColldierMgr_removeFromList3(v6, a1 + 18312);
  if ( !FIELD_U8(a1, 11815) )
  {
    FIELD_U8(a1, 11815) = 1;
    v7 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
    ActiveColldierMgr_removeFromCreateList(v7, (ActiveCollider *)(a1 + 188));
    ActiveColldierMgr_removeFromList3(v7, a1 + 188);
  }
  FIELD_U8(a1, 11812) = 0;
  return 11812;
}
