/* sub_60778454
 * address: 0x60778454   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60778454(_DWORD *a1, int a2)
{
  int result; // r0
  int v4; // lr
  int v5; // r3
  int v6; // r2
  int v7; // r12
  int v8; // r4
  int v9; // r3
  int v10; // r5

  result = -1;
  v4 = a1[97];
  if ( v4 )
  {
    v5 = a1[94];
    v6 = a1[95];
    v7 = a1[96];
    v8 = v5 + 4 * v7;
    v9 = 0;
    while ( 1 )
    {
      v10 = v6;
      if ( v7 + v9 < v6 )
        v10 = 0;
      if ( *(_DWORD *)(v8 - 4 * v10 + 4 * v9) == a2 )
        break;
      if ( v4 == ++v9 )
        return result;
    }
    return v9;
  }
  return result;
}
