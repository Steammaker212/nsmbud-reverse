/* sub_60450CF0
 * address: 0x60450CF0   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60450CF0(int a1, int a2, unsigned int a3)
{
  _DWORD *result; // r0
  _DWORD *v4; // r2
  int v5; // r3
  bool v6; // zf
  int v7; // t1

  if ( a3 >= 0xC )
    a3 = 0;
  result = *(_DWORD **)(a1 + 4 * a3 + 16);
  if ( result[215] < result[217] )
  {
    v4 = result + 309;
    v5 = result[309];
    v6 = v5 == 0;
    if ( v5 )
    {
      v4 = result + 310;
      v6 = result[310] == 0;
    }
    if ( v6 || (v7 = result[311], result += 311, v4 = result, !v7) )
      *v4 = a2;
  }
  return result;
}
