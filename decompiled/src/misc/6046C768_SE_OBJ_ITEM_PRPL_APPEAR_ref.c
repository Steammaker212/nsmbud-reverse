/* SE_OBJ_ITEM_PRPL_APPEAR_ref
 * address: 0x6046C768   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_ITEM_PRPL_APPEAR_ref(int a1)
{
  int v1; // r4
  float v2; // r1
  float v3; // r0
  Vec2 v5; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  FIELD_U32(a1, 132) = 1065353216;
  FIELD_U32(a1, 136) = -1090519040;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 6840) = 1;
  FIELD_U32(a1, 100) = dword_60C9D67C;
  FIELD_U32(a1, 6848) = 32;
  FIELD_U32(a1, 116) = 1165623296;
  FIELD_U32(a1, 6220) = 8;
  FIELD_U32(a1, 6228) = 0;
  FIELD_U32(a1, 6224) = 0;
  FIELD_U32(a1, 6864) = 2;
  FIELD_U8(a1, 6856) = 0;
  v1 = Global_BasicSoundActor2;
  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  position.x = v2;
  position.y = v3;
  mapPositionToScreen(&v5, &position);
  return BasicSoundActor2_play(v1, "SE_OBJ_ITEM_PRPL_APPEAR", &v5.x, 0);
}
