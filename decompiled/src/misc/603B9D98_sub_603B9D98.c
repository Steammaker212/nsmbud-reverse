/* sub_603B9D98
 * address: 0x603B9D98   size: 808   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B9D98(int a1)
{
  unsigned int v2; // r1
  int *v3; // r7
  int v4; // r0
  float *v5; // r5
  unsigned int v6; // r2
  float *v7; // r6
  float *v8; // r3
  float v9; // s0
  float v10; // s3
  float v11; // s10
  float v12; // s14
  float v13; // s8
  float v14; // s4
  float v15; // s4
  float v16; // s0
  int *v17; // r6
  unsigned int v18; // r0
  TileCheck *v19; // r0
  int v20; // r5
  float v21; // s0
  float v22; // r1
  float v23; // r0
  float v24; // r2
  float v25; // kr04_4
  float v26; // s0
  float v27; // s2
  float *v28; // r2
  float *v29; // r1
  int v30; // r4
  int v31; // t1
  float v32; // s2
  float v33; // s0
  TileCheck v35; // [sp+4h] [bp-A4h] BYREF
  TileCheck_Result v36; // [sp+50h] [bp-58h] BYREF
  Vec2 positionOffset; // [sp+78h] [bp-30h] BYREF
  Vec2 a3; // [sp+80h] [bp-28h] BYREF

  v3 = (int *)(a1 + 6464);
  v2 = FIELD_U32(a1, 6464);
  v4 = FIELD_U32(a1, 80);
  v5 = sinLutTable;
  v6 = v2 - 0x40000000;
  if ( v4 == 1 )
    v2 ^= 0x80000000;
  v7 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v8 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
  v9 = (float)(v2 & 0xFFFFFF);
  v10 = (float)(v6 & 0xFFFFFF);
  v11 = *v7 + (float)((float)(v9 * v7[1]) * 0.000000059605);
  v12 = v7[2] + (float)((float)(v7[3] * v9) * 0.000000059605);
  v13 = (float)(v12 + FIELD_F32(a1, 6476))
      + (float)((float)(v8[2] + (float)((float)(v8[3] * v10) * 0.000000059605)) * 0.5);
  v14 = (float)(v11 + FIELD_F32(a1, 6480))
      + (float)((float)(*v8 + (float)((float)(v10 * v8[1]) * 0.000000059605)) * 0.5);
  a3.x = v13;
  a3.y = v14;
  FIELD_F32(a1, 23124) = v13;
  FIELD_F32(a1, 23128) = v14;
  v15 = v14 - (float)(v11 * 6.0);
  v16 = *(float *)&dword_60AF1F60[v4];
  positionOffset.x = v13 - (float)(v12 * 6.0);
  positionOffset.y = v15;
  FIELD_F32(a1, 23132) = positionOffset.x;
  FIELD_F32(a1, 23136) = v15;
  v36.field_C = 0;
  v36.field_10 = 0;
  v17 = (int *)(a1 + 22544);
  v18 = (FIELD_U32(a1, 22544) + 4 - (int)v16) % 4;
  if ( v18 <= 3 )
    v5 = (float *)(0x2040108u >> (8 * v18));
  v19 = sub_6015D0AC(&v35);
  v20 = TileCheck_check(v19, &v36, &a3, &positionOffset, (unsigned __int8)v5);
  if ( v20 == 1 )
  {
    LODWORD(v21) = (int)*(float *)&dword_60AF1F60[FIELD_U32(a1, 80)];
    *v17 = (*v17 + 4 - LODWORD(v21)) % 4;
    *v3 = v36.field_C;
    v22 = v36.field_8;
    FIELD_F32(a1, 6476) = v36.field_4;
    FIELD_F32(a1, 6480) = v22;
    ((void (__fastcall *)(int, float))loc_603B97B4)(a1, v21);
    v23 = v36.field_4;
    FIELD_F32(a1, 22580) = v36.field_4;
    v24 = v36.field_8;
    FIELD_F32(a1, 22584) = v36.field_8;
    FIELD_F32(a1, 6452) = v23;
    FIELD_F32(a1, 6456) = v24;
    v25 = v24;
    v26 = 1.0;
    v27 = -7.0;
    v28 = &v36.field_4;
    v29 = (float *)(a1 + 22580);
    switch ( *v17 )
    {
      case 0:
        v26 = -1.0;
        v27 = 7.0;
        goto LABEL_8;
      case 1:
        goto LABEL_12;
      case 2:
LABEL_8:
        v28 = &v36.field_8;
        v29 = (float *)(a1 + 22584);
        goto LABEL_12;
      case 3:
        v26 = -1.0;
        v27 = 7.0;
        v29 = (float *)(a1 + 22580);
LABEL_12:
        *v29 = v26 + (float)(v27 + *v28);
        v33 = FIELD_F32(a1, 22584);
        v32 = FIELD_F32(a1, 22580);
        break;
      default:
        v32 = v23;
        v33 = v25;
        break;
    }
    FIELD_U8(a1, 22576) = 1;
    FIELD_F32(a1, 22592) = (float)(v32 - FIELD_F32(a1, 108)) / 30.0;
    FIELD_F32(a1, 22596) = (float)(v33 - FIELD_F32(a1, 112)) / 30.0;
    FIELD_U32(a1, 22600) = 30;
  }
  else
  {
    v31 = FIELD_U32(a1, 22560);
    v30 = a1 + 22560;
    *(_DWORD *)v30 = v31 + 1;
    FIELD_U8(v30, 84) = 1;
  }
  return v20 ^ 1;
}
