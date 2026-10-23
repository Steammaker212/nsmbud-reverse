/* sub_606D4728
 * address: 0x606D4728   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D4728(int a1, int a2)
{
  int v2; // r2
  int v3; // r1
  _BYTE *v4; // r0

  if ( a2 == 3 )
  {
    v3 = 6217;
  }
  else
  {
    v2 = 0;
    if ( a2 != 1 )
      return v2;
    v3 = 745;
  }
  v4 = (_BYTE *)(a1 + v3);
  v2 = (unsigned __int8)*v4;
  if ( *v4 )
    return 1;
  return v2;
}
