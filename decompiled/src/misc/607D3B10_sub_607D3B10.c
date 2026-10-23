/* sub_607D3B10
 * address: 0x607D3B10   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D3B10(int a1)
{
  int v1; // r1
  int v2; // r0
  int v3; // r1

  v1 = FIELD_U32(a1, 1204);
  if ( (v1 & 0x8000000) != 0 )
  {
    v2 = a1 + 11364;
    v3 = 122;
    return PlayerBase_dispatchVirtual3(v2, v3, 0.0);
  }
  if ( (v1 & 0x10000000) != 0 )
    return sub_60794954(a1 + 11364, 69, 0.0, 0.0);
  v2 = a1 + 11364;
  if ( (v1 & 0x40000000) != 0 )
  {
    v3 = 123;
    return PlayerBase_dispatchVirtual3(v2, v3, 0.0);
  }
  return sub_60794954(v2, 5, 0.0, 0.0);
}
