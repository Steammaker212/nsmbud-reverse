/* sub_6033EDFC
 * address: 0x6033EDFC   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_6033EDFC(unsigned __int8 *a1, float *a2)
{
  unsigned __int8 *v3; // r5
  float v4; // s16
  float v5; // r10
  float v6; // r8
  unsigned __int8 v7; // r4
  int v8; // t1
  int v9; // r7
  float v10; // s16
  float v11; // r11
  float v12; // r10
  ActorBuildInfo buildInfo; // [sp+4h] [bp+0h] BYREF

  v3 = a1;
  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  v7 = a1[87];
  memset(&buildInfo.settings2, 0, 40);
  v8 = v3[6436];
  v3 += 6436;
  v9 = ((v7 & 1) << 16) ^ 0x10000;
  buildInfo.settings1 = v9 | (v8 << 12) | 5;
  buildInfo.profile = Profile__get(0x1D3u);
  buildInfo.parentId = *((_DWORD *)v3 - 1607);
  buildInfo.position.x = v4 + 9.0;
  buildInfo.position.y = v5;
  buildInfo.position.z = v6;
  buildInfo.field_1C = *((_DWORD *)v3 - 1569);
  buildInfo.field_20 = 0;
  ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
  v10 = *a2;
  v11 = a2[1];
  v12 = a2[2];
  memset(&buildInfo.settings2, 0, 40);
  buildInfo.settings1 = v9 | (*v3 << 12) | 0x1000005;
  buildInfo.profile = Profile__get(0x1D3u);
  buildInfo.parentId = *((_DWORD *)v3 - 1607);
  buildInfo.position.x = v10 + -9.0;
  buildInfo.position.y = v11;
  buildInfo.position.z = v12;
  buildInfo.field_1C = *((_DWORD *)v3 - 1569);
  buildInfo.field_20 = 0;
  return ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
}
