/* sub_60183070
 * address: 0x60183070   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60183070(int a1, unsigned int a2, int a3)
{
  if ( a2 >= 0x100 )
    a2 = 0;
  return *(_DWORD *)(a1 + 1096 * a2 + 1128) & a3;
}
