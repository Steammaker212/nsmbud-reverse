/* sub_6086A438
 * address: 0x6086A438   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6086A438(int *result)
{
  int v1; // r2
  int v2; // r3
  unsigned int v3; // r1
  int v4; // lr
  int v5; // r5
  unsigned int v6; // r4
  int v7; // r2
  bool v8; // zf
  int v9; // r3
  unsigned int v10; // r3
  unsigned int v11; // r3

  v1 = 0;
  v2 = 0;
  v3 = 0;
  v4 = result[2];
  v5 = -4;
  if ( result[1] >= 1 )
  {
    v1 = *result;
    v2 = result[1];
  }
  result[7] = 8;
  result[8] = 0;
  result[9] = -1;
  result[11] = 8;
  result[12] = 0;
  result[13] = -1;
  result[14] = 0;
  result[15] = 8;
  result[16] = 0;
  result[17] = -1;
  v6 = ((v2 + 31) >> 3) & 0xFFFFFFFC;
  result[6] = v6;
  if ( v1 < v2 )
    v1 = v2;
  v7 = 4 * v1;
  result[10] = v7;
  v8 = *((_BYTE *)result + 13) == 0;
  if ( *((_BYTE *)result + 13) )
    v8 = *((_BYTE *)result + 12) == 0;
  if ( !v8 )
    v3 = (12 * v4 + 7) & 0xFFFFFFF8;
  v9 = 0;
  result[14] = v3;
  result[4] = 0;
  if ( v6 )
  {
    v9 = 8;
    v5 = 0;
  }
  result[5] = 8;
  if ( v6 )
  {
    result[9] = v5;
    result[5] = v9;
    result[4] = v6;
    v9 = v6;
  }
  if ( v7 )
  {
    v10 = (v9 + 7) & 0xFFFFFFF8;
    result[13] = v10;
    v9 = v7 + v10;
    result[5] = 8;
    result[4] = v9;
  }
  if ( v3 )
  {
    v11 = (v9 + 7) & 0xFFFFFFF8;
    result[17] = v11;
    result[5] = 8;
    result[4] = v3 + v11;
  }
  return result;
}
