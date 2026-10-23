/* sub_605E95E4
 * address: 0x605E95E4   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E95E4(_DWORD *a1)
{
  int result; // r0
  int v3; // r2
  int i; // r3
  int v5; // r4
  int v6; // r4

  result = 1;
  v3 = a1[41];
  if ( v3 )
  {
    for ( i = a1[40]; ; ++i )
    {
      v5 = a1[39];
      if ( i < v5 )
        v5 = 0;
      v6 = *(_DWORD *)(a1[38] - 4 * v5 + 4 * i);
      if ( v6 )
      {
        if ( (FIELD_U8(v6, 6266) & 4) == 0 )
          break;
      }
      if ( !--v3 )
        return result;
    }
    return 0;
  }
  return result;
}
