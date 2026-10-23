/* sub_6085D9A0
 * address: 0x6085D9A0   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6085D9A0(int a1, __int64 *a2)
{
  int *v4; // r0
  int v5; // r2
  int v6; // r3
  int v7; // r4
  int v8; // r5
  int v9; // r6
  int v10; // r7
  int *v11; // r1
  int v12; // r3
  int v13; // r4
  int v14; // r5
  int v15; // r6
  int v16; // r7
  __n64 v17; // d0
  float v18; // s4
  float v19; // s2
  float v20; // s2
  float v21; // s0
  __int64 v22; // d18
  __int64 v23; // d20
  unsigned int v25; // r0
  int v26; // r0
  __int64 v27; // [sp+0h] [bp-50h]
  __int64 v28; // [sp+8h] [bp-48h]
  __int64 v29; // [sp+10h] [bp-40h]
  __int64 v30; // [sp+18h] [bp-38h]
  __int64 v31; // [sp+20h] [bp-30h]
  __int64 v32; // [sp+28h] [bp-28h]

  v4 = (int *)(a1 + 80);
  v5 = *v4;
  v6 = v4[1];
  v7 = v4[2];
  v8 = v4[3];
  v9 = v4[4];
  v10 = v4[5];
  v4 += 6;
  *(_DWORD *)a2 = v5;
  *((_DWORD *)a2 + 1) = v6;
  *((_DWORD *)a2 + 2) = v7;
  *((_DWORD *)a2 + 3) = v8;
  *((_DWORD *)a2 + 4) = v9;
  *((_DWORD *)a2 + 5) = v10;
  v11 = (int *)(a2 + 3);
  v12 = v4[1];
  v13 = v4[2];
  v14 = v4[3];
  v15 = v4[4];
  v16 = v4[5];
  *v11 = *v4;
  v11[1] = v12;
  v11[2] = v13;
  v11[3] = v14;
  v11[4] = v15;
  v11[5] = v16;
  v17.n64_u64[0] = sub_60858B20(a1).n64_u64[0];
  if ( FIELD_U32(a1, 252) )
  {
    v18 = 0.0;
    v19 = 0.0;
  }
  else
  {
    v25 = FIELD_U8(a1, 218);
    v19 = 0.0;
    if ( (v25 & 3) == 2 )
    {
      v18 = FIELD_F32(a1, 56);
    }
    else
    {
      v18 = 0.0;
      if ( (v25 & 3) == 0 )
        v18 = FIELD_F32(a1, 56) * 0.5;
    }
    v26 = (v25 >> 2) & 3;
    if ( v26 == 2 )
    {
      v19 = FIELD_F32(a1, 60);
    }
    else if ( !v26 )
    {
      v19 = FIELD_F32(a1, 60) * 0.5;
    }
  }
  v20 = v17.n64_f32[1] - v19;
  v21 = v17.n64_f32[0] + v18;
  v22 = a2[4];
  v23 = a2[2];
  v27 = *a2;
  LODWORD(v28) = *((_DWORD *)a2 + 2);
  LODWORD(v29) = *((_DWORD *)a2 + 4);
  LODWORD(v30) = *((_DWORD *)a2 + 6);
  LODWORD(v31) = *((_DWORD *)a2 + 8);
  LODWORD(v32) = *((_DWORD *)a2 + 10);
  *((float *)&v28 + 1) = *((float *)a2 + 3)
                       + (float)((float)(v20 * *((float *)&v27 + 1)) + (float)(v21 * *(float *)&v27));
  *((float *)&v30 + 1) = *((float *)a2 + 7)
                       + (float)((float)(v20 * *((float *)&v23 + 1)) + (float)(v21 * *(float *)&v23));
  *((float *)&v32 + 1) = *((float *)a2 + 11)
                       + (float)((float)(v20 * *((float *)&v22 + 1)) + (float)(v21 * *(float *)&v22));
  *((float *)&v27 + 1) = -*((float *)a2 + 1);
  *((float *)&v29 + 1) = -*((float *)&v23 + 1);
  *((float *)&v31 + 1) = -*((float *)&v22 + 1);
  *a2 = v27;
  a2[1] = v28;
  a2[2] = v29;
  a2[3] = v30;
  a2[4] = v31;
  a2[5] = v32;
  return -*((float *)&v23 + 1);
}
