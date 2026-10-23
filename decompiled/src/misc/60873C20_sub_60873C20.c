/* sub_60873C20
 * address: 0x60873C20   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60873C20(int *result)
{
  int v1; // r2
  int v2; // r3
  int v3; // r6
  int v4; // r1
  int v5; // r5
  int v6; // r4
  unsigned int v7; // r3
  int v8; // r12
  unsigned int v9; // r2
  unsigned int v10; // r1
  unsigned int v11; // r1
  unsigned int v12; // r1

  v1 = *result;
  v2 = result[1];
  v3 = result[2];
  v4 = 0;
  v5 = result[3];
  result[8] = 8;
  result[9] = 0;
  result[10] = -1;
  result[12] = 8;
  result[13] = 0;
  result[14] = -1;
  result[16] = 8;
  result[17] = 0;
  result[18] = -1;
  result[19] = 0;
  result[20] = 8;
  result[21] = 0;
  result[22] = -1;
  if ( v1 < v2 )
    v1 = v2;
  v6 = 4 * v3;
  v7 = (v3 + 7) & 0xFFFFFFF8;
  v8 = 4 * v1;
  result[7] = 4 * v3;
  result[11] = 4 * v1;
  result[15] = v7;
  v9 = 0;
  if ( *((_BYTE *)result + 17) )
  {
    v9 = 0;
    if ( *((_BYTE *)result + 16) )
      v9 = (12 * v5 + 7) & 0xFFFFFFF8;
  }
  result[19] = v9;
  result[5] = 0;
  result[6] = 8;
  if ( v6 )
  {
    result[10] = 0;
    result[6] = 8;
    result[5] = v6;
    v4 = 4 * v3;
  }
  if ( v8 )
  {
    v10 = (v4 + 7) & 0xFFFFFFF8;
    result[14] = v10;
    v4 = v8 + v10;
    result[6] = 8;
    result[5] = v4;
  }
  if ( v7 )
  {
    v11 = (v4 + 7) & 0xFFFFFFF8;
    result[18] = v11;
    v4 = v7 + v11;
    result[6] = 8;
    result[5] = v4;
  }
  if ( v9 )
  {
    v12 = (v4 + 7) & 0xFFFFFFF8;
    result[22] = v12;
    result[6] = 8;
    result[5] = v9 + v12;
  }
  return result;
}
