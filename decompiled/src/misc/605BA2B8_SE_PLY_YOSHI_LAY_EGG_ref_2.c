/* SE_PLY_YOSHI_LAY_EGG_ref_2
 * address: 0x605BA2B8   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall SE_PLY_YOSHI_LAY_EGG_ref_2(int a1, float *a2, int a3, int a4, int a5, int a6)
{
  float v8; // r11
  float v9; // r9
  float v10; // s16
  int v11; // r7
  int v12; // r2
  ActorBuildInfo position; // [sp+4h] [bp-64h] BYREF
  Vec2 out; // [sp+30h] [bp-38h] BYREF

  v8 = a2[1];
  v9 = a2[2];
  v10 = *a2 + flt_60AF2080[a4 & 1];
  v11 = Global_BasicSoundActor2;
  *(float *)&position.settings1 = v10;
  *(float *)&position.settings2 = v8;
  mapPositionToScreen(&out, (Vec3 *)&position);
  BasicSoundActor2_play(v11, "SE_PLY_YOSHI_LAY_EGG", &out.x, 0);
  memset(&position.settings2, 0, 36);
  v12 = a5 << 20;
  if ( a5 == -1 )
    v12 = 15728640;
  position.settings1 = (16 * a4) | (a6 << 16) | v12 | dword_60AF2A44[a3] | 0x1000;
  position.profile = Profile__get(0x32Bu);
  position.position.x = v10;
  position.position.y = v8;
  position.position.z = v9;
  position.field_20 = 0;
  position.eventId1 = 0;
  position.eventId2 = 0;
  position.field_28 = 0;
  return ActorMgr__create((void *)ActorMgr__instance, &position, 1);
}
