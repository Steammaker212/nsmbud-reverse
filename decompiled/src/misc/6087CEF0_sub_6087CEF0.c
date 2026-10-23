/* sub_6087CEF0
 * address: 0x6087CEF0   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6087CEF0(_DWORD *result)
{
  int v1; // r12
  int v2; // r2
  int v3; // r3
  int v4; // lr
  unsigned int v5; // r1
  int v6; // r4
  int v7; // lr
  bool v8; // zf
  unsigned int v9; // r4
  int v10; // r6
  int v11; // r12
  int v12; // r2
  int v13; // r2
  unsigned int v14; // r2

  v1 = result[1];
  v2 = 0;
  v3 = *(unsigned __int16 *)(*result + 76);
  v4 = *(_DWORD *)(*result + 72);
  v5 = 8;
  result[7] = -1;
  result[11] = -1;
  result[12] = 0;
  result[13] = 8;
  result[14] = 0;
  result[15] = -1;
  result[16] = 0;
  result[17] = 8;
  result[18] = 0;
  result[19] = -1;
  result[5] = 16;
  result[6] = 0;
  result[4] = v3 << 6;
  result[9] = 16;
  result[10] = 0;
  result[8] = 96 * v3;
  v6 = v4 & 0x300;
  v7 = 0;
  v8 = v6 == 768;
  v9 = 8;
  if ( v8 )
    result[13] = 16;
  v10 = 9 * v1;
  if ( v8 )
  {
    v7 = 16 * v3;
    result[14] = 0;
    v9 = 16;
  }
  result[12] = v7;
  v11 = 72 * v1;
  result[16] = 8 * v10;
  result[2] = 0;
  result[3] = 8;
  if ( v3 )
  {
    result[7] = 0;
    v5 = 16;
    v2 = 160 * v3;
    result[3] = 16;
    result[11] = v3 << 6;
    result[2] = 160 * v3;
  }
  if ( v7 )
  {
    v12 = v2 + v9 - 1;
    if ( v5 < v9 )
      v5 = v9;
    v13 = v12 & -v9;
    result[15] = v13;
    v2 = v7 + v13;
    result[3] = v5;
    result[2] = v2;
  }
  if ( v11 )
  {
    v14 = (v2 + 7) & 0xFFFFFFF8;
    if ( v5 <= 8 )
      v5 = 8;
    result[19] = v14;
    result[3] = v5;
    result[2] = v11 + v14;
  }
  return result;
}
