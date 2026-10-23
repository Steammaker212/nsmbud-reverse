/* SE_PLY_CH_YOSHI_HIT_ENEMY_ref_2
 * address: 0x605D69E4   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_CH_YOSHI_HIT_ENEMY_ref_2(int a1)
{
  float v2; // r1
  int v3; // r5
  int result; // r0
  int v5; // r2
  Vec2 v6; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  FIELD_U32(a1, 6260) |= 0x800100u;
  ((void (__fastcall *)(int, int, float, float, float))loc_605EA46C)(a1 + 6064, 21, 3.0, 2.0, 0.0);
  FIELD_U32(a1, 6240) |= 0x100u;
  if ( FIELD_U32(a1, 8000) != 1 )
  {
    v2 = FIELD_F32(a1, 112);
    v3 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v2;
    mapPositionToScreen(&v6, &position);
    BasicSoundActor2_play(v3, "SE_PLY_CH_YOSHI_HIT_ENEMY", &v6.x, 0);
  }
  result = FIELD_U32(a1, 80);
  v5 = 0x40000000;
  FIELD_U32(a1, 156) = 0;
  if ( result == 1 )
    v5 = -1073741824;
  FIELD_U32(a1, 160) = v5;
  FIELD_U32(a1, 164) = 0;
  return result;
}
