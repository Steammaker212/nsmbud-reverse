/* sub_606D46F0
 * address: 0x606D46F0   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D46F0(int a1, int a2)
{
  int v2; // r2
  _BYTE *v3; // r0

  if ( a2 == 3 )
  {
    v3 = (_BYTE *)(a1 + 6216);
  }
  else
  {
    v2 = 1;
    if ( a2 != 1 )
      return v2;
    v3 = (_BYTE *)(a1 + 744);
  }
  v2 = (unsigned __int8)*v3;
  if ( *v3 )
    return 1;
  return v2;
}
