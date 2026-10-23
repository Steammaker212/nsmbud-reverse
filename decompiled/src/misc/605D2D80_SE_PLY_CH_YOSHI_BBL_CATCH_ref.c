/* SE_PLY_CH_YOSHI_BBL_CATCH_ref
 * address: 0x605D2D80   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_CH_YOSHI_BBL_CATCH_ref(int a1)
{
  float v2; // r1
  int v3; // r5
  Vec2 v5; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v2 = FIELD_F32(a1, 112);
  v3 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen(&v5, &position);
  BasicSoundActor2_play(v3, "SE_PLY_CH_YOSHI_BBL_CATCH", &v5.x, 0);
  FIELD_U32(a1, 328) = 0;
  FIELD_F32(a1, 820) = sqrtf(
                           (float)((float)(FIELD_F32(a1, 124) * FIELD_F32(a1, 124))
                                 + (float)(FIELD_F32(a1, 120) * FIELD_F32(a1, 120)))
                         + (float)(FIELD_F32(a1, 128) * FIELD_F32(a1, 128)));
  FIELD_U32(a1, 808) = 1065353216;
  FIELD_U8(a1, 788) = 1;
  FIELD_U8(a1, 812) = 2;
  return 2;
}
