/* sub_609645DC
 * address: 0x609645DC   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609645DC(int result, float *a2, float *a3, float *a4)
{
  unsigned int v4; // r6
  unsigned int v5; // r5
  unsigned int v6; // r12
  int v7; // r5
  unsigned int v8; // r4
  int v9; // r5
  _DWORD *v10; // lr
  float v11; // s0
  int v12; // r4
  unsigned int v13; // r5
  float *v14; // r7
  float v16; // s5
  float v17; // s7
  float v18; // s12
  float v19; // s8
  float v20; // s10
  float v21; // s2
  float v22; // s11
  float v23; // s14
  float v24; // s4
  float v25; // s12
  float v26; // s14
  float v27; // s3
  float v28; // s8
  float v29; // s12
  float v30; // s2
  float v31; // s4
  float v32; // s6

  v4 = FIELD_U32(result, 36);
  v5 = 0;
  v6 = 0;
  if ( v4 < 2 )
    v5 = FIELD_U32(result, 36);
  if ( *(int *)(result + 12 * v5 + 20) >= 1 )
  {
    do
    {
      v7 = result + 12 * v5;
      v8 = FIELD_U32(v7, 12);
      v9 = FIELD_U32(v7, 16);
      if ( v8 > v6 )
        v9 += 4 * v6;
      v10 = *(_DWORD **)v9;
      if ( *(int *)(*(_DWORD *)v9 + 8) >= 1 )
      {
        v11 = *a2;
        v12 = 0;
        v13 = 0;
        do
        {
          v14 = (float *)v10[1];
          if ( *v10 > v13++ )
            v14 = (float *)((char *)v14 + v12);
          v12 += 12;
          v16 = v14[1];
          v17 = v14[2];
          v18 = a4[7] + (float)((float)((float)(v16 * a4[5]) + (float)(*v14 * a4[4])) + (float)(v17 * a4[6]));
          v19 = a4[3] + (float)((float)((float)(v16 * a4[1]) + (float)(*v14 * *a4)) + (float)(v17 * a4[2]));
          v20 = a4[11] + (float)((float)((float)(v16 * a4[9]) + (float)(*v14 * a4[8])) + (float)(v17 * a4[10]));
          v21 = a3[15] + (float)((float)((float)(v18 * a3[13]) + (float)(v19 * a3[12])) + (float)(v20 * a3[14]));
          v22 = a3[10] / v21;
          v23 = v18 * (float)(a3[5] / v21);
          v24 = (float)(v18 * (float)(a3[9] / v21)) + (float)(v19 * (float)(a3[8] / v21));
          v25 = (float)(v18 * (float)(a3[1] / v21)) + (float)(v19 * (float)(*a3 / v21));
          v26 = v23 + (float)(v19 * (float)(a3[4] / v21));
          v27 = a3[3] / v21;
          v28 = a3[11] / v21;
          v29 = v25 + (float)(v20 * (float)(a3[2] / v21));
          v30 = (float)(a3[7] / v21) + (float)(v26 + (float)(v20 * (float)(a3[6] / v21)));
          v31 = v28 + (float)(v24 + (float)(v20 * v22));
          v32 = v27 + v29;
          if ( v11 > (float)(v27 + v29) )
          {
            *a2 = v32;
            v11 = v27 + v29;
          }
          if ( a2[1] > v30 )
            a2[1] = v30;
          if ( a2[2] > v31 )
            a2[2] = v31;
          if ( a2[3] < v32 )
            a2[3] = v32;
          if ( a2[4] < v30 )
            a2[4] = v30;
          if ( a2[5] < v31 )
            a2[5] = v31;
        }
        while ( (signed int)v13 < v10[2] );
        v4 = FIELD_U32(result, 36);
      }
      v5 = 0;
      ++v6;
      if ( v4 < 2 )
        v5 = v4;
    }
    while ( (signed int)v6 < *(_DWORD *)(result + 12 * v5 + 20) );
  }
  return result;
}
