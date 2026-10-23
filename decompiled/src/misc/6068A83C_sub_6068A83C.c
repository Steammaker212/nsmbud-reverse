/* sub_6068A83C
 * address: 0x6068A83C   size: 668   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6068A83C(int a1, int a2, float a3)
{
  float *v3; // r11
  int v4; // r3
  int v5; // r7
  unsigned int v6; // r10
  float v7; // lr
  float v8; // r12
  bool v9; // zf
  float *v10; // r8
  float *v11; // r2
  int v12; // s10
  float v13; // s12
  float v14; // s14
  float v15; // s1
  float v16; // s3
  int v17; // r1
  float v18; // s10
  float v19; // s5
  float *v20; // r2
  float v21; // s12
  float v22; // s1
  float v23; // s3
  float v24; // s10
  float v25; // s14
  float v26; // s5
  float v27; // s10
  float v28; // s14
  float v29; // s7
  float v30; // s9
  float v31; // s3
  float v32; // s10
  int v35; // [sp+Ch] [bp-284h]
  _BYTE v37[60]; // [sp+14h] [bp-27Ch] BYREF
  int v38; // [sp+50h] [bp-240h] BYREF
  int v39; // [sp+8Ch] [bp-204h] BYREF
  int v40; // [sp+C8h] [bp-1C8h] BYREF
  int v41; // [sp+104h] [bp-18Ch] BYREF
  int v42; // [sp+140h] [bp-150h] BYREF
  int v43; // [sp+17Ch] [bp-114h] BYREF
  int v44; // [sp+1B8h] [bp-D8h] BYREF
  int v45; // [sp+1F4h] [bp-9Ch] BYREF
  int v46; // [sp+230h] [bp-60h] BYREF

  v3 = (float *)(a1 + 60);
  v4 = 0;
  v5 = 1;
  v6 = 0;
  v35 = FIELD_U32(a1, 16);
  FIELD_F32(a1, 16) = a3;
  v7 = FIELD_F32(a1, 8);
  v8 = FIELD_F32(a1, 12);
  do
  {
    v9 = v4 == 540;
    v10 = (float *)&v37[v4];
    *v10 = v7;
    v4 += 60;
    v11 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
    v10[1] = v8;
    v10[2] = a3;
    v12 = v6 & 0xFFFFFF;
    v13 = *v11;
    v14 = v11[1];
    v15 = v11[2];
    v16 = v11[3];
    v17 = v5++;
    v6 += 429496729;
    if ( v9 )
      v17 = 0;
    v18 = (float)(unsigned int)v12;
    v19 = *v3++;
    v20 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
    v21 = v13 + (float)((float)(v18 * v14) * 0.000000059605);
    v22 = v15 + (float)((float)(v18 * v16) * 0.000000059605);
    v23 = v20[2];
    v24 = v7 + (float)(v19 * v22);
    v25 = v8 + (float)(v19 * v21);
    v26 = v20[3];
    v10[5] = v24;
    v10[6] = v25;
    v27 = *v20;
    v28 = v20[1];
    v10[7] = a3;
    v29 = (float)(v6 & 0xFFFFFF);
    v30 = *(float *)(a1 + 4 * v17 + 60);
    v31 = v23 + (float)((float)(v29 * v26) * 0.000000059605);
    v32 = v27 + (float)((float)(v29 * v28) * 0.000000059605);
    v10[10] = v7 + (float)(v30 * v31);
    v10[11] = v8 + (float)(v30 * v32);
    v10[12] = a3;
    v10[3] = 0.5;
    v10[4] = 0.5;
    v10[8] = (float)(v22 * 0.5) + 0.5;
    v10[9] = (float)(v21 * 0.5) + 0.5;
    v10[13] = (float)(v31 * 0.5) + 0.5;
    v10[14] = (float)(v32 * 0.5) + 0.5;
  }
  while ( v4 != 600 );
  sub_60728534(dword_60CBD830 + 17176, v37, a2, 1);
  sub_60728534(dword_60CBD830 + 17176, &v38, a2, 1);
  sub_60728534(dword_60CBD830 + 17176, &v39, a2, 1);
  sub_60728534(dword_60CBD830 + 17176, &v40, a2, 1);
  sub_60728534(dword_60CBD830 + 17176, &v41, a2, 1);
  sub_60728534(dword_60CBD830 + 17176, &v42, a2, 1);
  sub_60728534(dword_60CBD830 + 17176, &v43, a2, 1);
  sub_60728534(dword_60CBD830 + 17176, &v44, a2, 1);
  sub_60728534(dword_60CBD830 + 17176, &v45, a2, 1);
  sub_60728534(dword_60CBD830 + 17176, &v46, a2, 1);
  FIELD_U32(a1, 16) = v35;
  return a1;
}
