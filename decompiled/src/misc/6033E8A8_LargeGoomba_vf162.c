/* LargeGoomba_vf162
 * address: 0x6033E8A8   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LargeGoomba_vf162(int a1)
{
  float v2; // s16
  float v3; // r6
  float v4; // r7
  float v5; // s16
  float v6; // r8
  float v7; // r9
  int result; // r0
  ActorBuildInfo buildInfo; // [sp+4h] [bp-5Ch] BYREF

  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_F32(a1, 116);
  memset(&buildInfo.settings2, 0, 40);
  buildInfo.settings1 = FIELD_U8(a1, 6436) | 0x10000000;
  buildInfo.profile = Profile__get(0x1D8u);
  buildInfo.parentId = FIELD_U32(a1, 8);
  buildInfo.position.x = v2 + 9.0;
  buildInfo.position.y = v3;
  buildInfo.position.z = v4;
  buildInfo.field_1C = FIELD_U32(a1, 160);
  buildInfo.field_20 = 0;
  ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
  ++FIELD_U32(a1, 6956);
  v5 = FIELD_F32(a1, 108);
  v6 = FIELD_F32(a1, 112);
  v7 = FIELD_F32(a1, 116);
  memset(&buildInfo.settings2, 0, 40);
  buildInfo.settings1 = FIELD_U8(a1, 6436) | 0x11000000;
  buildInfo.profile = Profile__get(0x1D8u);
  buildInfo.parentId = FIELD_U32(a1, 8);
  buildInfo.position.x = v5 + -9.0;
  buildInfo.position.y = v6;
  buildInfo.position.z = v7;
  buildInfo.field_1C = FIELD_U32(a1, 160);
  buildInfo.field_20 = 0;
  ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
  result = FIELD_U32(a1, 6956) + 1;
  FIELD_U32(a1, 6956) = result;
  return result;
}
