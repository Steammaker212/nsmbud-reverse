/* SE_PLY_YOSHI_LAY_EGG_ref
 * address: 0x605BA190   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall SE_PLY_YOSHI_LAY_EGG_ref(int a1, float *a2, int a3, int a4, int a5)
{
  float v7; // r11
  float v8; // r9
  float v9; // s16
  int v10; // r7
  int v11; // r2
  ActorBuildInfo position; // [sp+4h] [bp-64h] BYREF
  Vec2 out; // [sp+30h] [bp-38h] BYREF

  v7 = a2[1];
  v8 = a2[2];
  v9 = *a2 + flt_60AF2080[a4 & 1];
  v10 = Global_BasicSoundActor2;
  *(float *)&position.settings1 = v9;
  *(float *)&position.settings2 = v7;
  mapPositionToScreen(&out, (Vec3 *)&position);
  BasicSoundActor2_play(v10, "SE_PLY_YOSHI_LAY_EGG", &out.x, 0);
  memset(&position.settings2, 0, 36);
  v11 = a5 << 20;
  if ( a5 == -1 )
    v11 = 15728640;
  position.settings1 = v11 | (16 * a4) | dword_60AF2A44[a3] | 0x1000;
  position.profile = Profile__get(0x32Bu);
  position.position.x = v9;
  position.position.y = v7;
  position.position.z = v8;
  position.field_20 = 0;
  position.eventId1 = 0;
  position.eventId2 = 0;
  position.field_28 = 0;
  return ActorMgr__create((void *)ActorMgr__instance, &position, 1);
}
