/* sub_601D99BC
 * address: 0x601D99BC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_601D99BC(int a1, int a2)
{
  if ( (unsigned int)(a2 - 6) <= 0x1A )
    return (0x7B00011u >> (a2 - 6)) & 1;
  else
    return 0;
}
