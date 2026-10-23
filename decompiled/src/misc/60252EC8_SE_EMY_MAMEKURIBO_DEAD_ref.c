/* SE_EMY_MAMEKURIBO_DEAD_ref
 * address: 0x60252EC8   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_MAMEKURIBO_DEAD_ref(float *a1, int a2)
{
  float v4; // r1
  int v5; // r6
  int result; // r0
  Vec2 v7; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v4 = a1[28];
  v5 = Global_BasicSoundActor1;
  position.x = a1[27];
  position.y = v4;
  mapPositionToScreen(&v7, &position);
  BasicSoundActor1_playSound(v5, "SE_EMY_MAMEKURIBO_DEAD", (int)&v7, 0);
  result = (*(int (__fastcall **)(float *, _DWORD))(*(_DWORD *)a1 + 204))(a1, FIELD_S8(a2, 1313));
  if ( result == 1 )
    return SE_SYS_NICE_S_ref();
  return result;
}
