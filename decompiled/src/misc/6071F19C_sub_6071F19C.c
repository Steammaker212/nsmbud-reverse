/* sub_6071F19C
 * address: 0x6071F19C   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6071F19C(int result, int a2)
{
  float *v3; // r6
  float v4; // s0
  float v5; // s2
  float v6; // s4
  float v7; // s6
  float v8; // s16
  float v9; // s18
  float v10; // s20
  float v11; // s22
  int v12; // r5
  int v13; // r0
  int v14; // r5
  int v15; // r0
  int v16; // [sp+0h] [bp-F0h] BYREF
  int v17; // [sp+4h] [bp-ECh]
  int v18; // [sp+8h] [bp-E8h]
  int v19; // [sp+Ch] [bp-E4h]
  float v20; // [sp+10h] [bp-E0h] BYREF
  int v21; // [sp+14h] [bp-DCh]
  int v22; // [sp+18h] [bp-D8h]
  float v23; // [sp+1Ch] [bp-D4h]
  int v24; // [sp+20h] [bp-D0h]
  float v25; // [sp+24h] [bp-CCh]
  int v26; // [sp+28h] [bp-C8h]
  float v27; // [sp+2Ch] [bp-C4h]
  int v28; // [sp+30h] [bp-C0h]
  int v29; // [sp+34h] [bp-BCh]
  int v30; // [sp+38h] [bp-B8h]
  int v31; // [sp+3Ch] [bp-B4h]
  __int16 v32; // [sp+40h] [bp-B0h] BYREF
  int v33; // [sp+44h] [bp-ACh]
  unsigned int v34; // [sp+5Ch] [bp-94h]
  char v35; // [sp+99h] [bp-57h]

  if ( FIELD_U8(result, 1508) )
  {
    FIELD_U8(result, 1508) = 0;
    sub_6090B350(&v32);
    v33 &= ~1u;
    v34 = v34 & 0xFFFFFFF0 | 8;
    v32 = 0;
    v35 = 0;
    sub_6090B4B0(&v32, FIELD_U32(a2, 40));
    v3 = *(float **)(a2 + 28);
    v4 = v3[39];
    v5 = v3[40];
    v6 = v3[41];
    v7 = v3[42];
    v8 = v7 - v6;
    v9 = v5 - v4;
    v10 = (float)(v7 + v6) * 0.5;
    v11 = (float)(v5 + v4) * 0.5;
    v20 = v7 - v6;
    v24 = 0;
    v28 = 0;
    v21 = 0;
    v25 = v5 - v4;
    v29 = 0;
    v22 = 0;
    v26 = 0;
    v30 = 1065353216;
    v23 = v10;
    v27 = v11;
    v31 = -976543744;
    v12 = FIELD_U32(a2, 40);
    v19 = 0;
    v18 = 0;
    v17 = 0;
    v16 = 0;
    v13 = sub_6090BE54(v3);
    ((void (__fastcall *)(int, int *, float *, int))sub_6093D054)(v12, &v16, &v20, v13);
    v32 = 1;
    sub_6090B4B0(&v32, FIELD_U32(a2, 40));
    v20 = v8;
    v24 = 0;
    v28 = 0;
    v21 = 0;
    v25 = v9;
    v29 = 0;
    v22 = 0;
    v26 = 0;
    v30 = 1065353216;
    v23 = v10;
    v27 = v11;
    v31 = -976543744;
    v14 = FIELD_U32(a2, 40);
    v16 = 1056964608;
    v17 = 1056964608;
    v18 = 1056964608;
    v19 = 1056964608;
    v15 = sub_6090BE54(v3);
    ((void (__fastcall *)(int, int *, float *, int))sub_6093D054)(v14, &v16, &v20, v15);
    v34 |= 0xFu;
    return sub_6090B4B0(&v32, FIELD_U32(a2, 40));
  }
  return result;
}
