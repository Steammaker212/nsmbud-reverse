/* sub_60529288
 * address: 0x60529288   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60529288(_DWORD *a1)
{
  int v1; // lr
  unsigned int *v2; // r2
  unsigned int v3; // r2
  _DWORD *v4; // r12
  int v5; // r3
  float *v6; // r2
  float v7; // s2
  float v8; // s4
  unsigned int v9; // r1
  float *v10; // r1
  int v11; // r3
  unsigned int *v12; // r1
  unsigned int v13; // r1
  unsigned int v14; // r2
  _DWORD *v15; // lr
  unsigned int v16; // r0
  float *v17; // r1
  float v18; // s2
  float v19; // s4
  unsigned int v20; // r1
  float *v21; // r0
  float v23[3]; // [sp+0h] [bp-20h] BYREF
  float v24; // [sp+Ch] [bp-14h]
  float v25; // [sp+10h] [bp-10h]
  int v26; // [sp+14h] [bp-Ch]

  v1 = a1[1156];
  if ( v1 == 3 )
  {
    v9 = a1[1158];
  }
  else
  {
    v2 = a1 + 1157;
    if ( v1 == 2 )
    {
      v3 = *v2;
      v4 = a1 + 943;
      v5 = 0;
      if ( v3 >= 0x43 )
        v3 = 0;
      if ( a1[1158] < 0x43u )
        v5 = a1[1158];
      v6 = (float *)v4[v3];
      v7 = v6[7];
      v8 = v6[15];
      v23[0] = (float)(v6[6] + *(float *)(v4[v5] + 24)) * 0.5;
      goto LABEL_13;
    }
    v9 = *v2;
  }
  if ( v9 >= 0x43 )
    v9 = 0;
  v10 = (float *)a1[v9 + 943];
  v7 = v10[7];
  v8 = v10[15];
  v23[0] = v10[6];
LABEL_13:
  v23[1] = v7 + (float)(v8 * -0.5);
  v23[2] = 100.0;
  v11 = a1[1155] - v1;
  if ( v11 == 3 )
  {
    v20 = a1[1162];
  }
  else
  {
    v12 = a1 + 1161;
    if ( v11 == 2 )
    {
      v13 = *v12;
      v14 = 0;
      v15 = a1 + 943;
      v16 = a1[1162];
      if ( v13 >= 0x43 )
        v13 = 0;
      v17 = (float *)v15[v13];
      if ( v16 < 0x43 )
        v14 = v16;
      v18 = v17[7];
      v19 = v17[15];
      v24 = (float)(v17[6] + *(float *)(v15[v14] + 24)) * 0.5;
      goto LABEL_25;
    }
    v20 = *v12;
  }
  if ( v20 >= 0x43 )
    v20 = 0;
  v21 = (float *)a1[v20 + 943];
  v18 = v21[7];
  v19 = v21[15];
  v24 = v21[6];
LABEL_25:
  v25 = v18 + (float)(v19 * -0.5);
  v26 = 1120403456;
  return sub_60530DD8(dword_60CAAAC0, v23);
}
