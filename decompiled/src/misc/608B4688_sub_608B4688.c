/* sub_608B4688
 * address: 0x608B4688   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B4688(_DWORD *a1, _BYTE *a2, int a3, int a4)
{
  int v4; // r1

  *a1 = a2;
  a1[1] = a4;
  if ( a4 >= 1 )
  {
    *a2 = 0;
    if ( (int)a1[1] >= 2 )
    {
      v4 = 1;
      do
        *(_BYTE *)(*a1 + v4++) = 0;
      while ( v4 < a1[1] );
    }
  }
  return 1;
}
