/* LargeGoomba_vf163
 * address: 0x6033E9F0   size: 672   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LargeGoomba_vf163(int a1)
{
  float v2; // s18
  float v3; // s20
  float v4; // r5
  char v5; // r7
  int v6; // r7
  float v7; // s20
  float v8; // s24
  float v9; // r11
  float v10; // s20
  float v11; // r10
  float v12; // r6
  float v13; // s16
  float v14; // r10
  float v15; // r7
  int result; // r0
  int v17; // [sp+8h] [bp-88h]
  ActorBuildInfo buildInfo; // [sp+14h] [bp-7Ch] BYREF

  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_F32(a1, 108);
  v4 = FIELD_F32(a1, 116);
  v5 = FIELD_U8(a1, 87);
  memset(&buildInfo.settings2, 0, 40);
  v6 = ((v5 & 1) << 16) ^ 0x10000;
  buildInfo.settings1 = v6 | (FIELD_U8(a1, 6436) << 12) | 5;
  buildInfo.profile = Profile__get(0x1D3u);
  buildInfo.parentId = FIELD_U32(a1, 8);
  buildInfo.position.x = v3 + 8.0;
  buildInfo.position.y = v2 + 16.0;
  buildInfo.position.z = v4;
  buildInfo.field_1C = FIELD_U32(a1, 160);
  buildInfo.field_20 = 0;
  ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
  ++FIELD_U32(a1, 6956);
  v7 = FIELD_F32(a1, 112);
  v8 = FIELD_F32(a1, 108);
  v9 = FIELD_F32(a1, 116);
  memset(&buildInfo.settings2, 0, 40);
  v17 = v6;
  buildInfo.settings1 = v6 | (FIELD_U8(a1, 6436) << 12) | 0x1000005;
  buildInfo.profile = Profile__get(0x1D3u);
  buildInfo.parentId = FIELD_U32(a1, 8);
  buildInfo.position.x = v8 + -8.0;
  buildInfo.position.y = v7 + 16.0;
  buildInfo.position.z = v9;
  buildInfo.field_1C = FIELD_U32(a1, 160);
  buildInfo.field_20 = 0;
  ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
  ++FIELD_U32(a1, 6956);
  v10 = FIELD_F32(a1, 108);
  v11 = FIELD_F32(a1, 112);
  v12 = FIELD_F32(a1, 116);
  memset(&buildInfo.settings2, 0, 40);
  buildInfo.settings1 = v6 | (FIELD_U8(a1, 6436) << 12) | 0x2000005;
  buildInfo.profile = Profile__get(0x1D3u);
  buildInfo.parentId = FIELD_U32(a1, 8);
  buildInfo.position.x = v10 + 8.0;
  buildInfo.position.y = v11;
  buildInfo.position.z = v12;
  buildInfo.field_1C = FIELD_U32(a1, 160);
  buildInfo.field_20 = 0;
  ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
  ++FIELD_U32(a1, 6956);
  v13 = FIELD_F32(a1, 108);
  v14 = FIELD_F32(a1, 112);
  v15 = FIELD_F32(a1, 116);
  memset(&buildInfo.settings2, 0, 40);
  buildInfo.settings1 = v17 | (FIELD_U8(a1, 6436) << 12) | 0x3000005;
  buildInfo.profile = Profile__get(0x1D3u);
  buildInfo.parentId = FIELD_U32(a1, 8);
  buildInfo.position.x = v13 + -8.0;
  buildInfo.position.y = v14;
  buildInfo.position.z = v15;
  buildInfo.field_1C = FIELD_U32(a1, 160);
  buildInfo.field_20 = 0;
  ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
  result = FIELD_U32(a1, 6956) + 1;
  FIELD_U32(a1, 6956) = result;
  return result;
}
