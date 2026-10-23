/* sub_6095D2B8
 * address: 0x6095D2B8   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095D2B8(_DWORD *a1, float *a2, unsigned int a3, int a4)
{
  int v6; // lr
  float v7; // s0
  unsigned int v8; // r5
  char v9; // r12
  unsigned int v10; // r8
  _DWORD *v11; // r1
  _DWORD *v12; // r2
  int v13; // r7
  unsigned int v14; // r0
  unsigned int v15; // r10
  float *v16; // r4
  float *v17; // r3
  float v18; // s4
  float v19; // s6
  float v20; // s2
  float v21; // s8
  float *v22; // r3
  float v23; // s10
  float *v24; // r3
  int v25; // r1
  char *v26; // r3
  _DWORD *v27; // r0
  float *v28; // r0
  unsigned int v30; // [sp+0h] [bp-48h]
  int v31; // [sp+4h] [bp-44h]
  int v32; // [sp+8h] [bp-40h]
  int v33; // [sp+Ch] [bp-3Ch] BYREF
  float v34; // [sp+10h] [bp-38h]
  float v35; // [sp+14h] [bp-34h]
  float v36; // [sp+18h] [bp-30h]
  float v37; // [sp+1Ch] [bp-2Ch]
  float v38; // [sp+20h] [bp-28h]

  v33 = 2139095039;
  v34 = 3.4028e38;
  v35 = 3.4028e38;
  v36 = -3.4028e38;
  v37 = -3.4028e38;
  v38 = -3.4028e38;
  v6 = a1[114];
  if ( v6 < 1 )
    return 0;
  v7 = 3.4028e38;
  v8 = 0;
  v9 = 0;
  v31 = a4;
  if ( a3 >= 3 )
    a3 = 0;
  v32 = 0;
  v30 = a3;
  do
  {
    if ( (a4 & (1 << v8)) == 0 )
    {
      v10 = a1[155];
      v11 = (_DWORD *)a1[156];
      v12 = v11;
      if ( v10 > v8 )
        v12 = &v11[349 * v8];
      v13 = v12[247];
      if ( v13 < 1 )
      {
LABEL_20:
        if ( (v9 & 1) == 0 )
        {
          v25 = v12[11];
          v26 = (char *)v12[10];
          v27 = (_DWORD *)((char *)v12 + (v25 >> 1));
          if ( (v25 & 1) != 0 )
            v26 = *(char **)&v26[*v27];
          ((void (__fastcall *)(_DWORD *, int *, float *, float))v26)(v27, &v33, a2, v7);
          v7 = *(float *)&v33;
          v10 = a1[155];
          v11 = (_DWORD *)a1[156];
        }
        v9 = 1;
        if ( v10 > v8 )
          v11 += 349 * v8;
        v28 = (float *)&v11[6 * v30];
        if ( v28[223] > v7 )
          v28[223] = v7;
        if ( v28[224] > v34 )
          v28[224] = v34;
        a4 = v31;
        if ( v28[225] > v35 )
          v28[225] = v35;
        if ( v28[226] < v36 )
          v28[226] = v36;
        if ( v28[227] < v37 )
          v28[227] = v37;
        if ( v28[228] < v38 )
          v28[228] = v38;
        v32 |= 1 << v8;
        v6 = a1[114];
      }
      else
      {
        v14 = 0;
        while ( 1 )
        {
          v15 = 0;
          v16 = a2 + 3;
          if ( v14 < 0x18 )
            v15 = v14;
          v17 = (float *)&v12[4 * v15];
          v18 = v17[249];
          v19 = v17[250];
          v20 = v17[248];
          v21 = v17[251];
          v22 = a2 + 3;
          if ( v18 > 0.0 )
            v22 = a2;
          v23 = v22[1];
          v24 = a2 + 3;
          if ( v19 > 0.0 )
            v24 = a2;
          if ( v20 > 0.0 )
            v16 = a2;
          if ( (float)((float)((float)((float)(v18 * v23) + (float)(v20 * *v16)) + (float)(v19 * v24[2])) - v21) > 0.0 )
            break;
          if ( (int)++v14 >= v13 )
            goto LABEL_20;
        }
        a4 = v31;
      }
    }
    ++v8;
  }
  while ( (int)v8 < v6 );
  return v32;
}
