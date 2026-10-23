/* SE_EMY_DOWN_ref
 * address: 0x60034488   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_DOWN_ref(float *a1)
{
  float v2; // r1
  float v3; // r1
  int v4; // r5
  Vec3 v6; // [sp+4h] [bp-2Ch] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF
  Vec3 position; // [sp+18h] [bp-18h] BYREF

  v2 = a1[28];
  v6.x = a1[27];
  v6.y = v2;
  v6.z = 4500.0;
  EffectData_create(21, &v6, 0, 0);
  v3 = a1[28];
  v4 = Global_BasicSoundActor1;
  position.x = a1[27];
  position.y = v3;
  mapPositionToScreen(&out, &position);
  BasicSoundActor1_playSound(v4, "SE_EMY_DOWN", (int)&out, 0);
  return (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 224))(a1);
}
