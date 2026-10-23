/* sub_606F5378
 * address: 0x606F5378   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606F5378(int a1)
{
  _DWORD *v1; // r1
  char v2; // r0

  v1 = *(_DWORD **)(a1 + 7144);
  v2 = 0;
  while ( v1 )
  {
    if ( *v1 )
      v2 |= (unsigned int)*(unsigned __int8 *)(*(_DWORD *)(*v1 + 2196) + 533) - 1 < 4;
    v1 = (_DWORD *)v1[1];
  }
  return v2 & 1;
}
