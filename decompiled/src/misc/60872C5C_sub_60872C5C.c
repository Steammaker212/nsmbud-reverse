/* sub_60872C5C
 * address: 0x60872C5C   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60872C5C(_DWORD *result)
{
  int v1; // r2
  int v2; // r1
  int v3; // r12
  int v4; // r6
  int v5; // r9
  int v6; // r2
  int v7; // r7
  unsigned int v8; // r2
  int v9; // r12
  unsigned int v10; // r1
  unsigned int v11; // r1
  unsigned int v12; // r1

  v1 = *result;
  v2 = 0;
  v3 = *(unsigned __int16 *)(*result + 212);
  result[3] = 0;
  result[4] = 8;
  result[5] = 0;
  result[6] = -1;
  result[7] = 0;
  result[8] = 8;
  result[9] = 0;
  result[10] = -1;
  result[11] = 0;
  result[12] = 8;
  result[13] = 0;
  result[14] = -1;
  result[15] = 0;
  result[16] = 8;
  result[17] = 0;
  result[18] = -1;
  v4 = FIELD_U8(v1, 218);
  result[3] = 4 * v4;
  v5 = FIELD_U8(v1, 218);
  v6 = 1;
  result[7] = 4 * v5;
  v7 = result[19];
  if ( v7 > 1 )
    v6 = v7 + 1;
  v8 = v6 * (((unsigned int)(v3 + 31) >> 3) & 0x3FFC);
  v9 = 72 * v7;
  result[11] = v8;
  result[15] = 72 * v7;
  result[1] = 0;
  result[2] = 8;
  if ( v4 )
  {
    result[6] = 0;
    result[1] = 4 * v4;
    result[2] = 8;
    v2 = 4 * v4;
  }
  if ( v5 )
  {
    v10 = (v2 + 7) & 0xFFFFFFF8;
    result[10] = v10;
    v2 = 4 * v5 + v10;
    result[1] = v2;
    result[2] = 8;
  }
  if ( v8 )
  {
    v11 = (v2 + 7) & 0xFFFFFFF8;
    result[14] = v11;
    v2 = v8 + v11;
    result[1] = v2;
    result[2] = 8;
  }
  if ( v9 )
  {
    v12 = (v2 + 7) & 0xFFFFFFF8;
    result[18] = v12;
    result[1] = v9 + v12;
    result[2] = 8;
  }
  return result;
}
