/* sub_60587FDC
 * address: 0x60587FDC   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60587FDC(int a1, int a2)
{
  float v4; // r8
  float *v5; // r0
  float *v6; // r1
  float v7; // s18
  float v8; // s16
  unsigned int v9; // r6
  float v10; // s16
  float v11; // s18
  float v12; // s20
  unsigned int v13; // r7
  float *v14; // r0
  float v15; // s22
  float v16; // s24
  float v17; // s26
  float v18; // s28
  float v19; // s17
  int result; // r0
  ActorBuildInfo v21[3]; // [sp+4h] [bp-84h] BYREF

  v4 = FIELD_F32(a1, 116);
  if ( (FIELD_U32(a1, 6324) | 2) == 2 )
  {
    v5 = (float *)&unk_60B04A8C;
    v6 = (float *)&unk_60B04A98;
  }
  else
  {
    v5 = flt_60AF2160;
    v6 = (float *)&unk_60AF21A0;
  }
  v7 = v5[a2];
  v8 = v6[a2];
  v9 = sub_6000F7B8(v8, v7);
  v10 = sqrtf((float)(v7 * v7) + (float)(v8 * v8));
  v11 = FIELD_F32(a1, 108);
  v12 = FIELD_F32(a1, 112);
  v13 = FIELD_U32(a1, 164) - v9;
  v14 = (float *)((char *)sinLutTable + ((v13 >> 20) & 0xFF0));
  v15 = *v14;
  v16 = v14[1];
  v17 = v14[2];
  v18 = v14[3];
  memset(&v21[0].settings2, 0, 36);
  v21[0].settings1 = FIELD_U32(a1, 20) & 0x10000000 | (unsigned __int8)a2;
  v19 = (float)(v13 & 0xFFFFFF);
  v21[0].profile = Profile__get(0x1A1u);
  v21[0].parentId = FIELD_U32(a1, 8);
  v21[0].position.x = v11 + (float)(v10 * (float)(v17 + (float)((float)(v19 * 0.000000059605) * v18)));
  v21[0].position.y = v12 - (float)(v10 * (float)(v15 + (float)(v16 * (float)(v19 * 0.000000059605))));
  v21[0].position.z = v4;
  v21[0].field_20 = FIELD_U8(a1, 86);
  v21[0].movementId = 0;
  v21[0].linkId = FIELD_U8(a1, 29);
  v21[0].eventId1 = 0;
  v21[0].eventId2 = 0;
  v21[0].field_28 = 0;
  result = (int)ActorMgr__create((void *)ActorMgr__instance, v21, 0);
  if ( !result )
  {
    FIELD_U8(a1, 6342) = 1;
    return 6342;
  }
  return result;
}
