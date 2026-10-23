/* SE_OBJ_BOUND_BLOCK_BOUND_ref
 * address: 0x6056E0AC   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_BOUND_BLOCK_BOUND_ref(int a1)
{
  float v2; // r1
  int v3; // r5
  Vec2 v5; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  FIELD_U32(a1, 124) = 1083179008;
  FIELD_U8(a1, 6846) = 1;
  FIELD_U32(a1, 6864) = 2;
  v2 = FIELD_F32(a1, 112);
  v3 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen(&v5, &position);
  BasicSoundActor2_play(v3, "SE_OBJ_BOUND_BLOCK_BOUND", &v5.x, 0);
  FIELD_U32(a1, 6880) = 1;
  return 6880;
}
