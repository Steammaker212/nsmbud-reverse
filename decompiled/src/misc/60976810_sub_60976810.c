/* sub_60976810
 * address: 0x60976810   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60976810(int a1, _DWORD *a2)
{
  _DWORD *result; // r0
  int *v5; // r6
  int v6; // r7
  int v7; // t1

  result = *(_DWORD **)(a1 + 2356);
  if ( result )
  {
    v5 = *(int **)(a1 + 2364);
    v6 = 4 * (_DWORD)result;
    do
    {
      v7 = *v5++;
      result = sub_609729B4(*(_DWORD **)(v7 + 140), a1, FIELD_U32(v7, 96), a2);
      v6 -= 4;
    }
    while ( v6 );
  }
  return result;
}
