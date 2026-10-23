/* SE_OBJ_TSUTA_APPEAR_ref
 * address: 0x605BBB64   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_TSUTA_APPEAR_ref(int a1)
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
  BasicSoundActor2_play(v3, "SE_OBJ_TSUTA_APPEAR", &v5.x, 0);
  FIELD_U8(a1, 6824) = 1;
  FIELD_U8(a1, 6832) = 0;
  FIELD_U32(a1, 6828) = 16;
  return 6828;
}
