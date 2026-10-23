/* sub_6043619C
 * address: 0x6043619C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6043619C(int a1, int a2)
{
  int v2; // r0

  v2 = *(_DWORD *)(**(_DWORD **)(a1 + 68) + 16);
  if ( v2 )
    return *(_DWORD *)(v2 + 16 * a2 + 32) + 2;
  else
    return 0;
}
