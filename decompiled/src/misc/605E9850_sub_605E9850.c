/* sub_605E9850
 * address: 0x605E9850   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E9850(_DWORD *a1)
{
  int v2; // r5
  int result; // r0
  int i; // r6
  int v5; // r1
  int v6; // r2
  int v7; // r0

  v2 = a1[41];
  if ( a1[9] )
  {
    if ( v2 )
    {
      result = a1[73];
      if ( result != 3 )
        return result;
      goto LABEL_6;
    }
  }
  else if ( v2 )
  {
LABEL_6:
    for ( i = 0; i != v2; ++i )
    {
      v5 = a1[39];
      v6 = a1[40];
      if ( i + v6 >= v5 )
        v6 -= v5;
      v7 = *(_DWORD *)(a1[38] + 4 * (i + v6));
      if ( FIELD_U32(v7, 6256) == 1 )
        sub_605E1560(v7);
    }
  }
  a1[73] = 4;
  return 4;
}
