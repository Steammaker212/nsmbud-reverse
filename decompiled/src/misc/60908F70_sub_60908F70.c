/* sub_60908F70
 * address: 0x60908F70   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60908F70(_DWORD *result, int a2, int a3, int a4, int a5)
{
  bool v5; // cc
  int v6; // r3
  _BYTE *v7; // r4
  _DWORD *v8; // r1

  v5 = a2 <= 32;
  *result = off_60C5CF38;
  result[4] = 0;
  result[3] = 0;
  result[2] = 0;
  result[1] = 0;
  result[6] = 0x80000000;
  result[5] = 0x80000000;
  result[7] = 2139095039;
  result[8] = 2139095039;
  result[9] = -8388609;
  result[10] = -8388609;
  result[59] = 1056964608;
  result[60] = 1056964608;
  result[61] = 1048576000;
  result[62] = 1048576000;
  result[63] = a2;
  result[64] = a3;
  result[65] = a4;
  if ( a2 > 32 )
    a2 = 32;
  v6 = 0;
  result[66] = a5;
  result[67] = 0;
  result[68] = 0;
  result[70] = -8388609;
  result[69] = -8388609;
  result[75] = 0;
  result[76] = 0;
  result[74] = 0;
  result[73] = 0;
  result[72] = 0;
  result[71] = 0;
  if ( !v5 )
    result[63] = a2;
  do
  {
    v7 = (char *)result + v6;
    v8 = &result[v6];
    v6 += 2;
    v7[172] = 30;
    v7[204] = 1;
    v8[11] = 0;
    v7[173] = 30;
    v7[205] = 1;
    v8[12] = 0;
  }
  while ( v6 != 32 );
  return result;
}
