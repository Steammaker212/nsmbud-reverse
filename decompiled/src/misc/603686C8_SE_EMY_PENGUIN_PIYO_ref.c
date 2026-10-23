/* SE_EMY_PENGUIN_PIYO_ref
 * address: 0x603686C8   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_PENGUIN_PIYO_ref(int a1)
{
  int v2; // r0
  int v3; // r7
  float v4; // s0
  char v5; // r0
  float v6; // r1
  int v7; // r5
  int v8; // r6
  int v9; // r0
  int v10; // r1
  Vec2 out; // [sp+8h] [bp-30h] BYREF
  Vec3 position; // [sp+10h] [bp-28h] BYREF

  FIELD_U32(a1, 104) = 1050673152;
  v2 = FIELD_U32(a1, 80);
  position.x = 1.0062e-35;
  v3 = 0;
  if ( sub_6083246C((int *)(a1 + 160), &dword_60C95E20[v2 + 2], (signed int *)&position) == 1 )
  {
    FIELD_U32(a1, 6528) = 0;
    StageActor__accelerateX((StageActor *)a1);
    v3 = 1;
  }
  CollisionActor__handleGravity((CollisionActor *)a1);
  v4 = CollisionActor__handleSpeed((CollisionActor *)a1);
  sub_6036A6A8(a1, v4);
  v5 = FIELD_U8(a1, 6312);
  position.x = 0.0;
  if ( (v5 & 1) != 0 )
    LODWORD(position.x) = sub_6014C4A4(a1 + 648) >> 1;
  out.x = 2.351e-38;
  moveValueTo((int *)(a1 + 164), (int *)&position, (int *)&out);
  if ( (FIELD_U8(a1, 6312) & 1) != 0 )
  {
    v6 = FIELD_F32(a1, 112);
    v7 = FIELD_U32(a1, 8);
    v8 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v6;
    mapPositionToScreen(&out, &position);
    j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v8, "SE_EMY_PENGUIN_PIYO", v7, &out, 0);
    FIELD_U32(a1, 124) = 0;
    if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    {
      if ( FIELD_U8(dword_60C9CF0C, 1361) )
        FIELD_U32(a1, 124) = 1071644672;
    }
  }
  if ( v3 == 1 )
  {
    v9 = FIELD_U32(a1, 80);
    v10 = a1 + 648;
    if ( ((*(_DWORD *)(a1 + 648 + 4 * ((v9 + 18) >> 5) + 2224) & (1 << ((v9 + 18) & 0x1F))) != 0
       || (*(_DWORD *)(v10 + 4 * ((v9 + 22) >> 5) + 2224) & (1 << ((v9 + 22) & 0x1F))) != 0)
      && (*(_DWORD *)(v10 + 4 * ((v9 + 28) >> 5) + 2224) & (1 << ((v9 + 28) & 0x1F))) == 0 )
    {
      FIELD_U32(a1, 6528) = 1;
      FIELD_U32(a1, 120) = 0;
      FIELD_U32(a1, 80) = v9 ^ 1;
      FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
    }
  }
  return j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
}
