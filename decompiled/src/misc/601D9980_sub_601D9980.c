/* sub_601D9980
 * address: 0x601D9980   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_601D9980(int a1, int a2)
{
  if ( (unsigned int)(a2 - 3) <= 0x1E )
    return (0x423E0007u >> (a2 - 3)) & 1;
  else
    return 0;
}
