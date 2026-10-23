/* SE_BOSS_CMN_MAGIC_SHOT_ref
 * address: 0x60099314   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall SE_BOSS_CMN_MAGIC_SHOT_ref(int a1)
{
  float v2; // r1
  int v3; // r5
  unsigned int result; // r0
  Vec2 v5; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1156))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1332))(a1);
  v2 = FIELD_F32(a1, 112);
  v3 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen(&v5, &position);
  BasicSoundActor2_play(v3, "SE_BOSS_CMN_MAGIC_SHOT", &v5.x, 0);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  result = FIELD_U32(a1, 80);
  if ( !result )
  {
    FIELD_U32(a1, 120) = 0x80000000;
    return 0x80000000;
  }
  return result;
}
