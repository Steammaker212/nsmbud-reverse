/* SE_OBJ_KROOM_SHUTTER_CLOSE_ref
 * address: 0x600D62F8   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (*__fastcall SE_OBJ_KROOM_SHUTTER_CLOSE_ref(int a1))()
{
  float v2; // r1
  int v3; // r5
  _DWORD v5[2]; // [sp+4h] [bp-2Ch] BYREF
  char v6; // [sp+Ch] [bp-24h]
  Vec2 out; // [sp+10h] [bp-20h] BYREF
  Vec3 position; // [sp+18h] [bp-18h] BYREF

  FIELD_U32(a1, 100) = -1103269724;
  FIELD_U32(a1, 136) = -1054867456;
  v5[0] = 15;
  v5[1] = unk_60C26450;
  v6 = 0;
  v2 = FIELD_F32(a1, 112);
  v3 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen(&out, &position);
  BasicSoundActor2_play(v3, "SE_OBJ_KROOM_SHUTTER_CLOSE", &out.x, (int)v5);
  FIELD_U32(a1, 992) = sub_600D6970;
  return sub_600D6970;
}
