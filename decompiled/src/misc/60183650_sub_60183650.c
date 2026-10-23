/* sub_60183650
 * address: 0x60183650   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60183650(int a1, unsigned int a2)
{
  if ( a2 >= 0x80 )
    a2 = 0;
  return *(_DWORD *)(a1 + 828 * a2 + 289636);
}
