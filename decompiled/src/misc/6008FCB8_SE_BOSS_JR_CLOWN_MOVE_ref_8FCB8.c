/* SE_BOSS_JR_CLOWN_MOVE_ref_8FCB8
 * address: 0x6008FCB8   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_CLOWN_MOVE_ref_8FCB8(CollisionActor *a1)
{
  float v2; // s0
  char *v3; // r0
  float x; // r1
  float v5; // s6
  float v6; // s4
  float v7; // s0
  float y; // r0
  Vec2 v10; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  j_ModelWrapper_updateAnims(a1[1]._.aCollider.node4.owner);
  sub_600D17F4(a1);
  ((void (__fastcall *)(CollisionActor *))loc_601005C0)(a1);
  StageActor__accelerateX(&FIELD_U32(a1, 0x0));
  v2 = CollisionActor__handleSpeed(a1);
  sub_601015CC(a1, v2);
  if ( (*(int (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0)._.vtable + 896))(a1) == 4 )
  {
    v3 = &a1[1].collisionMgr[2704];
    if ( !a1[1].collisionMgr[2704] )
    {
      x = FIELD_U32(a1, 0x0).position.x;
      goto LABEL_10;
    }
  }
  else
  {
    (*(void (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0)._.vtable + 900))(a1);
    ((void (__fastcall *)(CollisionActor *))loc_601015AC)(a1);
    a1[1].collisionMgr[2704] = 1;
    v3 = &a1[1].collisionMgr[2704];
  }
  v5 = FIELD_U32(a1, 0x0).position.x;
  v6 = FIELD_F32(dword_60CC6484, 116)
     + (float)((float)(FIELD_F32(dword_60CC6484, 56) + FIELD_F32(dword_60CC6484, 64)) * -0.5);
  FIELD_U32(a1, 0x0).position.x = v5 + v6;
  x = v5 + v6;
  v7 = FIELD_U32(a1, 0x0).speed.x;
  if ( v7 < 0.0 && FIELD_U32(a1, 0x0).maxSpeed.x > 0.0 || v7 > 0.0 && FIELD_U32(a1, 0x0).maxSpeed.x < 0.0 )
    *v3 = 0;
LABEL_10:
  y = FIELD_U32(a1, 0x0).position.y;
  position.x = x;
  position.y = y;
  mapPositionToScreen(&v10, &position);
  return sub_60813574(&a1[1].collisionMgr[2764], "SE_BOSS_JR_CLOWN_MOVE", &v10, 0);
}
