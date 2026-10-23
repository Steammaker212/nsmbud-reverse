/* sub_60659714
 * address: 0x60659714   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60659714(_DWORD *a1)
{
  ModelWrapper *v2; // r8
  unsigned int v3; // r0
  unsigned int v4; // r1
  unsigned int v5; // r2
  int v6; // s2
  float *v7; // r5
  float *v8; // r7
  float *v9; // r1
  float v10; // s14
  float v11; // s0
  float v12; // s2
  float v13; // s10
  float v14; // s5
  float v15; // s6
  float v16; // s1
  float v17; // s13
  float v18; // s9
  ModelWrapper *v19; // r5
  float v21; // [sp+0h] [bp-48h] BYREF
  float v22; // [sp+4h] [bp-44h]
  float v23; // [sp+8h] [bp-40h]
  int v24; // [sp+Ch] [bp-3Ch]
  float v25; // [sp+10h] [bp-38h]
  float v26; // [sp+14h] [bp-34h]
  float v27; // [sp+18h] [bp-30h]
  int v28; // [sp+1Ch] [bp-2Ch]
  float v29; // [sp+20h] [bp-28h]
  float v30; // [sp+24h] [bp-24h]
  float v31; // [sp+28h] [bp-20h]
  int v32; // [sp+2Ch] [bp-1Ch]

  v2 = (ModelWrapper *)a1[1548];
  v3 = a1[39];
  v4 = a1[40];
  v5 = a1[41];
  v6 = v4 & 0xFFFFFF;
  v7 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v8 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v9 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v10 = (float)(v3 & 0xFFFFFF);
  v11 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v12 = (float)(unsigned int)v6 * 0.000000059605;
  v13 = v8[2] + (float)(v11 * v8[3]);
  v14 = v7[2] + (float)(v12 * v7[3]);
  v15 = *v8 + (float)(v11 * v8[1]);
  v16 = *v7 + (float)(v12 * v7[1]);
  v17 = v9[2] + (float)((float)(v10 * 0.000000059605) * v9[3]);
  v18 = *v9 + (float)((float)(v10 * 0.000000059605) * v9[1]);
  v21 = v14 * v13;
  v25 = v14 * v15;
  v29 = -v16;
  v22 = (float)((float)(v18 * v16) * v13) - (float)(v17 * v15);
  v26 = (float)(v17 * v13) + (float)((float)(v18 * v16) * v15);
  v30 = v18 * v14;
  v23 = (float)(v16 * (float)(v17 * v13)) + (float)(v18 * v15);
  v27 = (float)(v16 * (float)(v17 * v15)) - (float)(v18 * v13);
  v31 = v17 * v14;
  v24 = a1[27];
  v28 = a1[28];
  v32 = a1[29];
  (*(void (__fastcall **)(void *, float *))(*(_DWORD *)FIELD_U32(v2, 0x0) + 60))(FIELD_U32(v2, 0x0), &v21);
  ModelWrapper_updateModel(v2);
  v19 = (ModelWrapper *)a1[1549];
  v21 = 1.0;
  v22 = 0.0;
  v23 = 0.0;
  v25 = 0.0;
  v26 = 1.0;
  v27 = 0.0;
  v29 = 0.0;
  v30 = 0.0;
  v31 = 1.0;
  v24 = a1[1674];
  v28 = a1[1675];
  v32 = a1[1676];
  (*(void (__fastcall **)(void *, float *))(*(_DWORD *)FIELD_U32(v19, 0x0) + 60))(FIELD_U32(v19, 0x0), &v21);
  return ModelWrapper_updateModel(v19);
}
