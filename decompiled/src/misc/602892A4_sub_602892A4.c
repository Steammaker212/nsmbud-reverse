/* sub_602892A4
 * address: 0x602892A4   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602892A4(int a1)
{
  int v2; // r4
  signed int result; // r0
  unsigned int v4; // r6
  unsigned int v5; // r2
  int v6; // r12
  int v7; // lr
  int v8; // r0
  int v9; // s2
  int v10; // s4
  unsigned int v11; // r2
  float *v12; // r6
  float *v13; // r0
  float v14; // s14
  float v15; // s1
  float v16; // s3
  float v17; // s5
  float *v18; // r0
  float v19; // s2
  float v20; // s4
  float v21; // s10
  float v22; // s6
  float v23; // s3
  float v24; // s2
  float v25; // s14
  float v26; // s0
  float v27; // s11
  float v28; // s7
  float v29; // s4
  float v30; // s0
  __int64 v31; // [sp+0h] [bp-48h] BYREF
  float v32; // [sp+8h] [bp-40h]
  int v33; // [sp+Ch] [bp-3Ch]
  float v34; // [sp+10h] [bp-38h]
  float v35; // [sp+14h] [bp-34h]
  float v36; // [sp+18h] [bp-30h]
  int v37; // [sp+1Ch] [bp-2Ch]
  float v38; // [sp+20h] [bp-28h]
  float v39; // [sp+24h] [bp-24h]
  float v40; // [sp+28h] [bp-20h]
  int v41; // [sp+2Ch] [bp-1Ch]

  v2 = a1 + 6388;
  result = sub_60235E50(a1 + 6388);
  if ( result == 1 )
  {
    v4 = FIELD_U32(a1, 164);
    v5 = FIELD_U32(a1, 160);
    v6 = FIELD_U32(a1, 108);
    v7 = FIELD_U32(a1, 112);
    v8 = (v5 >> 20) & 0xFF0;
    v9 = v4 & 0xFFFFFF;
    v10 = v5 & 0xFFFFFF;
    v11 = FIELD_U32(a1, 156);
    v12 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
    v13 = (float *)((char *)sinLutTable + v8);
    v14 = *v13;
    v15 = v13[1];
    v16 = v13[2];
    v17 = v13[3];
    v18 = (float *)((char *)sinLutTable + ((v11 >> 20) & 0xFF0));
    v19 = (float)(unsigned int)v9 * 0.000000059605;
    v20 = (float)(unsigned int)v10 * 0.000000059605;
    v21 = v12[2] + (float)(v19 * v12[3]);
    v22 = *v12 + (float)(v19 * v12[1]);
    v23 = v16 + (float)(v20 * v17);
    v24 = FIELD_F32(a1, 144);
    v25 = v14 + (float)(v20 * v15);
    v26 = (float)(v11 & 0xFFFFFF) * 0.000000059605;
    v27 = v18[2] + (float)(v26 * v18[3]);
    v28 = *v18 + (float)(v26 * v18[1]);
    *(float *)&v31 = v24 * (float)(v23 * v21);
    v34 = (float)(v23 * v22) * v24;
    v38 = -(float)(v25 * v24);
    v29 = FIELD_F32(a1, 148);
    *((float *)&v31 + 1) = (float)((float)((float)(v28 * v25) * v21) - (float)(v27 * v22)) * v29;
    v35 = (float)((float)(v27 * v21) + (float)((float)(v28 * v25) * v22)) * v29;
    v39 = (float)(v28 * v23) * v29;
    v30 = FIELD_F32(a1, 152);
    v32 = (float)((float)(v25 * (float)(v27 * v21)) + (float)(v28 * v22)) * v30;
    v36 = (float)((float)(v25 * (float)(v27 * v22)) - (float)(v28 * v21)) * v30;
    v40 = (float)(v27 * v23) * v30;
    v33 = v6;
    v37 = v7;
    v41 = 1166843904;
    return sub_60236A80(v2, &v31, 1);
  }
  return result;
}
