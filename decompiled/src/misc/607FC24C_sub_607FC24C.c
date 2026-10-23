/* sub_607FC24C
 * address: 0x607FC24C   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607FC24C(int a1, _DWORD *a2)
{
  _DWORD *result; // r0
  int v3; // r12
  int v4; // r3
  int v5; // r2
  int v6; // r0
  int v7; // r3
  _DWORD *v8; // r2

  result = *(_DWORD **)(a1 + 176);
  if ( result )
  {
    v3 = result[5];
    v4 = result[7];
    if ( v4 < v3 )
    {
      result[7] = v4 + 1;
      v5 = result[4];
      v6 = result[6] + v4;
      v7 = v6 - v3;
      if ( v6 < v3 )
        v7 = v6;
      *(_DWORD *)(v5 + 20 * v7) = *a2;
      v8 = (_DWORD *)(v5 + 20 * v7);
      v8[1] = a2[1];
      v8[2] = a2[2];
      v8[3] = a2[3];
      result = (_DWORD *)a2[4];
      v8[4] = result;
    }
  }
  return result;
}
