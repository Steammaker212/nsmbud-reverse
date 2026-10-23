/* sub_6086AC64
 * address: 0x6086AC64   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6086AC64(int *result)
{
  int v1; // r3
  int v2; // lr
  int v3; // r5
  int v4; // r12
  int v5; // r1
  int v6; // r6
  unsigned int v7; // r3
  int v8; // r3
  int v9; // r3
  int *v10; // r2
  int *v11; // r5
  unsigned int v12; // r2
  unsigned int v13; // r4
  int v14; // r2
  int v15; // r2

  v1 = result[1];
  v2 = result[2];
  v3 = *result;
  v4 = result[4];
  v5 = 0;
  result[9] = 8;
  result[10] = 0;
  result[11] = -1;
  result[13] = 8;
  result[14] = 0;
  result[15] = -1;
  result[17] = 8;
  result[18] = 0;
  result[19] = -1;
  result[20] = 0;
  result[21] = 8;
  result[22] = 0;
  result[23] = -1;
  result[24] = 0;
  result[25] = 8;
  result[26] = 0;
  result[27] = -1;
  result[28] = 0;
  result[29] = 8;
  result[30] = 0;
  result[31] = -1;
  v6 = 4 * v4;
  if ( v3 < v1 )
    v3 = v1;
  result[8] = v6;
  result[12] = 4 * v3;
  result[16] = (2 * v2 + 3) & 0xFFFFFFFC;
  v7 = 0;
  if ( *((_BYTE *)result + 21) )
  {
    v7 = 0;
    if ( *((_BYTE *)result + 20) )
      v7 = (12 * v4 + 7) & 0xFFFFFFF8;
  }
  result[20] = v7;
  v8 = result[3];
  result[24] = (4 * v8 + 7) & 0xFFFFFFF8;
  result[28] = 8 * v8;
  v9 = 0;
  result[6] = 0;
  result[7] = 8;
  if ( v6 )
    goto LABEL_9;
  while ( v5 != 20 )
  {
    v10 = &result[v5];
    v5 += 4;
    v6 = v10[12];
    if ( v6 )
    {
LABEL_9:
      v11 = &result[v5];
      v12 = result[7];
      v13 = result[v5 + 9];
      if ( v12 < v13 )
        v12 = result[v5 + 9];
      result[7] = v12;
      v14 = (v9 + v11[10] + v13 - 1) & -v13;
      result[6] = v14;
      v15 = v14 - v11[10];
      v9 = v6 + v15;
      v11[11] = v15;
      result[6] = v6 + v15;
    }
  }
  return result;
}
