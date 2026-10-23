/* sub_6083CDB4
 * address: 0x6083CDB4   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6083CDB4(int *result, int a2, int a3)
{
  int v3; // r1
  int v4; // r9
  int *v5; // r12
  int v6; // r7
  int v7; // r10
  int v8; // lr
  int v9; // r8
  int v10; // r6
  int v11; // r7
  _DWORD *v12; // r4
  _DWORD *v13; // r1
  _DWORD *v14; // r5
  int v15; // r3
  int v16; // r5
  _DWORD *v17; // r4
  int v18; // r6
  int v19; // r7
  int *v20; // r6

  *((_BYTE *)result + 65) = *(_BYTE *)a3;
  v3 = FIELD_U16(a3, 2);
  result[2] = v3;
  v4 = FIELD_U32(a3, 8);
  v5 = *(int **)(a3 + 16);
  result[4] = *(_DWORD *)v4;
  result[5] = FIELD_U32(v4, 4);
  result[6] = FIELD_U32(v4, 8);
  result[7] = FIELD_U32(v4, 12);
  *((double *)result + 4) = FIELD_F32(v4, 16);
  *((double *)result + 5) = FIELD_F32(v4, 20);
  if ( (*(_BYTE *)a3 & 1) != 0 )
  {
    result[12] = *v5;
    result[13] = v5[1];
    result[14] = v5[2];
    v6 = v5[3];
  }
  else
  {
    v6 = 0x7FFFFFFF;
    result[12] = 0;
    result[13] = 0;
    result[14] = 0x7FFFFFFF;
  }
  result[15] = v6;
  v7 = *result;
  v8 = FIELD_U16(a3, 2) - 1;
  v9 = *result + 16 * v8;
  if ( (unsigned int)v3 >= 2 )
  {
    v10 = 1;
    v11 = 0;
    v12 = (_DWORD *)(*result + 16 * v8);
    do
    {
      ++v10;
      v13 = (_DWORD *)(v4 + 3 * v11);
      *(_DWORD *)(v7 + v11) = v13[12];
      v14 = (_DWORD *)(v7 + v11);
      v11 += 16;
      v14[1] = v13[13];
      v14[2] = v13[14];
      v14[3] = v13[15];
      *v12 = v13[16];
      v12[1] = v13[17];
      v12 += 2;
      v3 = result[2];
    }
    while ( v10 < v3 );
  }
  if ( v3 >= 2 )
  {
    v15 = 1;
    v16 = 0;
    v17 = (_DWORD *)(v9 + 8 * v8);
    do
    {
      if ( (*(_BYTE *)a3 & 1) != 0 )
      {
        v20 = &v5[2 * v16];
        *v17 = v20[8];
        v17[1] = v20[9];
        v17[2] = v20[10];
        v19 = v16;
        v18 = v20[11];
      }
      else
      {
        v18 = 0x7FFFFFFF;
        *v17 = 0;
        v17[1] = 0;
        v19 = 4 * (v15 - 1);
        v17[2] = 0x7FFFFFFF;
      }
      ++v15;
      v17 += 4;
      v16 += 4;
      *(_DWORD *)(v9 + 8 * v8 + 4 * (v19 | 3)) = v18;
    }
    while ( v15 < result[2] );
  }
  *((_BYTE *)result + 64) = 1;
  return result;
}
