/* sub_601C43E0
 * address: 0x601C43E0   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_601C43E0(int a1, int a2)
{
  if ( (unsigned int)(a2 - 1) <= 9 )
    return (0x327u >> (a2 - 1)) & 1;
  else
    return 0;
}
