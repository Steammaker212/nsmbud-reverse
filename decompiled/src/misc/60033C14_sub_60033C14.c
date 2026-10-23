/* sub_60033C14
 * address: 0x60033C14   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60033C14(int a1)
{
  int v2; // r1
  float v3; // r7
  float v4; // r6
  float v5; // r5
  ActorBuildInfo v7; // [sp+0h] [bp-50h] BYREF

  FIELD_U8(a1, 6905) = 1;
  v2 = FIELD_U32(a1, 112);
  v7.settings1 = FIELD_U32(a1, 108);
  v7.settings2 = v2;
  v7.parentId = 1166843904;
  EffectData_create(36, (Vec3 *)&v7, 0, 0);
  v3 = FIELD_F32(a1, 108);
  v4 = FIELD_F32(a1, 112);
  v5 = FIELD_F32(a1, 116);
  memset(&v7.settings2, 0, 40);
  v7.settings1 = 1;
  v7.profile = Profile__get(0x2C6u);
  v7.position.x = v3;
  v7.position.y = v4;
  v7.position.z = v5;
  v7.field_1C = 0;
  FIELD_U32(a1, 6896) = *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &v7, 0) + 2);
  FIELD_U32(a1, 80) = 1;
  FIELD_U32(a1, 120) = -1071644672;
  return -1071644672;
}
