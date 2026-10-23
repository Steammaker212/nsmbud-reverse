/* sub_6095E1E0
 * address: 0x6095E1E0   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095E1E0(_DWORD *a1, float *a2, unsigned int a3, int a4)
{
  int v7; // lr
  float v8; // s0
  unsigned int v9; // r5
  char v10; // r12
  unsigned int v11; // r0
  _DWORD *v12; // r3
  float v13; // s2
  _DWORD *v14; // r1
  int v15; // r6
  unsigned int v16; // r4
  unsigned int v17; // r7
  int v18; // r2
  char *v19; // r3
  _DWORD *v20; // r0
  float *v21; // r0
  unsigned int v23; // [sp+4h] [bp-44h]
  int v24; // [sp+8h] [bp-40h]
  int v25; // [sp+Ch] [bp-3Ch] BYREF
  float v26; // [sp+10h] [bp-38h]
  float v27; // [sp+14h] [bp-34h]
  float v28; // [sp+18h] [bp-30h]
  float v29; // [sp+1Ch] [bp-2Ch]
  float v30; // [sp+20h] [bp-28h]

  v25 = 2139095039;
  v26 = 3.4028e38;
  v27 = 3.4028e38;
  v28 = -3.4028e38;
  v29 = -3.4028e38;
  v30 = -3.4028e38;
  v7 = a1[114];
  if ( v7 < 1 )
    return 0;
  v8 = 3.4028e38;
  v9 = 0;
  v10 = 0;
  if ( a3 >= 3 )
    a3 = 0;
  v24 = 0;
  v23 = a3;
  do
  {
    if ( (a4 & (1 << v9)) == 0 )
    {
      v11 = a1[155];
      v12 = (_DWORD *)a1[156];
      v13 = a2[3];
      v14 = v12;
      if ( v11 > v9 )
        v14 = &v12[349 * v9];
      if ( v13 > 0.0 )
      {
        v15 = v14[247];
        if ( v15 < 1 )
        {
LABEL_15:
          if ( (v10 & 1) == 0 )
          {
            v18 = v14[9];
            v19 = (char *)v14[8];
            v20 = (_DWORD *)((char *)v14 + (v18 >> 1));
            if ( (v18 & 1) != 0 )
              v19 = *(char **)&v19[*v20];
            ((void (__fastcall *)(_DWORD *, int *, float *, float))v19)(v20, &v25, a2, v8);
            v8 = *(float *)&v25;
            v11 = a1[155];
            v12 = (_DWORD *)a1[156];
            a3 = v23;
          }
          v10 = 1;
          if ( v11 > v9 )
            v12 += 349 * v9;
          v21 = (float *)&v12[6 * a3];
          if ( v21[223] > v8 )
            v21[223] = v8;
          if ( v21[224] > v26 )
            v21[224] = v26;
          if ( v21[225] > v27 )
            v21[225] = v27;
          if ( v21[226] < v28 )
            v21[226] = v28;
          if ( v21[227] < v29 )
            v21[227] = v29;
          if ( v21[228] < v30 )
            v21[228] = v30;
          v24 |= 1 << v9;
          v7 = a1[114];
        }
        else
        {
          v16 = 0;
          while ( 1 )
          {
            v17 = 0;
            if ( v16 < 0x18 )
              v17 = v16;
            if ( v13 < (float)((float)((float)((float)(a2[1] * *(float *)&v14[4 * v17 + 249])
                                             + (float)(*a2 * *(float *)&v14[4 * v17 + 248]))
                                     + (float)(a2[2] * *(float *)&v14[4 * v17 + 250]))
                             - *(float *)&v14[4 * v17 + 251]) )
              break;
            if ( (int)++v16 >= v15 )
              goto LABEL_15;
          }
        }
      }
    }
    ++v9;
  }
  while ( (int)v9 < v7 );
  return v24;
}
