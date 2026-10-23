/* sub_606D8338
 * address: 0x606D8338   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D8338(_DWORD *a1, _DWORD *a2, int a3)
{
  int v3; // r3
  int v4; // r12
  int v5; // r2
  unsigned int v6; // r3
  _DWORD *v7; // r0
  int result; // r0

  v3 = a1[3191];
  if ( v3 == 2 )
  {
    v4 = 1;
    if ( a1[3188] - 1 == a3 )
      v4 = 9;
  }
  else
  {
    v4 = 1;
    if ( v3 == 1 )
    {
      v4 = 9;
      if ( !a3 )
        v4 = 1;
    }
  }
  v5 = (v4 | (16 * a3)) + a1[3189];
  v6 = v5 - 800;
  if ( v5 < 800 )
    v6 = v5;
  if ( v6 >= 0x320 )
    v6 = 0;
  v7 = &a1[2 * v6];
  *a2 = v7[1588];
  result = v7[1589];
  a2[1] = result;
  return result;
}
