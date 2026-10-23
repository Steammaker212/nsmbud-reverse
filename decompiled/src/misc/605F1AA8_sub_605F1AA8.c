/* sub_605F1AA8
 * address: 0x605F1AA8   size: 644   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_605F1AA8(int a1)
{
  int v2; // r2
  unsigned int v3; // r1
  unsigned int result; // r0
  unsigned int v5; // r3
  signed int v6; // r7
  unsigned int v7; // r10
  float *v8; // r0
  float v9; // s2
  float v10; // s4
  float v11; // s6
  float v12; // s8
  float v13; // s0
  float v14; // r8
  int v15; // r0
  int v16; // r1
  float v17; // s22
  float v18; // s24
  char *v19; // [sp+14h] [bp-8Ch]
  float *v20; // [sp+18h] [bp-88h]
  unsigned int *v21; // [sp+1Ch] [bp-84h]
  int v22; // [sp+20h] [bp-80h]
  ActorBuildInfo buildInfo; // [sp+24h] [bp-7Ch] BYREF

  v2 = FIELD_U32(a1, 6352);
  v21 = (unsigned int *)(a1 + 6352);
  v3 = FIELD_U32(a1, 24);
  v22 = 0;
  result = (v3 >> 28 << 12) + 4096;
  if ( v2 == 1 )
  {
LABEL_6:
    v6 = 0;
    v19 = (char *)(a1 + 6364);
    v7 = ((16 * v3) & 0xF0000000) + 0x40000000 - (result << 15);
    v20 = (float *)(a1 + 6360);
    do
    {
      v8 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
      v9 = *v8;
      v10 = v8[1];
      v11 = v8[2];
      v12 = v8[3];
      v13 = (float)(v7 & 0xFFFFFF);
      v14 = FIELD_F32(a1, 116);
      v15 = FIELD_U32(a1, 20);
      v16 = v15 & 0xF000F00;
      v17 = (float)(FIELD_F32(a1, 112) + (float)(*v20 * (float)(v9 + (float)((float)(v13 * v10) * 0.000000059605))))
          + 8.0;
      v18 = (float)(FIELD_F32(a1, 108) + (float)(*v20 * (float)(v11 + (float)((float)(v13 * v12) * 0.000000059605))))
          + -8.0;
      if ( FIELD_U32(a1, 6356) == 1 )
      {
        memset(&buildInfo.field_1C, 0, 12);
        buildInfo.settings1 = v16 | (v15 << 6) & 0x4000000 | 0x10;
        buildInfo.settings2 = 16;
        buildInfo.movementId = *v19;
        buildInfo.linkId = FIELD_U8(a1, 29);
        buildInfo.parentId = FIELD_U32(a1, 8);
        buildInfo.profile = Profile__get(0x19Bu);
        buildInfo.position.x = v18;
        buildInfo.position.y = v17;
        buildInfo.position.z = v14;
        buildInfo.field_20 = FIELD_U8(a1, 86);
      }
      else
      {
        memset(&buildInfo.field_1C, 0, 12);
        if ( (v15 & 0x100000) != 0 )
          v16 = v15 & 0xB000F00 | 0x14000000;
        buildInfo.settings1 = v16;
        buildInfo.settings2 = 0;
        buildInfo.movementId = *v19;
        buildInfo.linkId = FIELD_U8(a1, 29);
        buildInfo.parentId = FIELD_U32(a1, 8);
        buildInfo.profile = Profile__get(0x195u);
        buildInfo.position.x = v18;
        buildInfo.position.y = v17;
        buildInfo.position.z = v14;
        buildInfo.field_20 = FIELD_U8(a1, 86);
      }
      buildInfo.eventId1 = 0;
      buildInfo.eventId2 = 0;
      buildInfo.field_28 = 0;
      ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
      ++v6;
      v7 += v22;
      result = *v21;
    }
    while ( v6 < (int)*v21 );
    return result;
  }
  v5 = v2;
  if ( v3 >> 28 != 15 )
    v5 = v2 - 1;
  if ( v2 >= 1 )
  {
    v22 = (result / v5) << 16;
    goto LABEL_6;
  }
  return result;
}
