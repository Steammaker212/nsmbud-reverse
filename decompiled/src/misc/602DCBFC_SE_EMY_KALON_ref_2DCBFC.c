/* SE_EMY_KALON_ref_2DCBFC
 * address: 0x602DCBFC   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_KALON_ref_2DCBFC(float *a1, int a2)
{
  unsigned int v4; // r0
  int *v5; // r6
  float v6; // r1
  int v7; // r7
  int result; // r0
  Vec2 v9; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v4 = FIELD_S8(a2, 84);
  LODWORD(position.x) = 22;
  v5 = sub_60002B90(v4, unk_60C263CC);
  v6 = a1[28];
  v7 = Global_BasicSoundActor1;
  position.x = a1[27];
  position.y = v6;
  mapPositionToScreen(&v9, &position);
  BasicSoundActor1_playSound(v7, "SE_EMY_KALON", (int)&v9, (int)v5);
  result = (*(int (__fastcall **)(float *, _DWORD))(*(_DWORD *)a1 + 204))(a1, FIELD_S8(a2, 1313));
  if ( result == 1 )
    return SE_SYS_NICE_S_ref();
  return result;
}
