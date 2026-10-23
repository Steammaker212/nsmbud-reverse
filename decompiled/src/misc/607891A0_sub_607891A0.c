/* sub_607891A0
 * address: 0x607891A0   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607891A0(_DWORD *a1, int a2)
{
  int v2; // r2
  int v3; // r12
  int v4; // lr
  int i; // r3
  int v6; // r0
  int result; // r0

  v2 = a1[20];
  if ( !v2 )
    return 0;
  v3 = a1[17];
  v4 = a1[18];
  for ( i = a1[19]; ; ++i )
  {
    v6 = v4;
    if ( i < v4 )
      v6 = 0;
    result = *(_DWORD *)(v3 - 4 * v6 + 4 * i);
    if ( result )
    {
      if ( FIELD_S8(result, 84) == a2 )
        break;
    }
    if ( !--v2 )
      return 0;
  }
  return result;
}
