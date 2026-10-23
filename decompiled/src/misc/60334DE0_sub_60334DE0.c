/* sub_60334DE0
 * address: 0x60334DE0   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60334DE0(int a1)
{
  int v2; // r1
  int v3; // r7
  float v4; // r6
  float v5; // r5
  float v6; // r11
  ActorBuildInfo v8; // [sp+0h] [bp-50h] BYREF

  FIELD_U8(a1, 6605) = 1;
  v2 = FIELD_U32(a1, 112);
  v8.settings1 = FIELD_U32(a1, 108);
  v8.settings2 = v2;
  v8.parentId = 1166843904;
  EffectData_create(965, (Vec3 *)&v8, 0, 0);
  v3 = FIELD_U32(a1, 20);
  v4 = FIELD_F32(a1, 108);
  v5 = FIELD_F32(a1, 112);
  v6 = FIELD_F32(a1, 116);
  memset(&v8.settings2, 0, 40);
  v8.settings1 = v3 & 0x110 | 1;
  v8.profile = Profile__get(0x29Du);
  v8.position.x = v4;
  v8.position.y = v5;
  v8.position.z = v6;
  v8.field_1C = 0;
  FIELD_U32(a1, 6592) = *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &v8, 0) + 2);
  FIELD_U32(a1, 80) = 1;
  FIELD_U32(a1, 120) = -1077936128;
  return -1077936128;
}
