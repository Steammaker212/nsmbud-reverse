/* SE_VOC_KINOPIO_LALA_ref
 * address: 0x603782D0   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VOC_KINOPIO_LALA_ref(int a1)
{
  float v2; // r1
  int v3; // r5
  Vec2 v5; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  (*(void (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 6100) + 4) + 84))(
    *(_DWORD *)(FIELD_U32(a1, 6100) + 4),
    194,
    1.0,
    0.0,
    0.0);
  v2 = FIELD_F32(a1, 112);
  v3 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen(&v5, &position);
  return BasicSoundActor1_playSound(v3, "SE_VOC_KINOPIO_LALA", (int)&v5, 0);
}
