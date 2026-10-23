/* sub_60963460
 * address: 0x60963460   size: 756   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60963460(int a1, unsigned int *a2, int a3, unsigned int *a4, float *a5)
{
  int result; // r0
  float *v6; // r10
  int v7; // r5
  int v8; // r9
  float v9; // s8
  float v10; // s4
  float v11; // s6
  float v12; // s2
  float i; // s0
  float *v14; // r8
  unsigned int v15; // r0
  float v16; // s16
  unsigned int v17; // r0
  _DWORD *v18; // r2

  result = a4[2];
  if ( result >= 1 )
  {
    v6 = (float *)a4[1];
    v7 = 1;
    v8 = 0;
    v9 = a5[1];
    v10 = *a5;
    v11 = a5[2];
    v12 = a5[3];
    for ( i = (float)((float)((float)(v9 * v6[1]) + (float)(*a5 * *v6)) + (float)(v11 * v6[2])) - v12; ; i = v16 )
    {
      v14 = v6;
      v15 = v7 % result;
      if ( *a4 > v15 )
        v14 = &v6[3 * v15];
      v16 = (float)((float)((float)(v9 * v14[1]) + (float)(v10 * *v14)) + (float)(v11 * v14[2])) - v12;
      if ( i <= 0.0 )
      {
        v17 = a2[2];
        a2[2] = v17 + 1;
        v18 = (_DWORD *)a2[1];
        if ( *a2 > v17 )
          v18 += 3 * v17;
        *v18 = *(_DWORD *)v14;
        v18[1] = *((_DWORD *)v14 + 1);
        v18[2] = *((_DWORD *)v14 + 2);
      }
      result = a4[2];
      if ( v7 >= result )
        break;
      v10 = *a5;
      v9 = a5[1];
      v11 = a5[2];
      v12 = a5[3];
      v6 = (float *)a4[1];
      v8 += 12;
      ++v7;
    }
  }
  return result;
}
