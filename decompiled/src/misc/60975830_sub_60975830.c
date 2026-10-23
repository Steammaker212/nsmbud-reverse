/* sub_60975830
 * address: 0x60975830   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60975830(_DWORD *a1, int a2)
{
  int *result; // r0
  int v4; // r2
  int v5; // t1
  int v6; // r3
  int i; // r2
  int v8; // r3
  int v9; // r12
  int v10; // r12

  v5 = a1[589];
  result = a1 + 589;
  v4 = v5;
  if ( v5 )
  {
    v6 = 4 * v4;
    for ( i = 0; *(_DWORD *)(result[2] + 4 * i) != a2; ++i )
    {
      v6 -= 4;
      if ( !v6 )
        return result;
    }
    v8 = a1[898];
    v9 = a1[896];
    if ( v9 )
    {
      v10 = 4 * v9;
      do
      {
        if ( *(_DWORD *)(*(_DWORD *)v8 + 588) == a2 )
          *(_BYTE *)(*(_DWORD *)v8 + 20) &= 0xFCu;
        v10 -= 4;
        v8 += 4;
      }
      while ( v10 );
    }
    return (int *)sub_608DEB9C(result, i, 1, v8);
  }
  return result;
}
