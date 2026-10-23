/* SE_PLY_YOSHI_EGG_APPEAR_ref
 * address: 0x605B5304   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall SE_PLY_YOSHI_EGG_APPEAR_ref(float *a1, int a2, int a3)
{
  float v3; // r11
  float v4; // r6
  int v7; // r7
  float v9; // [sp+4h] [bp-5Ch]
  ActorBuildInfo position; // [sp+8h] [bp-58h] BYREF
  Vec2 out; // [sp+34h] [bp-2Ch] BYREF

  v3 = a1[27];
  v4 = a1[28];
  v9 = a1[29];
  if ( a3 == 2 )
    v4 = v4 + 16.0;
  position.settings1 = (int)a1[27];
  *(float *)&position.settings2 = v4;
  v7 = Global_BasicSoundActor2;
  mapPositionToScreen(&out, (Vec3 *)&position);
  BasicSoundActor2_play(v7, "SE_PLY_YOSHI_EGG_APPEAR", &out.x, 0);
  memset(&position.settings2, 0, 36);
  position.settings1 = (16 * a3) | (a2 << 12);
  position.profile = Profile__get(0x32Bu);
  position.position.x = v3;
  position.position.y = v4;
  position.position.z = v9;
  position.field_20 = 0;
  position.eventId1 = 0;
  position.eventId2 = 0;
  position.field_28 = 0;
  return ActorMgr__create((void *)ActorMgr__instance, &position, 1);
}
