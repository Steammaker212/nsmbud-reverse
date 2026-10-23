/* SE_BOSS_JR_CLOWN_MOVE_ref_8D580
 * address: 0x6008D580   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_CLOWN_MOVE_ref_8D580(int a1)
{
  float v2; // r1
  Vec2 v4; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6304));
  ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 112, FIELD_F32(a1, 6812), 0.1, 6.0, 0.1);
  v2 = FIELD_F32(a1, 112);
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen(&v4, &position);
  sub_60813574(a1 + 9476, "SE_BOSS_JR_CLOWN_MOVE", &v4, 0);
  return ((int (__fastcall *)(int))loc_601005C0)(a1);
}
