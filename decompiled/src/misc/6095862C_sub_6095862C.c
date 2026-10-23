/* sub_6095862C
 * address: 0x6095862C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095862C(_DWORD *a1, int a2)
{
  int v2; // lr
  int v3; // r2
  int *v4; // r3
  int v5; // t1

  v2 = a1[1];
  if ( v2 )
  {
    v3 = 4 * v2;
    v4 = (int *)a1[3];
    while ( 1 )
    {
      v5 = *v4++;
      if ( v5 == a2 )
        return 0;
      v3 -= 4;
      if ( !v3 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    if ( v2 < a1[2] )
    {
      *(_DWORD *)(a1[3] + 4 * v2) = a2;
      ++a1[1];
    }
    return 1;
  }
}
