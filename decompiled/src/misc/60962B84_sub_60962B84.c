/* sub_60962B84
 * address: 0x60962B84   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60962B84(int a1, int *a2, float *a3, unsigned __int8 a4)
{
  int v4; // r12
  int v5; // lr
  int v6; // r4
  int v7; // r6
  int v8; // r1
  int v9; // r1
  float v10; // s0
  float v11; // s2
  float v12; // s4
  float v13; // s6
  float v14; // s8
  float v15; // s10
  float v16; // s12
  float v17; // s14
  float v18; // s1
  float v19; // s3
  float v20; // s5
  float v21; // s7
  float v22; // s9
  float v23; // s11
  float v24; // s13
  float v25; // s15
  float *v26; // r2
  float v27; // s18
  float v28; // s20
  float v29; // s22
  float v30; // s26
  float v31; // s24
  float v32; // s18
  _DWORD v34[3]; // [sp+0h] [bp-B0h] BYREF
  int v35; // [sp+Ch] [bp-A4h]
  int v36; // [sp+10h] [bp-A0h]
  int v37; // [sp+14h] [bp-9Ch]
  int v38; // [sp+18h] [bp-98h]
  int v39; // [sp+1Ch] [bp-94h]
  int v40; // [sp+20h] [bp-90h]
  int v41; // [sp+24h] [bp-8Ch]
  int v42; // [sp+28h] [bp-88h]
  int v43; // [sp+2Ch] [bp-84h]
  int v44; // [sp+30h] [bp-80h]
  int v45; // [sp+34h] [bp-7Ch]
  int v46; // [sp+38h] [bp-78h]
  int v47; // [sp+3Ch] [bp-74h]
  int v48; // [sp+40h] [bp-70h]
  int v49; // [sp+44h] [bp-6Ch]
  int v50; // [sp+48h] [bp-68h]
  int v51; // [sp+4Ch] [bp-64h]
  int v52; // [sp+50h] [bp-60h]
  int v53; // [sp+54h] [bp-5Ch]
  int v54; // [sp+58h] [bp-58h]
  int v55; // [sp+5Ch] [bp-54h]

  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  v34[0] = v4;
  v34[1] = v5;
  v34[2] = v6;
  v35 = a2[3];
  v36 = v5;
  v37 = v6;
  v7 = a2[5];
  v38 = v35;
  v39 = v5;
  v40 = v7;
  v41 = v4;
  v42 = v5;
  v43 = v7;
  v8 = a2[4];
  v44 = v4;
  v45 = v8;
  v46 = v6;
  v47 = v35;
  v48 = v8;
  v49 = v6;
  v50 = v35;
  v51 = v8;
  v52 = v7;
  v53 = v4;
  v54 = v8;
  v55 = v7;
  v9 = 0;
  v10 = a3[8];
  v11 = a3[9];
  v12 = a3[10];
  v13 = a3[11];
  v14 = a3[12];
  v15 = a3[13];
  v16 = a3[14];
  v17 = a3[15];
  v18 = *a3;
  v19 = a3[1];
  v20 = a3[2];
  v21 = a3[3];
  v22 = a3[4];
  v23 = a3[5];
  v24 = a3[6];
  v25 = a3[7];
  do
  {
    v26 = (float *)(v4 + v9);
    v9 += 12;
    v27 = v26[1];
    v28 = v26[2];
    v29 = v17 + (float)((float)((float)(v27 * v15) + (float)(*v26 * v14)) + (float)(v28 * v16));
    v30 = (float)(v27 * (float)(v23 / v29)) + (float)(*v26 * (float)(v22 / v29));
    v31 = (float)((float)(v27 * (float)(v19 / v29)) + (float)(*v26 * (float)(v18 / v29)))
        + (float)(v28 * (float)(v20 / v29));
    v32 = (float)(v27 * (float)(v11 / v29)) + (float)(*v26 * (float)(v10 / v29));
    *v26 = (float)(v21 / v29) + v31;
    v26[1] = (float)(v25 / v29) + (float)(v30 + (float)(v28 * (float)(v24 / v29)));
    v26[2] = (float)(v13 / v29) + (float)(v32 + (float)(v28 * (float)(v12 / v29)));
  }
  while ( v9 != 96 );
  return ((int (__fastcall *)(int, _DWORD *, _DWORD))sub_60962E0C)(a1, v34, a4);
}
