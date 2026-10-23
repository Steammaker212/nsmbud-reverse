/* sub_6042BCAC
 * address: 0x6042BCAC   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6042BCAC(_DWORD *result, int a2, unsigned int a3)
{
  _DWORD *v4; // r9
  int v5; // r4
  int v6; // r7
  int v7; // r0
  _DWORD *v8; // r1

  v4 = result;
  if ( a3 >= 4 )
  {
    v5 = 0;
    do
    {
      v6 = dword_60CC73E8(v4[179]);
      v7 = v6 + sub_60913FB4(v4 + 176);
      v8 = (_DWORD *)(a2 + v5);
      *(_DWORD *)(v7 + v5) = *(_DWORD *)(a2 + v5);
      result = (_DWORD *)(v7 + v5);
      v5 += 36;
      result[1] = v8[1];
      result[2] = v8[2];
      result[3] = v8[3];
      result[4] = v8[4];
      result[5] = v8[5];
      result[6] = v8[6];
      result[7] = v8[7];
      result[8] = v8[8];
    }
    while ( v5 != 144 );
  }
  return result;
}
