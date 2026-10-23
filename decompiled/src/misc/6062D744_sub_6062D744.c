/* sub_6062D744
 * address: 0x6062D744   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6062D744(int a1)
{
  int *v2; // r7
  float *v3; // r6
  int v4; // r5
  float v5; // r1
  const char *v6; // r1
  float v7; // r0
  int v8; // r0
  Vec2 v10; // [sp+0h] [bp-30h] BYREF
  Vec3 position; // [sp+8h] [bp-28h] BYREF

  v2 = (int *)(a1 + 6240);
  v3 = (float *)(a1 + 108);
  v4 = Global_BasicSoundActor2;
  v5 = FIELD_F32(a1, 112);
  if ( FIELD_S32(a1, 6240) < 3 )
  {
    position.x = FIELD_F32(a1, 108);
    position.y = v5;
    mapPositionToScreen(&v10, &position);
    v6 = "SE_BOSS_KOOPA_FIRE_DISAPP2";
  }
  else
  {
    position.x = FIELD_F32(a1, 108);
    position.y = v5;
    mapPositionToScreen(&v10, &position);
    v6 = "SE_BOSS_KOOPA_L_FIRE_DISAPP2";
  }
  BasicSoundActor2_play(v4, v6, &v10.x, 0);
  v7 = *v3;
  LODWORD(position.y) = *(v2 - 1532);
  position.x = v7;
  position.z = 4500.0;
  if ( *v2 >= 3 )
    v8 = 959;
  else
    v8 = 957;
  EffectData_create(v8, &position, 0, a1 + 144);
  FIELD_U8(a1, 19) = 1;
  return 1;
}
