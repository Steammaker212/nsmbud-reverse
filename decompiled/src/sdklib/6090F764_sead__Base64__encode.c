/* sead__Base64__encode
 * address: 0x6090F764   size: 288   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sead__Base64__encode(_BYTE *result, unsigned __int8 *a2, unsigned int a3, int a4)
{
  const char *v4; // r12
  unsigned int v5; // r3
  unsigned int v6; // lr
  unsigned int v7; // r2
  unsigned __int8 *v8; // r4
  unsigned int v9; // r5
  char v10; // r1

  v4 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  if ( a4 )
    v4 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_";
  v5 = 3 * (a3 / 3);
  v6 = a3 % 3;
  if ( v5 )
  {
    v7 = 0;
    do
    {
      v8 = &a2[v7];
      v9 = a2[v7];
      v7 += 3;
      *result = v4[v9 >> 2];
      result[1] = v4[(v8[1] >> 4) & 0xFFFFFFCF | (16 * (*v8 & 3))];
      result[2] = v4[(v8[2] >> 6) & 0xFFFFFFC3 | (4 * (v8[1] & 0xF))];
      result[3] = v4[v8[2] & 0x3F];
      result += 4;
    }
    while ( v7 < v5 );
    a2 += v7;
  }
  if ( (v6 & 3) == 1 )
  {
    *result = v4[*a2 >> 2];
    result[1] = v4[(16 * *a2) & 0x30];
    v10 = 61;
  }
  else
  {
    if ( (v6 & 3) != 2 )
      return result;
    *result = v4[*a2 >> 2];
    result[1] = v4[(a2[1] >> 4) & 0xFFFFFFCF | (16 * (*a2 & 3))];
    v10 = v4[(4 * a2[1]) & 0x3C];
  }
  result[2] = v10;
  result[3] = 61;
  return result;
}
