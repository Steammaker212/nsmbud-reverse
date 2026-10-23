/* sub_6076CC74
 * address: 0x6076CC74   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6076CC74(int a1, int a2)
{
  if ( (unsigned int)(a2 - 2) <= 6 )
    return (0x7Du >> ((a2 - 2) & 0x7F)) & 1;
  else
    return 0;
}
