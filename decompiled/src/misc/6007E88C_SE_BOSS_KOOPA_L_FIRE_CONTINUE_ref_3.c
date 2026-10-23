/* SE_BOSS_KOOPA_L_FIRE_CONTINUE_ref_3
 * address: 0x6007E88C   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_BOSS_KOOPA_L_FIRE_CONTINUE_ref_3(CollisionActor *a1)
{
  float y; // r1
  int id; // r5
  int v4; // r6
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  CollisionActor__handleSpeed(a1);
  y = FIELD_F32(a1, 0x70);
  id = FIELD_U32(a1, 0x8);
  v4 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 0x6C);
  position.y = y;
  mapPositionToScreen(&out, &position);
  SE_EMY_LIFT_LINE_MOVE_ref_2(v4, "SE_BOSS_KOOPA_L_FIRE_CONTINUE", id, &out, 1, 0);
  CollisionMgr_process(FIELD_U8(a1, 0x288));
  SE_BOSS_KOOPA_L_FIRE_DISAPP_ref_802A0(a1);
  StageActor__cullCheck(&FIELD_U32(a1, 0x0), 4);
}
