/* SE_EMY_KG_KILLER_SHOT_ref
 * address: 0x6032743C   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_KG_KILLER_SHOT_ref(int a1)
{
  float v2; // r1
  int v3; // r5
  Vec2 v5; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  if ( !FIELD_U16(a1, 6276) )
  {
    v2 = FIELD_F32(a1, 112);
    v3 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v2;
    mapPositionToScreen(&v5, &position);
    BasicSoundActor2_play(v3, "SE_EMY_KG_KILLER_SHOT", &v5.x, 0);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C93BC0);
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
  return Animation_update(**(_DWORD **)(FIELD_U32(a1, 6300) + 28));
}
