/* SE_OBJ_KROOM_SHUTTER_OPEN_ref
 * address: 0x600D6468   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_KROOM_SHUTTER_OPEN_ref(float *a1)
{
  int v1; // r4
  float v2; // r1
  float v3; // r0
  _DWORD v5[2]; // [sp+4h] [bp-2Ch] BYREF
  char v6; // [sp+Ch] [bp-24h]
  Vec2 out; // [sp+10h] [bp-20h] BYREF
  Vec3 position; // [sp+18h] [bp-18h] BYREF

  a1[31] = 0.5;
  v5[0] = 15;
  v5[1] = unk_60C26454;
  v6 = 0;
  v1 = Global_BasicSoundActor2;
  v2 = a1[27];
  v3 = a1[28];
  position.x = v2;
  position.y = v3;
  mapPositionToScreen(&out, &position);
  return BasicSoundActor2_play(v1, "SE_OBJ_KROOM_SHUTTER_OPEN", &out.x, (int)v5);
}
