/* sub_606A83F8
 * address: 0x606A83F8   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A83F8(int a1)
{
  unsigned int v2; // r0
  float v3; // s0
  float v4; // s2
  float v5; // s1
  float v6; // s3
  float *v7; // r1
  float v8; // s6
  float v9; // s8
  float v10; // s10
  float v11; // s12
  float v12; // s7
  float v13; // s6
  float v14; // s10
  float v15; // r1
  float v16; // s0
  int result; // r0
  int v18; // r0
  int v19; // r1
  int v20; // r2
  float v21[2]; // [sp+4h] [bp-24h] BYREF
  float v22; // [sp+Ch] [bp-1Ch] BYREF
  float v23; // [sp+10h] [bp-18h]
  float v24; // [sp+14h] [bp-14h]

  v2 = FIELD_U32(a1, 164);
  v3 = FIELD_F32(a1, 572);
  v4 = FIELD_F32(a1, 576);
  v5 = FIELD_F32(a1, 108);
  v6 = FIELD_F32(a1, 112);
  v7 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v8 = *v7;
  v9 = v7[1];
  v10 = v7[2];
  v11 = v7[3];
  v12 = (float)(v2 & 0xFFFFFF);
  v24 = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
  v13 = v8 + (float)(v9 * (float)(v12 * 0.000000059605));
  v14 = v10 + (float)((float)(v12 * 0.000000059605) * v11);
  v22 = (float)((float)(v3 + v5) + (float)((float)(v13 * v4) - (float)(v14 * v3))) + FIELD_F32(a1, 6132);
  v23 = (float)((float)((float)-(float)(v3 * v13) - (float)(v14 * v4)) + (float)(v4 + v6)) + FIELD_F32(a1, 6136);
  sub_606361F8(a1 + 6144, &v22, (_DWORD *)(a1 + 156));
  FIELD_U8(a1, 7952) = 1;
  v15 = FIELD_F32(a1, 576);
  v16 = FIELD_F32(a1, 7948);
  v22 = FIELD_F32(a1, 572);
  v23 = v15;
  v21[0] = (float)(v16 + v16) + 64.0;
  v21[1] = v21[0];
  result = sub_6069AFA0(a1 + 7908, a1 + 108, &v22, v21, (ColliderBase *)(a1 + 7248));
  if ( result == 1 )
  {
    v18 = FIELD_U32(a1, 108);
    v19 = FIELD_U32(a1, 112);
    v20 = FIELD_U32(a1, 116);
    FIELD_U32(a1, 584) = v18;
    FIELD_U32(a1, 588) = v19;
    FIELD_U32(a1, 592) = v20;
    FIELD_U32(a1, 608) = v18;
    FIELD_U32(a1, 612) = v19;
    FIELD_U32(a1, 616) = v20;
    return sub_60160948((_DWORD *)(a1 + 7248));
  }
  return result;
}
