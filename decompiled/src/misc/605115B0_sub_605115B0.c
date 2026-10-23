/* sub_605115B0
 * address: 0x605115B0   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605115B0(_DWORD *a1)
{
  int v1; // r1
  int v2; // r2

  v1 = 0;
  if ( a1[2394] == 3 )
  {
    v2 = a1[1183];
    v1 = 1;
    if ( v2 != a1[1479] )
      return v2 == a1[1480];
  }
  return v1;
}
