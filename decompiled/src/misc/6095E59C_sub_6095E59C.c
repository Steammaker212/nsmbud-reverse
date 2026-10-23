/* sub_6095E59C
 * address: 0x6095E59C   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095E59C(_DWORD *a1, float *a2, unsigned int a3, int a4)
{
  unsigned int v7; // lr
  int v8; // r1
  unsigned int v9; // r5
  char v10; // r12
  unsigned int v11; // r2
  int v12; // r3
  float v13; // s2
  int v14; // r0
  int v15; // r6
  unsigned int v16; // r4
  unsigned int v17; // r7
  unsigned int v18; // r4
  float *v19; // r0
  int v21; // [sp+0h] [bp-40h]

  v7 = a3;
  v8 = a1[114];
  if ( v8 < 1 )
    return 0;
  v9 = 0;
  v10 = 0;
  if ( a3 >= 3 )
    v7 = 0;
  v21 = 0;
  do
  {
    if ( (a4 & (1 << v9)) == 0 )
    {
      v11 = a1[155];
      v12 = a1[156];
      v13 = a2[3];
      v14 = v12;
      if ( v11 > v9 )
        v14 = v12 + 1396 * v9;
      if ( v13 > 0.0 )
      {
        v15 = FIELD_U32(v14, 988);
        if ( v15 < 1 )
        {
LABEL_15:
          if ( (v10 & 1) == 0 )
          {
            v18 = v7;
            sub_609606E0(3.4028e38);
            v11 = a1[155];
            v12 = a1[156];
            v7 = v18;
          }
          v10 = 1;
          if ( v11 > v9 )
            v12 += 1396 * v9;
          v19 = (float *)(v12 + 24 * v7);
          if ( v19[205] > 3.4028e38 )
            v19[205] = 3.4028e38;
          if ( v19[206] > 3.4028e38 )
            v19[206] = 3.4028e38;
          if ( v19[207] > 3.4028e38 )
            v19[207] = 3.4028e38;
          if ( v19[208] < -3.4028e38 )
            v19[208] = -3.4028e38;
          if ( v19[209] < -3.4028e38 )
            v19[209] = -3.4028e38;
          if ( v19[210] < -3.4028e38 )
            v19[210] = -3.4028e38;
          v21 |= 1 << v9;
          v8 = a1[114];
        }
        else
        {
          v16 = 0;
          while ( 1 )
          {
            v17 = 0;
            if ( v16 < 0x18 )
              v17 = v16;
            if ( v13 < (float)((float)((float)((float)(a2[1] * *(float *)(v14 + 16 * v17 + 996))
                                             + (float)(*a2 * *(float *)(v14 + 16 * v17 + 992)))
                                     + (float)(a2[2] * *(float *)(v14 + 16 * v17 + 1000)))
                             - *(float *)(v14 + 16 * v17 + 1004)) )
              break;
            if ( (int)++v16 >= v15 )
              goto LABEL_15;
          }
        }
      }
    }
    ++v9;
  }
  while ( (int)v9 < v8 );
  return v21;
}
