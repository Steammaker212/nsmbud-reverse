/* sub_6086BF0C
 * address: 0x6086BF0C   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6086BF0C(_DWORD *result)
{
  int v1; // r4
  int v2; // r2
  unsigned int v3; // r1
  int v4; // r7
  int v5; // r6
  int v6; // r2
  unsigned int v7; // r5
  int v8; // r7
  int v9; // r6
  int v10; // lr
  unsigned int v11; // r1
  unsigned int v12; // r1
  unsigned int v13; // r1
  unsigned int v14; // r1

  v1 = *result;
  v2 = result[1];
  v3 = 0;
  v4 = *(unsigned __int16 *)(*result + 170);
  result[5] = 8;
  result[6] = 0;
  result[7] = -1;
  result[8] = 0;
  result[9] = 8;
  result[10] = 0;
  result[11] = -1;
  result[12] = 0;
  result[13] = 8;
  result[14] = 0;
  result[15] = -1;
  result[16] = 0;
  result[17] = 8;
  result[18] = 0;
  result[19] = -1;
  result[20] = 0;
  result[21] = 8;
  result[22] = 0;
  result[23] = -1;
  v5 = 1;
  if ( v2 > 1 )
    v5 = v2 + 1;
  v6 = 72 * v2;
  v7 = (((unsigned int)(v4 + 31) >> 3) & 0x3FFC) * v5;
  result[4] = v7;
  v8 = (FIELD_U16(v1, 174) + 7) & 0x1FFF8;
  result[8] = v8;
  v9 = FIELD_U8(v1, 169);
  result[12] = 4 * v9;
  v10 = FIELD_U8(v1, 169);
  result[20] = 8 * v10;
  result[16] = v6;
  result[2] = 0;
  if ( v7 )
    v3 = 0;
  result[3] = 8;
  if ( v7 )
  {
    result[7] = 0;
    result[3] = 8;
    result[2] = v7;
    v3 = v7;
  }
  if ( v8 )
  {
    v11 = (v3 + 7) & 0xFFFFFFF8;
    result[11] = v11;
    v3 = v8 + v11;
    result[3] = 8;
    result[2] = v3;
  }
  if ( v9 )
  {
    v12 = (v3 + 7) & 0xFFFFFFF8;
    result[15] = v12;
    v3 = 4 * v9 + v12;
    result[3] = 8;
    result[2] = v3;
  }
  if ( v6 )
  {
    v13 = (v3 + 7) & 0xFFFFFFF8;
    result[19] = v13;
    v3 = v6 + v13;
    result[3] = 8;
    result[2] = v3;
  }
  if ( v10 )
  {
    v14 = (v3 + 7) & 0xFFFFFFF8;
    result[23] = v14;
    result[3] = 8;
    result[2] = 8 * v10 + v14;
  }
  return result;
}
