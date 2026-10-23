/* SE_BOSS_KOOPA_L_FIRE_CONTINUE_ref_2
 * address: 0x6007E154   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_BOSS_KOOPA_L_FIRE_CONTINUE_ref_2(CollisionActor *a1)
{
  float y; // r1
  int id; // r5
  int v4; // r6
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  CollisionActor__handleSpeed(a1);
  y = FIELD_U32(a1, 0x0).position.y;
  id = FIELD_U32(a1, 0x0)._.id;
  v4 = Global_BasicSoundActor1;
  position.x = FIELD_U32(a1, 0x0).position.x;
  position.y = y;
  mapPositionToScreen(&out, &position);
  SE_EMY_LIFT_LINE_MOVE_ref_2(v4, "SE_BOSS_KOOPA_L_FIRE_CONTINUE", id, &out, 0, 0);
  CollisionMgr_process(FIELD_U8(a1, 0x288));
  SE_BOSS_KOOPA_L_FIRE_DISAPP_ref_802A0(a1);
  StageActor__cullCheck(&FIELD_U32(a1, 0x0), 4);
}
