/* sub_600BA330
 * address: 0x600BA330   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600BA330(_DWORD *a1)
{
  _DWORD *v2; // r2
  unsigned int v3; // r0
  unsigned int v4; // r1
  unsigned int v5; // r2
  int v6; // r6
  float *v7; // r5
  float *v8; // r4
  float v9; // s0
  float v10; // s2
  float v11; // s4
  float v12; // s12
  float v13; // s5
  float v14; // s8
  float v15; // s1
  float v16; // s9
  float v17; // s13
  unsigned int v19; // [sp+4h] [bp-4Ch] BYREF
  float32x2_t v20; // [sp+8h] [bp-48h] BYREF
  float v21; // [sp+10h] [bp-40h]
  int v22; // [sp+14h] [bp-3Ch]
  float v23; // [sp+18h] [bp-38h]
  float v24; // [sp+1Ch] [bp-34h]
  float v25; // [sp+20h] [bp-30h]
  int v26; // [sp+24h] [bp-2Ch]
  float v27; // [sp+28h] [bp-28h]
  float v28; // [sp+2Ch] [bp-24h]
  float v29; // [sp+30h] [bp-20h]
  int v30; // [sp+34h] [bp-1Ch]

  v2 = a1 + 39;
  v3 = a1[39];
  v4 = v2[1];
  v5 = v2[2];
  v6 = (v5 >> 20) & 0xFF0;
  v7 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v8 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v9 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v10 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
  v11 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
  v12 = *(float *)((char *)&sinLutTable[2] + v6) + (float)(v9 * *(float *)((char *)&sinLutTable[3] + v6));
  v13 = v8[2] + (float)(v10 * v8[3]);
  v14 = *(float *)((char *)sinLutTable + v6) + (float)(v9 * *(float *)((char *)&sinLutTable[1] + v6));
  v15 = *v8 + (float)(v10 * v8[1]);
  v16 = *v7 + (float)(v11 * v7[1]);
  v17 = v7[2] + (float)(v11 * v7[3]);
  v20.n64_f32[0] = (float)(v13 * v12) + (float)(v16 * (float)(v15 * v14));
  v23 = v17 * v14;
  v27 = (float)(v16 * (float)(v13 * v14)) - (float)(v15 * v12);
  v20.n64_f32[1] = (float)(v16 * (float)(v15 * v12)) - (float)(v13 * v14);
  v24 = v17 * v12;
  v28 = (float)(v15 * v14) + (float)(v16 * (float)(v13 * v12));
  v21 = v17 * v15;
  v25 = -v16;
  v29 = v17 * v13;
  v22 = a1[27];
  v26 = a1[28];
  v30 = a1[29];
  v19 = -1073741824;
  Mtx34_rotateX(&v20, &v19);
  return sub_602372C0(a1 + 1582, dword_60AF2314[a1[1555]], &v20, 0);
}
