/* SE_BOSS_JR_CLOWN_MOVE_ref_901E4
 * address: 0x600901E4   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_CLOWN_MOVE_ref_901E4(CollisionActor *a1)
{
  float x; // s0
  float *v3; // r5
  float v4; // s2
  char *v5; // r0
  float v6; // r1
  float v7; // s6
  float v8; // s4
  float v9; // s0
  float y; // r0
  int result; // r0
  Vec2 v12; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  sub_600D17F4(a1);
  ((void (__fastcall *)(CollisionActor *))loc_601005C0)(a1);
  StageActor__accelerateX(&FIELD_U32(a1, 0x0));
  CollisionActor__handleSpeed(a1);
  x = FIELD_F32(a1, 0x6C);
  v3 = (float *)dword_60CC6484;
  if ( x < FIELD_F32(dword_60CC6484, 112) || x > FIELD_F32(dword_60CC6484, 120) )
  {
    v4 = FIELD_F32(a1, 0x84);
    FIELD_F32(a1, 0x78) = v4;
    FIELD_F32(a1, 0x6C) = v4 + x;
  }
  if ( (*(int (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0) + 896))(a1) == 4 )
  {
    v5 = &a1[1].collisionMgr[2704];
    if ( !a1[1].collisionMgr[2704] )
    {
      v6 = FIELD_F32(a1, 0x6C);
      goto LABEL_13;
    }
  }
  else
  {
    (*(void (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0) + 900))(a1);
    ((void (__fastcall *)(CollisionActor *))loc_601015AC)(a1);
    a1[1].collisionMgr[2704] = 1;
    v5 = &a1[1].collisionMgr[2704];
  }
  v7 = FIELD_F32(a1, 0x6C);
  v8 = v3[29] + (float)((float)(v3[14] + v3[16]) * -0.5);
  FIELD_F32(a1, 0x6C) = v7 + v8;
  v6 = v7 + v8;
  v9 = FIELD_F32(a1, 0x78);
  if ( v9 < 0.0 && FIELD_F32(a1, 0x84) > 0.0 || v9 > 0.0 && FIELD_F32(a1, 0x84) < 0.0 )
    *v5 = 0;
LABEL_13:
  y = FIELD_F32(a1, 0x70);
  position.x = v6;
  position.y = y;
  mapPositionToScreen(&v12, &position);
  sub_60813574(&a1[1].collisionMgr[2764], "SE_BOSS_JR_CLOWN_MOVE", &v12, 0);
  result = (unsigned __int8)a1[2].collisionMgr[2486];
  if ( !a1[2].collisionMgr[2486] )
    return (*(int (__fastcall **)(CollisionActor *, void *))(FIELD_U32(a1, 0x0) + 192))(a1, &unk_60C82300);
  return result;
}
