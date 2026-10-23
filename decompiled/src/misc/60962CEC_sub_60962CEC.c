/* sub_60962CEC
 * address: 0x60962CEC   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60962CEC(int a1, float *a2, float *a3, int a4)
{
  float v4; // r12
  int v5; // lr
  float v6; // r4
  float v7; // s7
  int v8; // r6
  int v9; // r1
  int v10; // r1
  float v11; // s0
  float v12; // s2
  float v13; // s4
  float v14; // s6
  float v15; // s8
  float v16; // s10
  float v17; // s12
  float v18; // s14
  float v19; // s1
  float v20; // s3
  float v21; // s5
  float v22; // s9
  float *v23; // r2
  float v24; // s13
  float v25; // s11
  _DWORD v27[3]; // [sp+0h] [bp-78h] BYREF
  int v28; // [sp+Ch] [bp-6Ch]
  int v29; // [sp+10h] [bp-68h]
  float v30; // [sp+14h] [bp-64h]
  int v31; // [sp+18h] [bp-60h]
  int v32; // [sp+1Ch] [bp-5Ch]
  int v33; // [sp+20h] [bp-58h]
  float v34; // [sp+24h] [bp-54h]
  int v35; // [sp+28h] [bp-50h]
  int v36; // [sp+2Ch] [bp-4Ch]
  float v37; // [sp+30h] [bp-48h]
  int v38; // [sp+34h] [bp-44h]
  float v39; // [sp+38h] [bp-40h]
  int v40; // [sp+3Ch] [bp-3Ch]
  int v41; // [sp+40h] [bp-38h]
  float v42; // [sp+44h] [bp-34h]
  int v43; // [sp+48h] [bp-30h]
  int v44; // [sp+4Ch] [bp-2Ch]
  int v45; // [sp+50h] [bp-28h]
  float v46; // [sp+54h] [bp-24h]
  int v47; // [sp+58h] [bp-20h]
  int v48; // [sp+5Ch] [bp-1Ch]

  v4 = *a2;
  v5 = *((_DWORD *)a2 + 1);
  v6 = a2[2];
  *(float *)v27 = v4;
  v27[1] = v5;
  *(float *)&v27[2] = v6;
  v7 = v6;
  v28 = *((_DWORD *)a2 + 3);
  v29 = v5;
  v30 = v6;
  v8 = *((_DWORD *)a2 + 5);
  v31 = v28;
  v32 = v5;
  v33 = v8;
  v34 = v4;
  v35 = v5;
  v36 = v8;
  v9 = *((_DWORD *)a2 + 4);
  v37 = v4;
  v38 = v9;
  v39 = v6;
  v40 = v28;
  v41 = v9;
  v42 = v6;
  v43 = v28;
  v44 = v9;
  v45 = v8;
  v46 = v4;
  v47 = v9;
  v48 = v8;
  v10 = 0;
  v11 = a3[8];
  v12 = a3[9];
  v13 = a3[10];
  v14 = a3[11];
  v15 = a3[1];
  v16 = a3[2];
  v17 = a3[3];
  v18 = a3[4];
  v19 = a3[5];
  v20 = a3[6];
  v21 = a3[7];
  v22 = *a3;
  while ( 1 )
  {
    v23 = (float *)(LODWORD(v4) + v10);
    v24 = *(float *)(LODWORD(v4) + v10 + 4);
    v25 = *(float *)(LODWORD(v4) + v10);
    *v23 = v17 + (float)((float)((float)(v24 * v15) + (float)(v25 * v22)) + (float)(v7 * v16));
    v23[1] = v21 + (float)((float)((float)(v24 * v19) + (float)(v25 * v18)) + (float)(v7 * v20));
    v23[2] = v14 + (float)((float)((float)(v24 * v12) + (float)(v25 * v11)) + (float)(v7 * v13));
    if ( v10 == 84 )
      break;
    v7 = v23[5];
    v10 += 12;
  }
  return ((int (__fastcall *)(int, _DWORD *, _DWORD, int))sub_60962E0C)(a1, v27, (unsigned __int8)a4, a4);
}
