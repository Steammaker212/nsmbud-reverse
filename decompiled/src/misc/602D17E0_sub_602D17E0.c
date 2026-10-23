/* sub_602D17E0
 * address: 0x602D17E0   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602D17E0(int a1, float *a2, int *a3, float a4)
{
  float v8; // s2
  float v9; // s4
  float v10; // s3
  float v11; // s5
  float v12; // s8
  float v13; // s0
  float v14; // s2
  float v15; // s4
  int result; // r0
  int v17; // r1
  int v18; // r2
  float v19[3]; // [sp+0h] [bp-48h] BYREF
  float v20; // [sp+Ch] [bp-3Ch]
  float v21; // [sp+10h] [bp-38h]
  float v22; // [sp+14h] [bp-34h]
  float v23; // [sp+18h] [bp-30h]
  float v24; // [sp+1Ch] [bp-2Ch]
  float v25; // [sp+20h] [bp-28h]
  float v26; // [sp+24h] [bp-24h]
  float v27; // [sp+28h] [bp-20h]
  float v28; // [sp+2Ch] [bp-1Ch]

  sub_60832684((int)v19, (unsigned int *)(a1 + 24));
  v8 = v20 + (float)((float)((float)(v19[1] * 0.0) + (float)(v19[0] * 0.0)) + (float)((float)(a4 * 0.5) * v19[2]));
  v20 = v8;
  v24 = v24 + (float)((float)((float)(v22 * 0.0) + (float)(v21 * 0.0)) + (float)((float)(a4 * 0.5) * v23));
  v9 = v24;
  v10 = a2[1];
  v11 = a2[2];
  v12 = v28 + (float)((float)((float)(v26 * 0.0) + (float)(v25 * 0.0)) + (float)((float)(a4 * 0.5) * v27));
  FIELD_F32(a1, 56) = v8 + *a2;
  FIELD_F32(a1, 60) = v9 + v10;
  FIELD_F32(a1, 64) = v12 + v11;
  v13 = *a2 - v8;
  v14 = a2[1] - v9;
  v15 = a2[2] - v12;
  FIELD_F32(a1, 68) = v13;
  FIELD_F32(a1, 72) = v14;
  FIELD_F32(a1, 76) = v15;
  FIELD_F32(a1, 8) = *a2;
  FIELD_F32(a1, 12) = a2[1];
  FIELD_F32(a1, 16) = a2[2];
  result = *a3;
  v17 = a3[1];
  v18 = a3[2];
  FIELD_U32(a1, 20) = *a3;
  FIELD_U32(a1, 24) = v17;
  FIELD_U32(a1, 28) = v18;
  return result;
}
