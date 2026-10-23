/* sub_607891F8
 * address: 0x607891F8   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607891F8(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // r3
  int v3; // r2
  int v4; // r2
  int v5; // r3
  int v6; // r0
  int v7; // r1

  v2 = a1[20];
  v3 = 0;
  if ( (int)v2 > (int)a2 )
  {
    v4 = a1[17];
    if ( v2 > a2 )
    {
      v5 = a1[18];
      v6 = a1[19] + a2;
      v7 = v6 - v5;
      if ( v6 < v5 )
        v7 = v6;
      v4 += 4 * v7;
    }
    return *(_DWORD *)v4;
  }
  return v3;
}
