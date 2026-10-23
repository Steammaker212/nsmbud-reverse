/* sub_6057C318
 * address: 0x6057C318   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6057C318(int a1)
{
  float v2; // s2
  float v3; // s0
  float *v4; // r5
  float v5; // s0
  int result; // r0
  float *v7; // r7
  float v8; // s16
  int *v9; // r4
  int v10; // t1
  float v11; // r8
  float v12; // s18
  float v13; // s0
  int v14; // r11
  float v15; // s16
  float v16; // s18
  float v17; // r7
  float v18; // s20
  float v19; // s18
  ActorBuildInfo buildInfo; // [sp+Ch] [bp-6Ch] BYREF

  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  FIELD_U32(a1, 7504) = FIELD_U32(a1, 116);
  v4 = (float *)(a1 + 7500);
  v5 = v3 + 16.0;
  FIELD_F32(a1, 7496) = v2 + -8.0;
  FIELD_F32(a1, 7500) = v5;
  FIELD_F32(a1, 112) = v5 + (float)((float)((float)((float)(0.024541 * 0.0) * 0.000000059605) + 0.0) * 4.0);
  FIELD_U32(a1, 7552) = 0x1000000;
  sub_6057A67C(a1);
  result = FIELD_U32(a1, 7528);
  if ( result == 1 )
  {
    result = FIELD_U8(a1, 20);
    if ( (result & 0x10) != 0 )
    {
      v7 = (float *)(a1 + 7504);
      v8 = *v4;
      v10 = FIELD_U32(a1, 7544);
      v9 = (int *)(a1 + 7544);
      v11 = *v7;
      v12 = *((float *)v9 - 12);
      memset(&buildInfo.settings2, 0, 36);
      buildInfo.settings1 = 0x20000;
      buildInfo.profile = Profile__get(0x199u);
      v13 = v8 + flt_60B04844[v10];
      buildInfo.position.x = v12 + flt_60B04838[v10];
      buildInfo.position.y = v13;
      buildInfo.position.z = v11;
      buildInfo.field_20 = *((_BYTE *)v9 - 7458);
      buildInfo.eventId1 = 0;
      buildInfo.eventId2 = 0;
      buildInfo.field_28 = 0;
      ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
      v14 = *v9 - 1;
      *v9 = v14;
      v15 = *v4;
      v16 = *((float *)v9 - 12);
      v17 = *v7;
      memset(&buildInfo.settings2, 0, 36);
      buildInfo.settings1 = 0x20000;
      v18 = flt_60B04844[v14];
      v19 = v16 + flt_60B04838[v14];
      buildInfo.profile = Profile__get(0x199u);
      buildInfo.position.x = v19;
      buildInfo.position.y = v15 + v18;
      buildInfo.position.z = v17;
      buildInfo.field_20 = *((_BYTE *)v9 - 7458);
      buildInfo.eventId1 = 0;
      buildInfo.eventId2 = 0;
      buildInfo.field_28 = 0;
      ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
      result = *v9 - 1;
      *v9 = result;
    }
  }
  return result;
}
