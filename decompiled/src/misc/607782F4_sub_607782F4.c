/* sub_607782F4
 * address: 0x607782F4   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607782F4(_DWORD *a1)
{
  int v1; // r2
  int v3; // r1
  int v4; // r2
  int v5; // r0
  bool v6; // vf
  int v7; // r2

  v1 = a1[97];
  if ( !v1 )
    return -1;
  v3 = a1[94];
  if ( v1 >= 1 )
  {
    v4 = a1[95];
    v5 = a1[96];
    v6 = __OFSUB__(v5, v4);
    v7 = v5 - v4;
    if ( v7 < 0 != v6 )
      v7 = v5;
    v3 += 4 * v7;
  }
  return *(_DWORD *)v3;
}
