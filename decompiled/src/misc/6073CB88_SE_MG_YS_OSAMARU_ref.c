/* SE_MG_YS_OSAMARU_ref
 * address: 0x6073CB88   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_MG_YS_OSAMARU_ref(int a1)
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
  BasicSoundActor2_play(v3, "SE_MG_YS_OSAMARU", &v5.x, 0);
  return ((int (__fastcall *)(int, _DWORD, float, float, float))loc_605EA46C)(a1 + 6064, 0, 5.0, 1.0, 0.0);
}
