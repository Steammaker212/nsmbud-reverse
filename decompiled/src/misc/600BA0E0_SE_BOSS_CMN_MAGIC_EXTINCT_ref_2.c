/* SE_BOSS_CMN_MAGIC_EXTINCT_ref_2
 * address: 0x600BA0E0   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_CMN_MAGIC_EXTINCT_ref_2(int a1)
{
  float v2; // r1
  int v3; // r5
  Vec2 v5; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v2 = FIELD_F32(a1, 112);
  v3 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen(&v5, &position);
  BasicSoundActor2_play(v3, "SE_BOSS_CMN_MAGIC_EXTINCT", &v5.x, 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 280))(a1);
  FIELD_U8(a1, 19) = 1;
  return 1;
}
